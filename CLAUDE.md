# CLAUDE.md

See **[AGENTS.md](AGENTS.md)** for the full agent onboarding guide.

TL;DR: this is a **byte-perfect matching decompilation** of Conker (N64, IDO 5.3). Convert
`#pragma GLOBAL_ASM(...)` stubs into C that compiles to identical bytes (asm-differ score **0**).
A function stays live **only** if it scores 0; otherwise keep the pragma. The single authoritative
check is the full ROM sha1: `rm -rf conker/build/src && make -C conker VERSION=us` must produce
`842e3d348e3c8ae0039e2ab367ad492f9b5266d8`. Never leave a non-matching function as live C — it shifts
the whole ROM. Read AGENTS.md for the scoring workflow, verification protocol, IDO matching techniques,
and the permuter guidance.
