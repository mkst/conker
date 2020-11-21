#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_85012FE0(void) {
    D_800BE570 = 0;
    D_800BE574 = 0;
    D_800BE575 = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_12FE0/func_85013000.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_12FE0/func_850130B4.s")

s32 func_8501370C(struct16 *arg0) {
    u8 idx = arg0->unk17;
    void (*func)(void) = D_80082EA0[idx];

    if (func != NULL) {
        func();
    }
    return 1;
}

s32 func_8501374C(struct16 *arg0) {
    arg0->unk16 |= 4;
    func_8515D088(arg0);
    return 1;
}

// fat struct definition:
#pragma GLOBAL_ASM("asm/nonmatchings/code_12FE0/func_85013778.s")

s32 func_8501396C(struct16 *arg0) {
    u8 idx = arg0->unk17;
    void (*func)(void) = D_80082ECC[idx];

    if (func != NULL) {
        func();
    }
    return 1;
}

// another struct
#pragma GLOBAL_ASM("asm/nonmatchings/code_12FE0/func_850139AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_12FE0/func_85013C38.s")

// looked simple but meh
#pragma GLOBAL_ASM("asm/nonmatchings/code_12FE0/func_85013D38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_12FE0/func_85013DE8.s")

s32 func_85013F9C(s32 arg0) {
    func_851CD2C0(arg0, 0xFF, 1);
    return 1;
}

s32 func_85013FC4(struct133 *arg0) {
    u8 idx = arg0->unk1B;
    void (*func)(void) = D_80082F40[idx];

    if (func != NULL) {
        func();
    }
    return 1;
}

s32 func_85014004(struct134 *arg0) {
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

s32 func_85014040(struct134 *arg0) {
    s32 temp_v0 = arg0->unk18;
    arg0->unk16 |= 4;
    if (temp_v0 == 0) {
        D_800D9A20 = arg0;
    } else if (temp_v0 == 1) {
        D_800D9A24 = arg0;
    }
    return 1;
}

s32 func_8501407C(s32 arg0) {
    D_800D987C = (u8)0;
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_12FE0/func_85014094.s")
// NON-MATCHING: kinda right idea, but not executed correctly
// void func_85014094(struct134 *arg0) {
//     struct135 tmp;
//
//     tmp.unk0 = arg0;
//     // tmp.unk4 = tmp.unk0;
//     tmp.unk0->unk16 |= 4;
//     // tmp.unkC = tmp.unk0;
//     // arg0 = tmp.unk0;
//     tmp.unk10 = func_85144598(tmp.unk4); //, tmp.unk0);
//     tmp.unk14 = 0.0f;
//     func_8510F800(0);
//     tmp.unk18 = func_8510FD20(arg0->unk0, arg0->unk4, arg0);
//     tmp.unk1C = 0;
//     tmp.unk8 = func_85149130(0x12C, -1, 0x21, -1, 0, 0, 0x34, 0xFF, 1);
//     if (tmp.unk8 != 0) {
//         func_80022EC0(tmp.unk8 + 0x28, &tmp, 0x34);
//     }
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_12FE0/func_85014144.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_12FE0/func_85014220.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_12FE0/func_850142AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_12FE0/func_850142EC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_12FE0/func_850144B8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_12FE0/func_8501474C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_12FE0/func_85014B60.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_12FE0/func_85014F6C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_12FE0/func_850150A4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_12FE0/func_85015104.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_12FE0/func_850151D4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_12FE0/func_85015300.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_12FE0/func_85015354.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_12FE0/func_85015644.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_12FE0/func_850156F4.s")
