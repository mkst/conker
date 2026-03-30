#!/usr/bin/env python3
"""
Score and rank remaining GLOBAL_ASM functions by estimated decompilation difficulty.

Usage: python3 tools/score_functions.py src/game_161520.c
"""

import argparse
import os
import re
import sys
from collections import Counter
from pathlib import Path

# Instruction categories
BRANCH_INSTRS = {
    "beq", "bne", "beqz", "bnez", "bgtz", "bgez", "bltz", "blez",
    "bgezal", "bltzal", "bgezl", "bltzl", "beql", "bnel", "bgtzl", "blezl",
    "bc1t", "bc1f", "bc1tl", "bc1fl",
}
FLOAT_INSTRS = {
    "mtc1", "mfc1", "lwc1", "swc1", "ldc1", "sdc1",
    "add.s", "sub.s", "mul.s", "div.s", "neg.s", "abs.s", "sqrt.s",
    "mov.s", "cvt.s.w", "cvt.w.s", "cvt.s.d", "cvt.d.s", "cvt.d.w", "cvt.w.d",
    "add.d", "sub.d", "mul.d", "div.d", "neg.d", "abs.d", "sqrt.d", "mov.d",
    "c.lt.s", "c.le.s", "c.eq.s", "c.lt.d", "c.le.d", "c.eq.d",
    "trunc.w.s", "trunc.w.d", "round.w.s", "ceil.w.s", "floor.w.s",
}
MULDIV_INSTRS = {"mult", "multu", "div", "divu", "dmult", "dmultu", "ddiv", "ddivu"}

# Regex to extract the mnemonic from an asm line like:
#   /* 161520 15134070 90820004 */  lbu        $v0, 0x4($a0)
RE_INSTR = re.compile(r"/\*[^*]*\*/\s+(\S+)")
# Memory offset pattern: 0x1234($reg) or decimal($reg)
RE_MEM_OFFSET = re.compile(r"(-?0x[0-9a-fA-F]+|-?\d+)\(\$\w+\)")
# GLOBAL_ASM pragma
RE_GLOBAL_ASM = re.compile(r'#pragma\s+GLOBAL_ASM\("([^"]+)"\)')


def parse_asm_file(filepath):
    """Parse a .s assembly file and return analysis metrics."""
    if not os.path.isfile(filepath):
        return None

    with open(filepath, "r") as f:
        lines = f.readlines()

    instr_count = 0
    branch_count = 0
    call_count = 0
    float_ops = 0
    muldiv_ops = 0
    has_jump_table = False
    mem_offsets = set()
    instr_sequence = []  # for similarity matching

    for line in lines:
        stripped = line.strip()

        # Check for jump table references
        if "jtbl_" in stripped or "jtbl " in stripped:
            has_jump_table = True
        if re.match(r"\s*glabel\s+\.L\w+_game_data", stripped):
            has_jump_table = True

        # Parse instruction lines
        m = RE_INSTR.search(stripped)
        if not m:
            continue

        mnemonic = m.group(1).lower()

        # Skip pseudo-labels (glabel, .L*, etc.)
        if mnemonic in ("glabel", ".text", ".set", ".balign", ".type", ".size",
                        ".globl", ".ent", ".end", ".word", ".space"):
            continue
        if mnemonic.startswith("."):
            continue

        instr_count += 1
        instr_sequence.append(mnemonic)

        if mnemonic in BRANCH_INSTRS:
            branch_count += 1
        if mnemonic == "jal":
            call_count += 1
        if mnemonic in FLOAT_INSTRS:
            float_ops += 1
        if mnemonic in MULDIV_INSTRS:
            muldiv_ops += 1

        # Collect memory offsets
        for off_match in RE_MEM_OFFSET.finditer(stripped):
            mem_offsets.add(off_match.group(1))

    return {
        "instr_count": instr_count,
        "branch_count": branch_count,
        "call_count": call_count,
        "float_ops": float_ops,
        "muldiv_ops": muldiv_ops,
        "has_jump_table": has_jump_table,
        "unique_offsets": len(mem_offsets),
        "instr_sequence": instr_sequence,
    }


