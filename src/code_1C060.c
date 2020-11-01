#include <ultra64.h>

#include "functions.h"
#include "variables.h"


// typedef struct {
//   s32 unk0;
//   s32 unk4;
//   s32 unk8;
//   s32 unkC;
//   s32 unk10;
//   s32 unk14;
//   s32 unk18;
// } struct97;
//
// typedef struct {
//     s32 unk0;
//     struct97 *unk4;
//     s32 unk8;
//     s32 unkC;
//     s32 unk10;
// } struct98;

#pragma GLOBAL_ASM("asm/nonmatchings/code_1C060/func_8001C060.s")
// void func_8001C060(struct15 *arg0, s32 arg1, s32 arg2) {
//     s32 spC;
//     void *sp8;
//     void *sp4;
//     s32 temp_t2;
//
//     arg0->unk10 = 0;
//     arg0->unk8 = 0;
//     arg0->unkC = 0;
//     arg0->unk0 = 0;
//     arg0->unk4 = 0;
//     spC = 0;
//     if (arg2 > 0) {
// loop_1:
//         sp8 = (spC * 0x1C) + arg1;
//         sp4 = arg0;
//         sp8->unk0 = (s32) *sp4;
//         sp8->unk4 = sp4;
//         if (*sp4 != 0) {
//             (*sp4)->unk4 = sp8;
//         }
//         *sp4 = sp8;
//         temp_t2 = spC + 1;
//         spC = temp_t2;
//         if (temp_t2 < arg2) {
//             goto loop_1;
//         }
//     }
// }


#pragma GLOBAL_ASM("asm/nonmatchings/code_1C060/func_8001C108.s")
// s32 func_8001C108(void *arg0, void *arg1) {
//     void *sp2C;
//     s32 sp28;
//     void *sp24;
//     void *sp20;
//     void *sp1C;
//
//     sp2C = arg0->unk8;
//     if (sp2C != 0) {
//         sp24 = sp2C;
//         if (sp24->unk0 != 0) {
//             sp24->unk0->unk4 = (s32) sp24->unk4;
//         }
//         if (sp24->unk4 != 0) {
//             *sp24->unk4 = (s32) sp24->unk0;
//         }
//         bcopy(sp2C + 0xC, arg1, 0x10);
//         sp20 = sp2C;
//         sp1C = arg0;
//         sp20->unk0 = (s32) *sp1C;
//         sp20->unk4 = sp1C;
//         if (*sp1C != 0) {
//             (*sp1C)->unk4 = sp20;
//         }
//         *sp1C = sp20;
//         sp28 = sp2C->unk8;
//     } else {
//         *arg1 = (u16)-1;
//         sp28 = 0;
//     }
//     return sp28;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_1C060/func_8001C224.s")
// void func_8001C224(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
//     void *sp3C;
//     void *sp38;
//     void *sp34;
//     s32 sp30;
//     s32 sp2C;
//     void *sp28;
//     void *sp24;
//     void *sp20;
//     void *sp1C;
//     void *sp18;
//     void *temp_t3;
//     void *temp_t5;
//
//     sp30 = 0;
//     if ((arg3 & 2) != 0) {
//         sp2C = osSetIntMask(1);
//     }
//     sp3C = *arg0;
//     if (sp3C == 0) {
//         if ((arg3 & 2) != 0) {
//             osSetIntMask(sp2C);
//         }
//         return;
//     }
//     if ((sp3C->unk0 == 0) && ((arg3 & 1) == 0)) {
//         if ((arg3 & 2) != 0) {
//             osSetIntMask(sp2C);
//         }
//         return;
//     }
//     sp28 = sp3C;
//     if (sp28->unk0 != 0) {
//         sp28->unk0->unk4 = (s32) sp28->unk4;
//     }
//     if (sp28->unk4 != 0) {
//         *sp28->unk4 = (s32) sp28->unk0;
//     }
//     bcopy(arg1, sp3C + 0xC, 0x10);
//     if (arg2 == 0x7FFFFFFF) {
//         sp30 = -1;
//     }
//     temp_t3 = arg0 + 8;
//     sp34 = temp_t3;
//     if (temp_t3 != 0) {
// loop_18:
//         if (*sp34 == 0) {
//             if (sp30 != 0) {
//                 sp3C->unk8 = 0;
//             } else {
//                 sp3C->unk8 = arg2;
//             }
//             sp24 = sp3C;
//             sp20 = sp34;
//             sp24->unk0 = (s32) *sp20;
//             sp24->unk4 = sp20;
//             if (*sp20 != 0) {
//                 (*sp20)->unk4 = sp24;
//             }
//             *sp20 = sp24;
//         } else {
//             sp38 = *sp34;
//             if (arg2 < sp38->unk8) {
//                 sp3C->unk8 = arg2;
//                 sp38->unk8 = (s32) (sp38->unk8 - arg2);
//                 sp1C = sp3C;
//                 sp18 = sp34;
//                 sp1C->unk0 = (s32) *sp18;
//                 sp1C->unk4 = sp18;
//                 if (*sp18 != 0) {
//                     (*sp18)->unk4 = sp1C;
//                 }
//                 *sp18 = sp1C;
//             } else {
//                 arg2 = arg2 - sp38->unk8;
//                 temp_t5 = *sp34;
//                 sp34 = temp_t5;
//                 if (temp_t5 != 0) {
//                     goto loop_18;
//                 }
//             }
//         }
//     }
//     if ((arg3 & 2) != 0) {
//         osSetIntMask(sp2C);
//     }
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_1C060/func_8001C4F0.s")
// s32 func_8001C4F0(void *arg0, s16 arg1) {
//     void *sp3C;
//     void *sp38;
//     void *sp34;
//     void *sp30;
//     s32 sp2C;
//     s32 sp28;
//     s32 sp24;
//     void *sp20;
//     void *sp1C;
//     void *sp18;
//
//     sp28 = 0;
//     sp24 = 0;
//     sp2C = osSetIntMask(1);
//     sp3C = arg0->unk8;
//     if (sp3C != 0) {
// loop_1:
//         sp38 = *sp3C;
//         sp34 = sp3C;
//         sp30 = sp38;
//         sp24 = sp24 + sp34->unk8;
//         if (sp34->unkC == arg1) {
//             if (sp28 == 0) {
//                 sp28 = sp24;
//             }
//             if (sp30 != 0) {
//                 sp30->unk8 = (s32) (sp30->unk8 + sp34->unk8);
//             }
//             sp20 = sp3C;
//             if (sp20->unk0 != 0) {
//                 sp20->unk0->unk4 = (s32) sp20->unk4;
//             }
//             if (sp20->unk4 != 0) {
//                 *sp20->unk4 = (s32) sp20->unk0;
//             }
//             sp1C = sp3C;
//             sp18 = arg0;
//             sp1C->unk0 = (s32) *sp18;
//             sp1C->unk4 = sp18;
//             if (*sp18 != 0) {
//                 (*sp18)->unk4 = sp1C;
//             }
//             *sp18 = sp1C;
//         }
//         sp3C = sp38;
//         if (sp3C != 0) {
//             goto loop_1;
//         }
//     }
//     osSetIntMask(sp2C);
//     return sp28;
// }
