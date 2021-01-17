#include <ultra64.h>

#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/game_3F820/func_15012370.s")
// void func_151EF954(s32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7);
//
// void func_15012370(void) {
//     f32 temp_f0;
//     f32 temp_f2;
//     f32 tmp;
//     u8 phi_s0;
//
//     tmp = D_80096560;
//
//     for (phi_s0 = 0; phi_s0 <= D_80082FA0; phi_s0++)  {
//         temp_f0 = D_800BE628[phi_s0].unk4 * 0.5f;
//         temp_f2 = D_800BE628[phi_s0].unk8 * 0.5f;
//         func_151EF954(&D_800DCC10[phi_s0], -temp_f0, temp_f0, -temp_f2, temp_f2, 1.0f, tmp, 1.0f);
//     }
//
// }

void func_15012470(void) {
    D_80088750 = func_1518AADC(4, 300, 0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_3F820/func_150124A0.s")
