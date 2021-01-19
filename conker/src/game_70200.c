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

#pragma GLOBAL_ASM("asm/nonmatchings/game_70200/func_15042D94.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_70200/func_15042E3C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_70200/func_15042ECC.s")

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

#pragma GLOBAL_ASM("asm/nonmatchings/game_70200/func_15043384.s")

void func_15043A00(struct105 *arg0, s32 arg1, s32 arg2) {
    if (arg0 != 0) {
        arg0->unk0 = arg1; // are these structs?
        arg0->unk4 = arg2;
        arg0->unkC = 0;
        arg0->unk8 = 0;
    }
}

// something with memcpy
#pragma GLOBAL_ASM("asm/nonmatchings/game_70200/func_15043A20.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_70200/func_15043AC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_70200/func_15043B70.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_70200/func_15043BB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_70200/func_15043CA4.s")
