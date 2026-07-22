#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_15012FE0(void) {
    D_800BE570 = 0;
    D_800BE574 = 0;
    D_800BE575 = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_40490/func_15013000.s")
// NON-MATCHING: best score 275. The whole loop body is byte-identical; only the
// prologue schedule differs - IDO hoists the `lw D_800D3094` above the two global
// stores and sinks the `swc1 D_800DCD90` into the branch delay slot, while the
// target keeps source order and fills the delay slot from the loop preheader.
// Tried: for/while/do-while + explicit guard, explicit offset vs array indexing,
// swapped store order, stores through cast pointers - none change the hoist.
// (The `off + (s32)base` form is also needed to keep the two `addu`s from being
// CSE'd; with plain pointer arithmetic IDO merges them.)
//
// // structs.h types D_800D3098 as an array of struct178; it is really a pointer
// // to an array of 0x34-byte entries.
// typedef struct {
//     u8 pad0[0x15];
//     u8 unk15;
//     u8 pad16[0x1E];
// } Struct40490Elem; // size 0x34
//
// extern void (*D_80082E30[])(Struct40490Elem *);
//
// void func_15013000(void) {
//     u32 i;
//     s32 off;
//     u8 *base;
//     s32 x;
//     void (*func)(Struct40490Elem *);
//
//     D_800DCDC4 = 0;
//     D_800DCD90 = 0.0f;
//     i = 0;
//     off = 0;
//     if (D_800D3094 == 0) {
//         return;
//     }
//     do {
//         base = *(u8 **) &D_800D3098;
//         x = ((Struct40490Elem *) (base + off))->unk15;
//         func = D_80082E30[(u8) (x >> 2)];
//         if (func != NULL) {
//             func((Struct40490Elem *) (off + (s32) base));
//         }
//         i++;
//         off += 0x34;
//     } while (i < D_800D3094);
// }
// requires jump table
#pragma GLOBAL_ASM("asm/nonmatchings/game_40490/func_150130B4.s")

s32 func_1501370C(struct16 *arg0) {
    u8 idx = arg0->unk17;
    void (*func)(void) = D_80082EA0[idx];

    if (func != NULL) {
        func();
    }
    return 1;
}

s32 func_1501374C(struct16 *arg0) {
    arg0->unk16 |= 4;
    func_1515D088(arg0);
    return 1;
}

// NON-MATCHING: best score 1283. The entire function body is byte-identical (every
// value, call, and store matches) EXCEPT a uniform +4 stack-offset shift on the
// mtx+tmp aggregate block: the target packs recip(0x4C)+mtx(0x50)+tmp(0x90) into one
// 8-aligned contiguous block, while IDO here gives the named `f32 recip` an 8-byte
// spill slot (0x4C-0x53), pushing mtx to 0x54 and tmp to 0x94. Tried: swapping/merging
// mtx & tmp into one struct, recip as first struct member, recip inline-CSE, and every
// scalar-declaration order - none reproduce the tight recip/mtx packing. There is also
// a ~6-instruction prologue reschedule (IDO sinks `mtc1 zero,$f12` early and the
// a0/a3 setup late). PERMUTER CANDIDATE - same stack-slot class as func_150144B8 /
// func_150142EC. Full reconstruction below.
//
// extern f32 D_80096640;
// extern f32 D_80096644;
// extern void func_150A7960(f32 mtx[4][4], f32 arg1, f32 arg2, f32 arg3, f32 *arg4, f32 *arg5, f32 *arg6);
//
// typedef struct {
//     f32 unk0, unk4, unk8, unkC, unk10, unk14, unk18, unk1C, unk20, unk24, unk28, unk2C, unk30;
// } StructG40490; // size 0x34
//
// s32 func_15013778(struct134 *arg0) {
//     StructG40490 tmp;
//     f32 mtx[4][4];
//     struct37 *temp_v0;
//     f32 recip;
//     s32 t = ((s16 *) arg0)[4];
//
//     if (t != 0) {
//         tmp.unk18 = (f32) t + (f32) t;
//         recip = 1.0f / tmp.unk18;
//         tmp.unk1C = (f32) ((s16 *) arg0)[3];
//         tmp.unk20 = *(f32 *) &arg0->unkC;
//         tmp.unk28 = 0.0f;
//         tmp.unk2C = D_80096640;
//         tmp.unk30 = D_80096644;
//         tmp.unk24 = *(f32 *) &arg0->unk10;
//         tmp.unk0 = (f32) ((s16 *) arg0)[0];
//         tmp.unk4 = (f32) ((s16 *) arg0)[1];
//         tmp.unk8 = (f32) ((s16 *) arg0)[2];
//         func_150A8050(mtx, *(f32 *) &arg0->unkC, *(f32 *) &arg0->unk10, 0.0f);
//         func_150A7960(mtx, 0.0f, tmp.unk18, 0.0f, &tmp.unkC, &tmp.unk10, &tmp.unk14);
//         tmp.unkC *= recip;
//         tmp.unk10 *= recip;
//         tmp.unk14 *= recip;
//         temp_v0 = func_15149130(0x12C, -1, 0x19, -1, 0, 0x17, 0x34, 0xFF, 0);
//         if (temp_v0 != NULL) {
//             memcpy(&temp_v0->unk28, &tmp, 0x34);
//         }
//         {
//             s32 u8b = ((s16 *) arg0)[4];
//             func_1000FA64(0x67C, ((s16 *) arg0)[0], ((s16 *) arg0)[1] + u8b, ((s16 *) arg0)[2],
//                           0x2EE0, u8b * 2, u8b / 2, (s32) func_1000EF40, NULL, 0, 8, 0);
//         }
//     }
//     return 1;
// }
#pragma GLOBAL_ASM("asm/nonmatchings/game_40490/func_15013778.s")

