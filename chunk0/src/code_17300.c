#include <ultra64.h>

#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/code_17300/func_85017300.s")

void func_8501748C(s32 arg0) {
}

void func_85017498(void) {
    func_800226F0(&D_800D2138, 524);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_17300/func_850174C0.s")

void func_85017578(s32 arg0) {
    u32 tmp = 0;
    D_800D23C0 = func_8502B5C8(&tmp, 3, 12, arg0, 4);
    D_80087380 = tmp / 24;
    func_850174C0(D_800DBF00);
}
