#include <ultra64.h>

#include "functions.h"
#include "variables.h"

// struct210 with extra fields past 0x120 (full struct not yet in structs.h)
typedef struct {
    u8  pad0[0x2C];
    f32 unk2C;
    f32 unk30;
    u8  pad34[0xF4];
    f32 unk128;
} struct210_2;

s32 func_1513FAB4(struct210_2 *arg0, u8 arg1, f32 *arg2, s16 arg3);

// 0xA-byte per-vertex colour source struct (not yet in structs.h)
typedef struct {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
    u16 unk8;
} struct169510Col;

void func_151400D0(Vtx *arg0, struct169510Col *arg1);
void func_1513FFF4(Vtx *arg0, u8 arg1, u8 arg2);

// 0xC-byte table entry indexed by func_1513FFF4 (not yet in structs.h)
typedef struct {
    u8  pad0[0x6];
    u16 unk6;
    u16 unk8;
    u8  padA[0x2];
} struct90B60;

extern struct90B60 D_80090B60[];

extern f32 D_800A5184;

// object built by func_1513D2F0 (not yet in structs.h)
typedef struct {
    u8  pad0[0x10];
    s32 unk10;
    s32 unk14;
    u8  unk18;
    u8  pad19[0x57];
    u8  unk70;
    u8  unk71;
    u8  unk72;
    u8  unk73;
    u8  unk74;
    u8  pad75[0x3];
    f32 unk78;
    u8  pad7C[0x14];
    s32 unk90;
    u8  unk94;
    u8  unk95;
    u8  pad96[0x2];
    s32 unk98;
    s32 unk9C;
    u8  unkA0;
    u8  padA1[0x3];
    s32 unkA4[4];
    s32 unkB4;
    s32 unkB8;
    u8  padBC[0x4];
    Vtx unkC0[4];
    u8  unk100[0x10];
} structD2F0;

// template copied into the object at +0x18 by func_1513D2F0
typedef struct {
    u8  pad0[0x40];
    s32 unk40;
    u8  pad44[0x14];
} structD2F0tmpl;

// float-view of the struct at struct210+0x110 (unk110 embedded), used by func_1513E6E8
typedef struct {
    u8  pad0[0x8];
    f32 unk8;
    f32 unkC;
    f32 unk10;
    f32 unk14;
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    f32 unk24;
    f32 unk28;
    f32 unk2C;
} struct211_E6E8;

// float-view of struct210 for func_1513E6E8 (0x34..0x54 are f32 here)
typedef struct {
    u8  pad0[0x34];
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
    f32 unk48;
    f32 unk4C;
    f32 unk50;
    f32 unk54;
    s32 unk58;
    u8  pad5C;
    u8  unk5D;
    u8  pad5E[0xB2];
    struct211_E6E8 unk110;
} struct210_E6E8;

// file-local view of struct210 for func_1513C060 (header offsets/types inaccurate here)
typedef struct {
    u8  pad0[0x10];
    s32 unk10;
    u8  pad14[0x4];
    s32 unk18;
    s16 unk1C;
    u8  unk1E;
    u8  pad1F;
    s32 unk20;
    s32 unk24;
    u8  unk28;
    u8  pad29[0x4];
    u8  unk2D;
    u8  pad2E[0xC];
    s16 unk3A;
    s16 unk3C;
    u8  pad3E[0x42];
    u8  unk80;
    u8  unk81;
} struct210_C060;

extern s32 (*D_80089C70[])();
extern s32 (*D_80089CA8[])();
extern u8 D_80090B64[];

// func_1513C060: state-machine tick over a struct210. Reconstruction below is STRUCTURALLY
// byte-exact (all control flow, mults/divs, stores, branch-likely, and the shared unk18<<15
// bit-16 test match). Best hand score 818: remaining diffs are pure IDO register allocation
// — the two do-while loops emit `move v0,tN` (store-before-branch) that no equivalent C
// reproduces without adding reloads, plus register-numbering cascades and an arg0->a1 spill
// in the val<0 branch. PERMUTER CANDIDATE.
/*
void func_1513C060(struct210_C060 *arg0) {
    s8 flag;
    s32 temp;
    s32 val;
    s32 idx;

    if (arg0->unk10 & 1) {
        flag = 0;
        if (arg0->unk18 & 1) {
            arg0->unk1C -= D_800BE9E4;
            if (arg0->unk1C < 0) {
                flag = 1;
            }
        }
        idx = arg0->unk80;
        if (idx != 0) {
            if (D_80089C70[idx](arg0) == 0) {
                flag = 1;
            }
        }
        if ((arg0->unk18 & 0x8000) && (flag == 0) && (arg0->unk1C < arg0->unk3A) &&
            ((arg0->unk1C * arg0->unk3C) < arg0->unk28)) {
            arg0->unk28 = arg0->unk1C * arg0->unk3C;
        }
        if (((arg0->unk18 << 15) < 0) && (flag == 0) && (arg0->unk1C < arg0->unk3A) &&
            ((arg0->unk1C * arg0->unk3C) < arg0->unk28)) {
            arg0->unk2D = arg0->unk1C * arg0->unk3C;
        }
        if (flag == 0) {
            if (arg0->unk24 != 0) {
                temp = (D_80090B64[arg0->unk1E * 0xC] << 16) - 1;
                arg0->unk20 = arg0->unk20 + arg0->unk24 * D_800BE9E4;
                val = arg0->unk20;
                if (temp < val) {
                    if (arg0->unk18 & 2) {
                        flag = 1;
                    } else if (arg0->unk18 & 0x40) {
                        arg0->unk24 = 0;
                        arg0->unk20 = temp;
                    } else if (arg0->unk18 & 4) {
                        arg0->unk20 = temp - (val % temp);
                        arg0->unk24 = -arg0->unk24;
                    } else {
                        do {
                            val -= temp;
                            arg0->unk20 = val;
                        } while (temp < val);
                    }
                } else if (val < 0) {
                    if (arg0->unk18 & 8) {
                        flag = 1;
                    } else if (arg0->unk18 & 0x80) {
                        arg0->unk24 = 0;
                        arg0->unk20 = 0;
                    } else if (arg0->unk18 & 4) {
                        arg0->unk20 = (-val) % temp;
                        arg0->unk24 = -arg0->unk24;
                    } else {
                        do {
                            val += temp;
                            arg0->unk20 = val;
                        } while (val < 0);
                    }
                }
            }
        }
        if (flag != 0) {
            idx = arg0->unk81;
            if (idx != 0) {
                if (D_80089CA8[idx](arg0) != 0) {
                    func_1516972C((struct102 *)arg0);
                }
            } else {
                func_1516972C((struct102 *)arg0);
            }
        }
    }
}
*/
#pragma GLOBAL_ASM("asm/nonmatchings/game_169510/func_1513C060.s")

