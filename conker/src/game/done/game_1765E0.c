#include <ultra64.h>
#include "functions.h"
#include "variables.h"


struct260 *func_15149130(s16 arg0, s8 arg1, s8 arg2, s8 arg3, u8 arg4, u8 arg5, struct37 *arg6, u8 arg7, s32 arg8) {
    struct260 *temp_v0;
    u8 phi_v0;
    s32 sp24;
    // fakematch? an alternative is to mark sp24 as volatile
    s32 *tmp;

    sp24 = &arg6->unk28;
    tmp = &sp24;

    if ((arg4 & 2) != 0) {
        phi_v0 = 95;
    } else {
        phi_v0 = 35;
    }

    temp_v0 = func_15167A68(phi_v0, arg8, *tmp, 1, arg7, 1);
    if (temp_v0 == 0) {
        return NULL;
    }
    temp_v0->unkE  = arg0;
    temp_v0->unk10 = arg1;
    temp_v0->unk11 = arg2;
    temp_v0->unk12 = arg3;
    temp_v0->unkD  = arg4;
    temp_v0->unk13 = arg5;

    // what are we zero-ing out?
    bzero(&temp_v0->unk14, 16);

    return temp_v0;
}

struct260 *func_151491F4(s16 arg0, s8 arg1, s8 arg2, u8 arg3, u8 arg4, s32 arg5, u8 arg6, s32 arg7) {
    return func_15149130(arg0, arg1, arg2, -1, arg3, arg4, arg5, arg6, arg7);
}

void func_15149264(struct260 *arg0) {

    if ((arg0->unkD & 1) != 0) {
        arg0->unkE -= D_800BE9E4;
    }
    if (arg0->unk11 != -1) {
        D_8008A4E8[arg0->unk11](arg0);
    }

    if (arg0->unkE < 0) {
        if (arg0->unk10 != -1) {
            D_8008A4C0[arg0->unk10](arg0);
        }
    }
    if (arg0->unkE < 0) {
         func_1516972C(arg0);
    }
}

void func_15149318(struct260 *arg0) {
    func_151D5E30(&arg0->unk14);
}

void func_1514933C(struct260 *arg0) {
    func_15149318(arg0);
    func_15169804(arg0);
}

void func_15149368(struct260 *arg0) {
    func_15149318(arg0);
    func_15169824(arg0);
}

void func_15149394(struct260 *arg0) {
    s32 idx = arg0->unk13;

    if (idx < 0) {
        idx = 0U;
    } else {
        if (idx >= 74) {
            idx = 0U;
        }
    }
    D_8008A688[idx](arg0);
}

void func_151493E4(struct260 *arg0) {
    s32 idx = arg0->unk13;

    if (idx < 0) {
        idx = 0U;
    } else {
        if (idx >= 74) {
            idx = 0U;
        }
    }
    D_8008A7B0[idx](arg0);
}

void func_15149434(struct260 *arg0, s32 arg1, u8 arg2) {
    s32 idx = arg0->unk13;

    if ((idx < 0) || (idx >= 74)) {
        idx = 0U;
    }

    if (D_8008A8D8[idx] != 0) {
        D_8008A8D8[idx](arg0, arg1, arg2);
    }
}

s32 func_15149490(s32 arg0, struct260 *arg1, s16 arg2) {
    s32 idx = arg1->unk12;
    if (idx != -1) {
        arg0 = D_8008A670[idx](arg0, arg1, arg2);
    }
    return arg0;
}

void func_151494E0(s32 arg0, u8 arg1) {
    func_15169260(&D_800A5770, 2, arg0, arg1);
}

void func_15149514(s32 arg0, u8 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_15169850(arg0, arg1, arg2, arg3, arg4);
}
