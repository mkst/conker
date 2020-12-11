#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_15017790(void) {
    func_1509C120();
    func_100226F0(D_800D2E4C, 0x1B);  // bzero
    func_100226F0(&D_800D2E50, 0x10);
    func_100226F0(&D_800D2E60, 9);
    func_100226F0(&D_800D2E70, 0xCC);
    D_800D2E44 = (u8)0;
}

void func_150177F8(void) {
    func_1509BA04(1);
    func_100226F0(&D_800D2F48, 0xC);
    func_150A00F0();
    D_800D2DB0 = D_800968C0;
    D_800D2E41 = 0xA;
    D_800D2E42 = 6;
    D_800D3858 = 0;
    D_800D2E44 = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_17790/func_15017868.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_17790/func_15017930.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_17790/func_15017B20.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_17790/func_15017FA4.s")