struct210 *func_1513C350(struct210 *arg0, s32 arg1, u8 arg2, u8 arg3, u8 arg4, s32 arg5, s32 arg6, struct167 *arg7, s32 arg8, u8 arg9, s32 argA) {
    struct210 *temp_v0;
    u8 phi_v0;
    s32 i;

    if (arg1 == 0) {
        arg1 = &D_800A4AA0;
    }
    if (arg0->unk0 & 0x40000) {
        phi_v0 = 0x4A;
    } else {
        phi_v0 = 0x1B;
    }
    temp_v0 = func_15167A68(phi_v0, argA, arg8 + 0xB0, 1, arg9, 1);
    if (temp_v0 == 0) {
        return NULL;
    }
    memcpy(&temp_v0->unk18.i.unk0, arg0, 0x28); // memcpy
    func_1513FFF4(&temp_v0->unk40, temp_v0->unk1E, arg4);
    func_151400D0(&temp_v0->unk40, arg1);
    temp_v0->unk80 = arg2;
    temp_v0->unk81 = arg3;
    temp_v0->unk84 = arg5;
    temp_v0->unk10 = 1;
    temp_v0->unk14 = 0;
    temp_v0->unkA0 = arg6;
    for (i = 0; i < 4; i++) {
        temp_v0->unk8C[i] = 0;
    }

    temp_v0->unk9C = 0;
    if (arg5) {
        for (i = 0; i <= D_80082FA0; i++) {
            temp_v0->unk8C[i] = func_1515D480(arg5);
        }
        temp_v0->unk9C = func_1515D440();
    }
    if (arg7) {
        *(struct167 *)temp_v0->unkA4 = *arg7;
    }
    return temp_v0;
}

struct210 *func_1513C4EC(s32 arg0, s32 arg1, u8 arg2, u8 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, u8 arg9, u8 argA, s32 argB, s32 argC, s32 argD, u8 argE, s32 argF) {
    s32 temp_v0;
    struct17 tmp;

    tmp.unk0 = arg4;
    tmp.unk4 = arg5;
    tmp.unk8 = arg6;
    temp_v0 = func_1513C350(arg0, arg1, arg2, arg3, argA, argB, argC, &tmp, argD, argE, argF);
    if (temp_v0 == 0) {
        return 0;
    }
    func_1513E13C(temp_v0, arg4, arg5, arg6, arg7, arg8, arg9);
    return temp_v0;
}

struct210 *func_1513C5B0(s32 arg0, s32 arg1, u8 arg2, u8 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, u8 arg9, u8 argA, s32 argB, u8 argC, s32 argD) {
    s32 tmp = func_1513C350(arg0, arg1, arg2, arg3, argA, 0, 0, 0, argB, argC, argD);
    if (tmp == 0) {
        return 0;
    }
    func_1513E13C(tmp, arg4, arg5, arg6, arg7, arg8, arg9);
    return tmp;
}

struct210 *func_1513C650(s32 arg0, u8 arg1, u8 arg2, s32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, u8 arg9, u8 argA, s32 argB, s32 argC, s32 argD, u8 argE, s32 argF) {
    s32 temp_v0;
    struct17 tmp;

    tmp.unk0 = arg4;
    tmp.unk4 = arg5;
    tmp.unk8 = arg6;

    temp_v0 = func_1513C350(arg0, 0, arg1, arg2, argA, argB, argC, &tmp, argD, argE, argF);
    if (temp_v0 == 0) {
        return 0;
    }

    if (func_1513E2AC(temp_v0, 0, arg3, arg4, arg5, arg6, arg7, arg8, arg9) == 0) {
        func_1516972C(temp_v0);
        return 0;
    }
    return temp_v0;
}

