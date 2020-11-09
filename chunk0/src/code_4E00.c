#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_85004E00(void) {
    u32 i;

    for (i = 0; i < 25; i++)
    {
        D_800C6660[i].unk0 = 0;
        D_800C6660[i].unk4 = 0;
        D_800C6660[i].unk8 = 0;
        D_800C6660[i].unkF = 0;
    }
}


#pragma GLOBAL_ASM("asm/nonmatchings/code_4E00/func_85004E80.s")
// NON-MATCHING: just a mess
// void func_85004E80(void) {
//     u16 temp_t7 = D_800B0DF0->unk1A;
//
//     D_800C3E7C = temp_t7;
//     D_800C3E80 = func_80003C40((temp_t7 & 0xFFFF) << 6, 1, 3, 0);
//     D_800C3E84 = func_80003C40(D_800C3E7C << 6, 1, 3, 0);
// }
