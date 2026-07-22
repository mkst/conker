#include <ultra64.h>
#include "functions.h"
#include "variables.h"

extern u8 D_800D9950[3];

struct26 *func_151149AC(u32);

void func_150104F0(void) {
    D_800D9950[0] = D_800D9950[1] = D_800D9950[2] = 0;
    func_151149AC(0xF6)->unk7C = 2.0f;
    D_80088980 = 0;
}

void func_15010538(struct127 *arg0) {
    struct175 tmp;
    struct37 *temp_v0;

    func_15161E24(arg0, 2, 2, 300, 30, 100, 200, 255, 255, 1);
// FAKEMATCH but works...
dummy_label_927029:
    tmp.unk0 = arg0;
    tmp.unk4 = arg0->unique_id;
    tmp.unk6 = 0;
    tmp.unk8 = 0;
    tmp.unkA = 0;

    temp_v0 = func_15149130(300, -1, 80, -1, 0, 61, 12, 255, 1);
    if (temp_v0 != NULL) {
        memcpy(&temp_v0->unk28, &tmp, 12); // memcpy
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_3D9A0/func_15010600.s")
// NON-MATCHING: best score 70. The whole unrolled loop body, all six scalar
// stores and their order, and every register assignment match exactly; only
// two instructions differ, and both are artifacts of splat having split what
// was originally a single pair of 14-byte arrays into seven separate symbols:
//   1. the loop limit is emitted as reloc D_800D993A+0xc, but the expected
//      object (assembled from the .s) has reloc D_800D9946+0. These resolve to
//      the same linked address, but the addend changes the addiu's raw bytes.
//      Getting a zero addend requires the array base to be D_800D9946 itself,
//      which then breaks the loop base (tried: score 95).
//   2. "sb zero,%lo(D_800D9939)(at)" schedules before the three loop-setup
//      addiu's instead of after them. In the original this store is the second
//      peeled iteration of a 14-trip loop (14 = 2 + 3*4), emitted after the
//      induction-variable init; it cannot be reproduced from standalone scalar
//      stores, and a real peel would reintroduce non-zero addends.
// A true match needs D_800D9928/9929/992A and D_800D9938/9939/993A/9946 merged
// into two u8[14] arrays in variables.h + undefined_syms, which is out of scope.
//
// void func_15010600(void) {
//     s32 i;
//
//     D_800D9921 = 0;
//     D_800D9920 = 0;
//     D_800D9928 = 0;
//     D_800D9938 = 0;
//     D_800D9929 = 0;
//     D_800D9939 = 0;
//     for (i = 0; i < 12; i++) {
//         D_800D993A[i] = D_800D992A[i] = 0;
//     }
// }
