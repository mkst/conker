#include <ultra64.h>

#include "functions.h"
#include "variables.h"

#if 0
u32 jtbl_8002C410[5] = {
    0x10012120,
    0x100121A8,
    0x10012214,
    0x100122CC,
    0x10012340
};

f32 D_8002C424 = 0.05235987901687622;
f32 D_8002C428 = 519.0;
f32 D_8002C42C = 0.3490658402442932;
f32 D_8002C430 = 0.07999999821186066;
f32 D_8002C434 = 0.12217304855585098;
f32 D_8002C438 = 0.07999999821186066;
f32 D_8002C43C = 11000.0;
f32 D_8002C440 = 0.05000000074505806;
f32 D_8002C444 = 9000.0;
#endif

void func_10011FA0(s32 *arg0) {
    D_80042770 = arg0;
}

void func_10011FB0(s32 arg0) {
    s32 tmp = D_80042774;
    if (tmp == 3) {
        D_80041FD9 = 1;
    }
    D_80042774 = arg0;
}

void func_10011FDC(s32 arg0) {
    D_80042778 = arg0;
}

void func_10011FEC(void) {
    D_80042770 = D_80042774 = D_80042778 = D_8004277C = 0;
}

// jump table
#pragma GLOBAL_ASM("asm/nonmatchings/init_11FA0/func_10012020.s")
// f32 func_10012020(void) {
//     f32 sp68;
//     f32 sp60;
//     f32 sp5C;
//     f32 sp58;
//     f32 sp54;
//     f32 sp48;
//     f32 temp_f0;
//     f32 temp_f0_2;
//     f32 temp_f0_3;
//     f32 temp_f0_4;
//     f32 temp_f0_5;
//     f32 temp_f0_6;
//     f32 temp_f10;
//     f32 temp_f14;
//     f32 temp_f2;
//     f32 temp_f2_2;
//     f32 temp_f2_3;
//     f32 temp_f2_4;
//     f32 temp_ret;
//     s32 temp_a0;
//     s32 temp_a0_2;
//     s32 temp_s0;
//     s32 temp_s0_2;
//     s32 temp_v0;
//     s32 temp_v1;
//     s32 temp_v1_2;
//     u32 temp_t3;
//     s32 phi_v0;
//     s32 phi_v0_2;
//     f32 phi_f2;
//     s32 phi_s0;
//     f32 *phi_s1;
//     void *phi_s2;
//     s32 phi_s0_2;
//     f32 *phi_s3;
//     void *phi_s4;
//     f32 phi_return;
//     s32 phi_v1;
//
//     sp68 = 0.0f;
//     sp5C.unk4 = (s32) D_8002BA10->unk4;
//     sp5C.unk0 = (s32) D_8002BA10->unk0;
//     sp54.unk4 = (s32) D_8002BA18->unk4;
//     sp54.unk0 = (s32) D_8002BA18->unk0;
//     temp_v0 = D_80042770;
//     phi_v0 = temp_v0;
//     if ((D_800DBFF0->unk5F0 & 1) != 0) {
//         phi_v0 = temp_v0;
//         if ((D_800B0DF0->unk2A & 1) == 0) {
//             phi_v0 = 1;
//         }
//     }
//     temp_v1 = D_80042774;
//     if (temp_v1 != 0) {
//         phi_v1 = temp_v1;
// block_6:
//         phi_v0 = phi_v1;
//     } else {
//         temp_v1_2 = D_80042778;
//         phi_v1 = temp_v1_2;
//         if (temp_v1_2 != 0) {
//             goto block_6;
//         }
//     }
//     phi_v0_2 = phi_v0;
//     if (phi_v0 == 6) {
//         phi_v0_2 = 0;
//     }
//     temp_t3 = phi_v0_2 - 1;
//     if (temp_t3 < 5U) {
//         goto **(&jtbl_8002C410 + (temp_t3 * 4));
//     case 0:
//         temp_f0 = D_80042790;
//         D_8004277C = 0;
//         sp5C = 127.0f;
//         sp68 = (13.0f - temp_f0) + temp_f0;
//         temp_f2 = D_80042780;
//         sp54 = ((D_8002C428 + (sinf(D_80042798 * D_8002C424) * 200.0f)) - temp_f2) + temp_f2;
//         goto block_23;
//     case 1:
//         D_8004277C = 0;
//         sp68 = 70.0f;
//         sp5C = 127.0f;
//         sp54 = (sinf(D_80042798 * D_8002C42C) * 200.0f) + 450.0f;
//         goto block_23;
//     case 2:
//         temp_f14 = D_8002C430;
//         temp_f0_2 = D_80042790;
//         D_8004277C = 0;
//         temp_f2_2 = D_80042788;
//         sp68 = ((52.0f - temp_f0_2) * temp_f14) + temp_f0_2;
//         sp5C = ((127.0f - temp_f2_2) * temp_f14) + temp_f2_2;
//         temp_f2_3 = D_80042780;
//         temp_f10 = sinf(D_80042798 * D_8002C434, temp_f14) * 282.0f;
//         D_80041FD9 = (u8)0;
//         sp54 = (((436.0f + temp_f10) - temp_f2_3) * D_8002C438) + temp_f2_3;
//         goto block_23;
//     case 3:
//         D_8004277C = 4;
//         sp60 = 127.0f;
//         if (D_800BE9B4 != 0) {
//             phi_f2 = 400.0f;
//         } else {
//             temp_f0_3 = D_80042784;
//             phi_f2 = (400.0f - temp_f0_3) + temp_f0_3;
//         }
//         sp58 = phi_f2;
//         D_80041FD9 = (u8)0;
//     } else if (4 == D_8004277C) {
//         temp_f0_4 = D_80042784;
//         temp_f2_4 = ((D_8002C43C - temp_f0_4) * D_8002C440) + temp_f0_4;
//         sp58 = temp_f2_4;
//         if (temp_f2_4 < D_8002C444) {
//             D_8004277C = 4;
//         } else {
//             D_8004277C = 0;
//             D_80041FD9 = (u8)1;
//         }
//     }
// block_23:
//     D_80042798 = (f32) (D_80042798 + D_800BE9A4);
//     if ((sp68 != D_80042790) || (1.0f != D_80042794)) {
//         sp48 = sp68 / 127.0f;
//         phi_s0 = 0;
// loop_26:
//         func_10008BC0(phi_s0 & 0xFF, sp48, 1.0f);
//         temp_s0 = phi_s0 + 1;
//         phi_s0 = temp_s0;
//         if (temp_s0 != 3) {
//             goto loop_26;
//         }
//         D_80042790 = sp68;
//         D_80042794 = 1.0f;
//     }
//     phi_s1 = &sp54;
//     phi_s2 = D_80042780;
//     phi_s0_2 = 0;
//     phi_s3 = &sp5C;
//     phi_s4 = D_80042788;
// loop_29:
//     temp_f0_5 = *phi_s1;
//     if (temp_f0_5 != *phi_s2) {
//         temp_a0 = phi_s0_2 & 0xFF;
//         func_10008B60(temp_a0, temp_a0 & 0xFF, 9, 0, (s32) temp_f0_5);
//         *phi_s2 = (f32) *phi_s1;
//     }
//     temp_f0_6 = *phi_s3;
//     phi_return = temp_f0_6;
//     if (temp_f0_6 != *phi_s4) {
//         temp_a0_2 = phi_s0_2 & 0xFF;
//         temp_ret = func_10008B60(temp_a0_2, temp_a0_2 & 0xFF, 8, 0, (s32) temp_f0_6);
//         *phi_s4 = (f32) *phi_s3;
//         phi_return = temp_ret;
//     }
//     temp_s0_2 = phi_s0_2 + 1;
//     phi_s1 = phi_s1 + 4;
//     phi_s2 = phi_s2 + 4;
//     phi_s0_2 = temp_s0_2;
//     phi_s3 = phi_s3 + 4;
//     phi_s4 = phi_s4 + 4;
//     if (temp_s0_2 != 2) {
//         goto loop_29;
//     }
//     D_80042770 = 0;
//     return phi_return;
// }
