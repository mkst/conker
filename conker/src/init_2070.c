#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_10002070(s32 arg0, s32 arg1, s32 arg2) {
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/init_2070/func_10002088.s")
// NOT MATCHING: stack is incorrect
// void func_10002088(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
//     D_80035500 = 0;
//     func_100020D0(func_10002070, 0, arg1, &arg1);
// }

// this is a beast:
#pragma GLOBAL_ASM("asm/nonmatchings/init_2070/func_100020D0.s")

// contains a jump table
#pragma GLOBAL_ASM("asm/nonmatchings/init_2070/func_10002718.s")
