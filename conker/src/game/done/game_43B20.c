#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_15016670(void) {
    D_800D18C0 = 0;
}

void func_15016680(void) {
    D_800D212C = 0;
}

void func_15016690(s32 arg0) {
    s32 tmp;

    D_800D2120 = -1;
    D_800D2124 = -1;
    tmp = func_1502B7F0(&D_800D212C, 3, 12, arg0, 6) / 24U;
    D_800D2128 = tmp;
    if (tmp == 0) {
        D_800D212C = allocate_memory(24, 1, 0, 0);
        D_800D2128 = 1U;
        if (D_800D20FC) {
            D_800D212C->unk0 = D_800D20FC->unk6;
            D_800D212C->unk2 = D_800D20FC->unk8;
            D_800D212C->unk4 = D_800D20FC->unkA;
            D_800D212C->unk8 = D_800D20FC->unk6 + 100;
            D_800D212C->unkC = D_800D20FC->unk8 + 100;
            D_800D212C->unk10 = D_800D20FC->unkA;
            D_800D212C->unk6 = 0;
            D_800D212C->unk7 = D_800D20FC->unkC;
            D_800D212C->unk15 = 0;
        } else {
            D_800D212C->unk0 = 0xE10;
            D_800D212C->unk2 = -0xC80;
            D_800D212C->unk4 = -0x898;
            D_800D212C->unk10 = 1000.0f;
            D_800D212C->unk8 = D_800D212C->unkC = D_800D212C->unk10;
            D_800D212C->unk6 = 0;
            D_800D212C->unk7 = 0;
            D_800D212C->unk15 = 0;
          }
    }
}
