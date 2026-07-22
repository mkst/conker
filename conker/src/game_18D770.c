#include <ultra64.h>
#include "functions.h"
#include "variables.h"

// File-local views of structures that structs.h models incorrectly for these
// functions (structs.h's struct225 types unk18/unk1C/unk20 as inline scalars,
// but the func_15163414 family stores a struct245 payload of three f32* there).
typedef struct {
    f32 *unk0;
    f32 *unk4;
    f32 *unk8;
    s8  unkC;
    u8  unkD;
    u8  padE[0x2];
} struct245_ext;

typedef struct {
    u8  pad0[0x14];
    struct226 *unk14;
    struct245_ext unk18;
} struct225_245;

typedef struct {
    f32 unk0;
    u8  unk4;
    u8  unk5;
    u8  unk6;
    u8  unk7;
} struct243_ext;

typedef struct {
    u8  pad0[0x14];
    struct226 *unk14;
    struct243_ext unk18;
} struct225_243;

typedef struct {
    struct127 *unk0;
    u8  unk4;
    u8  pad5[0x3];
} struct244_ext;

typedef struct {
    struct127 *unk0;
    struct127 *unk4;
    u8  unk8;
    u8  unk9;
} struct244_swap;

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} coords3;

typedef struct {
    struct127 *unk0;
    u8  unk4;
    u8  unk5;
    u8  pad6[0x2];
    coords3 unk8;
    s8  unk14;
    u8  unk15;
    u8  pad16[0x2];
} struct15160A58_payload;

typedef struct {
    struct127 *unk0;
    u8  unk4;
    u8  unk5;
    u8  pad6[0x2];
    coords3 unk8;
    coords3 unk14;
    f32 unk20;
    u8  unk24;
    u8  unk25;
    u8  pad26[0x2];
} struct15160CDC_payload;

typedef struct {
    u8  pad0[0x18];
    struct244_ext unk18;
} struct225_244;

typedef struct {
    s32 unk0;
    struct244_ext *unk4;
} struct225_244_arg;

typedef struct {
    u8  pad0[0x18];
    struct244_ext unk18;
    u8  pad20[0x1D];
    u8  unk3D;
} struct225_244b;

extern void (*D_8008B37C[])(s32);
extern s32 (*D_8008B358[])(struct225_244 *, struct244_ext *, u8);

typedef struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    void *unkC;
} struct227_ext;

typedef struct {
    struct17 unk0;
    struct17 unkC;
    f32 unk18;
    f32 unk1C;
} struct151623F4_src;

s32 func_151149AC(u32);
void func_1516441C(struct225 *arg0, void *arg1);
void func_150A7960(f32 mtx[4][4], f32 arg1, s32 arg2, f32 arg3, f32 *arg4, f32 *arg5, f32 *arg6);
void func_15143134(f32 *arg0, f32 *arg1, s32 arg2);

typedef struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
} struct227_pos;

typedef struct {
    u8  pad0[0x14];
    struct226 *unk14;
    struct227_pos *unk18;
} struct225_pos;

struct225 *func_151602C0(Header *header, Header2 *header2, s32 arg2, s32 arg3, s32 arg4, s32 arg5, u8 arg6, u8 arg7, s32 offset, u8 arg9, s32 argA);
struct225 *func_1516037C(Header *src, struct226 *arg1, s32 size, u8 arg3, s32 arg4);
void func_151603FC(struct225 *arg0);
s32  func_15160600(struct225 *arg0);
s32  func_1516065C(struct225 *arg0);
s32  func_15160684(struct225 *arg0);
s32  func_151607A4(struct225 *arg0);
void func_15160954(f32 *arg0, f32 *arg1, f32 *arg2, f32 *arg3, struct225 *arg4);
void func_151618BC(u16 arg0, s16 arg1, u8 arg2, s32 arg3, struct17 *arg4, s16 arg5, s16 arg6);
s32  func_15161238(struct127 *arg0, struct127 *arg1);
struct225 *func_1516127C(s32 arg0, u8 arg1, s32 arg2);
struct225 *func_15161334(s32 arg0, u8 arg1, s32 arg2);
struct225 *func_15161408(s32 arg0, u8 arg1, s32 arg2);
struct225 *func_15161494(s32 arg0, u8 arg1, s32 arg2);
struct225 *func_15161540(s32 arg0, u8 arg1, s32 arg2);
struct225 *func_151615F8(s32 arg0, u8 arg1, u8 arg2, u8 arg3, u8 arg4, s32 arg5);
void func_151616D0(u8 arg0, u8 arg1, s32 arg2);
void func_15161714(struct225 *arg0);
void func_15161740(struct225 *arg0);
void func_1516176C(struct225 *arg0);
void func_15161798(struct225 *arg0);
void func_151617C4(struct225 *arg0);
void func_151617E4(struct225 *arg0);
void func_15161804(struct225 *arg0);
void func_15161860(struct225 *arg0);
struct225 *func_151619A0(s32 arg0, s16 arg1, u8 arg2, s32 arg3);
s32  func_15161A68(struct225 *arg0);
struct225 *func_15161E24(struct127 *arg0, u8 arg1, u8 arg2, s16 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, u8 arg8, s32 arg9);
void func_15161F2C(struct225 *arg0);
struct225 *func_15162034(s32 arg0, u8 arg1, s32 arg2);
void func_15162110(s32 arg0);
struct225 *func_15162740(s32 arg0, u8 arg1, u8 arg2, u8 arg3, s16 arg4, s8 arg5, u8 arg6, s32 arg7);
struct225 *func_1516284C(Header *header, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 arg5, u8 arg6, s32 size, u8 arg8, u8 arg9, s32 argA);
void func_15162EF8(struct239 *arg0);
void func_15162F50(struct239 *arg0);
struct225 *func_15162FAC(s32 arg0, u8 arg1, u8 arg2, u8 arg3, s16 arg4, s8 arg5, u8 arg6, s32 arg7);
struct225 *func_15163414(Header *header, f32* arg1, f32* arg2, f32* arg3, s8 arg4, u8 arg5, u8 arg6, u8 arg7, u8 arg8, u8 arg9, u8 argA, u8 argB, s32 argC, u8 argD, s32 argE);
struct225 *func_15163604(s32 arg0, u8 arg1, u8 arg2, s16 arg3, u8 arg4, s32 arg5, u8 arg6, s32 arg7);
s32  func_15163704(struct225 *arg0);
void func_1516381C(s32 arg0, u8 arg1, u8 arg2, s32 arg3);
void func_1516387C(s32 arg0, u8 arg1, s8 arg2, s16 arg3, u8 arg4, s32 arg5, u8 arg6, s32 arg7);
s32  func_151639D0(struct225 *arg0, s32 arg1, u8 arg2);
void func_15163A18(struct225 *arg0, s32 arg1, u8 arg2);
struct225 *func_15163A60(u8 arg0, u8 arg1, s32 arg2);
s32  func_15163B98(struct230 *arg0);
struct225 *func_15163BE8(s32 arg0, u8 arg1, s32 arg2);
s32  func_15163CD0(struct225 *arg0);
void func_15163CF8(struct227 *arg0, struct225 *arg1);
void func_15163DEC(struct225 *arg0, struct228 *arg1);
s32  func_15163F50(struct225 *arg0, struct225 *arg1);
struct225 *func_15164208(s32 arg0, u8 arg1, u8 arg2, s32 arg3);
s32  func_1516429C(struct237 *arg0);
void func_151643A8(struct225 *arg0, s32 arg1, u8 arg2);
s32  func_151643F8(struct225 *arg0);
void func_151644F4(struct242 *arg0, struct17 *arg1, s32 arg2, f32 arg3, f32 arg4);
s32  func_151644A8(struct242 *arg0);

