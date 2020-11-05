#include <ultra64.h>

#include "functions.h"
#include "variables.h"

// needs jump table
#pragma GLOBAL_ASM("asm/nonmatchings/code_5AB0/func_80005AB0.s")
// unknown instructions
#pragma GLOBAL_ASM("asm/nonmatchings/code_5AB0/func_80005B04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_5AB0/func_80005BE0.s")
// void *func_80005BE0(void) {
//     s16 temp_a0;
//     void *temp_v0;
//     void *temp_v1;
//     void *phi_v0;
//
//     temp_v1 = D_8003BE7C;
//     phi_v0 = D_8003BE70;
// loop_1:
//     *phi_v0 = (u8)0xFF;
//     temp_v0 = phi_v0 + 1;
//     phi_v0 = temp_v0;
//     if (phi_v0 != temp_v1) {
//         goto loop_1;
//     }
//     temp_a0 = D_8003BE78 & 7;
//     if (temp_a0 != 0) {
//         *temp_v1 = (s8) ((2 << (temp_a0 - 1)) - 1);
//     }
//     return temp_v0;
// }

// needs jump table
#pragma GLOBAL_ASM("asm/nonmatchings/code_5AB0/func_80005C2C.s")
// needs jump table
#pragma GLOBAL_ASM("asm/nonmatchings/code_5AB0/func_80007C74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_5AB0/func_80007CC4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_5AB0/func_80007D28.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_5AB0/func_80007DA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_5AB0/func_80007DAC.s")
// void func_80007DAC(void) {
//     s32 temp_a0;
//     s32 temp_s1;
//     s32 temp_s1_2;
//     s32 temp_s6;
//     s32 temp_t1;
//     s32 phi_t1;
//     s32 phi_s1;
//     u32 phi_t0;
//
//     *(void *)0x8003C8FC = (void *) sp;
//     *(void *)0x8003C8F8 = (s32) saved_reg_ra;
//     if ((*(void *)0x800E9D00 & 0x2000) != 0) {
//         phi_t1 = 0x640000;
// loop_2:
//         temp_t1 = phi_t1 - 1;
//         phi_t1 = temp_t1;
//         if (temp_t1 != 0) {
//             goto loop_2;
//         }
//         osViBlack(0, saved_reg_ra);
//         temp_a0 = *(void *)0x8002AE34;
//         if (temp_a0 >= 576) {
//             func_80007CC4(0x307, 0x8002AE1F);
//             osWritebackDCacheAll();
//             return;
//         }
//         func_80007C74(temp_a0, ERROR(Read from unset register $k0)->unk11C);
//         func_80007C74(ERROR(Read from unset register $a0) + 0x20, ERROR(Read from unset register $k0)->unk120);
//         func_80007C74(ERROR(Read from unset register $a0) + 0x20, ERROR(Read from unset register $k0)->unk118);
//         func_80007C74(ERROR(Read from unset register $a0) + 0x20, ERROR(Read from unset register $k0)->unk124);
//         func_80007C74(ERROR(Read from unset register $a0) + 0x20, ERROR(unknown instruction: ld $a1, 0x100($k0)));
//         func_80007C74(ERROR(Read from unset register $a0) + 0x20, ERROR(Read from unset register $k0)->unk14);
//         func_80007C74(ERROR(Read from unset register $a0) + 0x20, D_8003C8E0);
//         *(void *)0x8002AE34 = (s32) (ERROR(Read from unset register $a0) + 0x20);
//         func_80007CC4(0x56, 0x8002ADFF);
//         osWritebackDCacheAll();
//         temp_s6 = *(void *)0xA4600010;
//         temp_s1 = ERROR(unknown instruction: add $s1, $s1, $at);
//         func_80007C74(0x76, temp_s1);
//         osWritebackDCacheAll();
//         if ((osPiRawStartDma(0, 0x19EA88, temp_s1 | 0x80000000, 0x1A33E8 - 0x19EA88) & 5) != 0) {
//             func_80007CC4(0x96, 0x8002AE0D);
//             osWritebackDCacheAll();
// loop_7:
//             goto loop_7;
//         }
// loop_8:
//         if ((osPiGetStatus() & 1) != 0) {
//             goto loop_8;
//         }
//         if (temp_s6 == 0) {
//             *(void *)0xA4600010 = 2;
//         }
//         func_80007CC4(0x96, 0x8002AE06);
//         osWritebackDCacheAll();
//         osUnmapTLB(0xF);
//         arg4 = ERROR(unknown instruction: add $t0, $a3, $t0);
//         arg5 = -1;
//         osMapTLB(0xF, 0x1E000, 0x16000000, temp_s1 & 0xFFFFFFF);
//         osInvalDCache(0x16000000, 0x40000);
//         osInvalICache(0x16000000, 0x40000);
//         func_80007C74(0xB6, *(void *)0x16000B14);
//         func_80007CC4(0xD6, 0x8002AE18);
//         osWritebackDCacheAll();
//         if (func_86000B14(ERROR(Read from unset register $k0)) != 0) {
//             *(void *)0x8003C8F8 = 0x10007760;
//         }
//         phi_s1 = 2;
// loop_14:
//         osUnmapTLB(phi_s1);
//         temp_s1_2 = phi_s1 + 1;
//         phi_s1 = temp_s1_2;
//         if (temp_s1_2 != 0x20) {
//             goto loop_14;
//         }
//         func_80001420();
//         func_80005BE0();
//         phi_t0 = 0x80000000U;
// loop_16:
//         ERROR(unknown instruction: cache 0x0, ($t0));
//         phi_t0 = phi_t0 + 0x20;
//         if (phi_t0 < 0x80004000U) {
//             goto loop_16;
//         }
//         func_80007CC4(0x300, 0x8002ADEC);
//         osWritebackDCacheAll();
//         *(void *)0x8002AE34 = 0;
//     }
// }
