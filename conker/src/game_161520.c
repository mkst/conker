#include <ultra64.h>
#include "functions.h"
#include "variables.h"

void func_1513555C(struct102 *arg0, s32 *arg1, u8 arg2);
void func_151355B8(struct102 *arg0, s32 *arg1, u8 arg2);
s32 func_15134070(struct102 *arg0);
void func_15138120(struct102 *arg0, s32 arg1, s32 arg2);
void func_151382E0(s32 *arg0, s32 arg1, s32 *arg2, u8 arg3, s32 arg4);
void func_15138424(struct102 *arg0, s32 *arg1, s32 arg2, s32 *arg3, u8 arg4, s32 arg5);
void func_1504715C(s32 *arg0, struct102 *arg1);

// requires jump table
#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15134070.s")

s32 func_1513416C(struct102 *arg0) {
    s16 temp_v0 = arg0->unk1C;
    if (temp_v0 < 32) {
        arg0->unk28 = temp_v0 * 8;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_1513418C.s")
// void *func_1513418C(s32 arg0, s32 arg1 /* size/offset */, u8 arg2, s32 arg3) {
//     void *sp24;
//     s32 temp_v1;
//     u8 temp_a0;
//     void *temp_ret;
//     void *temp_v0;
//     struct127 *temp_v0_2;
//
//     temp_ret = func_15167A68(0x28, arg3, arg1 + 0x58, 1, arg2, 1);
//     temp_v0 = temp_ret;
//     if (temp_v0 == 0) {
//         return NULL;
//     }
//     sp24 = temp_v0;
//     memcpy(&temp_v0->unk10, arg0, 0x30); //, temp_v0);
//     temp_a0 = temp_v0->unk3A;
//     if ((temp_a0 & 2) != 0) {
//         temp_v0_2 = temp_v0->unk1C;
//         if ((temp_v0_2->unk0 == 0) || (temp_v0->unk18 != temp_v0_2->unk3B)) {
//             func_1516972C(temp_v0);
//             return NULL;
//         }
//         temp_v1 = temp_v0_2->unk1D4;
//         if ((temp_v1 != 0) && ((temp_v0_2->unk74 & 0xF) != 0xF)) {
//             sp24 = temp_v0;
//             func_15143134(temp_v0->unk24, temp_v0->unk40, temp_v1 + (temp_v0->unk20 << 6), temp_v0);
//         } else {
//             temp_v0->unk3A = (u8) (temp_a0 | 8);
//         }
//     } else {
//         temp_v0->unk3A = (u8) (temp_a0 | 0x18);
//     }
//     temp_ret->unk50 = 0.0f;
//     temp_ret->unk4C = (f32) (1.0f / (2.0f * temp_ret->unk30));
//     return temp_ret;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_151342BC.s")

s32 func_151346D0(s32 arg0, struct102 *arg1, s32 arg2) {
    arg1->unk3A &= 0xFFEF;
    return arg0;
}

void func_151346EC(struct102 *arg0) {
    func_15169804(arg0);
}

void func_1513470C(struct102 *arg0) {
    func_15169824(arg0);
}

void func_1513472C(struct102 *arg0) {
    s32 idx = arg0->unk3D;
    if (idx < 0) {
        idx = 0;
    }
    if (idx >= 10) {
        idx = 0;
    }
    D_80089AAC[idx]();
}

void func_1513477C(struct102 *arg0) {
  s32 idx = arg0->unk3D;
  if (idx < 0) {
      idx = 0;
  }
  if (idx >= 10) {
      idx = 0;
  }
    D_80089AD4[idx]();
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_151347CC.s")

void func_151348F0(f32 arg0, f32 arg1, s32 arg2, s32 arg3) {

}

void *func_15134908(void *arg0, s32 arg1, u8 arg2, s32 arg3) {
    void *temp;
    temp = func_15167A68(0x2A, arg3, arg1 + 0x40, 1, arg2, 1);
    if (temp == NULL) {
        return NULL;
    }
    *(u8*)((u8*)arg0 + 0x16) |= 2;
    memcpy((u8*)temp + 0x10, arg0, 0x1C);
    *(f32*)((u8*)temp + 0x2C) = *(f32*)(*(s32*)((u8*)temp + 0x10));
    *(f32*)((u8*)temp + 0x30) = *(f32*)(*(s32*)((u8*)temp + 0x14));
    *(f32*)((u8*)temp + 0x34) = *(f32*)(*(s32*)((u8*)temp + 0x18));
    *(f32*)((u8*)temp + 0x38) = 1.0f / (2.0f * *(f32*)((u8*)temp + 0x1C));
    *(f32*)((u8*)temp + 0x3C) = 0.0f;
    return temp;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_151349D0.s")

// near match: u8 truncation + extra sw a1 (15 vs 14 instr)
#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15134C98.s")

void func_15134CD4(f32 arg0, f32 arg1, s32 arg2, s32 arg3) {

}

s32 func_15134CEC(struct102 *arg0) {
    f32 *sptr = &D_800BE9A4;
    s32 alpha = *(u8*)((u8*)arg0 + 0x2E);

    *(f32*)((u8*)arg0 + 0x70) += 0.125f * *sptr;
    arg0->unk74 += D_800A45B0 * *sptr;
    *(f32*)((u8*)arg0 + 0x14) += *(f32*)((u8*)arg0 + 0x70) * *sptr;
    *(f32*)((u8*)arg0 + 0x1C) += arg0->unk74 * *sptr;

    if (*(f32*)((u8*)arg0 + 0x14) > 130.0f) {
        return 0;
    }

    alpha -= D_800BE9E4 * 2;
    if (alpha < 0) {
        return 0;
    }
    *(u8*)((u8*)arg0 + 0x2E) = alpha;
    return 1;
}

void *func_15134DAC(s32 arg0, s32 arg1) {
    void *temp = func_15167A68(0x29, 0, arg1 + 0x80, 1, 0xFF, 1);
    if (temp == NULL) {
        return NULL;
    }
    memcpy((u8*)temp + 0x18, (void*)arg0, 0x3C); *(s16*)((u8*)temp + 0x54) = -*(s16*)(arg0 + 0x28);
    *(s32*)((u8*)temp + 0x10) = 1;
    *(s32*)((u8*)temp + 0x14) = 0;
    *(f32*)((u8*)temp + 0x70) = 0.0f;
    *(f32*)((u8*)temp + 0x74) = 0.0f;
    *(f32*)((u8*)temp + 0x78) = 0.0f;
    return temp;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15134E48.s")

void func_151352EC(struct102 *arg0) {
    func_15169804(arg0);
}

void func_1513530C(struct102 *arg0) {
    func_15169824(arg0);
}

void func_1513532C(struct102 *arg0) {
    s32 pad;
    s32 idx = arg0->unk50;
    if (idx < 0) {
        idx = 0;
    } else if (idx >= 6) {
        idx = 0;
    }
    if (arg0->unk44 != 0) {
        func_100111C8(arg0->unk44);
        arg0->unk44 = 0;
    }
    D_80089B70[idx](arg0);
}

void func_151353A8(struct102 *arg0) {
    s32 pad;
    s32 idx = arg0->unk50;
    if (idx < 0) {
        idx = 0;
    } else if (idx >= 6) {
        idx = 0;
    }
    if (arg0->unk44 != 0) {
        func_100111C8(arg0->unk44);
        arg0->unk44 = 0;
    }
    D_80089B88[idx](arg0);
}

void func_15135424(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 sp20[2];
    s32 sp18[2];
    sp20[0] = arg1;
    sp20[1] = arg2;
    sp18[0] = arg3;
    sp18[1] = arg4;
    func_15145EA4(sp20, sp18, arg0, 2);
}

void func_15135480(struct102 *arg0, s32 *arg1, u8 arg2) {
    s32 v1;
    s32 v0;
    if (arg2 == 0x2D) {
        v1 = arg1[0];
        v0 = *(s32*)((u8*)arg0 + 0x1C);
        if (v1 == v0) {
            *(s32*)((u8*)arg0 + 0x1C) = arg1[1];
            *(u8*)((u8*)arg0 + 0x18) = *(u8*)((u8*)arg1 + 9);
        } else if (arg1[1] == v0) {
            *(s32*)((u8*)arg0 + 0x1C) = v1;
            *(u8*)((u8*)arg0 + 0x18) = *(u8*)((u8*)arg1 + 8);
        }
    }
    v0 = *(u8*)((u8*)arg0 + 0x50);
    switch (v0) {
        case 1:
            func_151355B8(arg0, arg1, arg2);
            break;
        case 2:
            func_1513555C(arg0, arg1, arg2);
            break;
        default:
            if (arg2 != 0) {
                break;
            }
            if (arg1[0] == *(s32*)((u8*)arg0 + 0x1C) || *(u8*)((u8*)arg1 + 4) == *(u8*)((u8*)arg0 + 0x18)) {
                func_1516972C(arg0);
            }
            break;
    }
}

void func_1513555C(struct102 *arg0, s32 *arg1, u8 arg2) {
    if (arg2 == 0 || arg2 == 0x12) {
        if (arg1[0] == *(s32*)((u8*)arg0 + 0x1C) || *(u8*)((u8*)arg1 + 4) == *(u8*)((u8*)arg0 + 0x18)) {
            func_1516972C(arg0);
        }
    }
}

void func_151355B8(struct102 *arg0, s32 *arg1, u8 arg2) {
    switch (arg2) {
        case 0:
            if (arg1[0] == *(s32*)((u8*)arg0 + 0x1C) || *(u8*)((u8*)arg1 + 4) == *(u8*)((u8*)arg0 + 0x18)) {
                func_1516972C(arg0);
            }
            break;
        case 3:
            if (arg1[0] == *(s32*)((u8*)arg0 + 0x1C) || *(u8*)((u8*)arg1 + 4) == *(u8*)((u8*)arg0 + 0x18)) {
                s32 val = *(s32*)((u8*)arg0 + 0x10) & ~1;
                *(s32*)((u8*)arg0 + 0x10) = val;
                *(s32*)((u8*)arg0 + 0x10) = val;
            }
            break;
    }
}

s32 func_15135658(s32 *arg0) {
    *(f32*)((u8*)arg0 + 0x74) = 1.0f;
    return 1;
}

f32 func_15135670(s32 arg0) {
    // "power", "../Effects/Blood/blood.c"
    return func_151422DC(0, &D_800A3FB4, 0, 2000, 1000, &D_800A3FBC, 2938) * D_800A45B4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_151356D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15135BF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15135DD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15136404.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15136698.s")

s32 func_151368A8(struct102 *arg0) {
    f32 *vel = &arg0->unk128;
    s16 temp = arg0->unk1C;
    if (temp < 32) {
        s32 val = temp * 8;
        if (val < arg0->unk5C) {
            arg0->unk5C = (u8)val;
        }
    }
    *(f32*)&arg0->unk2C += *vel * D_800BE9A4;
    *(f32*)&arg0->unk30 += *vel * D_800BE9A4;
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15136918.s")

s32 func_15136A1C(struct102 *arg0) {
    s16 temp_v0 = arg0->unk1C;
    if (temp_v0 < 32) {
        s32 temp_v1 = temp_v0 * 8;
        if (temp_v1 < arg0->unk28) {
            arg0->unk28 = temp_v1;
        }
    }
    return 1;
}

void func_15136A50(s32 arg0, s32 arg1, s32 arg2, s16 arg3, u8 arg4, s32 arg5) {
    struct {
        s32 unk0;
        s32 unk4;
        s32 unk8;
        f32 unkC;
        f32 unk10;
        s16 unk14;
        u8 unk16;
        u8 unk17;
        u8 unk18;
        s8 unk19;
    } sp;

    sp.unkC = D_800A461C;
    sp.unk0 = arg0;
    sp.unk4 = arg1;
    sp.unk8 = arg2;
    sp.unk10 = D_800A4620;
    sp.unk14 = arg3;
    sp.unk16 = 5;
    sp.unk17 = 5;
    sp.unk18 = 2;
    sp.unk19 = -1;
    func_15134908(&sp, 0, arg4, arg5);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15136AE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15136C3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15136F50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15137610.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_1513783C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15137C64.s")

s32 func_15137E10(struct102 *arg0) {
    arg0->unk74 = (func_150ADA68() * 50.0f + 580.0f) * D_800A4828;
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15137E60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15137F30.s")

s32 func_151380B4(struct102 *arg0, s32 arg1, s32 arg2) {
    s32 temp = arg0->unk1D4;
    if (temp == 0) {
        return 0;
    }
    if ((*(u8*)((u8*)arg0 + 0x74) & 0xF) == 0xF) {
        return 0;
    }
    func_15143134((arg1 << 4) + (s32)&D_800A3FD8, arg2, temp + 0x300, arg1);
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15138120.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_151382E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15138424.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_151389A8.s")

// NEAR MATCH: frame 0x68 vs 0x60 - s32 result forces s1+stack, removing it gives 0x58
// near match: frame 0x68 vs 0x60 (all instructions match, +8 bytes from -g3)
#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15138BC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15138C80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15138E98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15139578.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15139768.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15139D74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_1513A24C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_1513A48C.s")

// near match: dead branch (19 vs 16 instr, lw+beqz eliminated by -O2)
#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_1513A594.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_1513A5E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_1513A6E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_1513ABB8.s")

void func_1513B0B8(struct102 *arg0, s32 arg1, u8 arg2) {
    s32 *ptr = &arg0->unk170;
    if (arg2 == 0x45) {
        if (--*ptr < 0) {
            arg0->unk60 |= 0x80;
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_1513B0F8.s")