def compute_score(metrics):
    """
    Compute difficulty score. Lower = easier to decompile.

    Weights tuned for N64 MIPS decompilation experience:
    - Base is instruction count (dominant factor)
    - Branches add control flow complexity
    - Jump tables are a major difficulty spike
    - Function calls add interface complexity
    - Float/muldiv add type complexity
    - Many unique offsets suggest complex structs
    """
    score = 0.0
    score += metrics["instr_count"] * 1.0
    score += metrics["branch_count"] * 3.0
    score += metrics["call_count"] * 2.0
    score += metrics["float_ops"] * 1.5
    score += metrics["muldiv_ops"] * 2.0
    score += metrics["unique_offsets"] * 1.0
    if metrics["has_jump_table"]:
        score += 80.0
    return score


def find_decompiled_functions(source_file):
    """
    Find functions in the source file that are NOT behind GLOBAL_ASM pragmas,
    meaning they have already been decompiled. Return their instruction sequences
    from corresponding .s files (if they still exist).
    """
    # This is a best-effort approach: we look for function definitions in the
    # source that are not GLOBAL_ASM. We cannot easily get asm for these, but
    # we collect names for reference.
    decompiled = []
    with open(source_file, "r") as f:
        content = f.read()

    # Find all C function definitions (rough heuristic)
    for m in re.finditer(r"^(?:(?:s32|u32|void|f32|s16|u16|s8|u8|struct\w*)\s*\*?\s+)?(func_[0-9a-fA-F]+)\s*\(", content, re.MULTILINE):
        fname = m.group(1)
        # Check it's not inside a GLOBAL_ASM pragma
        # Find the line number
        pos = m.start()
        preceding = content[:pos]
        lines_before = preceding.split("\n")
        line_idx = len(lines_before)
        # Check if the previous non-empty line is a GLOBAL_ASM
        is_global_asm = False
        for i in range(line_idx - 1, max(line_idx - 3, -1), -1):
            if i >= 0 and i < len(lines_before):
                l = lines_before[i].strip()
                if l and "GLOBAL_ASM" in l:
                    is_global_asm = True
                    break
        if not is_global_asm:
            decompiled.append(fname)

    return decompiled


def similarity(seq_a, seq_b):
    """
    Compute a rough similarity score between two instruction sequences
    using instruction frequency distribution (cosine-like).
    Returns a value between 0.0 and 1.0.
    """
    if not seq_a or not seq_b:
        return 0.0

    counter_a = Counter(seq_a)
    counter_b = Counter(seq_b)

    all_keys = set(counter_a) | set(counter_b)
    dot = sum(counter_a.get(k, 0) * counter_b.get(k, 0) for k in all_keys)
    mag_a = sum(v * v for v in counter_a.values()) ** 0.5
    mag_b = sum(v * v for v in counter_b.values()) ** 0.5

    if mag_a == 0 or mag_b == 0:
        return 0.0
    return dot / (mag_a * mag_b)


