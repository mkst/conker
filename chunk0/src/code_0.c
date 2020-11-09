#include <ultra64.h>

#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/code_0/func_85000000.s")
// NON-MATCHING: wrong registers
// void func_85000000(void) {
//     u32 i = 0;
//     s32 phi_s2 = &D_80041EA0;
//     s32 phi_s1 = &D_80041E58;
//
//     for (i = 0; i < 3; i++)
//     {
//         func_80023790(phi_s1, phi_s2, 8);
//         func_80008570(i & 0xFF, phi_s1);
//
//         phi_s1 += 0x18;
//         phi_s2 += 0x20;
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
