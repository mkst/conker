#include <ultra64.h>

#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/game_476D0/func_1501A220.s")
// NON-MATCHING: 80% there
// void func_1501A220(s32 arg0, s32 arg1) {
//     s32 phi_s0;
//     s32 i;
//
//     f32 temp_f0;
//     s32 temp_f16;
//
//     D_80082FA0 = arg0;
//
//     if (arg0 == 0) {
//         phi_s0 = 1;
//     } else {
//         phi_s0 = arg0 + 2;
//     }
//     D_800BE628 = allocate_memory((phi_s0 * 3) << 7, 1, 1, 0);
//     D_800BE62C = allocate_memory(phi_s0 * 16, 1, 1, 0);
//     if (D_80082FA0 == 1) {
//         temp_f0 = D_800BE63C - 2.0f;
//         temp_f16 = temp_f0 * D_800968E0;
//         phi_s0 = temp_f16 & 3;
//         if ((temp_f16 < 0) && ((temp_f16 & 3) != 0)) {
//             phi_s0 -= 4;
//         }
//         D_800BE6B8 = (temp_f16 - phi_s0) / temp_f0;
//     }
//
//     func_150006E0(D_800BE9F0);
//
//     for(i = 0; i <= D_80082FA0; i++) {
//         func_1501A8C0(i, D_80082FA0, 1023, 0);
//     }
//     if (D_80082FA0 != 0) {
//         func_1501A8C0(i, 0, 1023, 0);
//     }
//
//     D_800BE617 = 1;
//     D_800BE614 = 1;
//     D_800BE635 = 0;
//     func_1510B070(arg1);
// }

#pragma GLOBAL_ASM("asm/nonmatchings/game_476D0/func_1501A39C.s")
// NON-MATCHING: something along these lines
// extern Gfx* D_800BE9C8;
// extern s32 D_8002C930;
// Gfx *func_1501A39C(void) {
//     s32 i;
//     Gfx *tmp = D_800BE9C8;
//     for (i = 0; i < 3; i++) {
//         gSPSegment(tmp++, 0x00, 0x00000000);
//         gSPSegment(tmp++, 0x00, 0x00000000);
//         gSPDisplayList(tmp++, D_8002C930);
//         gDPSetDepthImage(tmp++, D_800BE9C4);
//         gSPViewport(tmp++, D_800BE628 + i + 0x40);
//     }
//     return tmp;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/game_476D0/func_1501A490.s")

Gfx *func_1501A680(Gfx *arg0) {
    gDPSetColorImage(arg0++, G_IM_FMT_RGBA, G_IM_SIZ_16b, D_800BE620, D_8002AAE8[D_800BE9C0]);
    return arg0;
}

Gfx *func_1501A6CC(Gfx *arg0, s32 a, s32 b, s32 c, s32 d) {
    if (a < 3) {
        a = 2;
    }
    if (b <= 0) {
        b = 0;
    }
    if (c >= (D_800BE620 - 2)) {
        c = D_800BE620 - 2;
    }
    if (d >= D_800BE624) {
        d = D_800BE624;
    }

    gDPFillRectangle(arg0++, a, b, c, d);
    return arg0;
}

void func_150A7A00(f32 arg0, f32 arg1, s32 arg2, f32 arg3, f32 arg4, f32 arg5, f32* arg6, f32* arg7, f32* arg8, f32* arg9);
#pragma GLOBAL_ASM("asm/nonmatchings/game_476D0/func_1501A764.s")
// void func_1501A764(s16 arg0, f32 arg1, f32 arg2, f32 arg3, f32 *arg4, f32 *arg5, f32 *arg6) {
//     f32 sp34;
//     f32 sp30;
//     f32 sp2C;
//     f32 sp28;
//     struct140 *temp_v0_2;
//
//     func_150A7A00(arg1, arg2, &D_800D9D10 + (arg0 << 6), arg1, arg2, arg3, &sp34, &sp30, &sp2C, &sp28);
//     sp28 = 1.0f / sp28;
//     // temp_v1 = arg0 * 0x180;
//     temp_v0_2 = &D_800BE628[arg0];
//     // sp28 = temp_f8;
//     *arg4 = (((temp_v0_2->unkC + 5.0f) * sp34 * sp28) + temp_v0_2->unk34);
//     temp_v0_2 = &D_800BE628 [arg0];
//     *arg5 = (temp_v0_2->unk38 - ((temp_v0_2->unk10 + 5.0f) * sp30 * sp28));
//     temp_v0_2 = &D_800BE628[arg0].unk50[D_800BE9C0];  // (D_800BE9C0 * 0x10);
//     *arg6 = (((f32) temp_v0_2->unk4C + (sp2C * sp28 * (f32) temp_v0_2->unk44)) * 32.0f);
// }

#pragma GLOBAL_ASM("asm/nonmatchings/game_476D0/func_1501A8C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_476D0/func_1501AE94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_476D0/func_1501AF44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_476D0/func_1501B0A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_476D0/func_1501B22C.s")
// JUSTREG: I think?
// void func_1501B22C(s32 arg0) {
//     f32 tmp0;
//     f32 tmp1;
//     f32 tmp2;
//     f32 tmp3;
//     f32 tmp4;
//     f32 tmp5;
//     f32 tmp6;
//     f32 tmp7;
//
//     struct259 *temp_s0;
//
//     temp_s0 = D_800BE628 + (arg0 * 0x180);
//     tmp0 = temp_s0->unk74 * 0.5f;
//     tmp7 = -tmp0;
//     tmp5 = temp_s0->unk78 * 0.5f;
//     tmp7 *= D_80096900;
//     tmp3 = cosf(tmp7);
//     tmp7 = sinf(tmp7);
//     temp_s0->unk9C = tmp7;
//     temp_s0->unk90 = tmp7;
//     tmp3 = -tmp3;
//     temp_s0->unk88 = -tmp3;
//     temp_s0->unk94 = tmp3;
//     temp_s0->unk98 = 0.0f;
//     temp_s0->unk8C = 0.0f;
//     tmp6 = tmp5 * D_80096904;
//     tmp2 = cosf(tmp6);
//     tmp0 = sinf(tmp6);
//     tmp4 = -tmp2;
//     tmp0 = -tmp0;
//     temp_s0->unkA0 = 0.0f;
//     temp_s0->unkB0 = -tmp4;
//     temp_s0->unkA8 = tmp0;
//     temp_s0->unkB4 = tmp0;
//     temp_s0->unkAC = 0.0f;
//     temp_s0->unkA4 = tmp4;
// }
