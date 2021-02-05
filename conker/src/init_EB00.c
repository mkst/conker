#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_1000EB00(struct04 *arg0, s32 arg1, s32 *arg2, s32 *arg3, s32 arg6, s32 arg7, u16 *arg8) {
    if (arg0->unk24 != 0) {
        arg0->unk24 = 0;
    }
    *arg3 = 64;
    if (D_800CC37D || (*arg2 == 0)) {
        *arg2 = 0;
        *arg8 = 0;
        return 0;
    }
    arg0->unk18 -= D_800BE9E4;
    if (arg0->unk18 > 0) {
        *arg2 = 0;
        *arg8 = 0;
    } else {
        arg0->unk18 = (func_150ADA20() & 0x7F) + 0x80;
        arg0->unk0 = (func_150ADA20() % 3U) + 0x6C;
    }
    return 0;
}

s32 func_1000EBC4(struct00 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0 = arg0->unkC;
    s32 temp_v1 = arg0->unk18;
    temp_v1 -= D_800BE9E4;

    if (temp_v1 <= 0) {
        temp_v0 = temp_v0 - D_800BE9E4 * 1000;
        if (temp_v0 < 0) {
            return 1;
        }
        arg0->unkC = temp_v0;
    }
    arg0->unk18 = temp_v1;
    return 0;
}

