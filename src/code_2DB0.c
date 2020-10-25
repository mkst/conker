#include <ultra64.h>

#include "functions.h"
#include "variables.h"

#pragma GLOBAL_ASM("asm/nonmatchings/code_2DB0/func_80002DB0.s")
// non-matching
// s32 func_80002DB0(s32 arg0, s32 arg1) {
//     s32 phi_a2;
//
//     phi_a2 = arg0;
//     if (D_8002AB40) {
//         phi_a2 = arg0 - 0x2000;
//     }
//     if (((arg0 + arg1) & 0x3FFF) == 0x2000) { // 8192
//         D_8002AB40 = 1;
//     } else {
//         D_8002AB40 = 0;
//     }
//     if (func_80023390(phi_a2) != 0) {
//         return -1;
//     }
//     AI_A4500000 = func_800233C0(phi_a2);
//     AI_A4500004 = arg1;
//     return 0;
// }
