#include <ultra64.h>

#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/code_13320/func_10013320.s")
// void func_10013320(struct26 *arg0, struct30 *arg1) {
//     s32 i;
//     s32 sp30;
//     struct30 *sp2C;
//     s32 sp28;
//     s32 sp24;
//     s32 temp_t5;
//
//     sp24 = arg1->unkC;
//     arg0->unk20 = 0;
//     arg0->unk18 = 0;
//     arg0->unk14 = D_8002BA44; // fuuuuuuu
//     arg0->unk30 = 0xFFFF;
//     func_10017B30(arg0);
//     arg0->unk24 = 488;
//     arg0->unk28 = 0;
//     arg0->unk2C = 0;
//     arg0->unk32 = 32767;
//     arg0->unk35 = arg1->unk9;
//     arg0->unk5C = 16000;
//     arg0->unk1C = 0;
//     arg0->unk70 = arg1->unk10;
//     arg0->unk74 = arg1->unk14;
//     arg0->unk78 = arg1->unk18;
//     arg0->unk7C = 0.0f;
//     arg0->unk80 = 1.0f;
//     arg0->unk84 = 0;
//     arg0->unk8D = 0;
//     arg0->unk8C = arg1->unk0;
//     arg0->unk38 = 9;
//     arg0->unk34 = arg1->unk8;
//     arg0->unk60 = func_10012844(0, 0, sp24, arg1->unk8, 0x3C);
//     func_1001B59C(arg0);
//     sp28 = func_10012844(0, 0, sp24, arg1->unk0, 0x44);
//     arg0->unk6C = 0; // NULL?
//     /// fuuuuuuu
//     // for (i = 0; i < arg1->unk0; i++)
//     // {
//     //     arg0->unk6C[i].unk0 = arg1;
//     // }
// //     if (arg1->unk0 > 0) {
// // loop_1:
// //         sp2C = (i * 0x44) + sp28;
// //         *sp2C = (s32) arg0->unk6C;
// //         arg0->unk6C = sp2C;
// //         temp_t5 = i + 1;
// //         i = temp_t5;
// //         if (temp_t5 < arg1->unk0) {
// //             goto loop_1;
// //         }
// //     }
//
//     arg0->unk64 = 0;
//     arg0->unk68 = 0;
//     sp30 = func_10012844(0, 0, sp24, arg1->unk4, 0x1C);
//     func_1001C060(arg0 + 0x48, sp30, arg1->unk4);
//     arg0->unk0 = 0;
//     arg0->unk8 = &D_10013598;
//     arg0->unk4 = arg0;
//     func_1001C700(arg0);
// }

