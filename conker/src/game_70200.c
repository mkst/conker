#include <ultra64.h>
#include <libc/stdarg.h>
#include <libc/string.h>

#define func_15043BB8 func_15043BB8_hdrdecl
#include "functions.h"
#undef func_15043BB8
#include "variables.h"

void func_15042ECC(s32 arg0, s32 *arg1);


void func_15042D50(void) {
    D_800CBD64 = 0;
    func_15043384(0);
}

void func_15042D78(u8 arg0) {
    D_800CBD74 = arg0;
}

void func_15042D94(s32 arg0, s32 arg1, u8 arg2, s32 arg3, ...) {
    va_list ap;
    s32 sp24[16];
    s32 i;

    D_800CBD74 = arg2;
    D_800CBD70 = arg0;
    D_800CBD72 = arg1;
    va_start(ap, arg3);
    for (i = 0; i < 16; i++) {
        sp24[i] = va_arg(ap, s32);
    }
    func_15042ECC(arg3, sp24);
}

void func_15042E3C(s32 arg0, ...) {
    va_list ap;
    s32 sp24[16];
    s32 i;

    va_start(ap, arg0);
    for (i = 0; i < 16; i++) {
        sp24[i] = va_arg(ap, s32);
    }
    func_15042ECC(arg0, sp24);
}

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
s32 func_15043A20(u8 *arg0, s32 arg1, s32 arg2, u8 *arg3, s32 arg4) {
    s32 amt;

    while (arg4 != 0) {
        if (arg1 < arg2 + arg4) {
            amt = arg1 - arg2;
        } else {
            amt = arg4;
        }
        memcpy(arg0 + arg2, arg3, amt);
        arg2 += amt;
        arg3 += amt;
        arg4 -= amt;
        if (arg2 >= arg1) {
            arg2 = 0;
        }
    }
    return arg2;
}

s32 func_15043AC8(u8 *arg0, s32 arg1, s32 arg2, u8 *arg3, s32 arg4) {
    s32 amt;

    while (arg4 != 0) {
        if (arg1 < arg2 + arg4) {
            amt = arg1 - arg2;
        } else {
            amt = arg4;
        }
        memcpy(arg3, arg0 + arg2, amt);
        arg2 += amt;
        arg3 += amt;
        arg4 -= amt;
        if (arg2 >= arg1) {
            arg2 = 0;
        }
    }
    return arg2;
}

s32 func_15043B70(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 amt;

    while (arg3 != 0) {
        if (arg1 < arg2 + arg3) {
            amt = arg1 - arg2;
        } else {
            amt = arg3;
        }
        arg2 += amt;
        arg3 -= amt;
        if (arg2 >= arg1) {
            arg2 = 0;
        }
    }
    return arg2;
}
s32 func_15043BB8(struct105 *arg0, u8 *arg1, s32 arg2) {
    s32 write;

    if (arg2 != 0) {
        if (arg1 != 0) {
            arg2 += 4;
            arg2 = (arg2 + 3) & ~3;
            write = arg0->unkC;
            if (write < arg0->unk8) {
                if (!(write + arg2 < arg0->unk8)) {
                    return 1;
                }
            } else {
                if (!(write + arg2 - arg0->unk4 < arg0->unk8)) {
                    return 1;
                }
            }
            arg2 -= 4;
            arg0->unkC = func_15043A20(arg0->unk0, arg0->unk4,
                             func_15043A20(arg0->unk0, arg0->unk4, write, (u8 *)&arg2, 4),
                             arg1, arg2);
        }
    }
    return 0;
}

s32 func_15043CA4(struct105 *arg0, u8 *arg1, s32 arg2) {
    s32 readpos;
    s32 len;

    len = 0;
    if (arg0->unkC == arg0->unk8) {
        return 0;
    }
    readpos = func_15043AC8(arg0->unk0, arg0->unk4, arg0->unk8, (u8 *)&len, 4);
    if (arg2 < len) {
        arg2--;
        readpos = func_15043AC8(arg0->unk0, arg0->unk4, readpos, arg1, arg2);
        arg1[arg2] = 0;
        readpos = func_15043B70(arg0->unk0, arg0->unk4, readpos, len - arg2);
    } else if (len != 0) {
        readpos = func_15043AC8(arg0->unk0, arg0->unk4, readpos, arg1, len);
    }
    arg0->unk8 = readpos;
    return len;
}
