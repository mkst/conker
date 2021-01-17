#include <ultra64.h>

#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/game_476D0/func_1501A220.s")
// NON-MATCHING: 80% there
// void func_1501A220(s32 arg0, s32 arg1) {
//     s32 phi_s0;
//     s32 i;
//
//     f32 temp_f0;
//     s32 temp_f16;
//
//     D_80082FA0 = arg0;
//
//     if (arg0 == 0) {
//         phi_s0 = 1;
//     } else {
//         phi_s0 = arg0 + 2;
//     }
//     D_800BE628 = malloc((phi_s0 * 3) << 7, 1, 1, 0);
//     D_800BE62C = malloc(phi_s0 * 16, 1, 1, 0);
//     if (D_80082FA0 == 1) {
//         temp_f0 = D_800BE63C - 2.0f;
//         temp_f16 = temp_f0 * D_800968E0;
//         phi_s0 = temp_f16 & 3;
//         if ((temp_f16 < 0) && ((temp_f16 & 3) != 0)) {
//             phi_s0 -= 4;
//         }
//         D_800BE6B8 = (temp_f16 - phi_s0) / temp_f0;
//     }
//
//     func_150006E0(D_800BE9F0);
//
//     for(i = 0; i <= D_80082FA0; i++) {
//         func_1501A8C0(i, D_80082FA0, 1023, 0);
//     }
//     if (D_80082FA0 != 0) {
//         func_1501A8C0(i, 0, 1023, 0);
//     }
//
//     D_800BE617 = 1;
//     D_800BE614 = 1;
//     D_800BE635 = 0;
//     func_1510B070(arg1);
// }


#pragma GLOBAL_ASM("asm/nonmatchings/game_476D0/func_1501A39C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_476D0/func_1501A490.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_476D0/func_1501A680.s")
// NON-MATCHING: ???
// struct189 *func_1501A680(struct189 *arg0) {
//     arg0->unk0 = ((D_800BE620 - 1) & 0xFFF) | 0xFF100000;
//     arg0->unk4 = *(&D_8002AAE8[D_800BE9C0]);
//     return &arg0->unk8;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/game_476D0/func_1501A6CC.s")
// NON-MATCHING: 80%
// struct189 *func_1501A6CC(struct189 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
//     struct189 *temp_a0;
//     s32 tmp;
//
//     if (arg1 < 3) {
//         arg1 = 2;
//     }
//     tmp = arg2;
//     if (arg2 <= 0) {
//         tmp = 0;
//     }
//
//     temp_a0 = arg0;
//
//     if (arg3 >= (D_800BE620 - 2)) {
//         arg3 = D_800BE620 - 2;
//     }
//
//     if (arg4 >= D_800BE624) {
//         arg4 = D_800BE624;
//     }
//     arg0 = temp_a0->unk8;
//     temp_a0->unk4 = ((arg1 & 0x3FF) << 14) | ((tmp & 0x3FF) << 2);
//     temp_a0->unk0 = ((arg3 & 0x3FF) << 14) | ((arg4 & 0x3FF) << 2) | 0xF6000000;
//     return arg0;
// }

void func_150A7A00(f32 arg0, f32 arg1, s32 arg2, f32 arg3, f32 arg4, f32 arg5, f32* arg6, f32* arg7, f32* arg8, f32* arg9);
#pragma GLOBAL_ASM("asm/nonmatchings/game_476D0/func_1501A764.s")
// void func_1501A764(s16 arg0, f32 arg1, f32 arg2, f32 arg3, f32 *arg4, f32 *arg5, f32 *arg6) {
//     f32 sp34;
//     f32 sp30;
//     f32 sp2C;
//     f32 sp28;
//     struct140 *temp_v0_2;
//
//     func_150A7A00(arg1, arg2, &D_800D9D10 + (arg0 << 6), arg1, arg2, arg3, &sp34, &sp30, &sp2C, &sp28);
//     sp28 = 1.0f / sp28;
//     // temp_v1 = arg0 * 0x180;
//     temp_v0_2 = &D_800BE628[arg0];
//     // sp28 = temp_f8;
//     *arg4 = (((temp_v0_2->unkC + 5.0f) * sp34 * sp28) + temp_v0_2->unk34);
//     temp_v0_2 = &D_800BE628 [arg0];
//     *arg5 = (temp_v0_2->unk38 - ((temp_v0_2->unk10 + 5.0f) * sp30 * sp28));
//     temp_v0_2 = &D_800BE628[arg0].unk50[D_800BE9C0];  // (D_800BE9C0 * 0x10);
//     *arg6 = (((f32) temp_v0_2->unk4C + (sp2C * sp28 * (f32) temp_v0_2->unk44)) * 32.0f);
// }

#pragma GLOBAL_ASM("asm/nonmatchings/game_476D0/func_1501A8C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_476D0/func_1501AE94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_476D0/func_1501AF44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_476D0/func_1501B0A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_476D0/func_1501B22C.s")
