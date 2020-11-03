#include <ultra64.h>

#include "functions.h"
#include "variables.h"

// needs jump table
#pragma GLOBAL_ASM("asm/nonmatchings/code_5AB0/func_80005AB0.s")
// unknown instructions
#pragma GLOBAL_ASM("asm/nonmatchings/code_5AB0/func_80005B04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_5AB0/func_80005BE0.s")
// void *func_80005BE0(void) {
//     s16 temp_a0;
//     void *temp_v0;
//     void *temp_v1;
//     void *phi_v0;
//
//     temp_v1 = D_8003BE7C;
//     phi_v0 = D_8003BE70;
// loop_1:
//     *phi_v0 = (u8)0xFF;
//     temp_v0 = phi_v0 + 1;
//     phi_v0 = temp_v0;
//     if (phi_v0 != temp_v1) {
//         goto loop_1;
//     }
//     temp_a0 = D_8003BE78 & 7;
//     if (temp_a0 != 0) {
//         *temp_v1 = (s8) ((2 << (temp_a0 - 1)) - 1);
//     }
//     return temp_v0;
// }

// needs jump table
#pragma GLOBAL_ASM("asm/nonmatchings/code_5AB0/func_80005C2C.s")
// needs jump table
#pragma GLOBAL_ASM("asm/nonmatchings/code_5AB0/func_80007C74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_5AB0/func_80007CC4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_5AB0/func_80007D28.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_5AB0/func_80007DA0.s")

// references 0x19EA88, calls osMapTLB
#pragma GLOBAL_ASM("asm/nonmatchings/code_5AB0/func_80007DAC.s")
