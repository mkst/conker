#include <ultra64.h>
#include "functions.h"
#include "variables.h"

// File-local declarations: structs.h lacks/mistypes these layouts and the
// shared headers may not be edited.
typedef struct {
    u8  pad0[0x1C];
    s16 unk1C;
    u8  pad1E[0xE];
    f32 unk2C;
    f32 unk30;
    u8  pad34[0x28];
    u8  unk5C;
    u8  pad5D[0xCB];
    f32 unk128[1];
} Local161520A;

typedef struct {
    u8  pad0[0x60];
    s32 unk60;
    u8  pad64[0x10];
    u8  unk74;
    u8  pad75[0xFB];
    s32 unk170;
    u8  pad174[0x60];
    s32 unk1D4;
} Local161520B;

typedef struct {
    u8  pad0[0x10];
    s32 unk10;
    u8  pad14[0x4];
    u8  unk18;
    u8  pad19[0x3];
    s32 unk1C;
} Local161520C;

typedef struct {
    u8  pad0[0x28];
    s16 unk28;
} Local15134DACsrc;

typedef struct {
    u8  pad0[0x10];
    s32 unk10;
    s32 unk14;
    u8  unk18[0x3C];
    s16 unk54;
    u8  pad56[0x1A];
    f32 unk70;
    f32 unk74;
    f32 unk78;
} Local15134DAC;

extern void *func_15167A68(s32, s32, s32, s32, u8, s32);

extern f32 D_800A45B0;

typedef struct {
    u8  pad0[0x16];
    u8  unk16;
} Local15134908src;

typedef struct {
    u8   pad0[0x10];
    f32 *unk10;
    f32 *unk14;
    f32 *unk18;
    f32  unk1C;
    u8   pad20[0xC];
    f32  unk2C;
    f32  unk30;
    f32  unk34;
    f32  unk38;
    f32  unk3C;
} Local15134908;

typedef struct {
    u8  pad0[0x14];
    f32 unk14;
    u8  pad18[0x4];
    f32 unk1C;
    u8  pad20[0xE];
    u8  unk2E;
    u8  pad2F[0x41];
    f32 unk70;
    f32 unk74;
} Local15134CEC;

typedef struct {
    s32 unk0;
    u8  unk4;
} Local161520D;

typedef struct {
    u8 pad0[0x10];
} Local161520E;

typedef struct {
    s32 unk0;
    s32 unk4;
} Local161520F;

extern f32 D_800A4828;
extern Local161520E D_800A3FD8[];

typedef struct {
    u8  pad0[0x44];
    u16 unk44;
    u8  pad46[0xA];
    u8  unk50;
} Local1513532C;

extern void (*D_80089B70[6])(Local1513532C *);
extern void (*D_80089B88[6])(Local1513532C *);

void func_151BC5A4(struct102 *arg0, s32 arg1, u8 arg2);
void func_1513A5E0(s32 arg0, u8 arg1, s32 arg2);
void func_15145EA4(Local161520F *arg0, Local161520F *arg1, s32 arg2, s32 arg3);
void func_1513555C(Local161520C *arg0, Local161520D *arg1, u8 arg2);

// requires jump table
#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15134070.s")

s32 func_1513416C(struct102 *arg0) {
    s16 temp_v0 = arg0->unk1C;
    if (temp_v0 < 32) {
        arg0->unk28 = temp_v0 * 8;
    }
    return 1;
}

typedef struct {
    s32 unk0;
    u8  pad4[0x37];
    u8  unk3B;
    u8  pad3C[0x38];
    u8  unk74;
    u8  pad75[0x15F];
    s32 unk1D4;
} Local1513418Cb;

typedef struct {
    u8  pad0[0x10];
    u8  unk10[0x8];
    u8  unk18;
    u8  pad19[0x3];
    Local1513418Cb *unk1C;
    u8  unk20;
    u8  pad21[0x3];
    u8  unk24[0xC];
    f32 unk30;
    u8  pad34[0x6];
    u8  unk3A;
    u8  pad3B[0x5];
    u8  unk40[0xC];
    f32 unk4C;
    f32 unk50;
} Local1513418Ca;

