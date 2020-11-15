#include <ultra64.h>

#include "functions.h"
#include "variables.h"

// returns struct21
#pragma GLOBAL_ASM("asm/nonmatchings/code_22040/func_80022040.s")

s32 func_80022338(struct21 *arg0, s32 arg1, s32 arg2) {
    f32 *sp24 = &arg2;

    switch (arg1) {
        case 4:
            arg0->unkA2 = 0;
            func_80021C40(arg0, 4, arg2);
            break;
        case 18:
            arg0->unkA2 = arg2;
            arg0->unkC8 |= 2;
            break;
        case 19:
            arg0->unkA0 = *sp24;
            arg0->unkC8 |= 2;
            break;
        case 17:
            arg0->unk99 = arg2;
            break;
        default:
            func_80021C40(arg0, arg1, arg2);
            if (0){};
    }

    return 0;
}
