#include <ultra64.h>

#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/game_EF410/func_150C1F60.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_EF410/func_150C2290.s")
// TODO: figure out this struct!

#pragma GLOBAL_ASM("asm/nonmatchings/game_EF410/func_150C2424.s")
typedef struct {
    u8  pad0[0x1C];
    s16 unk1C;
    u8  pad1E[0x7A];
    struct110 *unk98;
} struct_EF410_0;

s32 func_150C251C(struct_EF410_0 *arg0) {
    struct110 *p = arg0->unk98;
    s32 temp = arg0->unk1C << 3;
    if (temp >= 0x100) {
        temp = 0xFF;
    }
    p->unk1B = temp;
    if (p->unk1B < 0) {
        return 0;
    }
    return 1;
}
#pragma GLOBAL_ASM("asm/nonmatchings/game_EF410/func_150C2558.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_EF410/func_150C2700.s")
extern f32 D_800A0280;
extern f32 D_800A0284;
void func_15134908(void *arg0, s32 arg1, u8 arg2, s32 arg3);

typedef struct {
    /* 0x00 */ s32 unk0;
    /* 0x04 */ s32 unk4;
    /* 0x08 */ s32 unk8;
    /* 0x0C */ f32 unkC;
    /* 0x10 */ f32 unk10;
    /* 0x14 */ s16 unk14;
    /* 0x16 */ s8  unk16;
    /* 0x17 */ s8  unk17;
    /* 0x18 */ s8  unk18;
    /* 0x19 */ s8  unk19;
} struct_EF410_2;

void func_150C2804(s32 arg0, s32 arg1, s32 arg2, s16 arg3, u8 arg4, s32 arg5) {
    struct_EF410_2 sp1C;
    sp1C.unk0 = arg0;
    sp1C.unk4 = arg1;
    sp1C.unk8 = arg2;
    sp1C.unkC = D_800A0280;
    sp1C.unk10 = D_800A0284;
    sp1C.unk14 = arg3;
    sp1C.unk16 = 5;
    sp1C.unk17 = 6;
    sp1C.unk18 = 3;
    sp1C.unk19 = -1;
    func_15134908(&sp1C, 0, arg4, arg5);
}
#pragma GLOBAL_ASM("asm/nonmatchings/game_EF410/func_150C2898.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_EF410/func_150C29F0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_EF410/func_150C2C00.s")
typedef struct {
    u8  pad0[0x2C];
    f32 unk2C;
    f32 unk30;
    u8  pad34[0x4];
    f32 unk38;
    u8  pad3C[0x10];
    f32 unk4C;
    f32 unk50;
    u8  pad54[0xFC];
    f32 unk150;
} struct_EF410_1;

// PERMUTER CANDIDATE (best 465): structure correct; residual = 10.0f constant CSE
// (target re-materializes mtc1 per compare, IDO CSEs to f0) + f16/f18 register rename.
// s32 func_150C2FCC(struct_EF410_1 *arg0) {
//     f32 f0 = arg0->unk2C; f32 f2 = arg0->unk150; f32 f12 = arg0->unk30;
//     f32 f14 = arg0->unk50; f32 f18 = arg0->unk4C;
//     arg0->unk2C = f0 - f0 * f2;
//     arg0->unk30 = f12 - f12 * f2;
//     arg0->unk38 = arg0->unk38 + (f14 * D_800BE9A4 + 0.5f * f18 * D_800BE9A4 * D_800BE9A4);
//     arg0->unk50 = f14 + f18 * D_800BE9A4;
//     if (arg0->unk2C < 10.0f || arg0->unk30 < 10.0f) { return 0; }
//     return 1;
// }
#pragma GLOBAL_ASM("asm/nonmatchings/game_EF410/func_150C2FCC.s")
typedef struct {
    /* 0x00 */ f32 unk0;
    /* 0x04 */ u8  pad4[4];
    /* 0x08 */ f32 unk8;
} struct_EF410_vec;

typedef struct {
    u8  pad0[0x1C];
    s16 unk1C;
    u8  pad1E[0x142];
    f32 unk160;
} struct_EF410_308C;

extern struct_EF410_vec *func_15144B34(s32 arg0, s32 arg1);

// PERMUTER CANDIDATE (best 165, JUSTREG): structure/frame correct; residual is pure
// register renames -- flag lands in a2 vs target a1, and sum/consts f8/f10/f16 vs f12/f8/f10.
// s32 func_150C308C(struct_EF410_308C *arg0) {
//     u8 flag = 0;
//     struct_EF410_vec *v;
//     if (arg0->unk1C >= 6) {
//         v = func_15144B34(D_80082FA4, 0);
//         if (v->unk0 * v->unk0 + v->unk8 * v->unk8 < D_800A0310) {
//             flag = 1;
//         } else {
//             if (D_800A0314 < func_15144C8C(func_150484A0(v->unk0, v->unk8), arg0->unk160)) {
//                 flag = 1;
//             }
//         }
//     }
//     if (flag != 0) { arg0->unk1C = 5; }
//     return 1;
// }
#pragma GLOBAL_ASM("asm/nonmatchings/game_EF410/func_150C308C.s")

typedef struct {
    u8  pad0[0x2E4];
    s32 unk2E4;
    s32 unk2E8;
    s32 unk2EC;
} struct_EF410_3160;

// PERMUTER CANDIDATE (best 5, JUSTREG): whole body matches except the FIRST Gfx store's
// base register -- target uses the copy (a1) for both words, IDO CSEs the first write to
// arg0 (a2). Every other instruction is byte-identical.
Gfx *func_150C3160(Gfx *arg0, struct_EF410_3160 *arg1) {
    f32 frac; s32 val; s32 x;
    if (arg1->unk2E8 != 0) { frac = (f32)arg1->unk2E4 / (f32)arg1->unk2E8; }
    else { frac = 1.0f; }
    frac = 1.0f - frac;
    val = 500.0f * frac + 2.0f;
    x = 2 - arg1->unk2EC;
    arg1->unk2EC = val / 3;
    while (x < 0) { x += 0x40; }
    { Gfx *g = arg0;
      if ((g && g) && g) {}
      g->words.w0 = ((val & 0xFFF) << 12) | 0xF2000000 | (x & 0xFFF);
      arg0++;
      g->words.w1 = 0x041FE03E; }
    return arg0;
}
#pragma GLOBAL_ASM("asm/nonmatchings/game_EF410/func_150C3230.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_EF410/func_150C3574.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_EF410/func_150C3994.s")

s32 func_150C3D48(s32 arg0) {
    return arg0 + 0xEDCBA988;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_EF410/func_150C3D5C.s")
