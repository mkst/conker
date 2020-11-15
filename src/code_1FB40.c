#include <ultra64.h>

#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/code_1FB40/func_8001FB40.s")
// void *func_8001FB40(s32 arg0, void *arg1) {
//     void *sp54;
//     s32 sp50;
//     s32 sp4C;
//     void *sp48;
//     void *sp44;
//     void *sp40;
//     void *sp3C;
//     void *sp38;
//     void *sp34;
//     void *sp30;
//     void *sp2C;
//     void *sp28;
//     void *sp24;
//     void *sp20;
//     void *sp1C;
//     s32 temp_t2;
//     s32 temp_t6_2;
//     void *temp_t0;
//     void *temp_t0_2;
//     void *temp_t1;
//     void *temp_t2_2;
//     void *temp_t4;
//     void *temp_t5;
//     void *temp_t5_2;
//     void *temp_t6;
//     void *temp_t7;
//     void *temp_t8;
//     void *temp_t8_2;
//
//     sp54 = arg1;
//     if ((D_800E0E04 == 0) || (func_851F2E88(0xB8, &sp54) == 0)) {
//         temp_t8 = sp54;
//         sp54 = temp_t8 + 8;
//         sp48 = temp_t8;
//         sp48->unk0 = 0x20004E0;
//         sp48->unk4 = 0x2E0;
//         temp_t4 = sp54;
//         sp54 = temp_t4 + 8;
//         sp44 = temp_t4;
//         sp44->unk0 = 0x20007C0;
//         sp44->unk4 = 0x2E0;
//     }
//     sp4C = 0;
//     sp50 = 1;
//     if (D_8002BA44->unk50 >= 2) {
// loop_4:
//         if ((s32) (D_8002BA44->unk48 + (sp50 * 0x44))->unk40->unk2 > 0) {
//             sp4C = sp50;
//         }
//         temp_t2 = sp50 + 1;
//         sp50 = temp_t2;
//         if (temp_t2 < D_8002BA44->unk50) {
//             goto loop_4;
//         }
//     }
//     sp50 = 0;
//     if (D_8002BA44->unk50 > 0) {
// loop_8:
//         if (sp4C >= D_8002BA44->unk50) {
//             sp4C = 0;
//         }
//         if (sp50 != 0) {
//             temp_t1 = sp54;
//             sp54 = temp_t1 + 8;
//             sp40 = temp_t1;
//             sp40->unk0 = 0x20007C0;
//             sp40->unk4 = 0x2E0;
//         }
//         sp54 = D_8002BA44->unk44->unk4(arg0, sp54, sp4C);
//         if (*(&D_800428C4 + sp4C) != 0) {
//             if (*(&D_800428C6 + sp4C) != 0) {
//                 temp_t5 = sp54;
//                 sp54 = temp_t5 + 8;
//                 sp3C = temp_t5;
//                 sp3C->unk0 = 0xC008000;
//                 sp3C->unk4 = 0x7C004E0;
//             } else {
//                 temp_t0 = sp54;
//                 sp54 = temp_t0 + 8;
//                 sp38 = temp_t0;
//                 sp38->unk0 = 0xC007FFF;
//                 sp38->unk4 = 0x7C00650;
//             }
//         } else {
//             if (*(&D_800428C6 + sp4C) != 0) {
//                 temp_t7 = sp54;
//                 sp54 = temp_t7 + 8;
//                 sp34 = temp_t7;
//                 sp34->unk0 = 0xC008000;
//                 sp34->unk4 = 0x7C00650;
//             } else {
//                 temp_t5_2 = sp54;
//                 sp54 = temp_t5_2 + 8;
//                 sp30 = temp_t5_2;
//                 sp30->unk0 = 0xC007FFF;
//                 sp30->unk4 = 0x7C00650;
//             }
//             temp_t0_2 = sp54;
//             sp54 = temp_t0_2 + 8;
//             sp2C = temp_t0_2;
//             sp2C->unk0 = 0xC007FFF;
//             sp2C->unk4 = 0x7C004E0;
//         }
//         if ((s32) D_8002BA44->unk48[sp4C]->unk40->unk2 > 0) {
//             sp28 = D_8002BA44->unk48[sp4C]->unk40;
//             if (sp28->unk28 != 0) {
//                 func_8001CF38(sp28, (f32) D_8002BA44->unk54);
//             }
//             temp_t2_2 = sp54;
//             sp54 = temp_t2_2 + 8;
//             sp24 = temp_t2_2;
//             sp24->unk0 = 0xB000020;
//             sp24->unk4 = osVirtualToPhysical(sp28 + 8);
//             temp_t8_2 = sp54;
//             sp54 = temp_t8_2 + 8;
//             sp20 = temp_t8_2;
//             sp20->unk0 = 0xE0004E0;
//             sp20->unk4 = (s32) (osVirtualToPhysical(sp28->unk2C) & 0xFFFFFF & 0xFFFFFF);
//             temp_t6 = sp54;
//             sp54 = temp_t6 + 8;
//             sp1C = temp_t6;
//             sp1C->unk0 = 0xE000650;
//             sp1C->unk4 = (s32) (osVirtualToPhysical(sp28->unk30) & 0xFFFFFF & 0xFFFFFF);
//             sp28->unk28 = 0;
//         }
//         temp_t6_2 = sp50 + 1;
//         sp4C = sp4C + 1;
//         sp50 = temp_t6_2;
//         if (temp_t6_2 < D_8002BA44->unk50) {
//             goto loop_8;
//         }
//     }
//     return sp54;
// }

void func_8001FFE0(struct43 *arg0, s16 arg1) {
    arg0->unk1A = arg1;
}
