#include <ultra64.h>

#include "functions.h"
#include "variables.h"


u8 func_851D8E20(void) {
    if ((D_800BE9F0 == 0) && (func_850A29C8(0, 0x1C) == 0)) {
        return (u8)0xAU;
    }
    return D_800E0A10;
}

// ???
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_851D8E6C.s")

u8 func_851D8EB0(void) {
    return 0x75; // 117
}

u8 func_851D8EBC(void) {
    return 0x1D; // 29
}

u8 func_851D8EC8(void) {
    s32 tmp;

    if (func_850ADA20() & 1) {
        tmp = 0x11;
    } else {
        tmp = 0x93;
    }
    return tmp;
}

u8 func_851D8EFC(void) {
    s32 tmp;

    if (func_850ADA20() & 1) {
        tmp = 0x5A;
    } else {
        tmp = 0x5B;
    }
    return tmp;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_851D8F30.s")

u8 func_851D8F7C(void) {
    s32 tmp;

    if ((func_850ADA20() & 1) != 0) {
        tmp = 0x66;
    } else {
        tmp = 0x67;
    }
    return tmp;
}

u8 func_851D8FB0(void) {
    return 0x95;
}

u8 func_851D8FBC(void) {
    return 0x9F;
}

u8 func_851D8FC8(void) {
    return 0xB3;
}

u8 func_851D8FD4(void) {
    return 0x75;
}

// dont really understand this
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_851D8FE0.s")

// big struct definition
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_851D9014.s")

// looks easy but cant get it to match
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_851D93F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_851D9450.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_851D9534.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_851D97A8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_851D9820.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_851D9878.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_851D98D0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_851D9918.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_851D9960.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_851D99C8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_851D9A20.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_851D9A68.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_851D9AC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_851D9ADC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_851D9B34.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_851D9B8C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_851D9EB0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_851D9FC0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_851DA08C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_851DA368.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_851DA6A8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_851DA6F8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_851DA938.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_851DAA88.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_851DAB58.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_851DADA0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_851DAE28.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_851DB004.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_851DB068.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_851DB0CC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_851DB15C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_851DB1EC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_851DB27C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_851DB2A8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_851DB2CC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_851DB330.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_851DB3D8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_851DB43C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_851DB4CC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_851DB5D0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_851DB97C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_851DBAA8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_851DBBD4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_851DBCBC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_851DBE80.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_851DC034.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_851DC260.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_851DC484.s")
