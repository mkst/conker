#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_80001050(void) {
    bzero(&D_8002D4B0, (s32) &D_80043B40 - (s32) &D_8002D4B0);
    func_800061F8(1, 0x1F);
    func_80022790();
    __osSetSR(__osGetSR() | SR_CU1 | SR_FR);
    __osSetFpcCsr(FPCSR_FS);
    osCreateThread(&D_800318B0, 1, &D_100010F8, 0, &D_8002D8B0, 5); // spawn func_800010F8
    osStartThread(&D_800318B0);
}

void func_800010F8(s32 arg0) {
    func_80004470(); // create message queues
    osCreateThread(&D_80031AE0, 3, &D_10001194, arg0, &D_800318B0, 10); // spawn func_80001194
    if ((D_8002AC5C == 0) && (D_80000310 == 0x17D9)) {
        osStartThread(&D_80031AE0);
    }
    osSetThreadPri(&D_800318B0, NULL);
    do {} while(1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_1050/func_80001194.s")
// void func_80001194(s32 arg0) {
//     u32 sp4C;
//     s32 sp44;
//     s32 sp40;
//     u32 sp28;
//     s32 temp_a1;
//     s32 temp_s0;
//     s32 temp_v0;
//     s32 temp_v0_2;
//     u32 temp_t2;
//     u32 temp_t7;
//     u32 temp_v1;
//     u32 temp_v1_2;
//     void *temp_v0_3;
//     s32 phi_s0;
//     s32 phi_a0;
//     u32 phi_v1;
//
//     func_80005218();
//     if (D_8000030C == 0) {
//         temp_s0 = 0x80400000 - &D_80043B40;
//         bzero(&D_80043B40, temp_s0);
//         phi_s0 = temp_s0;
//     } else {
//         bzero(&D_800E9D10, 0x80400000 - &D_800E9D10);
//         phi_s0 = 0x80400000 - &D_80043B40;
//     }
//     osInvalICache(&D_80043B40, phi_s0);
//     osInvalDCache(&D_80043B40, phi_s0);
//     func_80003920();
//     func_80003930();
//     func_80003BD0();
//     func_8000709C();
//     D_8002AAE8[0] = func_80003C6C(126144, 0xFF, 3, 1, 0);
//     D_8002AAE8[1] = func_80003C6C(126144, 0xFF, 3, 1, 0);
//     osCreateViManager(OS_PRIORITY_VIMGR);
//     func_80004514(0x42450, &D_80082B20, 0x10, 1);
//     temp_v0 = D_80082B20 + 0x42450; // D_80082B20 + first
//     temp_v1 = 0x19EA88 - temp_v0; // second TLB offset - temp_v0
//     sp28 = temp_v1;
//     sp44 = temp_v0;
//     temp_v0_2 = func_80003C40(temp_v1, 1, 2, 0);
//     sp40 = temp_v0_2;
//     func_80004514(sp44, temp_v0_2, sp28, 1);
//     func_80006240(sp40, &D_80082B20, D_8003809C);
//     func_80004074(sp40);
//     temp_t7 = (u32) ((0x151FA130 - 0x15000000) + 0xFFF) >> 0xC; // 0x1fa130 + 0xfff
//     D_800354F8 = (s32) (0x8003333F & -0x10);
//     temp_a1 = 0x80032B3F & -0x10;
//     temp_t2 = temp_t7 + 1;
//     D_800354FC = temp_a1;
//     sp4C = temp_t2;
//     sp28 = temp_t2;
//     func_80004514(0x42454, temp_a1, ((((temp_t7 + 2) * 4) + 0xF) | 0xF) ^ 0xF, 1);
//     if (temp_t2 != 0) {
//         phi_a0 = 0;
//         phi_v1 = 0U;
// loop_5:
//         temp_v1_2 = phi_v1 + 1;
//         temp_v0_3 = D_800354FC + phi_a0;
//         *temp_v0_3 = (s32) ((*temp_v0_3 ^ 0x8039CCCA) + 0x42450); // get offsets
//         phi_a0 = phi_a0 + 4;
//         phi_v1 = temp_v1_2;
//         if (temp_v1_2 < sp4C) {
//             goto loop_5;
//         }
//     }
//     D_8003BE74 = 0;
//     func_80005B04(0xEB);
//     func_80001420();
//     func_80005BE0();
//     func_85007830();
// }
