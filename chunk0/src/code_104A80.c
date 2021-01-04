#include <ultra64.h>
#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/code_104A80/func_15104A80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_104A80/func_15104C44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_104A80/func_15104FF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_104A80/func_151050B0.s")

void func_1510550C(struct102 *arg0, s32 arg1, u8 arg2) {
    if (arg2 == 0x4B) {
        func_1516972C(arg0);
    }
}

void func_15105548(struct207 *arg0, s32 *arg1, u8 arg2) {
    struct206 *temp_v0 = &arg0->unk28;
    if ((arg2 == 0x38) && (temp_v0->unk0->unk14 == 1)) {
        temp_v0->unk70 = *arg1;
        temp_v0->unk4 = 300;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_104A80/func_1510558C.s")

void func_15105848(struct207 *arg0, s32 arg1, u8 arg2) {
    struct206 *temp_v0;

    if (arg2 == 0x38) {
        temp_v0 = &arg0->unk28;
        func_151058B4(arg0);
        temp_v0->unkC |= 1;
    } else {
        temp_v0 = &arg0->unk28;
        if (arg2 == 0x39) {
            temp_v0->unkC &= 0xFFFE;
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_104A80/func_151058B4.s")
// void func_151058B4(void *arg0) {
//     s8 spE1;
//     s8 spE0;
//     ?32 spDC;
//     s16 spDA;
//     s16 spD8;
//     ? spD4;
//     f32 spD0;
//     ? spCC;
//     s8 spC9;
//     s8 spC8;
//     f32 spC4;
//     s8 spC2;
//     s16 spC0;
//     s16 spBE;
//     s16 spBC;
//     ?32 spB8;
//     ?32 spB4;
//     s8 spB1;
//     s8 spB0;
//     s8 spAF;
//     s8 spAE;
//     s8 spAD;
//     s8 spAC;
//     s8 spAB;
//     s8 spAA;
//     s8 spA9;
//     s8 spA8;
//     s8 spA7;
//     s8 spA6;
//     s8 spA5;
//     s8 spA4;
//     f32 spA0;
//     ? sp94;
//     f32 sp90;
//     ? sp8C;
//     ? sp88;
//     f32 temp_f20;
//     f32 temp_f20_2;
//     f32 temp_f24;
//     f32 temp_f26;
//     s32 temp_s0;
//     u32 temp_s1;
//     void *temp_s4;
//     f32 phi_f20;
//
//     if (func_151464B8(arg0->unk30) == 0) {
//         temp_s4 = arg0 + 0x28;
//         temp_f20 = ((func_150ADA68() * *(void *)0x800A23EC) + *(void *)0x800A23F0) * temp_s4->unk4;
//         if (temp_f20 > 1.0f) {
//             spDA = 0x15;
//             spDC = 0xA;
//             spA7 = 0x61;
//             spA8 = 0xF2;
//             spE0 = -1;
//             spA4 = 4;
//             spA5 = 2;
//             spA6 = 3;
//             spA9 = 0xFF;
//             spAB = 0xFF;
//             spAC = 0xFF;
//             spAD = 0xFF;
//             spAE = 0xFF;
//             spAF = 0xFF;
//             spB0 = 3;
//             spB1 = 0x24;
//             spB4 = 0x200005;
//             spB8 = 0x60600;
//             spBC = 0x14;
//             spBE = 0xC;
//             spC0 = 1;
//             spC2 = 0;
//             spC4 = 1.0f;
//             spC8 = -1;
//             spC9 = 0;
//             temp_f26 = *(void *)0x800A23F4;
//             temp_f24 = *(void *)0x800A23F8;
//             spD0 = (f32) temp_s4->unk0->unk2;
//             phi_f20 = temp_f20;
// loop_3:
//             spAA = (func_150ADA20() % 0x65U) + 0x9B;
//             spE1 = (func_150ADA20() & 3) + 3;
//             func_151432BC(temp_s4->unk0, &spCC, &spD4, &sp8C, &sp88);
//             spD8 = (func_150ADA20() % 0x1FU) + 0x1E;
//             sp90 = (func_150ADA68() * temp_f24) + temp_f26;
//             temp_s0 = func_150ADA20();
//             temp_s1 = func_150ADA20();
//             func_15143794((s16) (temp_s0 & 0xFF), (s16) ((temp_s1 % 0x16U) - 0x36), (func_150ADA68() * 20.0f) + 30.0f, &sp94);
//             spA0 = (func_150ADA68() * *(void *)0x800A23FC) + *(void *)0x800A2400;
//             func_1515C2F0(&spCC, 0, &sp90, 0, (?32) arg0->unkC, (?32) arg0->unk1);
//             temp_f20_2 = phi_f20 - 1.0f;
//             phi_f20 = temp_f20_2;
//             if (temp_f20_2 > 1.0f) {
//                 goto loop_3;
//             }
//         }
//     }
// }

void func_15105BC8(struct204 *arg0) {
    if ((arg0->unk34 & 1) != 0) {
        func_1508B20C(arg0->unk28->unk0, arg0->unk28->unk2, arg0->unk28->unk4, 500.0f);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_104A80/func_15105C24.s")
// void *func_15105C24(s32 arg0) {
//     s32 temp_t4;
//     s32 temp_t5;
//     void *temp_a0;
//     void *temp_a0_2;
//     s32 phi_v1;
//     s32 phi_v0;
//     void *phi_a0;
//
//     phi_v0 = 0;
// loop_1:
//     phi_v1 = 0;
// loop_2:
//     temp_a0 = *((((((phi_v1 * 4) - phi_v1) * 4) + phi_v1) << 5) + 0x800DCE50 + (((phi_v0 * 4) + 0x800A0000)->unk5770 * 4));
//     phi_a0 = temp_a0;
//     if (temp_a0 != 0) {
// loop_3:
//         if ((phi_a0->unk13 == 0x2E) && (arg0 == phi_a0->unk28)) {
//             return phi_a0;
//         }
//         temp_a0_2 = phi_a0->unk8;
//         phi_a0 = temp_a0_2;
//         if (temp_a0_2 != 0) {
//             goto loop_3;
//         }
//     }
//     temp_t4 = (phi_v1 + 1) & 0xFF;
//     phi_v1 = temp_t4;
//     if (temp_t4 < 2) {
//         goto loop_2;
//     }
//     temp_t5 = (phi_v0 + 1) & 0xFF;
//     phi_v0 = temp_t5;
//     if (temp_t5 < 2) {
//         goto loop_1;
//     }
//     return NULL;
// }
