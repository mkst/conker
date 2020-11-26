#include <ultra64.h>

#include "variables.h"

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/os/os22790/func_80022790.s")
// NON-MATCHING: so, so far away.
// void func_80022790(void) {
//     s32 sp3C;
//     u32 sp38;
//     s32 sp34;
//     s32 sp30;
//     u32 sp24;
//     s32 sp20;
//     u64 temp_ret;
//     u64 temp_ret_2;
//     u16 temp_t3;
//     s32 temp_t4;
//     u32 temp_t9;
//     u32 temp_v1;
//     u32 temp_v1_2;
//
//     sp38 = 0;
//     D_800428E0 = 1;
//     __osSetSR(__osGetSR() | SR_CU1);
//     __osSetFpcCsr(SP_SET_SIG7 | SP_CLR_SIG1);
//
//     // if (__osSpRawReadIo(D_1FC007FC, &sp3C) != 0) {
//     while (__osSpRawReadIo(0x1FC007FC, &sp3C)) {};
//     // }
//     // if (__osSpRawWriteIo(D_1FC007FC, sp3C | 8) != 0) {
//     while (__osSpRawWriteIo(0x1FC007FC, sp3C | 8)) {};
//     // }
//
//     D_80000000 = D_100071D0->unk0;
//     D_80000004 = D_100071D0->unk4;
//     D_80000008 = D_100071D0->unk8;
//     D_8000000C = D_100071D0->unkC;
//     //
//     D_80000080->unk0 = D_80000000;
//     D_80000080->unk4 = D_80000004;
//     D_80000080->unk8 = D_80000008;
//     D_80000080->unkC = D_8000000C;
//
//     D_80000100->unk0 = D_80000000;
//     D_80000100->unk4 = D_80000004;
//     D_80000100->unk8 = D_80000008;
//     D_80000100->unkC = D_8000000C;
//
//     D_80000180->unk0 = D_80000000;
//     D_80000180->unk4 = D_80000004;
//     D_80000180->unk8 = D_80000008;
//     D_80000180->unkC = D_8000000C;
//
//     osWritebackDCache(&D_80000000, 400);
//     osInvalICache(&D_80000000, 400);
//     func_80008120();
//     osPiRawReadIo(4, &sp38);
//     temp_t9 = sp38 & -0x10;
//     sp38 = temp_t9;
//     if (temp_t9 != 0) {
//         D_8002BD10 = 0;
//         D_8002BD14 = temp_t9;
//     }
//     temp_ret = __ll_mul(D_8002BD10, D_8002BD14, 0, 3);
//     temp_v1 = (u32) (u64) temp_ret;
//     sp20 = temp_ret;
//     sp24 = temp_v1;
//     temp_ret_2 = __ull_div(sp20, sp24, 0, 4);
//     temp_v1_2 = (u32) (u64) temp_ret_2;
//     D_8002BD10 = temp_ret_2;
//     D_8002BD14 = temp_v1_2;
//     if (D_8000030C == 0) {
//         bzero(D_8000031C, 64);
//     }
//     temp_t4 = IO_READ(PI_STATUS_REG);
//     sp30 = temp_t4;
//     if ((temp_t4 & (PI_STATUS_IO_BUSY | PI_STATUS_DMA_BUSY)) != 0) {
//         do {
//             sp30 = IO_READ(PI_STATUS_REG);
//         }
//         while ((sp30 & (PI_STATUS_IO_BUSY | PI_STATUS_DMA_BUSY)) != 0);
//     }
//     temp_t3 = IO_READ(0xA5000508); //IO_READ(PI_DOM2_ADDR1 + 0x508);
//     sp34 = temp_t3;
//     if ((temp_t3 ) == 0) {
//         D_8002BD20 = 1;
//         __osSetHWIntrRoutine(1, &D_10026B10);
//         return;
//     }
//     D_8002BD20 = 0;
// }