struct225 *func_151602C0(Header *header, Header2 *header2, s32 arg2, s32 arg3, s32 arg4, s32 arg5, u8 arg6, u8 arg7, s32 offset, u8 arg9, s32 argA) {
    struct225 *ret;
    struct226 *sp30;

    ret = NULL;
    sp30 = func_1515D5F8(header2->unk0, header2->unk4, header2->unk8, arg2, arg3, arg4, arg5, arg6, arg7, 0);
    if (sp30 != 0) {
        ret = func_1516037C(header, sp30, offset, arg9, argA);
        if (ret != 0) {
            ret->unkE |= 2;
        } else {
            func_1515F10C(sp30);
        }
    }
    return ret;
}

struct225 *func_1516037C(Header *header, struct226 *arg1, s32 offset, u8 arg3, s32 arg4) {
    struct225 *ret = func_15167A68(53, arg4, offset + 24, 1, arg3, 1);
    if (ret == 0) {
        return NULL;
    }
    memcpy(&ret->unkE, header, 6);
    ret->unk14 = arg1;
    return ret;
}

void func_151603FC(struct225 *arg0) {
    s32 pad;
    u8 ret = 0;

    if ((arg0->unkE & 1) != 0) {
        arg0->unk10 -= D_800BE9E4;
        if (arg0->unk10 < 0) {
            ret = 1;
        }
    }
    if ((ret == 0) && (arg0->unkF != -1) && (D_8008B0F0[arg0->unkF]() == 0)) {
        ret = 1;
    }
    if (ret) {
        func_1516972C(arg0);
    }
}

// requires jump table
#pragma GLOBAL_ASM("asm/nonmatchings/game_18D770/func_151604A0.s")

s32 func_15160600(struct225 *arg0) {
    arg0->unk14->unk2F = func_151422DC(0, &D_800A6690, 0, 0xFF, 0xFF, &D_800A6698, 575);
    return 1;
}

s32 func_1516065C(struct225 *arg0) {
    func_15163CF8(&arg0->unk18, arg0);
    return 1;
}

s32 func_15160684(struct225 *arg0) {
    func_15163DEC(arg0, &arg0->unk18);
    return 1;
}

// PERMUTER CANDIDATE: best score 160 (inflated by cascade). Reconstruction is
// algorithmically exact -- build a translation matrix from arg0->unk18->unk0/4/8
// via func_150A8050, poke mtx rows 12/13/14 with (f32)unk10/12/14, transform
// D_800A66B4 through func_150A7960, store the truncated results to
// arg0->unk14->unkE/10/12, return 1. Frame size (0x88) and all stack ordering
// now match. Sole residual: the 3 arg0->unk18 pointer reloads fold to
// `lw 0x18(s0)` here, while the target dedicates a register to the field
// address (`addiu v0,s0,0x18; lw 0(v0)` x3) and puts D_800A66B4 in v1 -- a
// register-allocation tie IDO breaks the other way. One missing instr cascades
// every following offset. Needs the permuter.
s32 func_151606A8(struct225_pos *arg0) {
    struct227_pos *temp;
    struct227_pos **pp;
    f32 tmp[16];
    f32 sp3C;
    f32 sp38;
    f32 sp34;

    temp = arg0->unk18;
    pp = &arg0->unk18;
    func_150A8050(tmp, temp->unk0, temp->unk4, temp->unk8);
    tmp[12] = (*pp)->unk10;
    tmp[13] = (*pp)->unk12;
    tmp[14] = (*pp)->unk14;
    func_150A7960(tmp, D_800A66B4[0], *(s32 *)&D_800A66B4[1], D_800A66B4[2], &sp34, &sp38, &sp3C);
    arg0->unk14->unkE = sp34;
    arg0->unk14->unk10 = sp38;
    arg0->unk14->unk12 = sp3C;
    return 1;
}

s32 func_151607A4(struct225 *arg0) {
    struct227 *temp_a1 = &arg0->unk18;
    if (arg0->unk28 != 0) {
        if (temp_a1->unkC < 0.0f) {
            temp_a1->unk4 = (temp_a1->unk4 + (temp_a1->unk8 * D_800BE9A4));
            if (temp_a1->unk0 < temp_a1->unk4) {
                temp_a1->unk4 = temp_a1->unk0;
                temp_a1->unk10 -= 1;
                if (temp_a1->unk10 != 0) {
                    func_15160954(&temp_a1->unk4, &temp_a1->unk0, &temp_a1->unk8, &temp_a1->unkC, arg0);
                }
            }
        } else {
            temp_a1->unkC -= D_800BE9A4;
        }
    } else if (func_150ADA68() < D_800A6AD4) {
        temp_a1->unk10 = (func_150ADA20() % 5U) + 1;
        func_15160954(&temp_a1->unk4, &temp_a1->unk0, &temp_a1->unk8, &temp_a1->unkC, arg0);
    }
    arg0->unk14->unk2F = arg0->unk1C;
    return 1;
}

void func_15160954(f32 *arg0, f32 *arg1, f32 *arg2, f32 *arg3, struct225 *arg4) {
    s32 pad0;
    struct17 tmp;
    s32 pad1;

    *arg0 = 0.0f;
    *arg2 = *arg1 / ((func_150ADA68() * 12.0f) + 8.0f);
    *arg3 = (func_150ADA68() * 28.0f) + 1.0f;

    tmp.unk0 = arg4->unk14->unkE;
    tmp.unk4 = arg4->unk14->unk10;
    tmp.unk8 = arg4->unk14->unk12;

    if (arg4->unk2A != 0) {
        func_151618BC(25000, 0, 0, 0, &tmp, 500, 1500);
    }
}

struct225 *func_15160A58(struct127 *arg0, u8 arg1, coords3 *arg2, u8 arg3, s16 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10, s8 arg11, s32 arg12, u8 arg13, u8 arg14, s32 arg15) {
    struct225 *temp_v0;
    Header header;
    struct15160A58_payload src;
    Header2 header2;

    if (arg0 == NULL) {
        return NULL;
    }

    header.unk0 = arg3;
    header.unk1 = 5;
    header.unk2 = arg4;
    header.unk4 = 0x10;
    src.unk0 = arg0;
    src.unk4 = arg0->unique_id;
    src.unk5 = arg1;
    src.unk8 = *arg2;
    src.unk14 = arg11;
    src.unk15 = arg13;

    header2.unk0 = 0;
    header2.unk4 = 0;
    header2.unk8 = 0;

    temp_v0 = func_151602C0(&header, &header2, arg5, arg6, arg7, arg8, 0xFF, 0, arg12 + sizeof(src), arg14, arg15);
    if (temp_v0 != NULL) {
        memcpy(&temp_v0->unk18, &src, sizeof(src));
    }
    return temp_v0;
}

typedef struct {
    u8  pad0[0x14];
    struct226 *unk14;
    struct15160A58_payload unk18;
} struct225_A58v;

