#include <ultra64.h>


#pragma GLOBAL_ASM("asm/nonmatchings/game_D5160/func_150A7CB0.s")
// NON-MATCHING: sw/jr in wrong order
// void func_150A7CB0(f32 mtx[4][4], s32 x, s32 y, s32 z) {
//     ((s32)mtx[0][0]) = x;
//     ((s32)mtx[0][1]) = 0;
//     ((s32)mtx[0][2]) = 0;
//     ((s32)mtx[0][3]) = 0;
//     ((s32)mtx[1][0]) = 0;
//     ((s32)mtx[1][1]) = y;
//     ((s32)mtx[1][2]) = 0;
//     ((s32)mtx[1][3]) = 0;
//     ((s32)mtx[2][0]) = 0;
//     ((s32)mtx[2][1]) = 0;
//     ((s32)mtx[2][2]) = z;
//     ((s32)mtx[2][3]) = 0;
//     ((s32)mtx[3][0]) = 0;
//     ((s32)mtx[3][1]) = 0;
//     mtx[3][3] = 1.0f;
//     // fakematch to "help"...
//     dummy_label_123:;
//     ((s32)mtx[3][2]) = 0;
// }
