#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_8507C8E0(struct127 *arg0, s32 arg1) {
    arg0->unk31C->unk120 = (u8)2;
    arg0->unk31C->unk124 = arg1;
}

// "goto" hell
#pragma GLOBAL_ASM("asm/nonmatchings/code_7C8E0/func_8507C8FC.s")

void func_8507CD0C(struct127 *arg0) {
    s32 temp_lo = ((s32)arg0 - (s32)&D_800CC2D0) / (s32)sizeof(struct127);

    arg0->unk31C->unk120 = 3;

    if (temp_lo <= D_80082FA0) {
        func_85181D70(temp_lo);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_7C8E0/func_8507CD64.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_7C8E0/func_8507D158.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_7C8E0/func_8507D1D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_7C8E0/func_8507D4F8.s")
// NON-MATCHING: pretty far away!
// void func_8507D4F8(s16 arg0) { // struct126 *
//     // ?32 sp24;
//     struct127 *temp_a0;
//
//     if ((D_8008FDBC & 1) == 0) {
//         func_85085710(arg0, 4, 1);
//     }
//     // sp24 = (?32) arg0;
//     if (func_850859AC(arg0, 3) != 0) {
//         func_85085710(arg0, 5, D_8008726C); //temp_ret =
//         temp_a0 = &D_800CC2D0[arg0];
//         temp_a0->unkB2 = (u16)0;
//         if (D_800BE616 == 0) {
//             D_800D18A8 = (u8)1;
//             if (((D_800D2E4C->unk19 & 4) != 0) || (D_8008FDA8 < 0)) {
//                 func_8501C730(2, D_800BE3DF, D_800BE3E0, 0, 0);
//                 return;
//             }
//             func_8501C730(1, 0x22, 0, 0, 0);
//             return;
//         }
//         if (D_800E0C20 != 0) {
//             temp_a0->unk31C->unk120 = (u8)0xA;
//             return; // temp_ret;
//         }
//         func_8507D1D8(temp_a0);
//         return;
//     }
//     if (D_800BE616 == 0) {
//         D_800D2E43 = (u8)1;
//         func_8509C3A0();
//         D_800D18A8 = (u8)1;
//         func_85085710(arg0, 5, D_8008726C);
//         func_85085710(arg0, 2, D_80087260);
//         func_8501C730(1, 0x18, 0, 0, 0);
//     } else {
//         D_800D18A0 = (u16) (D_800D18A0 | (1 << (s32) arg0));
//     }
//     // temp_a0 = &D_800CC2D0[arg0];
//     if (temp_a0->unk31C->unk84 == 0) {
//         D_8008FD94 -= 1; //(s8) (D_8008FD94 - 1);
//     }
//     temp_a0->unk31C->unk120 = (u8)0xA;
//     D_800BE618 -= 1; //(s8) (D_800BE618 - 1);
//     //return temp_a0_2->unk31C;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_7C8E0/func_8507D754.s")

void func_8507DB34(void) {
}

void func_8507DB3C(void) {
}

void func_8507DB44(s32 arg0, s32 arg1) {
    func_8503DE70(arg0, arg1, -1);
}

void func_8507DB64(void) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_7C8E0/func_8507DB6C.s")

void func_8507DE4C(struct127 *arg0) {

    if (arg0->unk0 == 1) {
        func_850836CC(arg0, 0x44);
        func_850836CC(arg0, 0x23);
        arg0->unk9C |= 0xF000;
        func_850836CC(arg0, 0x44);
        func_850836CC(arg0, 0x23);
        return;
    }

    switch(arg0->unk4) {
        case 0x9F:
        case 0xa0:
            arg0->unk9C |= 0xF000;
            break;
        case 0x5A:
        case 0x74:
        case 0x7A:
            arg0->unk9C |= 0xFF8;
            break;
    }
}


#pragma GLOBAL_ASM("asm/nonmatchings/code_7C8E0/func_8507DF10.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_7C8E0/func_8507DFE4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_7C8E0/func_8507E114.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_7C8E0/func_8507E1D0.s")