// PERMUTER CANDIDATE: best score 416 (inflated by cascade). Reconstruction is
// algorithmically exact and byte-identical except two coloring diffs: (1) the
// target duplicates the `lb v0, 0x14(v1)` index-load into path A's exit-branch
// delay slot (+ a load-delay nop after the final trunc/mfc1 store), while IDO
// here fills that delay slot with the last store and SHARES the index-load at
// the merge -- making mine 2 instrs shorter and cascading every following
// offset; (2) the u8 `ret` spill slot lands at 0x2f (adjacent to sp20) here vs
// 0x37 (adjacent to the arg-save area) in the target. Pure tail-duplication /
// spill-slot coloring; needs the permuter.
// s32 func_15160B74(struct225_A58v *arg0) {
//     struct127 *temp_v0;
//     struct15160A58_payload *temp_v1;
//     u8 ret = 1;
//     f32 sp20[3];
//
//     temp_v0 = arg0->unk18.unk0;
//     temp_v1 = &arg0->unk18;
//     if (temp_v0->interaction_state == 0) {
//         return 0;
//     }
//     if (temp_v0->unique_id != temp_v1->unk4) {
//         return 0;
//     }
//     if ((temp_v0->unk1D4 != 0) && ((temp_v0->unk74 & 0xF) != 0xF)) {
//         func_15143134((f32 *)&temp_v1->unk8, sp20, (s32)temp_v0->unk1D4 + (temp_v1->unk5 << 6));
//         arg0->unk14->unkE = sp20[0];
//         arg0->unk14->unk10 = sp20[1];
//         arg0->unk14->unk12 = sp20[2];
//     } else {
//         arg0->unk14->unkE = temp_v0->x_position;
//         arg0->unk14->unk10 = temp_v0->y_position;
//         arg0->unk14->unk12 = temp_v0->z_position;
//     }
//     if (temp_v1->unk14 != -1) {
//         ret = D_8008B1F8[temp_v1->unk14](arg0);
//     }
//     return ret;
// }
#pragma GLOBAL_ASM("asm/nonmatchings/game_18D770/func_15160B74.s")

struct225 *func_15160CDC(struct127 *arg0, u8 arg1, coords3 *arg2, coords3 *arg3, f32 arg4, u8 arg5, s16 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10, u8 arg11, u8 arg12, u8 arg13, u8 arg14, s32 arg15) {
    struct225 *temp_v0;
    Header header;
    struct15160CDC_payload src;
    Header2 header2;
    s32 sp_v1;
    s32 sp_v0;

    if (arg0 == NULL) {
        return NULL;
    }

    header.unk0 = arg5;
    header.unk1 = 6;
    header.unk2 = arg6;
    header.unk4 = 0x11;
    src.unk0 = arg0;
    src.unk4 = arg0->unique_id;
    src.unk5 = arg1;
    src.unk8 = *arg2;
    src.unk14 = *arg3;

    src.unk20 = arg4;
    sp_v1 = (arg11 != 0) ? 1 : 0;
    sp_v0 = (arg13 != 0) ? 2 : 0;
    src.unk24 = sp_v0 | sp_v1;

    header2.unk0 = 0;
    header2.unk4 = 0;
    header2.unk8 = 0;

    src.unk25 = arg12;

    temp_v0 = func_151602C0(&header, &header2, arg7, arg8, arg9, arg10, 0xFF, 0, sizeof(src), arg14, arg15);
    if (temp_v0 != NULL) {
        memcpy(&temp_v0->unk18, &src, sizeof(src));
    }
    return temp_v0;
}

// similar to func_15160B74
#pragma GLOBAL_ASM("asm/nonmatchings/game_18D770/func_15160E30.s")

s32 func_15161238(struct127 *arg0, struct127 *arg1) {
    if (arg0->interaction_state == 0) {
        return 0;
    }
    if (arg0->id == 0xFF) {
        return 0;
    }
    if (arg0 == arg1) {
        return 0;
    }
    return 1;
}

struct225 *func_1516127C(s32 arg0, u8 arg1, s32 arg2) {
    struct225 *temp_v0;
    Header header;
    f32 src[4];

    src[0] = 50.0f;
    src[1] = 40.0f;
    src[2] = func_150ADA68() * D_800A6AD8;

    header.unk0 = 0;
    header.unk1 = 1;
    header.unk2 = 300;
    header.unk4 = 5;

    src[3] = D_800A6ADC;

    temp_v0 = func_1516037C(&header, arg0, sizeof(src), arg1, arg2);
    if (temp_v0 != NULL) {
        memcpy(&temp_v0->unk18, &src, sizeof(src));
    }
    return temp_v0;
}

struct225 *func_15161334(s32 arg0, u8 arg1, s32 arg2) {
    struct225 *temp_v0;
    Header header;
    f32 tmp1[8];

    tmp1[1] = 1.0f;
    tmp1[3] = 1.0f;

    header.unk0 = 0;
    header.unk1 = 2;
    header.unk2 = 300;
    header.unk4 = 6;

    tmp1[0] = 20.0f;
    tmp1[2] = 50.0f;
    tmp1[4] = 0.0f;
    tmp1[5] = 10.0f;
    tmp1[6] = D_800A6AE0;
    tmp1[7] = 127.0f;

    temp_v0 = func_1516037C(&header, arg0, sizeof(tmp1), arg1, arg2);
    if (temp_v0 != NULL) {
        memcpy(&temp_v0->unk18, &tmp1, sizeof(tmp1));
    }
    return temp_v0;
}

struct225 *func_15161408(s32 arg0, u8 arg1, s32 arg2) {
    struct225 *temp_v0;
    Header header;
    s32 tmp;

    tmp = func_151149AC(249); // what does this return?

    header.unk0 = 0;
    header.unk1 = 3;
    header.unk2 = 300;
    header.unk4 = 8;

    temp_v0 = func_1516037C(&header, arg0, sizeof(tmp), arg1, arg2);

    if (temp_v0 != NULL) {
        memcpy(&temp_v0->unk18, &tmp, sizeof(tmp));
    }
    return temp_v0;
}

struct225 *func_15161494(s32 arg0, u8 arg1, s32 arg2) {
    struct225 *temp_v0;
    Header header;
    f32 tmp[4];

    header.unk0 = 0;
    header.unk1 = 1;
    header.unk2 = 300;
    header.unk4 = 5;

    tmp[0] = 127.0f;
    tmp[1] = 100.0f;
    tmp[2] = 0.0f;
    tmp[3] = D_800A6AE4;

    temp_v0 = func_1516037C(&header, arg0, sizeof(tmp), arg1, arg2);
    if (temp_v0 != NULL) {
        memcpy(&temp_v0->unk18, &tmp, sizeof(tmp));
    }
    return temp_v0;
}

struct225 *func_15161540(s32 arg0, u8 arg1, s32 arg2) {
    struct225 *temp_v0;
    Header header;
    f32 tmp[4];

    tmp[0] = 28.0f;
    tmp[1] = 27.0f;
    tmp[2] = func_150ADA68() * D_800A6AE8;
    tmp[3] = D_800A6AEC;

    header.unk0 = 0;
    header.unk1 = 1;
    header.unk2 = 300;
    header.unk4 = 5;

    temp_v0 = func_1516037C(&header, arg0, sizeof(tmp), arg1, arg2);
    if (temp_v0 != NULL) {
        memcpy(&temp_v0->unk18, &tmp, sizeof(tmp));
    }
    return temp_v0;
}

