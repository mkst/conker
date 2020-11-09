#include <ultra64.h>

#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/code_19EA80/func_8019EA80.s")

s32 func_8019EAB0(void) {
    if (D_16003890 & 0xC000) {
        D_16003AF4 = 1;
        return 3;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_19EA80/func_8019EAE0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_19EA80/func_8019ECAC.s")

void func_8019ED8C(void) {
}

void func_8019ED94(void) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_19EA80/func_8019ED9C.s")
// NON-MATCHING: flipped conditions
// s32 func_8019ED9C(void) {
//     if (D_16003B28 != 0) {
//         func_86000424(D_1600389C);
//         return func_860006CC(D_1600389C);
//     }
//     if ((D_16003B28 != 1) && (D_16003B28 != 2)) {
//         return D_16003B28;
//     }
//     return func_86000590(D_1600389C);
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_19EA80/func_8019EE0C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_19EA80/func_8019EEAC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_19EA80/func_8019F018.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_19EA80/func_8019F154.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_19EA80/func_8019F214.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_19EA80/func_8019F4E4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_19EA80/func_8019F59C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_19EA80/func_8019FA14.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_19EA80/func_8019FACC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_19EA80/func_8019FD38.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_19EA80/func_8019FDC0.s")
// void func_8019FDC0(s32 arg0, s32 arg1, s32 arg2) {
//     *(void *)0x1600388C = (s16) (((arg0 & 0xFF & 0xF8) << 8) | ((arg1 & 0xFF & 0xF8) * 8) | ((s32) (arg2 & 0xFF & 0xF8) >> 2) | 1);
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_19EA80/func_8019FE18.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_19EA80/func_8019FF78.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_19EA80/func_801A0094.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_19EA80/func_801A0100.s")

s32 func_801A017C(s32 arg0) {
    return arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_19EA80/func_801A0188.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_19EA80/func_801A02B8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_19EA80/func_801A0344.s")

// libultra
#pragma GLOBAL_ASM("asm/nonmatchings/code_19EA80/func_801A040C.s")

// libultra
#pragma GLOBAL_ASM("asm/nonmatchings/code_19EA80/__osSiRawStartDma_1A0430.s")

void func_801A04EC(void) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_19EA80/func_801A04F4.s")
// NON-MATCHING: arg0 is a float?
// s32 func_801A04F4(s32 arg0) {
//     s32 temp_a0;
//     s32 temp_t7;
//
//     temp_a0 = arg0;
//     if ((temp_a0 * 2) == 0) {
//         return 0;
//     }
//     temp_t7 = (temp_a0 & 0x7F800000) >> 0x17;
//     if ((temp_t7 <= 0) || (temp_t7 >= 255)) {
//         return 1;
//     }
//     return 0;
// }

void func_801A0538(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
}
