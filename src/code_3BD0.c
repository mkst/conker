#include <ultra64.h>

#include "functions.h"
#include "variables.h"

#pragma GLOBAL_ASM("asm/nonmatchings/code_3BD0/func_80003BD0.s")
// NON-MATCHING: miles away
// void func_80003BD0(void) {
//     D_800380B4[0] = D_800E9D10;
//     D_800E9D10[0] = 0;
//     D_800380B4[1] = 0;
//     D_800380B4[2] = (D_80038098 - D_800E9D10[0]) - 20;
//     D_800380B4[3] = 0;
//     D_800380B4[4] = 0;
//     D_800380BC = &D_800380B4;
//     D_800380B8 = &D_800380B4;
//     D_800380B0 = &D_800380B4;
// }

s32 func_80003C40(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    return func_80003C6C(arg0, arg1, arg2, 0, arg3);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_3BD0/func_80003C6C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_3BD0/func_80004074.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_3BD0/func_80004250.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_3BD0/func_80004308.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_3BD0/func_800043B4.s")
// NON-MATCHING: missing an addiu
// void func_800043B4(s32 *arg0, u32 arg1) {
//     OSIntMask mask = osSetIntMask(1);
//     *(arg0 - 1) = (arg1 << 24) | *(arg0 - 1) & 0xFFFFFF;
//     osSetIntMask(mask);
// }
#pragma GLOBAL_ASM("asm/nonmatchings/code_3BD0/func_8000440C.s")
