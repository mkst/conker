#include <ultra64.h>
#include "functions.h"
#include "variables.h"

// f32 D_80098D90 = {
//     1.0f,
//     -0.16666659712791443f,
//     0.008333065547049046f,
//     -0.00019809599325526506f,
//     2.6057809918711428e-06 // urgh? are we off by 4 bytes?
// };

#pragma GLOBAL_ASM("asm/nonmatchings/code_47D60/func_15047D60.s")
// NON-MATCHING: so many wrong registers
// f32 func_15047D60(f32 arg0) {
//     f32 temp_f0;
//     f32 temp_f12;
//     f32 temp_f14;
//     f32 temp_f2;
//     s32 temp_t6;
//
//     temp_t6 = (*(s32*)&arg0 >> 22) & 0x1FF;
//     if (temp_t6 < 255) {
//         if (temp_t6 >= 230) {
//             temp_f12 = arg0 * arg0;
//             return arg0 + (temp_f12 * arg0 * (D_80098D90[1] + (((((temp_f12 * D_80098D90[4]) + D_80098D90[3]) * temp_f12) + D_80098D90[2]) * temp_f12)));
//         }
//         return arg0;
//     }
//     if (temp_t6 < 310) {
//         temp_f0 = arg0 * D_80085EB0;
//         if (temp_f0 >= 0.0f) {
//             temp_t6 = (temp_f0 + 0.5f);
//         } else {
//             temp_t6 = (temp_f0 - 0.5f);
//         }
//         temp_f2 = (arg0 - (temp_t6 * D_80085EB4)) - (temp_t6 * D_80085EB8);
//         temp_f12 = temp_f2 * temp_f2;
//         temp_f14 = D_80098D90[1] + (temp_f12 * (D_80098D90[2] + (temp_f12 * (D_80098D90[3] + (temp_f12 * D_80098D90[4])))));
//         if ((temp_t6 & 1) == 0) {
//             return (temp_f2 * temp_f12 * temp_f14) + temp_f2;
//         }
//         return -((temp_f2 * temp_f12 * temp_f14) + temp_f2);
//     }
//     if (arg0 != arg0) { // NaN check
//         return D_8002C920;
//     }
//     return D_80085EBC;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_47D60/func_15047F00.s")
// void func_15047F00(f32 *arg0, u16 *arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6) {
//     f32 sp20;
//     f32 temp_f10;
//     f32 temp_f10_2;
//     f32 temp_f12;
//     f32 temp_f12_2;
//     f32 temp_f12_3;
//     f32 temp_f12_4;
//     f32 temp_f12_5;
//     f32 temp_f14;
//     f32 temp_f14_2;
//     f32 temp_f16;
//     f32 temp_f18;
//     f32 temp_f18_2;
//     f32 temp_f4;
//     s32 temp_v1;
//     u32 temp_t8;
//     void *temp_v0;
//     void *temp_v0_2;
//     f32 phi_f14;
//     void *phi_v0;
//     f32 phi_f10;
//     f32 phi_f18;
//     f32 phi_f12;
//     s32 phi_v1;
//     f32 phi_f14_2;
//     void *phi_v0_2;
//     f32 phi_f10_2;
//     f32 phi_f18_2;
//     f32 phi_f12_2;
//     s32 i;
//
//     func_150A7BC0(arg0);
//     arg3 = arg3 * D_80098DB0;
//     sp20 = func_15047C00(arg3);
//     arg0[0][0] = (f32) (sp20 / func_15047D60(arg3));
//     arg2 = arg2 * D_80098DB4;
//     sp20 = func_15047C00(arg2);
//     arg0[1][1] = sp20 / func_15047D60(arg2);;          // 0x14
//     arg0[2][2] = (arg4 + arg5) / (arg4 - arg5);        // 0x28
//     arg0[2][3] = -1.0f;                                // 0x2c -> 11
//     arg0[3][2] = (2.0f * arg4 * arg5) / (arg4 - arg5); // 0x38
//     arg0[3][3] = 0.0f;                                 // 0x3C
//     // 0xx -> [0][0], 0x10 -> [1][0], 0x20 -> [2][0], 0x30 -> [3][0]
//
//     // TODO: figure out what this loop is
//     for (i = 1; i < 5; i++) {
//         arg0[i][0] = arg0[i - 1][0];
//         arg0[i][1] = arg0[i - 1][1];
//         arg0[i][2] = arg0[i - 1][2];
//         arg0[i][3] = arg0[i - 1][3];;
//     }
//     if (arg1 != NULL) {
//         if (temp_f16 <= 2.0f) {
//             *arg1 = -1; //(u16)0xFFFF;
//         } else {
//             temp_t8 = (u32) (131072.0f / temp_f16);
//             *arg1 = (s16) temp_t8;
//             if ((temp_t8 & 0xFFFF) <= 0) {
//                 *arg1 = (u16)1;
//             }
//         }
//     }
// }

void func_15048134(s32 arg0, s32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6) {
    f32 sp28[0x10]; // probably a struct? size 0x40

    func_15047F00(&sp28, arg1, arg2, arg3, arg4, arg5, arg6);
    func_150A7790(&sp28, arg0);
}
