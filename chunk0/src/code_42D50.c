#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_15042D50(void) {
    D_800CBD64 = 0;
    func_15043384(0);
}

void func_15042D78(u8 arg0) {
    D_800CBD74 = arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_42D50/func_15042D94.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_42D50/func_15042E3C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_42D50/func_15042ECC.s")

void func_150432BC(f32 arg0) {
    D_800CBD80 = arg0;
}

void func_150432CC(s32 arg0, s32 arg1) {
    D_800CBD74 = D_800CBD74 | 1;
    D_800CBD74 = D_800CBD74;
    D_800CBD7C = arg1;
    D_800CBD78 = arg0;
}

void func_150432FC(s16 arg0, s16 arg1) {
    D_800CBD70 = arg0;
    D_800CBD72 = arg1;
}

void func_1504332C(u8 arg0, u8 arg1, u8 arg2, u8 arg3) {
    D_800CBD60 = arg0;
    D_800CBD61 = arg1;
    D_800CBD62 = arg2;
    D_800CBD63 = arg3;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_42D50/func_15043384.s")

void func_15043A00(struct105 *arg0, s32 arg1, s32 arg2) {
    if (arg0 != 0) {
        arg0->unk0 = arg1; // are these structs?
        arg0->unk4 = arg2;
        arg0->unkC = 0;
        arg0->unk8 = 0;
    }
}

// something with memcpy
#pragma GLOBAL_ASM("asm/nonmatchings/code_42D50/func_15043A20.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_42D50/func_15043AC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_42D50/func_15043B70.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_42D50/func_15043BB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_42D50/func_15043CA4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_42D50/func_15043D90.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_42D50/func_15043E68.s")
// NON-MATCHING: need to figure out the struct and called function
// f32 func_150A8050(void *arg0, f32 arg1, f32 arg2, f32 arg3);
// void func_15043E68(s32 arg0, f32 arg1, s32 arg2, s32 arg3, f32 arg4, f32 arg5, f32 arg6) {
//     struct111 sp18;
//
//     func_150A8050(arg1, arg2, &sp18, arg1, arg2, arg3);
//     sp18.unk48 = arg4;
//     sp18.unk4C = arg5;
//     sp18.unk50 = arg6;
//     func_150A7790(&sp18, arg0);
// }

void func_15043EC8(struct112 *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6) {
    arg0->unk30 = arg4;
    arg0->unk34 = arg5;
    arg0->unk38 = arg6;
    arg0->unk0 = arg0->unk0 * arg1;
    arg0->unk4 = arg0->unk4 * arg1;
    arg0->unk8 = arg0->unk8 * arg1;
    arg0->unk10 = arg0->unk10 * arg2;
    arg0->unk14 = arg0->unk14 * arg2;
    arg0->unk18 = arg0->unk18 * arg2;
    arg0->unk20 = arg0->unk20 * arg3;
    arg0->unk24 = arg0->unk24 * arg3;
    arg0->unk28 = arg0->unk28 * arg3;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_42D50/func_15043F6C.s")

void func_15043FF0(vertex *arg0, struct113 *arg1) {
    arg0->x = arg1->unk18;
    arg0->y = arg1->unk1A;
    arg0->z = arg1->unk1C;
    arg0->x = arg0->x + arg1->unk38 * 0.000015258789f; // this is 1 / 65536
    arg0->y = arg0->y + arg1->unk3A * 0.000015258789f;
    arg0->z = arg0->z + arg1->unk3C * 0.000015258789f;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_42D50/func_150440A0.s")

void func_150442C0(struct112 *arg0, f32 x, f32 y, f32 z) {
    arg0->unk30 += x * arg0->unk0 + y * arg0->unk10 + z * arg0->unk20;
    arg0->unk34 += x * arg0->unk4 + y * arg0->unk14 + z * arg0->unk24;
    arg0->unk38 += x * arg0->unk8 + y * arg0->unk18 + z * arg0->unk28;
}
