#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_85042D50(void) {
    D_800CBD64 = 0;
    func_85043384(0);
}

void func_85042D78(u8 arg0) {
    D_800CBD74 = arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_42D50/func_85042D94.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_42D50/func_85042E3C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_42D50/func_85042ECC.s")

void func_850432BC(f32 arg0) {
    D_800CBD80 = arg0;
}

void func_850432CC(s32 arg0, s32 arg1) {
    D_800CBD74 = D_800CBD74 | 1;
    D_800CBD74 = D_800CBD74;
    D_800CBD7C = arg1;
    D_800CBD78 = arg0;
}

void func_850432FC(s16 arg0, s16 arg1) {
    D_800CBD70 = arg0;
    D_800CBD72 = arg1;
}

void func_8504332C(u8 arg0, u8 arg1, u8 arg2, u8 arg3) {
    D_800CBD60 = arg0;
    D_800CBD61 = arg1;
    D_800CBD62 = arg2;
    D_800CBD63 = arg3;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_42D50/func_85043384.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_42D50/func_85043A00.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_42D50/func_85043A20.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_42D50/func_85043AC8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_42D50/func_85043B70.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_42D50/func_85043BB8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_42D50/func_85043CA4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_42D50/func_85043D90.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_42D50/func_85043E68.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_42D50/func_85043EC8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_42D50/func_85043F6C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_42D50/func_85043FF0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_42D50/func_850440A0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_42D50/func_850442C0.s")