struct210 *func_1513C73C(s32 arg0, u8 arg1, u8 arg2, s32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, u8 arg9, u8 argA, s32 argB, u8 argC, s32 argD) {
    s32 tmp = func_1513C350(arg0, 0, arg1, arg2, argA, 0, 0, 0, argB, argC, argD);
    if (tmp == 0) {
        return 0;
    }

    if (func_1513E2AC(tmp, 0, arg3, arg4, arg5, arg6, arg7, arg8, arg9) == 0) {
        func_1516972C(tmp);
        return 0;
    }
    return tmp;
}

struct210 *func_1513C804(s32 arg0, s32 arg1, u8 arg2, u8 arg3, s32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9, u8 argA, u8 argB, s32 argC, u8 argD, s32 argE) {
    s32 tmp = func_1513C350(arg0, 0, arg2, arg3, argB, 0, 0, 0, argC, argD, argE);
    if (tmp == 0) {
        return 0;
    }
    if (func_1513E2AC(tmp, 0, arg4, arg5, arg6, arg7, arg8, arg9, argA) == 0) {
        func_1516972C(tmp);
        return 0;
    }
    return tmp;
}

void func_1513C8D4(struct210 *arg0) {
    func_1513C92C(arg0);
    func_15169804(arg0);
}

void func_1513C900(struct210 *arg0) {
    func_1513C92C(arg0);
    func_15169824(arg0);
}

void func_1513C92C(struct210 *arg0) {
    s32 i;

    for (i = 0; i <= D_80082FA0; i++) {
        if (arg0->unk8C[i]) {
            func_100043B4(arg0->unk8C[i], 4);
        }
    }
    if (arg0->unk9C != 0) {
        func_100043B4(arg0->unk9C, 4);
    }
}

void func_1513C9B0(struct210 *arg0) {
    s32 idx;
    if ((arg0->unk18.i.unk0 & 0x1000) != 0) {
        idx = arg0->unk1F;
    } else {
        idx = 0;
    }
    D_80089EE8[idx]();
}

void func_1513C9FC(struct210 *arg0) {
    s32 idx;
    if ((arg0->unk18.i.unk0 & 0x1000) != 0) {
        idx = arg0->unk1F;
    } else {
        idx = 0;
    }
    D_80089EF0[idx]();
}

void func_1513CA48(struct210 *arg0) {
    func_151D5E30(&arg0->unk100);
}

void func_1513CA6C(struct210 *arg0) {
    func_1513CA48(arg0);
    func_1513CAD4(arg0);
    func_15169804(arg0);
}

void func_1513CAA0(struct210 *arg0) {
    func_1513CA48(arg0);
    func_1513CAD4(arg0);
    func_15169824(arg0);
}

void func_1513CAD4(struct210 *arg0) {
    s32 i;

    for (i = 0; i <= D_80082FA0; i++) {
        if (arg0->unkA4[i]) {
            func_100043B4(arg0->unkA4[i], 4);
        }
    }
    if (arg0->unkB4 != 0) {
        func_100043B4(arg0->unkB4, 4);
    }
}

// is this really struct210?
void func_1513CB58(struct210 *arg0) {
    s32 idx;
    if ((arg0->unk58 & 0x400000) != 0) {
        idx = arg0->unk18.b.unk1; //unk19;
    } else {
        idx = 0;
    }
    D_80089EF8[idx]();
}

