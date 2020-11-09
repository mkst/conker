#include <ultra64.h>

#include "variables.h"

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/os/os22790/func_80022790.s")
// void func_80022790(void) {
//     s32 sp3C;
//     u32 sp38;
//     s32 sp34;
//     s32 sp30;
//     u32 sp24;
//     s32 sp20;
//     s32 temp_ret;
//     s32 temp_ret_2;
//     s32 temp_t3;
//     s32 temp_t4;
//     u32 temp_t9;
//     u32 temp_v1;
//     u32 temp_v1_2;
//
//     sp38 = 0;
//     *(void *)0x800428E0 = 1;
//     __osSetSR(__osGetSR() | 0x20000000);
//     __osSetFpcCsr(0x1000800);
//     if (__osSpRawReadIo(0x1FC007FC, &sp3C) != 0) {
// loop_1:
//         if (__osSpRawReadIo(0x1FC007FC, &sp3C) != 0) {
//             goto loop_1;
//         }
//     }
//     if (__osSpRawWriteIo(0x1FC007FC, sp3C | 8) != 0) {
// loop_3:
//         if (__osSpRawWriteIo(0x1FC007FC, sp3C | 8) != 0) {
//             goto loop_3;
//         }
//     }
//     *(void *)0x80000000 = (s32) (void *)0x100071D0->unk0;
//     *(void *)0x80000004 = (s32) (void *)0x100071D0->unk4;
//     *(void *)0x80000008 = (s32) (void *)0x100071D0->unk8;
//     *(void *)0x8000000C = (s32) (void *)0x100071D0->unkC;
//     (void *)0x80000080->unk0 = (s32) (void *)0x100071D0->unk0;
//     (void *)0x80000080->unk4 = (s32) (void *)0x100071D0->unk4;
//     (void *)0x80000080->unk8 = (s32) (void *)0x100071D0->unk8;
//     (void *)0x80000080->unkC = (s32) (void *)0x100071D0->unkC;
//     (void *)0x80000100->unk0 = (s32) (void *)0x100071D0->unk0;
//     (void *)0x80000100->unk4 = (s32) (void *)0x100071D0->unk4;
//     (void *)0x80000100->unk8 = (s32) (void *)0x100071D0->unk8;
//     (void *)0x80000100->unkC = (s32) (void *)0x100071D0->unkC;
//     (void *)0x80000180->unk0 = (s32) (void *)0x100071D0->unk0;
//     (void *)0x80000180->unk4 = (s32) (void *)0x100071D0->unk4;
//     (void *)0x80000180->unk8 = (s32) (void *)0x100071D0->unk8;
//     (void *)0x80000180->unkC = (s32) (void *)0x100071D0->unkC;
//     osWritebackDCache(0x80000000, 0x190);
//     osInvalICache(0x80000000, 0x190);
//     func_80008120();
//     osPiRawReadIo(4, &sp38);
//     temp_t9 = sp38 & -0x10;
//     sp38 = temp_t9;
//     if (temp_t9 != 0) {
//         *(void *)0x8002BD10 = 0;
//         *(void *)0x8002BD14 = temp_t9;
//     }
//     temp_ret = __ll_mul(*(void *)0x8002BD10, *(void *)0x8002BD14, 0, 3);
//     temp_v1 = (u32) (u64) temp_ret;
//     sp20 = temp_ret;
//     sp24 = temp_v1;
//     temp_ret_2 = __ull_div(sp20, sp24, 0, 4);
//     temp_v1_2 = (u32) (u64) temp_ret_2;
//     *(void *)0x8002BD10 = temp_ret_2;
//     *(void *)0x8002BD14 = temp_v1_2;
//     if (D_8000030C == 0) {
//         bzero(0x8000031C, 0x40);
//     }
//     temp_t4 = *(void *)0xA4600010; // PI_STATUS_REG
//     sp30 = temp_t4;
//     if ((temp_t4 & 3) != 0) {
// loop_9:
//         sp30 = *(void *)0xA4600010;
//         if ((sp30 & 3) != 0) {
//             goto loop_9;
//         }
//     }
//     temp_t3 = *(void *)0xA5000508;
//     sp34 = temp_t3;
//     if ((temp_t3 & 0xFFFF) == 0) {
//         *(void *)0x8002BD20 = 1;
//         __osSetHWIntrRoutine(1, 0x10026B10); // __osLeoInterrupt?
//         return;
//     }
//     *(void *)0x8002BD20 = 0;
// }
