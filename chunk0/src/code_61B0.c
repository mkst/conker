#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_850061B0(void) {
    func_80023790(&D_800BE900, &D_800BE2D0, 8); // osCreateMesgQueue
    func_800237C0(OS_EVENT_SI, &D_800BE900, D_800BE9E0);  // osSetEventMesg
    D_800BE730.unk0 = &D_800BE748;
    D_800BE730.unk4 = &D_800BE74E;
    D_800BE730.unk8 = &D_800BE754;
    D_800BE730.unkC = &D_800BE75A;
    func_85007644();
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_61B0/func_85006234.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_61B0/func_850064E0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_61B0/func_85006590.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_61B0/func_85006BEC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_61B0/func_8500707C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_61B0/func_85007168.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_61B0/func_8500727C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_61B0/func_85007360.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_61B0/func_85007440.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_61B0/func_85007558.s")

void func_85007644(void) {
}

void func_8500764C(void) {
    D_80082BB4 = (u8)6;
    D_800BE3EC = (u8)0;
}

void func_85007668(void) {
    D_80082BB4 = (u8)7;
    D_800BE3EC = (u8)0;
}

void func_85007684(void) {
    D_80082BB4 = (u8)4;
    D_800BE3EC = (u8)0;
}

void func_850076A0(void) {
    D_80082BB4 = (u8)5;
    D_800BE3EC = (u8)0;
}

void func_850076BC(s32 arg0) {
    if (arg0 < 0) {
        func_850064E0();
    }
    if ((arg0 >= 0) && (arg0 < 4) && (D_800BE616 == 0)) {
        D_80082BB4 = (u8)1;
        D_800BE3EC = arg0;
    }
}

void func_85007718(s32 arg0) {
    if ((arg0 >= 0) && (arg0 < 3) && (D_800BE616 == 0)) {
        D_80082BB4 = (u8)2;
        D_800BE3EC = arg0;
    }
}

void func_85007750(s32 arg0) {
    if ((arg0 >= 0) && (arg0 < 3)) {
        D_80082BB4 = (u8)3;
        D_800BE3EC = arg0;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_61B0/func_85007778.s")
