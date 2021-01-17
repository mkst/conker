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


#pragma GLOBAL_ASM("asm/nonmatchings/game_DBA60/func_150AE790.s")
// some funky xor going on
#pragma GLOBAL_ASM("asm/nonmatchings/game_DBA60/func_150AEB9C.s")

void func_150AECCC(struct42 *arg0) {
    arg0->unk96 = arg0->unk96 + (arg0->unk94 * D_800BE9E4);
    if (arg0->unk96 >= 0x1401) {
        arg0->unk96 = 0x1400;
    }
    arg0->unk9E = arg0->unk9E - ((s32) arg0->unk96 >> 8);
    arg0->unkA4 = arg0->unkA4 + D_800BE9E4;
    if (arg0->unkA4 >= 0x1A) {
        arg0->unkA4 = 0x19;
    }
}

void func_150AED4C(struct114 *arg0) {
    arg0->unk34 += arg0->unk14 * D_800BE9E4;
    if (arg0->unk2A < arg0->unk34) {
        arg0->unk3A = 70;
        arg0->unk34 = arg0->unk2A;
    }
    arg0->unk36 = arg0->unk34;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_DBA60/func_150AED9C.s")

s32 func_150AEDD8(struct202 *arg0) {
    if (arg0->unk1C < 0x20) {
        arg0->unk28 = arg0->unk1C * 8;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_DBA60/func_150AEDF8.s")
// void func_150AEDF8(void *arg0, void *arg1, s32 arg2) {
//     s32 temp_a0;
//     s32 temp_t6;
//     s32 temp_v1;
//     void *temp_v0;
//     void *temp_v0_2;
//
//     temp_t6 = arg2 & 0xFF;
//     if (temp_t6 == 0x2D) {
//         temp_v0 = arg0->unk28;
//         temp_a0 = temp_v0->unk0;
//         temp_v1 = arg1->unk0;
//         if (temp_v1 == temp_a0) {
//             temp_v0->unk0 = (s32) arg1->unk4;
//             temp_v0->unk4 = (u8) arg1->unk9;
//             return;
//         }
//         if (arg1->unk4 == temp_a0) {
//             temp_v0->unk0 = temp_v1;
//             temp_v0->unk4 = (u8) arg1->unk8;
//             return;
//         }
//     } else {
//         temp_v0 = arg0->unk28;
//         if (temp_t6 == 0) {
//             if ((arg1->unk0 == temp_v0->unk0) || ((temp_v0->unk4 == (u8) arg1->unk4))) {
//                 func_1516972C(arg0, temp_t6, arg0);
//             }
//         }
//     }
// }
