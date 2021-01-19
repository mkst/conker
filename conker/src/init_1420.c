#include <ultra64.h>

#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/init_1420/func_10001420.s")
// NOT MATCHING: uses v registers not a/t registers
// void func_10001420(void) {
//     s32 *tmp = (u32)D_80043B40;
//     s32 addr = (s32)tmp + 4064;
//
//     do {
//         *tmp++ = 0;
//     } while ((u32)tmp < addr);
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

#pragma GLOBAL_ASM("asm/nonmatchings/init_1420/func_100014C4.s")
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
#pragma GLOBAL_ASM("asm/nonmatchings/init_1420/func_10001550.s")
#pragma GLOBAL_ASM("asm/nonmatchings/init_1420/func_100019F0.s")
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

#pragma GLOBAL_ASM("asm/nonmatchings/init_1420/func_10001AA8.s")
