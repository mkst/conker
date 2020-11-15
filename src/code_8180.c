#include <ultra64.h>

#include "functions.h"
#include "variables.h"


// this one is a monster
#pragma GLOBAL_ASM("asm/nonmatchings/code_8180/func_80008180.s")

void func_800084D8(u8 arg0) {
    if ((func_80017A80(D_8003C900[arg0]) == 0) || (func_80017A80(D_8003C900[arg0]) == 3)) {
        func_80017AA0(D_8003C900[arg0]);
    }
}

void func_8000853C(u8 arg0) {
    func_80017A80(D_8003C900[arg0]);
}

void func_80008570(u8 arg0, s32 arg1) { // arg1 is OSMesgQueue ?
    func_80017AF0(D_8003C900[arg0], arg1);
}

void func_800085A4(s32 arg0, s32 arg1, s32 arg2) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_8180/func_800085B8.s")

void func_800085F8(u8 arg0, s32 arg1) {
    func_80017BB8(D_8003C900[arg0], arg1);
}

void func_8000862C(u8 arg0, s32 arg1) {
    func_80017C00(D_8003C900[arg0], arg1);
}

void func_80008660(u8 arg0, u8 arg1, u8 arg2, s32 arg3) {
    if (arg3 > 0) {
        arg3 = (arg3 * 10) / 60;
        if (arg3 == 0) {
            arg3 = 1;
        } else if (arg3 >= 128) {
            arg3 = 127;
        }
    } else {
        arg3 = 0;
    }
    func_80017C68(D_8003C900[arg0], arg1, arg2, arg3);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_8180/func_800086FC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_8180/func_80008744.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_8180/func_80008790.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_8180/func_80008824.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_8180/func_8000886C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_8180/func_800088F0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_8180/func_80008988.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_8180/func_80008A4C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_8180/func_80008A94.s")

void func_80008B2C(u8 arg0) {
    func_80017EC0(D_8003C900[arg0]);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_8180/func_80008B60.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_8180/func_80008BC0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_8180/func_80008C04.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_8180/func_80008C6C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_8180/func_80008CE8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_8180/func_80008EE0.s")

void func_80008F24(u8 arg0) {
    func_80018C60(D_8003C900[arg0]);
}

void func_80008F58(u8 arg0) {
    func_80018D50(D_8003C900[arg0]);
}