struct225 *func_151615F8(s32 arg0, u8 arg1, u8 arg2, u8 arg3, u8 arg4, s32 arg5) {
    struct225 *temp_v0;
    Header header;
    struct232 tmp1;
    f32 tmp;

    if (arg2 < 0) {
        return 0;
    }
    if (arg2 >= 9) {
        return 0;
    }

    tmp = D_800A66C0[arg2];
    tmp1.unk4 = tmp;
    tmp1.unk8 = 0.0f;
    tmp1.unkC = 0.0f;
    tmp1.unk0 = tmp;
    tmp1.unk10 = 0;
    tmp1.unk12 = arg1;

    header.unk0 = 0;
    header.unk1 = 4;
    header.unk2 = 300;
    header.unk4 = arg3;

    temp_v0 = func_1516037C(&header, arg0, sizeof(tmp1), arg4, arg5);
    if (temp_v0 != NULL) {
        memcpy(&temp_v0->unk18, &tmp1, sizeof(tmp1));
    }
    return temp_v0;
}

void func_151616D0(u8 arg0, u8 arg1, s32 arg2) {
    struct234 tmp;

    tmp.unk0 = arg0;
    tmp.unk4 = arg2;

    func_1516944C(53, &tmp, arg1);
}

void func_15161714(struct225 *arg0) {
    func_1514EDF0(arg0, arg0->unk18);
    func_151617C4(arg0);
}

void func_15161740(struct225 *arg0) {
    func_1514EDF0(arg0, arg0->unk18);
    func_151617E4(arg0);
}

void func_1516176C(struct225 *arg0) {
    func_1514EDF0(arg0, arg0->unk18);
    func_151617C4(arg0);
}

void func_15161798(struct225 *arg0) {
    func_1514EDF0(arg0, arg0->unk18);
    func_151617E4(arg0);
}

void func_151617C4(struct225 *arg0) {
    func_15169804(arg0);
}

void func_151617E4(struct225 *arg0) {
    func_15169824(arg0);
}

void func_15161804(struct225 *arg0) {
    if ((arg0->unkE & 2) != 0) {
        func_1515F10C(arg0->unk14, arg0);
    }
    D_8008B208[arg0->unk12](arg0);
}

void func_15161860(struct225 *arg0) {
    if ((arg0->unkE & 2) != 0) {
        func_1515F10C(arg0->unk14, arg0);
    }
    D_8008B2B0[arg0->unk12](arg0);
}

typedef struct {
    s32 unk0[10];
} struct66E4;

void func_151618BC(u16 arg0, s16 arg1, u8 arg2, s32 arg3, struct17 *arg4, s16 arg5, s16 arg6) {
    struct66E4 sp38;

    sp38 = *(struct66E4 *)D_800A66E4;
    func_10010F88(sp38.unk0[func_150ADA20() % 10U], arg0, arg1, arg2, arg3,
                  (s32)arg4->unk0, (s32)arg4->unk4, (s32)arg4->unk8, arg5, arg6);
}

struct225 *func_151619A0(s32 arg0, s16 arg1, u8 arg2, s32 arg3) {
    struct225 *temp_v0;
    Header header;
    s32 tmp;
    Header2 header2;

    tmp = arg0;

    header.unk0 = 3;
    header.unk1 = 9;
    header.unk2 = arg1;
    header.unk4 = 20;

    header2.unk0 = 0;
    header2.unk4 = 0;
    header2.unk8 = 0;

    temp_v0 = func_151602C0(&header, &header2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0, sizeof(tmp), arg2, arg3);
    if (temp_v0 != NULL) {
        memcpy(&temp_v0->unk18, &tmp, sizeof(tmp));
    }
    return temp_v0;
}

s32 func_15161A68(struct225 *arg0) {
    struct233 **tmp = &D_800C3958; // fakematch?

    if (D_800C35EA == 1) {
        f32 phi_f0;
        f32 phi_f2;
        struct233 *temp_v0 = *tmp + (s32) arg0->unk18;

        arg0->unk14->unkE = temp_v0->unk0;
        arg0->unk14->unk10 = temp_v0->unk4;
        arg0->unk14->unk12 = temp_v0->unk8;

        if (temp_v0->unk24 < 0.0f) {
            phi_f0 = 0.0f;
        } else {
            if (temp_v0->unk24 > 255.0f) {
                phi_f2 = 255.0f;
            } else {
                phi_f2 = temp_v0->unk24;
            }
            phi_f0 = phi_f2;
        }
        temp_v0->unk24 = phi_f0;
        arg0->unk14->unk5 = phi_f0;
        if (temp_v0->unk28 < 0.0f) {
            phi_f0 = 0.0f;
        } else {
            if (temp_v0->unk28 > 255.0f) {
                phi_f2 = 255.0f;
            } else {
                phi_f2 = temp_v0->unk28;
            }
            phi_f0 = phi_f2;
        }
        temp_v0->unk28 = phi_f0;
        arg0->unk14->unk6 = phi_f0;
        if (temp_v0->unk2C < 0.0f) {
            phi_f0 = 0.0f;
        } else {
            if (temp_v0->unk2C > 255.0f) {
                phi_f2 = 255.0f;
            } else {
                phi_f2 = temp_v0->unk2C;
            }
            phi_f0 = phi_f2;
        }
        temp_v0->unk2C = phi_f0;
        arg0->unk14->unk7 = phi_f0;

        if (temp_v0->unk18 < 0.0f) {
            phi_f0 = 0.0f;
        } else {
            if (temp_v0->unk18 > 255.0f) {
                phi_f2 = 255.0f;
            } else {
                phi_f2 = temp_v0->unk18;
            }
            phi_f0 = phi_f2;
        }
        temp_v0->unk18 = phi_f0;
        arg0->unk14->unk2F = phi_f0;

    }
    return 1;
}

struct225 *func_15161E24(struct127 *arg0, u8 arg1, u8 arg2, s16 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, u8 arg8, s32 arg9) {
    struct225 *temp_v0;
    Header header;
    struct244 tmp;
    Header2 header2;

    if (arg0 == NULL) {
        return 0;
    }

    header.unk0 = arg2;
    header.unk1 = 10;
    header.unk2 = arg3;
    header.unk4 = 21;

    tmp.unk0 = arg0;
    tmp.unk4 = arg0->unique_id;
    tmp.unk5 = arg1;

    header2.unk0 = arg0->x_position;
    header2.unk4 = arg0->y_position;
    header2.unk8 = arg0->z_position;

    temp_v0 = func_151602C0(&header, &header2, arg4, arg5, arg6, arg7, 0xFF, 0, sizeof(tmp), arg8, arg9);
    if (temp_v0 != NULL) {
        memcpy(&temp_v0->unk18, &tmp, sizeof(tmp));
    }
    return temp_v0;
}

void func_15161F2C(struct225 *arg0) {
    func_15163F50(arg0, &arg0->unk18);
}

