#include <ultra64.h>

#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/code_1420/func_10001420.s")
// NOT MATCHING: uses v registers not a/t registers
// void func_10001420(void) {
//     s32 *ptr = D_80043B40;
//     do {
//         *ptr++ = 0;
//     }
//     while ((u32)ptr < (u32)&D_80043B40 + 4064);
// }

void func_10001444(void) {
    u32 saveMask = __osDisableInt();
    func_100061F8(2, 31);
    func_10001420();
    func_10005BE0();
    osInvalICache(&D_1002AAD0, 0x80400000 - (u32)&D_1002AAD0);
    __osRestoreInt(saveMask);
}

void func_100014A0(void) {
    osStopThread(&D_80031AE0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_1420/func_100014C4.s")
// NOT MATCHING: uses v1 registers not v0
// void func_100014C4(s32 arg0) {
//     u32 saveMask = __osDisableInt();
//     func_100061F8(2, 31);
//
//     if (D_8003BE74) {
//         func_10004074(D_8003BE74 | 0x80000000);
//     }
//     if (D_8003BE70) {
//         func_10004074(D_8003BE70 | 0x80000000);
//     }
//     func_10005B04(arg0);
//     func_10001420();
//     func_10005BE0();
//     __osRestoreInt(saveMask);
// }

// contains delay slot
#pragma GLOBAL_ASM("asm/nonmatchings/code_1420/func_10001550.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1420/func_100019F0.s")
// NON-MATCHING: quite a few differences
// s16 func_100019F0(s16 *arg0, struct05 *arg1) {
//     u16 temp_a2 = arg1->unk0;
//     s16 temp_v1 = (temp_a2 & 0x7FF0) >> 4;
//
//     if (temp_v1 == 0x7FF) {
//         *arg0 = 0;
//         if ((arg1->unk0 & 0xF) || (arg1->unk2) || (arg1->unk4) || (arg1->unk6)) {
//             return 2;
//         } else {
//             return 1;
//         }
//     }
//     if (temp_v1 > 0) {
//         arg1->unk0 = (temp_a2 & 0x800F) | 0x3FF0;
//         *arg0 = temp_v1 - 0x3FE;
//         return -1;
//     }
//     if (temp_v1 < 0) {
//         return 2;
//     }
//
//     *arg0 = 0;
//     return 0;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_1420/func_10001AA8.s")

s32 func_10002070(s32 arg0, s32 arg1, s32 arg2) {
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_1420/func_10002088.s")
// NOT MATCHING: stack is incorrect
// void func_10002088(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
//     D_80035500 = 0;
//     func_100020D0(&D_10002070, 0, arg3, &arg3);
// }

// this is a beast:
#pragma GLOBAL_ASM("asm/nonmatchings/code_1420/func_100020D0.s")
// contains a jump table
#pragma GLOBAL_ASM("asm/nonmatchings/code_1420/func_10002718.s")
