#!/usr/bin/env python3
"""Generate PROGRESS.md with decompilation status per file."""
import re, os

os.chdir(os.path.dirname(os.path.abspath(__file__)) + "/..")

files = {}
for root, dirs, filenames in os.walk("src"):
    for fn in sorted(filenames):
        if not fn.endswith(".c"):
            continue
        path = os.path.join(root, fn)
        rel = os.path.relpath(path, ".")
        asm_count = 0
        c_count = 0
        asm_funcs = []
        c_funcs = []
        for line in open(path):
            m = re.search(r'GLOBAL_ASM\("asm/nonmatchings/([^/]+)/(\w+)\.s"\)', line)
            if m:
                asm_count += 1
                folder, fname = m.group(1), m.group(2)
                apath = f"asm/nonmatchings/{folder}/{fname}.s"
                if os.path.exists(apath):
                    lines = sum(1 for _ in open(apath))
                    asm_funcs.append((fname, lines))
            m2 = re.match(r"^(?:void|s32|u32|f32|u8|s8|s16|u16|struct\w*\s*\*?)\s+(func_\w+)\s*\(", line)
            if m2:
                c_count += 1
                c_funcs.append(m2.group(1))
        total = asm_count + c_count
        if total == 0:
            continue
        pct = c_count * 100 // total
        files[rel] = {
            "asm": asm_count, "c": c_count, "total": total, "pct": pct,
            "asm_funcs": sorted(asm_funcs, key=lambda x: x[1]),
            "c_funcs": c_funcs,
            "name": os.path.basename(path),
        }

by_priority = sorted(files.items(), key=lambda x: (-x[1]["pct"], x[1]["asm"]))
total_asm = sum(v["asm"] for v in files.values())
total_c = sum(v["c"] for v in files.values())
total_all = total_asm + total_c

with open("PROGRESS.md", "w") as f:
    f.write("# Conker's Bad Fur Day - Decompilation Progress\n\n")
    f.write("## Gesamtfortschritt\n\n")
    f.write("| | Anzahl | Anteil |\n|---|--------|--------|\n")
    f.write(f"| Decompilierte Funktionen | {total_c} | {total_c*100//total_all}% |\n")
    f.write(f"| Offene GLOBAL_ASM | {total_asm} | {total_asm*100//total_all}% |\n")
    f.write(f"| **Gesamt** | **{total_all}** | |\n\n")

    f.write("## Was bedeutet decompilieren?\n\n")
    f.write("Jede Funktion im Spiel liegt als kompilierter MIPS-Assembler vor.\n")
    f.write("Decompilieren = den Assembler in C-Code uebersetzen, der byte-identischen Maschinencode erzeugt.\n\n")
    f.write("Wir arbeiten **dateiweise**. Jede `.c`-Datei entspricht einer Original-Quelldatei des Spiels.\n")
    f.write("Eine Datei ist fertig wenn alle `GLOBAL_ASM` durch matchenden C-Code ersetzt sind.\n\n")

    f.write("## Workflow\n\n")
    f.write("```\n")
    f.write("1. m2c Startpunkt:   python3 tools/auto_decomp.py FUNC --dry-run\n")
    f.write("2. Code einfuegen:   GLOBAL_ASM in src/DATEI.c ersetzen\n")
    f.write("3. Kompilieren:      make CROSS=mips64-linux-gnu-\n")
    f.write("4. Diff pruefen:     python3 ../tools/asm-differ/diff.py -mw FUNC\n")
    f.write("5. Iterieren bis OK\n")
    f.write("```\n\n")

    # Almost done
    f.write("## Fast fertig (1-3 Funktionen offen)\n\n")
    f.write("| Datei | Offen | Fertig | % |\n|-------|-------|--------|---|\n")
    for path, info in by_priority:
        if 1 <= info["asm"] <= 3:
            f.write(f"| `{info['name']}` | {info['asm']} | {info['c']} | {info['pct']}% |\n")

    f.write("\n## In Arbeit (4-15 offen)\n\n")
    f.write("| Datei | Offen | Fertig | % |\n|-------|-------|--------|---|\n")
    for path, info in by_priority:
        if 4 <= info["asm"] <= 15:
            f.write(f"| `{info['name']}` | {info['asm']} | {info['c']} | {info['pct']}% |\n")

    f.write("\n## Grosse Dateien (16+ offen)\n\n")
    f.write("| Datei | Offen | Fertig | % |\n|-------|-------|--------|---|\n")
    for path, info in by_priority:
        if info["asm"] >= 16:
            f.write(f"| `{info['name']}` | {info['asm']} | {info['c']} | {info['pct']}% |\n")

    done = [info["name"] for _, info in by_priority if info["asm"] == 0]
    f.write(f"\n## Komplett fertig ({len(done)} Dateien)\n\n")
    for d in done:
        f.write(f"- `{d}`\n")

    # Detail
    f.write("\n---\n\n## Detail: Offene Funktionen\n\n")
    for path, info in by_priority:
        if info["asm"] == 0:
            continue
        f.write(f"### `{info['name']}` ({info['asm']} offen, {info['pct']}%)\n\n")
        if info["asm_funcs"]:
            f.write("| Funktion | ASM-Zeilen | Schwierigkeit |\n|----------|-----------|---------------|\n")
            for fname, lines in info["asm_funcs"]:
                diff = "Trivial" if lines <= 20 else "Einfach" if lines <= 50 else "Mittel" if lines <= 100 else "Schwer" if lines <= 200 else "Sehr schwer"
                f.write(f"| `{fname}` | {lines} | {diff} |\n")
        f.write("\n")

print(f"PROGRESS.md: {total_c} decompiliert, {total_asm} offen, {len(done)} Dateien fertig")
