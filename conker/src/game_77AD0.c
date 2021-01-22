#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_15052F9C(struct127 *arg0, f32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9);
void func_1505327C(struct127 *arg0, f32 arg1, f32 arg2, s32 arg3, s32 arg4);

#pragma GLOBAL_ASM("asm/nonmatchings/game_77AD0/func_1504A620.s")
// NON-MATCHING: work-in-progress...
// f32 func_1504A620(f32 arg0) {
//     f32 temp_f14;
//     f32 temp_f2;
//     f32 phi_f2;
//     f32 phi_f0;
//     s32 phi_v0;
//     f32 tmp0;
//
//     if (arg0 < 0.0f) {
//         return 0.0f;
//     }
//     if (arg0 == 0.0f) {
//         return 0.0f;
//     }
//
//     phi_f2 = 0.0f;
//
//     while (arg0 >= 2.0f ) {
//         arg0 = arg0 * 0.5f;
//         phi_f2 += D_800990B0;
//     }
//
//     tmp0 = D_800990B4;
//     while (arg0 < 1.0f) {
//         arg0 = arg0 * 2.0f;
//         phi_f2 -= tmp0;
//     }
//
//     temp_f14 = (phi_f2 - 1.0f) / (phi_f2 + 1.0f);
//     phi_f0 = 2.0f * temp_f14;
//     phi_v0 = 1;
//
//     do {
//         temp_f2 = phi_f2 + (phi_f0 / (f32) phi_v0);
//         phi_f2 = temp_f2;
//         phi_f0 = phi_f0 * (temp_f14 * temp_f14);
//         phi_v0 = phi_v0 + 2;
//     }
//     while (temp_f2 != phi_f2);
//
//     return temp_f2;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/game_77AD0/func_1504A730.s")
// void func_1504A730(void) {
//     u8 sp5C[6];
//     f32 temp_f0;
//     f32 temp_f0_2;
//     f32 temp_f0_3;
//     s32 temp_t0;
//     s32 temp_v0;
//     s8 temp_s2;
//     s8 temp_v1;
//     u16 temp_a3;
//     u16 temp_t8;
//     u8 temp_v0_5;
//     u8 temp_v0_7;
//     u8 temp_v0_9;
//     void *temp_a0;
//     void *temp_a2;
//     struct126 *temp_v0_2;
//     struct126 *temp_v0_3;
//     struct108 *temp_v0_4;
//     void *temp_v0_6;
//     void *temp_v0_8;
//     void *temp_v1_2;
//     struct127 *phi_s0;
//     s32 phi_s1;
//     f32 phi_f20;
//     f32 phi_f0;
//     s32 phi_s3;
//     s8 phi_s2;
//     void *phi_a1;
//     s32 phi_t0;
//     s32 phi_v1;
//
//     D_800BE9EC = (u8)0;
//     D_800D1548 += 1; //(s32) (D_800D1548 + 1);
//     D_800CC250 += D_800BE9A0; //(s32) (D_800CC250 + D_800BE9A0);
//     D_800C3E78 = (u8)0;
//     D_800CC2BC = 0;
//     func_1508295C(D_800BE9F0, 0, 0);
//     D_800CC2B8 ^= 1; //(u8) (D_800CC2B8 ^ 1);
//
//     // phi_s1 = (u8)0;
//     for (phi_s1 = 0; phi_s1 < 25; phi_s1++) {
//         phi_s0 = &D_800CC2D0[phi_s1];
//         if (phi_s0 == 0) {
//             phi_s2 = phi_s1 + 1;
//         } else {
//             phi_s0->unk274 = (u8)0;
//             phi_s0->unk300 = (u8)0;
//             phi_s0->unkF4 = (s32) (phi_s0->unkF4 & 0xFFEE5FFF);
//             D_800C3E78 = phi_s1;
//             if (phi_s0->y_position <= (f32) phi_s0->unk38) {
//                 if (phi_s0->unk127 == 0xFF) {
//                     func_15060F28(phi_s0, 0);
//                     phi_s2 = phi_s1 + 1;
//                 } else if (D_800BE616 == 0) {
//                     func_1507D4F8(phi_s1);
//                     phi_s2 = phi_s1 + 1;
//                 } else {
// block_8:
//                     if (phi_s0->unk2FA == 0) {
//                         phi_s2 = phi_s1 + 1;
//                     } else {
//                         D_800D154C = phi_s0;
//                         temp_s2 = phi_s1 + 1;
//                         phi_s0->unk12 += 1; // (u16) (phi_s0->unk12 + 1);
//                         D_800D35DC = temp_s2;
//                         D_800CC2BA = (u16)0;
//                         phi_s3 = 0;
//                         if ((D_800BE616 == 0) || (temp_v0 = func_1504C8BC(phi_s0), phi_s3 = temp_v0, phi_s2 = temp_s2, (temp_v0 != 0))) {
//                             if ((s32) phi_s1 < (s32) D_8008FD8C) {
//                                 temp_v0_2 = phi_s0->unk31C;
//                                 temp_v0_2->unk195 = (s8) (temp_v0_2->unk195 - D_800BE9E4);
//                                 temp_v0_3 = phi_s0->unk31C;
//                                 if ((s32) temp_v0_3->unk195 < 0) {
//                                     temp_v0_3->unk195 = (u8)0;
//                                 }
//                                 phi_s0->unk31C->unk57 = (u8)0;
//                                 if ((s32) phi_s1 < 4) {
//                                     D_800CC284 = (s32) D_800BE728[phi_s1]; // * 4));
//                                 } else {
//                                     bzero(&sp5C, 6);
//                                     D_800CC284 = &sp5C;
//                                 }
//                             }
//                             temp_v0_4 = phi_s0->camera;
//                             if (temp_v0_4 != 0) {
//                                 temp_f0 = temp_v0_4->unk384;
//                                 if (D_800991A8 == temp_f0) {
//                                     D_800CC280 = (s32) (temp_v0_4->unk37C * D_800991AC);
//                                 } else {
//                                     D_800CC280 = (s32) (temp_f0 * D_800991B0);
//                                 }
//                             } else {
//                                 D_800CC280 = 0;
//                             }
//                             if (phi_s0->unk127 != 0xFF) {
//                                 func_150A11C4(phi_s0);
//                             } else if (phi_s0->unkF8 & 0x400000) {
//                                 func_150A278C(phi_s0);
//                             }
//                             phi_s0->unk2C = (f32) phi_s0->unk14;
//                             phi_s0->unk30 = (f32) phi_s0->y_position;
//                             phi_s0->unk34 = (f32) phi_s0->unk1C;
//                             D_800CC27C = (s8) (((u32) phi_s0->unk184 >> 0x1C) & 7);
//                             temp_f0_2 = D_800BE9A4;
//                             phi_f20 = 2.0f;
//                             if (D_800BE616 != 0) {
//                                 phi_f20 = 2.0f;
//                                 if ((D_8008FDBC & 0x100) != 0) {
//                                     phi_f20 = 5.0f;
//                                 }
//                             }
//                             phi_f0 = temp_f0_2;
//                             if (phi_f20 < temp_f0_2) {
//                                 phi_f0 = phi_f20;
//                             }
//                             D_800D1550[0] = (f32) (phi_s0->unk48 * phi_f0);
//                             D_800CC264 = (s16) (s32) (D_800D1550[1364] * 100.0f); // wtf?
//                             if ((s32) D_800CC27C >= 6) {
//                                 D_800CC27C = (u8)0;
//                             }
//                             temp_v0_5 = (D_800B0DF0)->unk49;
//                             if (temp_v0_5 != 0) {
//                                 D_80086004[temp_v0_5](phi_s0);
//                             }
//                             if ((phi_s0->unk25C & 0x200) == 0) {
//                                 // temp_v0_6 = D_80086014[phi_s0->unk0];
//                                 if (D_80086014[phi_s0->unk0] != 0) {
//                                     D_80086014[phi_s0->unk0](phi_s0);
//                                 }
//                             }
//                             if (phi_s0->unk0 != 0) {
//                                 func_1507E73C(phi_s0);
//                                 func_1504AF10(phi_s0, 0, 0);
//                                 if (((s32) phi_s1 < (s32) D_8008FD8C) && (D_800D18A8 == 0)) {
//                                     func_15085710(phi_s0->unk127, 5, phi_s0->health);
//                                 }
//                             }
//                             phi_s0->unk2FF = (u8)1;
//                             if (phi_s3 == 2) {
//                                 temp_t8 = D_800CC2BA;
//                                 D_800BE9E4 = (s32) temp_t8;
//                                 D_800BE9A4 = (f32) ((f32) temp_t8 * 0.5f);
//                                 temp_f0_3 = D_800BE9A4;
//                                 if (temp_f0_3 != 0.0f) {
//                                     D_800BE9A8 = (f32) (1.0f / temp_f0_3);
//                                 } else {
//                                     D_800BE9A8 = 0.0f;
//                                 }
//                             }
//                             if ((phi_s0->unk14 != phi_s0->unk2C) || (phi_s0->unk18 != phi_s0->unk30) || (phi_s0->unk1C != phi_s0->unk34)) {
//                                 phi_s0->unk300 = (u8)1;
//                             }
//                             temp_v0_7 = (D_800B0DF0)->unk4A;
//                             phi_s2 = temp_s2;
//                             if (temp_v0_7 != 0) {
//                                 D_8008600C[temp_v0_7](phi_s0);
//                                 phi_s2 = temp_s2;
//                             }
//                         }
//                     }
//                 }
//             } else {
//                 goto block_8;
//             }
//         }
//     }
// //     temp_v1 = D_8008FD8C;
// //     if ((s32) temp_v1 > 0) {
// //         phi_a1 = &D_800CC2D0;
// //         phi_t0 = 0;
// //         phi_v1 = (s32) temp_v1;
// // loop_56:
// //         if (phi_a1->unk0 != 0) {
// //             temp_a0 = phi_a1->unk31C;
// //             if (temp_a0 != 0) {
// //                 temp_a2 = &D_800CBDA0 + (phi_t0 * 2);
// //                 if (phi_a1->unk137 != 0) {
// //                     temp_a3 = *temp_a2;
// //                     if (temp_a3 != 0) {
// //                         temp_v0_8 = D_800DBEF4 + (temp_a3 * 0xA0);
// //                         temp_v0_8->unk-51 = (u8) (temp_v0_8->unk-51 | 0x84);
// //                         temp_v1_2 = D_800DBF94 + (*temp_a2 * 4);
// //                         temp_v1_2->unk-4 = (s32) (temp_v1_2->unk-4 | (1 << phi_t0));
// //                     }
// //                     phi_a1->unk31C->unk56 = (u8)5;
// // block_64:
// //                     phi_v1 = (s32) D_8008FD8C;
// //                 } else {
// //                     temp_v0_9 = temp_a0->unk56;
// //                     if (temp_v0_9 != 0) {
// //                         temp_a0->unk56 = (u8) (temp_v0_9 - 1);
// //                         goto block_64;
// //                     }
// //                 }
// //             }
// //         }
// //         temp_t0 = phi_t0 + 1;
// //         phi_a1 = phi_a1 + 0x32C;
// //         phi_t0 = temp_t0;
// //         if (temp_t0 < phi_v1) {
// //             goto loop_56;
// //         }
// //     }
//     func_15061B4C();
//     func_15080C64();
//     D_800D154C = &D_800CC2D0;
//     D_800C3E78 = (u8)0;
//     D_800D35DC = (u8)0;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/game_77AD0/func_1504ADD0.s")
// NON-MATCHING: whats up with sp48
// void func_1504ADD0(void) {
//     struct127 *tmp;
//     s32 i;
//     u8 *ptr;
//     u8 *sp48;
//
//     if (D_800C35EA != 1) {
//         for (i = 0; i < 25; i++) {
//             tmp = &D_800CC2D0[i];
//             if (tmp->unk0 != 0) {
//                 D_800C3E78 = i;
//                 D_800D154C = tmp;
//                 if (i < D_8008FD8C) {
//                     if (i < 4) {
//                         D_800CC284 = D_800BE728[i];
//                     } else {
//                         bzero(sp48, 6);
//                         D_800CC284 = sp48;
//                     }
//                 }
//                 if ((tmp->id == 0x28) || (tmp->id == 0x77)) {
//                     func_150ED578(tmp);
//                 }
//             }
//         }
//     }
// }

