#include <ultra64.h>

#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/code_0/func_85000000.s")
// NON-MATCHING: wrong registers
// void func_85000000(void) {
//     s32 tmp1;
//     s32 i;
//
//     for (i = 0; i < 3; i++)
//     {
//         tmp1 = &D_80041E58[i];
//
//         func_80023790(tmp1, &D_80041EA0[i], 8); // osCreateMesgQueue
//         func_80008570(i, &D_80041E58[i]);
//     }
//
//     func_800085A4(0, 6, 1);
//     func_8000E934();
// }

void func_85000090(void) {
    func_8000DEC4();
}

// jump table
#pragma GLOBAL_ASM("asm/nonmatchings/code_0/func_850000B0.s")
// no thankyou
#pragma GLOBAL_ASM("asm/nonmatchings/code_0/func_850006E0.s")