s32 func_1501396C(struct16 *arg0) {
    u8 idx = arg0->unk17;
    void (*func)(void) = D_80082ECC[idx];

    if (func != NULL) {
        func();
    }
    return 1;
}

// NON-MATCHING: best score 18. The reconstruction below is BYTE-IDENTICAL to the
// target for every one of the 163 instructions EXCEPT the frame size: IDO here emits
// 0xC8 (prologue `addiu sp,-0xc8` / epilogue `addiu sp,0xc8`) while the target uses
// 0xC0. The 8 extra bytes are a dead home-slot IDO reserves for the register-resident
// `idx` (arg0->unk18, loaded early into a1 in the prologue gap, kept until the table
// index at the end, never spilled). The original avoids the slot via a scheduler hoist
// of the load that I cannot reproduce from C: declaring `idx` early gives the correct
// early load but reserves the home (score 18); inlining `&D_80095FA0[arg0->unk18]` or
// declaring idx late removes the slot but the load then schedules late (score 400-7000).
// Everything else - the case-2/case-0-1 body order (needs case 2 FIRST in source), the
// commutative operand orders (unk6*unkA -> [5]*[3], unk2+unk8 -> [4]+[1]), and CRUCIALLY
// the local declaration order (idx, e, tmp with tmp LAST so tmp lands at sp+0x50) - is
// dialed in. PERMUTER CANDIDATE: pure stack-slot elimination, same class the sibling
// notes (func_150144B8) say the permuter closes. Full reconstruction:
//
// permuter NO ZERO, best 18 (frame-size-only diff is normalized away by the
// permuter scorer -> base score 0, cannot be guided; pscore confirms real 18)
// extern f32 D_80096648;
// extern f32 D_8009664C;
//
// typedef struct {
//     f32 unk0; f32 unk4; f32 unk8; f32 unkC; f32 unk10;
//     s16 unk14; s16 unk16;
//     f32 unk18; f32 unk1C; f32 unk20; f32 unk24; f32 unk28; f32 unk2C;
//     u8  unk30; u8 unk31; u8 unk32; u8 unk33; u8 unk34; u8 pad35[0x3];
// } Struct40490Tbl; // size 0x38
// extern Struct40490Tbl D_80095FA0[];
//
// typedef struct {
//     struct134 *unk0;
//     f32 unk4; f32 unk8; f32 unkC; f32 unk10; f32 unk14; f32 unk18; f32 unk1C; f32 unk20;
//     s16 unk24; s16 unk26;
//     f32 unk28; f32 unk2C; f32 unk30; f32 unk34; f32 unk38; f32 unk3C;
//     u8  unk40; u8 unk41; u8 unk42; u8 pad43;
//     s16 unk44; u8 pad46[0x2];
//     f32 unk48; u8 pad4C[0x14];
//     s32 unk60; u8 unk64; u8 unk65; u8 pad66[0x2]; s32 unk68; s32 unk6C;
// } Struct40490H; // size 0x70
//
// s32 func_150139AC(struct134 *arg0) {
//     s32 idx = arg0->unk18;
//     Struct40490Tbl *e;
//     Struct40490H tmp;
//
//     arg0->unk16 |= 4;
//     tmp.unk0 = arg0;
//     tmp.unkC = 0.0f;
//     switch (((u8 *) arg0)[0x15] & 3) {
//     case 2:
//         tmp.unk4 = (f32) (((s16 *) arg0)[5] * ((s16 *) arg0)[3]) * 4.0f;
//         tmp.unk10 = (f32) (((s16 *) arg0)[4] + ((s16 *) arg0)[1]);
//         break;
//     case 0:
//     case 1:
//         tmp.unk4 = (f32) (((s16 *) arg0)[3] * ((s16 *) arg0)[3]) * D_80096648;
//         tmp.unk10 = (f32) (((s16 *) arg0)[4] + ((s16 *) arg0)[1]);
//         break;
//     default:
//         tmp.unk4 = 1.0f;
//         tmp.unk10 = 1000.0f;
//         break;
//     }
//     e = &D_80095FA0[idx];
//     tmp.unk14 = e->unk4;
//     tmp.unk18 = e->unk8;
//     tmp.unk1C = e->unkC;
//     tmp.unk20 = e->unk10;
//     tmp.unk28 = e->unk18;
//     tmp.unk2C = e->unk1C;
//     tmp.unk60 = 0;
//     tmp.unk64 = 0;
//     tmp.unk65 = 0;
//     tmp.unk68 = 0;
//     tmp.unk24 = e->unk14;
//     tmp.unk26 = e->unk16;
//     tmp.unk30 = e->unk20;
//     tmp.unk34 = e->unk24;
//     tmp.unk38 = e->unk28;
//     tmp.unk3C = e->unk2C;
//     tmp.unk8 = e->unk0;
//     tmp.unk40 = e->unk30;
//     tmp.unk41 = e->unk31;
//     tmp.unk42 = e->unk32;
//     tmp.unk48 = D_8009664C;
//     if (e->unk34 != 0) {
//         func_1510F800(0);
//         tmp.unk6C = func_1510FD20(arg0->unk0, arg0->unk4);
//     } else {
//         tmp.unk6C = 0;
//     }
//     if (e->unk33 != 0) {
//         tmp.unk44 = func_1000FA64(0x4D, ((s16 *) arg0)[0], ((s16 *) arg0)[1], ((s16 *) arg0)[2],
//                                   0x5DC0, 0x3E8, 0x12C, 0, 0, 0, 0, 0);
//     } else {
//         tmp.unk44 = 0;
//     }
//     {
//         struct37 *temp_v0 = func_151491F4(0x12C, -1, 6, 0, 0xA, 0x70, 0xFF, 0);
//         if (temp_v0 != NULL) {
//             memcpy(&temp_v0->unk28, &tmp, 0x70);
//         }
//     }
//     return 1;
// }
#pragma GLOBAL_ASM("asm/nonmatchings/game_40490/func_150139AC.s")

