#include <ultra64.h>

#include "functions.h"
#include "variables.h"


// Local view of this file's object: struct132 declares pad0[0x48], so the
// fields at 0x10/0x11/0x14 used by func_1513B798 are not nameable there.
typedef struct {
    u8  pad0[0x10];
    u8  unk10;
    s8  unk11;
    u8  pad12[0x2];
    s16 unk14;
    u8  pad16[0x32];
    u8  unk48;
    u8  pad49[0x3];
    s32 unk4C;
} Obj168A90;

extern s32 (*D_80089C18[])(Obj168A90 *);

// Not present in functions.h; the u8 third parameter is required for matching.
void func_15109064(struct132 *arg0, s32 arg1, u8 arg2);
void func_151BA468(struct132 *arg0, s32 arg1, u8 arg2);

// File-local declarations for symbols not present in the shared headers.
extern f32 D_800A4A84, D_800A4A88, D_800A4A8C, D_800A4A90, D_800A4A94;

typedef struct {
    u8  pad0[0x50];
    /* 0x50 */ s32 unk50;
} ObjBase168A90;

typedef struct {
    /* 0x00 */ f32 unk0;
    /* 0x04 */ f32 unk4;
    /* 0x08 */ f32 unk8;
    /* 0x0C */ f32 unkC;
    /* 0x10 */ f32 unk10;
} Blk168A90;

typedef struct {
    u8  pad0[0x10];
    /* 0x10 */ u8  unk10;
    u8  pad11[0x1];
    /* 0x12 */ s8  unk12;
    u8  pad13[0x36];
    /* 0x49 */ u8  unk49;
    u8  pad4A[0xA];
    /* 0x54 */ s32 unk54;
} Obj168A90B;

extern s32 (*D_80089C28[])(Obj168A90B *, s32);

typedef struct {
    /* 0x00 */ u8  unk0;
    /* 0x01 */ u8  unk1;
    /* 0x02 */ u8  unk2;
    u8  pad3;
    /* 0x04 */ s16 unk4;
    u8  pad6[2];
    /* 0x08 */ s32 unk8;
    /* 0x0C */ s32 unkC;
    /* 0x10 */ s32 unk10;
    /* 0x14 */ s32 unk14;
    /* 0x18 */ s32 unk18;
    /* 0x1C */ s32 unk1C;
    /* 0x20 */ s32 unk20;
    /* 0x24 */ u8  unk24;
    /* 0x25 */ u8  unk25;
    u8  pad26[0xA];
    /* 0x30 */ s32 unk30;
    /* 0x34 */ s32 unk34;
    /* 0x38 */ u8  unk38;
    u8  pad39[3];
} Descriptor168A90;

ObjBase168A90 *func_1513B5E0(Descriptor168A90 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);

#pragma GLOBAL_ASM("asm/nonmatchings/game_168A90/func_1513B5E0.s")

void func_1513B798(Obj168A90 *arg0) {
    s32 ret;
    u8 kill;

    kill = 0;
    if ((arg0->unk10 & 1) != 0) {
        arg0->unk14 -= D_800BE9E4;
        if (arg0->unk14 < 0) {
            kill = 1;
        }
    }
    if (!kill) {
        if (arg0->unk11 != -1) {
            ret = D_80089C18[arg0->unk11](arg0);
            if (!ret) {
                kill = 1;
            }
        }
    }
    if (kill) {
        func_1516972C(arg0);
    }
}

Gfx *func_1513B83C(Gfx *arg0, Obj168A90B *arg1, s16 arg2) {
    s8 v0;

    if (((arg1->unk10 & 2) != 0) && ((arg1->unk49 & (1 << arg2)) == 0)) {
        return arg0;
    }
    v0 = arg1->unk12;
    if (v0 != -1) {
        if (D_80089C28[v0](arg1, (arg2 << 0x10) >> 0x10) == 0) {
            return arg0;
        }
    }
    { Gfx *g = arg0++; g->words.w0 = 0xDA380003; g->words.w1 = (u32)((u8 *)arg1 + (D_800BE9C0 << 6) + 0x78); }
    { Gfx *g = arg0++; g->words.w0 = 0xDB060004; g->words.w1 = *(u32 *)((u8 *)arg1 + (D_800BE9C0 << 4) + (arg2 << 2) + 0x58); }
    { Gfx *g = arg0++; g->words.w0 = 0xDE000000; g->words.w1 = arg1->unk54; }
    return arg0;
}

