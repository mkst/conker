#include <ultra64.h>

#include "functions.h"
#include "variables.h"


// PERMUTER CANDIDATE (best 565): shape is exact but IDO constant-folds the row
// base. Target anchors at &D_800D2460[2] via runtime `li v0,2; sll t6,v0,4; addu`,
// which needs a non-foldable index 2 (no clean leaf C reproduces it):
// s32 func_1508F060(void) {
//     s32 i = 2;
//     D_800D246D = 0; D_800D247D = 0;
//     D_800D2460[i+1][13] = 0; D_800D2460[i+2][13] = 0;
//     D_800D2460[i+3][13] = 0; D_800D2460[i][13] = 0;
//     D_800D24C0 = 0; return i;
// }
#pragma GLOBAL_ASM("asm/nonmatchings/game_BC510/func_1508F060.s")

void func_1508F0A4(void) {
    func_1508F0D4();
    func_1508F9F4();
    func_1509093C();
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_BC510/func_1508F0D4.s")

void func_1508F7BC(void) {
    f32 sp48[4][4];
    f32 sp44;
    struct256 *temp_v0;

    D_800D2456 -= 1;
    D_800D2890.unk0 = (u32) (func_150ADA20() % 5U);
    D_800D2890.unk8 = sqrtf(25.0f - (D_800D2890.unk0 * D_800D2890.unk0));
    temp_v0 = allocate_memory(sizeof(*temp_v0), 1, 1, 0);
    temp_v0->unk80 = D_800D245C;
    D_800D245C = temp_v0;
    guMtxL2F(&sp48, (D_800D2456 << 7) + ((D_800BE9C0 ^ 1) << 6) + &D_800D2590);
    func_1503E5F8(&sp48, &temp_v0->unk84, &temp_v0->unk88, &temp_v0->unk8C, &temp_v0->unk9C, &temp_v0->unkA0, &temp_v0->unkA4, &sp44, &sp44, &sp44);

    temp_v0->unk90 = (u32)((func_150ADA20() & 0xF) + 10);
    temp_v0->unk94 = (u32)((func_150ADA20() & 0x1F) + 20);
    temp_v0->unk98 = 0.0f;
    temp_v0->unkA8 = (u32)(func_150ADA20() & 0xF);
    temp_v0->unkAC = (u32)(func_150ADA20() & 0xF);
    temp_v0->unkB0 = (u32)(func_150ADA20() & 0xF);
    temp_v0->unkB4 = 120;
}

void func_1508F9C4(void) {
    D_800D2410[D_800D2456++] = 0.0f;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_BC510/func_1508F9F4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_BC510/func_1508FD38.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_BC510/func_150900F0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_BC510/func_15090630.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_BC510/func_1509093C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_BC510/func_150911F4.s")

extern u8 D_D16;
extern u32 func_1510D0EC(s32, s32, s32, s32);

Gfx *func_15091534(Gfx *arg0, s32 arg1, u8 *arg2) {
    u32 temp_v0;

    *arg2 = 0;
    temp_v0 = func_1510D0EC(arg1 + (s32) &D_D16, 0, 3, 0);
    if (temp_v0 != 0x80000000) {
        { Gfx *g = arg0++; g->words.w0 = 0xFD500000; g->words.w1 = temp_v0; }
        { Gfx *g = arg0++; g->words.w0 = 0xF5500000; g->words.w1 = 0x07098260; }
        { Gfx *g = arg0++; g->words.w0 = 0xE6000000; g->words.w1 = 0; }
        { Gfx *g = arg0++; g->words.w0 = 0xF3000000; g->words.w1 = 0x073FF000; }
        { Gfx *g = arg0++; g->words.w0 = 0xE7000000; g->words.w1 = 0; }
        { Gfx *g = arg0++; g->words.w0 = 0xF5400800; g->words.w1 = 0x00098260; }
        { Gfx *g = arg0++; g->words.w0 = 0xF2000000; g->words.w1 = 0x000FC0FC; }
        { Gfx *g = arg0++; g->words.w0 = 0xFD100000; g->words.w1 = temp_v0 + 0x800; }
        { Gfx *g = arg0++; g->words.w0 = 0xE6000000; g->words.w1 = 0; }
        { Gfx *g = arg0++; g->words.w0 = 0xF0000000; g->words.w1 = 0x0603C000; }
        { Gfx *g = arg0++; g->words.w0 = 0xEF00AC3F; g->words.w1 = 0x00504244; }
        *arg2 = 1;
    }
    return arg0;
}

void func_15042D94(s32 arg0, s32 arg1, u8 arg2, s32 arg3, ...);

void func_150916B4(s32 x, s32 y, s32 frames, s32 color) {
    s32 minutes;
    s32 seconds;
    s32 totalSec;
    s32 centi;
    s32 shift;

    if (frames >= 0x57030) {
        frames = 0x57030;
    }
    centi = (frames % 60) * 100 / 60;
    if (centi >= 100) {
        centi = 99;
    }
    x -= 8;
    if (frames >= 0) {
        totalSec = frames / 60;
        minutes = totalSec / 60;
        shift = (minutes >= 10) ? 5 : 0;
        func_15042D94(x - shift - 8, y, color, (s32) &D_8009DCC0, minutes);
        seconds = totalSec % 60;
        func_15042D94(x, y, color, (s32) &D_8009DCC4, seconds);
        func_15042D94(x + 0x10, y, color, (s32) &D_8009DCCC, centi);
    } else {
        func_15042D94(x - 8, y, color, (s32) &D_8009DCD4);
        func_15042D94(x, y, color, (s32) &D_8009DCD8);
        func_15042D94(x + 0x10, y, color, (s32) &D_8009DCE0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_BC510/func_150918EC.s")

void func_15093818(s32 arg0) {
    if ((arg0 != 0) && (D_800D2458 == 0)) {
        D_800D2458 = 1;
        func_15093878();
        return;
    }
    if ((arg0 == 0) && (D_800D2458 != 0)) {
        D_800D2458 = 0;
    }
}

void func_15093878(void) {
    D_800D2448 = func_1518C900(0xBA);
    D_800D244C = allocate_memory(0x80, 1, 1, 0);
}

// PERMUTER CANDIDATE (best 2417): logic is byte-perfect (all instructions match).
// Remaining diffs: (1) IDO rotates saved regs s4-s7 by allocation priority so &D_11AD
// lands in s4 (mine puts it in s7); (2) the float args need a runtime int->float
// (li/mtc1/cvt.s.w) that IDO keeps constant-folding to lui float literals here.
// extern u8 D_11AD; extern s32 D_800D2450; void func_150A7D00(s32, f32, f32, f32);
// Gfx *func_150938BC(Gfx *arg0) {
//     Gfx *gfx = arg0; s32 t; s32 i; u32 v0;
//     t = (D_800D2450 / 30) % 60;
//     for (i = 4; i != 0; i--) {
//         v0 = func_1510D0EC((s32)(&D_11AD + (t % 10)), 0, 3, 0);
//         if (v0 == 0x80000000) return gfx;
//         { Gfx *g = gfx++; g->words.w0 = 0xDB060000 | ((i << 2) & 0xFFFF); g->words.w1 = v0; }
//         if (i == 3) t = (D_800D2450 / 30) / 60; else t = t / 10;
//     }
//     func_150A7D00((D_800BE9C0 << 6) + D_800D244C, 120, 129, -303);
//     { Gfx *g = gfx++; g->words.w0 = 0xDA380003; g->words.w1 = (D_800BE9C0 << 6) + D_800D244C; }
//     { Gfx *g = gfx++; g->words.w0 = 0xDE000000; g->words.w1 = D_800D2448; }
//     return gfx;
// }
#pragma GLOBAL_ASM("asm/nonmatchings/game_BC510/func_150938BC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_BC510/func_15093B58.s")
