#include <ultra64.h>

#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/code_8EF80/func_8508EF80.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_8EF80/func_8508F060.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_8EF80/func_8508F0A4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_8EF80/func_8508F0D4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_8EF80/func_8508F7BC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_8EF80/func_8508F9C4.s")
// NON-MATCHING: uses a0 not v1
// u8 func_8508F9C4(void) {
//     u8 temp_v0 = D_800D2456;
//     D_800D2410[temp_v0] = 0.0f;
//     D_800D2456 = temp_v0 + 1;
//     return D_800D2456;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_8EF80/func_8508F9F4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_8EF80/func_8508FD38.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_8EF80/func_850900F0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_8EF80/func_85090630.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_8EF80/func_8509093C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_8EF80/func_850911F4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_8EF80/func_85091534.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_8EF80/func_850916B4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_8EF80/func_850918EC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_8EF80/func_85093818.s")
// NON-MATCHING: uses wrong registers
// u8* func_85093818(s32 arg0) {
//     if ((arg0 != 0) && (D_800D2458 == 0)) {
//         D_800D2458 = 1;
//         return func_85093878();
//     }
//     if ((arg0 == 0) && (D_800D2458 != 0)) {
//         D_800D2458 = 0;
//     }
//     return &D_800D2458;
// }

void func_85093878(void) {
    D_800D2448 = func_8518C900(0xBA);
    D_800D244C = func_80003C40(0x80, 1, 1, 0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_8EF80/func_850938BC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_8EF80/func_85093B58.s")
