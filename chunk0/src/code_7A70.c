#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_15007A70(s16 arg0, s16 arg1, s16 arg2) {

    D_800BE9B4 = 2;
    func_1503FB08();
    D_800BE9F0 = D_800BE9F4 = arg2;

    func_15172C50(D_800DD2C0);
    func_15008230();
    func_15005270();
    func_15017300(arg0, arg1);

    func_15015F40(D_80087280[D_800D2138], arg2);
    func_150175E0();
    func_150177F8();
    func_15089BB0();
    func_15000090();
    D_800BE938 = 1;
    D_800D18A8 = 0;
    D_800BE9ED = 0;
}

// requires jump table
#pragma GLOBAL_ASM("asm/nonmatchings/code_7A70/func_15007B3C.s")

void func_150081E4(void) {
    s32 i;

    D_800D3668 = 0;
    D_800CBE00 = 0;
    D_800DDD64 = 0;

    for (i = 0; i < 2; i++)
    {
        D_800DF7C8[i] = 0;
    }

    D_800D245C = 0;
    D_800D2548 = 0;
}


void func_15008230(void) {
    D_800C35C4 = (u8)0;
    D_800C3C88 = (u8)0;
}

void func_15008248(s32 arg0) {
    s32 i;

    D_800C3638 = 0;
    D_800C3671 = 0;
    D_800C3670 = 0;
    func_1501D044(0);
    func_1501D044(1);
    D_800C3663 = 0;

    for (i = 0; i < 3; i++)
    {
        D_800C3CA0[i].unk0 = 0;
        D_800C3CA0[i].unkC = 0;
    }

    D_800C3681 = 0;
    D_800C3682 = 0;
    D_800C3683 = 0;
}

void func_150082CC(void) {
    s32 tmp = D_800C35C4 - 1;

    if (D_800C35C4 != 0) {
        if (D_800C35C5 == 0) {
            D_800C35EA = 2;
        }
        D_800C35C4 = 0;
        func_1501D348(D_800BE9F0, tmp, 0, D_800C3C90, D_800C3C94);
    }
}
