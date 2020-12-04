#include <ultra64.h>

#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_85122AE0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_85122C5C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_85123070.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_8512317C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_85123508.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_85123568.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_851236D0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_85123934.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_851239CC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_85123A54.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_85124770.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_851247C0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_85124AB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_85124B18.s")
// f32 func_85124B18(struct108 *arg0) {
//     s32 temp_t8;
//     void *temp_v0;
//
//     if (arg0->unk1B4 == 0) {
//         arg0->unk1B4 = (u16)4;
//     }
//     temp_t8 = arg0->unk2C & 0x80;
//     if ((temp_t8 != 0) && ((*arg0->unk36C & 0x10) != 0)) {
//         arg0->unk348 = 40.0f;
//         arg0->unk34C = 40.0f;
//         arg0->unk374 = 150.0f;
//         return 40.0f;
//     }
//     if (temp_t8 != 0) {
//         arg0->unk348 = (f32) (arg0->unk2FC - arg0->unk354);
//         return (bitwise f32) temp_t8;
//     }
//     if ((temp_t8 != 0) && (arg0->unk3D0->unk102 == 0) && (D_800BE9F0 != 0x17)) {
//         arg0->unk348 = 40.0f;
//         arg0->unk34C = 40.0f;
//         arg0->unk374 = 150.0f;
//         return 40.0f;
//     }
//     if (arg0->unk3D0->unk102 != 0) {
//         arg0->unk348 = 40.0f;
//         arg0->unk34C = 40.0f;
//         arg0->unk374 = 194.0f;
//         return 40.0f;
//     }
//     temp_v0 = (arg0->unk1B4 * 8) + 0x800A34B0;
//     arg0->unk374 = (f32) temp_v0->unk0;
//     arg0->unk348 = (f32) temp_v0->unk4;
//     arg0->unk34C = (f32) arg0->unk348;
//     return (bitwise f32) temp_v0;
// }


#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_85124C38.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_8512523C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_85125330.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_85125394.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_851253CC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_85125490.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_851254F4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_85125594.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_85125608.s")
// void func_85125608(void *arg0) {
//     arg0->unk24C = 3.0f;
//     arg0->unk250 = 2.5f;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_85125628.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_85125690.s")
// NON-MATCHING: uses v1 not v0
// u8* func_85125690(struct108 *arg0, s32 arg1) {
//     u8 *temp_v0 = &D_800DBFF4[arg0->unk23D];
//
//     if (*temp_v0 < arg1) {
//         *temp_v0 = arg1;
//     }
//     return temp_v0;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_851256BC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_85125924.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_85125A6C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_85125C40.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_85125DB4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_85126138.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_8512623C.s")
// ooh mama
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_85126378.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_85127520.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_851277B0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_851279A0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_85127EB8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_85127FEC.s")
// void func_85127FEC(void *arg0, ? arg1, ? arg2) {
//     arg0->unk7F4 = (u16)1;
//     arg0->unk7F8 = (f32) arg0->unk2A4;
//     arg0->unk7FC = (f32) arg0->unk2A8;
//     arg0->unk800 = (f32) arg0->unk2AC;
//     func_8512A390();
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_85128030.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_851283B8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_851284C4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_85128540.s")
// #pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_85128680.s")
void func_85128680(s32 arg0) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_8512868C.s")
// f32 func_8512868C(struct108 *arg0) {
//     s32 temp_v1;
//     u8 temp_v0_2;
//     void *temp_a1;
//     void *temp_t0;
//     void *temp_v0;
//     void *temp_v1_2;
//     void *phi_v0;
//     s32 phi_v1;
//
//     struct108 = arg0;
//     temp_a1->unk20C = (u16)0;
//     phi_v0 = temp_a1 + 2;
//     phi_v1 = 1;
// loop_1:
//     temp_v1 = phi_v1 + 4;
//     phi_v0->unk20E = (u16)0;
//     phi_v0->unk210 = (u16)0;
//     phi_v0->unk212 = (u16)0;
//     temp_v0 = phi_v0 + 8;
//     temp_v0->unk204 = (u16)0;
//     phi_v0 = temp_v0;
//     phi_v1 = temp_v1;
//     if (temp_v1 != 0x15) {
//         goto loop_1;
//     }
//     temp_a1->unk2C = 1;
//     temp_a1->unkDC = 0;
//     temp_a1->unk134 = 1;
//     temp_a1->unk84 = 0xE;
//     temp_a1->unk1B4 = (u16)3;
//     arg0 = temp_a1;
//     func_85124B18(temp_a1);
//     temp_v0_2 = arg0->unk23D;
//     temp_v1_2 = &D_800CC2D0[temp_v0_2]; // (temp_v0_2 * 0x32C) +
//     arg0->unk3D0 = temp_v1_2;
//     arg0->unk3CC = (s16) temp_v0_2;
//     arg0->unk368 = (s16) temp_v0_2;
//     temp_t0 = temp_v1_2->unk31C;
//     arg0->unk190 = 0.0f;
//     arg0->unk198 = 0.0f;
//     arg0->unk18C = 0.0f;
//     arg0->unk194 = 0.0f;
//     arg0->unk3D4 = temp_t0;
//     arg0->unk674 = 1.0f;
//     temp_t0->unk198 = (u8)0;
//     arg0->unk73C = (u16)0;
//     return 0.0f;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_85128774.s")
// f32 func_85128774(void *arg0, void *arg1) {
//     f32 temp_f0;
//     f32 temp_f0_2;
//     f32 temp_f0_3;
//
//     arg0->unk35C = (f32) arg1->unk180;
//     temp_f0_2 = arg1->unk14;
//     arg0->unk2F8 = temp_f0_2;
//     arg0->unk304 = temp_f0_2;
//     temp_f0_3 = arg1->unk18;
//     arg0->unk2FC = temp_f0_3;
//     arg0->unk308 = temp_f0_3;
//     temp_f0 = arg1->unk1C;
//     arg0->unk300 = temp_f0;
//     arg0->unk30C = temp_f0;
//     arg0->unk37C = (f32) (arg0->unk3D0->unk40 - 180.0f);
//     arg0->unk3D4->unk18C = (f32) D_800A35AC;
//     arg0->unk23C = (u8)1;
//     return temp_f0;
// }
