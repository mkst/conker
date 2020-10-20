#include <ultra64.h>

#include "variables.h"

#pragma GLOBAL_ASM("asm/nonmatchings/code_1050/func_80001050.s")
// NOT MATCHING: matches on 5.3, not 7.1
// void func_80001050(void) {
//     bzero(&D_8002D4B0, (s32) &D_80043B40 - (s32) &D_8002D4B0);
//     func_800061F8(1, 0x1F);
//     func_80022790();
//     func_80022A30(func_80022A40() | 0x20000000 | 0x04000000);
//     func_80022A50(0x1000000);
//     osCreateThread(&D_800318B0, 1, &D_100010F8, 0, &D_8002D8B0, 5);
//     osStartThread(&D_800318B0);
// }

// #pragma GLOBAL_ASM("asm/nonmatchings/code_1050/func_800010F8.s")
void func_800010F8(s32 arg0) {
    u8 pad = 0;
    func_80004470();
    osCreateThread(&D_80031AE0, 3, &D_10001194, arg0, &D_800318B0, 10);
    if ((D_8002AC5C == 0) && (D_80000310 == 0x17D9)) {
        osStartThread(&D_80031AE0);
    }
    osSetThreadPri(&D_800318B0, NULL);
    do {} while(1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_1050/func_80001194.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_1050/func_80001420.s")
// NOT MATCHING: uses v registers not a/t registers
// void func_80001420(void) {
//     u32 *phi_a1;
//     phi_a1 = (u32*)&D_80043B40;
//     do {
//       *phi_a1++ = 0;
//     }
//     while ((u32)phi_a1 < (u32)&D_80043B40 + 0xFE0); // 4064
// }

// #pragma GLOBAL_ASM("asm/nonmatchings/code_1050/func_80001444.s")
void func_80001444(void) {
    s32 sp1C;

    sp1C = func_80022DC0();
    func_800061F8(2, 31);
    func_80001420();
    func_80005BE0();
    osInvalICache(&D_1002AAD0, 0x80400000 - (u32)&D_1002AAD0);
    func_80022DE0(sp1C);
}

void func_800014A0(void) {
    osStopThread(&D_80031AE0); // Incompatible pointer type assignment
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_1050/func_800014C4.s")
// NOT MATCHING: uses v1 registers not v0
// void func_800014C4(s32 arg0) {
//     s32 sp1C;
//
//     sp1C = func_80022DC0();
//     func_800061F8(2, 31);
//
//     if (D_8003BE74 != 0) {
//         func_80004074(D_8003BE74 | 0x80000000);
//     }
//     if (D_8003BE70 != 0) {
//         func_80004074(D_8003BE70 | 0x80000000);
//     }
//     func_80005B04(arg0);
//     func_80001420();
//     func_80005BE0();
//     func_80022DE0(sp1C);
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_1050/func_80001550.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1050/func_800019F0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1050/func_80001AA8.s")

int func_80002070(s32 arg0, s32 arg1, s32 arg2) {
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_1050/func_80002088.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1050/func_800020D0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1050/func_80002718.s")