s32 func_1504AEF4(s32 arg0, s32 arg1) {
    if (arg0 == 0) {
        return 0;
    }
    return 0;
}

// bleurgh
#pragma GLOBAL_ASM("asm/nonmatchings/game_77AD0/func_1504AF10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_77AD0/func_1504B0FC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_77AD0/func_1504BA38.s")
// NON-MATCHING: starts to fall apart towards the end
// void func_1504BA38(struct127 *arg0) {
//     s8 temp_a1;
//     s8 temp_v0;
//     s8 *temp_v1;
//
//     if (arg0->unk28 > 10.0f) {
//         arg0->unkCE = 0;
//     } else {
//         temp_v1 = &D_80099140[(arg0->unk184 & 0x1f) * 3]; // length 3 items
//         temp_a1 = temp_v1[2];
//         if ((temp_a1 != 0) && (arg0->unkAA == 0)) {
//             arg0->unkAA = temp_a1;
//         }
//         temp_v0 = temp_v1[1];
//         if (temp_v0 == 0) {
//             arg0->unkCE = temp_v1[0];
//         } else {
//             arg0->unkCE = (s16) (s32) (temp_v0 * D_800991D4 * ((f32) temp_v1[0] - arg0->unk3C));
//         }
//     }
// }

void func_1504BAF0(struct127 *arg0) {
    s16 temp_t7;
    u8 temp_v0;
    struct127 *temp_v1;

    temp_t7 = arg0->unk13C - 100;
    if (temp_t7 >= 0) {
        temp_v1 = &D_800CC2D0[temp_t7];
        if (temp_v1->unk13D >= 100) {
            temp_v0 = temp_v1->id;
            if ((temp_v0 == 168) || (temp_v0 == 169)) {
                D_800D1580 = 3;
                func_1507490C();
            }
        }
    }
    func_1506EBC0();
}

