#include <ultra64.h>
#include "functions.h"
#include "variables.h"


// setting W values in identity matrix
#pragma GLOBAL_ASM("asm/nonmatchings/game_D5250/func_150A7DA0.s")
// NON-MATCHING: same issues as other matrix funcs
// void func_150A7DA0(f32 arg0[4][4], s32 arg1, s32 arg2, s32 arg3) {
//     if (0) {};
//     ((s32)arg0[0][1]) = 0;
//     (arg0[0][0]) = 1.0f;
//     dummy_label_418035: ;
//     ((s32)arg0[0][2]) = 0;
//     ((s32)arg0[0][3]) = 0;
//     ((s32)arg0[1][0]) = 0;
//     (arg0[1][1]) = 1.0f;
//     ((s32)arg0[1][2]) = 0;
//     ((s32)arg0[1][3]) = 0;
//     ((s32)arg0[2][0]) = 0;
//     ((s32)arg0[2][1]) = 0;
//     (arg0[2][2]) = 1.0f;
//     ((s32)arg0[2][3]) = 0;
//     ((s32)arg0[3][0]) = arg1;
//     ((s32)arg0[3][1]) = arg2;
//     ((s32)arg0[3][2]) = arg3;
//     (arg0[3][3]) = 1.0f;
// }
