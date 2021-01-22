#include <ultra64.h>
#include "functions.h"
#include "variables.h"

s32 func_151149AC(u32);

struct225 *func_151602C0(struct231 *arg0, struct00 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, u8 arg6, u8 arg7, s32 arg8, u8 arg9, s32 argA);
struct225 *func_1516037C(struct231 *src, struct226 *arg1, s32 arg2, u8 arg3, s32 arg4);
void func_151603FC(struct225 *arg0);
s32  func_15160600(struct225 *arg0);
s32  func_1516065C(struct225 *arg0);
s32  func_15160684(struct225 *arg0);
s32  func_151607A4(struct225 *arg0);
void func_15160954(f32 *arg0, f32 *arg1, f32 *arg2, f32 *arg3, struct225 *arg4);
s32  func_15161238(struct127 *arg0, struct127 *arg1);
struct225 *func_1516127C(s32 arg0, u8 arg1, s32 arg2);
struct225 *func_15161334(s32 arg0, u8 arg1, s32 arg2);
struct225 *func_15161408(s32 arg0, u8 arg1, s32 arg2);
struct225 *func_15161494(s32 arg0, u8 arg1, s32 arg2);
struct225 *func_15161540(s32 arg0, u8 arg1, s32 arg2);
struct225 *func_151615F8(s32 arg0, u8 arg1, u8 arg2, u8 arg3, u8 arg4, s32 arg5);
void func_151616D0(u8 arg0, u8 arg1, s32 arg2);
void func_15161714(struct225 *arg0);
void func_15161740(struct225 *arg0);
void func_1516176C(struct225 *arg0);
void func_15161798(struct225 *arg0);
void func_151617C4(struct225 *arg0);
void func_151617E4(struct225 *arg0);
void func_15161804(struct225 *arg0);
void func_15161860(struct225 *arg0);
struct225 *func_151619A0(s32 arg0, s16 arg1, u8 arg2, s32 arg3);
s32  func_15161A68(struct225 *arg0);
struct225 *func_15161E24(struct127 *arg0, u8 arg1, u8 arg2, s16 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, u8 arg8, s32 arg9);
void func_15161F2C(struct225 *arg0);
struct225 *func_15162034(s32 arg0, u8 arg1, s32 arg2);
void func_15162110(s32 arg0);
struct225 *func_15162740(s32 arg0, u8 arg1, u8 arg2, u8 arg3, s16 arg4, s8 arg5, u8 arg6, s32 arg7);
struct225 *func_1516284C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 arg5, u8 arg6, s32 arg7, u8 arg8, u8 arg9, s32 argA);
void func_15162EF8(struct239 *arg0);
void func_15162F50(struct239 *arg0);
struct225 *func_15162FAC(s32 arg0, u8 arg1, u8 arg2, u8 arg3, s16 arg4, s8 arg5, u8 arg6, s32 arg7);
struct225 *func_15163414(s32 arg0, f32* arg1, f32* arg2, f32* arg3, s8 arg4, u8 arg5, u8 arg6, u8 arg7, u8 arg8, u8 arg9, u8 argA, u8 argB, s32 argC, u8 argD, s32 argE);
struct225 *func_15163604(s32 arg0, u8 arg1, u8 arg2, s16 arg3, u8 arg4, s32 arg5, u8 arg6, s32 arg7);
s32  func_15163704(struct225 *arg0);
void func_1516381C(s32 arg0, u8 arg1, u8 arg2, s32 arg3);
void func_1516387C(s32 arg0, u8 arg1, s8 arg2, s16 arg3, u8 arg4, s32 arg5, u8 arg6, s32 arg7);
s32  func_151639D0(struct225 *arg0, s32 arg1, u8 arg2);
void func_15163A18(struct225 *arg0, s32 arg1, u8 arg2);
struct225 *func_15163A60(u8 arg0, u8 arg1, s32 arg2);
s32  func_15163B98(struct230 *arg0);
struct225 *func_15163BE8(s32 arg0, u8 arg1, s32 arg2);
s32  func_15163CD0(struct225 *arg0);
void func_15163CF8(struct227 *arg0, struct225 *arg1);
void func_15163DEC(struct225 *arg0, struct228 *arg1);
s32  func_15163F50(struct225 *arg0, struct225 *arg1);
struct225 *func_15164208(s32 arg0, u8 arg1, u8 arg2, s32 arg3);
s32  func_1516429C(struct237 *arg0);
void func_151643A8(struct225 *arg0, s32 arg1, u8 arg2);
s32  func_151643F8(struct225 *arg0);
void func_151644F4(struct242 *arg0, struct17 *arg1, s32 arg2, f32 arg3, f32 arg4);
s32  func_151644A8(struct242 *arg0);

struct225 *func_151602C0(struct231 *arg0, struct00 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, u8 arg6, u8 arg7, s32 arg8, u8 arg9, s32 argA) {
    struct225 *ret;
    struct226 *sp30;

    ret = NULL;
    sp30 = func_1515D5F8(arg1->unk0, arg1->unk4, arg1->unk8, arg2, arg3, arg4, arg5, arg6, arg7, 0);
    if (sp30 != 0) {
        ret = func_1516037C(arg0, sp30, arg8, arg9, argA);
        if (ret != 0) {
            ret->unkE |= 2;
        } else {
            func_1515F10C(sp30);
        }
    }
    return ret;
}

struct225 *func_1516037C(struct231 *src, struct226 *arg1, s32 arg2, u8 arg3, s32 arg4) {
    struct225 *ret = func_15167A68(0x35, arg4, arg2 + 0x18, 1, arg3, 1);
    if (ret == 0) {
        return NULL;
    }
    memcpy(&ret->unkE, src, 6);
    ret->unk14 = arg1;
    return ret;
}

