#include <ultra64.h>

#include "functions.h"
#include "variables.h"


// wtf?
#pragma GLOBAL_ASM("asm/nonmatchings/game_76710/func_15049260.s")

void func_150492CC(f32 arg0, f32 arg1, f32 arg2) {
    D_800CC220 = arg0;
    D_800CC224 = arg1;
    D_800CC228 = arg2;
    D_800CC22C = arg0 / 2;
    D_800CC230 = arg1 / 2;
    D_800CC234 = arg2 / 2;

    if (arg0 == 0.0f) {
        arg0 = 0.001f;
    }

    D_800CC238 = arg1 / arg0;
    D_800CC23C = arg2 / arg0;
}

// too many temp vars
#pragma GLOBAL_ASM("asm/nonmatchings/game_76710/func_15049350.s")
