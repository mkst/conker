#include <ultra64.h>

#include "functions.h"
#include "variables.h"

#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000A420.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000A750.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000B060.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000B1B0.s")

// void *func_8000B1B0(s32 arg0) {
//     void *temp_a0;
//     void *temp_v1;
//     void *phi_v1;
//
//     phi_v1 = (void *)0x800417B0;
// loop_1:
//     temp_a0 = *phi_v1;
//     temp_v1 = phi_v1 + 4;
//     if ((temp_a0 != 0) && (arg0 == temp_a0->unk4)) {
//         return temp_a0;
//     }
//     phi_v1 = temp_v1;
//     if (temp_v1 != 0x800417BC) {
//         goto loop_1;
//     }
//     return NULL;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000B1FC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000B294.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000B2F4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000B3D4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000B548.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000B638.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000B830.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000B8B8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000BA18.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000BAFC.s")
// #pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000BBE8.s")

s32 func_8000BBE8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg0 == 0) {
        func_8000E704(20, 1, 0xFFFF);
        arg0 = 1;
    }
    return arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000BC28.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000BCBC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000BF60.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000C350.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000C530.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000C7E8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000C934.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000CA18.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000CAE4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000CBA8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000CBF0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000CC54.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000CD40.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000CDA0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000CEAC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000D2F8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000D758.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000D96C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000DE1C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000DEC4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000DF68.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000E054.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000E0F8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000E134.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000E17C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000E2F4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000E40C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000E46C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000E588.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000E654.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000E704.s")
typedef struct {
  s8 unk0;
  s8 unk1;
  s8 unk2;
  u8 unk3;
} struct2;
// non-matching, unk0 lb not lw
// s32 func_8000E704(s32 arg0, s32 arg1, s32 arg2) {
//     struct2 *temp_v0 = func_8000B1B0(arg0);
//     if (temp_v0 && temp_v0->unk0 >= 0) {
//         func_80008A94(temp_v0->unk3, arg2, arg1);
//         return 1;
//     }
//     return 0;
// }

void func_8000E75C(s32 arg0) {
    D_8002B070 = arg0 >> 1;
}

s32 func_8000E770(s32 *arg0, s32 *arg1) {
    if (arg0 != 0) {
        *arg0 = D_80041F08;
    }
    if (arg1 != 0) {
        *arg1 = D_80041F0C;
    }
    return D_80041F04;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000E7A0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000E8C4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000E8F0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000E934.s")

u16 func_8000EA94(s32 arg0) {
    u16 tmp;

    if (arg0 == 0) {
        tmp = 82;
    } else if (arg0 == 2) {
        tmp = 81;
    } else if (arg0 == 1) {
        tmp = 83;
    }
    func_8000D96C(tmp, 0, 0);
    return tmp;
}