void func_151603FC(struct225 *arg0) {
    s32 pad;
    u8 ret = 0;

    if ((arg0->unkE & 1) != 0) {
        arg0->unk10 -= D_800BE9E4;
        if (arg0->unk10 < 0) {
            ret = 1;
        }
    }
    if ((ret == 0) && (arg0->unkF != -1) && (D_8008B0F0[arg0->unkF]() == 0)) {
        ret = 1;
    }
    if (ret) {
        func_1516972C(arg0);
    }
}

// requires jump table
#pragma GLOBAL_ASM("asm/nonmatchings/game_18D770/func_151604A0.s")

s32 func_15160600(struct225 *arg0) {
    arg0->unk14->unk2F = func_151422DC(0, &D_800A6690, 0, 0xFF, 0xFF, &D_800A6698, 575);
    return 1;
}

s32 func_1516065C(struct225 *arg0) {
    func_15163CF8(&arg0->unk18, arg0);
    return 1;
}

s32 func_15160684(struct225 *arg0) {
    func_15163DEC(arg0, &arg0->unk18);
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_18D770/func_151606A8.s")
// NON-MATCHING: something along these lines...
// void func_150A7960(s32, f32, f32, f32, f32*, f32*, f32*);
// s32 func_151606A8(struct225 *arg0) {
//     struct227 *temp_v0;
//     struct226 *temp_v0_2;
//
//     f32 tmp[16];
//
//     f32 sp3C;
//     f32 sp38;
//     f32 sp34;
//
//     temp_v0 = arg0->unk18;
//     func_150A8050(&tmp[1], temp_v0->unk0, temp_v0->unk4, temp_v0->unk8);
//
//     temp_v0_2 = arg0->unk18;
//     tmp[13] = temp_v0_2->unk10;
//     tmp[14] = temp_v0_2->unk12;
//     tmp[15] = temp_v0_2->unk14;
//
//     func_150A7960(&tmp, D_800A66B4[0], D_800A66B4[1], D_800A66B4[2], &sp34, &sp38, &sp3C);
//     arg0->unk14->unkE = sp34;
//     arg0->unk14->unk10 = sp38;
//     arg0->unk14->unk12 = sp3C;
//     return 1;
// }

s32 func_151607A4(struct225 *arg0) {
    struct227 *temp_a1 = &arg0->unk18;
    if (arg0->unk28 != 0) {
        if (temp_a1->unkC < 0.0f) {
            temp_a1->unk4 = (temp_a1->unk4 + (temp_a1->unk8 * D_800BE9A4));
            if (temp_a1->unk0 < temp_a1->unk4) {
                temp_a1->unk4 = temp_a1->unk0;
                temp_a1->unk10 -= 1;
                if (temp_a1->unk10 != 0) {
                    func_15160954(&temp_a1->unk4, &temp_a1->unk0, &temp_a1->unk8, &temp_a1->unkC, arg0);
                }
            }
        } else {
            temp_a1->unkC -= D_800BE9A4;
        }
    } else if (func_150ADA68() < D_800A6AD4) {
        temp_a1->unk10 = (func_150ADA20() % 5U) + 1;
        func_15160954(&temp_a1->unk4, &temp_a1->unk0, &temp_a1->unk8, &temp_a1->unkC, arg0);
    }
    arg0->unk14->unk2F = arg0->unk1C;
    return 1;
}

void func_15160954(f32 *arg0, f32 *arg1, f32 *arg2, f32 *arg3, struct225 *arg4) {
    s32 pad0;
    struct17 tmp;
    s32 pad1;

    *arg0 = 0.0f;
    *arg2 = *arg1 / ((func_150ADA68() * 12.0f) + 8.0f);
    *arg3 = (func_150ADA68() * 28.0f) + 1.0f;

    tmp.unk0 = arg4->unk14->unkE;
    tmp.unk4 = arg4->unk14->unk10;
    tmp.unk8 = arg4->unk14->unk12;

    if (arg4->unk2A != 0) {
        func_151618BC(25000, 0, 0, 0, &tmp, 500, 1500);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_18D770/func_15160A58.s")
// struct225 *func_15160A58(void *arg0, u8 arg1, void *arg2, u8 arg3, s16 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s8 argB, s32 argC, u8 argD, u8 argE, s32 argF) {
//     s32 sp64;
//
//     s8 sp60;
//     s16 sp5E;
//     s8 sp5D;
//     u8 sp5C;
//     u8 sp59;
//     s8 sp58;
//     ? sp4C;
//     u8 sp49;
//     u8 sp48;
//     void *sp44;
//
//     ?32 sp40;
//     ?32 sp3C;
//     ?32 sp38;
//     struct225 *temp_v0;
//     s32 phi_v1;
//
//     if (arg0 == 0) {
//         return NULL;
//     }
//     sp5C = arg3;
//     sp5D = 5;
//     sp60 = 0x10;
//     sp5E = arg4;
//     sp44 = arg0;
//     sp49 = arg1;
//     sp48 = arg0->unk3B;
//     sp4C.unk0 = (s32) arg2->unk0;
//     sp4C.unk4 = (s32) arg2->unk4;
//     sp4C.unk8 = (s32) arg2->unk8;
//     sp38 = 0;
//     sp3C = 0;
//     sp40 = 0;
//     sp58 = argB;
//     sp59 = argD;
//     temp_v0 = func_151602C0(&sp5C, &sp38, arg5, arg6, arg7, arg8, 0xFF, 0, argC + 0x18, argE, argF);
//     if (temp_v0 != NULL) {
//         memcpy(&temp_v0->unk18, &sp44, 0x18);
//     }
//     return temp_v0;
// }

// ??
#pragma GLOBAL_ASM("asm/nonmatchings/game_18D770/func_15160B74.s")

// another struct definition
#pragma GLOBAL_ASM("asm/nonmatchings/game_18D770/func_15160CDC.s")

// similar to func_15160B74
#pragma GLOBAL_ASM("asm/nonmatchings/game_18D770/func_15160E30.s")

s32 func_15161238(struct127 *arg0, struct127 *arg1) {
    if (arg0->interaction_state == 0) {
        return 0;
    }
    if (arg0->id == 0xFF) {
        return 0;
    }
    if (arg0 == arg1) {
        return 0;
    }
    return 1;
}

struct225 *func_1516127C(s32 arg0, u8 arg1, s32 arg2) {
    struct225 *temp_v0;
    struct231 tmp0;
    f32 src[4];

    src[0] = 50.0f;
    src[1] = 40.0f;
    src[2] = func_150ADA68() * D_800A6AD8;

    tmp0.unk0 = 0;
    tmp0.unk1 = 1;
    tmp0.unk2 = 300;
    tmp0.unk4 = 5;

    src[3] = D_800A6ADC;

    temp_v0 = func_1516037C(&tmp0, arg0, 16, arg1, arg2);
    if (temp_v0 != 0) {
        memcpy(&temp_v0->unk18, &src, 16);
    }
    return temp_v0;
}

struct225 *func_15161334(s32 arg0, u8 arg1, s32 arg2) {
    struct225 *temp_v0;
    struct231 tmp0;
    f32 tmp1[8];

    tmp1[1] = 1.0f;
    tmp1[3] = 1.0f;

    tmp0.unk0 = 0;
    tmp0.unk1 = 2;
    tmp0.unk2 = 300;
    tmp0.unk4 = 6;

    tmp1[0] = 20.0f;
    tmp1[2] = 50.0f;
    tmp1[4] = 0.0f;
    tmp1[5] = 10.0f;
    tmp1[6] = D_800A6AE0;
    tmp1[7] = 127.0f;

    temp_v0 = func_1516037C(&tmp0, arg0, 32, arg1, arg2);
    if (temp_v0 != 0) {
        memcpy(&temp_v0->unk18, &tmp1, 32);
    }
    return temp_v0;
}

struct225 *func_15161408(s32 arg0, u8 arg1, s32 arg2) {
    struct225 *temp_v0;
    struct231 tmp0;
    s32 sp20;

    sp20 = func_151149AC(249); // what does this return?

    tmp0.unk0 = 0;
    tmp0.unk1 = 3;
    tmp0.unk2 = 300;
    tmp0.unk4 = 8;

    temp_v0 = func_1516037C(&tmp0, arg0, 4, arg1, arg2);

    if (temp_v0 != 0) {
        memcpy(&temp_v0->unk18, &sp20, 4);
    }
    return temp_v0;
}

struct225 *func_15161494(s32 arg0, u8 arg1, s32 arg2) {
    struct225 *temp_v0;
    struct231 tmp0;
    f32 tmp1[4];

    tmp0.unk0 = 0;
    tmp0.unk1 = 1;
    tmp0.unk2 = 300;
    tmp0.unk4 = 5;

    tmp1[0] = 127.0f;
    tmp1[1] = 100.0f;
    tmp1[2] = 0.0f;
    tmp1[3] = D_800A6AE4;

    temp_v0 = func_1516037C(&tmp0, arg0, 16, arg1, arg2);
    if (temp_v0 != 0) {
        memcpy(&temp_v0->unk18, &tmp1, 16);
    }
    return temp_v0;
}

struct225 *func_15161540(s32 arg0, u8 arg1, s32 arg2) {
    struct225 *temp_v0;
    struct231 tmp0;
    f32 tmp1[4];

    tmp1[0] = 28.0f;
    tmp1[1] = 27.0f;
    tmp1[2] = func_150ADA68() * D_800A6AE8;
    tmp1[3] = D_800A6AEC;

    tmp0.unk0 = 0;
    tmp0.unk1 = 1;
    tmp0.unk2 = 300;
    tmp0.unk4 = 5;

    temp_v0 = func_1516037C(&tmp0, arg0, 16, arg1, arg2);
    if (temp_v0 != 0) {
        memcpy(&temp_v0->unk18, &tmp1, 16);
    }
    return temp_v0;
}

struct225 *func_151615F8(s32 arg0, u8 arg1, u8 arg2, u8 arg3, u8 arg4, s32 arg5) {
    struct225 *temp_v0;
    struct231 tmp0;
    struct232 tmp1;
    f32 tmp;

    if (arg2 < 0) {
        return 0;
    }
    if (arg2 >= 9) {
        return 0;
    }

    tmp = D_800A66C0[arg2];
    tmp1.unk4 = tmp;
    tmp1.unk8 = 0.0f;
    tmp1.unkC = 0.0f;
    tmp1.unk0 = tmp;
    tmp1.unk10 = 0;
    tmp1.unk12 = arg1;

    tmp0.unk0 = 0;
    tmp0.unk1 = 4;
    tmp0.unk2 = 300;

    tmp0.unk4 = arg3;

    temp_v0 = func_1516037C(&tmp0, arg0, 20, arg4, arg5);
    if (temp_v0 != 0) {
        memcpy(&temp_v0->unk18, &tmp1, 20);
    }
    return temp_v0;
}

void func_151616D0(u8 arg0, u8 arg1, s32 arg2) {
    struct234 tmp;

    tmp.unk0 = arg0;
    tmp.unk4 = arg2;

    func_1516944C(0x35, &tmp, arg1);
}

void func_15161714(struct225 *arg0) {
    func_1514EDF0(arg0, arg0->unk18);
    func_151617C4(arg0);
}

void func_15161740(struct225 *arg0) {
    func_1514EDF0(arg0, arg0->unk18);
    func_151617E4(arg0);
}

void func_1516176C(struct225 *arg0) {
    func_1514EDF0(arg0, arg0->unk18);
    func_151617C4(arg0);
}

void func_15161798(struct225 *arg0) {
    func_1514EDF0(arg0, arg0->unk18);
    func_151617E4(arg0);
}

void func_151617C4(struct225 *arg0) {
    func_15169804(arg0);
}

void func_151617E4(struct225 *arg0) {
    func_15169824(arg0);
}

void func_15161804(struct225 *arg0) {
    if ((arg0->unkE & 2) != 0) {
        func_1515F10C(arg0->unk14, arg0);
    }
    D_8008B208[arg0->unk12](arg0);
}

void func_15161860(struct225 *arg0) {
    if ((arg0->unkE & 2) != 0) {
        func_1515F10C(arg0->unk14, arg0);
    }
    D_8008B2B0[arg0->unk12](arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_18D770/func_151618BC.s")
// void func_151618BC(u16 arg0, s16 arg1, u8 arg2, s32 arg3, void *arg4, s16 arg5, s16 arg6) {
//     ? sp38;
//     ? *temp_t6;
//     void *temp_t7;
//     void *phi_t7;
//     ? *phi_t6;
//
//     phi_t7 = &D_800A66E4;
//     phi_t6 = &sp38;
// loop_1:
//     temp_t7 = phi_t7 + 0xC;
//     temp_t6 = phi_t6 + 0xC;
//     temp_t6->unk-C = (s32) *phi_t7;
//     temp_t6->unk-8 = (s32) temp_t7->unk-8;
//     temp_t6->unk-4 = (s32) temp_t7->unk-4;
//     phi_t7 = temp_t7;
//     phi_t6 = temp_t6;
//     if (temp_t7 != (&D_800A66E4 + 0x24)) {
//         goto loop_1;
//     }
//     temp_t6->unk0 = (s32) temp_t7->unk0;
//     func_10010F88((sp + ((func_150ADA20() % 0xAU) * 4))->unk38, arg0, arg1, arg2, arg3, (s32) arg4->unk0, (s32) arg4->unk4, (s32) arg4->unk8, (?32) arg5, (?32) arg6);
// }

struct225 *func_151619A0(s32 arg0, s16 arg1, u8 arg2, s32 arg3) {
    struct225 *temp_v0;
    struct231 tmp0;
    s32 tmp1[4];

    tmp1[3] = arg0;

    tmp0.unk0 = 3;
    tmp0.unk1 = 9;
    tmp0.unk2 = arg1;
    tmp0.unk4 = 20;

    tmp1[0] = 0;
    tmp1[1] = 0;
    tmp1[2] = 0;

    temp_v0 = func_151602C0(&tmp0, &tmp1, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0, 4, arg2, arg3);
    if (temp_v0 != 0) {
        memcpy(&temp_v0->unk18, &tmp1[3], 4);
    }
    return temp_v0;
}

s32 func_15161A68(struct225 *arg0) {
    struct233 **tmp = &D_800C3958; // fakematch?

    if (D_800C35EA == 1) {
        f32 phi_f0;
        f32 phi_f2;
        struct233 *temp_v0 = *tmp + (s32) arg0->unk18;

        arg0->unk14->unkE = temp_v0->unk0;
        arg0->unk14->unk10 = temp_v0->unk4;
        arg0->unk14->unk12 = temp_v0->unk8;

        if (temp_v0->unk24 < 0.0f) {
            phi_f0 = 0.0f;
        } else {
            if (temp_v0->unk24 > 255.0f) {
                phi_f2 = 255.0f;
            } else {
                phi_f2 = temp_v0->unk24;
            }
            phi_f0 = phi_f2;
        }
        temp_v0->unk24 = phi_f0;
        arg0->unk14->unk5 = phi_f0;
        if (temp_v0->unk28 < 0.0f) {
            phi_f0 = 0.0f;
        } else {
            if (temp_v0->unk28 > 255.0f) {
                phi_f2 = 255.0f;
            } else {
                phi_f2 = temp_v0->unk28;
            }
            phi_f0 = phi_f2;
        }
        temp_v0->unk28 = phi_f0;
        arg0->unk14->unk6 = phi_f0;
        if (temp_v0->unk2C < 0.0f) {
            phi_f0 = 0.0f;
        } else {
            if (temp_v0->unk2C > 255.0f) {
                phi_f2 = 255.0f;
            } else {
                phi_f2 = temp_v0->unk2C;
            }
            phi_f0 = phi_f2;
        }
        temp_v0->unk2C = phi_f0;
        arg0->unk14->unk7 = phi_f0;

        if (temp_v0->unk18 < 0.0f) {
            phi_f0 = 0.0f;
        } else {
            if (temp_v0->unk18 > 255.0f) {
                phi_f2 = 255.0f;
            } else {
                phi_f2 = temp_v0->unk18;
            }
            phi_f0 = phi_f2;
        }
        temp_v0->unk18 = phi_f0;
        arg0->unk14->unk2F = phi_f0;

    }
    return 1;
}

struct225 *func_15161E24(struct127 *arg0, u8 arg1, u8 arg2, s16 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, u8 arg8, s32 arg9) {
    struct225 *temp_v0;
    struct231 tmp0;
    struct244 tmp2;
    s32 tmp1[3];

    if (arg0 == NULL) {
        return 0;
    }

    tmp0.unk0 = arg2;
    tmp0.unk1 = 0xA;
    tmp0.unk2 = arg3;
    tmp0.unk4 = 0x15;

    tmp2.unk0 = arg0;
    tmp2.unk4 = arg0->unique_id;
    tmp2.unk5 = arg1;

    tmp1[0] = (s32) arg0->x_position;
    tmp1[1] = (s32) arg0->y_position;
    tmp1[2] = (s32) arg0->z_position;

    temp_v0 = func_151602C0(&tmp0, &tmp1, arg4, arg5, arg6, arg7, 0xFF, 0, 8, arg8, arg9);
    if (temp_v0 != 0) {
        memcpy(&temp_v0->unk18, &tmp2, 8);
    }
    return temp_v0;
}

void func_15161F2C(struct225 *arg0) {
    func_15163F50(arg0, &arg0->unk18);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_18D770/func_15161F4C.s")

struct225 *func_15162034(s32 arg0, u8 arg1, s32 arg2) {
    struct225 *temp_v0;
    struct231 tmp0;
    f32 src[8];

    tmp0.unk0 = 0;
    tmp0.unk1 = 2;
    tmp0.unk2 = 0x12C;
    tmp0.unk4 = 6;

    src[1] = 15.0f;
    src[0] = 22.0f;

    src[2] = 45.0f;
    src[3] = 1.0f;
    src[4] = 0.0f;
    src[5] = 10.0f;
    src[6] = D_800A6AF0;
    src[7] = 127.0f;

    temp_v0 = func_1516037C(&tmp0, arg0, 32, arg1, arg2);
    if (temp_v0 != 0) {
        memcpy(&temp_v0->unk18, &src, 32);
    }
    return temp_v0;
}

void func_15162110(s32 arg0) {
    struct236 *temp_v0;
    f32 src[8];

    src[1] = 15.0f;
    src[2] = 0.0f;
    src[4] = 15.0f;
    src[5] = 0.0f;
    src[6] = 0.0f;
    src[0] = 42.5f;
    src[3] = 37.5f;
    src[7] = D_800A6AF4;

    temp_v0 = func_15149130(300, -1, 30, -1, 0, 0, 32, 0xFF, 1);
    if (temp_v0 != 0) {
        memcpy(&temp_v0->unk28, &src, 32);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_18D770/func_151621B8.s")
// NON-MATCHING: not quite right here
// struct235 *func_151621B8(struct236 *arg0) {
//     struct235 *temp_v0;
//     f32 temp_f0;
//     u8 temp_a0;
//     u8 temp_a1;
//     u8 temp_a2;
//
//     temp_v0 = &arg0->unk28;
//     temp_f0 = func_15047D60(temp_v0->unk18);
//
//     temp_a0 = temp_v0->unk0 + (temp_f0 * temp_v0->unkC);
//     temp_a1 = temp_v0->unk4 + (temp_f0 * temp_v0->unk10);
//     temp_a2 = temp_v0->unk8 + (temp_f0 * temp_v0->unk14);
//
//
//     func_1515D4D4(temp_a0, temp_a1, temp_a2, 0);
//     temp_v0->unk18 += temp_v0->unk1C * D_800BE9A4;
//     temp_v0->unk18 = func_15144B68(temp_v0->unk18);
//
//     return temp_v0;
// }

// help.
#pragma GLOBAL_ASM("asm/nonmatchings/game_18D770/func_151623F4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_18D770/func_15162510.s")
// s32 func_15162510(struct237 *arg0) {
//     struct235 *temp_v1;
//     f32 temp_f0;
//
//     temp_f0 = func_15047D60(arg0->unk18.unk18);
//     temp_v1 = &arg0->unk18;
//
//     arg0->unk14->unk5 = temp_v1->unk0 + (temp_f0 * arg0->unk0[2]);
//     arg0->unk14->unk6 = temp_v1->unk4 + (temp_f0 * temp_v1->unk10);
//     arg0->unk14->unk7 = temp_v1->unk8 + (temp_f0 * temp_v1->unk14);
//
//     temp_v1->unk18 += temp_v1->unk1C * D_800BE9A4;
//     temp_v1->unk18 = func_15144B68(temp_v1->unk18);
//     return 1;
// }

struct225 *func_15162740(s32 arg0, u8 arg1, u8 arg2, u8 arg3, s16 arg4, s8 arg5, u8 arg6, s32 arg7) {
    struct225 *temp_v0;
    struct231 tmp0;
    f32 src[8];

    if (arg1 >= 24) {
        return 0;
    }

    src[0] = D_800A67C0[arg1];
    src[1] = D_800A6760[arg1];
    src[2] = D_800A6820[arg1];
    src[3] = 1.0f;
    src[4] = 0.0f;
    src[5] = 10.0f;
    src[6] = D_800A6AF8;
    src[7] = 127.0f;

    tmp0.unk0 = arg3;
    tmp0.unk1 = arg5;
    tmp0.unk2 = arg4;
    tmp0.unk4 = arg2;

    temp_v0 = func_1516037C(&tmp0, arg0, 32, arg6, arg7);
    if (temp_v0 != 0) {
        memcpy(&temp_v0->unk18, &src, 32);
    }
    return temp_v0;
}

struct225 *func_1516284C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 arg5, u8 arg6, s32 arg7, u8 arg8, u8 arg9, s32 argA) {
    struct225 *temp_v0;
    f32 src[8];

    if (arg8 >= 0x18) {
        return 0;
    }

    src[0] = D_800A67C0[arg8];
    src[1] = D_800A6760[arg8];
    src[2] = D_800A6820[arg8];
    src[3] = 1.0f;
    src[4] = 0.0f;
    src[5] = 10.0f;
    src[6] = D_800A6AFC;
    src[7] = 127.0f;
    temp_v0 = func_151602C0(arg0, arg1, 0, arg2, arg3, arg4, arg5, arg6, arg7 + 0x20, arg9, argA);
    if (temp_v0 != 0) {
        memcpy(&temp_v0->unk18, &src, 0x20);
    }
    return temp_v0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_18D770/func_1516295C.s")
// s32 func_1516295C(s32 arg0, u8 arg1, u8 arg2, u8 arg3, s16 arg4, s8 arg5, s8 arg6, s8 arg7, s8 arg8, s8 arg9, s32 argA, u8 argB, s32 argC) {
//     struct225 *temp_v0;
//     struct231 tmp0;
//     struct238 src;
//
//     f32 temp_f0;
//     f32 temp_f12;
//     f32 temp_f16;
//     f32 temp_f18;
//     f32 temp_f2;
//     f32 temp_f8;
//
//     if (arg1 >= 5) {
//         return 0;
//     }
//
//     temp_f2 = D_800A6880[arg1];
//     temp_f12 = D_800A6894[arg1];
//     temp_f8 = D_800A68A8[arg1];
//     temp_f0 = D_800A68BC[arg1];
//     temp_f18 = D_800A68D0[arg1];
//     temp_f16 = D_800A68E4[arg1] ;
//
//     src.unk0 = temp_f2; // sp30
//     src.unk4 = temp_f12;
//     src.unk8 = temp_f2 - temp_f12;
//     src.unkC = temp_f8;
//     src.unk10 = temp_f0;
//     src.unk14 = temp_f18 + temp_f0;
//     src.unk18 = temp_f18 + temp_f0 + temp_f16;
//     src.unk1C = temp_f18 + temp_f0 + temp_f16 + temp_f18;
//
//     src.unk25 = arg6;
//     src.unk26 = arg7;
//     src.unk27 = arg8;
//     src.unk28 = arg9;
//
//     if (src.unkC < temp_f0) {
//         src.unk24 = 0;
//     } else if (src.unkC < src.unk14) {
//         src.unk24 = 1;
//     } else if (src.unkC < src.unk18) {
//         src.unk24 = 2;
//     } else if (src.unkC < src.unk1C) {
//         src.unk24 = 3;
//     } else {
//         src.unk24 = 4;
//     }
//
//     tmp0.unk0 = arg3;
//     tmp0.unk1 = arg5;
//     tmp0.unk2 = arg4;
//     tmp0.unk4 = arg2;
//
//     src.unk20 = 1.0f / temp_f18;
//
//     temp_v0 = func_1516037C(&tmp0, arg0, argA + 0x30, argB, argC);
//     if (temp_v0 != 0) {
//         memcpy(&temp_v0->unk18, &src, 0x30);
//     }
//     return temp_v0;
// }

// a biggun'
#pragma GLOBAL_ASM("asm/nonmatchings/game_18D770/func_15162B28.s")

void func_15162EF8(struct239 *arg0) {
    s8 sp1C[9]; // FIXME: what size should this be?
    struct240 *temp_v0;

    temp_v0 = func_151149AC(arg0->unk48);
    if (temp_v0 != NULL) {
        temp_v0->unk7C |= 1;
    }
    sp1C[0] = arg0->unk12 - 0x15;
    func_151403A8(&sp1C, 0x24);
}

void func_15162F50(struct239 *arg0) {
    s8 sp1C[9]; // FIXME: what size should this be?
    struct240 *temp_v0;

    temp_v0 = func_151149AC(arg0->unk48);
    if (temp_v0 != NULL) {
        temp_v0->unk7C &= ~1;
    }
    // temp_a0 = &sp1C;
    sp1C[0] = arg0->unk12 - 0x15;
    func_151403A8(&sp1C, 37);
}

struct225 *func_15162FAC(s32 arg0, u8 arg1, u8 arg2, u8 arg3, s16 arg4, s8 arg5, u8 arg6, s32 arg7) {
    struct225 *temp_v0;
    struct231 tmp0;
    struct241 src;

    if (arg1 >= 3) {
        return NULL;
    }

    src.unk0 = 0.0f;
    src.unk4 = D_800A68F8[arg1];
    src.unk8 = 0.0f;
    src.unk14 = 0;
    src.unk20 = 0.0f;
    src.unkC = D_800A6904[arg1];
    src.unk10 = D_800A6910[arg1];
    src.unk24 = D_800A6934[arg1];
    src.unk28 = D_800A6940[arg1];
    src.unk2C = D_800A694C[arg1];
    src.unk18 = D_800A691C[arg1];
    src.unk1C = D_800A6928[arg1];
    src.unk30 = D_800A6958[arg1];

    tmp0.unk0 = arg3;
    tmp0.unk1 = arg5;
    tmp0.unk2 = arg4;
    tmp0.unk4 = arg2;

    temp_v0 = func_1516037C(&tmp0, arg0, 0x34, arg6, arg7);
    if (temp_v0 != 0) {
        memcpy(&temp_v0->unk18, &src, 0x34);
    }
    return temp_v0;
}

// big one
#pragma GLOBAL_ASM("asm/nonmatchings/game_18D770/func_151630F4.s")

struct225 *func_15163414(s32 arg0, f32* arg1, f32* arg2, f32* arg3, s8 arg4, u8 arg5, u8 arg6, u8 arg7, u8 arg8, u8 arg9, u8 argA, u8 argB, s32 argC, u8 argD, s32 argE) {
    struct225 *temp_v0;
    struct245 tmp0;
    s32 tmp1[3];

    tmp0.unk0 = arg1;
    tmp0.unk4 = arg2;
    tmp0.unk8 = arg3;
    tmp0.unkC = arg4;
    tmp0.unkD = arg5;

    tmp1[0] = *arg1;
    tmp1[1] = *arg2;
    tmp1[2] = *arg3;

    temp_v0 = func_151602C0(arg0, &tmp1, arg6, arg7, arg8, arg9, argA, argB, argC + 0x10, argD, argE);
    if (temp_v0 != 0) {
        memcpy(&temp_v0->unk18, &tmp0, 16);
    }
    return temp_v0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_18D770/func_15163504.s")
// NON-MATCHING: something is missing..
// s32 func_15163504(struct225 *arg0) {
//     s32 ret = 1;
//     arg0->unk14->unkE = arg0->unk18->unk0;
//     arg0->unk14->unk10 = arg0->unk18->unk4;
//     arg0->unk14->unk12 = arg0->unk18->unk8;
//     if (arg0->unk24 != -1) {
//         ret = D_8008B36C[arg0->unk24]();
//     }
//
//     return ret;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/game_18D770/func_151635A8.s")
// NON-MATCHING: similar issue to func_15163504
// void func_151635A8(struct225 *arg0, s32 arg1, u8 arg2) {
//     s32 (*func)(s32) = D_8008B370[arg0->unk25];
//     if (func != NULL) {
//         func(arg2);
//     }
// }

struct225 *func_15163604(s32 arg0, u8 arg1, u8 arg2, s16 arg3, u8 arg4, s32 arg5, u8 arg6, s32 arg7) {
    struct225 *temp_v0;
    struct231 tmp0;
    f32 src[4];

    if (arg1 < 0) {
        return 0;
    }
    if (arg1 >= 14) {
        return 0;
    }

    src[0] = D_800A6964[arg1];
    src[1] = D_800A699C[arg1];
    src[2] = func_150ADA68() * D_800A6B00;
    src[3] = D_800A69D4[arg1];

    tmp0.unk0 = arg4;
    tmp0.unk1 = 1;
    tmp0.unk2 = arg3;
    tmp0.unk4 = arg2;

    temp_v0 = func_1516037C(&tmp0, arg0, 0x10, arg6, arg7);
    if (temp_v0 != 0) {
        memcpy(&temp_v0->unk18, &src, 0x10);
    }
    return temp_v0;
}

s32 func_15163704(struct225 *arg0) {
    struct227 *temp_v0;
    f32 tmp;
    s32 pad1;

    temp_v0 = &arg0->unk18;
    tmp = func_15047D60(temp_v0->unk8);
    arg0->unk14->unk2F = temp_v0->unk0 + (temp_v0->unk4 * tmp);

    temp_v0->unk8 += temp_v0->unkC * D_800BE9A4;
    temp_v0->unk8 = func_15144B68(temp_v0->unk8);

    if (temp_v0->unk8 > D_800A6B04) {
        return 0;
    }
    return 1;
}

void func_1516381C(s32 arg0, u8 arg1, u8 arg2, s32 arg3) {
    struct231 tmp;
    tmp.unk0 = 0;
    tmp.unk1 = -1;
    tmp.unk2 = 300;
    tmp.unk4 = arg1;
    func_1516037C(&tmp, arg0, 0, arg2, arg3);
}

void func_1516387C(s32 arg0, u8 arg1, s8 arg2, s16 arg3, u8 arg4, s32 arg5, u8 arg6, s32 arg7) {
    struct231 tmp;
    tmp.unk0 = arg1;
    tmp.unk1 = arg2;
    tmp.unk2 = arg3;
    tmp.unk4 = arg4;

    func_1516037C(&tmp, arg0, arg5, arg6, arg7);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_18D770/func_151638E0.s")
// NON-MATCHING: struct isnt quite right..
// s32 func_151638E0(struct225 *arg0) {
//     struct227 *temp_v1;
//     f32 sp20[3];
//     f32 sp1C;
//
//     temp_v1 = &arg0->unk18;
//     func_15187FC0(arg0->unk18, &sp20); // missing a lw here
//     func_15188010(temp_v1, &sp1C);
//     arg0->unk14->unk2F = (temp_v1->unk4 + (temp_v1->unk8 * sp1C));
//     return 1;
// }

s32 func_151639D0(struct225 *arg0, s32 arg1, u8 arg2) {
    if (arg2 == 0x27) {
        arg0->unk14->unk9 = 1;
    } else if (arg2 == 0x28) {
        arg0->unk14->unk9 = 0;
    }
}

void func_15163A18(struct225 *arg0, s32 arg1, u8 arg2) {
    if (arg2 == 0x27) {
        arg0->unk14->unk9 = 0;
    } else if (arg2 == 0x28) {
        arg0->unk14->unk9 = 1;
    }
}

struct225 *func_15163A60(u8 arg0, u8 arg1, s32 arg2) {
    struct225 *temp_v0_2;
    struct231 tmp0;
    f32 tmp1[4];
    struct226 *temp_v0;
    s32 tmp2[3];

    temp_v0 = func_151149AC(arg0); // maybe different types?
    if (temp_v0 == 0) {
        return 0;
    }
    tmp1[0] = D_800A6964[6]; // D_800A697C
    tmp1[1] = D_800A699C[6]; // D_800A69B4
    tmp1[2] = func_150ADA68() * D_800A6B08;
    tmp1[3] = D_800A69D4[6]; // D_800A69EC;

    tmp2[0] = temp_v0->unk10;
    tmp2[1] = temp_v0->unk12;
    tmp2[2] = temp_v0->unk14;

    tmp0.unk0 = 2;
    tmp0.unk1 = 17;
    tmp0.unk2 = 300;
    tmp0.unk4 = 5;

    temp_v0_2 = func_151602C0(&tmp0, &tmp2, D_800A6964[6], 0, 0xFF, 0, 0xFF, 0, 0x14, arg1, arg2);
    if (temp_v0_2 != 0) {
        memcpy(&temp_v0_2->unk18, &tmp1, 16);
        memcpy(&temp_v0_2->unk28, &temp_v0, 4);
    }
    return temp_v0_2;
}

s32 func_15163B98(struct230 *arg0) {
    struct228* tmp;
    if (func_1516065C(arg0) == 0) {
        return 0;
    } else {
        tmp = arg0->unk28;
        if (tmp->unk6E == 1) {
            return 0;
        } else {
            return 1;
        }
    }
}

struct225 *func_15163BE8(s32 arg0, u8 arg1, s32 arg2) {
    struct225 *temp_v0;
    f32 src[4];

    src[0] = D_800A6964[6];
    src[1] = D_800A699C[6];
    src[2] = func_150ADA68() * D_800A6B0C;
    src[3] = D_800A69D4[6];

    temp_v0 = func_15160A58(arg0, 1, &D_800A6A0C, 2, 300, 100, 0, 0xFF, 0, 0xFF, 0, 0, 16, 1, arg1, arg2);
    if (temp_v0 != 0) {
        memcpy(&temp_v0->unk30, &src, 16);
    }
    return temp_v0;
}

s32 func_15163CD0(struct225 *arg0) {
    func_15163CF8(&arg0->unk30, arg0);
    return 1;
}

void func_15163CF8(struct227 *arg0, struct225 *arg1) {
    f32 tmp = func_15047D60(arg0->unk8);
    arg1->unk14->unk2F = arg0->unk0 + (arg0->unk4 * tmp);
    arg0->unk8 = arg0->unk8 + (arg0->unkC * D_800BE9A4);
    arg0->unk8 = func_15144B68(arg0->unk8);
}

void func_15163DEC(struct225 *arg0, struct228 *arg1) {
    arg1->unk10 = arg1->unk10 - D_800BE9A4;
    if (arg1->unk10 < 0.0f) {
        arg1->unk10 = func_150ADA68() * arg1->unk14;
        if ((func_150ADA20() & 3) != 0) {
            arg1->unkC = (func_150ADA68() * (arg1->unk0 - arg1->unk4)) + arg1->unk4;
        } else {
            arg1->unkC = (func_150ADA68() * (arg1->unk8 - arg1->unk0)) + arg1->unk0;
        }
    }
    arg1->unk1C += (arg1->unkC - arg1->unk1C) * arg1->unk18;
    arg0->unk14->unk2F = arg1->unk1C;
}

s32 func_15163F50(struct225 *arg0, struct225 *arg1) {
    struct127 *temp_v1;

    temp_v1 = arg1->unk0;
    if (temp_v1->interaction_state == 0) {
        return 0;
    }
    if (temp_v1->id == 0xFF) {
        return 0;
    }
    if (temp_v1->unique_id != arg1->unk4) {
        return 0;
    }
    arg0->unk14->unkE = temp_v1->x_position;
    arg0->unk14->unk10 = temp_v1->y_position;
    arg0->unk14->unk12 = temp_v1->z_position;
    return 1;
}

// ???
#pragma GLOBAL_ASM("asm/nonmatchings/game_18D770/func_15163FEC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_18D770/func_151640C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_18D770/func_15164134.s")

struct225 *func_15164208(s32 arg0, u8 arg1, u8 arg2, s32 arg3) {
    struct225 *temp_v0;
    struct231 tmp0;
    struct243 src;

    src.unk0 = 0.0f;
    src.unk4 = arg1;

    tmp0.unk0 = 0;
    tmp0.unk1 = 0x14;
    tmp0.unk2 = 0x12C;
    tmp0.unk4 = 0x27;

    temp_v0 = func_1516037C(&tmp0, arg0, 8, arg2, arg3);
    if (temp_v0 != 0) {
        memcpy(&temp_v0->unk18, &src, 8);
    }
    return temp_v0;
}

s32 func_1516429C(struct237 *arg0) {
    arg0->unk14->unk2F = arg0->unk18.unk0;
    arg0->unk18.unk0 = (arg0->unk18.unk0 - (arg0->unk18.unk0 * D_800A6B10));
    return 1;
}

// what structs?
#pragma GLOBAL_ASM("asm/nonmatchings/game_18D770/func_1516434C.s")

void func_151643A8(struct225 *arg0, s32 arg1, u8 arg2) {
    struct227 *tmp;
    tmp = &arg0->unk18;
    if (arg2 == 0x40) {
        tmp->unk24 |= 1;
    } else if (arg2 == 0x41) {
        tmp->unk24 &= 0xFFFE;
    }
}

s32 func_151643F8(struct225 *arg0) {
    func_1516441C(arg0, &arg0->unk18);
    return 1;
}

// ???
#pragma GLOBAL_ASM("asm/nonmatchings/game_18D770/func_1516441C.s")

s32 func_151644A8(struct242 *arg0) {
    f32 temp_f0;
    struct17 *temp_v0;

    temp_v0 = arg0->unk20;
    temp_f0 = arg0->unk1C;
    func_151644F4(arg0, &arg0->unk24, arg0->unk18, temp_v0->unk0 * temp_f0, temp_v0->unk8 * temp_f0);
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_18D770/func_151644F4.s")
// NON-MATCHING: close...
// void func_151644F4(struct242 *arg0, struct17 *arg1, s32 arg2, f32 arg3, f32 arg4) {
//     f32 tmp[20];
//
//     func_150A8050(&tmp, arg3, 0, arg4); // arg3
//     tmp[13] = arg1->unk0;
//     tmp[14] = arg1->unk4;
//     tmp[15] = arg1->unk8;
//
//     func_150A7960(&tmp, 0, arg0, 0, &tmp[17], &tmp[18], &tmp[19]);
//
//     arg0->unk14->unkE = tmp[17];
//     arg0->unk14->unk10 = tmp[18];
//     arg0->unk14->unk12 = tmp[19];
// }

// loop
#pragma GLOBAL_ASM("asm/nonmatchings/game_18D770/func_151645C4.s")