extern u8 D_800C35E8;
extern f32 D_80096650;
extern void (*D_80082F28[])(struct134 *, f32);

s32 func_15013C38(struct134 *arg0) {
    s32 v1 = arg0->unk18;
    void (*func)(struct134 *, f32);

    arg0->unk16 |= 4;
    if ((((u8 *) D_800D2E4C)[0x11] & 4) && (D_800BE9F0 == 0x13)) {
        return 1;
    }
    if (D_800C35EA == 1) {
        if ((D_800C35E8 == 0xF) || (D_800C35E8 == 0x10) || (D_800C35E8 == 0x11)) {
            return 1;
        }
    }
    if (v1 >= 6) {
        return 1;
    }
    func = D_80082F28[v1];
    if (func != NULL) {
        f32 farg = (f32) (u32) arg0->unk1C * D_80096650;
        func(arg0, farg);
    }
    return 1;
}

s32 func_15013D38(struct47 *arg0) {
    struct17 tmp;
    s32 temp_v0;

    arg0->unk16 |= 4;
    tmp.unk0 = arg0->unk0;
    tmp.unk4 = arg0->unk2;
    tmp.unk8 = arg0->unk4;

    temp_v0 = arg0->unk18;
    func_151BE850(&tmp, arg0->unk10, (u8) ((temp_v0 != 0) ? temp_v0 : 1), arg0->unk1F, 1, 0xFF, 1);
    return 1;
}

