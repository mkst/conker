#include <ultra64.h>

#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/code_8BF0/func_15008BF0.s")
// NON-MATCHING: absolute mess
// s32 func_15008BF0(struct110 *arg0) {
//     struct109 tmp;
//     f32 foo;
//     f32 bar = D_80095B40;
//
//     arg0->unk16 |= 4;
//     foo = arg0->unk6 * D_80095B44 * D_80095B48;
//
//     tmp.unk54 = 0.0f;
//     tmp.unk50 = foo;
//
//     tmp.unk70 = 4;
//     tmp.unk74 = 2;
//     tmp.unk60 = 100;
//     tmp.unk62 = 100;
//     tmp.unk6C = 40;
//     tmp.unk6E = 20;
//     //
//     tmp.unk58 = 7.0f;
//     tmp.unk5C = 6.0f;
//     tmp.unk48 = D_80095B4C;
//     tmp.unk4C = 7.5f;
//     tmp.unk64 = D_80095B50;
//     tmp.unk68 = D_80095B54;
//     tmp.unk2A = 20;
//     tmp.unk28 = arg0->unk10 * bar;
//     tmp.unk2E = 8;
//     tmp.unk2C = ((arg0->unkC * bar) - 64.0f);
//
//     func_15143874(tmp.unk28 - 64, arg0->unk6, &tmp.unk20, &tmp.unk24);
//
//     tmp.unk30 = arg0->unk0 - tmp.unk20;
//     tmp.unk34 = arg0->unk2;
//     tmp.unk3C = tmp.unk20 + tmp.unk20;
//     tmp.unk40 = 0.0f;
//     tmp.unk38 = arg0->unk4 - tmp.unk24;
//     tmp.unk44 = tmp.unk24 + tmp.unk24;
//
//     func_15189900(&tmp, arg0->unk1B);
//
//     return 1;
// }