def main():
    parser = argparse.ArgumentParser(
        description="Score and rank GLOBAL_ASM functions by decompilation difficulty."
    )
    parser.add_argument(
        "source_file",
        help="Path to a .c source file (e.g. src/game_161520.c)",
    )
    parser.add_argument(
        "--top", "-n",
        type=int,
        default=0,
        help="Show only top N easiest functions (0 = show all)",
    )
    parser.add_argument(
        "--sort",
        choices=["score", "instrs", "branches", "calls"],
        default="score",
        help="Sort column (default: score)",
    )
    parser.add_argument(
        "--reverse",
        action="store_true",
        help="Reverse sort order (show hardest first)",
    )
    args = parser.parse_args()

    # Resolve paths relative to project root
    script_dir = Path(__file__).resolve().parent
    project_root = script_dir.parent  # conker/
    source_path = Path(args.source_file)
    if not source_path.is_absolute():
        source_path = project_root / source_path

    if not source_path.is_file():
        print(f"Error: source file not found: {source_path}", file=sys.stderr)
        sys.exit(1)

    # Read source file and find GLOBAL_ASM pragmas
    with open(source_path, "r") as f:
        source_content = f.read()

    asm_refs = RE_GLOBAL_ASM.findall(source_content)
    if not asm_refs:
        print("No #pragma GLOBAL_ASM found in this file.")
        sys.exit(0)

    # Analyze each function
    results = []
    for asm_path_str in asm_refs:
        asm_path = project_root / asm_path_str
        func_name = Path(asm_path_str).stem

        metrics = parse_asm_file(asm_path)
        if metrics is None:
            print(f"  Warning: ASM file not found: {asm_path}", file=sys.stderr)
            continue

        score = compute_score(metrics)
        results.append({
            "name": func_name,
            "score": score,
            **metrics,
        })

    if not results:
        print("No ASM files found to analyze.")
        sys.exit(0)

    # Sort
    sort_key = {
        "score": "score",
        "instrs": "instr_count",
        "branches": "branch_count",
        "calls": "call_count",
    }[args.sort]
    results.sort(key=lambda r: r[sort_key], reverse=args.reverse)

    if args.top > 0:
        results = results[:args.top]

    # Find already decompiled functions for similarity comparison
    decompiled_names = find_decompiled_functions(source_path)
    basename = source_path.stem
    asm_dir = project_root / "asm" / "nonmatchings" / basename

    # Load decompiled function asm sequences (if .s files still exist)
    decompiled_sequences = {}
    for dname in decompiled_names:
        dpath = asm_dir / f"{dname}.s"
        if dpath.is_file():
            dmetrics = parse_asm_file(dpath)
            if dmetrics and dmetrics["instr_sequence"]:
                decompiled_sequences[dname] = dmetrics["instr_sequence"]

    # Print header
    total_global_asm = len(RE_GLOBAL_ASM.findall(source_content))
    total_funcs = total_global_asm + len(decompiled_names)
    print(f"\nFile: {source_path.name}")
    print(f"Functions: {len(decompiled_names)} decompiled, {total_global_asm} remaining, {total_funcs} total")
    print()

    # Table header
    hdr_name = "Function"
    hdr_instr = "Instrs"
    hdr_branch = "Branch"
    hdr_calls = "Calls"
    hdr_float = "Float"
    hdr_jtbl = "JTbl"
    hdr_offsets = "Offsets"
    hdr_score = "Score"
    hdr_similar = "Similar To"

    name_width = max(len(hdr_name), max(len(r["name"]) for r in results))
    sim_width = 20

    fmt = (
        f"  {{:<{name_width}}}  {{:>6}}  {{:>6}}  {{:>5}}  {{:>5}}  {{:>4}}  {{:>7}}  {{:>7}}"
    )
    fmt_sim = fmt + f"  {{:<{sim_width}}}"

    header = fmt_sim.format(
        hdr_name, hdr_instr, hdr_branch, hdr_calls, hdr_float, hdr_jtbl, hdr_offsets, hdr_score, hdr_similar
    )
    print(header)
    print("  " + "-" * (len(header) - 2))

    for r in results:
        # Find most similar decompiled function
        best_sim = ""
        best_sim_val = 0.0
        for dname, dseq in decompiled_sequences.items():
            sim = similarity(r["instr_sequence"], dseq)
            if sim > best_sim_val:
                best_sim_val = sim
                best_sim = dname

        sim_str = ""
        if best_sim_val >= 0.85:
            sim_str = f"{best_sim} ({best_sim_val:.0%})"

        jtbl_str = "Y" if r["has_jump_table"] else ""

        line = fmt_sim.format(
            r["name"],
            r["instr_count"],
            r["branch_count"],
            r["call_count"],
            r["float_ops"],
            jtbl_str,
            r["unique_offsets"],
            f"{r['score']:.0f}",
            sim_str,
        )
        print(line)

    # Print summary
    print()
    scores = [r["score"] for r in results]
    easy = sum(1 for s in scores if s < 50)
    medium = sum(1 for s in scores if 50 <= s < 200)
    hard = sum(1 for s in scores if s >= 200)
    print(f"  Difficulty breakdown: {easy} easy (<50), {medium} medium (50-200), {hard} hard (>200)")
    if results:
        print(f"  Easiest: {results[0]['name']} (score {results[0]['score']:.0f})")
    print()


if __name__ == "__main__":
    main()
