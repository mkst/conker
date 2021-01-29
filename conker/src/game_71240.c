#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_15043D90(Mtx *m, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9) {
    f32 sp18[4][4];

    func_150A8050(&sp18, arg1, arg2, arg3);
    sp18[3][0] = arg7;
    sp18[3][1] = arg8;
    sp18[3][2] = arg9;
    sp18[0][0] *= arg4;
    sp18[0][1] *= arg4;
    sp18[0][2] *= arg4;
    sp18[1][0] *= arg5;
    sp18[1][1] *= arg5;
    sp18[1][2] *= arg5;
    sp18[2][0] *= arg6;
    sp18[2][1] *= arg6;
    sp18[2][2] *= arg6;
    guMtxF2L(&sp18, m);
}

void func_15043E68(Mtx *m, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6) {
    f32 sp18[4][4];

    func_150A8050(&sp18, arg1, arg2, arg3);
    sp18[3][0] = arg4;
    sp18[3][1] = arg5;
    sp18[3][2] = arg6;
    guMtxF2L(&sp18, m);
}

void func_15043EC8(f32 mtx[4][4], f32 x, f32 y, f32 z, f32 arg4, f32 arg5, f32 arg6) {
    mtx[3][0] = arg4;
    mtx[3][1] = arg5;
    mtx[3][2] = arg6;
    mtx[0][0] *= x;
    mtx[0][1] *= x;
    mtx[0][2] *= x;
    mtx[1][0] *= y;
    mtx[1][1] *= y;
    mtx[1][2] *= y;
    mtx[2][0] *= z;
    mtx[2][1] *= z;
    mtx[2][2] *= z;
}

void func_15043F6C(f32 arg0[4][4], f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9) {
    func_150A9B0C(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    arg0[3][0] = arg7;
    arg0[3][1] = arg8;
    arg0[3][2] = arg9;
    arg0[0][3] = 0.0f;
    arg0[1][3] = 0.0f;
    arg0[2][3] = 0.0f;
    arg0[3][3] = 1.0f;
}

void func_15043FF0(vertex *arg0, struct113 *arg1) {
    arg0->x = arg1->unk18;
    arg0->y = arg1->unk1A;
    arg0->z = arg1->unk1C;
    arg0->x += arg1->unk38 * 0.000015258789f; // this is 1 / 65536
    arg0->y += arg1->unk3A * 0.000015258789f;
    arg0->z += arg1->unk3C * 0.000015258789f;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_71240/func_150440A0.s")
