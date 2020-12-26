#include <ultra64.h>

#include "functions.h"
#include "variables.h"

void func_10001050(void) {
    bzero(&D_8002D4B0, (s32) &D_80043B40 - (s32) &D_8002D4B0); // zero out bss
    func_100061F8(1, 31); // in the middle of asm
    osInitialize();
    __osSetSR(__osGetSR() | SR_CU1 | SR_FR);
    __osSetFpcCsr(FPCSR_FS);
    osCreateThread(&D_800318B0, 1, (void*) func_100010F8, 0, &D_8002D8B0, 5);
    osStartThread(&D_800318B0);
}

void func_100010F8(s32 arg0) {
    func_10004470(); // create message queues
    osCreateThread(&D_80031AE0, 3, (void*) func_10001194, (void *) arg0, &D_800318B0, 10);
    if ((D_8002AC5C == 0) && (D_80000310 == 0x17D9)) {
        osStartThread(&D_80031AE0);
    }
    osSetThreadPri(&D_800318B0, NULL);
    do {} while(1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_1050/func_10001194.s")
// NON-MATCHING: first half is ok-ish, 2nd half, not-so-much.
// void func_10001194(s32 arg0) {
//     u32 sp4C;
//     s32 sp44;
//     s32 sp40;
//     u32 sp28;
//     s32 temp_a1;
//     u32 temp_t2;
//     u32 temp_t7;
//     s32 phi_s0;
//     s32 i;
//     s32 offset;
//
//     offset = 0x42450;
//
//     func_10005218();
//     phi_s0 = 0x80400000 - (s32)&D_80043B40;
//     if (D_8000030C == 0) {
//         bzero(&D_80043B40, phi_s0);
//     } else {
//         bzero(&D_800E9D10, 0x80400000 - (s32)&D_800E9D10);
//     }
//     osInvalICache(D_80043B40, phi_s0);
//     osInvalDCache(D_80043B40, phi_s0);
//     func_10003920();
//     func_10003930();
//     func_10003BD0();
//     func_1000709C();
//     D_8002AAE8[0] = func_10003C6C(126144, 0xFF, 3, 1, 0);
//     D_8002AAE8[1] = func_10003C6C(126144, 0xFF, 3, 1, 0);
//     osCreateViManager(OS_PRIORITY_VIMGR);
//     func_10004514(offset, &D_80082B20, 16, 1);
//     sp44 = D_80082B20 + offset; // D_80082B20 + first
//     sp28 = (s32)func_1019EA88 - sp44; // second TLB offset - temp_v0
//     sp40 = func_10003C40(sp28, 1, 2, 0);
//     func_10004514(sp44, sp40, sp28, 1);
//     func_10006240(sp40, &D_80082B20, D_8003809C);
//     func_10004074(sp40);
//     temp_t7 = (u32) (((s32)func_151FA130 - (s32)func_15000000) + 4095) >> 12; // 0x1fa130 + 0xfff
//     D_800354F8 = (s32) (D_8003333F & -0x10);
//     temp_a1 = D_80032B3F & -0x10;
//     temp_t2 = temp_t7 + 1;
//     D_800354FC[0] = temp_a1;
//     sp4C = temp_t2;
//     // sp28 = temp_t2;
//     func_10004514(0x42454, temp_a1, ((((temp_t7 + 2) * 4) + 0xF) | 0xF) ^ 0xF, 1);
//     i = 2;
//     do  {
//         D_800354FC[i++] = offset + (D_800354FC[i] ^ 0x8039CCCA);
//     } while ((s32)&D_800354FC < sp4C);
//
//     D_8003BE74 = 0;
//     func_10005B04(0xEB);
//     func_10001420();
//     func_10005BE0();
//     func_15007830();
// }
