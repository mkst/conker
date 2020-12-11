#include <ultra64.h>

#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/code_15C2F0/func_1515C2F0.s")
// void *func_1515C2F0(void *arg0, void *arg1, s32 arg2, s32 arg3, u8 arg4, s32 arg5) {
//     void *sp3C;
//     void *temp_v0;
//
//     arg0->unk10 = 0xA;
//     temp_v0 = func_15147A80(&arg1->unk40, 0x10, 8, 8, 8, 0, 0, arg3, (?32) arg4, arg5);
//     if (temp_v0 == 0) {
//         return NULL;
//     }
//     sp3C = temp_v0;
//     func_10022EC0(temp_v0->unk98, arg2, 0x3C); // memcpy
//     return sp3C;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_15C2F0/func_1515C388.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_15C2F0/func_1515C534.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_15C2F0/func_1515C6F4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_15C2F0/func_1515CF9C.s")
// s32 func_1515CF9C(void *arg0, void *arg1) {
//     s32 temp_v1;
//     s8 temp_v0;
//     void *temp_t1;
//
//     temp_v0 = arg0->unk2C;
//     if ((s32) temp_v0 < (arg0->unk25 - 1)) {
//         temp_v1 = arg0->unk94;
//         arg0->unk2C = (s8) (temp_v0 + 1);
//         temp_t1 = temp_v1 + (arg0->unk2E * 0x10);
//         temp_t1->unk0 = (s32) arg0->unk10;
//         temp_t1->unk4 = (s32) arg0->unk14;
//         temp_t1->unk8 = (s32) arg0->unk18;
//         (temp_v1 + (arg0->unk2E * 0x10))->unkC = (f32) arg1->unk8;
//         arg0->unk2E = (s8) (arg0->unk2E + 1);
//         if (arg0->unk25 == arg0->unk2E) {
//             arg0->unk2E = (u8)0;
//         }
//     } else {
//         arg1->unk39 = (u8)-1;
//     }
//     return 1;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_15C2F0/func_1515D030.s")
// s32 func_1515D030(void *arg0, ? arg1) {
//     s8 temp_v0;
//     s32 phi_v1;
//
//     temp_v0 = arg0->unk2C;
//     if ((s32) temp_v0 >= 3) {
//         arg0->unk2C = (s8) (temp_v0 - 1);
//         arg0->unk2E = (s8) (arg0->unk2E - 1);
//         phi_v1 = 1;
//         if ((s32) arg0->unk2E < 0) {
//             arg0->unk2E = (s8) (arg0->unk25 - 1);
//             phi_v1 = 1;
//         }
//     } else {
//         phi_v1 = 0;
//     }
//     return phi_v1;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_15C2F0/func_1515D088.s")
// s32 func_1515D088(void *arg0) {
//     s32 sp3C;
//     s8 sp38;
//     f32 sp34;
//     void *sp30;
//     s32 temp_t7;
//     s32 temp_v0;
//     void * temp_v0_2;
//     s32 phi_v1;
//
//     temp_t7 = arg0->unk18;
//     temp_v0 = temp_t7 & 0xFF;
//     sp38 = (s8) temp_t7;
//     if ((temp_v0 < 0) || (temp_v0 >= 2)) {
//         return 0;
//     }
//     sp30 = arg0;
//     sp34 = 0.0f;
//     temp_v0_2 = func_151491F4(0x12C, -1, 0x11, 0, 0xD, 0xC, 0xFF, 1);
//     phi_v1 = &temp_v0_2;
//     if (temp_v0_2 != 0) {
//         sp3C = temp_v0_2;
//         func_10022EC0(temp_v0_2->unk28, &sp30, 0xC); // memcpy
//         phi_v1 = sp3C;
//     }
//     return phi_v1;
// }

// fat struct
#pragma GLOBAL_ASM("asm/nonmatchings/code_15C2F0/func_1515D130.s")
