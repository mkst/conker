#include <ultra64.h>

#include "functions.h"
#include "variables.h"
#include "macros.h"

void func_10001050(void) {
    bzero(&D_8002D4B0, (s32) &D_80043B40 - (s32) &D_8002D4B0); // zero out bss
    func_100061F8(1, 31);
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

#pragma GLOBAL_ASM("asm/nonmatchings/init_1050/func_10001194.s")
// NON-MATCHING: start/end mostly ok, middle, not-so-much.
// s32 *allocate_memory(s32, s32, s32, s32);
// void func_10001194(s32 arg0) {
//     u32 block_count;
//     s32 sp44;
//     s32 sp40;
//     u32 sp28;
//     s32 offset;
//     s32 phi_s0;
//     s32 i;
//     s32 *fb;
//
//     offset = D_80042450;
//
//     func_10005218();
//     phi_s0 = 0x80400000 - (s32)&D_80043B40;
//     if (D_8000030C == 0) { // osResetType
//         bzero(&D_80043B40, phi_s0);
//     } else {
//         bzero(&D_800E9D10, 0x80400000 - (s32)&D_800E9D10);
//     }
//     osInvalICache(&D_80043B40, phi_s0);
//     osInvalDCache(&D_80043B40, phi_s0);
//     func_10003920();
//     func_10003930();
//     func_10003BD0();
//     func_1000709C();
//     fb = D_8002AAE8;
//     *(fb + 0) = func_10003C6C(126144, 0xFF, 3, 1, 0);
//     *(fb + 1) = func_10003C6C(126144, 0xFF, 3, 1, 0);
//     osCreateViManager(OS_PRIORITY_VIMGR);
//
//     // permuter...
//     if (!phi_s0) {};
//
//     func_10004514(offset, &D_80082B20, 16, 1);
//     if (0) {};
//     sp44 = D_80082B20 + offset;         // D_80082B20 + first
//     sp28 = (s32)func_1019EA88 - sp44;   // second TLB offset - temp_v0 // func_1600000 ?
//     sp40 = allocate_memory(sp28, 1, 2, 0);
//     func_10004514(sp44, sp40, sp28, 1);
//     if (0) {};
//     func_10006240(sp40, &D_80082B20, D_8003809C);
//     func_10004074(sp40);
//     // D_80033330 is the current compressed item
//     block_count = (u32) (((s32)func_151FA130 - (s32)func_15000000) + 4095) >> 12; // 2072880 bytes / 4096 = 506 offsets
//     D_800354F8 = ALIGN16(&D_80033330);
//     // D_800354FC holds compressed code offsets (encrypted/unencrypted)
//     D_800354FC = ALIGNU16(&D_80032B30);
//     func_10004514(offset + 4, D_800354FC, (((((block_count + 2)) + 0xF) | 0xF) ^ 0xF) , 1); //
//
//     for (i = 0; i < block_count; i++) {
//         D_800354FC[i] = (D_800354FC[i] ^ 0x8039CCCA) + offset;
//     }
//
//     D_8003BE74 = 0;
//     func_10005B04(0xEB);
//     func_10001420();
//     func_10005BE0();
//     func_15007830();
// }
