#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_15122AE0(void) {
    struct108 *temp_s0;
    s16 i;
    f32 temp_f20;

    temp_f20 = D_800BEA08 * D_800A34D0;

    for (i = 0; i <= D_80082FA0; i++) {
        temp_s0 = &D_800DBFF0[i]; // ???
        if (func_150859AC(i, 0) || (i == 0)) {
            temp_s0->unk7B4 = temp_f20;
            if ((D_800BEAC0 == 0) || (D_800C35EA != 0) || (D_800D2DB4 != 0)) {
                func_151239CC(temp_s0, 5);
                func_15122C5C(temp_s0);
            } else {
                func_15123934(temp_s0, 8192, 0, temp_s0->unk134, 5);
                func_1512C490(temp_s0);
            }
        }
    }
    D_800894B0 += 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_15122C5C.s")
// NON-MATCHING: 80% there
// void func_15122C5C(struct108 *arg0) {
//     f32 phi_f12;
//     u8 temp_v0_2;
//     struct167 *temp_a1;
//     struct167 *temp_a0;
//
//     if (arg0->unk23C) {
//         arg0->unk2E0 = arg0->unk2BC;
//         arg0->unk2E4 = arg0->unk2C0;
//         arg0->unk2F0 = arg0->unk2FC;
//
//         arg0->unk2EC = arg0->unk2F8;
//         arg0->unk2E8 = arg0->unk2C4;
//         arg0->unk2F4 = arg0->unk300;
//     }
//
//     temp_a0 = &arg0->unk2BC;
//     temp_a1 = &arg0->unk2F8;
//
//     if ((arg0->unk3D4 != NULL) && (arg0->unk73C != 3) && ((arg0->unk2C != 0x100) || (arg0->unk73C != 0))) {
//         arg0->unk23E = arg0->unk3D4->unk78;
//     }
//
//     temp_v0_2 = arg0->unk23D;
//
//     if (D_800DBFF4[temp_v0_2] != 4) {
//         arg0->unk5F0 &= -5;
//     }
//
//     if ((arg0->unk2C << 9) >= 0) {
//         temp_a0->unk0 = arg0->unk2E0;
//         temp_a0->unk4 = arg0->unk2E4;
//         temp_a0->unk8 = arg0->unk2E8;
//         temp_a1->unk0 = arg0->unk2EC;
//         temp_a1->unk4 = arg0->unk2F0;
//         temp_a1->unk8 = arg0->unk2F4;
//     }
//     // temp_v0_2 = arg0->unk23D;
//     arg0->unk36C = D_800BE728[temp_v0_2];
//     arg0->unk36A = D_800BE710[temp_v0_2];
//     arg0->unk304 = temp_a1->unk0;
//     arg0->unk308 = temp_a1->unk4;
//     arg0->unk358 = arg0->unk35C;
//     arg0->unk30C = temp_a1->unk8;
//     arg0->unk2C8 = temp_a0->unk0;
//     arg0->unk2CC = temp_a0->unk4;
//     arg0->unk2D0 = temp_a0->unk8;
//     if (arg0->unk23C != 0) {
//         arg0->unk19C = arg0->unk1A4;
//         arg0->unk1A0 = arg0->unk1A8;
//         // phi_f12 = *(s32*)&arg0; // unk0?
//     } else {
//         arg0->unk19C += (arg0->unk1A4 - arg0->unk19C) * D_800A34D4;
//         arg0->unk1A0 += (arg0->unk1A8 - arg0->unk1A0) * D_800A34D4;
//         phi_f12 = D_800A34D4;
//     }
//
//     func_1510B128(phi_f12, temp_v0_2, arg0->unk19C, arg0->unk1A0, D_800BE628[temp_v0_2].unk84, (arg0->unk2C & 0x100) ? 16.0f : 0.0f);
//     func_15097798(arg0->unk23D);
//     func_15125A6C(arg0);
//     func_15128CB0(arg0);
//     func_15125DB4(arg0);
//     if ((arg0->unk3D4->unk120 != 0) && (arg0->unk3D4->unk197 != 0)) {
//         func_15127EB8(arg0);
//     }
//     if (func_15128540(arg0) == 0) {
//         if (((arg0->unk84 * 0x10) < 0) && ((arg0->unk84 & 0x400) == 0)) {
//             func_1512E8E0(arg0);
//         }
//         func_15130230(arg0, D_800BE9F0);
//         func_15126138(arg0);
//         func_15125C40(arg0);
//         func_15128680(arg0);
//         func_1512317C(arg0);
//         func_15125394(arg0);
//         if (((arg0->unk84 * 16) >= 0) && ((arg0->unk84 & 0x400) == 0)) {
//             func_1512E8E0(arg0);
//         }
//         func_15123568(arg0);
//         func_1512C200(arg0);
//         func_15125924(arg0);
//         func_151283B8(arg0);
//         if (arg0->unk23C != 0) {
//             func_15125594(arg0);
//             func_15123070(arg0);
//             func_151283B8(arg0);
//             func_151283B8(arg0);
//         }
//         func_15123508(arg0);
//         if (((arg0->unk84 & 2) != 0) && (arg0->unk3D4->unk120 == 0)) {
//             func_1512D390(arg0);
//         }
//         func_15125594(arg0);
//         func_151256BC(arg0);
//         func_1512D980(arg0);
//         func_1512C068(arg0);
//         func_1512B100(arg0);
//         func_1512C20C(arg0);
//         func_1512BB10(arg0);
//         if (arg0->unk23C != 0) {
//             func_1512C068(arg0);
//             func_1512B100(arg0);
//             func_1512C20C(arg0);
//             func_1512BB10(arg0);
//         }
//         func_15125594(arg0);
//         func_15123070(arg0);
//         if (arg0->unk7F4 == 0) {
//             func_151287E0(arg0, 0, 0);
//         }
//         func_1512C150(arg0);
//         func_151284C4(arg0);
//     }
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_15123070.s")
// NON-MATCHING: 1 missing lui
// void func_15123070(struct108 *arg0) {
//     f32 temp_f0;
//     struct17 tmp;
//
//     if ((arg0->unk6C8 != 0) && ((arg0->unk6FC == 10) || (arg0->unk6FC == 14))) {
//         func_15048F90(&arg0->unk618, &arg0->unk2A4, &tmp, arg0);
//         arg0->unk390 = arg0->unk37C - func_15048FC8(&tmp);
//     } else {
//         temp_f0 = arg0->unk3D0->unk40 - arg0->unk37C - 180.0f;
//
//         while (temp_f0 < 0.0f) {
//             temp_f0 += 360.0f;
//         }
//
//         arg0->unk390 = temp_f0;
//     }
//
//     while (arg0->unk390 < -360.0f) {
//         arg0->unk390 += 360.0f;
//     }
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_1512317C.s")

