#include <ultra64.h>

#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/code_8EF80/func_1508EF80.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_8EF80/func_1508F060.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_8EF80/func_1508F0A4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_8EF80/func_1508F0D4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_8EF80/func_1508F7BC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_8EF80/func_1508F9C4.s")
// NON-MATCHING: uses a0 not v1
// u8 func_1508F9C4(void) {
//     u8 temp_v0 = D_800D2456;
//     D_800D2410[temp_v0] = 0.0f;
//     D_800D2456 = temp_v0 + 1;
//     return D_800D2456;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_8EF80/func_1508F9F4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_8EF80/func_1508FD38.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_8EF80/func_150900F0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_8EF80/func_15090630.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_8EF80/func_1509093C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_8EF80/func_150911F4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_8EF80/func_15091534.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_8EF80/func_150916B4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_8EF80/func_150918EC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_8EF80/func_15093818.s")
// NON-MATCHING: uses wrong registers
// u8* func_15093818(s32 arg0) {
//     if ((arg0 != 0) && (D_800D2458 == 0)) {
//         D_800D2458 = 1;
//         return func_15093878();
//     }
//     if ((arg0 == 0) && (D_800D2458 != 0)) {
//         D_800D2458 = 0;
//     }
//     return &D_800D2458;
// }

void func_15093878(void) {
    D_800D2448 = func_1518C900(0xBA);
    D_800D244C = func_10003C40(0x80, 1, 1, 0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_8EF80/func_150938BC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_8EF80/func_15093B58.s")
