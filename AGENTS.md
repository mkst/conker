# AGENTS.md — Conker matching decompilation

This file is for AI coding agents (and humans) picking up work on this repo. It tells you exactly how
to make **byte-perfect** progress without breaking the build. Read it fully before writing any code.
(Cursor, Claude Code, Aider, and other agents auto-discover `AGENTS.md`.)

## What this project is

A **matching decompilation** of *Conker's Bad Fur Day* (N64). The goal is C source that the original
compiler reproduces **bit-for-bit**, so the build reassembles the exact retail ROM.

- Compiler: **IDO 5.3** (shipped in `ido/`), invoked by the Makefiles. Default flags `-O2 -g3 -mips2 -o32`.
- Primary target: **US** ROM. A correct build produces `conker/build/conker.us.bin` with
  **sha1 `842e3d348e3c8ae0039e2ab367ad492f9b5266d8`**.
- The ROM is assembled from two kinds of function: **live C** (already matched) and
  **`#pragma GLOBAL_ASM("asm/nonmatchings/<TU>/<func>.s")`** stubs (the original assembly, for
  everything not yet matched). Your job is to convert stubs into live C.

## THE PRIME DIRECTIVE — never violate

1. The build must stay **byte-perfect**. After your changes, `make -C conker VERSION=us` must still end
   with the sha1 check passing (`842e3d34…`).
2. A function may be **live C only if it compiles to bytes identical to the original** — asm-differ
   score **0** in object mode. Anything else stays a `#pragma GLOBAL_ASM(...)` line.
3. **Never leave a non-matching function as live C.** A function that is even one instruction off
   changes its size and **shifts every following function in the ROM**, breaking the whole build. If
   you cannot reach score 0, **revert to the exact pragma line**. A reverted pragma is always correct;
   a wrong live function is a landmine.

## Environment & build

- Use **Docker** (recommended) or **Ubuntu 20.04/22.04** (WSL on Windows). See `README.md` / `Dockerfile`.
- One-time extract of asm/assets from the base ROM: `make -C conker extract` (needs `baserom.us.z64`).
- Full build + verify: `make -C conker VERSION=us` — it links the ROM and checks the sha1. Exit 0 = good.

## How to match a function

1. Pick a `#pragma GLOBAL_ASM("asm/nonmatchings/<TU>/<func>.s")` line in a `conker/src/*.c` file.
   **Start small** — each `.s` begins with `# nonmatching <func>, 0xSIZE`; size ÷ 4 = instruction count.
2. Read the target `.s`. Identify: args (`a0–a3` / `f12,f14` / stack), return (`v0` / `f0`), locals,
   struct field offsets, calls, global/static refs, loops and branch shapes.
3. Write the C. Structs live in `conker/include/structs.h` (field offsets in `/* 0xNN */` comments);
   functions/externs in `conker/include/functions.h` and `conker/include/variables.h`. **If a header's
   declared type or offset is wrong for your function, use a file-local `typedef`/cast inside your `.c`
   rather than editing the shared header** — a header change can silently regress other files.
4. Replace the pragma with your function, rebuild just that object, and score it (below).
5. **Score 0** → keep it live and **delete the pragma line** (do not wrap it in `#if 0`). **Not 0** →
   read the diff and iterate (see techniques). Genuinely stuck → revert to the exact pragma line;
   optionally leave your best reconstruction in a `//` comment with `// NON-MATCHING: best <N>`.

## Scoring — asm-differ object mode

- Rebuild only your object: `make -C conker VERSION=us build/src/<TU>.c.o`.
  - **Gotcha (WSL/`/mnt`):** coarse filesystem mtimes can make `make` skip the rebuild and score a
    **stale object** (false pass). Force it: `rm -f conker/build/src/<TU>.c.o conker/build/src/<TU>.c`
    before the make.
- Score with asm-differ in **object mode** (`-o`), e.g. from the repo root:
  `python3 tools/asm-differ/diff.py -o -f conker/build/src/<TU>.c.o --format json <func>` → read
  `current_score`; **0 = byte-perfect**.
- **Scores are cumulative to the end of the object.** A non-matching live function bleeds its diff
  backward into earlier functions' scores. This is why rule 3 exists: keep every non-match a pragma so
  scores stay isolated and honest.

## The verification protocol — the only real proof

Per-function scores compare your object against a reference (`expected/`). That reference is only
trustworthy if it was built from a byte-perfect state. **The single authoritative check is the full
ROM sha1.**

- After any batch of matches: **full clean build** — `rm -rf conker/build/src && make -C conker
  VERSION=us` — and confirm the sha1 is `842e3d34…`.
- If it is wrong, some live function is non-matching. Localize it: `cmp -l conker/build/conker.us.bin
  baserom.us.z64`-style diff of build vs base gives the first differing offset; or use the linker map
  (`conker/build/conker.us.map`) — a function placed at an address different from the one encoded in
  its `func_<VRAM>` name is right after the culprit. Revert the offending function to its pragma.