void *func_1513418C(void *arg0, s32 arg1, u8 arg2, s32 arg3) {
    Local1513418Ca *ret = (Local1513418Ca *) func_15167A68(0x28, arg3, arg1 + 0x58, 1, arg2, 1);
    Local1513418Cb *v0_2;
    s32 temp;
    u8 flags;

    if (ret == NULL) {
        return NULL;
    }
    memcpy(&ret->unk10, arg0, 0x30);
    flags = ret->unk3A;
    if ((flags & 2) != 0) {
        v0_2 = ret->unk1C;
        if ((v0_2->unk0 == 0) || (v0_2->unk3B != ret->unk18)) {
            func_1516972C(ret);
            return NULL;
        }
        temp = v0_2->unk1D4;
        if ((temp != 0) && ((v0_2->unk74 & 0xF) != 0xF)) {
            func_15143134(&ret->unk24, &ret->unk40, (u8 *) temp + (ret->unk20 << 6));
        } else {
            ret->unk3A = flags | 8;
        }
    } else {
        ret->unk3A = flags | 0x18;
    }
    ret->unk4C = 1.0f / (ret->unk30 + ret->unk30);
    ret->unk50 = 0.0f;
    return ret;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_151342BC.s")

s32 func_151346D0(s32 arg0, struct102 *arg1, s32 arg2) {
    arg1->unk3A &= 0xFFEF;
    return arg0;
}

void func_151346EC(struct102 *arg0) {
    func_15169804(arg0);
}

void func_1513470C(struct102 *arg0) {
    func_15169824(arg0);
}

void func_1513472C(struct102 *arg0) {
    s32 idx = arg0->unk3D;
    if (idx < 0) {
        idx = 0;
    }
    if (idx >= 10) {
        idx = 0;
    }
    D_80089AAC[idx]();
}

void func_1513477C(struct102 *arg0) {
  s32 idx = arg0->unk3D;
  if (idx < 0) {
      idx = 0;
  }
  if (idx >= 10) {
      idx = 0;
  }
    D_80089AD4[idx]();
}

// PERMUTER CANDIDATE: byte-identical EXCEPT the case-0x2D else-if emits
// `bnel v1,t9` where target has `bnel t9,v1` (symmetric equality, operands
// swapped). IDO orders the two live regs by age here; not flippable from C
// source order. One instruction from a full match.
// typedef struct { u8 pad0[0x18]; u8 unk18; u8 pad19[0x3]; s32 unk1C;
//                  u8 pad20[0x1D]; u8 unk3D; } Local151347CCa;
// typedef struct { s32 unk0; s32 unk4; u8 unk8; u8 unk9; } Local151347CCb;
// void func_151347CC(Local151347CCa *arg0, Local161520D *arg1, u8 arg2) {
//     if ((arg2 == 0) || (arg2 == 3)) {
//         if ((arg1->unk0 == arg0->unk1C) || (arg1->unk4 == arg0->unk18)) {
//             func_1516972C(arg0);
//         }
//     } else if (arg2 == 0x11) {
//         if (arg0->unk3D == 5) {
//             if ((arg1->unk0 == arg0->unk1C) || (arg1->unk4 == arg0->unk18)) {
//                 func_1516972C(arg0);
//             }
//         }
//     } else if (arg2 == 0x16) {
//         if ((s32) arg1 == arg0->unk1C) {
//             func_1516972C(arg0);
//         }
//     } else if (arg2 == 0x2D) {
//         Local151347CCb *p = (Local151347CCb *) arg1;
//         s32 d = p->unk0;
//         s32 c = arg0->unk1C;
//         if (d == c) {
//             arg0->unk1C = p->unk4;
//             arg0->unk18 = p->unk9;
//         } else if (p->unk4 == c) {
//             arg0->unk1C = d;
//             arg0->unk18 = p->unk8;
//         }
//     }
// }
#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_151347CC.s")

void func_151348F0(f32 arg0, f32 arg1, s32 arg2, s32 arg3) {
}

Local15134908 *func_15134908(Local15134908src *arg0, s32 arg1, u8 arg2, s32 arg3) {
    Local15134908 *temp = func_15167A68(0x2A, arg3, arg1 + 0x40, 1, arg2, 1);

    if (temp == NULL) {
        return NULL;
    }
    arg0->unk16 |= 2;
    memcpy(&temp->unk10, arg0, 0x1C);
    temp->unk2C = *temp->unk10;
    temp->unk30 = *temp->unk14;
    temp->unk34 = *temp->unk18;
    temp->unk38 = 1.0f / (2.0f * temp->unk1C);
    temp->unk3C = 0.0f;
    return temp;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_151349D0.s")

void func_15134C98(struct102 *arg0, s32 arg1, u8 arg2) {
    if (arg0->unk28 == 1) {
        func_151BC5A4(arg0, arg1, arg2);
    }
}

void func_15134CD4(f32 arg0, f32 arg1, s32 arg2, s32 arg3) {
}

s32 func_15134CEC(Local15134CEC *arg0) {
    s32 v1 = arg0->unk2E;

    arg0->unk70 += 0.125f * D_800BE9A4;
    arg0->unk74 += D_800A45B0 * D_800BE9A4;
    arg0->unk14 += arg0->unk70 * D_800BE9A4;
    arg0->unk1C += arg0->unk74 * D_800BE9A4;
    if (130.0f < arg0->unk14) {
        return 0;
    }
    v1 -= 2 * D_800BE9E4;
    if (v1 < 0) {
        return 0;
    }
    arg0->unk2E = v1;
    return 1;
}

// best 20 (own score): byte-perfect except arg0->unk28 lands in $a0 (reused after
// memcpy) vs target $t9 (fresh temp), cascading to the const-1 register. permuter
// exhausted to 20 only; the $a0 allocation is not controllable from C here.
// Local15134DAC *func_15134DAC(Local15134DACsrc *arg0, s32 arg1) {
//     Local15134DAC *temp = func_15167A68(0x29, 0, arg1 + 0x80, 1, 0xFF, 1);
//     s32 neg;
//     if (temp == NULL) { return NULL; }
//     memcpy(&temp->unk18, arg0, 0x3C);
//     neg = arg0->unk28;
//     temp->unk10 = 1;
//     temp->unk54 = -neg;
//     temp->unk14 = 0;
//     temp->unk70 = 0.0f;
//     temp->unk74 = 0.0f;
//     temp->unk78 = 0.0f;
//     return temp;
// }
#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15134DAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15134E48.s")

void func_151352EC(struct102 *arg0) {
    func_15169804(arg0);
}

void func_1513530C(struct102 *arg0) {
    func_15169824(arg0);
}

void func_1513532C(Local1513532C *arg0) {
    u16 temp;
    s32 idx = arg0->unk50;

    if (idx < 0) {
        idx = 0;
    } else if (idx >= 6) {
        idx = 0;
    }
    temp = arg0->unk44;
    if (temp != 0) {
        func_100111C8(temp);
        arg0->unk44 = 0;
    }
    D_80089B70[idx](arg0);
}

void func_151353A8(Local1513532C *arg0) {
    u16 temp;
    s32 idx = arg0->unk50;

    if (idx < 0) {
        idx = 0;
    } else if (idx >= 6) {
        idx = 0;
    }
    temp = arg0->unk44;
    if (temp != 0) {
        func_100111C8(temp);
        arg0->unk44 = 0;
    }
    D_80089B88[idx](arg0);
}

void func_15135424(s32 arg0, Local161520F arg1, Local161520F arg2) {
    Local161520F sp20;
    Local161520F sp18;

    sp20.unk0 = arg1.unk0;
    sp20.unk4 = arg1.unk4;
    sp18.unk0 = arg2.unk0;
    sp18.unk4 = arg2.unk4;
    func_15145EA4(&sp20, &sp18, arg0, 2);
}

// PERMUTER CANDIDATE: byte-identical structure EXCEPT the case-0x2D swap emits a
// v0<->v1 register rename (p->unk0 lands in v0 here, target wants v1), which also
// flips the else-if `bnel` operands and a `move a2,a3` vs `nop`. Same unsolvable
// v0/v1 swap as func_151347CC's 0x2D case; not controllable from C.
// typedef struct { u8 pad0[0x18]; u8 unk18; u8 pad19[0x3]; s32 unk1C;
//                  u8 pad20[0x30]; u8 unk50; } Local15135480a;
// typedef struct { s32 unk0; s32 unk4; u8 unk8; u8 unk9; } Local15135480b;
// void func_15135480(Local15135480a *arg0, void *arg1, u8 arg2) {
//     if (arg2 == 0x2D) {
//         Local15135480b *p = (Local15135480b *) arg1;
//         if (arg0->unk1C == p->unk0) {
//             arg0->unk1C = p->unk4; arg0->unk18 = p->unk9;
//         } else if (p->unk4 == arg0->unk1C) {
//             arg0->unk1C = p->unk0; arg0->unk18 = p->unk8;
//         }
//     }
//     switch (arg0->unk50) {
//     case 1: func_151355B8(arg0, arg1, arg2); break;
//     case 2: func_1513555C((Local161520C *) arg0, (Local161520D *) arg1, arg2); break;
//     default:
//         if (arg2 == 0) {
//             Local161520D *q = (Local161520D *) arg1;
//             if ((q->unk0 == arg0->unk1C) || (q->unk4 == arg0->unk18)) {
//                 func_1516972C(arg0);
//             }
//         }
//         break;
//     }
// }
#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15135480.s")

void func_1513555C(Local161520C *arg0, Local161520D *arg1, u8 arg2) {
    if ((arg2 == 0) || (arg2 == 0x12)) {
        if ((arg0->unk1C == arg1->unk0) || (arg0->unk18 == arg1->unk4)) {
            func_1516972C((struct102 *) arg0);
        }
    }
}

// best 100 (own score): switch matches byte-for-byte except the target emits a
// duplicated `sw t6,0x10(a0)` store in the case-3 body (IDO branch-likely artifact
// not reproducible from clean C). See below.
// void func_151355B8(Local161520C *arg0, Local161520D *arg1, u8 arg2) {
//     switch (arg2) {
//     case 0:
//         if ((arg0->unk1C == arg1->unk0) || (arg0->unk18 == arg1->unk4)) {
//             func_1516972C((struct102 *) arg0);
//         }
//         break;
//     case 3:
//         if ((arg0->unk1C == arg1->unk0) || (arg0->unk18 == arg1->unk4)) {
//             arg0->unk10 &= ~1;
//         }
//         break;
//     }
// }
#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_151355B8.s")

s32 func_15135658(struct259 *arg0) {
    arg0->unk74 = 1.0f;
    return 1;
}

f32 func_15135670(s32 arg0) {
    // "power", "../Effects/Blood/blood.c"
    return func_151422DC(0, &D_800A3FB4, 0, 2000, 1000, &D_800A3FBC, 2938) * D_800A45B4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_151356D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15135BF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15135DD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15136404.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15136698.s")

s32 func_151368A8(Local161520A *arg0) {
    s16 v0 = arg0->unk1C;
    f32 *p = arg0->unk128;
    s32 v1;

    if (v0 < 32) {
        v1 = v0 * 8;
        if (v1 < arg0->unk5C) {
            arg0->unk5C = v1;
        }
    }
    arg0->unk2C += *p * D_800BE9A4;
    arg0->unk30 += *p * D_800BE9A4;
    return 1;
}

typedef struct {
    s32 unk0;
    s16 unk4;
    u8  unk6;
    u8  pad7;
    s32 unk8;
    s32 unkC;
    u8  unk10;
    u8  unk11;
    u8  unk12;
    u8  unk13;
    u8  unk14;
    u8  unk15;
    u8  unk16;
    u8  unk17;
    s32 unk18;
    u8  pad1C[0xC];
} Local15136918;

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3f15136918;

void func_15136918(f32 arg0, u8 arg1, u8 arg2, s16 arg3, s16 arg4, s32 arg5, Vec3f15136918 *arg6, u8 arg7, s32 arg8) {
    Local15136918 sp48;
    s32 pad[2];

    sp48.unk6 = 0x55;
    sp48.unk0 = 0x300;
    sp48.unk8 = 0;
    sp48.unkC = 0;
    sp48.unk10 = arg1;
    sp48.unk11 = arg2;
    sp48.unk12 = 0;
    sp48.unk13 = 0;
    sp48.unk14 = 0;
    sp48.unk15 = 0;
    sp48.unk18 = 0x280001;
    sp48.unk16 = 1;
    sp48.unk17 = 1;
    if (arg3 == -1) {
        sp48.unk4 = 300;
    } else {
        sp48.unk0 = 0x301;
        sp48.unk4 = arg3 + 0x20;
    }
    func_1513C73C((s32) &sp48, 0xD, 0, arg5, arg6->x, arg6->y, arg6->z, arg0, arg0, arg4, 0, 0, arg7, arg8);
}

s32 func_15136A1C(struct102 *arg0) {
    s16 temp_v0 = arg0->unk1C;
    s32 temp_v1;

    if (temp_v0 < 32) {
        temp_v1 = temp_v0 * 8;
        if (temp_v1 < arg0->unk28) {
            arg0->unk28 = temp_v1;
        }
    }
    return 1;
}

extern f32 D_800A461C;
extern f32 D_800A4620;

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    f32 unkC;
    f32 unk10;
    s16 unk14;
    u8  unk16;
    u8  unk17;
    u8  unk18;
    s8  unk19;
} Local15136A50;

void func_15136A50(s32 arg0, s32 arg1, s32 arg2, s16 arg3, s32 arg4, s32 arg5) {
    Local15136A50 sp1C;

    sp1C.unk0 = arg0;
    sp1C.unk4 = arg1;
    sp1C.unk8 = arg2;
    sp1C.unkC = D_800A461C;
    sp1C.unk10 = D_800A4620;
    sp1C.unk14 = arg3;
    sp1C.unk16 = 5;
    sp1C.unk17 = 5;
    sp1C.unk18 = 2;
    sp1C.unk19 = -1;
    func_15134908((Local15134908src *) &sp1C, 0, arg4, arg5);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15136AE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15136C3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15136F50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15137610.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_1513783C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15137C64.s")

s32 func_15137E10(struct259 *arg0) {
    arg0->unk74 = (func_150ADA68() * 50.0f + 580.0f) * D_800A4828;
    return 1;
}

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3f37F30;

typedef struct {
    u8  unk0;
    u8  unk1;
    u8  pad2[0xA];
    u8  unkC;
    u8  padD[0x67];
    f32 unk74;
} Struct37F30;

typedef struct {
    f32 unk0;
    u8  pad4;
    u8  unk5;
    s16 unk6;
    f32 unk8;
    Vec3f37F30 unkC;
    Vec3f37F30 unk18;
    Vec3f37F30 unk24;
} Buf37E60;

extern f32 D_800A482C;

void func_15137F30(Vec3f37F30 *arg0, Vec3f37F30 *arg1, Vec3f37F30 *arg2, Vec3f37F30 *arg3, f32 arg4, Struct37F30 *arg5, Vec3f37F30 *arg6, Vec3f37F30 *arg7, Vec3f37F30 *arg8, f32 *arg9, s16 *argA, u8 *argB, f32 *argC);
extern void func_151D9014(Vec3f37F30 *, Vec3f37F30 *, s32, f32, s16, u8, f32, s32, f32, f32, s32, s32, s32, s32, u8, u8);

void func_15137E60(Vec3f37F30 *arg0, Vec3f37F30 *arg1, Vec3f37F30 *arg2, Vec3f37F30 *arg3, f32 arg4, Struct37F30 *arg5) {
    Buf37E60 buf;

    func_15137F30(arg0, arg1, arg2, arg3, arg4, arg5, &buf.unk24, &buf.unk18, &buf.unkC, &buf.unk8, &buf.unk6, &buf.unk5, &buf.unk0);
    func_151D9014(&buf.unk24, &buf.unkC, 0, buf.unk8, buf.unk6, buf.unk5, buf.unk0, 0, 1.0f, 1.0f, 1, 0, 1, 0, arg5->unkC, arg5->unk1);
}

void func_15137F30(Vec3f37F30 *arg0, Vec3f37F30 *arg1, Vec3f37F30 *arg2, Vec3f37F30 *arg3, f32 arg4, Struct37F30 *arg5, Vec3f37F30 *arg6, Vec3f37F30 *arg7, Vec3f37F30 *arg8, f32 *arg9, s16 *argA, u8 *argB, f32 *argC) {
    arg6->x = arg0->x + arg2->x * arg4;
    arg6->y = arg0->y + arg2->y * arg4;
    arg6->z = arg0->z + arg2->z * arg4;
    arg7->x = arg1->x + arg3->x * arg4;
    arg7->y = arg1->y + arg3->y * arg4;
    arg7->z = arg1->z + arg3->z * arg4;
    arg8->x = (arg7->x - arg6->x) * arg5->unk74;
    arg8->y = (arg7->y - arg6->y) * arg5->unk74;
    arg8->z = (arg7->z - arg6->z) * arg5->unk74;
    *arg9 = (func_150ADA68() * 217.0f + -456.0f) * D_800A482C;
    *argA = (u32) func_150ADA20() % 0x1F + 0x1E;
    *argB = (u32) func_150ADA20() % 0x9C + 0x64;
    *argC = func_150ADA68() * 35.0f + 40.0f;
}

s32 func_151380B4(Local161520B *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0 = arg0->unk1D4;

    if (temp_v0 == 0) {
        return 0;
    }
    if ((arg0->unk74 & 0xF) == 0xF) {
        return 0;
    }
    func_15143134(&D_800A3FD8[arg1], arg2, temp_v0 + 0x300);
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15138120.s")

typedef struct {
    s32 a;
    s32 b;
    s32 c;
} Vec3w382E0;

typedef struct {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
    Vec3w382E0 unk8;
    f32 unk14;
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    f32 unk24;
    f32 unk28;
    s16 unk2C;
    s16 unk2E;
    s16 unk30;
    s16 unk32;
    s16 unk34;
    s16 unk36;
    s16 unk38;
    s16 unk3A;
    u8  unk3C;
    u8  pad3D[3];
    f32 unk40;
    s16 unk44;
    s16 unk46;
    s32 unk48;
} Local151382E0;

extern f32 D_800A4830, D_800A4834, D_800A4838, D_800A483C, D_800A4840;
extern u8 D_800A3FE6[];
extern void func_15153F18(Local151382E0 *, Vec3w382E0 *, void *, u8, s32);

void func_151382E0(void *arg0, s32 arg1, void *arg2, u8 arg3, s32 arg4) {
    Local151382E0 sp24;

    if (D_800A3FE6[arg1 * 16] != 2) {
        sp24.unk8 = *(Vec3w382E0 *) arg0;
        sp24.unk2C = 0x12;
        sp24.unk2E = 7;
        sp24.unk2 = 0xFF;
        sp24.unk0 = 0;
        sp24.unk4 = -63;
        sp24.unk6 = 78;
        sp24.unk30 = 3;
        sp24.unk32 = 3;
        sp24.unk14 = D_800A4830;
        sp24.unk18 = D_800A4834;
        sp24.unk1C = D_800A4838;
        sp24.unk20 = D_800A483C;
        sp24.unk24 = 4.0f;
        sp24.unk28 = 9.0f;
        sp24.unk34 = 0x14;
        sp24.unk36 = 0x1E;
        sp24.unk38 = 0x9B;
        sp24.unk3A = 0x64;
        sp24.unk44 = 0x10;
        sp24.unk46 = 0xF;
        sp24.unk48 = 0;
        sp24.unk40 = D_800A4840;
        if (D_800A3FE6[arg1 * 16] == 1) {
            sp24.unk3C = 1;
        } else {
            sp24.unk3C = 0;
        }
        func_15153F18(&sp24, &sp24.unk8, arg2, arg3, arg4);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15138424.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_151389A8.s")

// PERMUTER CANDIDATE: logic byte-identical, but IDO spills (u8)arg1 to a fresh
// stack slot (0x28) and reloads, vs target rematerializing lbu 0x67 per call.
// The extra spill slot grows the frame 0x60->0x68; not controllable from C.
// void func_15138BC0(void *arg0, s32 arg1, s32 arg2) {
//     s32 s1;
//     u8 sp50[0x10];
//     u8 sp4F;
//     u8 sp28[0x27];
//     s1 = func_15134070(arg0);
//     if (s1 != 0x63) {
//         sp4F = func_151380B4(arg0, s1, sp50);
//         func_15138120(arg0, s1, 1);
//         if (sp4F != 0) {
//             func_1504715C(sp28, arg0);
//             func_151382E0(sp50, s1, sp28, (u8) arg1, arg2);
//             func_15138424(arg0, sp50, s1, sp28, (u8) arg1, arg2);
//         }
//     }
// }
#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15138BC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15138C80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15138E98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15139578.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15139768.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15139D74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_1513A24C.s")

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} Vec3w161520;

typedef struct {
    s32 unk0;
    s32 unk4;
    Vec3w161520 unk8;
    s16 unk14;
    s16 unk16;
    s16 unk18;
    s16 unk1A;
    f32 unk1C;
    f32 unk20;
    f32 unk24;
    f32 unk28;
    s16 unk2C;
    s16 unk2E;
    f32 unk30;
    f32 unk34;
    f32 unk38;
} Local1513A5E0;

extern f32 D_800A4950, D_800A4954, D_800A4958, D_800A495C;
extern f32 D_800A4960, D_800A4964, D_800A4968, D_800A496C;
extern s32 D_800A4260, D_800A4264, D_800A4268, D_800A4270;
extern void func_15152190(Local1513A5E0 *, void *, void *, s32, f32, s32, u8, s32);

// PERMUTER CANDIDATE (best ~1661): reconstruction is algorithmically exact and all
// FP/int registers match. ONLY the duplicated float LOAD (D_800A4950 -> unk30/unk34)
// must be scheduled into the prologue BEFORE `sw ra` (getting $f0); IDO instead
// schedules it after the register-saves. Placing the load first in source, chaining,
// or a local `temp` all fix the REGISTER (f0) but not the prologue placement.
// void func_1513A48C(s32 arg0, u8 arg1, s32 arg2) {
//     Local1513A5E0 sp2C;
//     f32 temp = D_800A4950;
//     sp2C.unk0 = 8;
//     sp2C.unk4 = 4;
//     sp2C.unk8 = *(Vec3w161520 *) arg0;
//     sp2C.unk14 = 0;
//     sp2C.unk16 = 0xFF;
//     sp2C.unk18 = -55;
//     sp2C.unk1A = 32;
//     sp2C.unk2C = 40;
//     sp2C.unk2E = 20;
//     sp2C.unk30 = temp;
//     sp2C.unk34 = temp;
//     sp2C.unk1C = 10.0f;
//     sp2C.unk20 = 9.0f;
//     sp2C.unk24 = D_800A4954;
//     sp2C.unk28 = D_800A4958;
//     sp2C.unk38 = D_800A495C;
//     func_15152190(&sp2C, &D_800A4260, &D_800A4264, 1, 0.0f, 1, arg1, arg2);
// }
// permuter NO ZERO, best 240 (permuter improved to 120 only; the duplicated
// D_800A4950 float load will not cross the sw-ra prologue boundary from C).
#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_1513A48C.s")

// PERMUTER CANDIDATE (best ~310): logic correct; target reloads arg0 into $v0 and
// returns it, but any form that keeps the dead `arg0->unk1D4` check loads arg0 into
// $v1 and needs `move v0,v1` at the returns; an empty-if form drops the check
// entirely. v0/v1 near-miss not resolvable from C.
// Local161520B *func_1513A594(Local161520B *arg0, s32 arg1, s32 arg2, u8 arg3, s32 arg4) {
//     func_1513A5E0(arg1, arg3, arg4);
//     if (arg0->unk1D4) { return arg0; }
//     return arg0;
// }
#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_1513A594.s")

// PERMUTER CANDIDATE (best 931): algorithmically exact; same blocker as func_1513A48C.
// The literal 4.0 hoists to the prologue ($f0) via chaining, but the duplicated float
// LOAD D_800A4960 (unk30/unk34) will not prologue-hoist to $f2 from C — IDO leaves it
// in the mid-body float group ($f4), cascading the FP register numbers and store order.
// void func_1513A5E0(s32 arg0, u8 arg1, s32 arg2) {
//     Local1513A5E0 sp2C;
//     sp2C.unk0 = 7;
//     sp2C.unk4 = 7;
//     sp2C.unk8 = *(Vec3w161520 *) arg0;
//     sp2C.unk14 = 0;
//     sp2C.unk16 = 0xFF;
//     sp2C.unk18 = -50;
//     sp2C.unk1A = 27;
//     sp2C.unk1C = sp2C.unk20 = 4.0f;
//     sp2C.unk30 = sp2C.unk34 = D_800A4960;
//     sp2C.unk2C = 25;
//     sp2C.unk2E = 40;
//     sp2C.unk24 = D_800A4964;
//     sp2C.unk28 = D_800A4968;
//     sp2C.unk38 = D_800A496C;
//     func_15152190(&sp2C, &D_800A4268, &D_800A4270, 2, 0.0f, 1, arg1, arg2);
// }
// permuter NO ZERO, best 931 (permuter plateaued at 515 only via a semantically
// invalid unk24-after-call reorder; prologue-hoist blocker unsolved from C).
#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_1513A5E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_1513A6E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_1513ABB8.s")

void func_1513B0B8(Local161520B *arg0, s32 arg1, u8 arg2) {
    s32 *p = &arg0->unk170;
    if (arg2 == 0x45) {
        if (--*p < 0) {
            arg0->unk60 |= 0x80;
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_1513B0F8.s")
