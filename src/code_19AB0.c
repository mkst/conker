#include <ultra64.h>

#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/code_19AB0/func_80019AB0.s")
// f32 func_80019AB0(s32 arg0) {
//     f32 sp4;
//     f32 sp0;
//     s32 temp_t7;
//     s32 phi_a0;
//     s32 phi_a0_2;
//
//     sp0 = 1.0f;
//     if (arg0 >= 0) {
//         sp4 = *(void *)0x8002C760;
//         phi_a0 = arg0;
//     } else {
//         sp4 = *(void *)0x8002C764;
//         phi_a0 = -arg0;
//     }
//     phi_a0_2 = phi_a0;
//     if (phi_a0 != 0) {
// loop_4:
//         if ((phi_a0_2 & 1) != 0) {
//             sp0 = sp0 * sp4;
//         }
//         sp4 = sp4 * sp4;
//         temp_t7 = phi_a0_2 >> 1;
//         phi_a0_2 = temp_t7;
//         if (temp_t7 != 0) {
//             goto loop_4;
//         }
//     }
//     return sp0;
// }
