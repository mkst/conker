#include <ultra64.h>

#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/code_17300/func_15017300.s")

void func_1501748C(s32 arg0) {
}

void func_15017498(void) {
    bzero(&D_800D2138, 524);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_17300/func_150174C0.s")

void func_15017578(s32 arg0) {
    u32 tmp = 0;
    D_800D23C0 = func_1502B5C8(&tmp, 3, 12, arg0, 4);
    D_80087380 = tmp / 24;
    func_150174C0(D_800DBF00);
}
