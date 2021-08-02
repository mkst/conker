#include <n_libaudio.h>

extern s32  D_800E0E00;
extern s32  D_800E0E04;
extern s32  D_800E0E10;
extern s16  D_800E0E14;
extern s16  D_800E0E16;
extern u8   D_800E0E18;
extern u8   D_800E0E2C;
extern s32  D_800E0E20;
extern s32  D_800E0E24;
extern s32  D_800E0E28;
extern s32  *D_800E0E30; // 0x8000
extern s32  D_800E0D80; // libaudio struct?
extern s16  D_800E0DB0;
extern s16  D_800E0DB2;
extern s32  D_800E0DD8;
extern s32  D_800E0DE0;
extern s32  D_800E0DE4;
extern s32  D_800E0DFC;


#pragma GLOBAL_ASM("asm/nonmatchings/libultra/audio/game_21FC90/func_151F27E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/audio/game_21FC90/func_151F2890.s")

void func_151F2960(s32 arg0, s32 arg1) {
    if (D_800E0DFC == 0) {
        return;
    }
    D_800E0E04 = 4;
    if (D_800E0E2C == 0) {
      D_800E0E2C = 1;
        D_800E0E30 = allocate_memory(0x8000, 0xFF, 2, 1);
        if (D_800E0E30 == 0) {
            D_800E0E2C = 0;
            return;
        }
        D_800E0E20 = func_1502B5C8(0, 2, 0x17, 4);
        if (D_800E0E20 != 0) {
            func_100043B4(D_800E0E20, 0xFF);
        }
        D_800E0E24 = func_1502B5C8(0, 2, 0x17, 5);
        if (D_800E0E24 != 0) {
            func_100043B4(D_800E0E24, 0xFF);
        }
        D_800E0E28 = func_1502B5C8(0, 2, 0x17, 6);
        if (D_800E0E28 != 0) {
            func_100043B4(D_800E0E28, 0xFF);
        }
        if ((D_800E0E20 == 0) || (D_800E0E24 == 0) || (D_800E0E28 == 0)) {
            if (D_800E0E20 != 0) {
                func_10004074(D_800E0E20);
            }
            if (D_800E0E24 != 0) {
                func_10004074(D_800E0E24);
            }
            if (D_800E0E28 != 0) {
                func_10004074(D_800E0E28);
            }
            func_10004074(D_800E0E30);
            D_800E0E30 = 0;
            D_800E0E2C = 0;
            return;
        }
        func_151F3DE0();
    }
    D_800E0D80 = arg0;
    D_800E0DE0 = arg1;
    D_800E0DE4 = 0;
    D_800E0E10 = 0;
    D_800E0E18 = 5;
    D_800E0E04 = 5;
}

void func_151F2BA8(void) {
    u32 mask = osSetIntMask(1);
    D_800E0E04 = 3;
    osSetIntMask(mask);
}

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/audio/game_21FC90/func_151F2BE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/audio/game_21FC90/func_151F2C4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/audio/game_21FC90/func_151F2CDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/audio/game_21FC90/func_151F2D6C.s")

void func_151F2DFC(s32 arg0, s32 arg1) {
    if (arg0 >= 0x80) {
        arg0 = (u16)0x7F;
    } else {
        if (arg0 < 0) {
            arg0 = (u16)0;
        }
    }
    D_800E0E16 = arg0;
    if (arg1 != 0) {
        D_800E0E14 = (s16) D_800E0E16;
    }
}

void func_151F2E4C(s32 arg0, s32 arg1) {
    D_800E0DB2 = arg0;
    D_800E0DB0 = arg1;
    if (D_800E0DD8 == 0) {
        D_800E0DD8 = 2;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/audio/game_21FC90/func_151F2E88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/audio/game_21FC90/func_151F39E4.s")

void func_151F3C1C(s32 arg0) {
    D_800E0E00 = arg0;
}

void func_151F3C34(s32 arg0) {
    D_800E0DFC = arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/audio/game_21FC90/func_151F3C4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/audio/game_21FC90/func_151F3D78.s")