s32 func_1000EC24(struct251 *arg0, s32 arg1, s32 *arg2, struct11 *arg3, struct04 *arg4, s32 *arg5, u16 *arg6) {
    s16 temp_v1 = arg0->unk18.h[1];

    if (*arg6 != 0) {
        arg0->unk1C = *arg6;
        arg0->unk0 = 0;
        *arg6 = 0;
    }

    temp_v1 -= D_800BE9E4;

    if (temp_v1 <= 0) {
        if (*arg2 != 0) {
            func_10010F30(arg0->unk1C, *arg2, arg3->unk3, arg4->unk2, *arg5);
        }
        return 1;
    }
    arg0->unk18.w = temp_v1;
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/init_EB00/func_1000ECCC.s")
// ? func_1000ECCC(void *arg0, ? arg1, ? arg2, ? arg3, void *arg6) {
//     s16 temp_a1;
//     s32 temp_t4;
//     s32 temp_v1;
//     u16 temp_v0;
//
//     temp_v1 = arg0->unk18;
//     temp_v0 = *arg6;
//     if (temp_v0 != 0) {
//         arg0->unk18 = (s32) ((temp_v0 << 0x10) | (temp_v1 & 0xFFFF));
//         arg0->unk0 = (u16)0;
//         *arg6 = (u16)0U;
//     }
//     temp_a1 = (s16) temp_v1 - *(void *)0x800BE9E4;
//     if ((s32) temp_a1 <= 0) {
//         temp_t4 = arg0->unk18 >> 0x10;
//         *arg6 = (u16) temp_t4;
//         arg0->unk0 = (s16) temp_t4;
//         if (func_10010894(arg0->unk1C, temp_a1, arg6) == 0) {
//             func_10010344(*arg6, arg0->unk1C, arg0->unkC, arg0->unkA, (?32) arg0->unk8);
//         }
//         return 1;
//     }
//     arg0->unk18 = (s32) ((arg0->unk18 & 0xFFFF0000) | temp_a1);
//     return 0;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/init_EB00/func_1000EDA0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/init_EB00/func_1000EE70.s")

s32 func_1000EF40(struct57 *arg0, struct57 *arg1, s32 *arg2, s32 arg3, s32 arg4, s32 arg5, u16 *arg6) {
    if (arg0->unk10 & 0x80) {
        arg0->unk10 = (s32) (arg0->unk10 & -0x81);
    }
    if (*arg2 == 0) {
        if (arg0->unk24 != 0) {
            func_100111C8(arg0->unk24);
            arg0->unk24 = 0;
        }
        *arg6 = 0;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/init_EB00/func_1000EFB4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/init_EB00/func_1000F1A8.s")

// NON-MATCHING: plenty still to do
void func_10017780(u8 arg0, u16 arg1);
s32* malloc(s32, s32, s32, s32);
void func_1000F248(s32 arg0) {
    u16 tmp;

    func_1000F1A8();
    if (arg0 == 4) {
        D_80041F54 = 0;
        D_80041F58 = D_8002C3F8; // 0.009999999776482582
    } else {
        D_80041F54 = 23000;
        D_80041F58 = D_8002C3FC; // 0.10000000149011612
    }

    if (arg0 == 0x35) {
        D_80041FD9 = 0;
    } else if (arg0 == 0x36) {
        D_80041FD9 = 0;
    } else if (arg0 == 0x3C) {
        D_80041FD9 = 0;
        D_80041FD8 = 0x3C;
    } else if (arg0 == 0x27) {
        D_80041FD9 = 0;
        D_80041FD8 = 0x28;
    } else if ((arg0 == 0x3A) || (arg0 == 0x40)) {
        D_80041FD9 = 0;
        D_80041FD8 = 0x3C;
    }

    D_80041F5C = malloc(1762, 1, 0, 0);

    bzero(D_80041F5C, 1762);

    if (arg0 == 0x31) {
        D_80041FDC = 14000;
    } else {
        D_80041FDC = 23000;
    }
    func_10011E88(arg0);
    D_80041F60 = D_80041F61 = 0;
    func_10017780(0, D_80041F56);
    func_10017780(1, D_80041F56);
    func_10017780(2, 23000);
    // fakematch
    if (arg0) {}
}

s32 func_1000F3D0(u16 arg0) {
    struct120 *temp_v1;

    temp_v1 = &D_800425E0[arg0 & 0xF];
    if (temp_v1->unk8 != 0) {
        if ((temp_v1->unk0 == arg0) || (arg0 == (arg0 & 0xF))) {
            if (func_100173C4(&temp_v1->unk8) != 0) {
                return 1;
            }
        }
    }
    return 0;
}

s32 func_1000F44C(u16 arg0) {
    u32 mask;
    struct120 *temp_a1;
    struct31 *temp_a2;

    mask = __osDisableInt();
    temp_a1 = &D_800425E0[arg0 & 0xF];
    temp_a2 = temp_a1->unk8;
    if ((temp_a2 != 0) && (temp_a1->unk0 == arg0) && ((temp_a2->unk53 & 2) != 0)) {
        __osRestoreInt(mask);
        return 1;
    }
    __osRestoreInt(mask);
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/init_EB00/func_1000F4D8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/init_EB00/func_1000F568.s")
#pragma GLOBAL_ASM("asm/nonmatchings/init_EB00/func_1000F6B8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/init_EB00/func_1000F85C.s")
// NON-MATCHING: not even close
// void func_1000F85C(s32 arg0, s16 arg1, s32 arg2) {
//     f32 sp1C;
//     s32 sp18;
//     s16 temp_a1;
//     s16 temp_a1_2;
//     s32 temp_t6;
//     s16 phi_a1;
//
//     temp_t6 = arg0 & 0xFFFF;
//     temp_a1 = arg1;
//     if (temp_t6 >= 16) {
//         sp18 = temp_t6;
//         arg1 = temp_a1;
//         temp_a1_2 = arg1;
//         if (func_1000F3D0(temp_t6) != 0) {
//             if (temp_a1_2 == 16) {
//                 sp18 = sp18;
//                 arg1 = temp_a1_2;
//                 sp1C = alCents2Ratio(arg2, temp_a1_2);
//                 arg2 = (s32) sp1C;
//                 phi_a1 = arg1;
//             } else {
//                 phi_a1 = temp_a1_2;
//                 if (temp_a1_2 == 0x11) {
//                     phi_a1 = (u16)0x10;
//                 }
//             }
//             func_10017714((((sp18 & 0xF) * 0xC) + 0x80040000) - 0x25E8, phi_a1, arg2);
//         }
//     }
// }

void func_1000F91C(u16 arg0, u16 arg1, s16 arg2, u8 arg3, s32 arg4,
                   s16 arg5, s16 arg6, s16 arg7, s16 arg8, s16 arg9) {
    s32 sp2C;
    s32 tmp = func_1000F6B8(arg4, arg5, arg6, arg7, &sp2C, (s32) arg8, (s32) arg9);

    func_1000F85C(arg0, 8, (u32) (tmp * arg1) >> 0xF);
    func_1000F85C(arg0, 4, sp2C & 0x7F);
    func_1000F85C(arg0, 256, (sp2C & 0x80) | arg3);
    func_1000F85C(arg0, 16, arg2);
}

void func_1000F9D4(u16 arg0, s16 arg1, s16 arg2, s16 arg3) {
    u32 tmp;

    func_1000F6B8(-1, arg1, arg2, arg3, &tmp, 32760, 32765);
    func_1000F85C(arg0, 4, tmp & 0x7F);
    func_1000F85C(arg0, 256, tmp & 0x80);
}

#pragma GLOBAL_ASM("asm/nonmatchings/init_EB00/func_1000FA64.s")
#pragma GLOBAL_ASM("asm/nonmatchings/init_EB00/func_1000FC18.s")
#pragma GLOBAL_ASM("asm/nonmatchings/init_EB00/func_1000FD38.s")
#pragma GLOBAL_ASM("asm/nonmatchings/init_EB00/func_1000FDF4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/init_EB00/func_1000FE88.s")
// ? func_1000FE88(s32 arg0, s32 arg1, void *arg2) {
//     void *sp1C;
//     s32 temp_t7;
//     u16 temp_a0;
//     void *temp_v1;
//     ? phi_return;
//
//     phi_return = 1;
//     if (arg1 < *arg2) {
//         temp_t7 = arg1 * 0x30;
//         temp_v1 = arg0 + temp_t7;
//         temp_a0 = temp_v1->unk24;
//         if (temp_a0 != 0) {
//             sp1C = temp_v1;
//             func_100111C8(temp_a0, arg0);
//         }
//         (arg0 + temp_t7)->unk10 = (s32) ((arg0 + temp_t7)->unk10 | 0x80);
//         phi_return = 0;
//     }
//     return phi_return;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/init_EB00/func_1000FEF0.s")
// NON-MATCHING: needs a re-work
// s32 func_1000FEF0(u16 arg0, struct127 *arg1, s32 arg2) {
//     s32 i;
//     struct15 *tmp;
//
//     if (arg0 == 0) {
//         // nothing
//     } else {
//         for (i = 0; i < D_80042760; i++) {
//             tmp = &D_80041FE0[i];
//             if ((arg0 == tmp->unk24) &&
//                 (arg1 == tmp->unk18) &&
//                 (arg2 == tmp->unk1C) &&
//                 ((tmp->unk10 & 0x80) == 0)) {
//                 return i;
//             }
//         }
//     }
//     return -1;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/init_EB00/func_1000FF90.s")
#pragma GLOBAL_ASM("asm/nonmatchings/init_EB00/func_1001001C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/init_EB00/func_100100E0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/init_EB00/func_10010154.s")
#pragma GLOBAL_ASM("asm/nonmatchings/init_EB00/func_10010344.s")
#pragma GLOBAL_ASM("asm/nonmatchings/init_EB00/func_10010558.s")

#pragma GLOBAL_ASM("asm/nonmatchings/init_EB00/func_10010630.s")
// void func_10010630(u16 arg0, struct127 *arg1, s32 arg2, s16 arg3, u16 arg4) {
//     if (arg1->interaction_state != 0) {
//         if (arg1->camera != 0) {
//             func_10010F30(arg0, arg2 & 0xFFFF, 64, 0, (((u32) arg1->unk184 >> 3) & 0x30) * 2); //
//         } else {
//             func_1000FA64(arg0, arg1->x_position, arg1->y_position, arg1->z_position, arg2, arg4, arg3, (void *)func_1000EE70, arg1, arg1->unique_id, 0, 0);
//         }
//     }
// }

void func_10010720(u16 arg0, struct127 *arg1, s32 arg2, s16 arg3, u16 arg4, s32 arg5) {
    if (arg5 <= 0) {
        func_10010630(arg0, arg1, arg2, arg3, arg4);
    } else {
        func_1000FA64(arg0, arg1->x_position, arg1->y_position, arg1->z_position, arg2, arg4, arg3, func_1000EDA0, arg5, arg1, 0, 0);
    }
}

s32 func_100107F8(struct127 *arg0) {
    if (arg0->interaction_state == 0) {
        return 0;
    } else {
        if (arg0->camera != 0) {
            if (arg0->unk8E != 0) {
                if (func_1000F3D0(arg0->unk8E) != 0) {
                    return 1;
                }
            }
        } else {
            if (func_1000FF90(func_1000EE70, arg0, arg0->unique_id | 0x10000) != -1) {
                return 1;
            }
        }
        arg0->unk8E = 0;
    }
    return 0;
}

s32 func_10010894(struct127 *arg0) {
    if (arg0->camera != 0) {
        if (arg0->unk8C != 0) {
            if (func_1000F3D0(arg0->unk8C) != 0) {
                return 1;
            }
        }
    } else {
        if (func_1000FF90(func_1000EE70, arg0, arg0->unique_id | 0x20000) != -1) {
            return 1;
        }
    }
    arg0->unk8C = 0;
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/init_EB00/func_1001091C.s")
// NON-MATCHING: something isnt right...
// void func_1001091C(struct127 *arg0, struct15 *arg1) {
//     s32 temp_v0;
//
//     if ((arg1 != NULL) && (arg0->unk0 != 0)) {
//         if (arg0->camera != 0) {
//             if (arg0->unk8E != 0) {
//                 func_1000F85C(arg0->unk8E, 8, arg1->unk1C); // help
//             }
//         } else {
//             temp_v0 = func_1000FF90(func_1000EE70, arg0, arg0->unique_id | 0x10000);
//             if (temp_v0 != -1) {
//                 D_80041FEC[temp_v0][0] = arg1;
//             } else {
//                 arg0->unk8E = 0;
//             }
//         }
//     }
// }

void func_100109D0(struct127 *arg0) {
    if (arg0->camera) {
        if (arg0->unk8E) {
            func_100111C8(arg0->unk8E);
        }
    } else {
        func_1000FD38(func_1000EE70, arg0, arg0->unique_id | 0x10000);
    }
    arg0->unk8E = 0;
}

void func_10010A3C(struct127 *arg0) {
    if (arg0->camera) {
        if (arg0->unk8C) {
            func_100111C8(arg0->unk8C);
        }
    } else {
        func_1000FD38(func_1000EE70, arg0, arg0->unique_id | 0x20000);
    }
    arg0->unk8C = 0;
}

void func_10010AA8(struct127 *arg0) {
    s32 sp24;
    struct15 *tmp;

    if (arg0->camera != 0) {
        if (arg0->unk8C && func_1000F44C(arg0->unk8C)) {
            func_100111C8(arg0->unk8C);
        }
        if (arg0->unk8E && func_1000F44C(arg0->unk8E)) {
            func_100111C8(arg0->unk8E);
        }
    } else {
        sp24 = func_1000FEF0(arg0->unk8C, arg0, arg0->unique_id);
        if (sp24 != -1) {
            if (func_1000F44C(arg0->unk8C)) {
                func_100111C8(arg0->unk8C);
            }
            tmp = &D_80041FE0[sp24];
            tmp->unk10 |= 0x80;
        }
        sp24 = func_1000FEF0(arg0->unk8E, arg0, arg0->unique_id);
        if (sp24 != -1) {
            if (func_1000F44C(arg0->unk8E)) {
                func_100111C8(arg0->unk8E);
            }
            tmp = &D_80041FE0[sp24];
            tmp->unk10 |= 0x80;
        }
    }
    arg0->unk8C = 0;
    arg0->unk8E = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/init_EB00/func_10010BE8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/init_EB00/func_10010E78.s")

void func_10010F30(s32 arg0, u16 arg1, u8 arg2, s16 arg3, u8 arg4) {
    func_10010BE8(0, arg0, arg1, arg2, arg3, arg4, D_80041FD9);
}

#pragma GLOBAL_ASM("asm/nonmatchings/init_EB00/func_10010F88.s")
#pragma GLOBAL_ASM("asm/nonmatchings/init_EB00/func_10010FFC.s")

void func_100111C8(u16 arg0) {
    struct120 *tmp = &D_800425E0[arg0 & 0xF];

    if ((tmp->unk8 != 0) && (tmp->unk0 == arg0)) {
        tmp->unk0 = 0;
        tmp->unk4 = 0;
        func_10017594(tmp->unk8);
        tmp->unk8 = 0;
    }
}

void func_1001123C(u16 arg0) {
    struct120 *tmp = &D_800425E0[arg0 & 0xF];

    if ((tmp->unk8 != 0) && (tmp->unk0 == arg0)) {
        if (func_100112BC(arg0, 1) == 0) {
            func_10017594(tmp->unk8);
            tmp->unk8 = 0;
        }
    }
}

s32 func_100112BC(s32 arg0, s32 arg1) {
    struct49 *temp_a0;
    s32 temp_v1 = D_80041F50;

    if (temp_v1 < 16) {
        temp_a0 = &D_80041F10[temp_v1];
        temp_a0->unk0 = arg0;
        temp_a0->unk2 = arg1;
        temp_a0->unk3 = arg0 & 0xF;
        D_80041F50 = temp_v1 + 1;
        return 1;
    } else {
        return 0;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/init_EB00/func_10011310.s")

s32 func_1001147C(u16 arg0) {
    struct120 *tmp;

    if (arg0 != 0) {
        tmp = &D_800425E0[arg0 & 0xF];
        if (tmp->unk0 == arg0) {
            return tmp->unk4 & 0x7FFF;
        }
    }
    return -1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/init_EB00/func_100114D0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/init_EB00/func_10011624.s")
#pragma GLOBAL_ASM("asm/nonmatchings/init_EB00/func_10011BB8.s")

void func_10011E88(s32 arg0) {
}

void func_10011E94(s32 arg0) {
    if (arg0) {
        D_80041F61 = 1;
    } else {
        D_80041F61 = 0;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/init_EB00/func_10011EB8.s")
// NON-MATCHING: whats going on here
// u16 func_10011EB8(s32 arg0, s16 *arg1, s32 arg2, s32 arg3) {
//     struct120 *temp_v1_2;
//     s32 temp_v0;
//     s32 temp_a0;
//
//     temp_v0 = func_1510F8CC(arg0);
//     if (arg1 != NULL) {
//         if (D_80082FA0 != 0) {
//             *arg1 = 0x7FFF / (D_80082FA0 + 1);
//         } else {
//             *arg1 = 0x7FFF;
//         }
//     }
//     temp_v1_2 = &D_8002C240[temp_v0 + arg2];
//     temp_a0 = temp_v1_2->unk0;
//     if (temp_v1_2->unk2 >= 2) {
//         temp_a0 = func_1000F568(temp_v0, temp_v1_2->unk2);
//     }
//     return temp_a0;
// }
