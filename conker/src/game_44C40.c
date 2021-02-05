#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_15017790(void) {
    func_1509C120();
    bzero(D_800D2E4C, 0x1B);
    bzero(&D_800D2E50, 0x10);
    bzero(&D_800D2E60, 9);
    bzero(&D_800D2E70, 0xCC);
    D_800D2E44 = (u8)0;
}

void func_150177F8(void) {
    func_1509BA04(1);
    bzero(&D_800D2F48, 0xC);
    func_150A00F0();
    D_800D2DB0 = D_800968C0;
    D_800D2E41 = 0xA;
    D_800D2E42 = 6;
    D_800D3858 = 0;
    D_800D2E44 = 0;
}

void func_15017868(void) {
    u16 *temp_v0;
    s32 i;

    for (i = 0; i < D_800D2F3C; i++) {
        temp_v0 = func_1509B704((s16)D_800D2F40[i]);
        if ((temp_v0 != 0) && ((temp_v0[0] & 0x1000) != 0)) {
            temp_v0[1] = D_800BE9F0;
        }

    }
    func_1509BA04(0);
    func_1509B4A0(*(((s16*)&D_800BE9F0)+1), 1); // er?
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_44C40/func_15017930.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_44C40/func_15017B20.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_44C40/func_15017FA4.s")
