#include <ultra64.h>

#include "functions.h"
#include "variables.h"

#pragma GLOBAL_ASM("asm/nonmatchings/code_3920/func_80003920.s")
// non-matching; ops in wrong order
// void func_80003920(void) {
//     D_80038080 = 0;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_3920/func_80003930.s")
// NON-MATCHING: wrong O flag maybe?
// u32 func_80003930(void) {
//     if (D_80038080) {
//         D_80038090 = D_807F5000;
//         D_80038094 = D_803FE000;
//         D_8003809C = D_807FE000;
//         D_80038098 = D_807F5000;
//         return D_807F5000;
//     }
//     D_80038090 = D_803F5000;
//     D_80038094 = D_803FE000;
//     D_8003809C = D_803FE000;
//     D_80038098 = D_803F5000;
//     return D_803F5000;
// }
