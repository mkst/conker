#include <ultra64.h>

#include "functions.h"
#include "variables.h"

void func_1000E40C(s32, s32);

#pragma GLOBAL_ASM("asm/nonmatchings/init_A420/func_1000A420.s")
// NON-MATCHING: mostly just stack + 1 cast
// s32 func_1000A420(s32 arg0, s32 arg1, s32 arg2, f32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 *arg9, s32 *argA, s32 *argB) {
//     s8 temp_t5;
//     s16 tmp0;
//     //
//     f32 phi_f12;
//     //
//     s32 temp_t1;
//     s32 ret;
//     s32 sp24;
//     s32 temp_v1;
//
//     sp24 = 128;
//     if ((arg7 & 0x8000) != 0) {
//         // if arg7 is negative, take abs
//         arg7 = arg7 & 0x7FFF;
//         ret = func_150AD960(arg4, arg6, 0, 0);
//     } else {
//         ret = func_150AD9A0(arg4, arg5, arg6);
//     }
//     temp_t1 = arg8 - arg7;
//     temp_v1 = ((arg8 - ret) << 15) / temp_t1;
//     temp_v1 = 0x7FFF - temp_v1;
//     if (temp_v1 >= 401) {
//         if (arg9 != 0) {
//             if (func_150AD960(arg0, arg2, 0, 0) >= 31) {
//                 phi_f12 = sqrtf((f32) ((arg0 * arg0) + (arg2 * arg2)));
//                 if (D_8002C200 < phi_f12) { // rodata, 0.009999999776482582
//                     phi_f12 = (f32) arg0 / phi_f12;
//                 }
//                 tmp0 = (s32) ((f64) func_150487E0(phi_f12) * D_8002C208);
//                 if (arg2 > 0) {
//                     if (tmp0 < 0) {
//                         tmp0 = -128 - tmp0;
//                     } else {
//                         tmp0 = 128 - tmp0;
//                     }
//                 }
//                 temp_t5 = (s8) (s32) ((f32) tmp0 + (arg3 * D_8002C210));
//                 if (( temp_t5 >= 96) || ( temp_t5 < -96)) {
//                     tmp0 = 0;
//                 } else if ( temp_t5 >= 32) {
//                     tmp0 = 95 - temp_t5;
//                 } else if (temp_t5 < -32) {
//                     tmp0 = -95 - temp_t5;
//                 } else {
//                     sp24 = 0;
//                     tmp0 = temp_t5 * 2;
//                 }
//                 *arg9 = (tmp0 + 64) | sp24;
//             } else {
//                 *arg9 = 64;
//             }
//         }
//         if ((0x7FFF - ((s32) ((arg8 - ret) << 15) / temp_t1)) < 0) {
//             temp_v1 = 0;
//         }
//         if (temp_v1 >= 0x8000) {
//             temp_v1 = 0x7FFF;
//         }
//         *argA = temp_v1;
//     } else {
//         *argA = 0;
//     }
//     if (argB != 0) {
//         *argB = ret;
//     }
//     return ret;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/init_A420/func_1000A750.s")
#pragma GLOBAL_ASM("asm/nonmatchings/init_A420/func_1000B060.s")
// NON-MATCHING: fair amount to fix up
// s32 func_1000B060(f32 arg0, f32 arg1, s32 arg2) {
//     s16 sp1C;
//     f32 sp18;
//     f32 temp_f0;
//     s16 temp_t8;
//     s32 temp_f6;
//     s8 temp_t9;
//     s16 phi_v1;
//     s16 phi_v1_2;
//     s16 phi_a1;
//
//     temp_f0 = sqrtf((arg0 * arg0) + (arg1 * arg1));
//     sp18 = temp_f0;
//     if (D_8002C214 < temp_f0) {
//         sp18 = arg0 / temp_f0;
//     }
//     sp1C = 128;
//     temp_f6 = ((f64) func_150487E0(sp18) * D_8002C218); // ,(u16)0x80
//     phi_v1 = temp_f6;
//     if (0.0f < arg1) {
//         temp_t8 = temp_f6;
//         if ((s32) temp_t8 < 0) {
//             phi_v1 = (s16) (-128 - temp_t8);
//         } else {
//             phi_v1 = (s16) (128 - temp_t8);
//         }
//     }
//     temp_t9 = phi_v1 + arg2;
//     if (( temp_t9 >= 96) || ( temp_t9 < -96)) {
//         phi_v1_2 = 0;
//         phi_a1 = 128;
//     } else if ((s32) temp_t9 >= 32) {
//         phi_v1_2 = (s16) (0x5F - temp_t9);
//         phi_a1 = 128;
//     } else if ((s32) temp_t9 < -32) {
//         phi_v1_2 = (s16) (-0x5F - temp_t9);
//         phi_a1 = 128;
//     } else {
//         phi_v1_2 = (s16) (temp_t9 * 2);
//         phi_a1 = 0;
//     }
//     return (phi_v1_2 + 64) | phi_a1;
// }
