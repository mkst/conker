#include <ultra64.h>

#include "functions.h"
#include "variables.h"

#pragma GLOBAL_ASM("asm/nonmatchings/code_1E530/func_8001E530.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1E530/func_8001ED6C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1E530/func_8001F28C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1E530/func_8001F5A4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1E530/func_8001F79C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1E530/func_8001F978.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1E530/func_8001FA78.s")
// NON-MATCHING: handful of differences

// f32 func_8001FA78(struct6 *arg0, s32 arg1) {
//     f32 sp4[2];
//
//     arg0->unk14 = (f32) (arg0->unk14 + (arg0->unk10 * (f32) arg1));
//     if (2.0f < arg0->unk14) {
//         arg0->unk14 = (f32) (arg0->unk14 - 4.0f);
//     } else {
//         arg0->unk14 = (f32) arg0->unk14;
//     }
//     sp4[0] = arg0->unk14;
//     if (sp4[0] < 0.0f) {
//         sp4[0] = -sp4[0];
//     }
//     sp4[0] = sp4[0] - 1.0f;
//     return arg0->unk18 * sp4[0];
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_1E530/func_8001FB40.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1E530/func_8001FFE0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1E530/func_8001FFF4.s")
// void func_8001FFF4(void) {
//
// }
