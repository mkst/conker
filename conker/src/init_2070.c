#include <ultra64.h>
#include <libc/stdarg.h>

#include "functions.h"
#include "variables.h"

s32 func_100020D0(s32 (*arg0)(s32, s32, s32), s32 arg1, s32 arg2, va_list arg3);

s32 func_10002070(s32 arg0, s32 arg1, s32 arg2) {
    return 1;
}

void func_10002088(s32 arg0, ...) {
    va_list ap;

    va_start(ap, arg0);
    D_80035500 = 0;
    func_100020D0(func_10002070, 0, arg0, ap);
    va_end(ap);
}

// this is a beast:
#pragma GLOBAL_ASM("asm/nonmatchings/init_2070/func_100020D0.s")

// contains a jump table
#pragma GLOBAL_ASM("asm/nonmatchings/init_2070/func_10002718.s")
