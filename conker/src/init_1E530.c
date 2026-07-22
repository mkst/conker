#include <ultra64.h>

#include "functions.h"
#include "variables.h"

// File-local 8-byte audio command (w0/w1). struct56 in structs.h is 12 bytes
// (self-pointer unk8), but this file advances by 8 bytes per command.
typedef struct {
    /* 0x0 */ s32 unk0;
    /* 0x4 */ s32 unk4;
} A8;

// File-local view of struct55 with an inline unk2C[] array (structs.h declares
// it as a pointer, but the asm uses a single-load array access).
typedef struct {
    /* 0x00 */ s16 unk0;
    /* 0x02 */ s16 unk2;
    /* 0x04 */ s32 unk4;
    /* 0x08 */ s32 unk8;
    /* 0x0C */ u8 pad[0x1C];
    /* 0x28 */ s32 unk28;
    /* 0x2C */ void *unk2C[1];
} A55;

// arg0 to the buffer-loader helpers: unk0 count at 0x0, inline unk20[]/unk28[] arrays.
typedef struct {
    /* 0x00 */ s32 unk0;
    /* 0x04 */ u8 pad[0x1C];
    /* 0x20 */ s32 unk20[2];
    /* 0x28 */ s32 unk28[1];
} A20;

// arg1->unk24 target: inline unk14[] address array, f32 unk24, s32 unk28.
typedef struct {
    /* 0x00 */ u8 pad0[0x14];
    /* 0x14 */ void *unk14[4];
    /* 0x24 */ f32 unk24;
    /* 0x28 */ s32 unk28;
} A24;

// arg1 to func_1001F28C (also passed to func_1001FA78 as a matrix).
typedef struct {
    /* 0x00 */ s32 unk0;
    /* 0x04 */ s32 unk4;
    /* 0x08 */ u8 pad8[0x10];
    /* 0x18 */ s32 unk18;
    /* 0x1C */ u8 pad1C[0x8];
    /* 0x24 */ A24 *unk24;
    /* 0x28 */ s32 unk28;
} A_arg1;

A8 *func_1001F5A4(A20 *arg0, s32 arg1, u32 arg2, s32 arg3, s32 arg4, A8 *arg5);


#pragma GLOBAL_ASM("asm/nonmatchings/init_1E530/func_1001E530.s")
#pragma GLOBAL_ASM("asm/nonmatchings/init_1E530/func_1001ED6C.s")
// _n_loadOutputBuffer ?
// _n_loadBuffer ?
A8 *func_1001F28C(A20 *arg0, A_arg1 *arg1, s32 arg2, s32 arg3, A8 *arg4) {
    A8 *local54;
    s32 local50;
    s32 local4C;
    s32 local48;
    s32 local44;
    f32 local40;
    f32 local3C;
    f32 local38;
    s32 local34;
    s32 local30;
    s32 local2C;
    s16 local2A;
    A8 *local24;

    local54 = arg4;
    local48 = 0x2E0;
    local34 = 0;
    local2C = 0xB8;
    if (arg1->unk24 != 0) {
        local30 = arg1->unk4 - arg1->unk0;
        local38 = func_1001FA78((f32 (*)[4]) arg1, local2C);
        local38 = local38 / (f32) local30;
        local38 = (f32) (s32) (local38 * 32768.0f);
        local38 = local38 / 32768.0f;
        local3C = 1.0f - local38;
        local40 = arg1->unk24->unk24 + (local3C * (f32) local2C);
        local4C = (s32) local40;
        arg1->unk24->unk24 = local40 - (f32) local4C;
        local44 = arg0->unk28[arg2] + (-(arg1->unk4 - arg1->unk18)) * 2;
        local34 = (local44 & 7) >> 1;
        local54 = func_1001F5A4(arg0, arg2, local44 - (local34 * 2), local48, local4C + local34, local54);
        local50 = (s32) (local3C * 32768.0f);
        local2A = arg3 >> 8;
        local24 = local54++;
        local24->unk0 = (osVirtualToPhysical(arg1->unk24->unk14[arg2]) & 0xFFFFFF) | 0x5000000;
        local24->unk4 = ((arg1->unk24->unk28 & 3) << 30) | ((local50 & 0xFFFF) << 0xE) | (((local48 + (local34 * 2)) & 0xFFF) << 2) | (local2A & 3);
        arg1->unk24->unk28 = 0;
        arg1->unk18 = arg1->unk18 + (local4C - local2C);
    } else {
        local44 = arg0->unk28[arg2] + (-arg1->unk4) * 2;
        local54 = func_1001F5A4(arg0, arg2, local44, arg3, 0xB8, local54);
    }
    return local54;
}