- **Never seed `expected/` from a working object mid-match** — if you seed while a function is broken,
  its audit compares broken-vs-broken and falsely reports 0. Seed `expected/` only from a verified
  byte-perfect build.

## IDO 5.3 matching techniques (high-leverage)

- **Branch polarity** is source-controlled: which of `beq/bne`, `beql/bnel`, `bc1t/bc1f` IDO emits
  depends on how you write the condition. A lone diff on a branch with everything after shifted →
  **invert the `if` and swap the two blocks** (same behavior, opposite opcode). `bnel/beql`
  (branch-likely, value in the delay slot) usually = an if that reassigns one var then returns/uses it.
- **Commutative operand order matters:** `a*b` vs `b*a`, `a+b` vs `b+a` change temp-register rotation.
  `(p+i)[N]` emits base-first; `i[p+N]` emits index-first.
- **Fresh vs reused temp register:** if the target puts a result in a fresh reg but you reuse one,
  split the expression into its own statement/local (inlining an expression into its use encourages reuse).
- **Don't put a branch between a value's load and its reuse** if the target keeps it in a register:
  `if (x.f == V) { …use x.f… }` keeps it live; `if (x.f != V) continue; …use x.f…` reloads it.
- **`-g3` stack/debug slots:** a *named* local (especially an address-taken one) reserves a debug stack
  slot; this both sizes the frame and can change codegen. Reverse-declaration-order controls slot
  addresses (last-declared local → lowest offset). Inlining a call/expression avoids a slot; naming a
  temp adds one. This is often the difference between a thousands-score miss and a clean 0 for floats.
- **Casts at call sites:** pass `(u8)x` (the callee's declared param type), not `x & 0xFF`.
- **Signedness** of a struct field controls `lb/lbu`, `lh/lhu`, `sra/srl`; division by a power of two on
  a signed value emits an extra `sra`+add, on unsigned a plain `srl`. Read fields once to keep them in a reg.
- **Per-file build flags — check first!** Default is `-O2 -g3`, but some files are overridden in
  `conker/Makefile` (e.g. `libultra/audio/*` and some `init_*` at `-g`; several `libultra/io/*` and
  `libultra/os/getthreadpri` at `-O1`). Tell-tale of a wrong flag: careful `-O2` reconstructions all
  score in the thousands with params homed to the stack & reloaded, no branch-likely, no const folding →
  the file is `-g` (or `-O1`). Add the `OPT_FLAGS` override, then re-score.

## Near-misses and the permuter

A "near-miss" is structurally exact (every instruction matches) but off by register allocation or
scheduling. Hand-reduce as far as you can, then use **decomp-permuter**
(`github.com/simonlindholm/decomp-permuter`, IDO mode) to search equivalent C phrasings that flip IDO's
register/schedule choice.

- **The permuter's scorer normalizes stack-frame/spill-offset differences** → it can report a **false
  zero**. A permuter "zero" is a *candidate*; always confirm with asm-differ (which does not normalize)
  and the full ROM sha1 before keeping it.
- The permuter **cannot** crack pure frame-size/spill/delay-slot diffs (it is blind to them) or a single
  register coin-flip with no structural handle. It **excels** when there's a handle: operand order, a
  cached-pointer local, block-scoping a loop temp, retyping a local (`s32`→`u16`), an unreferenced
  `dummy_label:;` as a code-motion barrier, or a compound-assign form (`*=`, `(x<<10)<<14`).
- Seed the permuter from your best hand-reduced form, and **chain** it (copy the best `output-*/source.c`
  back to `base.c`, re-run) to escape plateaus.

## Things that are NOT matchable in this setup (leave as pragma)

- **Handwritten assembly** using MIPS III / 64-bit ops (`daddiu`, `sd`, `dsll32`, `dsra32`) or hand-tuned
  sequences the `-mips2 -o32` compiler cannot emit (e.g. some matrix setters, TLB/coprocessor code).
- **Dense `switch` jump tables** whose `jtbl_*` lives in a separate rodata blob (migrating it is fiddly
  rodata surgery; only attempt with a full re-verify).
- Functions blocked by inaccurate symbol tables (absolute-constant symbols that trigger loop unrolling).

## Contributing

- **Byte-perfect only.** Run the full clean build + sha1 check before you submit anything.
- Keep PRs **small and focused** (per-file or per-area). Don't bundle tooling/env/Docker churn with
  function matches. Header additions (new `extern`/prototype lines) are fine; destructive header edits
  are not.
- Don't commit secrets, API keys, or bot/agent config files.

## Quick reference

```
make -C conker extract                                  # one-time: split base ROM -> asm/assets
make -C conker VERSION=us build/src/<TU>.c.o            # rebuild one object (rm -f it first to force)
python3 tools/asm-differ/diff.py -o -f conker/build/src/<TU>.c.o --format json <func>   # score; 0 = match
rm -rf conker/build/src && make -C conker VERSION=us   # full clean build + sha1 gate (the real check)
```
