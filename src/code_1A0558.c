#include <ultra64.h>

#include "functions.h"
#include "variables.h"

// whats wrong with bcopy?
u8* func_86001AD0(u8 *arg0, u8 *arg1, u32 arg2) {
    u8 *tmp0 = arg0;
    u8 *tmp1 = arg1;

    while (arg2 > 0) {
        *tmp0++ = *tmp1++;
        arg2 -= 1;
    }

    return arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_1A0558/func_86001B00.s")
// NON-MATCHING: moves in wrong order!
// u32 func_86001B00(u8 *arg0) {
//     u32 i = 0;
//     while (arg0[i]) {
//         i++;
//     };
//     return i;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_1A0558/func_86001B34.s")
// s32 func_86001BB4(void *arg0, s32 arg1, void *arg2, s32 arg3) ;
// NON-MATCHING: need to work out  func_86001BB4
// s32 func_86001B34(s8 arg0[], s32 arg1, s32 arg2, s32 arg3) {
//     s32 idx = func_86001BB4(&D_16001B8C, &arg1, arg2, &arg3);
//     if (idx >= 0) {
//         arg0[idx] = 0;
//     }
//     return idx;
// }

s32 func_86001B8C(u8 *arg0, u8 *arg1, u32 arg2) {
    return func_86001AD0(arg0, arg1, arg2) + arg2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_1A0558/func_86001BB4.s")
// uses jump table
#pragma GLOBAL_ASM("asm/nonmatchings/code_1A0558/func_860021FC.s")
// contains delay slot
#pragma GLOBAL_ASM("asm/nonmatchings/code_1A0558/func_8600288C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1A0558/func_86002D2C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1A0558/func_86002DE4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1A0558/func_860033A8.s")
// uses tlbr
#pragma GLOBAL_ASM("asm/nonmatchings/code_1A0558/func_86003650.s")
