#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_15103800(void) {
    func_100226F0(D_800D9AB0, 8); // bzero
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_103800/func_15103828.s")
// NON-MATCHING: JUSTREG: uses a0 not v1
// void func_15103828(void) {
//     u16 temp_v1;
//     s32 i;
//
//     for (i = 0; i < 4; i++)
//     {
//         temp_v1 = D_800D9AB0[i];
//         if (temp_v1 != 0)
//         {
//             if (D_800BE9E4 < temp_v1) {
//                 D_800D9AB0[i] = temp_v1 - D_800BE9E4;
//             } else {
//                 D_800D9AB0[i] = 0;
//             }
//         }
//     }
// }

// need to figure out the structs
#pragma GLOBAL_ASM("asm/nonmatchings/code_103800/func_15103910.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_103800/func_15103AA0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_103800/func_15103C14.s")
