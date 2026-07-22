#include <ultra64.h>

#include "functions.h"
#include "variables.h"

// 36-byte struct passed by value straight through to func_150AAD98.
typedef struct {
    s32 unk00[9];
} Arg36;

void func_150AAD98(Arg36);

void func_15049260(Arg36 arg0) {
    func_150AAD98(arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_76710/func_150492CC.s")
// Best attempt: score 10. Every instruction encoding matches except the final store's
// relocation. The expected object (built from splat's asm, which never learned the name
// D_800CC23C) relocates it as %hi/%lo(D_800CC238) with an in-place addend of 4 -> e4280004.
// Writing the true symbol D_800CC23C emits %hi/%lo(D_800CC23C) with addend 0 -> e4280000,
// which resolves to the identical address after linking but differs at the .o level.
// Using (&D_800CC238)[1] (or an f32[2] array decl) does produce the +4 addend, but IDO then
// CSEs the base address across both stores into lui/addiu v0, which is a much bigger diff.
// D_80099080 is an external float constant, present only in undefined_syms_auto.txt.
//
// extern f32 D_80099080;
//
// void func_150492CC(f32 arg0, f32 arg1, f32 arg2) {
//     D_800CC220 = arg0;
//     D_800CC224 = arg1;
//     D_800CC228 = arg2;
//     D_800CC22C = arg0 / 2;
//     D_800CC230 = arg1 / 2;
//     D_800CC234 = arg2 / 2;
//
//     if (arg0 == 0.0f) {
//         arg0 = D_80099080;
//     }
//
//     D_800CC238 = arg1 / arg0;
//     D_800CC23C = arg2 / arg0;
// }

// too many temp vars
// Plane-from-3-points: N = (P-Q)x(P-R), d = N.P -> D_800CC210..21C.
// 9 float args arrive in integer regs (a0-a3 + stack), reinterpreted via *(f32*)&aN.
// Algorithm + ABI reconstructed (score ~3256) but IDO uses mtc1 register-reinterprets
// for py/pz and a different spill schedule than the memory-only target. PERMUTER CANDIDATE.
#pragma GLOBAL_ASM("asm/nonmatchings/game_76710/func_15049350.s")
