#include <ultra64.h>

#include "functions.h"
#include "variables.h"


// this one is a monster
#pragma GLOBAL_ASM("asm/nonmatchings/code_8180/func_80008180.s")

void func_800084D8(u8 arg0) {
    if ((func_80017A80(D_8003C900[arg0]) == 0) || (func_80017A80(D_8003C900[arg0]) == 3)) {
        func_80017AA0(D_8003C900[arg0]);
    }
}

void func_8000853C(u8 arg0) {
    func_80017A80(D_8003C900[arg0]);
}

void func_80008570(u8 arg0, s32 arg1) { // arg1 is OSMesgQueue ?
    func_80017AF0(D_8003C900[arg0], arg1);
}

void func_800085A4(s32 arg0, s32 arg1, s32 arg2) {
}

void func_800085B8(u8 arg0, s32 arg1, u8 arg2) {
    func_80017B04(D_8003C900[arg0], arg1, arg2);
}

void func_800085F8(u8 arg0, s32 arg1) {
    func_80017BB8(D_8003C900[arg0], arg1);
}

void func_8000862C(u8 arg0, s32 arg1) {
    func_80017C00(D_8003C900[arg0], arg1);
}

void func_80008660(u8 arg0, u8 arg1, u8 arg2, s32 arg3) {
    if (arg3 > 0) {
        arg3 = (arg3 * 10) / 60;
        if (arg3 == 0) {
            arg3 = 1;
        } else if (arg3 >= 128) {
            arg3 = 127;
        }
    } else {
        arg3 = 0;
    }
    func_80017C68(D_8003C900[arg0], arg1, arg2, arg3);
}

void func_800086FC(u8 arg0, u8 arg1, u8 arg2) {
    func_80017CE0(D_8003C900[arg0], arg1, arg2);
}

void func_80008744(u8 arg0, u8 arg1, u8 arg2) {
    func_80017D80(D_8003C900[arg0], arg1, arg2);
}

void func_80008790(u8 arg0, s32 arg1, u8 arg2, s32 arg3) {
    s32 i;

    for (i = 0; i < 16; i++)
    {
        if ((1 << i) & arg1) {
            func_80008660(arg0, i, arg2, arg3);
        }
    }
}

void func_80008824(u8 arg0, u8 arg1, u8 arg2) {
    func_80017D30(D_8003C900[arg0], arg1, arg2);
}

void func_8000886C(u8 arg0, s32 arg1, u8 arg2) {
    s32 i;

    for (i = 0; i < 16; i++)
    {
        if ((1 << i) & arg1) {
            func_80008824(arg0, i, arg2);
        }
    }
}

void func_800088F0(u8 arg0, s32 arg1, s32 arg2) {
    s32 i;

    for (i = 0; i < 16; i++)
    {
        if ((1 << i) & arg1) {
            if (arg2) {
                func_8000862C(arg0, i);
            } else {
                func_800085F8(arg0, i);
            }
        }
    }
}

void func_80008988(u8 arg0, s32 arg1, s32 arg2) {
    s32 i;

    for(i = 0; i < 16; i++)
    {
        if ((1 << i) & arg1) {
            if (arg2 != 0) {
                D_8003C900[arg0]->unk30 |= arg1;
            } else {
                D_8003C900[arg0]->unk30 &= (arg1 ^ 0xFFFF);
            }
        }
    }
}

u8 func_80008A4C(u8 arg0, u8 arg1) {
    return D_8003C900[arg0]->unk60[arg1].unkD;
}

void func_80008A94(u8 arg0, s32 arg1, s32 arg2) {
    s32 i;

    for(i = 0; i < 16; i++)
    {
        if (((1 << i) & arg1) != 0) {
            func_80017E4C(D_8003C900[arg0], i, arg2);
        }
    }
}

void func_80008B2C(u8 arg0) {
    func_80017EC0(D_8003C900[arg0]);
}

void func_80008B60(u8 arg0, u8 arg1, u8 arg2, u8 arg3, s32 arg4) {
    func_80017F10(D_8003C900[arg0], arg1, arg2, arg3, arg4);
}

void func_80008BC0(u8 arg0, f32 arg1, f32 arg2) {
    func_80017DF0(D_8003C900[arg0], arg1, arg2);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_8180/func_80008C04.s")
// NON-MATCHING: what is func_80018790?
// void func_80008C04(u8 arg0, s32 arg1, s32 arg2) {
//     func_80018790(&D_8003CA58[arg0], &D_8003CD48[arg0], arg1, arg2);
// }

// not sure what going on with this
#pragma GLOBAL_ASM("asm/nonmatchings/code_8180/func_80008C6C.s")
// contains delay slot
#pragma GLOBAL_ASM("asm/nonmatchings/code_8180/func_80008CE8.s")

void func_80008EE0(u8 arg0, s32 arg1) {
    func_80018D00(D_8003C900[arg0], arg1);
}

void func_80008F24(u8 arg0) {
    func_80018C60(D_8003C900[arg0]);
}

void func_80008F58(u8 arg0) {
    func_80018D50(D_8003C900[arg0]);
}