// jump table
#pragma GLOBAL_ASM("asm/nonmatchings/code_13320/func_10013598.s")
// jump table
#pragma GLOBAL_ASM("asm/nonmatchings/code_13320/func_10014048.s")
// jump table
#pragma GLOBAL_ASM("asm/nonmatchings/code_13320/func_1001415C.s")
// void func_10015310(s32 arg0, void *arg1) {
//     void *sp14;
//     void *sp10;
//     void *spC;
//     void *sp8;
//     void *sp4;
//     void *sp0;
//     void *temp_t9;
//
//     sp14 = arg0 + 8;
//     if (sp14 != 0) {
// loop_1:
//         if (*sp14 == 0) {
//             spC = arg1;
//             sp8 = sp14;
//             spC->unk0 = (s32) *sp8;
//             spC->unk4 = sp8;
//             if (*sp8 != 0) {
//                 (*sp8)->unk4 = spC;
//             }
//             *sp8 = spC;
//         } else {
//             sp10 = *sp14;
//             if (arg1->unk8 < sp10->unk8) {
//                 sp10->unk8 = (s32) (sp10->unk8 - arg1->unk8);
//                 sp4 = arg1;
//                 sp0 = sp14;
//                 sp4->unk0 = (s32) *sp0;
//                 sp4->unk4 = sp0;
//                 if (*sp0 != 0) {
//                     (*sp0)->unk4 = sp4;
//                 }
//                 *sp0 = sp4;
//             } else {
//                 arg1->unk8 = (s32) (arg1->unk8 - sp10->unk8);
//                 temp_t9 = *sp14;
//                 sp14 = temp_t9;
//                 if (temp_t9 != 0) {
//                     goto loop_1;
//                 }
//             }
//         }
//     }
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_13320/func_10015044.s")
// void func_10015044(void *arg0, void *arg1) {
//     void *sp44;
//     s32 sp40;
//     s32 sp3C;
//     s32 sp38;
//     s32 sp34;
//     s32 sp30;
//     void *sp2C;
//     void *sp28;
//     void *sp24;
//     void *sp20;
//     void *sp1C;
//     void *sp18;
//     void *temp_t2;
//
//     sp44 = arg1 + 4;
//     sp30 = 0;
//     sp24 = NULL;
//     if ((arg1->unk8 == 0xFF) && (arg1->unk9 == 0x51)) {
//         sp3C = arg0->unk24;
//         sp40 = (sp44->unk7 << 0x10) | (sp44->unk8 << 8) | sp44->unk9;
//         func_10015464(arg0, (f32) sp40);
//         sp2C = arg0->unk50;
//         if (sp2C != 0) {
// loop_3:
//             sp30 = sp30 + sp2C->unk8;
//             sp28 = sp2C->unk0;
//             if (sp2C->unkC == 0x16) {
//                 sp20 = sp2C;
//                 if (sp20->unk0 != 0) {
//                     sp20->unk0->unk4 = (s32) sp20->unk4;
//                 }
//                 if (sp20->unk4 != 0) {
//                     *sp20->unk4 = (s32) sp20->unk0;
//                 }
//                 if (sp24 != 0) {
//                     sp1C = sp2C;
//                     sp18 = sp24;
//                     sp1C->unk0 = (s32) *sp18;
//                     sp1C->unk4 = sp18;
//                     if (*sp18 != 0) {
//                         (*sp18)->unk4 = sp1C;
//                     }
//                     *sp18 = sp1C;
//                 } else {
//                     sp2C->unk0 = 0;
//                     sp2C->unk4 = 0;
//                     sp24 = sp2C;
//                 }
//                 sp34 = sp30;
//                 if (sp28 != 0) {
//                     sp30 = sp30 - sp2C->unk8;
//                     sp28->unk8 = (s32) (sp28->unk8 + sp2C->unk8);
//                 }
//                 sp2C->unk8 = sp34;
//             }
//             sp2C = sp28;
//             if (sp2C != 0) {
//                 goto loop_3;
//             }
//         }
//         sp2C = sp24;
//         if (sp2C != 0) {
// loop_18:
//             temp_t2 = sp2C->unk0;
//             sp28 = temp_t2;
//             sp38 = (s32) sp2C->unk8 / sp3C;
//             sp2C->unk8 = (s32) (arg0->unk24 * sp38);
//             func_10015310(arg0 + 0x48, sp2C);
//             sp2C = temp_t2;
//             if (sp2C != 0) {
//                 goto loop_18;
//             }
//         }
//     }
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_13320/func_10015310.s")
// void func_10015310(s32 arg0, void *arg1) {
//     void *sp14;
//     void *sp10;
//     void *spC;
//     void *sp8;
//     void *sp4;
//     void *sp0;
//     void *temp_t9;
//
//     sp14 = arg0 + 8;
//     if (sp14 != 0) {
// loop_1:
//         if (*sp14 == 0) {
//             spC = arg1;
//             sp8 = sp14;
//             spC->unk0 = (s32) *sp8;
//             spC->unk4 = sp8;
//             if (*sp8 != 0) {
//                 (*sp8)->unk4 = spC;
//             }
//             *sp8 = spC;
//         } else {
//             sp10 = *sp14;
//             if (arg1->unk8 < sp10->unk8) {
//                 sp10->unk8 = (s32) (sp10->unk8 - arg1->unk8);
//                 sp4 = arg1;
//                 sp0 = sp14;
//                 sp4->unk0 = (s32) *sp0;
//                 sp4->unk4 = sp0;
//                 if (*sp0 != 0) {
//                     (*sp0)->unk4 = sp4;
//                 }
//                 *sp0 = sp4;
//             } else {
//                 arg1->unk8 = (s32) (arg1->unk8 - sp10->unk8);
//                 temp_t9 = *sp14;
//                 sp14 = temp_t9;
//                 if (temp_t9 != 0) {
//                     goto loop_1;
//                 }
//             }
//         }
//     }
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_13320/func_10015464.s")
// NON-MATCHING: f4/f6 flipped
// void func_10015464(struct18 *arg0, f32 arg1) {
//     if (arg0->unk18) {
//         arg0->unk24 = arg0->unk18->unk8 * arg1;
//     } else {
//         arg0->unk24 = 0x1E8;
//     }
//     // arg0->unk24 = arg0->unk18 ? (s32)(arg0->unk18->unk8 * arg1) : 0x1E8;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_13320/func_100154AC.s")
// NON-MATCHING: need to figure final line, probably is not struct26
// void func_100154AC(struct26 *arg0) {
//     struct33 tmp;
//     s32 sp1C;
//
//     if (arg0->unk2C != 1 || arg0->unk18 == 0) {
//         return;
//     }
//     if (func_1001DBA0(arg0->unk18, &sp1C) == 0) {
//         return;
//     }
//     tmp.unk0 = 0;
//     // struct/pointer/array/balls
//     func_1001C224(&arg0->unk48, &tmp, arg0->unk48, 0);
// }
