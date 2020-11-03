#include <ultra64.h>

#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/code_20000/func_80020000.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_20000/func_80020978.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_20000/func_80020ABC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_20000/func_80020E18.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_20000/func_80021028.s")
// NON-MATCHING: just cant get it to match.
// s16 func_80021028(s16 arg0, s32 arg1, s16 arg2, s32 arg3) {
//     s32 sp4;
//     s32 tmp;
//
//     arg3 = (u16) arg3;
//     tmp = arg1 >> 3;
//
//     if (arg1 == 0) {
//         return arg0;
//     }
//     sp4 = arg3 * arg1;
//     sp4 = sp4 >> 16;
//     sp4 = sp4 + (arg1 * arg2);
//     return arg0 + sp4;
// }