// NON-MATCHING: best score 40. Byte-identical except the two adjacent halfword
// stores tmp.unk20=0x6231 (sh @0x50) and tmp.unk22=0x1A4D (sh @0x52): IDO emits
// the li's in the same order (t0=0x6231, t1=0x1A4D) but stores 0x52 before 0x50
// (LIFO) while our build stores 0x50 first (FIFO) - a pure scheduler tie-break
// not controllable from C source order (swapping the assignments flips the li
// order and scores worse; the permuter plateaued at ~20). Full reconstruction is
// preserved in scratchpad nonmatchings/func_15013DE8/base.c.
#pragma GLOBAL_ASM("asm/nonmatchings/game_40490/func_15013DE8.s")

s32 func_15013F9C(s32 arg0) {
    func_151CD2C0(arg0, 0xFF, 1);
    return 1;
}

s32 func_15013FC4(struct133 *arg0) {
    u8 idx = arg0->unk1B;
    void (*func)(void) = D_80082F40[idx];

    if (func != NULL) {
        func();
    }
    return 1;
}

s32 func_15014004(struct134 *arg0) {
    s32 temp_v1 = arg0->unk1C;
    if (temp_v1 < 0) {
        return 1;
    }
    if (temp_v1 >= 6) {
        return 1;
    }
    D_800E0900[temp_v1] = arg0;
    return 1;
}

s32 func_15014040(struct134 *arg0) {
    s32 temp_v0 = arg0->unk18;
    arg0->unk16 |= 4;
    if (temp_v0 == 0) {
        D_800D9A20 = arg0;
    } else if (temp_v0 == 1) {
        D_800D9A24 = arg0;
    }
    return 1;
}

s32 func_1501407C(s32 arg0) {
    D_800D987C = (u8)0;
    return 1;
}

typedef struct {
    struct134 *unk0;
    f32 unk4;
    f32 unk8;
    s32 unkC;
    u8 pad10[0x1C];
    u8 unk2C;
    u8 pad2D[0x7];
} StructB40490; // size 0x34

// Declared s32 with no return statement on purpose: that is what the original
// compiled from (no `li v0, 1` in the epilogue, but the alloc result lands in v1).
s32 func_15014094(struct134 *arg0) {
    StructB40490 tmp;
    struct37 *temp_v0;

    arg0->unk16 |= 4;
    tmp.unk0 = arg0;
    tmp.unk4 = func_15144598(arg0);
    tmp.unk8 = 0.0f;
    func_1510F800(0);
    tmp.unkC = func_1510FD20(arg0->unk0, arg0->unk4);
    tmp.unk2C = 0;
    temp_v0 = func_15149130(0x12C, -1, 0x21, -1, 0, 0, 0x34, 0xFF, 1);
    if (temp_v0 != NULL) {
        memcpy(&temp_v0->unk28, &tmp, 0x34);
    }
}

extern s32 func_151A9390(u8, u8, struct134 *, s32, f32, f32, s32, s32, s32);

s32 func_15014144(struct134 *arg0) {
    s32 v = arg0->unk18;
    s32 flags = ((v & 1) ? 1 : 0)
              | ((v & 2) ? 0 : 2)
              | ((v & 4) ? 4 : 0)
              | ((v & 8) ? 8 : 0)
              | ((v & 0x10) ? 0x10 : 0);
    func_151A9390((u8) flags, ((u8 *) arg0)[0x1F], arg0, 0, *(f32 *) &D_8009667C, 100.0f, -1, 0xFF, 1);
    return 1;
}

typedef struct {
    f32 unk0;
    struct134 *unk4;
    u8 unk8;
} StructA40490; // size 0xC

s32 func_15014220(struct134 *arg0) {
    StructA40490 tmp;
    struct37 *temp_v0;

    arg0->unk16 |= 4;
    tmp.unk0 = 0.0f;
    tmp.unk4 = arg0;
    tmp.unk8 = 1;
    temp_v0 = func_15149130(0x12C, -1, 0x26, -1, 0, 0x24, 0xC, 0xFF, 0);
    if (temp_v0 != NULL) {
        memcpy(&temp_v0->unk28, &tmp, 0xC);
    }
    return 1;
}

