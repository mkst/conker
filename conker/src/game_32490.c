#include <ultra64.h>

#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/game_32490/func_15004FE0.s")
// NON-MATCHING: miles away
// s32 func_15004FE0(s32 arg0) {
//     struct161 **sp34;
//     u32 temp_lo;
//     s32 i;
//
//     sp34 = 0;
//     temp_lo = func_1502B7F0(&sp34, 3, 12, arg0, 3) / 24U;
//     D_800C6654 = temp_lo;
//     allocate_memory(temp_lo * 20, 1, 1, 0);
//
//     for(i = 0; i < D_800C6654; i++) {
//         D_800C6650[i].unk0 = sp34[i]->unk0;
//         D_800C6650[i].unk2 = sp34[i]->unk4;
//         D_800C6650[i].unk4 =  sp34[i]->unk8;
//         D_800C6650[i].unk6 = 0;
//         D_800C6650[i].unk8 = sp34[i]->unkC * sp34[i]->unkC;
//         D_800C6650[i].unkC = sp34[i]->unk10;
//         D_800C6650[i].unkE = sp34[i]->unkC + sp34[i]->unk0;
//         D_800C6650[i].unk10 = sp34[i]->unk0 - sp34[i]->unkC;
//         D_800C6650[i].unk12 = sp34[i]->unk14;
//     }
//     if (sp34 != NULL) {
//         func_10004074(sp34);
//     }
//     return i;
// }