s32 func_1513B968(s32 arg0, s32 arg1) {
    // FIXME: &arg0->unk_120[D_800BE9C0]
    func_150A7B80(arg0 + 120 + (D_800BE9C0 << 6));
    return 1;
}

void func_1513B9A8(struct132 *arg0) {
    func_100043B4(arg0->unk4C, 4);
    func_15169804(arg0);
}

void func_1513B9DC(struct132 *arg0) {
    func_100043B4(arg0->unk4C, 4);
    func_15169824(arg0);
}

void func_1513BA10(struct132 *arg0) {
    D_80089C44[arg0->unk48]();
}

void func_1513BA44(struct132 *arg0) {
    D_80089C54[arg0->unk48]();
}

void func_1513BA78(struct132 *arg0, s32 arg1, u8 arg2) {
    switch (arg0->unk48) {
    case 1:
        func_15109064(arg0, arg1, arg2);
        break;
    case 2:
        func_151BA468(arg0, arg1, arg2);
        break;
    }
}

s32 func_1513BAD4(s32 arg0, s32 arg1) {
    return 0;
}

ObjBase168A90 *func_1513BAE8(void) {
    ObjBase168A90 *v0;
    Descriptor168A90 d;
    f32 sp24[5];

    d.unk1 = 2;
    d.unk2 = 5;
    d.unk4 = 0x12C;
    d.unk30 = 9;
    sp24[0] = 0.0f;
    sp24[1] = 0.0f;
    sp24[3] = 0.0f;
    sp24[4] = 0.0f;
    sp24[2] = 0.0f;
    d.unk0 = 0;
    d.unk34 = 0x1AE;
    d.unk8 = 1;
    d.unkC = 0x220205;
    d.unk10 = 0x40600;
    d.unk24 = 0;
    d.unk25 = 0;
    d.unk14 = 1;
    d.unk18 = 0x36;
    d.unk1C = 0x80;
    d.unk20 = 0x20;
    d.unk38 = 3;
    v0 = func_1513B5E0(&d, 1, 0x14, 0xFF, 1);
    if (v0 != 0) {
        if (v0->unk50 != 0x1180) {
            func_1516972C(v0);
        } else {
            memcpy((u8 *)v0 + v0->unk50 + 0xF8, sp24, 0x14);
        }
    }
    return v0;
}
#pragma GLOBAL_ASM("asm/nonmatchings/game_168A90/func_1513BBFC.s")
s32 func_1513BEB0(ObjBase168A90 *arg0) {
    Blk168A90 *blk = (Blk168A90 *)((u8 *)arg0 + arg0->unk50 + 0xF8);
    f32 temp;

    blk->unk8 += D_800A4A84 * D_800BE9A4;
    temp = func_15144B68(blk->unk8);
    blk->unk8 = temp;
    blk->unk0 += D_800A4A88 * D_800BE9A4;
    blk->unk4 = sinf(temp) * D_800A4A8C;
    blk->unkC += D_800A4A90 * D_800BE9A4;
    blk->unk10 += D_800A4A94 * D_800BE9A4;
    blk->unkC = func_15144B68(blk->unkC);
    blk->unk10 = func_15144B68(blk->unk10);
    while (blk->unk0 > 4096.0f) {
        blk->unk0 -= 4096.0f;
    }
    while (blk->unk0 < 0.0f) {
        blk->unk0 += 4096.0f;
    }
    while (blk->unk4 > 4096.0f) {
        blk->unk4 -= 4096.0f;
    }
    while (blk->unk4 < 0.0f) {
        blk->unk4 += 4096.0f;
    }
    return 1;
}
