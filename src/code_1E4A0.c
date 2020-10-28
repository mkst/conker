#include <ultra64.h>

#include "functions.h"
#include "variables.h"

#pragma GLOBAL_ASM("asm/nonmatchings/code_1E4A0/func_8001E4A0.s")
// s32 func_8001E4A0(s16 arg0, s32 arg1, s32 arg2) {
//     func_8001D124(D_8002BA44[arg0]->unk48, arg1, arg0, arg2);
//     return D_8002BA44[arg0]->unk48->unk20;
// }
// s32 func_8001E4A0(s16 arg0, s32 arg1, s32 arg2) {
//     func_8001D124(D_8002BA44->unk48 + (arg0 * 68) + 32, arg1, arg0, arg2);
//     return (D_8002BA44->unk48 + (arg0 * 68))->unk20;
// }
