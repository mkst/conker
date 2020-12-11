#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_150AE5B0(struct108 *arg0) {
    if ((D_800D2E4C->unk4 & 0x80) == 0) {
        if (func_1509BE40(0, 0x2000, 0xBB) != -1) {
            if (func_15123934(arg0, arg0->unk2C, 0, arg0->unk134, 8) != 0) {
                arg0->unk84 |= 0x1000000;
                func_151254F4(arg0, D_800CC335 - 1);
            }
        } else if (func_151239CC(arg0, 8) != 0) {
            func_151254F4(arg0, 0);
        }
    }
    arg0->unk84 &= -0x4001;
    if ((D_800D2E4C->unk1 & 4) == 0) {
        if (func_1509BE40(1, 0x2000, 0x95, func_1509BE40(0, 0x2014, 0xB7) | 0x2000) != 0) {
            arg0->unk84 |= 0x1000000;
            if (((arg0->unk2C & 1) != 0) && (func_15123934(arg0, arg0->unk2C, 0, arg0->unk134, 0) != 0)) {
                arg0->unk1B4 = 3;
                arg0->unk84 &= -5;
                func_15124B18(arg0);
            }
        } else if (func_151239CC(arg0, 0) != 0) {
            func_15124B18(arg0);
            arg0->unk84 &= 0xFEFFFFFF;
        }
    }
    if (func_1509BE40(1, 0x4082, 6, 0x9000) != 0) {
        arg0->unk84 |= 0x10000;
    } else {
        arg0->unk84 &= 0xFFFEFFFF;
    }
}


#pragma GLOBAL_ASM("asm/nonmatchings/code_AE5B0/func_150AE790.s")
// some funky xor going on
#pragma GLOBAL_ASM("asm/nonmatchings/code_AE5B0/func_150AEB9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_AE5B0/func_150AECCC.s")
// s16 func_150AECCC(void *arg0) {
//     arg0->unk96 = (s16) (arg0->unk96 + (arg0->unk94 * D_800BE9E4));
//     if ((s32) arg0->unk96 >= 0x1401) {
//         arg0->unk96 = (u16)0x1400;
//     }
//     arg0->unk9E = (s16) (arg0->unk9E - ((s32) arg0->unk96 >> 8));
//     arg0->unkA4 = (s16) (arg0->unkA4 + D_800BE9E4);
//     if ((s32) arg0->unkA4 >= 0x1A) {
//         arg0->unkA4 = (u16)0x19;
//     }
//     return arg0->unk96;
// }

void func_150AED4C(struct114 *arg0) {
    arg0->unk34 += arg0->unk14 * D_800BE9E4;
    if (arg0->unk2A < arg0->unk34) {
        arg0->unk3A = 70;
        arg0->unk34 = arg0->unk2A;
    }
    arg0->unk36 = arg0->unk34;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_AE5B0/func_150AED9C.s")
// ? func_150AED9C(void *arg0) {
//     s32 temp_t6;
//     s8 phi_v1;
//
//     temp_t6 = arg0->unk1C * 8;
//     phi_v1 = (s8) temp_t6;
//     if (temp_t6 >= 0x100) {
//         phi_v1 = (u8)0xFF;
//     }
//     arg0->unk98->unk1B = phi_v1;
//     if ((phi_v1 & 0xFF) < 0) {
//         return 0;
//     }
//     return 1;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_AE5B0/func_150AEDD8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_AE5B0/func_150AEDF8.s")
