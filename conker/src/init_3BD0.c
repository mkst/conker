#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_10003BD0(void) {
    struct54 *tmp;

    D_800380B4 = (struct54 *)&D_800E9D10;
    D_800380B4->unk0 = NULL;
    D_800380B4->unk4 = NULL;
    D_800380B4->unk8 = D_80038098 - (u32)&D_800E9D10 - 0x14;
    D_800380B4->unkC = 0;
    D_800380B4->unk10 = 0;
    tmp = D_800380B4;
    D_800380BC = (s32 *)tmp;
    D_800380B8 = (struct54 *)D_800380BC;
    D_800380B0 = tmp;
}
