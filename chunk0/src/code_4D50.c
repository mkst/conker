#include <ultra64.h>

#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/code_4D50/func_85004D50.s")
// void func_85004D50(void) {
//     s32 temp_s0;
//     s32 temp_v0;
//     void *phi_s1;
//     s32 phi_s0;
//
//     *(void *)0x800C3FC0 = 0x80084300;
//     if (*(void *)0x80082FA0 > 0) {
//         phi_s1 = (void *)0x800C3FC4;
//         phi_s0 = 1;
// loop_2:
//         temp_v0 = func_80003C40(0x50, 1, 2, 0);
//         *phi_s1 = temp_v0;
//         func_80023A10(*(void *)0x800C3FC0, temp_v0, 0x50);
//         temp_s0 = phi_s0 + 1;
//         phi_s1 = phi_s1 + 4;
//         phi_s0 = temp_s0;
//         if (*(void *)0x80082FA0 >= temp_s0) {
//             goto loop_2;
//         }
//     }
// }