void func_1504BB88(struct127 *arg0) {
    if ((arg0->unk25C & 0x10)) {
        arg0->unk83 = 0xFF;
        arg0->disable_run = 0xFF;
        if (arg0->interaction_state == 1) {
            func_1505E650(arg0, 0xD6, 1.149999976158142f, 3.0f, 0.0f, 0.0f, 0);
        }
        arg0->unk25C &= ~0x10;
    }

    if ((arg0->unk25C & 2)) {
        if (arg0->unk13C) {
            func_1504BAF0(arg0);
        }
        arg0->unk25C &= ~2;
    }
}

void func_1504BC38(struct127 *arg0) {

    if ((arg0->disable_run != 0) && (arg0->disable_run < 0xFA)) {
        if (arg0->disable_run <= D_800BE9A0) {
            arg0->disable_run = 0U;
        } else {
            arg0->disable_run -= D_800BE9A0;
        }
    }
    if (arg0->unk228) {
        if (arg0->unk228 <= D_800BE9A0) {
            arg0->unk228 = 0U;
        } else {
            arg0->unk228 -= D_800BE9A0;
        }
    }
    if (arg0->unkAE) {
        arg0->unkAE -= 1;
    }
    if (arg0->disable_jump != 0xFF) {
        if (arg0->disable_jump <= D_800BE9A0) {
            arg0->disable_jump = 0U;
        } else {
            arg0->disable_jump -= D_800BE9A0;
        }
    }
    if (arg0->immune != 0xFF) {
        if (arg0->immune <= D_800BE9A0) {
            arg0->immune = 0U;
        } else {
            arg0->immune -= D_800BE9A0;
        }
    }
    if (arg0->unk31C->chased > 0) {
        arg0->unk31C->chased -= D_800BE9A0;
    }
    if (arg0->unk31C->chasing > 0) {
        arg0->unk31C->chasing -= D_800BE9A0;
    }
    if (arg0->unk31C->unk44 > 0) {
        arg0->unk31C->unk44 -= D_800BE9A0;
    }
    if (arg0->unk107 != 0) {
        arg0->unk107 -= 1;
    }
    if (arg0->unk1D0 > 0) {
        arg0->unk1D0 -= D_800BE9A0;
    }
    if (arg0->unk31C->unk54 > 0) {
        arg0->unk31C->unk54 -= D_800BE9A0;
    }
    if (arg0->unk31C->unk55 != 0) {
        arg0->unk31C->unk55 -= 1;
    }

    arg0->unk31C->unk52 >>= 1;

    if (arg0->unk31C->unk19E != 0) {
        if (arg0->unk31C->unk19E > D_800BE9E4) {
            arg0->unk31C->unk19E -= D_800BE9E4;
        } else {
            arg0->unk31C->unk19E = 0U;
        }
    }
    if (arg0->unk31C->unk1A0 != 0) {
        if (arg0->unk31C->unk1A0 > D_800BE9E4) {
            arg0->unk31C->unk1A0 -= D_800BE9E4;
        } else {
            arg0->unk31C->unk1A0 = 0U;
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_77AD0/func_1504BE2C.s")

s32 func_1504C078(void) {
    if (D_800D154C->unk31C->unk58 != 1) {
        D_800D154C->unk31C->unk59 = 0;
        func_1507F640();
    }
    return 999;
}

s32 func_1504C0B8(void) {
    if (D_800BE9F0 == 27 || D_800BE9F0 == 30) {
        return 395;
    }
    return 27;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_77AD0/func_1504C0E8.s")

void func_1504C854(struct127 *arg0) {
    D_800CC288 = arg0->unk31C->unk8C;

    if (arg0->unk31C->unk8E > 0) {
        arg0->unk31C->unk8E -= D_800BE9A0;
    } else {
        arg0->unk31C->unk8A = 0;
    }
    if (arg0->unk31C->unk8F > 0) {
        arg0->unk31C->unk8F -= D_800BE9A0;
    } else {
        arg0->unk31C->unk8C = 0;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_77AD0/func_1504C8BC.s")

void func_1504C9E4(struct127 *arg0, s8 arg1, u8 arg2) {
    u8 phi_a2;
    s32 tmp0;
    s32 tmp1;

    tmp0 = (u8)(arg0->unk1D1 - arg1);

    if (tmp0) {
        phi_a2 = 3;
        if (arg2 == 16) {
            phi_a2 = 6;
        }

        tmp1 = tmp0;
        if (tmp0 >= 128) {
            arg0->unk1D1 += phi_a2;
        }
        else {
            arg0->unk1D1 -= phi_a2;
        }

        tmp0 = tmp1;
        tmp0 ^= arg0->unk1D1 - arg1;
        if ((u8)tmp0 & 0x80)
        {
            arg0->unk1D1 = arg1;
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_77AD0/func_1504CA60.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_77AD0/func_1504CB98.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_77AD0/func_150511E8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_77AD0/func_15051558.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_77AD0/func_1505210C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_77AD0/func_15052260.s")

void func_15052408(struct127 *arg0) {
    arg0->unkB2 = 0;
    arg0->unk31C->unk95 = 0;
    if (arg0->health != 0) { // if health not zero
        arg0->unk81 = 0;
        arg0->unk83 = 0;
        arg0->disable_run = 6;
    }
    arg0->in_water = 0;
    arg0->gravity = 4.0f;
    arg0->unkB8 = 0.0f;
    arg0->xz_velocity = 15.0f;
}

void func_15052458(s32 arg0) {
}

void func_15052464(struct127 *arg0) {
    if (arg0->health == 0) {
        func_15060F28(arg0, 1);
    }
}

void func_15052490(struct127 *arg0, u16 arg1, f32 arg2, f32 arg3) {
    arg3 *= D_800D1550[0];

    arg0->unk40 = (arg0->unk7A + 16384) * 0.005493164f;

    if (((arg1 - arg0->unk7A + 16384) & 0x8000) != 0) {
        arg0->unkB8 -= arg2 * arg3;
    } else {
        arg0->unkB8 += arg2 * arg3;
    }
}

void func_1505250C(struct127 *arg0, s32 arg1) {
    s16 temp_v0 = arg0->unkCE;
    s16 temp_v1 = arg0->unkCC;

    if (temp_v0 != temp_v1) {
        if (temp_v1 < temp_v0) {
            arg0->unkCC = temp_v1 + ((temp_v0 - temp_v1) / 0xC) + 1;
            if (temp_v0 < arg0->unkCC) {
                arg0->unkCC = temp_v0;
            }
        } else {
            arg0->unkCC = (temp_v1 + ((temp_v0 - temp_v1) / 0xC)) - 1;
            if (arg0->unkCC < temp_v0) {
                arg0->unkCC = temp_v0;
            }
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_77AD0/func_15052590.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_77AD0/func_15052760.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_77AD0/func_150528C8.s")

void func_15052EF0(struct127 *arg0) {
    arg0->immune = 100;
    arg0->unk40 =  ((s16) (arg0->unk7A + 16384)) * 0.005493164f;
    func_1505E650(arg0, 0, 1.0f, 0.0f, 0.0f, 0.0f, 0);
}

struct127 *func_15052F58(s32 arg0, s32 arg1) {
    struct127 *temp_v0;

    temp_v0 = &D_800CC2D0[arg0];
    temp_v0->unk13C = (u8)0;
    temp_v0->unk218 = 0;
    temp_v0->unk232 = arg1;
    return temp_v0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_77AD0/func_15052F9C.s")
// NON-MATCHING: plenty still to do here
// void func_15052F9C(struct127 *arg0, f32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9) {
//     s32 sp40;
//     s32 sp3C;
//     f32 temp_ret;
//     u16 temp_v0_3;
//     u8 idx;
//     struct127 *temp_a0;
//     struct05 *temp_v0;
//     s32 phi_a1;
//     s8 phi_v1;
//     struct127 *phi_a0;
//     // f32 phi_return;
//
//     sp3C = 0;
//     phi_a1 = -1;
//     if (arg0->id == 72) {
//         sp40 = -1;
//         temp_v0 = func_15033E84(arg0, -1);
//         phi_a1 = -1;
//         if (temp_v0 != 0) {
//             phi_a1 = temp_v0->unk6;
//         }
//     }
//     idx = arg0->unk124;
//     temp_a0 = &D_800CC2D0[idx];
//     if (arg8 == 0) {
//         // phi_return = idx; // bitwise (f32)
//         if (temp_a0->y_position < (arg0->y_position + (arg1 * arg0->unk150))) {
//             // phi_return = 0.0f;
//             if (temp_a0->y_velocity < 0.0f) { // stick an || here
//                 arg0->unk13C = (idx + 0x64);
//                 if (arg9 != 0) {
//                     D_800D1580 = arg9;
//                     sp40 = phi_a1;
//                     func_1506E5FC(temp_a0, phi_a1);
//                 }
//                 D_800CC2D0[idx].unk1CC = D_800CC2D0[idx].y_position;
//                 D_800CC2D0[idx].unk76 = arg0->unk7A;
//                 D_800CC2D0[idx].unk31C->unk30 = 0;
//                 if (arg0->interaction_state == 0x20) {
//                     D_800CC2D0[idx].y_velocity = 0.0f;
//                     arg0->y_velocity = 0.0f;
//                     if (arg0->id == 0x48) {
//                         phi_v1 = (s8) 2;
//                         if (phi_a1 == 0x7A) {
//                             arg0->unk65 = (arg0->unk124 + 1);
//                             arg0->unk5C = arg2;
//                             arg0->unk101 = (arg0->unk101 | arg3);
//                             func_1505E650(&D_800CC2D0[idx], 5, 1.0f, 0.0f, 0.0f, 0.0f, 0);
//                             func_15083568(&D_800CC2D0[idx], 0x79, 1.0f, 0);
//                             sp3C = 1;
//                             phi_v1 = (s8) 2;
//                         }
//                     } else {
//                         arg0->unk150 = 0.75f;
//                         D_800CC2D0[idx].y_position = arg0->y_position;
//                         phi_v1 = 1;
//                         if (D_800BE9F0 == 6) {
//                             phi_v1 = 0x81;
//                         }
//                     }
//                     D_800CC2D0[idx].unk76 = arg0->unk7A;
//                     D_800CC2D0[idx].unk78 = arg0->unk7A;
//                     D_800CC2D0[idx].unk7A = arg0->unk7A;
//                     D_800CC2D0[idx].unk40 = (s16) (arg0->unk7A + 0x4000) * 0.005493164f;
//                     D_800CC2D0[idx].unk31C->unk4E = phi_v1;
//                     D_800CC2D0[idx].unk83 = 0;
//                     D_800CC2D0[idx].disable_run = 0;
//                     phi_a0 = &D_800CC2D0[idx];
//                     // phi_return = arg0->unk7A; // bitwise ( f32)
//                 } else {
//                     D_800CC2D0[idx].unk65 = D_800C3E78 + 1;
//                     D_800CC2D0[idx].unk5C = arg2;
//                     D_800CC2D0[idx].disable_run = 0;
//                     D_800CC2D0[idx].unk101 =  (D_800CC2D0[idx].unk101 | arg3);
//                     phi_a0 = &D_800CC2D0[idx];
//                 }
//                 phi_a0->immune =  arg6;
//                 phi_a0->unk239 = arg7;
//                 phi_a0->unk31C->unk27 = 0;
//                 arg0->unk218 = 0;
//                 arg0->unk232 =  arg5;
//                 if (arg4 != 0) {
//                     temp_ret = func_1506160C(phi_a0, 1, 0, 0, 0);
//                     phi_a0->unk101 = (u8) (phi_a0->unk101 | 0x40);
//                     // phi_return = temp_ret;
//                 }
//             }
//         }
//     } else {
//     //    goto block_6;
//     }
//     if (sp3C != 0) {
//         // phi_return =
//         func_15060F28(arg0, 0);
//     }
//     // return phi_return;
// }


#pragma GLOBAL_ASM("asm/nonmatchings/game_77AD0/func_1505327C.s")
// NON-MATCHING: plenty still to do here
// void func_1505327C(struct127 *arg0, f32 arg1, f32 arg2, s32 arg3, s32 arg4) {
//     // s32 sp44;
//     f32 sp3C;
//     struct127 *temp_s0;
//     struct126 *temp_v0;
//
//     temp_s0 = &D_800CC2D0[arg0->unk124];
//     if ((temp_s0->disable_run == 0) && (temp_s0->stunned == 0)) {
//         temp_v0 = temp_s0->unk31C;
//         if ((temp_v0 == 0) || (temp_v0->unk6B == 0)) {
//             temp_s0->immune = 0xFFU;
//             temp_s0->y_velocity = arg1;
//             temp_s0->gravity = arg2;
//             temp_s0->unk83 = 0xFFU;
//             temp_s0->disable_run = 0xFFU;
//             temp_s0->unk76 = arg0->unk7A;
//             arg0->unk218 = 0;
//             arg0->unk232 = arg3;
//             // func_1505E650(arg1, arg2, temp_s0, 0x32, 1.2999999523162842f, 4.0f, 0.0f, 0.0f, 0);
//             func_1505E650(arg0, 50, 0x3FA66666, 4.0f, 0.0f, 0.0f, 0);
//             D_800CC2D0[arg0->unk124].unk31C->unk30 = 70;
//             D_800CC2D0[arg0->unk124].unk31C->unk28 = arg0->unk14;
//             D_800CC2D0[arg0->unk124].unk31C->unk2C = arg0->unk1C;
//             if ((arg0->unk1D4 != 0) && (arg4 != -1)) {
//                 func_15043FF0(&sp3C, arg0->unk1D4 + (arg4 << 6));
//                 D_800CC2D0[arg0->unk124].unk31C->unk28 = sp3C;
//                 // D_800CC2D0[arg0->unk124].unk31C->unk2C = sp44;
//             }
//             D_800CC2D0[arg0->unk124].unk31C->unk27 = 1;
//         }
//     }
// }

s32 func_15053430(void);
#pragma GLOBAL_ASM("asm/nonmatchings/game_77AD0/func_15053430.s")

s32 func_150535F4(struct127 *arg0) {
    u8 tmp;

    if (arg0->health == 0) {
        if (arg0->id == 0xFF) {
            func_15060F28(arg0, 1);
            return 1;
        }
        tmp = D_800D1C90[arg0->id]->data.i.unk0;
        if (((tmp & 0x10) != 0) ||
            (((tmp & 8) != 0) && (arg0->unk28 == 0.0f)) ||
            (arg0->unk10F == 0)) {
            return func_15053430();
        }
    }
    return 0;
}


void func_15053694(struct127 *arg0) {
    arg0->interaction_state = 8;
    arg0->unkE4 = 0;
    arg0->unkE6 = 0;
    func_1506160C(arg0, 6, 0, 0, 0);
}

void func_150536D0(struct127 *arg0) {
    arg0->interaction_state = 13;
    arg0->unkE4 = 0;
    arg0->unkE6 = 0;
}

void func_150536E8(struct127 *arg0) {
    arg0->unk40 = ((s16) (arg0->unk7A + 16384)) * 0.005493164f;
}

void func_1505371C(struct127 *arg0) {
    arg0->unk40 = ((s16) (arg0->unk7A + 16384)) * 0.005493164f;
}

// ???
#pragma GLOBAL_ASM("asm/nonmatchings/game_77AD0/func_15053750.s")

void func_15053894(struct127 *arg0) {
    arg0->unk7F += 1;
    if (arg0->unk7F >= 0x1F) {
        func_15060F28(arg0, 1);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_77AD0/func_150538CC.s")

void func_150548D8(s32 arg0) {
}

void func_150548E4(struct127 *arg0) {
    struct127 *temp_s0;
    struct127 *phi_s2;
    s32 phi_v0;
    s32 i;

    temp_s0 = &D_800CC2D0[arg0->unk65 - 1];

    for (i = 0; i < D_8008FD8C; i++) {
        phi_s2 = &D_800CC2D0[i];

        if ((phi_s2->unk274 == (((s32) ((s32)arg0 - (s32)D_800CC2D0) / (s32)sizeof(struct127)) + 1)) && (temp_s0->unk232 == 1)) {
            temp_s0->unk218 = 0;
            if ((func_150ADA20() & 1) != 0) {
                temp_s0->unk232 = (u8)2U;
                phi_v0 = 0x1DB;
            } else {
                temp_s0->unk232 = (u8)3U;
                phi_v0 = 0x1DC;
            }
            func_10010344(phi_v0, temp_s0, 0x7D00, 0x1F4, 0x9C4);
        }
    }
}

void func_15054A0C(struct127 *arg0) {
    if (arg0->unk2D0 != 0) {
        if ((arg0->unk2D0->unk18 - 1.0f) <= arg0->unk2D0->unk8) {
            func_15060F28(arg0, 0);
        }
    }
}

void func_15054A5C(struct127 *arg0, struct127 *arg1) {
    arg1->unk31C->unk11A = 0;
    func_151027E8(arg1);
    func_15060F28(arg0, 0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_77AD0/func_15054A94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_77AD0/func_15054F74.s")
// void func_15054F74(struct127 *arg0) {
//     s16 phi_v1;
//
//     f32 sp50;
//     f32 sp4C;
//     f32 sp48;
//
//     f32 temp_f2;
//     f32 temp_f0;
//
//     if (arg0->id == 12) {
//         if ((D_800C3E78 + 1) != D_800CC2D0[arg0->unk124].unk65) {
//             if (arg0->unk232 == 18) {
//                 func_15052F9C(arg0, 50.f, 0, 4, 0, 12, 0, 8, 0, 0);
//             } else if ((D_800CC268 & 1) != 0) {
//                 if ((arg0->unk25C & 0x400) != 0) {
//                     arg0->unk124 = 0;
//                     func_1505327C(arg0, 39.0f, 3.0f, 18, 0);
//                 }
//             }
//         }
//     } else {
//         if (arg0->id == 0x4B) {
//             func_1505A184(arg0->unk7A ^ 0x8000, 500.0f, 0, &sp50, &sp48, &sp4C);
//             temp_f0 = arg0->unk14;
//             temp_f2 = arg0->unk1C;
//             arg0->unk2EC = (((s32) ((f32) (s16) (s32) temp_f0 + sp50) << 0x10) | ((s32) ((f32) (s16) (s32) temp_f2 + sp48) & 0xFFFF));
//             if (arg0->unk84.uh  != 0xF) {
//                 phi_v1 = func_1505A630(D_800CC2D0->unk14 - temp_f0, temp_f2 - D_800CC2D0->unk1C, 0);
//             } else {
//                 phi_v1 = (s16) (arg0->unk7A - 0x800);
//             }
//             arg0->unk7A += (s16) (phi_v1 - arg0->unk7A) / 3;
//             arg0->unk14C = 2.0f;
//             arg0->unk150 = 2.0f;
//             arg0->unk40 = 90.0f;
//         } else if (((arg0->id == 0x1B) || ((arg0->id == 0x7E))) && (arg0->unk2E4 != 0)) {
//             if (D_800BE616 != 0) {
//                 func_1508B20C(arg0->unk14, arg0->unk18, 500.0f, 900.0f);
//             }
//             if ((arg0->unk2E4 > D_800BE9E4) && (arg0->unk2E4 >= 0x78) && (arg0->unk2E4 < (D_800BE9E4 + 0x78))) {
//                 func_10010154(0x3A1, arg0, 0x7D00, 0x1F4, 0x3E8);
//                 arg0->unk2E4 -= D_800BE9E4;
//             } else {
//                 arg0->unk232 = 6U;
//                 arg0->unk218 = 0;
//             }
//         }
//     }
// }

void func_15055260(s32 arg0, s32 arg1, s32 arg2) {
    func_150335C8(arg0, arg1, 0x4D, arg2, 0, 0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_77AD0/func_1505528C.s")
// NON-MATCHING: 80% there
// void func_1505528C(struct127 *arg0) {
//     f32 sp84;
//     f32 sp80;
//     f32 sp7C;
//     s32 sp74;
//     f32 sp70;
//     s32 sp6C;
//     s32 sp64;
//
//     struct17 tmp0;
//
//     f32 temp_f0;
//     f32 temp_f12;
//     f32 temp_f14;
//     f32 temp_f2;
//     f32 temp_f6;
//     s32 temp_v0;
//     u16 temp_t6;
//     u8 temp_t3;
//     u8 temp_v1;
//     s32 temp_a0;
//     struct108 *temp_a0_2;
//     f32 phi_f0;
//     s32 phi_a2;
//
//     sp74 = (u16)arg0->unk278;
//     sp6C = 0;
//     sp70 = 0.0f;
//
//     switch (sp74) {
//         case 0x1F:
//             arg0->unkB8 = (arg0->unkB8 + (arg0->xz_velocity * (f32) D_800BE9E4));
//             if (arg0->unk2E4 == 1) {
//                 func_10010344(0x230, arg0, 0x7D00, 0x1F4, 0x9C4);
//                 arg0->unk2E4 = 0;
//             }
//             break;
//         case 0x35:
//             arg0->unkB8 = (arg0->unkB8 + (f32) (D_800BE9E4 * 0x10));
//             break;
//         case 0x42:
//             sp70 = 25.0f;
//             if (arg0->gravity != 0.0f) {
//                 temp_f12 = arg0->y_velocity;
//                 if ((temp_f12 > 0.0f) || (arg0->unk28 > 25.0f)) {
//                     arg0->unkB8 = (-func_150484A0(temp_f12, arg0->xz_velocity) * D_80099408);
//                 }
//             }
//             temp_v0 = func_15081574(arg0, 40.0f, 10.0f, &sp64, 0xF, 0x53);
//             if (temp_v0 != 0) {
//                 func_15055260(arg0, sp64, temp_v0 - 1);
//                 func_15060F28(arg0, 1);
//                 return;
//             }
//             break;
//         case 0x4E:
//             sp70 = 25.0f;
//             if (arg0->unk28 > 25.0f) {
//                 arg0->unkB8 = (arg0->unkB8 + (f32) (D_800BE9E4 * 3));
//             }
//             break;
//         case 0x88:
//             temp_f6 = -func_150484A0(arg0->y_velocity, arg0->xz_velocity) * D_8009940C;
//             arg0->unkD0 = 0x10;
//             arg0->unkB8 = temp_f6;
//             if (func_1505C7D8(arg0, D_800C3E78) != 0) {
//                 func_15060F28(arg0, 1);
//                 return;
//             }
//     }
//     func_15059C84(arg0);
//     arg0->stunned = 1;
//     func_1505A770(arg0);
//     sp84 = arg0->unk14;
//     sp80 = arg0->unk18;
//     sp7C = arg0->unk1C;
//     func_15058898(arg0, arg0->unk30);
//     temp_f0 = arg0->unk118;
//     if ((temp_f0 != D_80099410) && (arg0->unk18 <= temp_f0) && (temp_f0 <= *(f32*)&arg0->unk30)) {
//         arg0->unk2E4 = 2;
//         arg0->gravity = 0.0f;
//         arg0->y_velocity = -3.0f;
//         arg0->xz_velocity *= D_80099414;
//     } else if ((sp84 != arg0->unk14) || (sp80 != arg0->unk18) || (sp7C != arg0->unk1C)) {
//         sp6C = 1;
//         if ((sp74 == 0x1F) && (arg0->unk2E4 != 2)) {
//             func_10010344(((func_150ADA20() % 5U) + 0x3A4), arg0, 0x7D00, 0x1F4, 0x9C4);
//         }
//     }
//     func_1505B5F8(arg0, arg0->unk180);
//     if (arg0->unk28 <= sp70) {
//         temp_a0 = arg0->unk14;
//         arg0->unk7F = (u8) (arg0->unk7F + 1);
//         sp6C = sp6C | 2;
//         if ((arg0->unk184 & 0x1F) == 0xE) {
//             func_1514AD9C(temp_a0, 0xFF, 0); // actually f32?
//             func_15060F28(arg0, 1);
//             return;
//         }
//         if (sp74 == 0x42) {
//             D_800D1580 = 0xFF0100B0; // ?
//             if (arg0->gravity != 0.0f) {
//                 func_1506E5FC();
//             }
//             arg0->gravity = 0.0f;
//             temp_f12 = *(f32*)&arg0->unk30;
//             temp_f0 = arg0->unk18 - temp_f12;
//             arg0->y_velocity = 0.0f;
//             arg0->xz_velocity = 0.0f;
//             arg0->unk18 = (*(f32*)&arg0->unk180 + sp70);
//             if (temp_f0 != 0.0f) {
//                 phi_f0 = (arg0->unk18 - temp_f12) / temp_f0;
//             } else {
//                 phi_f0 = 0.0f;
//             }
//             temp_f2 = arg0->unk2C;
//             temp_f12 = arg0->unk34;
//             arg0->unk14 = temp_f2 + ((arg0->unk14 - temp_f2) * phi_f0);
//             arg0->unk1C = temp_f12 + ((arg0->unk1C - temp_f12) * phi_f0);
//         } else if (arg0->unk18 < arg0->unk118) {
//             arg0->gravity = 0.0f;
//             arg0->y_velocity = 0.0f;
//             arg0->xz_velocity = 0.0f;
//         } else if ((arg0->y_velocity > 5.0f) && (sp74 == 0x1F) && (arg0->unk2E4 != 2)) {
//             func_10010344(0x39E, arg0, 0x7D00, 0x1F4, 0x9C4);
//             arg0->unk2E4 = 2;
//         }
//     }
//     arg0->unk40 = ((arg0->unk76 + 0x4000) * 0.005493164f);
//     if ((sp6C != 0) && (sp74 == 0x35)) {
//         func_10010630(0x360, arg0, 0x4E20, 0x1F4, 0x9C4);
//         if (arg0->unk118 < arg0->unk18) {
//             tmp0.unk0 = arg0->unk14;
//             tmp0.unk4 = arg0->unk18 + 20.0f;
//             tmp0.unk8 = arg0->unk1C;
//             func_151DCDE0(&tmp0, 0xFF, 1);
//         }
//         func_15060F28(arg0, 1);
//         return;
//     }
//     temp_t3 = arg0->unk83 - 1;
//     temp_v0 = temp_t3 & 0xFF;
//     arg0->unk83 = temp_t3;
//     if ((temp_v0 == 0) || (arg0->unk7F >= 0x1F)) {
//         func_15060F28(arg0, 1);
//         return;
//     }
//
//     temp_v1 = arg0->unk7F;
//     if (temp_v0 < 0xA) {
//         phi_a2 = (s32) (temp_v0 * 0xFF) / 0xA;
//     } else {
//         phi_a2 = 0xFF;
//         if (temp_v1 >= 0x15) {
//             phi_a2 = (s32) ((-(s32) temp_v1 * 0xFF) + 0x1DE2) / 0xA;
//         }
//     }
//     func_1503192C(arg0, sp74, phi_a2, 0);
//     if (sp74 == 0x1F) {
//         temp_a0_2 = D_800DBFF0;
//         temp_f0 = temp_a0_2->unk2F8 - arg0->unk14;
//         temp_f2 = temp_a0_2->unk2FC - arg0->unk18;
//         temp_f12 = temp_a0_2->unk300 - arg0->unk1C;
//         temp_f14 = (temp_f0 * temp_f0) + (temp_f2 * temp_f2) + (temp_f12 * temp_f12);
//         if (temp_f14 < 900.0f) {
//             func_1512D748(temp_f12, temp_f14, temp_a0_2, 8, 0);
//             func_10010F88(0x2E1, 0x6D60, 0, 0, 0, arg0->unk14, arg0->unk18, arg0->unk1C, 0x1F4, 0x3E8);
//             func_10010A3C(arg0);
//             func_15060F28(arg0, 1);
//         }
//     }
// }

void func_15055A2C(s32 arg0, f32 arg1, f32 arg2, f32 arg3, s32 arg4) {
    s32 phi_a0 = 1549;
    s32 phi_v1 = 1000;

    if (arg4 == 1) {
        phi_a0 = 1549;
        phi_v1 = 100;
    } else {
        phi_a0 = D_8009919C[func_150ADA20() % 6U];
    }
    func_10010F88(phi_a0, 32700, func_150ADA20() % 500U, 0, 0, arg1,  arg2, arg3, phi_v1, 3000);
}

void func_15055B0C(struct127 *arg0, s32 arg1) {
    arg0->interaction_state = 39;
    func_1505E650(arg0, arg0->unk84.uh, 0, 0.0f, 0.0f, 0.0f, 0);
    arg0->unkE4 = 0;
    arg0->unkE6 = 0;
    arg0->unk21C = arg1;
}

void func_15055B64(struct127 *arg0) {
    arg0->unk40 = (s16)(arg0->unk7A + 16384) * 0.005493164f;
    arg0->unkF8 |= 0x1000000;

    if (D_800BE9A0 < arg0->unk21C) {
        arg0->unk21C -= D_800BE9E4;
    } else {
        arg0->unk21C = 0;
        if (arg0->unk1D4 == 0) {
            func_15060F28(arg0, 1);
        }
    }
}

void func_15055BF8(struct127 *arg0) {
    arg0->unk40 = (s16)(arg0->unk7A + 16384) * 0.005493164f;
    arg0->unkF8 |= 0x1000000;
    arg0->y_position -= D_800BE9A4;

    if (arg0->y_position < (arg0->unk180 - 100.0f)) {
        func_15060F28(arg0, 0);
    }
}

void func_15055C88(struct127 *arg0) {
    s32 sp2C = 2099172; // 0x2007E4;
    if (((arg0->unk9C & 0x1000) == 0) && func_1506E46C(arg0, &sp2C, 1)) {
        func_15060A30(sp2C, arg0);
    }
    arg0->unk31C->unk36 = 100;
    func_1506160C(arg0, 2, 0, 6, 0);
    if (0) {};
    arg0->disable_run = 200;
    arg0->unk83 = 200;
    arg0->unk1CC = D_80099418;
    arg0->interaction_state = 41;
    arg0->gravity = 0.0f;
    arg0->y_velocity = 0.0f;
    arg0->xz_velocity = 0.0f;
    func_1507CD64(arg0, 9);
}

void func_15055D48(struct127 *arg0) {
    f32 temp_f0;

    arg0->unk31C->unk36 += D_800BE9A0;
    if (arg0->unk31C->unk36 >= 0x8D) {
        D_800D18A0 |= (1 << (((s32)arg0 - (s32)D_800CC2D0) / (s32)sizeof(struct127)));
        if (D_800D18A0 != 0) {
            arg0->immune = 0xFF;
            arg0->stunned = 0xFF;
            arg0->disable_run = 0xFF;
            arg0->unkF8 |= 0x200;
            arg0->unkE4 = 0;
            arg0->unkE6 = 0;
            arg0->unk7 = 0;
            arg0->health = 0;
            arg0->interaction_state = 5;
            arg0->xz_velocity = 0.0f;
            arg0->y_velocity = 0.0f;
            arg0->gravity = 0.0f;
            return;
        }
        func_1506D538();
    }
    temp_f0 = D_8009941C;
    arg0->health = 0;
    arg0->xz_scale *= temp_f0;
    arg0->y_scale *= temp_f0;
    arg0->xz_velocity *= temp_f0;
}
