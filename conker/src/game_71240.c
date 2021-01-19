#include <ultra64.h>

#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/game_71240/func_15043D90.s")

void func_15043E68(s32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6) {
    f32 sp18[16];

    func_150A8050(&sp18, arg1, arg2, arg3);
    sp18[12] = arg4;
    sp18[13] = arg5;
    sp18[14] = arg6;
    func_150A7790(&sp18, arg0);
}

void func_15043EC8(struct112 *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6) {
    arg0->unk30 = arg4;
    arg0->unk34 = arg5;
    arg0->unk38 = arg6;
    arg0->unk0 = arg0->unk0 * arg1;
    arg0->unk4 = arg0->unk4 * arg1;
    arg0->unk8 = arg0->unk8 * arg1;
    arg0->unk10 = arg0->unk10 * arg2;
    arg0->unk14 = arg0->unk14 * arg2;
    arg0->unk18 = arg0->unk18 * arg2;
    arg0->unk20 = arg0->unk20 * arg3;
    arg0->unk24 = arg0->unk24 * arg3;
    arg0->unk28 = arg0->unk28 * arg3;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_71240/func_15043F6C.s")

void func_15043FF0(vertex *arg0, struct113 *arg1) {
    arg0->x = arg1->unk18;
    arg0->y = arg1->unk1A;
    arg0->z = arg1->unk1C;
    arg0->x = arg0->x + arg1->unk38 * 0.000015258789f; // this is 1 / 65536
    arg0->y = arg0->y + arg1->unk3A * 0.000015258789f;
    arg0->z = arg0->z + arg1->unk3C * 0.000015258789f;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_71240/func_150440A0.s")
