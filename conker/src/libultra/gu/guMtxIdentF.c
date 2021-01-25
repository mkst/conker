#include <ultra64.h>
#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/libultra/gu/guMtxIdentF/guMtxIdentF.s")
// NON-MATCHING: what a bugger.
// void guMtxIdentF(f32 mf[4][4]) {
//     if (0) { }
//     ((s32)mf[0][1]) = (s32)0;
//     mf[0][0] = 1;
//     dummy_label_418035: ;
//     ((s32)mf[0][2]) = 0;
//     ((s32)mf[0][3]) = 0;
//     ((s32)mf[1][0]) = 0;
//     mf[1][1] = 1;
//     ((s32)mf[1][2]) = 0;
//     ((s32)mf[1][3]) = 0;
//     ((s32)mf[2][0]) = 0;
//     ((s32)mf[2][1]) = 0;
//     mf[2][2] = 1;
//     ((s32)mf[2][3]) = 0;
//     ((s32)mf[3][0]) = 0;
//     ((s32)mf[3][1]) = 0;
//     ((s32)mf[3][2]) = 0;
//     mf[3][3] = 1;
// }
