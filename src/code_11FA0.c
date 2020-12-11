#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_10011FA0(s32 *arg0) {
    D_80042770 = arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_11FA0/func_10011FB0.s")
// NON-MATCHING: using t6 not v0
// s32 func_10011FB0(s32 arg0) {
//     if (D_80042774 == 3) {
//         D_80041FD9 = 1;
//     }
//     D_80042774 = arg0;
//     return D_80042774;
// }

void func_10011FDC(s32 arg0) {
    D_80042778 = arg0;
}

void func_10011FEC(void) {
    D_80042770 = D_80042774 = D_80042778 = D_8004277C = 0;
}

// jump table
#pragma GLOBAL_ASM("asm/nonmatchings/code_11FA0/func_10012020.s")

void func_10012560(s32 arg0) {
    func_15043BB8(&D_800427A0);
}

void func_10012588(s32 arg0) {
    func_15016170(arg0);
    func_15043A00(&D_800427A0, &D_800427B0, 64);
    func_151F3C1C(&D_10012560);
}

void func_100125CC(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_151F2CDC();
    if ((arg0 != 30) || (D_800BE9F8 != 27)) {
        if (temp_v0 == 1) {
            func_151F2D6C(0, 11010);
            return;
        }
        if (temp_v0 != 0) {
            func_151F2BA8();
        }
    }
}

void func_1001263C(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 sp18;

    sp18 = 0;
    temp_v0 = func_1502B020(&sp18, 2, 22, arg0);
    D_800427F4 = (s16) arg0;
    if ((temp_v0 != 0) && (sp18 != 0)) {
        func_151F2D6C(arg1, 0);
        func_151F2DFC(arg2, 1);
        if (arg0 != 0xD2) {
            func_151F2E4C(10, 11000);
        } else {
            func_151F2E4C(0, 0);
        }
        func_151F2960(temp_v0, sp18);
    }
}

void func_100126E8(s32 arg0, s32 arg1) {
    func_15043CA4(&D_800427A0, arg0, arg1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_11FA0/func_10012718.s")
// NON-MATCHING: types are wrong
// s32 func_10012718(u16 arg0, struct48 *arg1, s32 arg2, s16 arg3, u16 arg4) {
//     u32 sp3C;
//     u32 sp38;
//     u32 sp34;
//
//     if (arg1->unk318 != 0) {
//         func_1001263C(arg0, arg2, 64);
//     } else {
//         func_100114D0(arg1->unk14, arg1->unk18, arg1->unk1C, arg2, arg4, arg3, &sp3C, &sp38, &sp34);
//         func_1001263C(arg0, sp38, sp3C);
//     }
//     return 1;
// }

s32 func_100127D0(void) {
    s32 tmp = func_151F2CDC();

    if (tmp == 1 || tmp == 2 || tmp == 5) {
        return 1;
    }
    return 0;
}
