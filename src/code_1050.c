#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_80001050(void) {
    bzero(&D_8002D4B0, (s32) &D_80043B40 - (s32) &D_8002D4B0);
    func_800061F8(1, 0x1F);
    func_80022790();
    __osSetSR(__osGetSR() | SR_CU1 | SR_FR);
    __osSetFpcCsr(FPCSR_FS);
    osCreateThread(&D_800318B0, 1, &D_100010F8, 0, &D_8002D8B0, 5);
    osStartThread(&D_800318B0);
}

void func_800010F8(s32 arg0) {
    func_80004470(); // create message queues
    osCreateThread(&D_80031AE0, 3, &D_10001194, arg0, &D_800318B0, 10);
    if ((D_8002AC5C == 0) && (D_80000310 == 0x17D9)) {
        osStartThread(&D_80031AE0);
    }
    osSetThreadPri(&D_800318B0, NULL);
    do {} while(1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_1050/func_80001194.s")
// Work-in-progress, far from matching
// void func_80001194(s32 arg0) {
//     s32 size2;
//     s32 offset;
//     s32 tbd;
//     u32 temp_t2;
//     u32 temp_t7;
//     s32 *temp_v0_3;
//     s32 size;
//     s32 phi_a0;
//     u32 phi_v1;
//
//     func_80005218();
//     if (D_8000030C == 0) {
//         bzero(&D_80043B40, 0x80400000 - (u32)&D_80043B40);
//         size = 0x80400000 - (u32)&D_80043B40;
//     } else {
//         bzero(&D_800E9D10, 0x80400000 - (u32)&D_800E9D10);
//         size = 0x80400000 - (u32)&D_80043B40;
//     }
//     osInvalICache(&D_80043B40, size);
//     osInvalDCache(&D_80043B40, size);
//     func_80003920();
//     func_80003930();
//     func_80003BD0();
//     func_8000709C();
//     // matches to here ^^
//     D_8002AAE8[0] = func_80003C6C(292*216*2, 0xFF, 3, 1, 0);
//     D_8002AAE8[1] = func_80003C6C(292*216*2, 0xFF, 3, 1, 0);
//     func_800034E0(0xFE);
//     func_80004514(_extcodeSegmentRomStart, &D_80082B20, 0x10, 1);
//     offset = D_80082B20 + _extcodeSegmentRomStart; // first chunk base
//     tbd = func_80003C40(_extcodeSegmentRomEnd - offset, 1, 2, 0);
//     func_80004514(offset, tbd, _extcodeSegmentRomEnd - offset, 1);
//     func_80006240(tbd, &D_80082B20, D_8003809C);
//     func_80004074(tbd);
//     temp_t7 = (u32) ((&D_151FA130 - &D_15000000) + 0xFFF) >> 12;
//     D_800354F8 = D_8003333F & -0x10;
//     size2 = (u32)D_80032B3F & -0x10;
//     temp_t2 = temp_t7 + 1;
//     D_800354FC = size2;
//     func_80004514(0x42454, size2, ((((temp_t7 + 2) * 4) + 0xF) | 0xF) ^ 0xF, 1);
//
//     if (temp_t2 != 0) {
//         phi_a0 = 0;
//         phi_v1 = 0;
//         do
//         {
//             phi_v1++;
//             temp_v0_3 = D_800354FC + phi_a0;
//             *temp_v0_3 = (s32) (((u32)temp_v0_3 ^ 0x8039CCCA) + _extcodeSegmentRomStart);
//             phi_a0 = phi_a0 + 4;
//         }
//         while (phi_v1 < temp_t2);
//     }
//     D_8003BE74 = 0;
//     func_80005B04(0xEB); // 235
//     func_80001420();
//     func_80005BE0();
//     func_85007830();
// }
