#include <ultra64.h>

#include "functions.h"
#include "variables.h"


// this one is a monster
#pragma GLOBAL_ASM("asm/nonmatchings/init_8180/func_10008180.s")

void func_100084D8(u8 arg0) {
    if ((func_10017A80(D_8003C900[arg0]) == 0) || (func_10017A80(D_8003C900[arg0]) == 3)) {
        func_10017AA0(D_8003C900[arg0]);
    }
}

void func_1000853C(u8 arg0) {
    func_10017A80(D_8003C900[arg0]);
}

void func_10008570(u8 arg0, s32 arg1) { // arg1 is OSMesgQueue ?
    func_10017AF0(D_8003C900[arg0], arg1);
}

void func_100085A4(s32 arg0, s32 arg1, s32 arg2) {
}

void func_100085B8(u8 arg0, s32 arg1, u8 arg2) {
    func_10017B04(D_8003C900[arg0], arg1, arg2);
}

void func_100085F8(u8 arg0, s32 arg1) {
    func_10017BB8(D_8003C900[arg0], arg1);
}

void func_1000862C(u8 arg0, s32 arg1) {
    func_10017C00(D_8003C900[arg0], arg1);
}

void func_10008660(u8 arg0, u8 arg1, u8 arg2, s32 arg3) {
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
    func_10017C68(D_8003C900[arg0], arg1, arg2, arg3);
}

void func_100086FC(u8 arg0, u8 arg1, u8 arg2) {
    func_10017CE0(D_8003C900[arg0], arg1, arg2);
}

void func_10008744(u8 arg0, u8 arg1, u8 arg2) {
    func_10017D80(D_8003C900[arg0], arg1, arg2);
}

void func_10008790(u8 arg0, s32 arg1, u8 arg2, s32 arg3) {
    s32 i;

    for (i = 0; i < 16; i++)
    {
        if ((1 << i) & arg1) {
            func_10008660(arg0, i, arg2, arg3);
        }
    }
}

void func_10008824(u8 arg0, u8 arg1, u8 arg2) {
    func_10017D30(D_8003C900[arg0], arg1, arg2);
}

void func_1000886C(u8 arg0, s32 arg1, u8 arg2) {
    s32 i;

    for (i = 0; i < 16; i++)
    {
        if ((1 << i) & arg1) {
            func_10008824(arg0, i, arg2);
        }
    }
}

void func_100088F0(u8 arg0, s32 arg1, s32 arg2) {
    s32 i;

    for (i = 0; i < 16; i++)
    {
        if ((1 << i) & arg1) {
            if (arg2) {
                func_1000862C(arg0, i);
            } else {
                func_100085F8(arg0, i);
            }
        }
    }
}

void func_10008988(u8 arg0, s32 arg1, s32 arg2) {
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

u8 func_10008A4C(u8 arg0, u8 arg1) {
    return D_8003C900[arg0]->unk60[arg1].unkD;
}

void func_10008A94(u8 arg0, s32 arg1, s32 arg2) {
    s32 i;

    for(i = 0; i < 16; i++)
    {
        if (((1 << i) & arg1) != 0) {
            func_10017E4C(D_8003C900[arg0], i, arg2);
        }
    }
}

void func_10008B2C(u8 arg0) {
      n_alCSPGetTempo(D_8003C900[arg0]);
}

void func_10008B60(u8 arg0, u8 arg1, u8 arg2, u8 arg3, s32 arg4) {
    func_10017F10(D_8003C900[arg0], arg1, arg2, arg3, arg4);
}

void func_10008BC0(u8 arg0, f32 arg1, f32 arg2) {
    func_10017DF0(D_8003C900[arg0], arg1, arg2);
}

#pragma GLOBAL_ASM("asm/nonmatchings/init_8180/func_10008C04.s")
// NON-MATCHING: something like this...
// void func_10018790(s32, s32, u8, s32);
// void func_10008C04(u8 arg0, u8 arg1, s32 arg2) {
//     // func_10018790(&D_8003CA58[arg0 * 0xF8], &D_8003CD48[arg0 * 0x760], arg1, arg2);
//     func_10018790(&D_8003CA58[arg0], &D_8003CD48[arg0], arg1, arg2);
// }

// not sure what going on with this
#pragma GLOBAL_ASM("asm/nonmatchings/init_8180/func_10008C6C.s")
// void func_10008C6C(s32 arg0, s32 arg1) {
//     u8 tmp0 = arg0 & 0xFF;
//     u8 tmp1 = arg1 & 0xFF;
//     func_100186DC(&D_8003CA58[tmp0], &D_8003CD48 + (tmp0 * 0x760) + (tmp1 * 0xEC));
// }

// contains delay slot
#pragma GLOBAL_ASM("asm/nonmatchings/init_8180/func_10008CE8.s")

void func_10008EE0(u8 arg0, s32 arg1) {
    func_10018D00(D_8003C900[arg0], (s16)arg1);
}

void func_10008F24(u8 arg0) {
    // AL_TRACK_END
    func_10018C60(D_8003C900[arg0]);
}

void func_10008F58(u8 arg0) {
    func_10018D50(D_8003C900[arg0]);
}
