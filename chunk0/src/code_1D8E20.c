#include <ultra64.h>

#include "functions.h"
#include "variables.h"


u8 func_151D8E20(void) {
    if ((D_800BE9F0 == 0) && (func_150A29C8(0, 0x1C) == 0)) {
        return (u8)0xAU;
    }
    return D_800E0A10;
}

// what is this? - similar to func_151D8FE0
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_151D8E6C.s")

u8 func_151D8EB0(void) {
    return 0x75; // 117
}

u8 func_151D8EBC(void) {
    return 0x1D; // 29
}

u8 func_151D8EC8(void) {
    s32 tmp;

    if (func_150ADA20() & 1) {
        tmp = 0x11;
    } else {
        tmp = 0x93;
    }
    return tmp;
}

u8 func_151D8EFC(void) {
    s32 tmp;

    if (func_150ADA20() & 1) {
        tmp = 0x5A;
    } else {
        tmp = 0x5B;
    }
    return tmp;
}

// similar to func_151D8E6C
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_151D8F30.s")

u8 func_151D8F7C(void) {
    s32 tmp;

    if ((func_150ADA20() & 1) != 0) {
        tmp = 0x66;
    } else {
        tmp = 0x67;
    }
    return tmp;
}

u8 func_151D8FB0(void) {
    return 0x95;
}

u8 func_151D8FBC(void) {
    return 0x9F;
}

u8 func_151D8FC8(void) {
    return 0xB3;
}

u8 func_151D8FD4(void) {
    return 0x75;
}

// handwritten?
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_151D8FE0.s")

// big struct definition
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_151D9014.s")

