#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_15058F24(struct127 *arg0, f32, f32);
u8   func_150599C8(struct127 *arg0, u8 arg1, u16 arg2);
void func_1505A250(f32 arg0, f32 arg1, f32 arg2, f32 *arg3, f32 *arg4);
f32  func_1505A3A8(f32 arg0, void *arg1, f32 arg2, f32 arg3, u8 arg4);

u8  func_1505B9C4(void *arg0, struct127 *arg1, s32 arg2, s32 arg3, u8 arg4, s32 arg5, u8 arg6);
s32 func_1505C1E4(void *arg0, struct127 *arg1, void *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void func_15194FF4(struct127 *arg0, struct127 *arg1, s32 arg2);

// Extended layout of struct197 (header truncates it at 0x1C).
typedef struct {
    u8  pad0[0x4];
    u16 unk4;
    u16 unk6;
    f32 unk8;
    f32 unkC;
    f32 unk10;
    f32 unk14;
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    f32 unk24;
    s32 unk28;
    s32 unk2C;
    s32 unk30;
    s32 unk34;
    s8  unk38;
    s8  unk39;
    u8  pad3A[0x6];
    u8  unk40[0x1D0];
    u8  unk210[0x1D0];
} struct197x;

#pragma GLOBAL_ASM("asm/nonmatchings/game_83300/func_15055E50.s")

void func_15056150(struct127 *arg0) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f2;
    s16 *temp_v1;

    if (arg0->unk2E8 != 0) {
        temp_v1 = D_800D2104[arg0->unk13F];
        temp_f2 = temp_v1[4];
        temp_f12 = temp_v1[6];
        temp_f14 = temp_v1[5];
        temp_f16 = arg0->unk2E8;
        temp_f16 = temp_f16 * 8.0f;
        temp_f18 = arg0->x_position - temp_f2;
        temp_f20 = arg0->z_position - temp_f12;
        temp_f22 = arg0->y_position - temp_f14;
        temp_f0 = sqrtf((temp_f18 * temp_f18) + (temp_f20 * temp_f20) + (temp_f22 * temp_f22) + D_80099440);
        temp_f18 *= 1.0f / temp_f0;
        temp_f20 *= 1.0f / temp_f0;
        temp_f22 *= 1.0f / temp_f0;
        if (temp_f16 < temp_f0) {
            arg0->x_position = temp_f18 * temp_f16 + temp_f2;
            arg0->z_position = temp_f20 * temp_f16 + temp_f12;
            arg0->y_position = temp_f22 * temp_f16 + temp_f14;
        }
    }
}

