#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_15012FE0(void) {
    D_800BE570 = 0;
    D_800BE574 = 0;
    D_800BE575 = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_12FE0/func_15013000.s")
// requires jump table
#pragma GLOBAL_ASM("asm/nonmatchings/code_12FE0/func_150130B4.s")

s32 func_1501370C(struct16 *arg0) {
    u8 idx = arg0->unk17;
    void (*func)(void) = D_80082EA0[idx];

    if (func != NULL) {
        func();
    }
    return 1;
}

s32 func_1501374C(struct16 *arg0) {
    arg0->unk16 |= 4;
    func_1515D088(arg0);
    return 1;
}

// fat struct definition:
#pragma GLOBAL_ASM("asm/nonmatchings/code_12FE0/func_15013778.s")

s32 func_1501396C(struct16 *arg0) {
    u8 idx = arg0->unk17;
    void (*func)(void) = D_80082ECC[idx];

    if (func != NULL) {
        func();
    }
    return 1;
}

// another struct
#pragma GLOBAL_ASM("asm/nonmatchings/code_12FE0/func_150139AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_12FE0/func_15013C38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_12FE0/func_15013D38.s")
// #NON-MATCHING: looks close but think its wrong
// s32 func_151BE850(struct17 *arg0, s32 arg1, u8 arg2, u8 arg3, u8 arg4, u8 arg5, u8 arg6);
// s32 func_15013D38(struct47 *arg0) {
//     s32 tmp1;
//     s32 tmp2;
//     s32 tmp3;
//     s32 tmp4;
//     struct17 *tmp;
//
//     arg0->unk16 |= 4;
//
//     tmp->unk0 = arg0->unk0;
//     tmp->unk4 = arg0->unk2;
//     tmp->unk8 = arg0->unk4;
//
//     tmp4 = 1;
//     tmp1 = arg0->unk18;
//     if (tmp1) {
//         tmp4 = tmp1;
//     }
//
//     tmp2 = arg0->unk10;
//     tmp3 = arg0->unk1F;
//
//     func_151BE850(tmp, tmp2, tmp4, tmp3, 0xff, 1, 1);
//     return 1;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_12FE0/func_15013DE8.s")

s32 func_15013F9C(s32 arg0) {
    func_151CD2C0(arg0, 0xFF, 1);
    return 1;
}

s32 func_15013FC4(struct133 *arg0) {
    u8 idx = arg0->unk1B;
    void (*func)(void) = D_80082F40[idx];

    if (func != NULL) {
        func();
    }
    return 1;
}

s32 func_15014004(struct134 *arg0) {
    s32 temp_v1 = arg0->unk1C;
    if (temp_v1 < 0) {
        return 1;
    }
    if (temp_v1 >= 6) {
        return 1;
    }
    D_800E0900[temp_v1] = arg0;
    return 1;
}

s32 func_15014040(struct134 *arg0) {
    s32 temp_v0 = arg0->unk18;
    arg0->unk16 |= 4;
    if (temp_v0 == 0) {
        D_800D9A20 = arg0;
    } else if (temp_v0 == 1) {
        D_800D9A24 = arg0;
    }
    return 1;
}

s32 func_1501407C(s32 arg0) {
    D_800D987C = (u8)0;
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_12FE0/func_15014094.s")
// NON-MATCHING: kinda right idea, but not executed correctly
// void func_15014094(struct134 *arg0) {
//     struct135 tmp;
//
//     tmp.unk0 = arg0;
//     // tmp.unk4 = tmp.unk0;
//     tmp.unk0->unk16 |= 4;
//     // tmp.unkC = tmp.unk0;
//     // arg0 = tmp.unk0;
//     tmp.unk10 = func_15144598(tmp.unk4); //, tmp.unk0);
//     tmp.unk14 = 0.0f;
//     func_1510F800(0);
//     tmp.unk18 = func_1510FD20(arg0->unk0, arg0->unk4, arg0);
//     tmp.unk1C = 0;
//     tmp.unk8 = func_15149130(0x12C, -1, 0x21, -1, 0, 0, 0x34, 0xFF, 1);
//     if (tmp.unk8 != 0) {
//         memcpy(tmp.unk8 + 0x28, &tmp, 0x34);
//     }
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_12FE0/func_15014144.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_12FE0/func_15014220.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_12FE0/func_150142AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_12FE0/func_150142EC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_12FE0/func_150144B8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_12FE0/func_1501474C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_12FE0/func_15014B60.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_12FE0/func_15014F6C.s")

s32 func_150150A4(void) {
    struct17 *temp_v0 = func_1515F1B0();
    if (temp_v0 == NULL) {
        return 1;
    }

    func_1515F25C(&D_800DCDC4, temp_v0);
    D_800DCD90 += temp_v0->unk8;
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_12FE0/func_15015104.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_12FE0/func_150151D4.s")

s32 func_15015300(struct134 *arg0) {
    void (*func)(void);
    s32 idx = arg0->unk1C;

    if ((idx < 0) || (idx >= 2)) {
        return 1;
    }

    func = D_80082F70[idx];
    if (func != NULL) {
        func();
    }

    return 1;
}


#pragma GLOBAL_ASM("asm/nonmatchings/code_12FE0/func_15015354.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_12FE0/func_15015644.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_12FE0/func_150156F4.s")
