#include <ultra64.h>

#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506AD30.s")

void func_8506AF74(void) {
    if ((D_800D154C->unk100 & 8) != 0) {
        D_800D154C->unk100 |= 4;
    }
    D_800D154C->unk100 &= 0xF7;
    func_8505E650(D_800D154C, 0x38, 1.0f, 5.0f, 0.0f, 0.0f, 0);
}

void func_8506AFE0(void) {
    func_8505E650(D_800D154C, 0x48, 1.0f, 5.0f, 0.0f, 0.0f, 0);
}

void func_8506B020(void) {
    D_800D154C->unk1CB = (u8)1;
    func_8505E650(D_800D154C, 0x39, 1.0f, 5.0f, 0.0f, 0.0f, 0);
}

void func_8506B070(void) {
}

void func_8506B078(void) {
    f32 tmp = (D_800D154C->unk18 - (D_800D154C->unk118 - 150.0f)) * D_80099C34;

    if (tmp < 0.0f) {
        tmp = 1.0f;
    } else {
        tmp +=  1.0f;
    }
    func_8506B100(0xD1, tmp, 4.0f);
}

void func_8506B100(s32 arg0, f32 arg1, f32 arg2) {
    func_8505E650(D_800D154C, arg0, arg1, arg2, 0.0f, 0.0f, 0);
}

void func_8506B14C(void) {
    func_8505E650(D_800D154C, D_800D154C->unk84 + 1, D_800D154C->unk4C, 3.0f, 0.0f, 0.0f, 0);
}

void func_8506B198(void) {
    func_8505E650(D_800D154C, D_800D154C->unk84 + 1, D_800D154C->unk4C, 3.0f, 0.0f, 0.0f, 1);
}

void func_8506B1E8(void) {
    func_8505E650(D_800D154C, 0x3C, 1.0f, 3.0f, 0.0f, 0.0f, 0);
}

void func_8506B228(void) {
    func_8505E650(D_800D154C, 0x54, 1.0f, 3.0f, 0.0f, 0.0f, 0);
}

void func_8506B268(void) {
    D_800D154C->unk83 = 0;
    D_800D154C->unk89 = 0;
    func_8505E650(D_800D154C, 0xF, 1.0f, 6.0f, 0.0f, 0.0f, 0);
}

// weird divide of struct array address..
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506B2BC.s")

void func_8506B328(void) {
    func_8505E650(D_800D154C, 0x3E, 1.0f, 5.0f, 0.0f, 0.0f, 0);
}

void func_8506B368(void) {

}

void func_8506B370(void) {
    // return index of D_800D154C in structs array
    func_8507D4F8(((s32)D_800D154C - (s32)&D_800CC2D0) / (s32)sizeof(struct127));
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506B3B0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506B3B8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506B4EC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506B50C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506B520.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506B5A4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506B5AC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506B5B4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506B5CC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506B5E4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506B634.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506B740.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506B7F4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506B82C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506B860.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506B88C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506B8B4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506B8F4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506B91C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506B944.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506B984.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506B9AC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506B9C0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506BA4C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506BAD8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506BB64.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506BBA8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506BC24.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506BCA0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506BCC8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506BDE8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506BE2C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506BE54.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506BE84.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506BE98.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506BEC0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506BEDC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506BF1C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506BF5C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506C32C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506C418.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506C43C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506C460.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506CE6C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506D2E8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506D4EC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506D4F4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506D538.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506D570.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506D584.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506D6B4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506D74C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506D898.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506D934.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506D950.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506D958.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506DA78.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506DA94.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506DB30.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506DB5C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506DB84.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506DBA0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506DBD4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506DC10.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506DCA4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506DCC0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506DCDC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506DCF8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506DD00.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506DD44.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506DD6C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506DDB8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506DDC0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506DE04.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506DE84.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506E0EC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506E2CC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506E46C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506E5FC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506E63C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506E67C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506E6BC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506E6FC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506E73C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506E77C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506E7BC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506E7FC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506E848.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506E898.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506E8D8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506E918.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506E958.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506E998.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506E9D8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506EA18.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506EA58.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506EA98.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506EBC0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506EC50.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506ECD0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506ECF0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506ED0C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506ED4C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506ED68.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506ED90.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506EDAC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506EDC8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506EDF0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506EE14.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506EE38.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506EE60.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506EEAC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506EED8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506EEF4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506EF5C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506EFB4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506EFC8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506F004.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506F02C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506F05C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506F090.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506F0C4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506F0F0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506F11C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506F14C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506F17C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506F1A8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506F524.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506F54C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506F8C0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506F8F0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506F9C0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506FA90.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506FB60.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506FBE8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506FC1C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506FC50.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506FC74.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506FC9C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506FCC8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506FCFC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506FD30.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506FDF0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506FE1C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506FE48.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506FE74.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506FEA0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506FECC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506FEF8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506FF24.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506FF50.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506FF78.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506FFAC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8506FFE0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85070014.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8507003C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85070084.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_850700B4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_850700E4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85070114.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85070144.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_850701C4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_850701F4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85070224.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85070300.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85070690.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_850706C4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_850706F8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85070760.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85070794.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_850707C8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_850707F8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85070830.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85070860.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85070898.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85070C18.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85070C40.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85070CDC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85070D00.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85070D24.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85070F60.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85071230.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85071254.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85071278.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_850712AC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85071360.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85071434.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85071470.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_850714AC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_850714E8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85071544.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8507158C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_850715D4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8507161C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85071628.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85071668.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85071690.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_850716EC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85071764.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_850717E0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85071830.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85071860.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85071888.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_850718E4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85071998.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_850719CC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85071A00.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85071A34.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85071A64.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85071B18.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85071D08.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85071D38.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85071D78.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85071DC8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85071DF4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85071E20.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85071E3C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85071E58.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85071ED4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85071F14.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85071F54.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85071F80.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85071FB0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85071FDC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_850721A4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_850721E8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85072208.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_850722F0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8507233C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85072360.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85072388.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_850723AC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_850723E0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85072420.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8507266C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85072740.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_850727AC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_850727F0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85072918.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85072940.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85072968.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_850729B4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_850729D0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85072A14.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85072A40.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85072A7C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85072AF8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85072B44.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85072DA0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85072DD8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85072E38.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85072E7C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85072E98.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85072EC0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85072EF4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85072F10.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8507304C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85073054.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85073070.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85073078.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_850730A4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_850730D0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85073118.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8507342C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_850738E8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_850739A4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_850739C0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85073A28.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85073A50.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85073B38.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85073C28.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85073C48.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85073C50.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85073CB8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85073CF4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85073D34.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85073D74.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85073DA4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85073E2C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85073EA4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85073F1C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85073F54.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85073F5C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85073F78.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85073FA0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85074644.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85074664.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_850746F0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_850747E4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85074840.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85074870.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8507488C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_850748F4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8507490C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85074980.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85074A44.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85074A6C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85074A94.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85074B7C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85074BD8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85074BEC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85074C00.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85074C80.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85074DEC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85074E04.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85074E80.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85074EE8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85074F30.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85074F48.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85074FD4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_85075050.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_850750A4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_850750C4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_6AD30/func_8507515C.s")
