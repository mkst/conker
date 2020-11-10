#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_85017790(void) {
    func_8509C120();
    func_800226F0(D_800D2E4C, 0x1B);  // bzero
    func_800226F0(&D_800D2E50, 0x10);
    func_800226F0(&D_800D2E60, 9);
    func_800226F0(&D_800D2E70, 0xCC);
    D_800D2E44 = (u8)0;
}

void func_850177F8(void) {
    func_8509BA04(1);
    func_800226F0(&D_800D2F48, 0xC);
    func_850A00F0();
    D_800D2DB0 = D_800968C0;
    D_800D2E41 = 0xA;
    D_800D2E42 = 6;
    D_800D3858 = 0;
    D_800D2E44 = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_17790/func_85017868.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_17790/func_85017930.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_17790/func_85017B20.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_17790/func_85017FA4.s")
