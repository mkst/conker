#include <ultra64.h>

#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/code_38C0/func_100038C0.s")
// NON-MATCHING: no addiu start/end
// void func_100038C0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_38C0/func_100038E0.s")
// NON-MATCHING: wtf is this
// s32 func_100038E0(void) {
//     D_80038070 = 0xBC000C02;
//     D_80038074 = (u16)0x4040;
//     D_BC000C02 = (u16)0x4040;
//     return 0xBC000C02;
// }

s32 func_1000390C(void) {
    return 0;
}