void func_15123508(struct108 *arg0) {
    if ((arg0->unk84 & 2) != 0) {
        if (((arg0->unk36A & 2) != 0) && (arg0->unk698 == 0)) {
            arg0->unk6B0 = -1;
        }
        if (((arg0->unk36A & 1) != 0) && (arg0->unk698 == 0)) {
            arg0->unk6B0 = 1;
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_15123568.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_151236D0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_15123934.s")
// NON-MATCHING: not sure what is up with arg0
// s32 func_15123934(struct108 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
//     struct108 *temp_v0;
//     struct108 *temp_v1;
//
//     temp_v1 = &arg0[arg4]; // ???
//     if (temp_v1->unk20C == 0) {
//         temp_v1->unk2 = arg0->unk0;
//         temp_v0 = &arg0[arg4 * 4]; // ???
//         temp_v0->unk30 = arg0->unk2C;
//         temp_v0->unk88 = arg0->unk84;
//         temp_v0->unkE0 = arg0->unkDC;
//         temp_v0->unk138 = arg0->unk134;
//         temp_v1->unk1B6[0] = arg0->unk1B4;
//         temp_v1->unk1E2 = arg0->unk1E0;
//         arg0->unk2C = arg1;
//         arg0->unkDC = arg2;
//         arg0->unk134 = arg3;
//         temp_v1->unk20C = 1;
//         func_15125394();
//         return 1;
//     }
//     return 0;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_151239CC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_15123A54.s")

void func_15124770(struct108 *arg0, s32 arg1) {
    if (arg1 != 0) {
        arg0->unk244 = arg1;
        arg0->unk248 = &D_800CC2D0[arg1];
    } else {
        arg0->unk244 = 0;
        arg0->unk248 = NULL;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_151247C0.s")

void func_15124AB4(struct108 *arg0) {
    arg0->unk668 = -func_15047D60(arg0->unk398);
    arg0->unk66C = func_15047C00(arg0->unk398);
    arg0->unk664 = func_15047D60(arg0->unk39C) * arg0->unk66C;
    arg0->unk66C = func_15047C00(arg0->unk39C) * arg0->unk66C;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_15124B18.s")
// f32 func_15124B18(struct108 *arg0) {
//     s32 temp_t8;
//     void *temp_v0;
//
//     if (arg0->unk1B4 == 0) {
//         arg0->unk1B4 = (u16)4;
//     }
//     temp_t8 = arg0->unk2C & 0x80;
//     if ((temp_t8 != 0) && ((*arg0->unk36C & 0x10) != 0)) {
//         arg0->unk348 = 40.0f;
//         arg0->unk34C = 40.0f;
//         arg0->unk374 = 150.0f;
//         return 40.0f;
//     }
//     if (temp_t8 != 0) {
//         arg0->unk348 = (f32) (arg0->unk2FC - arg0->unk354);
//         return (bitwise f32) temp_t8;
//     }
//     if ((temp_t8 != 0) && (arg0->unk3D0->unk102 == 0) && (D_800BE9F0 != 0x17)) {
//         arg0->unk348 = 40.0f;
//         arg0->unk34C = 40.0f;
//         arg0->unk374 = 150.0f;
//         return 40.0f;
//     }
//     if (arg0->unk3D0->unk102 != 0) {
//         arg0->unk348 = 40.0f;
//         arg0->unk34C = 40.0f;
//         arg0->unk374 = 194.0f;
//         return 40.0f;
//     }
//     temp_v0 = (arg0->unk1B4 * 8) + 0x800A34B0;
//     arg0->unk374 = (f32) temp_v0->unk0;
//     arg0->unk348 = (f32) temp_v0->unk4;
//     arg0->unk34C = (f32) arg0->unk348;
//     return (bitwise f32) temp_v0;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_15124C38.s")

void func_1512523C(struct108 *arg0) {
    f32 temp_f12;
    f32 temp_f2;
    f32 phi_f14;

    temp_f2 = arg0->unk2BC - arg0->unk2F8;
    temp_f12 = arg0->unk2C4 - arg0->unk300;
    temp_f12 = sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12));
    if (temp_f12 < 0.0f) {
        phi_f14 = -temp_f12;
    } else {
        phi_f14 = temp_f12;
    }
    temp_f2 = func_150484A0(arg0->unk2FC - arg0->unk2C0, phi_f14) * D_800A351C;
    arg0->unk388 = temp_f2;
    if (temp_f2 > 180.0f) {
        arg0->unk388 -= 360.0f;
    }
    arg0->unk388 = -arg0->unk388;
    arg0->unk388 -= arg0->unk3A8;
    arg0->unk388 += arg0->unk38C;
    arg0->unk398 = arg0->unk388 * D_800A3520;
}

void func_15125330(struct108 *arg0) {
    struct17 tmp;

    tmp.unk0 = arg0->unk2BC - arg0->unk2F8;
    tmp.unk4 = 0.0f;
    tmp.unk8 = arg0->unk2C4 - arg0->unk300;

    arg0->unk37C = func_15048FC8(&tmp);
    arg0->unk39C = arg0->unk37C * D_800A3524;
}

void func_15125394(struct108 *arg0) {
    s32 i = 0;

    while ((arg0->unk2C & (1 << i)) == 0) {
        i += 1;
    }
    arg0->unk0 = i;
}

s32 func_151253CC(struct108 *arg0) {
    f32 temp_f0;
    f32 temp_f2;

    if (arg0->unk2C & 0x40000) {
        arg0->unk84 &= ~0x4F;
        arg0->unk84 |= 0x2680;
        arg0->unk3A8 = 0.0f;
        arg0->unk5E8 = 0.0f;
        arg0->unk38C = 0.0f;
        func_15125330(arg0);
        func_1512523C(arg0);
        temp_f0 = arg0->unk37C;
        temp_f2 = D_800A3528;
        arg0->unk380 = arg0->unk37C;
        arg0->unk3A0 = (f32) (temp_f0 * temp_f2);
        arg0->unk398 = (f32) (arg0->unk388 * temp_f2);
        func_15124AB4(arg0);
        if (arg0->unk3D4->unk197 != 0) {
            func_15127EB8(arg0);
        }
        func_1512C490(arg0);
        return 1;
    }
    return 0;
}

// no idea what going on here
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_15125490.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_151254F4.s")
// NON-MATCHING: first statements in wrong order
// void func_151254F4(struct108 *arg0, s32 arg1) {
//     f32 tmp = D_800A352C;
//     arg0->unk3A0 = tmp * arg0->unk380;
//     arg0->unk398 = tmp * arg0->unk388;
//     func_15124AB4(arg0);
//     func_151239CC(arg0, 1);
//     arg0->unk3D4->unk198 = 0;
//     arg0->unk73C = 0;
//     arg0->unk3D0 = &D_800CC2D0[arg1];
//     arg0->unk670 = 0.0f;
// }

void func_15125594(struct108 *arg0) {
    f32 temp_f0;
    f32 temp_f2;

    func_1512523C(arg0);
    func_15125330(arg0);

    temp_f0 = arg0->unk37C;
    temp_f2 = arg0->unk5E8;
    arg0->unk380 = temp_f0 - temp_f2;
    if (temp_f0 < temp_f2) {
        arg0->unk380 += 360.0f;
    }
    arg0->unk3A0 = arg0->unk380 * D_800A3530;
    func_15124AB4(arg0);
}


void func_15125608(struct108 *arg0) {
    arg0->unk24C = 3.0f;
    arg0->unk250 = 2.5f;
}

// ???
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_15125628.s")

void func_15125690(struct108 *arg0, s32 arg1) {
    u8 *temp_v0 = &D_800DBFF4[arg0->unk23D];

    if (*temp_v0 < arg1) {
        *temp_v0 = arg1;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_151256BC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_15125924.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_15125A6C.s")
// NON-MATCHING: miles away
// void func_15125A6C(struct108 *arg0) {
//     f32 pad3C;
//     f32 sp38;
//     f32 pad34;
//     f32 pad30;
//     f32 sp2C;
//     f32 sp28;
//     f32 sp24;
//
//     f32 temp_f12;
//     f32 temp_f12_2;
//
//     if (arg0->unk23E == 0x2A) {
//         sp38 = arg0->unk3D0->unk40;
//         if (arg0->unk2C != 0x40000) {
//             func_1512D560(arg0, 5, 0);
//             arg0->unk7E4 = 1U;
//         }
//         D_800DBFF4[0] = 3;
//         D_800C3600->unk0 = 1;
//         D_800C3600->unk4 = 0;
//         temp_f12 = sp38 * D_800A3550;
//         sp28 = temp_f12;
//         sp2C = func_15047D60(temp_f12);
//         temp_f12_2 = (sp38 - 90.0f) * D_800A3554;
//         sp24 = temp_f12_2;
//         D_800C3600->unk14 = (func_15047D60(temp_f12_2) * 46.0f) + (arg0->unk3D0->unk14 + (138.0f * sp2C));
//         D_800C3600->unk18 = arg0->unk3D0->unk18 + 96.0f;
//         sp2C = func_15047C00(temp_f12);
//         D_800C3600->unk1C = (func_15047C00(temp_f12_2) * 46.0f) + (arg0->unk3D0->unk1C + (138.0f * sp2C));
//         D_800C3600->unk20 = 0.0f;
//         D_800C3600->unk24 = -180.0f;
//         D_800C3600->unk8 = 0.0f;
//         D_800C3600->unk28 = sp38 - 180.0f;
//         D_800C3600->unk5C = 0;
//         func_1512D560(arg0, 7, D_800C3600);
//         return;
//     }
//
//     if (arg0->unk7E4 != 0) {
//         func_1512D560(arg0, 6, 0);
//         arg0->unk7E4 = 0U;
//     }
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_15125C40.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_15125DB4.s")

void func_15126138(struct108 *arg0) {
    struct127 *temp_v0_2;
    struct108 *phi_a0;

    func_151247C0(arg0);

    temp_v0_2 = arg0->unk3D0;

    if (((temp_v0_2->unk14 != arg0->unk2B0) ||
         (temp_v0_2->unk18 != arg0->unk2B4) ||
         (temp_v0_2->unk1C != arg0->unk2B8)) && ((arg0->unk2C & ~0x100) != 0)) {
        arg0->unk298 = 1;
        arg0->unk7E6 = 60;
        arg0->unk8ED = 0;
    } else {
        arg0->unk298 = 0;
    }

    if (arg0->unk84 & 0x200000) {
        temp_v0_2 = arg0->unk3D0; // again?!
        if (temp_v0_2->unk0 != 0x1E) {
            if (temp_v0_2->unk102 == 0) {
                if ((*(arg0->unk36C) & 0xF) != 0) {
                    if ((arg0->unk2C & 0x40) == 0) {
                        func_151220D0(arg0);
                    }
                }
            }
        }
    }
    func_15124C38(arg0, 0);
}


#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_1512623C.s")
// ooh mama
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_15126378.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_15127520.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_151277B0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_151279A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_15127EB8.s")
// NON-MATCHING: not too far away
// void func_15127EB8(struct108 *arg0) {
//     struct127 *phi_v0;
//
//     func_151239CC(arg0, 1);
//     arg0->unk3D4->unk197 = (u8)0;
//     func_151C9ED4(arg0);
//     arg0->unk19C = 0.0f;
//     arg0->unk1A0 = 0.0f;
//     arg0->unk1A4 = 0.0f;
//     arg0->unk1A8 = 0.0f;
//     func_1510B32C(arg0->unk23D, 0.0f, 0.0f, 1.0f);
//     D_800BE628[arg0->unk23D].unk84 = 1.0f;
//     func_150627D4(arg0->unk3D0);
//     D_800DBFF4[arg0->unk23D] = (u8)2;
//
//     phi_v0 = &arg0->unk3D0;
//     if (phi_v0->unk65 != 0) {
//         phi_v0 = &D_800CC2D0[phi_v0->unk65];
//     }
//
//     phi_v0->unk2FC &= ~(1 << arg0->unk23D);
//     phi_v0->unk74 &= ~(1 << arg0->unk23D);
//     arg0->unk23C = (u8)1;
// }

void func_15127FEC(struct108 *arg0, s32 arg1, s32 arg2) {
    arg0->unk7F4 = 1;
    arg0->unk7F8 = arg0->unk2A4;
    arg0->unk7FC = arg0->unk2A8;
    arg0->unk800 = *(f32*)&arg0->unk2AC;
    func_1512A390();
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_15128030.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_151283B8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_151284C4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_15128540.s")

void func_15128680(s32 arg0) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_1512868C.s")
// NON-MATCHING: JUSTREG: using a2 not t0
// void func_1512868C(struct108 *arg0) {
//     struct127 *temp_v1_2;
//     struct126 *temp_t0;
//     u8 idx;
//     s32 i;
//
//     for (i = 0; i < 21; i++)
//     {
//         arg0->unk20C[i] = 0;
//     }
//
//     arg0->unk2C = 1;
//     arg0->unkDC = 0;
//     arg0->unk134 = 1;
//     arg0->unk84 = 14;
//     arg0->unk1B4 = 3;
//     func_15124B18(arg0);
//     idx = arg0->unk23D;
//     arg0->unk3D0 = temp_v1_2 = &D_800CC2D0[idx];
//     arg0->unk368 = arg0->unk3CC = idx;
//     temp_t0 = temp_v1_2->unk31C;
//     arg0->unk190 = 0.0f;
//     arg0->unk198 = 0.0f;
//     arg0->unk18C = 0.0f;
//     arg0->unk194 = 0.0f;
//     arg0->unk674 = 1.0f;
//     arg0->unk3D4 = temp_t0;
//     temp_t0->unk198 = 0;
//     arg0->unk73C = 0;
// }

void func_15128774(struct108 *arg0, struct127 *arg1) {
    arg0->unk35C = arg1->unk180;
    arg0->unk304 = arg0->unk2F8 = arg1->unk14;
    arg0->unk308 = arg0->unk2FC = arg1->unk18;
    arg0->unk30C = arg0->unk300 = arg1->unk1C;
    arg0->unk37C = arg0->unk3D0->unk40 - 180.0f;
    arg0->unk3D4->unk18C = D_800A35AC;
    arg0->unk23C = 1;
}
