#include <ultra64.h>
#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/game_123FB0/func_150F6B00.s")
// NON-MATCHING: 90% there
// void func_150F6B00(struct108 *arg0) {
//     struct190 tmp;
//
//     f32 phi_f2;
//     f32 temp_f2;
//     f32 phi_f0_2;
//
//     // func_1509BE40 has variable number of args
//     if ((func_1509BE40(1, 16387, 6, 8192) != 0) && (arg0->unk3D0->unk1CA != 0)) {
//         arg0->unk84 |= 0xC0001000;
//         func_15048F90(&D_800A1B80, &arg0->unk2A4, &tmp.unk14);
//         func_15048F90(&D_800A1B80, &D_800A1B8C, &tmp.unk8);
//         tmp.unk0 = 1.0f / func_150AD930(&tmp.unk8);
//         func_1504917C(&tmp.unk8, &tmp.unk20);
//         temp_f2 = func_150AD900(&tmp.unk20, &tmp.unk14) * tmp.unk0 * 0.75f;
//         if (temp_f2 < 0.0f) {
//             phi_f2 = 0.0f;
//         } else {
//             if (temp_f2 > 1.0f) {
//                 phi_f0_2 = 1.0f;
//             } else {
//                 phi_f0_2 = temp_f2;
//             }
//             phi_f2 = phi_f0_2;
//         }
//         tmp.unk4 = phi_f2;
//         if (func_1509BE40(4, 8192, 172, 16448, 16449, 16450, 16451) != 0) {
//             phi_f0_2 = (0.0f * tmp.unk4) + -900.0f;
//             arg0->unk374 = 220.0f;
//         } else {
//             if (func_1509BE40(4, 8192, 172, 16455, 16454, 16453, 16452) != 0) {
//                 phi_f0_2 = (0.0f * tmp.unk4) + 900.0f;
//                 arg0->unk374 = 220.0f;
//             } else {
//                 phi_f0_2 = 0.0f * tmp.unk4;
//                 arg0->unk374 = 294.0f;
//             }
//         }
//         // takes a variable number of args
//         func_1509BFB0(3, 16387, 3, phi_f0_2, -20.0f, ((s32)(D_800A1B98 * phi_f2) + D_800A1B9C));
//         func_15049688(&arg0->unk37C, func_15048FC8(&D_800D9A50) - 180.0f, &arg0->unk7C8, 8.0f, 10.0f, arg0->unk7B4);
//         arg0->unk39C = arg0->unk37C * D_800A1BA0;
//     } else {
//         arg0->unk84 = arg0->unk84 & 0x3FFFEFFF;
//     }
// }