// PERMUTER CANDIDATE: best score 165. Instruction sequence is correct; the
// dispatch handler IS called with three args -- handler(arg0, arg1, arg2) --
// which forces arg1/arg2 to be spilled/reloaded around the func_1516972C call
// on the arg2==0 path (that was the big win from 1120 -> 165). The residual
// diff is ONLY on that arg2==0 call-path: the target reloads a3 before the
// branch and duplicates the `arg0->unk1D` load into the branch's delay slot,
// while IDO here shares that load at the merge (making it 1 instr shorter and
// cascading every following branch-target offset). Pure tail-duplication /
// delay-slot-fill coloring; needs the permuter.
// void func_15161F4C(struct225_244 *arg0, struct244_ext *arg1, u8 arg2) {
//     struct244_ext *self = &arg0->unk18;
//     s32 (*handler)(struct225_244 *, struct244_ext *, u8);
//     if (arg2 == 0) {
//         if (arg1->unk0 == self->unk0 || arg1->unk4 == self->unk4) {
//             func_1516972C(arg0);
//         }
//     } else if (arg2 == 0x2D) {
//         struct244_swap *msg = (struct244_swap *)arg1;
//         if (self->unk0 == msg->unk0) { self->unk0 = msg->unk4; self->unk4 = msg->unk9; }
//         else if (self->unk0 == msg->unk4) { self->unk0 = msg->unk0; self->unk4 = msg->unk8; }
//     }
//     handler = D_8008B358[((u8 *)arg0)[0x1D]];
//     if (handler != NULL) { handler(arg0, arg1, arg2); }
// }
#pragma GLOBAL_ASM("asm/nonmatchings/game_18D770/func_15161F4C.s")

struct225 *func_15162034(s32 arg0, u8 arg1, s32 arg2) {
    struct225 *temp_v0;
    Header header;
    f32 src[8];

    header.unk0 = 0;
    header.unk1 = 2;
    header.unk2 = 0x12C;
    header.unk4 = 6;

    src[1] = 15.0f;
    src[0] = 22.0f;

    src[2] = 45.0f;
    src[3] = 1.0f;
    src[4] = 0.0f;
    src[5] = 10.0f;
    src[6] = D_800A6AF0;
    src[7] = 127.0f;

    temp_v0 = func_1516037C(&header, arg0, sizeof(src), arg1, arg2);
    if (temp_v0 != NULL) {
        memcpy(&temp_v0->unk18, &src, sizeof(src));
    }
    return temp_v0;
}

void func_15162110(s32 arg0) {
    struct236 *temp_v0;
    f32 src[8];

    src[1] = 15.0f;
    src[2] = 0.0f;
    src[4] = 15.0f;
    src[5] = 0.0f;
    src[6] = 0.0f;
    src[0] = 42.5f;
    src[3] = 37.5f;
    src[7] = D_800A6AF4;

    temp_v0 = func_15149130(300, -1, 30, -1, 0, 0, sizeof(src), 0xFF, 1);
    if (temp_v0 != NULL) {
        memcpy(&temp_v0->unk28, &src, sizeof(src));
    }
}

void func_151621B8(struct236 *arg0) {
    struct235 *temp_v0;
    f32 temp_f0;

    temp_v0 = &arg0->unk28;
    temp_f0 = sinf(temp_v0->unk18);

    func_1515D4D4(temp_v0->unk0 + (temp_f0 * temp_v0->unkC),
                  temp_v0->unk4 + (temp_f0 * temp_v0->unk10),
                  temp_v0->unk8 + (temp_f0 * temp_v0->unk14), 0);
    temp_v0->unk18 += temp_v0->unk1C * D_800BE9A4;
    temp_v0->unk18 = func_15144B68(temp_v0->unk18);
}

struct225 *func_151623F4(s32 arg0, u8 arg1, u8 arg2, u8 arg3, s8 arg4, s16 arg5, u8 arg6, s32 arg7) {
    struct151623F4_src src;
    Header header;
    struct225 *temp_v0;

    if (arg1 >= 3) {
        return NULL;
    }

    src.unk0 = *(struct17 *)D_800A670C[arg1];
    src.unkC = *(struct17 *)D_800A6730[arg1];
    src.unk18 = 0.0f;
    src.unk1C = D_800A6754[arg1];

    header.unk0 = arg3;
    header.unk1 = arg4;
    header.unk2 = arg5;
    header.unk4 = arg2;

    temp_v0 = func_1516037C(&header, arg0, sizeof(src), arg6, arg7);
    if (temp_v0 != NULL) {
        memcpy(&temp_v0->unk18, &src, sizeof(src));
    }
    return temp_v0;
}

s32 func_15162510(struct237 *arg0) {
    struct235 *temp_v1;
    f32 temp_f0;

    temp_v1 = &arg0->unk18;
    temp_f0 = sinf(temp_v1->unk18);

    arg0->unk14->unk5 = temp_v1->unk0 + (temp_f0 * temp_v1->unkC);
    arg0->unk14->unk6 = temp_v1->unk4 + (temp_f0 * temp_v1->unk10);
    arg0->unk14->unk7 = temp_v1->unk8 + (temp_f0 * temp_v1->unk14);

    temp_v1->unk18 += temp_v1->unk1C * D_800BE9A4;
    temp_v1->unk18 = func_15144B68(temp_v1->unk18);
    return 1;
}

struct225 *func_15162740(s32 arg0, u8 arg1, u8 arg2, u8 arg3, s16 arg4, s8 arg5, u8 arg6, s32 arg7) {
    struct225 *temp_v0;
    Header header;
    f32 src[8];

    if (arg1 >= 24) {
        return 0;
    }

    src[0] = D_800A67C0[arg1];
    src[1] = D_800A6760[arg1];
    src[2] = D_800A6820[arg1];
    src[3] = 1.0f;
    src[4] = 0.0f;
    src[5] = 10.0f;
    src[6] = D_800A6AF8;
    src[7] = 127.0f;

    header.unk0 = arg3;
    header.unk1 = arg5;
    header.unk2 = arg4;
    header.unk4 = arg2;

    temp_v0 = func_1516037C(&header, arg0, sizeof(src), arg6, arg7);
    if (temp_v0 != NULL) {
        memcpy(&temp_v0->unk18, &src, sizeof(src));
    }
    return temp_v0;
}

struct225 *func_1516284C(Header *header, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 arg5, u8 arg6, s32 offset, u8 arg8, u8 arg9, s32 argA) {
    struct225 *temp_v0;
    f32 src[8];

    if (arg8 >= 0x18) {
        return 0;
    }

    src[0] = D_800A67C0[arg8];
    src[1] = D_800A6760[arg8];
    src[2] = D_800A6820[arg8];
    src[3] = 1.0f;
    src[4] = 0.0f;
    src[5] = 10.0f;
    src[6] = D_800A6AFC;
    src[7] = 127.0f;
    temp_v0 = func_151602C0(header, arg1, 0, arg2, arg3, arg4, arg5, arg6, offset + sizeof(src), arg9, argA);
    if (temp_v0 != NULL) {
        memcpy(&temp_v0->unk18, &src, sizeof(src));
    }
    return temp_v0;
}

