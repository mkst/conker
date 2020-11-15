#include <ultra64.h>

#include "functions.h"
#include "variables.h"

// relies on jump table
#pragma GLOBAL_ASM("asm/nonmatchings/code_20000/func_80020000.s")

s32 func_80020978(struct21 *arg0, s32 arg1, s32 arg2) {
    struct21 *sp24 = arg0;

    switch (arg1) {
        case 3:
            if (sp24->unk88 != 0) {
                *sp24->unk88 = arg2;
            } else {
                sp24->unk84 = arg2;
            }
            sp24->unk88 = arg2;
            break;
        case 4:
            sp24->unk80 = 1;
            sp24->unk8C = 0;
            sp24->unk62 = 1;
            sp24->unk7C = 0;
            sp24->unk54 = 0.0f;
            sp24->unk58 = 1;
            sp24->unk50 = 0;
            func_80022338(sp24, 4, arg2);
            break;
        case 9:
            sp24->unk8C = 1;
            break;
        default:
            func_80022338(sp24, arg1, arg2);
            break;
    }

    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_20000/func_80020ABC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_20000/func_80020E18.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_20000/func_80021028.s")
// NON-MATCHING: just cant get it to match.
// s16 func_80021028(s16 arg0, s32 arg1, s16 arg2, u16 arg3) {
//     s32 res;
//     s32 tmp;
//
//     tmp = arg1 >> 3;
//
//     if (arg1 == 0) {
//         return arg0;
//     }
//     res = arg3 * arg1;
//     res = res >> 16;
//     res += arg2 * arg1;
//     res = (res + arg0) << 16;
//     return res;
// }