void func_1513CBA4(struct210 *arg0) {
    s32 idx;
    if ((arg0->unk58 & 0x400000) != 0) {
        idx = arg0->unk18.b.unk1; //unk19;
    } else {
        idx = 0;
    }
    D_80089F2C[idx]();
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_169510/func_1513CBF0.s")

void func_1513CF9C(s32 arg0, s32 arg1, u8 arg2) {
    D_80089F60[0](arg0, arg1, arg2);
}

void func_1513CFD0(s32 arg0, s32 arg1, s32 arg2) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_169510/func_1513CFE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_169510/func_1513D2F0.s")
// best 771 (structurally exact; scheduling/reg diff only: IDO preserves flags in t8
// via `sll t8,v0,0` and defers arg9+0x110 to the mode-branch delay slot, and swaps the
// argB/arg9 load order — a delay-slot rotation not controllable from C). structD2F0 /
// structD2F0tmpl float-view structs defined above. Permuter candidate. Reconstruction:
// void *func_1513D2F0(void *arg0, s32 arg1, u8 arg2, u8 arg3, u8 arg4, u8 arg5, u8 arg6, s32 arg7, s32 arg8, s32 arg9, u8 argA, s32 argB) {
//     structD2F0 *obj; s32 type; s32 flags = ((structD2F0tmpl *)arg0)->unk40; s32 i;
//     if (flags & 0x800000) type = 0x56; else if (flags & 0x2000000) type = 0x49; else type = 0x1C;
//     obj = func_15167A68(type, argB, arg9 + 0x110, 1, argA, (flags < 0) ? 2 : 1);
//     if (obj == 0) return 0;
//     memcpy(&obj->unk18, arg0, 0x58);
//     obj->unk70 = arg2; obj->unk71 = arg3; obj->unk72 = arg4; obj->unk73 = arg5; obj->unk74 = 0;
//     bzero(&obj->unk100, 0x10);
//     func_1513FFF4(&obj->unkC0[0], obj->unk18, arg6);
//     func_151400D0(&obj->unkC0[0], arg1);
//     obj->unk10 = 1; obj->unk14 = 0; obj->unk98 = 0; obj->unk95 = 0; obj->unk94 = 0; obj->unk90 = 0;
//     obj->unk9C = arg7; obj->unk78 = D_800A5184; obj->unkA0 = 0; obj->unkB8 = arg8;
//     for (i = 0; i < 4; i++) obj->unkA4[i] = 0;
//     obj->unkB4 = 0;
//     if (arg7) { for (i = 0; i <= D_80082FA0; i++) obj->unkA4[i] = func_1515D480(arg7); obj->unkB4 = func_1515D440(); }
//     return obj;
// }

void func_1513D4B8(s32 arg0, s32 arg1, u8 arg2, u8 arg3, u8 arg4, u8 arg5, u8 arg6, s32 arg7, u8 arg8, s32 arg9) {
    func_1513D2F0(arg0, arg1, arg2, arg3, arg4, arg5, arg6, 0, 0, arg7, arg8, arg9);
}

void func_1513D524(s32 arg0, u8 arg1, u8 arg2, u8 arg3, u8 arg4, u8 arg5, s32 arg6, u8 arg7, s32 arg8) {
    func_1513D2F0(arg0, &D_800A4AA0, arg1, arg2, arg3, arg4, arg5, 0, 0, arg6, arg7, arg8);
}

s32 func_1513D594(s32 arg0, s32 arg1, u8 arg2, u8 arg3, u8 arg4, u8 arg5, s16 arg6, f32 arg7, f32 arg8, s32 arg9, s32 argA, s32 argB, s32 argC, u8 argD, s32 argE, u8 argF, s32 arg10) {
    struct210 *temp_v0;

    if (arg1 == 0) {
        arg1 = &D_800A4AA0;
    }
    temp_v0 = func_1513D2F0(arg0, arg1, arg2, arg3, arg4, 0xC, arg5, argB, argC, argE + 0x18, argF, arg10);
    if ((temp_v0 != 0) && (func_1513D6FC(&temp_v0->unk110, arg6, arg7, arg8, arg9, argA, argD) == 0)) {
        func_1516972C(temp_v0);
        return 0;
    }
    return temp_v0;
}

void func_1513D668(s32 arg0, s32 arg1, u8 arg2, u8 arg3, u8 arg4, u8 arg5, s16 arg6, f32 arg7, f32 arg8, s32 arg9, s32 argA, u8 argB, s32 argC, u8 argD, s32 argE) {
    func_1513D594(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, argA, 0, 0, argB, argC, argD, argE);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_169510/func_1513D6FC.s")
// s32 func_1513D6FC(struct211 *arg0, s16 arg1, f32 arg2, f32 arg3, s32 arg4, s32 arg5, u8 arg6) {
//     f32 spBC;
//     f32 spB8;
//     f32 spB4;
//     s32 spB0;
//     f32 spAC;
//     s32 spA8;
//     f32 spA4;
//     s32 spA0;
//     s32 sp9C;
//     s32 sp98;
//     s32 sp94;
//     s32 sp90;
//     f32 sp8C;
//     f32 sp88;
//     f32 sp84;
//     s32 sp80;
//     f32 sp7C;
//     f32 sp78;
//     f32 sp74;
//     f32 sp70;
//     f32 sp6C;
//     f32 sp68;
//     f32 sp64;
//     f32 sp60;
//     s32 sp5C;
//     s32 sp58;
//     s32 sp54; // ?
//     s32 sp50; // ?
//     s32 sp4C; // ?
//     s32 sp48; // ?
//     s32 sp44; // ?
//     s32 sp40; // ?
//     s32 sp3C; // ?
//     s32 sp38; // ?
//     s32 sp34; // ?
//     s32 sp30; // ?
//     f32 sp2C;
//     f32 sp28;
//     f32 sp24;
//
//     f32 temp_f0;
//     f32 temp_f16;
//     f32 temp_f18;
//     f32 phi_f12;
//     f32 phi_f14;
//     f32 phi_f12_2;
//
//     if (arg6 != 0) {
//         spB4 = func_151423D8(arg1 - 64);
//         temp_f0 = func_151423D8(arg1);
//         spAC = arg2 * temp_f0;
//         spA4 = arg3 * temp_f0;
//         if (func_1510E388(arg4, arg5, &spBC, &spB8) == 0) {
//             return 0;
//         }
//         temp_f18 = spA4 * spB8;
//         sp2C = fabsf(spA4);
//         temp_f16 = arg3 * spB4;
//         sp28 = sqrtf((spA4 * spA4) + (temp_f18 * temp_f18));
//         if (temp_f16 != 0.0f) {
//             sp8C = temp_f16 * spBC;
//             sp88 = fabsf(temp_f16) / sqrtf((temp_f16 * temp_f16) + (sp8C * sp8C));
//         } else {
//             sp8C = 0.0f;
//             sp88 = 0.0f;
//         }
//         if (spA4 != 0.0f) {
//             sp84 = temp_f18;
//             phi_f12 = sp2C / sp28;
//         } else {
//             sp84 = 0.0f;
//             phi_f12 = 0.0f;
//         }
//         arg0->unk0 = sp88 * temp_f16;
//         arg0->unk8 = phi_f12 * spA4;
//         arg0->unk4 = (sp88 * sp8C) + (phi_f12 * sp84) + 0.5f;
//         temp_f18 = -(arg2 * spB4);
//         temp_f16 = temp_f18 * spB8;
//         sp28 = fabsf(temp_f18);
//         sp2C = temp_f16;
//         sp24 = sqrtf((temp_f18 * temp_f18) + (temp_f16 * temp_f16));
//         if (spAC != 0.0f) {
//             temp_f0 = spAC * spBC;
//             sp8C = temp_f0;
//             phi_f14 = fabsf(spAC) / sqrtf((spAC * spAC) + (temp_f0 * temp_f0));
//         } else {
//             sp8C = 0.0f;
//             sp88 = 0.0f;
//             phi_f14 = 0.0f;
//         }
//         if (temp_f18 != 0.0f) {
//             sp84 = sp2C;
//             phi_f12_2 = sp28 / sp24;
//         } else {
//             sp84 = 0.0f;
//             phi_f12_2 = 0.0f;
//         }
//         arg0->unkC = phi_f14 * spAC;
//         arg0->unk14 = phi_f12_2 * temp_f18;
//         arg0->unk10 = (phi_f14 * sp8C) + (phi_f12_2 * sp84) + 0.5f;
//     } else {
//         sp7C = func_151423D8(arg1 - 64);
//         sp78 = func_151423D8(arg1);
//         if (func_15144E80(arg5, &sp6C, &sp60, &sp54) == 0) {
//             return 0;
//         }
//         if (func_15145128(&sp6C, &sp6C, &sp50, &sp4C) == 0) {
//             return 0;
//         }
//         if (func_15145128(&sp60, &sp60, &sp50, &sp4C) == 0) {
//             return 0;
//         }
//         temp_f0 = arg2 * sp78;
//         temp_f18 = arg2 * sp7C;
//         arg0->unk0 = (temp_f0 * sp6C) + (temp_f18 * sp60);
//         arg0->unk4 = (temp_f0 * sp70) + (temp_f18 * sp64);
//         arg0->unk8 = (temp_f0 * sp74) + (temp_f18 * sp68);
//         temp_f0 = -arg3 * sp7C;
//         temp_f18 = arg3 * sp78;
//         arg0->unkC = (temp_f0 * sp6C) + (temp_f18 * sp60);
//         arg0->unk10 = (temp_f0 * sp70) + (temp_f18 * sp64);
//         arg0->unk14 = (temp_f0 * sp74) + (temp_f18 * sp68);
//     }
//     return 1;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/game_169510/func_1513DB00.s")

// func_1513DF9C: CODE IS BYTE-PERFECT (verified via objdump vs target: every text
// instruction identical incl. jump-table body layout & regenerated jtbl data). asm-differ
// still reports 1725 because the seeded expected object references EXTERNAL jtbl_800A5188
// while compiled C emits a LOCAL .rodata jump table — the object-vs-object diff cannot
// reconcile the two. Needs jtbl_800A5188 RODATA MIGRATION out of asm/data/249560.rodata.s
// (lines 1593-1609), which is outside this .c file. Reconstruction below (extern decl:
// void (*D_80089F64[])(struct210*, s32, u8)):
//   if ((arg0->unk58 & 0x400000) == 0) { result = 0; }
//   else switch (arg0->unk18.b.unk1) {   // case order = IDO source-order body layout
//     case 12: result=0xA; case 11: result=0x9; case 0: case 2: result=0; case 1: result=1;
//     case 5: result=2; case 6: result=3; case 3: result=4; case 7: result=5; case 8: result=6;
//     case 9: result=7; case 4: result=8; default: result=0; }
//   D_80089F64[result](arg0, arg1, arg2);
#pragma GLOBAL_ASM("asm/nonmatchings/game_169510/func_1513DF9C.s")

void func_1513E070(s32 arg0, s32 arg1, s32 arg2) {
}

void func_1513E084(struct210 *arg0, struct212 *arg1, u8 arg2) {
    struct212 *temp_v0 = &arg0->unk110;
    if (arg2 == 0x1A) {
        if ((temp_v0->unk0 == arg1->unk0) || (temp_v0->unk4.b.unk0 == arg1->unk4.b.unk0)) {
            func_1516972C(arg0);
        }
    } else {
        temp_v0 = &arg0->unk110;
        if (arg2 == 0x2D) {
            if (temp_v0->unk0 == arg1->unk0) {
                temp_v0->unk0 = arg1->unk4.i.unk0;
                temp_v0->unk4.b.unk0 = arg1->unk9;
            } else if (temp_v0->unk0 == arg1->unk4.i.unk0) {
                temp_v0->unk0 = arg1->unk0;
                temp_v0->unk4.b.unk0 = arg1->unk8;
            }
        }
    }
}

void func_1513E134(void) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_169510/func_1513E13C.s")
// void func_1513E13C(struct210 *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, u8 arg6) {
//     f32 sp48;
//     f32 sp30;
//     f32 sp1C;
//     f32 temp_f0, temp_f12, temp_f14, temp_f16, temp_f18, temp_f2;
//     s32 temp_f10;
//     sp48 = func_151423D8((arg6 - 0x40));
//     temp_f0 = func_151423D8(arg6);
//     temp_f12 = arg5 * sp48;
//     temp_f14 = arg4 * temp_f0;
//     temp_f18 = arg1 + temp_f14;
//     arg0->unk40 = temp_f18 - temp_f12;
//     temp_f10 = arg2;
//     arg0->unk42 = temp_f10;
//     temp_f16 = arg5 * temp_f0;
//     temp_f2 = arg4 * sp48;
//     sp1C = arg3 + temp_f16;
//     sp30 = arg1 - temp_f14;
//     arg0->unk44 = sp1C + temp_f2;
//     arg0->unk52 = temp_f10;
//     arg0->unk50 = sp30 - temp_f12;
//     arg0->unk54 = sp1C - temp_f2;
//     arg0->unk62 = temp_f10;
//     arg0->unk60 = sp30 + temp_f12;
//     arg0->unk72 = temp_f10;
//     arg0->unk70 = temp_f18 + temp_f12;
//     sp30 = arg3 - temp_f16;
//     arg0->unk64 = sp30 - temp_f2;
//     arg0->unk74 = sp30 + temp_f2;
// }  // best 3348: reg-alloc + 2 spills, permuter candidate

void func_1513E2A4(void) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_169510/func_1513E2AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_169510/func_1513E6E8.s")
// best 1775. Reconstruction below is logically correct (struct210_E6E8/struct211_E6E8
// float-views defined above) but IDO folds &arg0->unk110 into a0-absolute offsets
// instead of materializing addiu v0,a0,0x110; register naming (v0/v1,a1/a2) also
// differs. Structural codegen heuristic — permuter candidate.
// s32 func_1513E6E8(struct210_E6E8 *arg0) {
//     struct211_E6E8 *temp_v0, *temp_v0_2, *temp_v0_3, *temp_v0_4;
//     s32 phi_v1, phi_v1_2;
//     if ((arg0->unk58 & 0x20) != 0) {
//         temp_v0 = &arg0->unk110;
//         temp_v0->unkC = temp_v0->unkC + (temp_v0->unk2C * D_800BE9A4);
//     }
//     phi_v1 = arg0->unk58;
//     if ((arg0->unk58 & 0x40) != 0) {
//         temp_v0_2 = &arg0->unk110;
//         arg0->unk34 = arg0->unk34 + (temp_v0_2->unk8 * D_800BE9A4);
//         arg0->unk38 = arg0->unk38 + (temp_v0_2->unkC * D_800BE9A4);
//         arg0->unk3C = arg0->unk3C + (temp_v0_2->unk10 * D_800BE9A4);
//         phi_v1 = arg0->unk58;
//     }
//     temp_v0_3 = &arg0->unk110;
//     phi_v1_2 = phi_v1;
//     if ((phi_v1 & 0x80) != 0) {
//         arg0->unk40 = arg0->unk40 + (temp_v0_3->unk14 * D_800BE9A4);
//         arg0->unk44 = arg0->unk44 + (temp_v0_3->unk18 * D_800BE9A4);
//         arg0->unk48 = arg0->unk48 + (temp_v0_3->unk1C * D_800BE9A4);
//         phi_v1_2 = arg0->unk58;
//     }
//     temp_v0_4 = &arg0->unk110;
//     if ((phi_v1_2 & 0x100) != 0) {
//         arg0->unk4C = arg0->unk4C + (temp_v0_4->unk20 * D_800BE9A4);
//         arg0->unk50 = arg0->unk50 + (temp_v0_4->unk24 * D_800BE9A4);
//         arg0->unk54 = arg0->unk54 + (temp_v0_4->unk28 * D_800BE9A4);
//     }
//     arg0->unk5D = 0xFF;
//     return 1;
// }

// old mips_to_c reconstruction (pointer-typed):
// s32 func_1513E6E8(void *arg0) {
//     void *temp_v0;
//     void *temp_v0_2;
//     void *temp_v0_3;
//     void *temp_v0_4;
//     s32 phi_v1;
//     s32 phi_v1_2;
//
//     if ((arg0->unk58 & 0x20) != 0) {
//         temp_v0 = arg0->unk110;
//         temp_v0->unkC = (f32) (temp_v0->unkC + (temp_v0->unk2C * D_800BE9A4));
//     }
//     phi_v1 = arg0->unk58;
//     if ((arg0->unk58 & 0x40) != 0) {
//         temp_v0_2 = arg0->unk110;
//         arg0->unk34 = (f32) (arg0->unk34 + (temp_v0_2->unk8 * D_800BE9A4));
//         arg0->unk38 = (f32) (arg0->unk38 + (temp_v0_2->unkC * D_800BE9A4));
//         arg0->unk3C = (f32) (arg0->unk3C + (temp_v0_2->unk10 * D_800BE9A4));
//         phi_v1 = arg0->unk58;
//     }
//     temp_v0_3 = arg0->unk110;
//     phi_v1_2 = phi_v1;
//     if ((phi_v1 & 0x80) != 0) {
//         arg0->unk40 = (f32) (arg0->unk40 + (temp_v0_3->unk14 * D_800BE9A4));
//         arg0->unk44 = (f32) (arg0->unk44 + (temp_v0_3->unk18 * D_800BE9A4));
//         arg0->unk48 = (f32) (arg0->unk48 + (temp_v0_3->unk1C * D_800BE9A4));
//         phi_v1_2 = arg0->unk58;
//     }
//     temp_v0_4 = arg0->unk110;
//     if ((phi_v1_2 & 0x100) != 0) {
//         arg0->unk4C = (f32) (arg0->unk4C + (temp_v0_4->unk20 * D_800BE9A4));
//         arg0->unk50 = (f32) (arg0->unk50 + (temp_v0_4->unk24 * D_800BE9A4));
//         arg0->unk54 = (f32) (arg0->unk54 + (temp_v0_4->unk28 * D_800BE9A4));
//     }
//     arg0->unk5D = (u8)0xFF;
//     return 1;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/game_169510/func_1513E83C.s")

// ???
#pragma GLOBAL_ASM("asm/nonmatchings/game_169510/func_1513EAD8.s")

void func_1513EDB4(s32 arg0, s16 arg1) {
    func_1513EAD8(arg0, 0, arg1);
}

void func_1513EDE4(s32 arg0, s16 arg1) {
    func_1513EAD8(arg0, 1, arg1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_169510/func_1513EE14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_169510/func_1513F114.s")

void func_1513F4B0(struct210 *arg0, s16 arg1) {
    func_15140410(arg0, &arg0->unk110, &arg0->unk11C, arg1);
}

typedef struct {
    /* 0x00 */ u8 unk0;
    /* 0x01 */ u8 unk1;
    /* 0x02 */ u8 unk2;
    /* 0x03 */ u8 unk3;
    /* 0x04 */ u8 unk4;
    /* 0x05 */ u8 unk5;
    /* 0x06 */ u8 unk6;
    /* 0x07 */ u8 unk7;
    /* 0x08 */ u8 unk8;
    /* 0x09 */ u8 unk9;
    /* 0x0A */ u8 unkA;
    /* 0x0B */ u8 unkB;
    /* 0x0C */ u8 unkC;
    /* 0x0D */ u8 unkD;
    /* 0x0E */ u8 unkE;
    /* 0x0F */ u8 unkF;
} struct4BA8;
extern struct4BA8 D_800A4BA8[];
extern s16 D_800DD1BE;
s32 func_15143044(u8, s32);

// func_1513F4E4: G_SETCOMBINE gfx builder (struct4BA8 combine table entry). Reconstruction
// below reaches best 610: header, gDPPipeSync branch, and the w0 (combine word0) OR-tree are
// ALL byte-exact. Only w1's internal OR-tree scheduling differs by one IDO scheduler tie-break
// (andi(unkF) vs sll(unk9)) that then cascades register allocation for the rest of w1. The OR
// reduction order (unkF,unk9,unkC,unkE,unkB,unkD,unk1,unk3,unk5,unk7) is verified byte-correct;
// no C-level lever changes the schedule without changing the reduction. PERMUTER CANDIDATE.
// Gfx *func_1513F4E4(Gfx *gdl, u8 arg1, u8 *arg2) {
//     s32 temp_v0; struct4BA8 *e;
//     temp_v0 = func_15143044(arg1, 0);
//     if (temp_v0 != D_800DD1BE) {
//         if (*arg2 == 1) { gDPPipeSync(gdl++); *arg2 = 0; }
//         e = &D_800A4BA8[arg1];
//         gDPSetCombine(gdl++,
//             (e->unkA & 0x1F) | ((e->unk8 & 0xF) << 5) | ((e->unk0 & 0xF) << 20) |
//                 ((e->unk2 & 0x1F) << 15) | ((e->unk4 & 0x7) << 12) | ((e->unk6 & 0x7) << 9),
//             (e->unkF & 0x7) | ((e->unk9 & 0xF) << 24) | ((e->unkC & 0x7) << 21) |
//                 ((e->unkE & 0x7) << 18) | ((e->unkB & 0x7) << 6) | ((e->unkD & 0x7) << 3) |
//                 (e->unk1 << 28) | ((e->unk3 & 0x7) << 15) | ((e->unk5 & 0x7) << 12) |
//                 ((e->unk7 & 0x7) << 9));
//         D_800DD1BE = temp_v0;
//     }
//     return gdl;
// }
#pragma GLOBAL_ASM("asm/nonmatchings/game_169510/func_1513F4E4.s")

void func_1513F680(struct171 *arg0, u8 arg1, u8 arg2, u8 arg3, u8 arg4) {
    arg0->unk70 = arg1;
    arg0->unk71 = arg2;
    arg0->unk72 = arg3;
    arg0->unk73 = arg4;
}

void func_1513F6C0(struct210 *arg0, u8 arg1, u8 arg2) {
    arg0->unk80 = arg1;
    arg0->unk81 = arg2;
}

s32 func_1513F6E8(struct210_2 *arg0) {
    arg0->unk2C += arg0->unk128 * D_800BE9A4;
    arg0->unk30 += arg0->unk128 * D_800BE9A4;
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_169510/func_1513F728.s")

s32 func_1513FA2C(struct210_2 *arg0, s16 arg1) {
    f32 sp18[2];

    sp18[0] = 1.0f;
    sp18[1] = 1.0f;
    return func_1513FAB4(arg0, 0, sp18, arg1);
}

s32 func_1513FA70(struct210_2 *arg0, s16 arg1) {
    f32 sp18[2];

    sp18[0] = 1.0f;
    sp18[1] = 1.0f;
    return func_1513FAB4(arg0, 1, sp18, arg1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_169510/func_1513FAB4.s")

void func_1513FFF4(Vtx *arg0, u8 arg1, u8 arg2) {
    struct90B60 *e;
    u16 P;
    u16 Q;
    s32 tmp;

    if (arg1 == 0xFF) {
        return;
    }
    e = &D_80090B60[arg1];
    P = e->unk6 - 1;
    Q = e->unk8 - 1;

    tmp = (arg2 & 1) ? (P << 6) : 0;
    arg0[3].v.tc[0] = tmp;
    arg0[0].v.tc[0] = tmp;
    tmp = (arg2 & 1) ? 0 : (P << 6);
    arg0[2].v.tc[0] = tmp;
    arg0[1].v.tc[0] = tmp;
    tmp = (arg2 & 2) ? (Q << 6) : 0;
    arg0[1].v.tc[1] = tmp;
    arg0[0].v.tc[1] = tmp;
    tmp = (arg2 & 2) ? 0 : (Q << 6);
    arg0[3].v.tc[1] = tmp;
    arg0[2].v.tc[1] = tmp;
}

void func_151400D0(Vtx *arg0, struct169510Col *arg1) {
    arg0->v.flag = arg1->unk8;
    arg0->v.cn[0] = arg1->unk0;
    arg0->v.cn[1] = arg1->unk2;
    arg0->v.cn[2] = arg1->unk4;
    arg0->v.cn[3] = arg1->unk6;
    arg0->v.flag = 0;
    arg0++;
    arg1++;
    arg0->v.flag = arg1->unk8;
    arg0->v.cn[0] = arg1->unk0;
    arg0->v.cn[1] = arg1->unk2;
    arg0->v.cn[2] = arg1->unk4;
    arg0->v.cn[3] = arg1->unk6;
    arg0->v.flag = 0;
    arg0++;
    arg1++;
    arg0->v.flag = arg1->unk8;
    arg0->v.cn[0] = arg1->unk0;
    arg0->v.cn[1] = arg1->unk2;
    arg0->v.cn[2] = arg1->unk4;
    arg0->v.cn[3] = arg1->unk6;
    arg0->v.flag = 0;
    arg0++;
    arg1++;
    arg0->v.flag = arg1->unk8;
    arg0->v.cn[0] = arg1->unk0;
    arg0->v.cn[1] = arg1->unk2;
    arg0->v.cn[2] = arg1->unk4;
    arg0->v.cn[3] = arg1->unk6;
    arg0->v.flag = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_169510/func_15140190.s")

void func_151403A8(s32 arg0, u8 arg1) {
    func_15169260(&D_800A5168, 4, arg0, arg1);
}

void func_151403DC(s32 arg0, u8 arg1) {
    func_15169260(&D_800A5178, 3, arg0, arg1);
}

// func_15140410: quad-vertex generator. Vertex math is byte-exact; best hand score 743.
// The ONLY diff is an IDO block-scheduler artifact: the target wedges the `return 0` exit
// block between the memcpy(flag) block and the math merge, filling a `b`-delay-slot with a
// duplicated `lw arg1` — reachable neither by top nor bottom placement of the early return
// (flat `if(x==0)return` -> return-0 at top / 763; nested `if(x!=0){}return 0` -> at bottom / 743).
// Also flag stack slot lands at 0x5f not 0x47 (not controllable via decl order). PERMUTER CANDIDATE.
// s32 func_15140410(structQuad *arg0, f32 *arg1, f32 *arg2, s16 arg3):
//   func_151D5D60(&arg0->unk100[0], arg3, 0x40, &out, &flag); result = out;
//   if (out) { if (flag) { memcpy(unk100[arg3],&unkC0,0x40); memcpy(unk100[arg3]+0x40,&unkC0,0x40); }
//     ax=arg1[i]*unk2C; bx=arg2[i]*unk30; out[0]=center+a+b; out[1]=center-a+b; out[2]=center-a-b;
//     out[3]=center+a-b; each .ob[]=trunc, .flag=0; return result; } return 0;
#pragma GLOBAL_ASM("asm/nonmatchings/game_169510/func_15140410.s")

// func_151406AC: insertion-sort of a doubly-linked list into a stack sentinel (self-contained,
// integer-only). Algorithm fully reconstructed & structurally correct (frame 0x138 matches;
// node ~0x110 with unk4=prev, unk8=next, key = (unk18<<8)+(unk20>>16)). Best hand score 2005,
// but IDO's register coloring differs (target: key in t1, walking cand in v0; hand version
// rotates them) and the inner-loop uses branch-likely (bnezl) that the natural continue/do-while
// won't reproduce. Register-allocation + branch-likely near-miss. PERMUTER CANDIDATE.
//   slot=&D_800DCE50[arg2][arg1]; head=*slot; sentinel.unk18=0; sentinel.unk20=0; sentinel.unk8=head;
//   if(head){ head->unk4=&sentinel; for(cur=head->unk8; cur; cur=next){ prev=cur->unk4; next=cur->unk8;
//     key=...; for(cand=prev; cand; ){ if(key < candKey){cand=cand->unk4; continue;}
//     if(cand!=prev){ unlink cur; insert cur after cand; } break; } } }
//   *slot=sentinel.unk8; sentinel.unk8->unk4=0; return arg0;
#pragma GLOBAL_ASM("asm/nonmatchings/game_169510/func_151406AC.s")