s32 func_150142AC(struct110 *arg0) {
    s32 idx = arg0->unk1B;

    arg0->unk16 |= 4;
    if ((idx < 0) || (idx >= 3)) {
        return 1;
    }
    D_800D9AA0[idx] = (struct134 *) arg0;
    return 1;
}

extern f32 D_80096680, D_80096684;

typedef struct {
    struct134 *unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    f32 unk10;
    f32 unk14;
} StructH40490; // size 0x18

s32 func_150142EC(struct134 *arg0) {
    StructH40490 tmp;
    struct37 *temp_v0;
    f32 a, b, c, d;
    f32 ret;

    arg0->unk16 |= 4;
    if (D_80082FA0 >= 2) {
        return 1;
    }
    if ((((u8 *) D_800D2E4C)[0x11] & 4) && (D_800BE9F0 == 0x13)) {
        return 1;
    }
    a = (f32) ((u32) arg0->unk1C & 0xFFFF) * D_80096680;
    b = (f32) (((u32) arg0->unk1C >> 16) & 0xFFFF) * D_80096680;
    c = (f32) ((u32) arg0->unk20 & 0xFFFF) * D_80096680;
    d = (f32) (((u32) arg0->unk20 >> 16) & 0xFFFF) * D_80096680;
    ret = func_1514462C((s32) arg0);
    tmp.unk0 = arg0;
    tmp.unk4 = (a * ret) * D_80096684;
    tmp.unk8 = (b * ret) * D_80096684;
    tmp.unkC = c;
    tmp.unk10 = d;
    tmp.unk14 = 0.0f;
    temp_v0 = func_15149130(0x12C, -1, 0x29, -1, 0, 0, 0x18, 0xFF, 0);
    if (temp_v0 != NULL) {
        memcpy(&temp_v0->unk28, &tmp, 0x18);
    }
    return 1;
}
// NON-MATCHING: structurally byte-perfect (every instruction matches) except a
// uniform +8 stack-offset shift - IDO reserves an extra 8-byte scratch slot at the
// bottom of the locals that the target does not. The permuter reaches score 0 via a
// `*(&arg0->unk18)` pointer-reload, but only under its self-contained preamble's FP
// allocation; that fix does not transfer to the repo's full-header context. Full
// reconstruction preserved in scratchpad nonmatchings/func_150144B8/base.c.
#pragma GLOBAL_ASM("asm/nonmatchings/game_40490/func_150144B8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_40490/func_1501474C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_40490/func_15014B60.s")
typedef struct {
    struct134 *unk0;
    u32 unk4;
    u32 unk8;
    u32 unkC;
    f32 unk10[4][4];
    u8 unk50;
    u8 unk51;
    u8 pad52[0x2];
} StructF40490; // size 0x54

s32 func_15014F6C(struct134 *arg0) {
    StructF40490 tmp;
    struct37 *temp_v0;
    u8 r;
    s32 v;

    arg0->unk16 |= 4;
    tmp.unk51 = arg0->unk20;
    v = (arg0->unk1C & 1) ? 1 : 0;
    tmp.unk50 = v;
    tmp.unk0 = arg0;
    tmp.unk4 = arg0->unk18 & 0xFFFF;
    tmp.unk8 = ((u32) arg0->unk18 >> 16) & 0xFFFF;
    r = func_150ADA20();
    tmp.unkC = r % (tmp.unk8 + 1) + tmp.unk4;
    func_150A8050(tmp.unk10, *(f32 *) &arg0->unkC, *(f32 *) &arg0->unk10, 0.0f);
    tmp.unk10[3][0] = (f32) ((s16 *) arg0)[0];
    tmp.unk10[3][1] = (f32) ((s16 *) arg0)[1];
    tmp.unk10[3][2] = (f32) ((s16 *) arg0)[2];
    temp_v0 = func_15149130(0x12C, -1, 0x31, -1, 0, 0x2A, 0x54, 0xFF, 0);
    if (temp_v0 != NULL) {
        memcpy(&temp_v0->unk28, &tmp, 0x54);
    }
    return 1;
}