A8 *func_1001F5A4(A20 *arg0, s32 arg1, u32 arg2, s32 arg3, s32 arg4, A8 *arg5) {
    A8 *sp34;
    s32 sp30;
    s32 sp2C;
    u32 sp28;
    u32 sp24;
    A8 *sp20;
    A8 *sp1C;
    A8 *sp18;

    sp34 = arg5;
    sp24 = arg0->unk20[arg1] + (arg0->unk0 * 2);
    if (arg2 < (u32) arg0->unk20[arg1]) {
        arg2 += arg0->unk0 * 2;
    }
    sp28 = (arg4 * 2) + arg2;
    if (sp28 > sp24) {
        sp30 = (s32) (sp28 - sp24) >> 1;
        sp2C = (s32) (sp24 - arg2) >> 1;
        sp20 = sp34++;
        sp20->unk0 = (((sp2C * 2) & 0xFFF) << 0xC) | 0x4000000 | (arg3 & 0xFFF);
        sp20->unk4 = osVirtualToPhysical((void *) arg2);
        sp1C = sp34++;
        sp1C->unk0 = (((sp30 * 2) & 0xFFF) << 0xC) | 0x4000000 | ((arg3 + (sp2C * 2)) & 0xFFF);
        sp1C->unk4 = osVirtualToPhysical((void *) arg0->unk20[arg1]);
        arg0 = arg0;
    } else {
        sp18 = sp34++;
        sp18->unk0 = (((arg4 * 2) & 0xFFF) << 0xC) | 0x4000000 | (arg3 & 0xFFF);
        sp18->unk4 = osVirtualToPhysical((void *) arg2);
    }
    return sp34;
}

A8 *func_1001F79C(A20 *arg0, s32 arg1, u32 arg2, s32 arg3, A8 *arg4) {
    A8 *sp34;
    s32 sp30;
    s32 sp2C;
    u32 sp28;
    u32 sp24;
    A8 *sp20;
    A8 *sp1C;
    A8 *sp18;

    sp34 = arg4;
    sp24 = arg0->unk20[arg1] + (arg0->unk0 * 2);
    if (arg2 < (u32) arg0->unk20[arg1]) {
        arg2 += arg0->unk0 * 2;
    }
    sp28 = arg2 + 0x170;
    if (sp28 > sp24) {
        sp30 = (s32) (sp28 - sp24) >> 1;
        sp2C = (s32) (sp24 - arg2) >> 1;
        sp20 = sp34++;
        sp20->unk0 = (((sp2C * 2) & 0xFFF) << 0xC) | 0x6000000 | (arg3 & 0xFFF);
        sp20->unk4 = osVirtualToPhysical((void *) arg2);
        sp1C = sp34++;
        sp1C->unk0 = (((sp30 * 2) & 0xFFF) << 0xC) | 0x6000000 | ((arg3 + (sp2C * 2)) & 0xFFF);
        sp1C->unk4 = osVirtualToPhysical((void *) arg0->unk20[arg1]);
        arg0 = arg0;
    } else {
        sp18 = sp34++;
        sp18->unk0 = (arg3 & 0xFFF) | 0x6170000;
        sp18->unk4 = osVirtualToPhysical((void *) arg2);
    }
    return sp34;
}

A8 *func_1001F978(A55 *arg0, s32 arg1, s32 arg2, A8 *arg3) {
    A8 *sp24;
    s16 sp22;
    A8 *sp1C;
    A8 *sp18;

    sp24 = arg3;
    sp22 = arg2 >> 8;

    sp1C = sp24++;
    sp1C->unk0 = 0xB000020;
    sp1C->unk4 = osVirtualToPhysical(&arg0->unk8);

    sp18 = sp24++;
    sp18->unk0 = ((arg0->unk28 & 0xFF) << 0x10) | 0xE000000 | (arg0->unk2 & 0xFFFF);
    sp18->unk4 = (osVirtualToPhysical(arg0->unk2C[arg1]) & 0xFFFFFF) | ((sp22 & 0xFF) << 0x18);
    arg0->unk28 = 0;
    return sp24;
}

f32 func_1001FA78(f32 arg0[4][4], s32 arg1) {
    f32 tmp;

    arg0[1][1] += arg0[1][0] * arg1;
    if (arg0[1][1] > 2.0f) {
        arg0[1][1] -= 4.0f;
    }
    else {
        arg0[1][1] = arg0[1][1]; // ???
    }

    tmp = arg0[1][1];
    tmp = tmp < 0.0f ? -tmp : tmp;
    tmp = tmp - 1.0f;

    return tmp * arg0[1][3];
}