s32 func_151D93F4(void *arg0, void *arg1) {
    s32 res;

    if (func_151D9450(arg0, arg1) != 0) {
        if (func_151D9534(arg0, arg1) != 0) {
            res = 1;
        } else {
            res = 0;
        }
    } else {
        res = 0;
    }
    return res;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_151D9450.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_151D9534.s")

// hand-written?
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_151D97A8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_151D9820.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_151D9878.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_151D98D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_151D9918.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_151D9960.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_151D99C8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_151D9A20.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_151D9A68.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_151D9AC0.s")

// more handwritten
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_151D9ADC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_151D9B34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_151D9B8C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_151D9EB0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_151D9FC0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_151DA08C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_151DA368.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_151DA6A8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_151DA6F8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_151DA938.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_151DAA88.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_151DAB58.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_151DADA0.s")


#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_151DAE28.s")

void func_151DB004(struct218 *arg0) {
    arg0->unk14 = (func_150ADA20() % 0x38U) + 80;
    arg0->unk15 = 0;
    arg0->unk16 = 0;
    arg0->unk18 = (func_150ADA20() % 0x2EU) + 180;
    arg0->unk19 = 0;
    arg0->unk1A = 0;
}

void func_151DB068(struct218 *arg0) {
    arg0->unk14 = arg0->unk15 = (func_150ADA20() % 0x38U) + 100;
    arg0->unk16 = 0;
    arg0->unk18 = arg0->unk19 = (func_150ADA20() % 0x2EU) + 180;
    arg0->unk1A = 0;
}


void func_151DB0CC(struct218 *arg0) {
    arg0->unk14 = (func_150ADA20() % 0x38U) + 80;
    arg0->unk15 = (func_150ADA20() % 0x38U) + 80;
    arg0->unk16 = 0;
    arg0->unk18 = (func_150ADA20() % 0x2EU) + 180;
    arg0->unk19 = (func_150ADA20() % 0x2EU) + 180;
    arg0->unk1A = 0;
}

void func_151DB15C(struct218 *arg0) {
    arg0->unk14 = (func_150ADA20() % 0x38U) + 80;
    arg0->unk15 = (func_150ADA20() % 0x38U) + 80;
    arg0->unk16 = 0;
    arg0->unk18 = (func_150ADA20() % 0x2EU) + 180;
    arg0->unk19 = (func_150ADA20() % 0x2EU) + 180;
    arg0->unk1A = 0;
}


void func_151DB1EC(struct218 *arg0) {
    arg0->unk14 = (func_150ADA20() % 0x38U) + 80;
    arg0->unk15 = (func_150ADA20() % 0x38U) + 80;
    arg0->unk16 = 0;
    arg0->unk18 = (func_150ADA20() % 0x2EU) + 180;
    arg0->unk19 = (func_150ADA20() % 0x2EU) + 180;
    arg0->unk1A = 0;
}

void func_151DB27C(struct218 *arg0) {
    arg0->unk14 = 0xFF;
    arg0->unk15 = 0xFF;
    arg0->unk16 = 0xFF;
    arg0->unk18 = 0xB4;
    arg0->unk19 = 0xC8;
    arg0->unk1A = 0xC8;
}

void func_151DB2A8(struct218 *arg0) {
    arg0->unk14 = 0;
    arg0->unk15 = 200;
    arg0->unk16 = 0;
    arg0->unk18 = 0;
    arg0->unk19 = 200;
    arg0->unk1A = 0;
}

void func_151DB2CC(struct218 *arg0) {
    arg0->unk14 = 0;
    arg0->unk15 = (func_150ADA20() % 0x38U) + 80;
    arg0->unk16 = 0;
    arg0->unk18 = 0;
    arg0->unk19 = (func_150ADA20() % 0x2EU) + 180;
    arg0->unk1A = 0;
}

void func_151DB330(struct218 *arg0) {
    arg0->unk14 = (func_150ADA20() % 0x15U) + 95;
    arg0->unk15 = (func_150ADA20() % 0x15U) + 95;
    arg0->unk16 = (func_150ADA20() % 0xBU) + 45;
    arg0->unk18 = (func_150ADA20() & 0xF) + 58;
    arg0->unk19 = (func_150ADA20() & 0xF) + 60;
    arg0->unk1A = (func_150ADA20() % 0xBU) + 25;
}

void func_151DB3D8(struct218 *arg0) {
    arg0->unk14 = 0;
    arg0->unk15 = arg0->unk16 = (func_150ADA20() % 0x38U) + 80;
    arg0->unk18 = 0;
    arg0->unk19 = arg0->unk1A = (func_150ADA20() % 0x2EU) + 180;
}

void func_151DB43C(struct218 *arg0) {
    arg0->unk14 = (func_150ADA20() % 0x38U) + 80;
    arg0->unk15 = 0;
    arg0->unk16 = (func_150ADA20() % 0x38U) + 80;
    arg0->unk18 = (func_150ADA20() % 0x2EU) + 180;
    arg0->unk19 = 0;
    arg0->unk1A = (func_150ADA20() % 0x2EU) + 180;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_151DB4CC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_151DB5D0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_151DB97C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_151DBAA8.s")

// typedef struct {
//     s16 unk0; // sp24
//     s16 unk2;
//     s16 unk4;
//     s16 unk6;
//     // s32 unk8[3]; // sp2C
//     s32 unk8;
//     s32 unkC;
//     s32 unk10;
//     f32 unk14;
//     f32 unk18;
//     f32 unk1C;
//     f32 unk20; // sp44
//     f32 unk24;
//     f32 unk28;
//     s16 unk2C; // sp50
//     s16 unk2E;
//     s16 unk30; // sp54
//     s16 unk32;
//     s16 unk34;
//     s16 unk36;
//     s16 unk38;
//     s16 unk3A;
//     s8  unk3C; // sp60
//     u8  pad3D[0x3];
//     f32 unk40; // sp64
//     s16 unk44;
//     s16 unk46;
//     s32 unk48;
// } struct218XXX;
//
// void func_15153F18(s32, s32, s32, u8, s32);
// void func_151DBAA8(struct00 *arg0, s32 arg1, u8 arg2, u8 arg3, s32 arg4) {
//
//     struct218XXX tmp;
//
//     // tmp.unk8[0] = arg0->unk0;
//     // tmp.unk8[1] = arg0->unk4;
//     // tmp.unk8[2] = arg0->unk8;
//
//     tmp.unk2C = arg1;
//     tmp.unk3C = arg2;
//
//     tmp.unk0 = 0;
//     tmp.unk2 = 0xFF;
//     tmp.unk4 = -0x40;
//     tmp.unk6 = 0x2E;
//     tmp.unk8 = arg0->unk0;
//     tmp.unkC = arg0->unk4;
//     tmp.unk10 = arg0->unk8;
//
//     tmp.unk30 = 3;
//     tmp.unk2E = 0;
//     tmp.unk32 = 2;
//     tmp.unk34 = 0x1E;
//     tmp.unk36 = 0x1E;
//     tmp.unk38 = 0x9B;
//     tmp.unk14 = 5.5f;
//
//     tmp.unk18 = D_800AB4C0;
//     tmp.unk1C = D_800AB4C4;
//     tmp.unk20 = D_800AB4C8;
//     tmp.unk24 = 10.0f;
//     tmp.unk28 = D_800AB4CC;
//
//     tmp.unk3A = 0x64;
//     tmp.unk44 = 0x10;
//     tmp.unk46 = 0xF;
//     tmp.unk48 = 0;
//     tmp.unk40 = 0.5f;
//
//     func_15153F18(&tmp, &tmp.unk8, 0, arg3, arg4);
// }

void func_151DBBD4(struct17 *arg0, s32 arg1, u8 *arg2, u8 arg3, s32 arg4) {
    struct17 tmp;
    struct217 tmp2;

    tmp.unk0 = arg0->unk0;
    tmp.unk4 = arg0->unk4 + 5.0f;
    tmp.unk8 = arg0->unk8;

    tmp2.unkF = *arg2;
    tmp2.unk0 = func_150ADA68();
    tmp2.unk4 = func_150ADA20();

    func_151D9B8C(tmp2.unkF, (tmp2.unk0 * 25.0f) + 10.0f, ((tmp2.unk4 % 0x38U) + 0xC8), arg1 + 4, &tmp, (func_150ADA20() % 0x97U) + 0x96, 0, 1, 0, arg3, arg4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_151DBCBC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_151DBE80.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_151DC034.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_151DC260.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1D8E20/func_151DC484.s")

// typedef struct {
//     s16 unk10; // sp24
//     s16 unk12; // sp26
//     s16 unk14;
//     s16 unk16; // sp2A
//     s32 unk18[3];
//     s16 unk24; // sp38;
//     s16 unk26; // sp3A
//     f32 unk28; // sp3C
//     f32 unk2C; // sp40
//     s16 unk30; // sp44
//     s16 unk32; // sp46
//     f32 unk34; // sp48;
//     f32 unk38; // sp4C;
//     s8  unk3C; // sp50;
//     s8  unk3D; // sp51;
//     u8  unk3E[2]; //
//     f32 unk40; // sp54
//     f32 unk44; // sp58
//     s8  unk48; // sp5C
//     u8  unk49; // sp5D
//     u8  unk4A[2];
//     f32 unk4C; // sp60
//     s8  unk50; // sp64
//     u8  pad51[3];
//     f32 unk54; // sp68
// } struct217;
//
// typedef struct {
//     s16 unk58; // sp6C
//     s16 unk5A; // sp6E
//     s16 unk5C; // sp70
//     s16 unk5E; // sp72
//     s32 unk60[3]; // sp74
//     f32 unk6C; // sp80
//     f32 unk70; // sp84
//     f32 unk74; // sp88
//     f32 unk78; // sp8C
//     f32 unk7C; // sp90
//     f32 unk80; // sp94
//     s16 unk84; // sp98
//     s16 unk86; // sp9A
//     s16 unk88; // sp9C
//     s16 unk8A; // sp9E
//     s16 unk8C; // spA0
//     s16 unk8E; // spA2
//     s16 unk90; // spA4
//     s16 unk92; // spA6
//     u8  unk94; // spA8;
//     u8  pad95[3];
//     f32 unk98; // spAC;
//     s16 unk9C; // spB0
//     s16 unk9E; // spB2
//     s32 unkA0; // spB4
// } struct218;
//
// void func_151DC484(struct00 *arg0, s32 arg1, u8 arg2, u8 arg3, s32 arg4) {
//     struct218 tmp2;
//     struct217 tmp;
//
//     tmp2.unk60[0] = arg0->unk0; // sp74.unk0 = (s32) arg0->unk0;
//     tmp2.unk60[1] = arg0->unk4; // sp74.unk4 = (s32) arg0->unk4;
//     tmp2.unk60[2] = arg0->unk8; // sp74.unk8 = (s32) arg0->unk8;
//
//     tmp2.unk5A = 0xFF;   // sp6E = 0xFF;
//     tmp2.unk5C = -0x40;  // sp70 = -0x40;
//     tmp2.unk84 = 8;      // sp98 = 8;
//     tmp2.unk86 = 6;      // sp9A = 6;
//     tmp2.unk58 = 0;      // sp6C = 0;
//     tmp2.unk88 = 3;      // sp9C = 3;
//     tmp2.unk8A = 0;      // sp9E = 0;
//     tmp2.unk5E = 0x28;   // sp72 = 0x28;
//     tmp2.unk8C = 0x3C;   // spA0 = 0x3C;
//     tmp2.unk8E = 0x28;   // spA2 = 0x28;
//
//     tmp2.unk6C = 3.0f;   // sp80 = 3.0f;
//     tmp2.unk90 = 100;     // spA4 = 0x64;
//     tmp2.unk92 = 100;     // spA6 = 0x64;
//     tmp2.unk9C = 16;      // spB0 = 0x10;
//     tmp2.unk9E = 15;      // spB2 = 0xF;
//     tmp2.unk70 = 2.0f;       // sp84 = 2.0f;
//     tmp2.unk74 = D_800AB4E4; // sp88 = D_800AB4E4;
//     tmp2.unk78 = D_800AB4E8; // sp8C = D_800AB4E8;
//     tmp2.unk7C = 8.0f;       // sp90 = 8.0f;
//     tmp2.unk80 = 5.0f;       // sp94 = 5.0f;
//     tmp2.unk98 = 1.0f;       // spAC = 1.0f; 0x3f80
//     tmp2.unk94 = arg2;       // spA8 = arg2;
//     tmp2.unkA0 = 0;      // spB4 = 0;
//
//     // func_15153F18(&sp6C, &sp74, arg1, arg3, arg4);
//     func_15153F18(&tmp2, &tmp2, arg1, arg3, arg4);
//
//     tmp.unk18[0] = arg0->unk0; // sp2C.unk0 = (s32) arg0->unk0;
//     tmp.unk18[1] = arg0->unk4; // sp2C.unk4 = (s32) arg0->unk4;
//     tmp.unk18[2] = arg0->unk8; // sp2C.unk8 = (s32) arg0->unk8;
//
//     tmp.unk24 = 0xC; // sp38 = 0xC;
//     tmp.unk12 = 0xFF;   // sp26 = 0xFF;
//     tmp.unk26 = 6;      // sp3A = 6;
//     tmp.unk10 = 0;      // sp24 = 0;
//     tmp.unk14 = -0x40;  // sp28 = -0x40;
//     tmp.unk16 = 0x1A;   // sp2A = 0x1A;
//     tmp.unk30 = 0x23;   // sp44 = 0x23;
//     tmp.unk32 = 0xF;    // sp46 = 0xF;
//     tmp.unk3C = 0x9B;   // sp50 = 0x9B;
//     tmp.unk3D = 0x64;   // sp51 = 0x64;
//     tmp.unk40 = 59.0f;  // sp54 = 59.0f;
//     tmp.unk44 = 59.0f;  // sp58 = 59.0f;
//     tmp.unk48 = 1;      // sp5C = 1;
//     tmp.unk50 = 1;      // sp64 = 1;
//     tmp.unk54 = 0.0f;   // sp68 = 0.0f;
//     tmp.unk28 = 7.0f;   // sp3C = 7.0f;
//     tmp.unk2C = 3.0f;   // sp40 = 3.0f;
//     tmp.unk34 = D_800AB4EC; // sp48 = D_800AB4EC;
//     tmp.unk38 = D_800AB4F0; // sp4C = D_800AB4F0;
//     tmp.unk49 = arg2;       // sp5D = arg2;
//     tmp.unk4C = D_800AB4F4; // sp60 = D_800AB4F4;
//     // func_15150178(&sp24, &sp2C, arg1, arg3, arg4);
//     func_15150178(&tmp, &tmp.unk18, arg1, arg3, arg4);
// }