// PERMUTER CANDIDATE: best score 2777. Algorithm/instruction sequence correct
// (FP running-sum unk14/unk18/unk1C, src.unk24 comparison cascade, 1/temp_f18).
// Two allocation blockers: (1) IDO here spreads the 6 table loads across
// $f0/$f2/$f12/$f14/... but the target pins each to $f2/$f12/$f6/$f0/$f18/$f16;
// (2) the target overlaps `header` into src's dead tail padding (frame 0x68)
// while IDO keeps them separate (frame 0x78). Reconstruction below is believed
// semantically exact; needs the permuter for register/stack coloring.
// s32 func_1516295C(s32 arg0, u8 arg1, u8 arg2, u8 arg3, s16 arg4, s8 arg5, s8 arg6, s8 arg7, s8 arg8, s8 arg9, s32 argA, u8 argB, s32 argC) {
//     struct225 *temp_v0; Header header; struct238 src;
//     f32 temp_f0, temp_f12, temp_f16, temp_f18, temp_f2, temp_f8;
//     if (arg1 >= 5) return 0;
//     temp_f2 = D_800A6880[arg1]; temp_f12 = D_800A6894[arg1]; temp_f8 = D_800A68A8[arg1];
//     temp_f0 = D_800A68BC[arg1]; temp_f18 = D_800A68D0[arg1]; temp_f16 = D_800A68E4[arg1];
//     src.unk0 = temp_f2; src.unk4 = temp_f12; src.unk8 = temp_f2 - temp_f12;
//     src.unkC = temp_f8; src.unk10 = temp_f0; src.unk14 = temp_f18 + temp_f0;
//     src.unk18 = temp_f16 + src.unk14; src.unk1C = temp_f18 + src.unk18;
//     src.unk25 = arg6; src.unk26 = arg7; src.unk27 = arg8; src.unk28 = arg9;
//     if (src.unkC < temp_f0) src.unk24 = 0;
//     else if (src.unkC < src.unk14) src.unk24 = 1;
//     else if (src.unkC < src.unk18) src.unk24 = 2;
//     else if (src.unkC < src.unk1C) src.unk24 = 3;
//     else src.unk24 = 4;
//     header.unk0 = arg3; header.unk1 = arg5; header.unk2 = arg4; header.unk4 = arg2;
//     src.unk20 = 1.0f / temp_f18;
//     temp_v0 = func_1516037C(&header, arg0, argA + 0x30, argB, argC);
//     if (temp_v0 != NULL) memcpy(&temp_v0->unk18, &src, 0x30);
//     return temp_v0;
// }
#pragma GLOBAL_ASM("asm/nonmatchings/game_18D770/func_1516295C.s")

// a biggun'
#pragma GLOBAL_ASM("asm/nonmatchings/game_18D770/func_15162B28.s")

void func_15162EF8(struct239 *arg0) {
    s8 sp1C[9]; // FIXME: what size should this be?
    struct240 *temp_v0;

    temp_v0 = func_151149AC(arg0->unk48);
    if (temp_v0 != NULL) {
        temp_v0->unk7C |= 1;
    }
    sp1C[0] = arg0->unk12 - 21;
    func_151403A8(&sp1C, 36);
}

void func_15162F50(struct239 *arg0) {
    s8 sp1C[9]; // FIXME: what size should this be?
    struct240 *temp_v0;

    temp_v0 = func_151149AC(arg0->unk48);
    if (temp_v0 != NULL) {
        temp_v0->unk7C &= ~1;
    }
    sp1C[0] = arg0->unk12 - 21;
    func_151403A8(&sp1C, 37);
}

struct225 *func_15162FAC(s32 arg0, u8 arg1, u8 arg2, u8 arg3, s16 arg4, s8 arg5, u8 arg6, s32 arg7) {
    struct225 *temp_v0;
    Header header;
    struct241 src;

    if (arg1 >= 3) {
        return NULL;
    }

    src.unk0 = 0.0f;
    src.unk4 = D_800A68F8[arg1];
    src.unk8 = 0.0f;
    src.unk14 = 0;
    src.unk20 = 0.0f;
    src.unkC = D_800A6904[arg1];
    src.unk10 = D_800A6910[arg1];
    src.unk24 = D_800A6934[arg1];
    src.unk28 = D_800A6940[arg1];
    src.unk2C = D_800A694C[arg1];
    src.unk18 = D_800A691C[arg1];
    src.unk1C = D_800A6928[arg1];
    src.unk30 = D_800A6958[arg1];

    header.unk0 = arg3;
    header.unk1 = arg5;
    header.unk2 = arg4;
    header.unk4 = arg2;

    temp_v0 = func_1516037C(&header, arg0, sizeof(src), arg6, arg7);
    if (temp_v0 != NULL) {
        memcpy(&temp_v0->unk18, &src, sizeof(src));
    }
    return temp_v0;
}

// big one
#pragma GLOBAL_ASM("asm/nonmatchings/game_18D770/func_151630F4.s")

struct225 *func_15163414(Header *header, f32* arg1, f32* arg2, f32* arg3, s8 arg4, u8 arg5, u8 arg6, u8 arg7, u8 arg8, u8 arg9, u8 argA, u8 argB, s32 argC, u8 argD, s32 argE) {
    struct225 *temp_v0;
    struct245 data;
    Header2 header2;

    data.unk0 = arg1;
    data.unk4 = arg2;
    data.unk8 = arg3;
    data.unkC = arg4;
    data.unkD = arg5;

    header2.unk0 = *arg1;
    header2.unk4 = *arg2;
    header2.unk8 = *arg3;

    temp_v0 = func_151602C0(header, &header2, arg6, arg7, arg8, arg9, argA, argB, argC + sizeof(data), argD, argE);
    if (temp_v0 != NULL) {
        memcpy(&temp_v0->unk18, &data, sizeof(data));
    }
    return temp_v0;
}

s32 func_15163504(struct225_245 *arg0) {
    struct245_ext *temp;

    temp = &arg0->unk18;
    arg0->unk14->unkE = *temp->unk0;
    arg0->unk14->unk10 = *temp->unk4;
    arg0->unk14->unk12 = *temp->unk8;
    if (arg0->unk18.unkC != -1) {
        return D_8008B36C[temp->unkC]();
    }

    return 1;
}

void func_151635A8(struct225_245 *arg0, s32 arg1, u8 arg2) {
    struct245_ext *temp;

    temp = &arg0->unk18;
    if (D_8008B370[arg0->unk18.unkD] != NULL) {
        ((void (*)(struct225_245 *, s32, u8))D_8008B370[temp->unkD])(arg0, arg1, arg2);
    }
}

struct225 *func_15163604(s32 arg0, u8 arg1, u8 arg2, s16 arg3, u8 arg4, s32 arg5, u8 arg6, s32 arg7) {
    struct225 *temp_v0;
    Header header;
    f32 src[4];

    if (arg1 < 0) {
        return 0;
    }
    if (arg1 >= 14) {
        return 0;
    }

    src[0] = D_800A6964[arg1];
    src[1] = D_800A699C[arg1];
    src[2] = func_150ADA68() * D_800A6B00;
    src[3] = D_800A69D4[arg1];

    header.unk0 = arg4;
    header.unk1 = 1;
    header.unk2 = arg3;
    header.unk4 = arg2;

    temp_v0 = func_1516037C(&header, arg0, sizeof(src), arg6, arg7);
    if (temp_v0 != NULL) {
        memcpy(&temp_v0->unk18, &src, sizeof(src));
    }
    return temp_v0;
}

s32 func_15163704(struct225 *arg0) {
    struct227 *temp_v0;
    f32 tmp;
    s32 pad1;

    temp_v0 = &arg0->unk18;
    tmp = sinf(temp_v0->unk8);
    arg0->unk14->unk2F = temp_v0->unk0 + (temp_v0->unk4 * tmp);

    temp_v0->unk8 += temp_v0->unkC * D_800BE9A4;
    temp_v0->unk8 = func_15144B68(temp_v0->unk8);

    if (temp_v0->unk8 > D_800A6B04) {
        return 0;
    }
    return 1;
}