s32 func_150150A4(void) {
    struct17 *temp_v0 = func_1515F1B0();
    if (temp_v0 == NULL) {
        return 1;
    }

    func_1515F25C(&D_800DCDC4, temp_v0);
    D_800DCD90 += temp_v0->unk8;
    return 1;
}

typedef struct {
    struct134 *unk0;
    u8 unk4;
    s32 unk8;
    u8 unkC;
    s32 unk10;
} StructD40490; // size 0x14

s32 func_15015104(struct134 *arg0) {
    StructD40490 tmp;
    struct37 *temp_v0;
    s32 v;

    ((u8 *) arg0)[0x14] = 1;
    tmp.unk0 = arg0;
    tmp.unk4 = arg0->unk1C;
    func_1510F800(0);
    tmp.unk8 = func_1510FD20(arg0->unk0, arg0->unk4);
    v = arg0->unk20;
    tmp.unkC = ((v != 0) ? 1 : 0) | ((v != 0) ? 2 : 0);
    tmp.unk10 = 0;
    temp_v0 = func_15149130(0x12C, -1, -1, -1, 0, 0x2C, 0x14, 0xFF, 0);
    if (temp_v0 != NULL) {
        memcpy(&temp_v0->unk28, &tmp, 0x14);
    }
    return 1;
}
extern f32 D_800966B4;

typedef struct {
    struct134 *unk0;
    f32 unk4;
    s16 unk8;
    f32 unkC;
    f32 unk10;
    f32 unk14;
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[0x14];
    s32 unk38;
    u8 unk3C;
    u8 unk3D;
    u8 pad3E[0x2];
    s32 unk40;
    s32 unk44;
} StructE40490; // size 0x48

s32 func_150151D4(struct134 *arg0) {
    StructE40490 tmp;
    struct37 *temp_v0;

    arg0->unk16 |= 4;
    ((u8 *) arg0)[0x14] = 1;
    tmp.unk0 = arg0;
    tmp.unk4 = 0.0f;
    tmp.unk8 = -1;
    tmp.unkC = (f32) ((s16 *) arg0)[0];
    tmp.unk10 = (f32) ((s16 *) arg0)[1];
    tmp.unk14 = (f32) ((s16 *) arg0)[2];
    tmp.unk18 = (f32) ((s16 *) arg0)[3];
    tmp.unk1C = (f32) ((s16 *) arg0)[4];
    tmp.unk20 = D_800966B4;
    tmp.unk40 = 0;
    tmp.unk3D = 0;
    tmp.unk3C = 0;
    tmp.unk38 = 0;
    func_1510F800(0);
    tmp.unk44 = func_1510FD20(arg0->unk0, arg0->unk4);
    temp_v0 = func_15149130(0x12C, -1, 0x3C, -1, 0, 0x2D, 0x48, 0xFF, 0);
    if (temp_v0 != NULL) {
        memcpy(&temp_v0->unk28, &tmp, 0x48);
    }
    return 1;
}

s32 func_15015300(struct134 *arg0) {
    void (*func)(void);
    s32 idx = arg0->unk1C;

    if ((idx < 0) || (idx >= 2)) {
        return 1;
    }

    func = D_80082F70[idx];
    if (func != NULL) {
        func();
    }

    return 1;
}


#pragma GLOBAL_ASM("asm/nonmatchings/game_40490/func_15015354.s")
typedef struct {
    struct134 *unk0;
    f32 unk4;
    s32 unk8;
    u8 unkC;
} StructC40490; // size 0x10

s32 func_15015644(struct134 *arg0) {
    StructC40490 tmp;
    struct37 *temp_v0;

    arg0->unk16 |= 4;
    ((u8 *) arg0)[0x14] = 1; // structs.h types struct134.unk14 as u16; this is a byte store
    tmp.unk0 = arg0;
    tmp.unk4 = func_15144598(arg0);
    func_1510F800(0);
    tmp.unk8 = func_1510FD20(arg0->unk0, arg0->unk4);
    tmp.unkC = 0;
    temp_v0 = func_15149130(0x12C, -1, 0x44, -1, 0, 0x2F, 0x10, 0xFF, 0);
    if (temp_v0 != NULL) {
        memcpy(&temp_v0->unk28, &tmp, 0x10);
    }
    return 1;
}
#pragma GLOBAL_ASM("asm/nonmatchings/game_40490/func_150156F4.s")
