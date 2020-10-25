#include <ultra64.h>

#include "functions.h"
#include "variables.h"

#pragma GLOBAL_ASM("asm/nonmatchings/code_49E0/func_800049E0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_49E0/func_80004DB0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_49E0/func_80004F00.s")

void func_80004FE0(void) {
    if ((s32) D_8003B238 <= 0) {
        D_8003A582 = 6;
        return;
    }
    func_80005020();
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_49E0/func_80005020.s")
