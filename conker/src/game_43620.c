#include <ultra64.h>

#include "functions.h"
#include "variables.h"

#pragma GLOBAL_ASM("asm/nonmatchings/game_43620/func_15016170.s")
// looks straightforward.. but... isnt
// void func_15016170(s32 arg0) {
//     bzero(&D_800E0D80, 160);
//     D_800E0D80.unk8 = alHeapDBAlloc(0, 0, arg0, 1, 80);
//     D_800E0D80.unk74 = alHeapDBAlloc(0, 0, arg0, 1, 1088);
//     D_800E0D80.unk5C = alHeapDBAlloc(0, 0, arg0, 1, 8);
//     D_800E0D80.unk96 = 64;
//     D_800E0D80.unkC = 64;
//     D_800E0D80.unkE = 0x7FFF;
//     D_800E0D80.unk84 = 0;
//     D_800E0D80.unk88 = 0x7FFF;
//     D_800E0D80.unk9A = 0;
//     D_800E0D80.unk32 = 0;
//     D_800E0D80.unk30 = 0;
//     D_800E0D80.unk94 = D_800E0D80.unk96;
//     D_800E0D80.unk10 = (D_8002BC10[D_800E0D80.unkC] * D_800E0D80.unkE) >> 15;
//     D_800E0D80.unk12 = (D_8002BD0E[-D_800E0D80.unkC] * D_800E0D80.unkE) >> 15;
//     D_800E0D80.unk24 = 1;
//     D_800E0D80.unk14 = 0x7FFC;
//     D_800E0D80.unk16 = 0;
//     func_151F3C34(func_151F3C4C, D_800E0D80.unkE, 64);
// }
