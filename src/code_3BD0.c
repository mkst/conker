#include <ultra64.h>

#include "functions.h"
#include "variables.h"

#pragma GLOBAL_ASM("asm/nonmatchings/code_3BD0/func_80003BD0.s")

s32 func_80003C40(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    return func_80003C6C(arg0, arg1, arg2, 0, arg3);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_3BD0/func_80003C6C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_3BD0/func_80004074.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_3BD0/func_80004250.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_3BD0/func_80004308.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_3BD0/func_800043B4.s")
// not non-matching
// void func_800043B4(s32 *arg0, u32 arg1) {
//     OSIntMask mask;
//
//     mask = osSetIntMask(1);
//     *(arg0 - 1) = (arg1 << 24) | *(arg0 - 1) & 0xFFFFFF;
//     osSetIntMask(mask);
// }
#pragma GLOBAL_ASM("asm/nonmatchings/code_3BD0/func_8000440C.s")