void func_1516381C(s32 arg0, u8 arg1, u8 arg2, s32 arg3) {
    Header tmp;
    tmp.unk0 = 0;
    tmp.unk1 = -1;
    tmp.unk2 = 300;
    tmp.unk4 = arg1;
    func_1516037C(&tmp, arg0, 0, arg2, arg3);
}

void func_1516387C(s32 arg0, u8 arg1, s8 arg2, s16 arg3, u8 arg4, s32 offset, u8 arg6, s32 arg7) {
    Header tmp;
    tmp.unk0 = arg1;
    tmp.unk1 = arg2;
    tmp.unk2 = arg3;
    tmp.unk4 = arg4;

    func_1516037C(&tmp, arg0, offset, arg6, arg7);
}

void func_15187FC0(void *arg0, f32 *arg1);
void func_15188010(void *arg0, f32 *arg1);

typedef struct {
    void *unk0;
    f32 unk4;
    f32 unk8;
} struct227_638E0;

typedef struct {
    u8  pad0[0x14];
    struct226 *unk14;
    struct227_638E0 unk18;
} struct225_638E0;

s32 func_151638E0(struct225_638E0 *arg0) {
    struct227_638E0 *temp_v1;
    f32 sp20[3];
    f32 sp1C;

    temp_v1 = &arg0->unk18;
    func_15187FC0(temp_v1->unk0, sp20);
    func_15188010(temp_v1->unk0, &sp1C);
    arg0->unk14->unk2F = temp_v1->unk4 + (temp_v1->unk8 * sp1C);
    return 1;
}

s32 func_151639D0(struct225 *arg0, s32 arg1, u8 arg2) {
    if (arg2 == 0x27) {
        arg0->unk14->unk9 = 1;
    } else if (arg2 == 0x28) {
        arg0->unk14->unk9 = 0;
    }
}

void func_15163A18(struct225 *arg0, s32 arg1, u8 arg2) {
    if (arg2 == 0x27) {
        arg0->unk14->unk9 = 0;
    } else if (arg2 == 0x28) {
        arg0->unk14->unk9 = 1;
    }
}

struct225 *func_15163A60(u8 arg0, u8 arg1, s32 arg2) {
    struct225 *temp_v0_2;
    Header header;
    f32 tmp1[4];
    struct226 *temp_v0;
    Header2 header2;

    temp_v0 = func_151149AC(arg0); // maybe different types?
    if (temp_v0 == 0) {
        return 0;
    }
    tmp1[0] = D_800A6964[6]; // D_800A697C
    tmp1[1] = D_800A699C[6]; // D_800A69B4
    tmp1[2] = func_150ADA68() * D_800A6B08;
    tmp1[3] = D_800A69D4[6]; // D_800A69EC;

    header2.unk0 = temp_v0->unk10;
    header2.unk4 = temp_v0->unk12;
    header2.unk8 = temp_v0->unk14;

    header.unk0 = 2;
    header.unk1 = 17;
    header.unk2 = 300;
    header.unk4 = 5;

    temp_v0_2 = func_151602C0(&header, &header2, D_800A6964[6], 0, 0xFF, 0, 0xFF, 0, 20, arg1, arg2);
    if (temp_v0_2 != 0) {
        memcpy(&temp_v0_2->unk18, &tmp1, 16);
        memcpy(&temp_v0_2->unk28, &temp_v0, 4);
    }
    return temp_v0_2;
}

s32 func_15163B98(struct230 *arg0) {
    struct228* tmp;
    if (func_1516065C(arg0) == 0) {
        return 0;
    } else {
        tmp = arg0->unk28;
        if (tmp->unk6E == 1) {
            return 0;
        } else {
            return 1;
        }
    }
}

struct225 *func_15163BE8(s32 arg0, u8 arg1, s32 arg2) {
    struct225 *temp_v0;
    f32 src[4];

    src[0] = D_800A6964[6];
    src[1] = D_800A699C[6];
    src[2] = func_150ADA68() * D_800A6B0C;
    src[3] = D_800A69D4[6];

    temp_v0 = func_15160A58(arg0, 1, &D_800A6A0C, 2, 300, 100, 0, 0xFF, 0, 0xFF, 0, 0, sizeof(src), 1, arg1, arg2);
    if (temp_v0 != NULL) {
        memcpy(&temp_v0->unk30, &src, sizeof(src));
    }
    return temp_v0;
}

s32 func_15163CD0(struct225 *arg0) {
    func_15163CF8(&arg0->unk30, arg0);
    return 1;
}

void func_15163CF8(struct227 *arg0, struct225 *arg1) {
    f32 tmp = sinf(arg0->unk8);
    arg1->unk14->unk2F = arg0->unk0 + (arg0->unk4 * tmp);
    arg0->unk8 = arg0->unk8 + (arg0->unkC * D_800BE9A4);
    arg0->unk8 = func_15144B68(arg0->unk8);
}

void func_15163DEC(struct225 *arg0, struct228 *arg1) {
    arg1->unk10 = arg1->unk10 - D_800BE9A4;
    if (arg1->unk10 < 0.0f) {
        arg1->unk10 = func_150ADA68() * arg1->unk14;
        if ((func_150ADA20() & 3) != 0) {
            arg1->unkC = (func_150ADA68() * (arg1->unk0 - arg1->unk4)) + arg1->unk4;
        } else {
            arg1->unkC = (func_150ADA68() * (arg1->unk8 - arg1->unk0)) + arg1->unk0;
        }
    }
    arg1->unk1C += (arg1->unkC - arg1->unk1C) * arg1->unk18;
    arg0->unk14->unk2F = arg1->unk1C;
}

s32 func_15163F50(struct225 *arg0, struct225 *arg1) {
    struct127 *temp_v1;

    temp_v1 = arg1->unk0;
    if (temp_v1->interaction_state == 0) {
        return 0;
    }
    if (temp_v1->id == 0xFF) {
        return 0;
    }
    if (temp_v1->unique_id != arg1->unk4) {
        return 0;
    }
    arg0->unk14->unkE = temp_v1->x_position;
    arg0->unk14->unk10 = temp_v1->y_position;
    arg0->unk14->unk12 = temp_v1->z_position;
    return 1;
}

