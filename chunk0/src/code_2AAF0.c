#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_1502AAF0(void) {
}

void func_1502AAF8(s32 arg0) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_2AAF0/func_1502AB04.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_2AAF0/func_1502AC88.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_2AAF0/func_1502AF04.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_2AAF0/func_1502B020.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_2AAF0/func_1502B110.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_2AAF0/func_1502B224.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_2AAF0/func_1502B350.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_2AAF0/func_1502B4A8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_2AAF0/func_1502B5C8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_2AAF0/func_1502B6BC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_2AAF0/func_1502B7F0.s")
// s32 func_1502B7F0(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
//     s32 sp38;
//     s32 sp34;
//     s32 *temp_s1;
//     s32 phi_s0_2;
//
//     sp38 = 1;
//     phi_s0_2 = 0xAB1950; // offsets table
//     temp_s1 = &arg2;
//
//     do {
//         temp_s1 = ((s32)(temp_s1 + 3) & ~3); // ALIGN4
//         if (sp38 != 0) {
//             phi_s0_2 = phi_s0_2 + func_1502AC88(phi_s0_2, temp_s1, &sp34);
//         }
//         sp38 = sp34 & 0xFFFFFFF;
//         temp_s1++;
//     } while (arg1--);
//
//     if (sp38 != 0) {
//         *arg0 = func_1502B350(phi_s0_2, sp34, &sp38);
//     } else {
//         *arg0 = 0;
//     }
//     return sp38;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_2AAF0/func_1502B8E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_2AAF0/func_1502B9B4.s")
