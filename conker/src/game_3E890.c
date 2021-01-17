#include <ultra64.h>

#include "functions.h"
#include "variables.h"


f32 D_800964C0 = 175.5;
f32 D_800964C4 = 115.4000015258789;
f32 D_800964C8 = 1.0420000553131104;
f32 D_800964CC = 0.9010000228881836;
f32 D_800964D0 = 1.2009999752044678;
f32 D_800964D4 = 0.7023000121116638;
f32 D_800964D8 = 2337.0;
f32 D_800964DC = 2220.0;
f32 D_800964E0 = 0.4099999964237213;
f32 D_800964E4 = 0.20000000298023224;
f32 D_800964E8 = 0.3499999940395355;
f32 D_800964EC = 0.3499999940395355;
f32 D_800964F0 = 9.999999974752427e-07;
f32 D_800964F4 = 2337.0;
f32 D_800964F8 = 2220.0;
f32 D_800964FC = 926.0;
f32 D_80096500 = -710.0;
f32 D_80096504 = -339.0;
// dont think these belong here?
f32 D_80096508 = 15.045271873474121;
f32 D_8009650C = 5.8676557540893555;


// typedef struct {
//     f32 sp38;
//     f32 sp3C;
//     f32 sp40;
//     f32 sp44;
//     f32 sp48;
//     f32 sp4C;
//     f32 sp50;
//     s8  sp54;
//     s8  pad55[0x1];
//     s16 sp56;
//     s16 sp58;
//     u8  pad5A[0x2];
//     s32 sp5C;
//     s32 sp60;
//     s8  sp64;
//     s8  sp65;
//     s8  sp66;
//     s8  sp67;
//     f32 sp68;
//     f32 sp6C;
//     f32 sp70;
//     f32 sp74;
//     f32 sp78;
//     f32 sp7C;
//     f32 sp80;
//     f32 sp84;
//     f32 sp88;
//     f32 sp8C;
//     f32 sp90;
//     s32 sp94;
//     s8  sp98;
//     s8  sp99;
//     s8  sp9A;
//     s8  sp9B;
//     f32 spAC;
//     f32 spB0;
//     f32 spB4;
//     f32 spB8;
//     f32 spBC;
//     f32 spC0;
//     f32 spC4;
//     f32 spC8;
//     f32 spCC;
//     u8  padD0[0x24];
//     f32 spF4;
//     u8 padF8[0x8];
//     s8 sp100;
//     s8 sp101;
//     s8 sp102;
//     s8 sp103;
//     s8 sp104;
// } structaaa;

#pragma GLOBAL_ASM("asm/nonmatchings/game_3E890/func_150113E0.s")
// void func_150113E0(void) {
//     struct181 *temp_v0;
//     structaaa tmp;
//
//     f32 temp_f16 = D_800964C0;
//     f32 temp_f18 = D_800964C4;
//
//     tmp.sp38 = D_800964C8;
//     tmp.sp3C = D_800964CC;
//     tmp.sp40 = D_800964D0;
//     tmp.sp48 = 0.0f;
//     tmp.sp4C = 7.0f;
//     tmp.sp50 = D_800964D4;
//     tmp.sp78 = D_800964D8;
//     tmp.sp84 = D_800964DC;
//     tmp.spBC = D_800964E0;
//     tmp.sp54 = 3;
//     tmp.sp56 = 0x3403;
//     tmp.sp58 = 0x12C;
//     tmp.sp64 = 0xE6;
//     tmp.sp44 = 1.0f;
//     tmp.sp5C = 0;
//     tmp.sp60 = 0;
//     tmp.sp65 = 0x64;
//     tmp.sp66 = 0;
//     tmp.sp67 = 0xFF;
//     tmp.sp68 = 100.0f;
//     tmp.sp6C = 100.0f;
//     tmp.sp70 = 520.0f;
//     tmp.sp74 = 72.0f;
//     tmp.sp7C = 520.0f;
//     tmp.sp80 = 72.0f;
//     tmp.sp88 = 1.0f;
//     tmp.sp8C = 1.0f;
//     tmp.sp90 = 1.0f;
//     tmp.sp94 = 0xD2012;
//     tmp.sp98 = 0xFF;
//     tmp.sp99 = 0xFF;
//     tmp.sp9A = 0;
//     tmp.sp9B = 6;
//     tmp.spB0 = tmp.spAC = temp_f16;
//     tmp.spB8 = tmp.spB4 = temp_f18;
//     tmp.sp100 = 0;
//     tmp.sp101 = 0;
//     tmp.sp102 = 0;
//     tmp.sp103 = 0;
//     tmp.sp104 = 0;
//     tmp.spF4 = 1.0f;
//     tmp.spC0 = D_800964E4;
//     tmp.spC4 = D_800964E8;
//     tmp.spC8 = D_800964EC;
//     tmp.spCC = D_800964F0;
//
//     temp_v0 = func_151407D0(520.0f, 72.0f, &tmp.spAC, 0x7C, &tmp.sp54, 0, 0x20, 0, 0, -1, 0xFF, 1);
//     if (temp_v0 != 0) {
//         memcpy(&temp_v0->unk170, &tmp, 12);
//     }
//     tmp.sp70 = -520.0f;
//     tmp.sp7C = -520.0f;
//     tmp.sp74 = 72.0f;
//     tmp.sp80 = 72.0f;
//     tmp.sp78 = D_800964F4;
//     tmp.sp84 = D_800964F8;
//     temp_v0 = func_151407D0(&tmp.spAC, 0x7C, &tmp.sp54, 0, 0x20, 0, 0, -1, 0xFF, 1);
//     if (temp_v0 != 0) {
//         memcpy(&temp_v0->unk170, &tmp, 12);
//     }
//
//     tmp.sp74 = 70.0f;
//     tmp.sp80 = 70.0f;
//     tmp.sp78 = D_800964FC;
//     tmp.sp84 = D_800964FC;
//     tmp.sp7C = -584.0f;
//     temp_v0 = func_151407D0(&tmp.spAC, 0x7C, &tmp.sp54, 0, 0x20, 0, 0, -1, 0xFF, 1);
//     if (temp_v0 != 0) {
//         memcpy(&temp_v0->unk170, &tmp, 12);
//     }
//     tmp.sp70 = 506.0f;
//     tmp.sp7C = 506.0f;
//     tmp.sp74 = 47.0f;
//     tmp.sp80 = 47.0f;
//     tmp.sp78 = D_80096504;
//     tmp.sp84 = -208.0f;
//     temp_v0 = func_151407D0(&tmp.spAC, 0x7C, &tmp.sp54, 0, 0x20, 0, 0, -1, 0xFF, 1);
//     if (temp_v0 != 0) {
//         memcpy(&temp_v0->unk170, &tmp, 12);
//     }
// }

#pragma GLOBAL_ASM("asm/nonmatchings/game_3E890/func_1501175C.s")

void func_15011A78(struct127 *arg0, u8 arg1, s32 arg2) {
    struct182 tmp;
    struct37 *temp_v0;

    tmp.unk0 = arg0;
    tmp.unk4 = arg0->unk3B;
    tmp.unk6 = 0;

    temp_v0 = func_15149130(300, -1, 85, -1, 0, 66, 8, arg1, arg2);
    if (temp_v0 != NULL) {
        memcpy(&temp_v0->unk28, &tmp, 8);
    }
}