void func_15163FEC(struct225 *arg0, struct244_ext *arg1, u8 arg2) {
    struct244_ext *self = (struct244_ext *)&arg0->unk18;
    if (arg2 == 0) {
        struct127 *t = arg1->unk0;
        if (t == self->unk0 || arg1->unk4 == self->unk4) {
            func_1516972C(arg0);
        }
    } else if (arg2 == 0x2D) {
        struct244_swap *msg = (struct244_swap *)arg1;
        if (self->unk0 == msg->unk0) {
            self->unk0 = msg->unk4;
            self->unk4 = msg->unk9;
        } else if (self->unk0 == msg->unk4) {
            self->unk0 = msg->unk0;
            self->unk4 = msg->unk8;
        }
    } else {
        void (*handler)(s32) = D_8008B374[arg0->unk2D];
        if (handler != NULL) {
            handler((s32)arg0);
        }
    }
}
#pragma GLOBAL_ASM("asm/nonmatchings/game_18D770/func_151640C0.s")
// NON-MATCHING: best score 859. Instruction sequence and all operations are
// correct; only register allocation differs. The target spills arg0 to its
// incoming home slot (sw a0,0x18(sp) / lw a0,0x18(sp)) and therefore has to
// materialize `&arg0->unk18` with a real `addiu v0,v0,0x18`, while IDO here
// keeps arg0 in a register and folds the address into the two load offsets.
// Tried: ||-chain vs nested ifs, an extra `obj = arg0` local, an eagerly
// evaluated unique_id local, a 4th dummy parameter, keeping `other` live to
// the end, K&R-style parameter declarations - none forced the arg0 spill.
// void func_151640C0(struct225_244 *arg0, struct225_244_arg *arg1, u8 arg2) {
//     struct244_ext *temp;
//     struct244_ext *other;
//     struct127 *sp0;
//     struct127 *sp1;
//     u8 sp2;
//     u8 sp3;
//
//     if (arg2 == 41) {
//         other = arg1->unk4;
//         temp = &arg0->unk18;
//         sp0 = other->unk0;
//         sp1 = arg0->unk18.unk0;
//         sp2 = other->unk4;
//         sp3 = temp->unk4;
//         if (sp1 != sp0) {
//             if (sp2 != sp3) {
//                 if (sp2 != sp1->unique_id) {
//                     return;
//                 }
//             }
//         }
//         func_1516972C(arg0);
//     }
// }

void func_15164134(struct225_244b *arg0, struct244_ext *arg1, u8 arg2) {
    struct244_ext *self = (struct244_ext *)&arg0->unk18;
    if (arg2 == 0) {
        struct127 *t = arg1->unk0;
        if (t == self->unk0 || arg1->unk4 == self->unk4) {
            func_1516972C(arg0);
        }
    } else if (arg2 == 0x2D) {
        struct244_swap *msg = (struct244_swap *)arg1;
        if (self->unk0 == msg->unk0) {
            self->unk0 = msg->unk4;
            self->unk4 = msg->unk9;
        } else if (self->unk0 == msg->unk4) {
            self->unk0 = msg->unk0;
            self->unk4 = msg->unk8;
        }
    } else {
        void (*handler)(s32) = D_8008B37C[arg0->unk3D];
        if (handler != NULL) {
            handler((s32)arg0);
        }
    }
}

struct225 *func_15164208(s32 arg0, u8 arg1, u8 arg2, s32 arg3) {
    struct225 *temp_v0;
    Header header;
    struct243 src;

    src.unk0 = 0.0f;
    src.unk4 = arg1;

    header.unk0 = 0;
    header.unk1 = 20;
    header.unk2 = 300;
    header.unk4 = 39;

    temp_v0 = func_1516037C(&header, arg0, sizeof(src), arg2, arg3);
    if (temp_v0 != NULL) {
        memcpy(&temp_v0->unk18, &src, sizeof(src));
    }
    return temp_v0;
}

s32 func_1516429C(struct237 *arg0) {
    arg0->unk14->unk2F = arg0->unk18.unk0;
    arg0->unk18.unk0 = arg0->unk18.unk0 - (arg0->unk18.unk0 * D_800A6B10);
    return 1;
}

void func_1516434C(struct225_243 *arg0, struct243_ext *arg1, u8 arg2) {
    struct243_ext *temp;

    temp = &arg0->unk18;
    if (arg2 == 51) {
        if (temp->unk4 == arg1->unk4) {
            temp->unk0 = arg1->unk0;
            arg0->unk14->unk5 = arg1->unk5;
            arg0->unk14->unk6 = arg1->unk6;
            arg0->unk14->unk7 = arg1->unk7;
        }
    }
}

void func_151643A8(struct225 *arg0, s32 arg1, u8 arg2) {
    struct227 *tmp;
    tmp = &arg0->unk18;
    if (arg2 == 64) {
        tmp->unk24 |= 1;      // force odd?
    } else if (arg2 == 65) {
        tmp->unk24 &= 0xFFFE; // force even?
    }
}

s32 func_151643F8(struct225 *arg0) {
    func_1516441C(arg0, &arg0->unk18);
    return 1;
}

void func_1516441C(struct225 *arg0, void *arg1) {
    void *sp2C;
    void *sp28;
    f32 sp1C[3];

    sp2C = arg1;
    sp28 = sp1C;
    func_15145CD0(((struct227_ext *)arg1)->unkC, &sp2C, &sp28, 1);
    arg0->unk14->unkE = sp1C[0];
    arg0->unk14->unk10 = sp1C[1];
    arg0->unk14->unk12 = sp1C[2];
}

s32 func_151644A8(struct242 *arg0) {
    f32 temp_f0;
    struct17 *temp_v0;

    temp_v0 = arg0->unk20;
    temp_f0 = arg0->unk1C;
    func_151644F4(arg0, &arg0->unk24, arg0->unk18, temp_v0->unk0 * temp_f0, temp_v0->unk8 * temp_f0);
    return 1;
}

void func_151644F4(struct242 *arg0, struct17 *arg1, s32 arg2, f32 arg3, f32 arg4) {
    f32 tmp3;
    f32 tmp2;
    f32 tmp1;
    f32 tmp[16];

    func_150A8050(tmp, arg3, 0.0f, arg4);
    tmp[12] = arg1->unk0;
    tmp[13] = arg1->unk4;
    tmp[14] = arg1->unk8;
    func_150A7960(tmp, 0.0f, arg2, 0.0f, &tmp1, &tmp2, &tmp3);
    arg0->unk14->unkE = tmp1;
    arg0->unk14->unk10 = tmp2;
    arg0->unk14->unk12 = tmp3;
}

void func_1511172C(s32 arg0);
void func_1515F170(s32 arg0, s32 arg1);
extern u8 D_800886F0[];
extern u8 D_800886F4[];
extern u8 D_800886F8[];

void func_151645C4(u8 arg0) {
    D_800DCDD0 = arg0;
    if (arg0 != 0) {
        switch (D_800BE9F0) {
        case 0xB:
            func_1511172C(4);
            break;
        case 6:
            func_1515F170(0xA, 1);
            func_1511172C(4);
            /* fallthrough */
        case 0x39:
            ((u8 *)&D_800DCD20)[0] = D_800886F0[0];
            ((u8 *)&D_800DCD20)[1] = D_800886F0[1];
            ((u8 *)&D_800DCD20)[2] = D_800886F0[2];
            D_800B0DF0->unk5 = D_800886F4[0];
            D_800B0DF0->unk6 = D_800886F4[1];
            D_800B0DF0->unk7 = D_800886F4[2];
            break;
        case 7:
        case 0xC:
            break;
        }
    } else {
        switch (D_800BE9F0) {
        case 6:
            func_1515F170(0xA, 0);
            /* fallthrough */
        case 7:
        case 0xC:
        case 0x39:
            func_1511172C(6);
            ((u8 *)&D_800DCD20)[0] = D_800886F8[0];
            ((u8 *)&D_800DCD20)[1] = D_800886F8[1];
            ((u8 *)&D_800DCD20)[2] = D_800886F8[2];
            D_800B0DF0->unk5 = 0xFF;
            D_800B0DF0->unk6 = 0xFF;
            D_800B0DF0->unk7 = 0xFF;
            break;
        case 0xB:
            func_1511172C(6);
            break;
        case 0x29:
            func_1511172C(1);
            break;
        }
    }
}