void func_15056258(struct127 *arg0) {
    f32 temp_f2;
    f32 temp_f4;
    f32 phi_f12;

    temp_f4 = arg0->unk11C;
    temp_f2 = arg0->unk118 - arg0->unk11C;
    arg0->unk11C = arg0->unk118;
    phi_f12 = 2.0f * (arg0->y_position - ((arg0->unk118 - 60.0f) - 170.0f));
    if (!(phi_f12 < 0.0f)) {
        if (!(fabsf(temp_f2) > 30.0f)) {
            if (phi_f12 > 300.0f) {
                phi_f12 = 300.0f;
            }
            arg0->y_position += (phi_f12 * temp_f2 * D_80099444);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_83300/func_150562FC.s")
// NON-MATCHING: 10% of the way there...
// void func_150562FC(struct127 *arg0) {
//     f32 sp70;
//     f32 sp6C;
//     f32 sp68;
//     u8 sp63;
//     s32 sp54;
//     f32 sp4C;
//     f32 temp_f0;
//     f32 temp_f12;
//     f32 temp_f14;
//
//     s32 *temp_a3;
//     // s32 temp_t1;
//     s32 temp_t1_2;
//     s32 temp_t2;
//     s32 temp_t9;
//     s32 temp_v0_6;
//     struct255 *temp_v1_2;
//     u16 temp_v0_2;
//     u16 temp_v0_3;
//     u16 temp_v0_4;
//     u16 temp_v0_5;
//     u16 temp_v0_7;
//     u16 temp_v0_8;
//     u16 temp_v1;
//     u8 temp_v0;
//     struct127 *temp_t0;
//     struct127 *temp_t0_2;
//     u8 *temp_v0_11;
//     s32 phi_a2;
//     s32 phi_t1;
//     s32 phi_t1_2;
//     s32 phi_t1_3;
//     s32 phi_a2_2;
//     f32 phi_f18;
//     s32 phi_t1_4;
//     f32 phi_f0;
//     s32 phi_t1_5;
//     s32 phi_t2;
//
//     sp63 = arg0->unk13D - 0x64;
//     sp54 = 0;
//     sp4C = 5.0f;
//     arg0->immune = (u8)0x1E;
//     temp_t0 = &D_800CC2D0[sp63];
//     arg0->unk180 = (f32) temp_t0->unk180;
//     arg0->unk1CC = (f32) arg0->y_position;
//     arg0->gravity = 4.5f;
//     arg0->y_velocity = 0.0f;
//     if ((s32) arg0->unk21C < 0x1E) {
//         arg0->unk21C += D_800BE9A0;
//     }
//     temp_v0 = arg0->id;
//     if (temp_v0 == 0x57) {
//         arg0->unk5C = 9;
//         if ((s32) arg0->unk21C >= 0xA) {
//             temp_v0_2 = temp_t0->unk84.uh;
//             sp54 = 1;
//             phi_a2 = 0xD;
//             if (temp_v0_2 == 0x114) {
//                 phi_a2 = 0x24;
//             }
//             phi_t1 = 0;
//             if (temp_v0_2 == 0x116) {
//                 phi_t1 = 1;
//             }
//             if (temp_v0_2 == 0x117) {
//                 phi_t1 = 2;
//             }
//             func_150649A0(sp63, D_800C3E78, phi_a2);
//             phi_t1_3 = phi_t1;
//             phi_a2_2 = phi_a2;
//         } else if (temp_v0 == 0x8C) {
//             arg0->unk5C = 4;
//             if ((s32) arg0->unk21C >= 0xA) {
//                 temp_v0_2 = temp_t0->unk84.uh;
//                 sp54 = 1;
//                 phi_t1_2 = 0;
//                 if (temp_v0_2 == 0x1A6) {
//                     phi_t1_2 = 1;
//                 }
//                 if (temp_v0_2 == 0x1A7) {
//                     phi_t1_2 = 2;
//                 }
//                 func_150649A0(sp63, D_800C3E78, 0xD);
//                 phi_t1_3 = phi_t1_2;
//                 phi_a2_2 = 0xD;
//             }
//         } else {
//             if ((temp_v0 == 0xA8) || (temp_v0 == 0xA9)) {
//                 arg0->unk5C = 9;
//                 temp_v0_2 = temp_t0->unk84.uh;
//                 sp54 = 1;
//                 phi_t1_3 = 0;
//                 if (temp_v0_2 == 0x1B0) {
//                     phi_t1_3 = 1;
//                 }
//                 phi_a2_2 = 0xD;
//                 if (temp_v0_2 == 0x1B1) {
//                     phi_t1_3 = 2;
//                     phi_a2_2 = 0xD;
//                 }
//             } else {
//                 phi_t1_3 = 0;
//                 phi_a2_2 = 0xD;
//                 if (temp_v0 == 0x5E) {
//                     arg0->unk5C = 9;
//                     temp_v0_2 = temp_t0->unk84.uh;
//                     sp54 = 1;
//                     sp4C = 16.0f;
//                     phi_t1_3 = 0;
//                     if (temp_v0_2 == 0x286) {
//                         phi_t1_3 = 2;
//                     }
//                     phi_a2_2 = 0xD;
//                     if (temp_v0_2 == 0x27E) {
//                         phi_t1_3 = 1;
//                         phi_a2_2 = 0xD;
//                     }
//                 }
//             }
//         }
//         temp_v0_6 = func_1505E7CC(phi_a2_2, arg0); //, phi_a2_2);
//         temp_t0_2 = &D_800CC2D0[sp63];
//         phi_t1_4 = phi_t1_3;
//         temp_t2 = temp_v0_6;
//         temp_a3 = D_800D1588[arg0->id] - 8;
//         if (temp_t0_2->interaction_state == 1) {
//             if (temp_t0_2->in_water != 0) {
//                 temp_t9 = temp_v0_6 * 3;
//                 arg0->unk5C = 4;
//                 sp54 = 1;
//                 if (((temp_a3 + (temp_t9 * 8)) + 14) != 0) { // unkE
//                     phi_t1_4 = 1;
//                 }
//             }
//         }
//         if ((s32) arg0->unk21C < 0x14) {
//             phi_f18 = (f32) (u32) arg0->unk21C / 50.0f;
//             if (D_800BE9B4 != 0) {
//                 phi_f18 = 1.0f;
//             }
//         } else {
//             phi_f18 = D_80099448;
//         }
//
//         sp70 = (f32) arg0->unk10F;
//
//         func_150599C8(arg0, 0x10, (temp_t0_2->unk7A + (arg0->unk13E << 8)) & 0xFFFF); //, temp_a3);
//         temp_t1_2 = phi_t1_4;
//         temp_v1_2 = temp_t0_2->unk1D4;
//         if (temp_v1_2 != 0) {
//             temp_f0 = (f32) ((s32) arg0->unk10C / 0x64);
//             if (temp_t0_2->interaction_state != 0x15) {
//                 temp_v0_8 = arg0->unk21C;
//                 if ((s32) temp_v0_8 >= 7) {
//                     arg0->y_position = (f32) temp_v1_2->unk240->unk1A;
//                     if ((s32) temp_v0_8 < 0xE) {
//                         // temp_f6 = (f32) temp_v0_8;
//                         temp_f0 = (temp_v0_8 / 14.0f) * temp_f0;
//                     }
//                     arg0->y_position = (f32) (arg0->y_position + temp_f0);
//                 }
//                 if (arg0->id == 0xE) {
//                     arg0->unkC4 = 0.0f;
//                 } else if (arg0->id == 0x13) {
//                     sp70 = 204.0f;
//                     arg0->unkC4 = 0.0f;
//                 }
//             }
//         }
//         phi_t1_5 = phi_t1_4;
//         phi_t2 = temp_t2;
//         if (temp_t0_2->interaction_state == 0x15) {
//             phi_t2 = func_1505E7CC(0x39, arg0);
//             arg0->unk7A = (u16) temp_t0_2->unk7A;
//             arg0->y_position = (f32) (temp_t0_2->y_position - 10.0f);
//             if ((arg0->unk28 > 100.0f) && ((s32) arg0->unk21C >= 0x15)) {
//                 phi_t1_5 = 1;
//             } else {
//                 sp4C = 0.0f;
//                 phi_t1_5 = phi_t1_4;
//             }
//             sp70 = 0.0f;
//             temp_f0 = arg0->unkC4;
//             arg0->xz_velocity = 0.0f;
//             arg0->unkC4 = (f32) (temp_f0 + ((temp_t0_2->unkC4 - temp_f0) * D_8009944C));
//         }
//         func_1505A184(D_800CC2D0[sp63].unk7A,  sp70, 0, &sp70, &sp6C, &sp68);
//         temp_t0_2 = &D_800CC2D0[sp63];
//         temp_f12 = temp_t0_2->x_position + sp70;
//
//         temp_f14 = temp_t0_2->z_position + sp6C;
//         arg0->x_position = (f32) (arg0->x_position + ((temp_f12 - arg0->x_position) * phi_f18));
//         arg0->z_position = (f32) (arg0->z_position + ((temp_f14 - arg0->z_position) * phi_f18));
//         temp_v0_11 = temp_a3 + (phi_t2 * 0x18) + (phi_t1_5 * 4);
//         func_1505E650(arg0, temp_v0_11[0xA],  temp_v0_11[0xC] / 100.0f, sp4C, 0.0f, 0.0f, 0);
//         if (sp54 != 0) {
//             arg0->unk65 = (s8) (sp63 + 1);
//             arg0->unk101 = (u8) (arg0->unk101 | 4);
//         } else {
//             arg0->unk65 = (u8)0;
//         }
//     }
// }

s32 func_1505693C(struct127 *arg0, s32 arg1) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;

    u16 *temp_v0 = (u16*)D_800D2104[(u16)arg0->unk13F];

    if (temp_v0[3] == 0) {
        return 1;
    }

    temp_f0 = temp_v0[3] * 8;
    temp_f0 = temp_f0 * temp_f0;
    temp_f2 = (s16)temp_v0[0] - D_800CC2D0[arg1].x_position;
    temp_f12 = (s16)temp_v0[2] - D_800CC2D0[arg1].z_position;

    if ((temp_f2 * temp_f2) + (temp_f12 * temp_f12) < temp_f0) {
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_83300/func_15056A00.s")
// NON-MATCHING (best 2910): logic correct but IDO swaps the tbl/idx register roles (target
// tbl->v1, idx->v0; ours reversed) and that cascades through most instructions. idx is u8
// (masked with andi 0xFF); D_80099A3C treated as a byte table stride 10 (fields at 0,2,7).
// void func_15056A00(struct127 *arg0, u8 arg1, u8 arg2) {
//     u8 *dp = (u8 *)D_80099A3C; u8 *tbl = dp + arg2 * 10; u8 idx = 0; u8 *entry;
//     if (tbl[7] < arg1) idx = 5; else if (tbl[2] < arg1) idx = 2;
//     if (((arg0->unk78 - arg0->unk76) & 0x8000) != 0) idx += 3; else idx += 4;
//     entry = dp + arg2 * 10 + idx;
//     if (*entry == 0xFF) return;
//     arg0->unk218 = (struct216 *)((u8 *)arg0->unk218 - 5);
//     arg0->unk21C = 0x4E20; arg0->unk223 = 0xD; arg0->unk44 = 0.0f;
//     arg0->unkF4 &= ~0xE; arg0->unkF4 |= 4;
//     arg0->unk78 = arg0->unk76; arg0->unk7A = arg0->unk76;
//     arg0->unk138 = 0; arg0->unk244 = *entry;
// }
#pragma GLOBAL_ASM("asm/nonmatchings/game_83300/func_15056B08.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_83300/func_1505841C.s")
// NON-MATCHING (best 30, permuter could not crack; re-confirmed NO ZERO 2026-07-21): only 3 FP
// instructions differ — for `temp_f0 = temp_f1 / (temp_f0 * 10.0f)` the target reuses f0 for the
// `*10` intermediate then puts the divide in f16 (mul.s f0,f0,f10 / div.s f16,f2,f0 /
// add.s f0,f16,f18), while IDO gives us mul.s f16 / div.s f0 / add.s f0,f0. No source form or
// permuter run flipped it.
// void func_1505841C(struct127 *arg0, f32 arg1) {
//     struct197 *temp_v0_2; f32 temp_f0, temp_f1; s32 idx;
//     temp_f0 = (((arg0->unk246 & 0x1F) << 8) + arg0->unk249) * D_80099468;
//     if ((arg0->unk246 & 0x80) == 0) {
//         if ((arg0->xz_velocity <= 1.0f) || (((arg0->unk22C & 0x10) != 0) && (arg0->unk28 == 0.0f))) {
//             temp_f0 = arg1;
//         } else {
//             temp_f1 = (arg0->xz_velocity * (0.5f / arg0->xz_scale));
//             temp_f0 = temp_f1 / (temp_f0 * 10.0f);
//             temp_f0 += D_8009946C;
//             if ((arg0->unk246 & 0x20) == 0) temp_f0 += D_80099470;
//         }
//     }
//     if (arg0->unk223 == 0xD) temp_f0 = (arg0->unk250 & 0x7F) * D_80099474;
//     if (arg0->unk246 == 0xFF) temp_f0 = 0.0f;
//     func_1505E650(arg0, arg0->unk244, temp_f0, arg0->unk1D0, 0.0f, 0.0f, 0);
//     if (arg0->unk246 == 0xFF) {
//         idx = D_800419A0 << 4;
//         temp_f0 = D_800418B0[idx];
//         if (temp_f0 >= 0.0f) {
//             temp_v0_2 = arg0->unk2D0;
//             temp_v0_2->unk8 = (f32) ((temp_v0_2->unk18 * (32768.0f - temp_f0)) / 32768.0f);
//         }
//     }
// }

#pragma GLOBAL_ASM("asm/nonmatchings/game_83300/func_150585F0.s")
// NON-MATCHING: 80% there
// void func_150585F0(struct127 *arg0) {
//     f32 temp_f0;
//     u16 phi_a2;
//
//     func_1505A3A8(arg0->unk109 * D_80099478, arg0, 1.0f, arg0->unk109 * D_80099478, 0);
//     if (arg0->unk1CC < D_8009947C) {
//         arg0->unk1CC = arg0->y_position;
//     }
//     if ((arg0->in_water != 0) && ((s32) arg0->in_water < 0xA)) {
//         arg0->gravity = 0.0f;
//         if (arg0->y_velocity < 60.0f) {
//             arg0->y_velocity *= D_80099480;
//         }
//         if (((arg0->unk118 - 60.0f) + 40.0f) < arg0->y_position) {
//             arg0->unk81 = (u8)0;
//             arg0->unk83 = (u8)0;
//             arg0->in_water = (u8)0U;
//             arg0->unkB8 = 0.0f;
//             arg0->gravity = 4.0f;
//         }
//     }
//     if ((D_800BE616 == 0) || (arg0->interaction_state != 1)) {
//         arg0->unk21C = (u16)0;
//     }
//     if (arg0->stunned != 0xFF) {
//         if (arg0->stunned != 0xFE) {
//             if ((arg0->health != 0) || (1 != arg0->interaction_state)) {
//                 arg0->stunned -= 1;
//             }
//         }
//         arg0->unk10C -= D_800CC264;
//         if ((arg0->unk28 < D_80099484) && ((arg0->unkF4 & 0x100) != 0)) {
//             arg0->unk10C = (u16)0;
//         }
//         if ((s32) arg0->unk10C <= 0) {
//             if (arg0->unk31C != 0) {
//                 arg0->unk31C->matrix_physics = (u8)0;
//             }
//             arg0->unk10C = (u16)0;
//             func_1505E874(0.0f, D_800C3E78);
//         }
//         if (arg0->stunned == 0) {
//             arg0->xz_velocity = 0.0f;
//             arg0->unk81 = (u8)0;
//             arg0->unk76 = arg0->unk78 = arg0->unk7A;
//             if (arg0->in_water != 0) {
//                 arg0->y_velocity = 0.0f;
//                 if (arg0->interaction_state == 1) {
//                     func_1506B078();
//                 }
//             } else if (arg0->interaction_state == 1) {
//                 arg0->unkF8 &= 0xFFFF7FFF;
//                 arg0->gravity = 4.0f;
//             }
//             if (arg0->unk238 != 0) {
//                 arg0->unk23A = arg0->unk238;
//             }
//         } else {
//             if ((arg0->unk10B & 2) == 0) {
//                 phi_a2 = arg0->unk76;
//                 if ((arg0->unk10B & 4) != 0) {
//                     phi_a2 ^= 0x8000;
//                 }
//                 arg0->unk80 = (u8)0xA;
//                 func_150599C8(arg0, 12, phi_a2);
//             }
//         }
//     }
// }

#pragma GLOBAL_ASM("asm/nonmatchings/game_83300/func_15058898.s")

void func_15058EA4(struct127 *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6) {
    if (arg1 < arg0->y_position) {
        arg0->gravity = arg2;
    } else if (arg0->y_position < arg3) {
        arg0->gravity = arg4;
    }
    if (arg5 < arg0->y_velocity) {
        arg0->y_velocity = arg5;
    } else if (arg0->y_velocity < arg6) {
        arg0->y_velocity = arg6;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_83300/func_15058F24.s")
// NON-MATCHING (best ~400): structural blocker — arg2 is unused in the target so it is NOT
// homed, but the live caller func_15059140 passes 3 args (sets a2=1.0f), which forces a
// 3-param prototype here; with 3 params IDO homes the unused a2 (sw a2,0x18(sp)) that the
// target lacks. Original likely had func_15058F24 in a separate TU as a 2-param def.
// void func_15058F24(struct127 *arg0, f32 arg1, f32 arg2) {
//     f32 temp_f12, temp_f14, tmp, temp_f16;
//     temp_f16 = 0.5f - arg1;
//     if (arg1 >= 0.5f) arg1 -= 0.5f;
//     temp_f14 = arg0->unk118 + 9.0f;
//     if ((arg0->y_position < temp_f14) || ((arg0->in_water < 0x64) == 0)) {
//         if (arg0->in_water == 0) {
//             arg0->y_position = temp_f14;
//             arg0->in_water = (u8)0x64U;
//             arg0->gravity = temp_f16 * -6.0f;
//             arg0->y_velocity *= arg1;
//         } else {
//             if ((temp_f14 + 100.0f) < arg0->y_position) arg0->in_water = (u8)0U;
//             if (temp_f16 < 0.0f) { arg0->gravity = temp_f16 * -6.0f; }
//             else {
//                 temp_f12 = arg0->y_position - ((temp_f14 + 10.0f) - (120.0f * arg1));
//                 if ((fabsf(temp_f12) < 2.0f) && (fabsf(arg0->y_velocity) < 2.0f)) {
//                     tmp = temp_f12 * D_800994A4;
//                     arg0->gravity = 1.0f; arg0->y_velocity = 0.0f; arg0->y_position -= tmp;
//                 } else if (temp_f12 > 0.0f) {
//                     if (arg0->y_velocity > 0.0f) { arg0->gravity = temp_f16 * 6.0f; arg0->y_velocity *= 0.5f; }
//                 } else {
//                     temp_f12 = temp_f16 * 80.0f;
//                     if (arg0->y_velocity > temp_f12) arg0->y_velocity = temp_f12;
//                     arg0->gravity = temp_f16 * -6.0f;
//                 }
//             }
//         }
//         temp_f12 = -100.0f * arg1;
//         if (arg0->y_velocity < temp_f12) arg0->y_velocity = temp_f12;
//     }
// }

void func_15059140(struct127 *arg0) {
    f32 sp2C;

    sp2C = 0.5f;
    D_800CC268 = 0;
    if ((arg0->unk13D == 0) || ((s32) arg0->unk21C < 0x10)) {
        if (arg0->unk223 != 8) {
            func_15059C84(arg0);
            func_1505A770(arg0);
        }
    }
    func_1505D6F0(arg0, D_800C3E78);
    func_15055E50(arg0, arg0->unk1E4);
    if (arg0->id == 8) {
        func_15056150(arg0);
    }
    if (arg0->unk13D < 0x64) {
        func_15058898(arg0, arg0->old_y_position);
    }
    if (arg0->unkF4 & 0x40000) {
        if (((arg0->unkF4 & 0x12000) != 0) || (D_800CC268 != 0)) {
            arg0->unk21C = 0U;
        }
    }
    if (arg0->unkB0 != 0) {
        func_15058F24(arg0, arg0->unkB0 * D_800994A8, 1.0f);
    }
    if (arg0->unkF8 & 0x20000) {
        func_15056258(arg0);
    }
    if (arg0->in_water != 0) {
        func_15059444(arg0);
    }
    if (arg0->id == 0xA) {
        arg0->unk180 = D_800994AC;
    }
    if ((arg0->unkF8 & 0x180000) != 0) {
        func_150511E8(arg0);
    }
    func_1505B5F8(arg0, arg0->unk180);
    if (((arg0->unkF4 & 0x1000) != 0) && (arg0->unk28 < D_800994B0)) {
        func_15056B08(arg0);
    }
    if (arg0->unkF8 & 0x80000) {
        sp2C = D_800994B4;
    }
    func_1505A250(0, 0, sp2C, &arg0->unk164, &arg0->unk168);
    if (arg0->unkD0 != 0) {
        func_1505C7D8(arg0, D_800C3E78);
    }
    if (arg0->unk13D == 0) {
        if (D_800BE9A0 >= arg0->unk10F) {
            arg0->unk10F = 0U;
        } else {
            arg0->unk10F -= D_800BE9A0;
        }
    }
    if (arg0->unk107 != 0) {
        arg0->unk107 -= 1;
    }
    if (arg0->immune != 0xFF) {
        if (D_800BE9A0 >= arg0->immune) {
            arg0->immune = 0U;
        } else {
            arg0->immune -= D_800BE9A0;
        }
    }
}

void func_150593C4(struct127 *arg0, u16 arg1, f32 arg2, f32 arg3) {
    f32 sp2C;
    f32 sp28;
    f32 sp24;

    func_1505A184(arg1, arg2, 0, &sp2C, &sp28, &sp24);
    arg0->unk16C += (sp2C - arg0->unk16C) * arg3;
    arg0->unk170 += (sp28 - arg0->unk170) * arg3;
}

void func_15059444(struct127 *arg0) {
    s32 sp1C;
    s32 phi_v0;
    s32 tmp;

    sp1C = -1;

    switch (D_800BE9F0) {
        case 4:
            func_150593C4(arg0, 0x4000, 50.0f, 0.05999999865889549f);
            break;
        case 6:
            sp1C = func_15083E0C(28);
            break;
        case 41:
            if (func_150A29C8(D_800C3E78, 0x4028) == 0) {
                phi_v0 = 12;
            } else if (func_150A29C8(D_800C3E78, 0x400E) == 0) {
                phi_v0 = 10;
            } else if (func_150A29C8(D_800C3E78, 0x400D) == 0) {
                phi_v0 = 9;
            } else {
                phi_v0 = 6;
            }
            sp1C = func_15083E0C(phi_v0);
            // FIXME: fakematch to force regalloc
            dummy_label_858530:;
            break;
        case 43:
            sp1C = func_15083E0C(18);
            break;
        case 65:
            if (func_150A29C8(D_800C3E78, 0x401F) == 0) {
                phi_v0 = 27;
            } else {
                phi_v0 = 26;
            }
            sp1C = func_15083E0C(phi_v0);
            break;
    }

    if (sp1C != -1) {
        func_150611E8(arg0, sp1C);
    }
}

void func_1505959C(struct127 *arg0, s32 arg1) {
    struct252 *temp_v0;
    s32 *temp_v1;
    s32 phi_v1;

    arg0->unkF8 &= 0xFF7FFFFF;
    arg0->unk13D = arg1 + 100;
    arg0->unk21C = 0;
    arg0->gravity = 4.0f;
    arg0->unk25C &= ~8;

    D_800CC2D0[arg1].unk83 = 0xFF;
    D_800CC2D0[arg1].disable_run = 0xFF;
    phi_v1 = 0;
    if (arg0->id == 0x57) {
        phi_v1 = 1;
    }
    if (D_800CC2D0[arg1].id == 0x9B) {
        phi_v1 = 2;
    }
    if (arg0->id == 0x5E) {
        phi_v1 = 3;
    }
    if (arg0->id == 0x3C) {
        phi_v1 = 4;
        D_800CC2D0[arg1].unk13C = (u8)0;
        D_800CC2D0[arg1].unk76 = func_1505A630(arg0->x_position - D_800CC2D0[arg1].x_position, D_800CC2D0[arg1].z_position - arg0->z_position, 0);
    }
    if (arg0->id == 0x89) {
        phi_v1 = 5;
    }
    func_1505E650(&D_800CC2D0[arg1], D_800860C0[phi_v1], D_800860CC[phi_v1], 0.0f, 0.0f, 0.0f, 0);
    arg0->stunned = 0xFE;
    arg0->unk105 = 0;
    arg0->unk106 = func_1505E7CC(D_800860E4[phi_v1], arg0);
    arg0->unk84.uh = 0xFFFF;
    func_1505E874(D_800C3E78, arg0);
    temp_v1 = (s32*)D_800D1588[arg0->id];
    if (temp_v1 != 0) {
        temp_v0 = (struct252 *)*(temp_v1 - 2);
        if ((temp_v0 != 0) && ((temp_v0[arg0->unk106].unk15 & 2) != 0)) {
            arg0->unk7A = D_800CC2D0[arg1].unk7A;
        }
        if ((temp_v0 == 0) || ((temp_v0[arg0->unk106].unk15 & 1) == 0)) {
            arg0->unk13E = (arg0->unk7A - D_800CC2D0[arg1].unk7A) >> 8;
        } else {
            arg0->unk13E = 0;
        }
    } else {
        arg0->unk13E = (arg0->unk7A - D_800CC2D0[arg1].unk7A) >> 8;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_83300/func_150597FC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_83300/func_150599C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_83300/func_15059B54.s")
// NON-MATCHING: needs branch-likely at the unk1EA guard + a (s16) narrowing phi at the merge.
// u8 func_15059B54(struct127 *arg0, u16 arg1) {
//     s16 temp_t8 = arg0->unk78 - arg0->unk76;
//     s16 phi_a2 = temp_t8;
//     s16 temp_t8_2, temp_t2; s32 temp_lo;
//     if (phi_a2 < 0) phi_a2 = phi_a2 ^ 0xFFFF;
//     if (arg0->unk1EA != 0) {
//         temp_lo = (s32) (arg0->unk1EA * D_800CC264) / 0x64;
//         temp_t8_2 = arg0->unk1EC + temp_lo;
//         temp_t2 = arg0->unk1EC - temp_lo;
//         if (temp_t8_2 < temp_t8) temp_t8 = temp_t8_2;
//         if (temp_t8 < temp_t2) temp_t8 = temp_t2;
//     }
//     if (temp_t8 < 0) temp_t8 ^= 0xFFFF;
//     if (temp_t8 < arg1) arg1 = temp_t8;
//     if ((arg0->unkF4 & 1) == 0) {
//         if (temp_t8 < 0) { arg0->unk76 -= arg1; arg0->unk1EC = -arg1; }
//         else { arg0->unk76 += arg1; arg0->unk1EC = arg1; }
//     }
//     return phi_a2 >> 8;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/game_83300/func_15059C84.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_83300/func_1505A184.s")
// NON-MATCHING (best 2738): PERMUTER CANDIDATE. Algorithmically exact; IDO refuses to keep
// half=(arg1*0.5) in callee-saved f20 across the 4 sin/cos calls (target does: mtc1 a1,f20;
// mul f20,f20,0.5) and instead homes arg1 and recomputes half late, cascading the frame from
// -0x30 to -0x40. sin=func_150AD780, cos=func_150AD78C.
// void func_1505A184(u16 arg0, f32 arg1, f32 arg2, f32 *arg3, f32 *arg4, f32 *arg5) {
//     f32 half = arg1 * 0.5f; f32 a2d = arg2 * D_800994B8; f32 cos1, sin1, ang, sin2, cos2;
//     cos1 = func_150AD78C(a2d);   *arg5 = cos1 * -half;
//     sin1 = func_150AD780(a2d);   half = sin1 * half;
//     ang = (f32)arg0 * D_800994BC;
//     sin2 = func_150AD780(ang);   cos2 = func_150AD78C(ang);
//     *arg3 = sin2 * half;         *arg4 = -cos2 * half;
// }
void func_1505A250(f32 arg0, f32 arg1, f32 arg2, f32 *arg3, f32 *arg4) {
    f32 dx = arg0 - *arg3, dy = arg1 - *arg4, mag, sx, sy;
    if (dx == 0.0f) { if (dy == 0.0f) return; }
    mag = sqrtf((dx * dx) + (dy * dy));
    arg2 *= D_800D1550[0];
    sx = fabsf((dx / mag) * arg2);
    sy = fabsf((dy / mag) * arg2);
    if (0.0f <= dx) { *arg3 = *arg3 + sx; if (arg0 < *arg3) *arg3 = arg0; }
    else            { *arg3 = *arg3 - sx; if (*arg3 < arg0) *arg3 = arg0; }
    if (0.0f <= dy) { *arg4 = *arg4 + sy; if (arg1 < *arg4) *arg4 = arg1; }
    else            { *arg4 = *arg4 - sy; if (*arg4 < arg1) *arg4 = arg1; }
}


#pragma GLOBAL_ASM("asm/nonmatchings/game_83300/func_1505A3A8.s")

f32 func_1505A5CC(struct49 *arg0) {
    f32 x, y;
    f32 ret;

    // regalloc nonsense
    ret = arg0->unk2;
    x = ret;
    y = arg0->unk3;

    x = sqrtf(x*x + y*y) * D_800994D4;
    ret = x;

    if (ret > 35.0f) {
        ret = 35.0f;
    }

    return ret;
}

u16 func_1505A630(f32 arg0, f32 arg1, s32 arg2) {
    return ((u16) (u32) (func_150484A0(-arg0, arg1) * D_800994D8)) + 16384;
}

f32 func_1505A6F8(struct127 *arg0, struct127 *arg1) {
    f32 x, z;

    x = arg0->x_position - arg1->x_position;
    x *= x;
    z = arg0->z_position - arg1->z_position;
    z *= z;
    return sqrtf(x + z);
}

// distance between two objects?
f32 func_1505A72C(struct127 *arg0, struct127 *arg1) {
    f32 x, y, z;

    x = arg0->x_position - arg1->x_position;
    x *= x;
    z = arg0->z_position - arg1->z_position;
    z *= z;
    y = arg0->y_position - arg1->y_position;
    y *= y;
    return sqrtf(x + z + y);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_83300/func_1505A770.s")
// a big one, but could be ok
#pragma GLOBAL_ASM("asm/nonmatchings/game_83300/func_1505A9AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_83300/func_1505B5F8.s")
// NON-MATCHING (best 3074): reconstruction is logically plausible but diverges broadly from
// the target (structure/regalloc). Rewrite/permuter candidate.

#pragma GLOBAL_ASM("asm/nonmatchings/game_83300/func_1505B9C4.s")

s16 func_1505C140(struct127 *arg0, struct127 *arg1) {
    s16 ret = func_1505A630(arg0->x_position - arg1->x_position, arg1->z_position - arg0->z_position, 0);
    ret -= arg1->unk7A;

    if (ret < 0) {
        ret = -ret;
    }
    return ret;
}

struct252 *func_1505C1A4(struct127 *arg0) {
    s32 *temp_v1;
    struct252 *ret;

    if ((arg0->id != 0xFF) && (D_800D1588[arg0->id] != 0)) {
        temp_v1 = (s32*)D_800D1588[arg0->id] - 3;
        ret = *temp_v1;
    } else {
        ret = &D_8009A9F8;
    }
    return ret;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_83300/func_1505C1E4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_83300/func_1505C7D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_83300/func_1505D024.s")
// NON-MATCHING (best 210): only diff is the func_1505C1E4 path reuses t0 (arg0, live from the
// temp_lo subtraction) as a1 via `move a1,t0`, while ours reloads `lw a1,0x40(sp)`; the sibling
// func_1505B9C4 path DOES reload — an asymmetric per-branch allocation the permuter couldn't force.
// s32 func_1505D024(struct127 *arg0, s32 arg1, u16 arg2, s32 arg3) {
//     s32 ret, temp_lo; struct252 *sp30 = &D_8009A9F8;
//     if (D_800C35EA == 1) return 0;
//     if ((arg1 & 0x20000) && (arg0->immune != 0)) return 0;
//     if ((arg1 & 0x40000) && (arg0->stunned != 0)) return 0;
//     if (((arg1 << 0xB) >= 0) && (arg0->health == 0)) return 0;
//     if (arg3 == -1) D_800D1340 = (u8)0; else D_800D1340 = arg3 + 1;
//     D_800D1292 = arg2; D_800D1296 = arg2;
//     if (arg1 & 0x10000) sp30 = func_1505C1A4(D_800D154C);
//     temp_lo = ((s32)arg0 - (s32)D_800CC2D0) / (s32)sizeof(struct127);
//     ret = 1 << temp_lo;
//     if (arg1 & 0x80000) ret = func_1505C1E4(&D_800D121C, arg0, sp30, arg1 & 0xFF, temp_lo + 1, 0, 7);
//     else func_1505B9C4(&D_800D121C, arg0, sp30, sp30, arg1 & 0xFF, temp_lo + 1, 7);
//     return ret;
// }

void func_1505D1C4(f32 arg0, f32 arg1, f32 arg2, s32 arg3, s32 arg4, u16 arg5, s32 arg6, s32 arg7) {
    s32 pad;
    s32 tmp;

    tmp = D_800C3E78;
    func_1505F188(&D_800D121C);
    D_800D1230 = arg0;
    D_800D1234 = arg1;
    D_800D1238 = arg2;
    D_800D1340 = arg4 + 1;
    D_800D1359 = arg6;
    D_800D1292 = arg5;
    D_800C3E78 = 25;
    D_800D1510 = arg7;
    D_800D1330 = 100.0f;
    D_800D12EC = (arg3 & 0xFFFF) + 1;
    D_800D1368 = 0.5f;
    D_800D136C = 0.5f;
    func_1505C7D8(&D_800D121C, 25);
    D_800C3E78 = tmp;
}

void func_1505D2B8(struct127 *arg0, u8 arg1) {
    struct253 *temp_v0;

    temp_v0 = &D_8009A6D8[arg1];
    arg0->y_velocity = temp_v0->unk18;
    arg0->xz_velocity = temp_v0->unk14;
    arg0->gravity = temp_v0->unk1C;
    arg0->stunned = 0xFE;
    arg0->unk105 = 0;
    arg0->unk106 = func_1505E7CC(arg0->unk10E & 0x7F, arg0);
    arg0->unk10E = 0xFF;
    func_1505E874(D_800C3E78, arg0);
}

f32 func_1505D34C(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 *arg4) {
    f32 sp24;
    s32 pad;
    f32 temp_f0;
    f32 temp_f12;

    if (arg3 != 1.0f) {
        arg1 = arg1 * arg3;
        arg2 = arg2 * arg3;
    }
    temp_f12 = (arg0 - 90.0f) * D_80099520; // 0.01745329238474369f;
    sp24 = func_150AD780(temp_f12);
    temp_f0 = func_150AD78C(temp_f12);
    *arg4 = (-arg1 * temp_f0) + (arg2 * sp24);
    return (arg1 * sp24) + arg2 * temp_f0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_83300/func_1505D408.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_83300/func_1505D5D0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_83300/func_1505D6F0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_83300/func_1505DADC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_83300/func_1505DDA8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_83300/func_1505DF10.s")
// NON-MATCHING (best 386): PERMUTER CANDIDATE. Ops are byte-identical; only FP register
// allocation differs (target loads y-pair->f10/f8, x-pair->f4/f6; ours reversed) plus one
// store/add schedule swap at the end (target defers the *arg3 swc1 to after the return add.s
// f0, we emit it before). IDO always schedules the *arg3 stored value first regardless of
// source order, so the dx^2/dy^2/dz^2 square order and reload order come out swapped.
// f32 func_1505DF10(struct127 *arg0, u8 arg1, u16 *arg2, f32 *arg3, f32 *arg4) {
//     struct127 *target; f32 dx, dy, dz, ret;
//     target = &D_800CC2D0[arg1];
//     dy = arg0->y_position - target->y_position;
//     dx = target->x_position - arg0->x_position;
//     dz = arg0->z_position - target->z_position;
//     *arg4 = dy;
//     *arg2 = func_1505A630(dx, dz, 0);
//     ret = (dx * dx) + (dy * dy) + (dz * dz);
//     *arg3 = (dx * dx) + (dz * dz);
//     return ret;
// }
extern u16 D_800C4ED0[];

void func_1505DFDC(struct127 *arg0) {
    s32 id;
    struct197x *v0 = (struct197x *)arg0->unk2D0;
    arg0->unk84.uh = 0xFFFF;
    if (v0 != NULL) {
        id = arg0->id;
        v0->unk28 = 0;
        bzero(&v0->unk40, 0x3A0);
        v0->unk40[1] = D_800C4ED0[id] + 1;
        v0->unk210[1] = D_800C4ED0[id] + 1;
        v0->unk30 = 0;
        v0->unk34 = 0;
    }
}
void func_1505E060(struct197x *arg0) {
    arg0->unk6 = arg0->unk4;
    arg0->unkC = arg0->unk8;
    arg0->unk14 = arg0->unk10;
    arg0->unk24 = arg0->unk20;
    arg0->unk1C = arg0->unk18;
    arg0->unk39 = arg0->unk38;
    arg0->unk2C = arg0->unk28;
    bcopy(&arg0->unk40, &arg0->unk210, 0x1D0);
}
#pragma GLOBAL_ASM("asm/nonmatchings/game_83300/func_1505E0C4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_83300/func_1505E650.s")
u32 func_1505E7CC(s32 arg0, struct127 *arg1) {
    s32 *temp_v1;
    struct252 *p;
    u32 count;
    s32 i;

    if (arg1->id == 0xFF) {
        return 0;
    }
    temp_v1 = (s32 *)D_800D1588[arg1->id];
    if (temp_v1 == 0) {
        return 0;
    }
    count = temp_v1[-1];
    if (count == 0) {
        return 0;
    }
    count = count / 0x18;
    p = (struct252 *)temp_v1[-2];
    if (p == 0) {
        return 0;
    }
    i = 0;
    while (i < count) {
        if (arg0 == *(u8 *)&p[i]) {
            return i;
        }
        i++;
    }
    return 0;
}
#pragma GLOBAL_ASM("asm/nonmatchings/game_83300/func_1505E874.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_83300/func_1505ED34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_83300/func_1505EEB0.s")
// NON-MATCHING (best 1520): PERMUTER CANDIDATE (confirmed 2026-07-21). Two blockers: (1) IDO
// CSEs &D_800CC2D0[0] so istate[0] loads via the tmp base reg (lw 0(v1)) instead of a direct
// %lo(D_800CC2D0) symbol load; (2) loop rotation is inverted — target keeps slti(i<25) at the
// loop top with the match-test (bnel a0,t7) as the back-edge, but IDO strength-reduces i<25 to
// a bottom bnel i,25 for every while/for/goto phrasing tried.
// struct127 *func_1505EEB0(s32 arg0, s32 *arg1) {
//     struct127 *tmp = D_800CC2D0; s32 i = 0;
//     if (arg0 != D_800CC2D0[0].interaction_state) {
//         i = 1;
//         while (i < 25) { tmp++; if (arg0 == tmp->interaction_state) break; i++; }
//     }
//     *arg1 = i; return tmp;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/game_83300/func_1505EEF4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_83300/func_1505EFD0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_83300/func_1505F0AC.s")
// NON-MATCHING (best 745, simple loop below): the unrolled loop body matches byte-perfectly, but
// the peeled iteration-0 prologue references named sub-symbols D_800CC2D4 (=&obj[0].id) and
// D_800CC5FC (=&obj[1]) with addend 0, which a clean `D_800CC2D0[i]` loop can't emit (it uses
// D_800CC2D0+0x4 / +0x32c). Manual peel with those symbols gets the relocs but breaks the
// prologue (CSE of the base ptr, late v1, bne vs bnel) -> worse (1205). Siblings func_1505EEF4
// (field unk13F) and func_1505EFD0 (field unk127) are the same pattern.
// struct127 *func_1505F0AC(s32 arg0) {
//     struct127 *obj; s32 i;
//     for (i = 0, obj = D_800CC2D0; i < 25; i++, obj++)
//         if ((obj->interaction_state != 0) && (obj->id == arg0)) return obj;
//     return NULL;
// }
#pragma GLOBAL_ASM("asm/nonmatchings/game_83300/func_1505F188.s")
// NON-MATCHING (best 835; permuter re-confirmed NO ZERO 2026-07-21, plateaued at 495):
// PERMUTER CANDIDATE. Body/store-order/integer-scheduling all match; the whole 0x1DC..0x19C tail
// aligns byte-perfect. Blocker is FP register allocation of the two float constants: target keeps
// 1.0f in f0 and D_8009962C held in f2 (swc1 f2,0x118/0x180 with no reload). Reading D_8009962C
// twice makes IDO CSE its ADDRESS (v0) and reload the value; naming it in a local holds the value
// but grabs f0 (bumping 1.0f to f2) -> f0/f2 swap cascade, and the D_8009962C load+stores also get
// scheduled late. No source form (incl. a separate `f32 one=1.0f` local) gets 1.0f->f0 AND
// D_8009962C->f2 held. Needs `extern f32 D_8009962C, D_80099630;` + a `void func_1505F188(...)`
// prototype (used earlier in func_1505D1C4) to make live. Full reconstruction (= score 835):
// void func_1505F188(struct127 *arg0) {
//     s32 *ptr; f32 temp;
//     for (ptr = (s32 *)arg0; ptr < (s32 *)((u8 *)arg0 + 0x32C); ptr++) *ptr = 0;
//     *((u8 *)arg0 + 0x2FD) = 2;  *(s16 *)((u8 *)arg0 + 0x38) = -0x2710;
//     arg0->xz_scale = 1.0f; arg0->y_scale = 1.0f;
//     temp = D_8009962C; arg0->unk118 = temp; arg0->unk180 = temp;
//     *((u8 *)arg0 + 0x1DC) = 0xFF; arg0->unk127 = 0xFF; arg0->unk84.uh = 0xFFFF;
//     arg0->unk13F = 0xFF; *(void **)((u8 *)arg0 + 0x2C4) = (u8 *)arg0 + 4;
//     *((u8 *)arg0 + 0x2C8) = 1; arg0->unk2C9 = 1; arg0->id = 0xFF; arg0->unk2CB = 0x32;
//     arg0->unk48 = 1.0f; arg0->gravity = D_80099630;
//     arg0->unk6E = (func_150ADA20() % 0x32U) + 0x32; func_150615DC(arg0);
//     *((u8 *)arg0 + 0x1DD) = 0xFF; *((u8 *)arg0 + 0x1DE) = 0xFF; *((u8 *)arg0 + 0x1DF) = 0xFF;
//     *(s16 *)((u8 *)arg0 + 0x18C) = 0; *(s16 *)((u8 *)arg0 + 0x18E) = 0;
//     *(s16 *)((u8 *)arg0 + 0x190) = 0; *(s16 *)((u8 *)arg0 + 0x192) = 0;
//     *(s16 *)((u8 *)arg0 + 0x194) = 0;
//     *(s16 *)((u8 *)arg0 + 0x196) = 0xA; *(s16 *)((u8 *)arg0 + 0x198) = 0xA;
//     *(s16 *)((u8 *)arg0 + 0x19A) = 0; *(s16 *)((u8 *)arg0 + 0x19C) = 0;
// }
#pragma GLOBAL_ASM("asm/nonmatchings/game_83300/func_1505F298.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_83300/func_1506045C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_83300/func_15060778.s")
void func_15060A30(s32 arg0, struct127 *arg1) {
    if (arg1->camera == NULL) {
        func_10010344(arg0, arg1, 0x6D60, 0x1F4, 0x9C4);
    } else {
        func_15060778(arg0, arg1, 0x5DC0, 0, 0x1F4, 0x9C4, 1);
    }
}

void func_15060A9C(s32 arg0, struct127 *arg1) {
    if (arg1->camera == NULL) {
        func_10010630(arg0, arg1, 0x5DC0, 0x1F4, 0x9C4);
    } else {
        func_15060778(arg0, arg1, 0x5DC0, 0, 0x1F4, 0x9C4, 0);
    }
}

void func_15060B04(s32 arg0, struct127 *arg1, s32 arg2) {
    if (arg1->camera == NULL) {
        func_10010630(arg0, arg1, arg2, 500, 2500);
    } else {
        func_15060778(arg0, arg1, arg2, 0, 500, 2500, 0);
    }
}

void func_15060B70(s32 arg0, void *arg1) {
    func_10010154(arg0, arg1, 0x6D60, 0x1F4, 0x9C4);
}

s32 func_15060BA4(struct127 *arg0, s32 arg1) {
    s32 health = arg0->health;
    if (health == 6) {
        return 0;
    }
    arg0->health = health + arg1;
    if ((u8)((health + arg1) & 0xFFFF) >= 7) {
        arg0->health = 6;
    }
    return 1;
}
#pragma GLOBAL_ASM("asm/nonmatchings/game_83300/func_15060BE0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_83300/func_15060D54.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_83300/func_15060F28.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_83300/func_150611E8.s")

// TODO: is this really struct127?
void func_150615DC(struct127 *arg0) {
    arg0->unk7 = 0xFF;
    arg0->unk8 = 0xFF;
    arg0->unk9 = 0;
    arg0->unkA = 0;
    arg0->unkE.ub[1] = 0;
    arg0->unkB = arg0->unkC = arg0->unkD = arg0->unkE.ub[0] = 0xFF;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_83300/func_1506160C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_83300/func_150617BC.s")
// ???
s32 func_1506196C(u8 *arg0, s32 arg1) {
    s32 prod = arg0[7] * (arg0 + arg1)[0xB];
    if (prod == 0xFE01) {
        prod = 0xFF;
    } else {
        prod = prod >> 8;
    }
    return prod;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_83300/func_150619A8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_83300/func_15061B4C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_83300/func_150623F4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_83300/func_150626EC.s")
// NON-MATCHING (best 1662; permuter re-confirmed NO ZERO 2026-07-21, plateaued ~380):
// PERMUTER CANDIDATE / JUSTREG. Body is byte-identical; the target saves the two params to s1/s2
// first (param order) then loop temps to s3-s6, while IDO here grabs s1 for the D_800CC2D0 base
// (shared with the iterator init via `move`). Target also has a dead `move v0,zero` in the
// preheader (dead zero-init var) that no source form reproduced.
// void func_150626EC(struct127 *arg0, s32 arg1) {
//     struct127 *obj;
//     for (obj = D_800CC2D0; obj != (struct127 *)&D_800D121C; obj++)
//         if (obj->interaction_state != 0 && (arg0 - D_800CC2D0) + 1 == obj->unk65 &&
//             obj->unk127 == 0xFF)
//             func_15060F28(obj, arg1);
// }

void func_150627D4(struct127 *arg0) {
    arg0->unk2FB = 0;
    func_1503B840(arg0);
    func_15039CC8(arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_83300/func_15062800.s")

void func_15062AC4(struct127 *arg0) {
    if (arg0->unkE6 && arg0->unkE4) {
        f32 tmp = arg0->unkE4;
        arg0->unkEC = tmp / arg0->unkE6;
        arg0->unkF0 = arg0->unkE6 / tmp;
    } else {
        arg0->unkF0 = arg0->unkEC = 0.0f;
    }
}

void func_15062B1C(struct127 *arg0, f32 arg1) {
    arg0->unkE4 = arg0->xz_scale * arg1;
    func_15062AC4(arg0);
}

void func_15062B50(struct127 *arg0, f32 arg1) {
    arg0->unkE6 = arg0->y_scale * arg1;
    func_15062AC4(arg0);
}

void func_15062B84(struct127 *arg0) {
    if (arg0->unkD4 && arg0->unkD2) {
        f32 tmp = arg0->unkD2;
        arg0->unkDC = tmp / arg0->unkD4;
        arg0->unkE0 = arg0->unkD4 / tmp;
    } else {
        arg0->unkDC = 0.0f;
        arg0->unkE0 = 0.0f;
    }
}

void func_15062BDC(struct127 *arg0, f32 arg1, f32 arg2) {
    struct124 *temp_v0;

    arg0->xz_scale = arg1;
    arg0->y_scale = arg2;
    if (arg0->id != 255) {
        temp_v0 = D_800D1C90[arg0->id];
        arg0->unkD2 = (s32) (temp_v0->unk20 * arg0->xz_scale);
        arg0->unkD4 = (s32) (temp_v0->unk22 * arg0->y_scale);
        arg0->unkD6 = (s32) (temp_v0->unk24 * arg0->y_scale);
        arg0->unkE4 = (s32) (temp_v0->unk1A * arg0->xz_scale);
        arg0->unkE6 = (s32) (temp_v0->unk1C * arg0->y_scale);
        arg0->unkE8 = (s32) (temp_v0->unk1E * arg0->y_scale);
        func_15062AC4(arg0);
        func_15062B84(arg0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_83300/func_15062D10.s")
// NON-MATCHING (best 1726): logic correct but IDO regalloc differs — target homes params a1/a2/a3
// to their -g3 home slots and RELOADS arg1/arg2 from the stack each use, while our reconstruction
// keeps them in registers; the resulting spill/schedule cascade shifts the whole body. Permuter
// candidate. Reconstruction (SpriteBox = {s32 unk0; s32 unk4;}, D_800C4488 = SpriteBox**[]):
// void func_15062D10(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
//     SpriteBox *e; s32 packed, hi, lo, f0, outX, outY, t;
//     if ((&D_800D19A0)[arg0] == 0) return;
//     e = &D_800C4488[arg0][arg4][arg1];
//     packed = e->unk4; hi = ((packed >> 12) & 0xFFF) + 2; lo = (packed & 0xFFF) + 2; f0 = e->unk0;
//     if (arg5 != 0) outX = arg2 & 0xFFF;
//     else { t = ((f0 >> 12) & 0xFFF) + arg2; outX = t;
//            if (hi < t) outX = t - hi; else if (t < 0) outX = t + hi; }
//     if (arg5 != 0) outY = arg3 & 0xFFF;
//     else { t = (f0 & 0xFFF) + arg3; outY = t;
//            if (lo < t) outY = t - lo; else if (t < 0) outY = t + lo; }
//     e->unk0 = ((f0 & 0xFF000000) | (outY & 0xFFF)) | ((outX & 0xFFF) << 12);
// }
#pragma GLOBAL_ASM("asm/nonmatchings/game_83300/func_15062E24.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_83300/func_15062FC0.s")
void func_15063168(struct127 *arg0) {
    s32 i;

    for (i = 0; i < D_8008FD8C; i++) {
        if ((i != (arg0 - D_800CC2D0)) &&
            (((1 << i) & D_800CC268) != 0) &&
            (D_800CC2D0[i].unk31C != NULL) &&
            (((u8 *)D_800CC2D0[i].unk31C)[0x1AC] == 0)) {
            func_15194FF4(arg0, &D_800CC2D0[i], 1);
        }
    }
}
#pragma GLOBAL_ASM("asm/nonmatchings/game_83300/func_15063254.s")
// NON-MATCHING (best ~2020): logic is correct (state save / func_15060F28 / func_15082A44 /
// restore) but the frame ends up -0x50 vs target -0x58 because IDO homes+copies arg1 (a1)
// instead of consuming it directly before `move a1,zero`; the resulting stack-offset cascade
// dominates the score. Float-spill scheduling for x/y (stored last) also differs.
// void func_15082A44(struct129 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
// void func_15063254(struct127 *arg0, s32 arg1, s32 arg2, f32 arg3) {
//     struct129 *v = arg0->unk144; s32 idx = arg0->unk13F; struct108 *cam;
//     f32 x, y, z, b8, u40, uc4; s32 angle;
//     v->unk4 = arg1; v->unk3 = arg2; v->unk20 = arg3; v->unk24 = arg3; v->unk2 = 0;
//     cam = arg0->camera;
//     z = arg0->z_position; x = arg0->x_position; y = arg0->y_position;
//     b8 = arg0->unkB8; u40 = arg0->unk40; uc4 = arg0->unkC4; angle = arg0->unk76;
//     func_15060F28(arg0, 0);
//     func_15082A44(v, idx, 0, 0, ((s32)arg0 - (s32)D_800CC2D0) / (s32)sizeof(struct127) + 1);
//     arg0->x_position = x; arg0->y_position = y; arg0->camera = cam; arg0->z_position = z;
//     arg0->unkB8 = b8; arg0->unk40 = u40; arg0->unk76 = angle; arg0->unk7A = angle;
//     arg0->old_x_position = x; arg0->old_y_position = y; arg0->unk1CC = arg0->y_position;
//     arg0->old_z_position = arg0->z_position; arg0->unkC4 = uc4;
//     cam->unk3D4 = (struct127 *)arg0->unk31C;
// }
