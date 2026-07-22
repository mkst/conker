#include <ultra64.h>

#include "functions.h"
#include "variables.h"

extern f32 D_800A5624;
extern f32 D_800A5628;
extern f32 D_800A5694;
extern f32 D_800A5698;
extern f32 D_800A569C;
extern u8 D_800C3E90;
extern u8 D_8008A160[];
extern u32 D_800DD200;
extern u32 D_800DD1FC;
extern u32 D_800DD218;
extern u32 D_800DD21C;
extern s16 D_800DD1C8;
extern s16 D_800DD1CA;
extern s16 D_800DD1CC;
extern s16 D_800DD1CE;
extern s16 D_800DD204;
extern s16 D_800DD206;
extern s16 D_800DD1C0;
extern s16 D_800DD1C2;
extern s16 D_800DD1C4;
extern s16 D_800DD1C6;

// 0x40-stride record for func_15142314: hi s16 vec at 0x18, f32 vec at 0x30,
// lo s16 vec at 0x38 (aliases the f32 z)
typedef struct {
    u8  pad0[0x18];
    s16 unk18;
    s16 unk1A;
    s16 unk1C;
    u8  pad1E[0x12];
    f32 unk30;
    f32 unk34;
    s16 unk38;
    s16 unk3A;
    s16 unk3C;
    u8  pad3E[0x2];
} struct_fv;

// struct134's unk6/unk8/unkA are u16 in structs.h but accessed signed (lh) here
typedef struct {
    u8  pad0[0x6];
    s16 unk6;
    s16 unk8;
    s16 unkA;
    u8  padC[0x9];
    u8  unk15;
} struct134_s;

void func_15143794(s16, s16, f32, struct17 *);
s32 func_1514563C(struct17 *, struct17 *, struct17 *, struct17 *, f32 *);

typedef struct { s32 unk[6]; } struct_s6;
extern struct_s6 D_800A5200;
s32 func_150A2AEC(s32, s32, struct_s6 *, struct127 *);

void func_150A7960(void *arg0, f32 arg1, f32 arg2, f32 arg3, f32 *arg4, f32 *arg5, f32 *arg6);
s32 func_151452C4(struct17 *, struct17 *, struct17 *, f32, struct17 *, struct17 *, f32 *, f32 *);

// transform record: f32 rotation vec at 0x0, s16 translation vec at 0x10
typedef struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    u8  padC[4];
    s16 unk10;
    s16 unk12;
    s16 unk14;
} struct_xf;



void func_15141970(struct37 *arg0) {
    func_1514EDF0(arg0, arg0->unk2C);
}

void func_15141990(void *arg0) {
    func_15141970(arg0);
}

void func_151419B0(void *arg0) {
    func_15141970(arg0);
}

typedef struct { u8 pad0[4]; s32 unk4; s32 unk8; } struct102_sub;
void func_151419D0(struct102 *arg0, u8 *arg1, u8 arg2) {
    struct102_sub *sub = (struct102_sub *)((u8 *)arg0 + 0x28);
    s32 *new_var;
    if (arg2 == 0) {
        s32 v = *(s32 *)arg1;
        if (v == sub->unk4 || *(u8 *)&sub->unk8 == arg1[4]) {
            func_1516972C(arg0);
        }
    } else {
        new_var = &sub->unk4;
        if (arg2 == 0x2D) {
            if (*(s32 *)arg1 == *new_var) {
                sub->unk4 = *(s32 *)(arg1 + 4);
                *(u8 *)&sub->unk8 = arg1[9];
            } else if (*(s32 *)(arg1 + 4) == *new_var) {
                sub->unk4 = *(s32 *)arg1;
                *(u8 *)&sub->unk8 = arg1[8];
            }
        }
    }
}
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15141A7C.s")
// requires jump table
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15141C0C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15141CC0.s")

void func_15141DA4(void *arg0, s32 arg1, s32 arg2) {
    if ((arg1 < 12) && (arg1 >= 0) &&
        (arg2 < 20) && (arg2 >= 0) &&
        (D_800BE616 == 0) &&
        (D_8008A084[arg1] != 0) && (arg2 != -1)) {
        if ((D_8008A0B4[arg2].unk0 != 0) && (D_8008A0B4[arg2].unk4 > 0)) {
            func_15141E38(arg0, arg2);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15141E38.s")

void func_15141F78(u8 arg0, struct241 *arg1, f32 arg2, u8 arg3, struct17 *arg4, u8 arg5) {
    struct157 tmp;
    f32 temp_f2;
    s32 phi_v0;

    tmp.unk6 = arg0;
    tmp.unk7 = 0;
    tmp.unk0 = 0x6F701;
    tmp.unk4 = (func_150ADA20() % 61U) + 100;
    tmp.unk8 = 0;
    tmp.unkC = 0;
    tmp.unk10 = (func_150ADA20() & 0x7F) + 128;
    // unk11-unk15/unk20 are likely u8 (colour components); struct157 declares
    // them s8, so store through a u8 cast to keep the 0xFF immediate unsigned
    *(u8 *) &tmp.unk11 = 0xFF;
    *(u8 *) &tmp.unk12 = 0xFF;
    *(u8 *) &tmp.unk13 = 0xFF;
    *(u8 *) &tmp.unk14 = 0xFF;
    *(u8 *) &tmp.unk15 = 0xFF;
    tmp.unk18 = 0x3B0002;
    tmp.unk16 = 0;
    tmp.unk17 = 7;
    *(u8 *) &tmp.unk20 = 0xFF;
    tmp.unk1C = arg1->unk18;
    tmp.unk22 = 0x28;
    tmp.unk24 = 6;
    temp_f2 = ((func_150ADA68() * 5.0f) + 10.0f) * arg2;
    if (arg5 == 2) {
        phi_v0 = 1;
    } else {
        phi_v0 = 0;
    }
    func_1513C650(&tmp, 0, 0, &arg1->unk4, arg4->unk0, arg1->unk0, arg4->unk8, temp_f2, temp_f2, arg3, phi_v0, 3, 1, 0, 0xFF, 1);
}

s32 func_151420F8(struct127 *arg0) {
    struct_s6 sp18;

    sp18 = D_800A5200;
    if (func_150A2AEC(arg0 - D_800CC2D0, 6, &sp18, arg0) == -1) {
        return 0;
    }
    return 1;
}
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15142180.s")

s32 func_151422C0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    return (arg3 + arg2) >> 1;
}

s32 func_151422DC(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    return arg4;
}

s32 func_151422F8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    return arg4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15142314.s")
// NON-MATCHING: score 905, all instructions byte-identical & aligned; only the
// branch region differs (target: plain beqz with `addu v0,a0,t7` in delay + a
// speculatively-hoisted `lui 0x3780`; mine: beqzl with else-load in delay).
// Pure -O2 scheduling. Permuter candidate. Reconstruction (struct_fv, D_800C3E90):
// void func_15142314(struct_fv *arg0, s32 arg1, struct17 *arg2) {
//     if (D_800C3E90 != 0) {
//         arg2->unk0 = ((f32)(arg0[arg1].unk18 << 16) + (f32)arg0[arg1].unk38) * 0.0000152587890625f;
//         arg2->unk4 = ((f32)(arg0[arg1].unk1A << 16) + (f32)arg0[arg1].unk3A) * 0.0000152587890625f;
//         arg2->unk8 = ((f32)(arg0[arg1].unk1C << 16) + (f32)arg0[arg1].unk3C) * 0.0000152587890625f;
//     } else {
//         arg2->unk0 = arg0[arg1].unk30;
//         arg2->unk4 = arg0[arg1].unk34;
//         arg2->unk8 = *(f32 *)&arg0[arg1].unk38;
//     }
// }
f32 func_151423D8(u8 arg0) {
    s32 idx;
    u16 q;
    if (arg0 & 0x40) { idx = 0x40 - (arg0 & 0x3F); } else { idx = arg0 & 0x3F; }
    q = arg0 & 0xC0;
    if ((q == 0) || (q == 0xC0)) { return D_8009A220[idx]; }
    return -D_8009A220[idx];
}
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15142444.s")
// NON-MATCHING: score ~945, correct logic. JUSTREG: target keeps arg0 in a0/v0
// throughout (calls func_15083E90 with arg0 already in a0); my C relocates arg0
// to a2 and adds a move. Also the func_15083E90 result checks want beqzl
// (branch-likely) vs my bnez. Permuter candidate. Field at 0x1D4 accessed via cast.
// struct127 *func_15142444(u8 arg0, struct127 *arg1) {
//     struct127 *temp;
//     if (arg0 == 0xFF) {
//         if (*(s32*)((u8*)arg1 + 0x1D4) != 0) return arg1;
//         return NULL;
//     }
//     if (arg1 != NULL && arg1->interaction_state != 0 && arg0 == arg1->unique_id) {
//         if (*(s32*)((u8*)arg1 + 0x1D4) != 0) return arg1;
//         return NULL;
//     }
//     temp = func_15083E90(arg0);
//     if (temp == NULL) return NULL;
//     if (*(s32*)((u8*)temp + 0x1D4) == 0) return NULL;
//     return temp;
// }
void func_151424F4(Mtx *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9, f32 arg10, f32 arg11) {
    f32 mtx[4][4];

    func_150A8050(mtx, arg3, arg4, arg5);
    mtx[3][0] = arg9;
    mtx[3][1] = arg10;
    mtx[3][2] = arg11;
    mtx[0][0] *= arg6 * arg1;
    mtx[0][1] *= arg7 * arg1;
    mtx[0][2] *= arg8 * arg1;
    mtx[1][0] *= arg6 * arg2;
    mtx[1][1] *= arg7 * arg2;
    mtx[1][2] *= arg8 * arg2;
    mtx[2][0] *= arg6 * arg1;
    mtx[2][1] *= arg7 * arg1;
    mtx[2][2] *= arg8 * arg1;
    guMtxF2L(mtx, arg0);
}
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15142600.s")
void func_15142838(Mtx *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8) {
    f32 mtx[4][4];

    func_150A8050(mtx, arg3, arg4, arg5);
    mtx[3][0] = arg6;
    mtx[3][1] = arg7;
    mtx[3][2] = arg8;
    mtx[0][0] *= arg1;
    mtx[0][1] *= arg1;
    mtx[0][2] *= arg1;
    mtx[1][0] *= arg2;
    mtx[1][1] *= arg2;
    mtx[1][2] *= arg2;
    mtx[2][0] *= arg1;
    mtx[2][1] *= arg1;
    mtx[2][2] *= arg1;
    guMtxF2L(mtx, arg0);
}
void func_15142914(f32 arg0[4][4], f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8) {
    func_150A8050(arg0, arg3, arg4, arg5);
    arg0[3][0] = arg6;
    arg0[3][1] = arg7;
    arg0[3][2] = arg8;
    arg0[0][0] *= arg1;
    arg0[0][1] *= arg1;
    arg0[0][2] *= arg1;
    arg0[1][0] *= arg2;
    arg0[1][1] *= arg2;
    arg0[1][2] *= arg2;
    arg0[2][0] *= arg1;
    arg0[2][1] *= arg1;
    arg0[2][2] *= arg1;
}
void func_151429E0(u8 arg0, u8 *arg1, u8 *arg2, u8 *arg3) {
    u8 *temp;
    s32 r;

    r = func_150ADA20() & 3;
    temp = &D_8008A160[r * 3 + arg0 * 12];
    *arg1 = temp[0];
    *arg2 = temp[1];
    *arg3 = temp[2];
}

s32 func_15142A5C(struct127 *arg0) {
    struct113 *temp = (struct113 *) arg0->unk2D0;

    if (temp->unk3C > 0) {
        return 1;
    }
    return 0;
}

f32 func_15142A80(f32 arg0) {
    return (1.0f - arg0) * (arg0 - 2.0f) * arg0 * D_800A5624;
}

f32 func_15142AC0(f32 arg0) {
    return (arg0 + 1.0f) * (arg0 - 1.0f) * (arg0 - 2.0f) * 0.5f;
}

f32 func_15142B04(f32 arg0) {
    return (2.0f - arg0) * (arg0 + 1.0f) * arg0 * 0.5f;
}

f32 func_15142B44(f32 arg0) {
    return (arg0 + 1.0f) * (arg0 - 1.0f) * arg0 * D_800A5628;
}

Gfx *func_15142B7C(Gfx *gdl, u32 arg1, u32 arg2) {
    if ((~D_800DD200 & arg2) != 0) {
        gSPGeometryMode(gdl++, arg2, 0);
        D_800DD200 |= arg2;
    }
    if ((~D_800DD1FC & arg1) != 0) {
        gSPGeometryMode(gdl++, 0, arg1);
        D_800DD1FC |= arg1;
    }
    return gdl;
}
Gfx *func_15142C10(Gfx *gdl, s32 r, s32 g, s32 b, s32 a, u8 *arg5) {
    if ((r != D_800DD1C8) || (g != D_800DD1CA) || (b != D_800DD1CC) || (a != D_800DD1CE)) {
        if (*arg5 == 1) {
            gDPPipeSync(gdl++);
            *arg5 = 0;
        }
        gDPSetEnvColor(gdl++, r, g, b, a);
        D_800DD1C8 = r;
        D_800DD1CA = g;
        D_800DD1CC = b;
        D_800DD1CE = a;
    }
    return gdl;
}
Gfx *func_15142CF0(Gfx *gdl, s32 m, s32 l, s32 r, s32 g, s32 b, s32 a, u8 *arg7) {
    if ((m != D_800DD204) || (l != D_800DD206) || (r != D_800DD1C0) || (g != D_800DD1C2) || (b != D_800DD1C4) || (a != D_800DD1C6)) {
        if (*arg7 == 1) {
            gDPPipeSync(gdl++);
            *arg7 = 0;
        }
        gDPSetPrimColor(gdl++, m, l, r, g, b, a);
        D_800DD204 = m;
        D_800DD206 = l;
        D_800DD1C0 = r;
        D_800DD1C2 = g;
        D_800DD1C4 = b;
        D_800DD1C6 = a;
    }
    return gdl;
}
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15142E24.s")
Gfx *func_15142FBC(Gfx *gdl, u32 arg1, u32 arg2, u8 *arg3) {
    if ((arg1 != D_800DD218) || (arg2 != D_800DD21C)) {
        if (*arg3 == 1) {
            gDPPipeSync(gdl++);
            *arg3 = 0;
        }
        gDPSetOtherMode(gdl++, arg1 | 0xF, arg2);
        D_800DD218 = arg1;
        D_800DD21C = arg2;
    }
    return gdl;
}

s16 func_15143044(u8 arg0, u8 arg1) {
    return 0x7FFF - arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_1514306C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15143134.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_151432BC.s")

// void func_151432BC(struct208 *arg0, f32 *arg1, f32 *arg2, f32 *arg3, f32 *arg4) {
//     struct209 tmp;
//     f32 temp_f2;
//     f32 temp_f6;
//     f32 temp_ret;
//     s32 temp_t6;
//     u8 temp_a0;
//
//     temp_t6 = (arg0->unk15) & 3;
//     if (temp_t6 == 0) {
//         tmp.unk1B = func_150ADA20();
//         tmp.unk14 = func_151423D8((tmp.unk1B - 64) & 0xFF);
//         tmp.unk10 = func_151423D8(tmp.unk1B);
//         temp_ret = func_150ADA68();
//         temp_f2 = temp_ret * arg0->unk6;
//         *arg1 = (arg0->unk0 + (temp_f2 * tmp.unk10));
//         *arg2 = (arg0->unk4 - (temp_f2 * tmp.unk14));
//         *arg3 = (arg0->unk2 + arg0->unk8);
//         *arg4 = arg0->unk2;
//     } else if (temp_t6 != 1) {
//         if (temp_t6 == 2) {
//             tmp.unk2F = (u32) (arg0->unk10 * D_800A5644); // 0.7111111283302307
//             tmp.unk28 = func_151423D8((tmp.unk2F - 64));
//             tmp.unk24 = func_151423D8(tmp.unk2F);
//             tmp.unk20 = (func_150ADA68() * (2.0f * (f32) arg0->unk6)) + (f32) -(s32) arg0->unk6;
//             temp_f2 = (func_150ADA68() * (2.0f * (f32) arg0->unkA)) + (f32) -(s32) arg0->unkA;
//             temp_f6 = temp_f2 * tmp.unk24;
//             *arg1 = (arg0->unk0 + ((tmp.unk20 * tmp.unk24) + (temp_f2 * tmp.unk28)));
//             *arg2 = (arg0->unk4 + (temp_f6 - (tmp.unk20 * tmp.unk28)));
//             *arg3 = (arg0->unk2 + arg0->unk8);
//             *arg4 = arg0->unk2;
//         } else {
//             *arg1 = arg0->unk0;
//             *arg2 = arg0->unk4;
//             *arg3 = (arg0->unk2 + arg0->unk8);
//             *arg4 = (arg0->unk2 - arg0->unk8);
//         }
//     } else {
//         tmp.unkB = func_150ADA20();
//         tmp.unk4 = func_151423D8((tmp.unkB - 64));
//         tmp.unk0 = func_151423D8(tmp.unkB);
//         temp_ret = func_150ADA68();
//         temp_f2 = temp_ret * (f32) arg0->unk6;
//         *arg1 = (arg0->unk0 + (temp_f2 * tmp.unk0));
//         *arg2 = (arg0->unk4 - (temp_f2 * tmp.unk4));
//         *arg3 = (arg0->unk2 + arg0->unk8);
//         *arg4 = (arg0->unk2 - arg0->unk8);
//     }
// }


void func_151436B4(f32 arg0, f32 arg1, f32 arg2, struct17 *arg3) {
    f32 ca = cosf(arg0);
    f32 sa = sinf(arg0);
    f32 cb = cosf(arg1);
    f32 sb = sinf(arg1);

    arg3->unk0 = (arg2 * cb) * sa;
    arg3->unk4 = -arg2 * sb;
    arg3->unk8 = (arg2 * cb) * ca;
}

void func_1514373C(f32 arg0, f32 arg1, f32 *arg2, f32 *arg3) {
    f32 c = cosf(arg0);
    f32 s = sinf(arg0);

    *arg2 = arg1 * s;
    *arg3 = arg1 * c;
}

void func_15143794(s16 arg0, s16 arg1, f32 arg2, struct17 *arg3) {
    f32 sa = func_151423D8((u8) arg0);
    f32 ca = func_151423D8((u8) (arg0 - 0x40));
    f32 sb = func_151423D8((u8) arg1);
    f32 cb = func_151423D8((u8) (arg1 - 0x40));

    arg3->unk0 = (arg2 * sb) * ca;
    arg3->unk4 = -arg2 * cb;
    arg3->unk8 = (arg2 * sb) * sa;
}

void func_15143834(s16 arg0, s16 arg1, f32 arg2, struct17 *arg3) {
    func_15143794(arg0, arg1, arg2, arg3);
}

void func_15143874(s16 arg0, f32 arg1, f32 *arg2, f32 *arg3) {
    f32 r1 = func_151423D8((u8)arg0);
    f32 r2 = func_151423D8((u8)(arg0 - 0x40));

    *arg2 = arg1 * r2;
    *arg3 = arg1 * r1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_151438D8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15143D18.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15143DA8.s")
// NON-MATCHING: score 805 with the xor-swap idiom below (was ~1075). Target spills
// arg0 to 0(sp) and reloads it into fresh temps (t6/t7) per use, and swaps arg1/arg2
// via a temp-derive xor form - both register-pressure artifacts my clean C avoids.
// PERMUTER CANDIDATE.
// s32 func_15143DA8(s32 *arg0, s32 arg1, s32 arg2) {  // clamp *arg0 into [min,max]
//     if (arg2 < arg1) { arg1 ^= arg2; arg2 ^= arg1; arg1 ^= arg2; }
//     if (*arg0 < arg1) { *arg0 = arg1; return 1; }
//     if (arg2 < *arg0) { *arg0 = arg2; return 2; }
//     return 0;
// }

s32 func_15143E08(struct127 *arg0) {
    return (((s32) arg0->unk7A >> 8) + 64) & 0xFF;
}

s16 func_15143E24(struct127 *arg0) {
    if (arg0->unk31C != 0) {
        return (arg0->unk7A - arg0->unk31C->unk12) >> 8;
    }
    return arg0->unk7A >> 8;
}

f32 func_15143E64(struct17 *arg0) {
    f32 x;
    f32 y;
    f32 z;

    x = arg0->unk0;
    y = arg0->unk4;
    z = arg0->unk8;
    return sqrtf((x * x) + (y * y) + (z * z));
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15143E94.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_1514401C.s")
// permuter NO ZERO, best 545
// NON-MATCHING: score 545, logic byte-identical, all instructions aligned. The
// only diff: `val` splits into two temps (t1 for div/loops, t2 for the underflow
// `val<0` check) which adds one `move` at the top and reschedules the `arg3&1`
// andi; target coalesces val into t1 everywhere. Pure register-coalescing near-
// miss - PERMUTER CANDIDATE. Reconstruction (extern u8 D_80090B64[], stride 12):
// s32 func_1514401C(u8 arg0, s32 *arg1, s32 *arg2, u8 arg3) {
//     s32 ret = 0, b = D_80090B64[arg0 * 12], max = (b << 16) - 1, val;
//     *arg2 += *arg1 * D_800BE9E4;
//     val = *arg2;
//     if (max < val) {
//         if (arg3 & 1) ret = 1;
//         else if (arg3 & 2) { *arg1 = 0; *arg2 = max; }
//         else if (arg3 & 4) { *arg2 = max - (*arg2 % max); *arg1 = -*arg1; }
//         else { do { *arg2 -= max; val = *arg2; } while (max < val); }
//     } else if (val < 0) {
//         if (arg3 & 8) {}
//         else if (arg3 & 0x10) { *arg1 = 0; *arg2 = 0; }
//         else if (arg3 & 4) { *arg2 = (-*arg2) % max; *arg1 = -*arg1; }
//         else { do { *arg2 += max; val = *arg2; } while (val < 0); }
//     }
//     return ret;
// }
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_151441A4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_151442FC.s")

s32 func_151444DC(s32 arg0, s32 arg1, s32 arg2) {
    s32 range;

    if (arg0 > arg1) {
        range = (arg1 - arg2) + 1;
        do {
            arg0 -= range;
        } while (arg0 > arg1);
    }
    if (arg0 < arg2) {
        range = (arg1 - arg2) + 1;
        do {
            arg0 += range;
        } while (arg0 < arg2);
    }
    return arg0;
}

f32 func_15144528(f32 arg0, f32 arg1, f32 arg2) {
    while (arg0 > arg1) {
        arg0 -= arg1 - arg2;
    }
    while (arg0 < arg2) {
        arg0 += arg1 - arg2;
    }
    return arg0;
}
f32 func_15144598(struct134 *arg0_) {
    struct134_s *arg0 = (struct134_s *) arg0_;
    f32 ret;
    s16 v;

    switch (arg0->unk15 & 3) {
    case 2:
        ret = (f32) (arg0->unk6 * arg0->unkA) * 4.0f;
        break;
    case 0:
    case 1:
        v = arg0->unk6;
        ret = (f32) (v * v) * D_800A5694;
        break;
    default:
        ret = 1.0f;
        break;
    }
    return ret;
}
f32 func_1514462C(s32 arg0_) {
    struct134_s *arg0 = (struct134_s *) arg0_;
    f32 ret;
    s16 v;
    f32 fv;

    switch (arg0->unk15 & 3) {
    case 2:
        ret = (f32) (arg0->unk6 * arg0->unk8 * arg0->unkA);
        break;
    case 0:
        v = arg0->unk6;
        ret = (f32) (v * v) * D_800A5698 * (f32) arg0->unk8;
        break;
    case 1:
        fv = arg0->unk6;
        ret = fv * D_800A569C * fv * fv;
        break;
    default:
        ret = 1.0f;
        break;
    }
    return ret;
}
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_1514470C.s")

f32 func_15144A74(struct17 *arg0, struct17 *arg1) {
    return (arg0->unk0 * arg1->unk0) + (arg0->unk4 * arg1->unk4) + (arg0->unk8 * arg1->unk8);
}

f32 func_15144AA8(s32 arg0) {
    f32 v = D_800DBFF0[arg0].unk380;

    while (v > 360.0f) {
        v -= 360.0f;
    }
    while (v < 0.0f) {
        v += 360.0f;
    }
    return v;
}

struct17 *func_15144B34(s32 arg0) {
    return (struct17 *) &D_800DBFF0[arg0].unk2F8;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15144B68.s")
// NON-MATCHING: score 60, ONE instruction misscheduled. Identical in shape to the
// matching func_15144BC8 below, but its limit is a memory load (lwc1 D_800A56A4)
// rather than a literal; IDO fills the load-delay slot with "mov.s f2,f12" whereas
// the target emits it after the first compare. Not controllable from C.
// f32 func_15144B68(f32 arg0) {
//     f32 v = arg0;
//     while (v > D_800A56A4) { v -= D_800A56A4; }
//     while (v < 0.0f)       { v += D_800A56A4; }
//     return v;
// }

f32 func_15144BC8(f32 arg0) {
    f32 v = arg0;

    while (v > 360.0f) {
        v -= 360.0f;
    }
    while (v < 0.0f) {
        v += 360.0f;
    }
    return v;
}

s32 func_15144C2C(s16 arg0) {
    s16 tmp1 = arg0;

    while (tmp1 >= 256)
    {
        tmp1 -= 255;
    }
    while (tmp1 < 0)
    {
        tmp1 += 255;
    }

    return tmp1;
}

f32 func_15144C8C(f32 arg0, f32 arg1) {
    f32 tmp;

    arg0 = func_15144B68(arg0);
    tmp = fabsf(arg0 - func_15144B68(arg1));
    if (D_800A56A8 < tmp) {
        tmp = D_800A56AC - tmp;
    }
    return tmp;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15144CEC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15144E80.s")

void func_151450B4(struct17 *arg0, struct17 *arg1, struct17 *arg2) {
    arg2->unk0 = arg0->unk4 * arg1->unk8 - arg0->unk8 * arg1->unk4;
    arg2->unk4 = arg0->unk8 * arg1->unk0 - arg0->unk0 * arg1->unk8;
    arg2->unk8 = arg0->unk0 * arg1->unk4 - arg0->unk4 * arg1->unk0;
}

s32 func_15145128(struct17 *arg0, struct17 *arg1, f32 *arg2, f32 *arg3) {
    f32 mag2;
    f32 local;

    if (arg3 == NULL) {
        arg3 = &local;
    }
    mag2 = arg0->unk0 * arg0->unk0 + arg0->unk4 * arg0->unk4 + arg0->unk8 * arg0->unk8;
    if (mag2 == 0.0f) {
        return 0;
    }
    if (arg2 != NULL) {
        *arg2 = sqrtf(mag2);
        *arg3 = 1.0f / *arg2;
    } else {
        *arg3 = 1.0f / sqrtf(mag2);
    }
    arg1->unk0 = *arg3 * arg0->unk0;
    arg1->unk4 = *arg3 * arg0->unk4;
    arg1->unk8 = *arg3 * arg0->unk8;
    return 1;
}
s32 func_151451F0(struct17 *arg0, struct17 *arg1, struct17 *arg2, f32 arg3, f32 arg5, struct17 *arg6, struct17 *arg7, f32 *arg8, f32 *arg9) {
    f32 p8;

    if (func_151452C4(arg0, arg1, arg2, arg3, arg6, arg7, arg8, arg9) != 0) {
        p8 = *arg8;
        if (p8 < 0.0f) {
            if (*arg9 < 0.0f) {
                return 0;
            }
        }
        if (0.0f <= p8) {
            if (*arg9 < 0.0f) {
                return 1;
            }
        }
        if (p8 < arg5) {
            return 1;
        }
        return 0;
    }
    return 0;
}
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_151452C4.s")
// NON-MATCHING: score 1697, logic/structure byte-correct (line-sphere intersection).
// Reg-alloc near-miss: d4/d8 land in f2/f12 (mine) vs f12/f14 (target), cascading
// through all FP register numbers; target also spills `disc` to 0x1c(sp) which my C
// keeps in a register. Frame 0x68 vs 0x70. Permuter candidate. Reconstruction:
// s32 func_151452C4(struct17 *a0, struct17 *a1, struct17 *a2, f32 arg3, struct17 *arg5,
//                   struct17 *arg6, f32 *arg7, f32 *arg8) {
//     struct17 vv, pp, delta; f32 d0,d4,d8,dot,disc,r2,s,t1,t2;
//     d0 = a2->unk0 - a0->unk0; d4 = a2->unk4 - a0->unk4; d8 = a2->unk8 - a0->unk8;
//     vv = *a1; pp = *a0; r2 = arg3 * arg3;
//     dot = d0*vv.unk0 + d4*vv.unk4 + d8*vv.unk8;
//     disc = (d0*d0 + d4*d4 + d8*d8) - dot*dot;
//     if (r2 < disc) return 0;
//     s = sqrtf(r2 - disc);
//     if (dot < s) s = -s;
//     t1 = dot - s; t2 = dot + s;
//     arg5->unk0 = t1*vv.unk0 + pp.unk0; arg5->unk4 = t1*vv.unk4 + pp.unk4; arg5->unk8 = t1*vv.unk8 + pp.unk8;
//     *arg7 = t1;
//     arg6->unk0 = t2*vv.unk0 + pp.unk0; arg6->unk4 = t2*vv.unk4 + pp.unk4; arg6->unk8 = t2*vv.unk8 + pp.unk8;
//     *arg8 = t2;
//     delta.unk0 = arg5->unk0 - a0->unk0; delta.unk4 = arg5->unk4 - a0->unk4; delta.unk8 = arg5->unk8 - a0->unk8;
//     if (func_15144A74(&delta, a1) < 0.0f) return 0;
//     return 1;
// }

s32 func_151454BC(u8 arg0, f32 arg1, struct17 *arg2) {
    f32 tmp1;
    f32 tmp2;
    f32 tmp3;
    struct17 *temp_v0;

    temp_v0 = func_15144B34(arg0);
    tmp1 = arg2->unk0 - temp_v0->unk0;
    tmp2 = arg2->unk4 - temp_v0->unk4;
    tmp3 = arg2->unk8 - temp_v0->unk8;

    if ((arg1 * arg1) < ((tmp1 * tmp1) + (tmp2 * tmp2) + (tmp3 * tmp3))) {
        return 0;
    }
    return 1;
}

void func_15145548(struct17 *arg0, struct17 *arg1, struct17 *arg2, struct17 *arg3, f32 *arg4) {
    f32 local;

    if (arg4 == NULL) {
        arg4 = &local;
    }
    if (func_1514563C(arg0, arg1, arg2, arg3, arg4) != 0) {
        if (*arg4 < 0.0f) {
            *arg3 = *arg0;
        } else if (1.0f < *arg4) {
            arg3->unk0 = arg0->unk0 + arg1->unk0;
            arg3->unk4 = arg0->unk4 + arg1->unk4;
            arg3->unk8 = arg0->unk8 + arg1->unk8;
        }
    } else {
        *arg3 = *arg0;
    }
}
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_1514563C.s")
// NON-MATCHING: score 150, frame size correct (0x20), logic byte-identical.
// Remaining: FP register renames near the divide + target homes `t` to 0(sp)
// (swc1) which my C omits. Register-allocation near-miss; permuter candidate.
// s32 func_1514563C(struct17 *arg0, struct17 *arg1, struct17 *arg2, struct17 *arg3, f32 *arg4) {
//     f32 local, mag2, da, t;
//     if (arg4 == NULL) arg4 = &local;
//     mag2 = arg1->unk0*arg1->unk0 + arg1->unk4*arg1->unk4 + arg1->unk8*arg1->unk8;
//     if (mag2 == 0.0f) return 0;
//     da = arg1->unk0*arg0->unk0 + arg1->unk4*arg0->unk4 + arg1->unk8*arg0->unk8;
//     t = (arg1->unk0*arg2->unk0 + arg1->unk4*arg2->unk4 + arg1->unk8*arg2->unk8 - da) / mag2;
//     *arg4 = t;
//     arg3->unk0 = t * arg1->unk0 + arg0->unk0;
//     arg3->unk4 = *arg4 * arg1->unk4 + arg0->unk4;
//     arg3->unk8 = *arg4 * arg1->unk8 + arg0->unk8;
//     return 1;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15145740.s")
// NON-MATCHING: 90% there
// void func_15145740(struct127 *arg0, struct17 *arg1, struct17 *arg2, struct17 *arg3, f32 arg4) {
//     struct194 tmp;
//     f32 temp_f6;
//     s16 phi_v1;
//     s16 phi_t0;
//
//     if ((arg0->unk4 == 0x96) && ((arg0->unk31C->unk7D != 0))) {
//         phi_t0 = arg0->unk7A + arg0->unk31C->unk80;
//     } else {
//         if (arg0->unk31C != 0) {
//             phi_t0 = arg0->unk7A - arg0->unk31C->unk12;
//         } else {
//             phi_t0 = arg0->unk7A;
//         }
//     }
//     if ((arg0->unk4 == 0x96) && (arg0->unk31C->unk7D != 0)) {
//         phi_v1 = arg0->unk31C->unk82 + 1024;
//     } else {
//         phi_v1 = arg0->unk1D1 * 200;
//     }
//     tmp.unk14 = phi_t0;
//     tmp.unk10 = phi_v1 * 0.005493164f;
//     tmp.unk0 = tmp.unk10 * D_800A56B4;
//     func_1505A184(phi_t0, 2000.0f, tmp.unk10, &arg1->unk0, &arg1->unk8, &arg1->unk4);
//     if (arg2 != 0) {
//         arg2->unk4 = cosf(tmp.unk0) * 1000.0f;
//         temp_f6 = sinf(tmp.unk0) * 1000.0f;
//         tmp.unk8 = temp_f6;
//         tmp.unk4 = phi_t0 * D_800A56B8;
//         arg2->unk0 = cosf(tmp.unk4) * tmp.unk8;
//         arg2->unk8 = sinf(tmp.unk4) * -temp_f6;
//         if (arg3 != 0) {
//             tmp.unkC = tmp.unk0 + arg4;
//             arg3->unk4 = cosf(tmp.unkC) * 1000.0f;
//             tmp.unk8 = sinf(tmp.unkC) * 1000.0f;
//             arg3->unk0 = cosf(tmp.unk4) * tmp.unk8;
//             arg3->unk8 = sinf(tmp.unk4) * -tmp.unk8;
//         }
//     }
// }

void func_15145974(struct17 *arg0, f32 *arg1, f32 *arg2) {
    *arg1 = func_150484A0(arg0->unk0, arg0->unk8) * D_800A56BC;
    if (arg2 != NULL) {
        *arg2 = (func_150484A0(sqrtf(arg0->unk0 * arg0->unk0 + arg0->unk8 * arg0->unk8), arg0->unk4) * D_800A56C0) - 90.0f;
    }
}

f32 func_15145A0C(f32 arg0, f32 arg1, f32 arg2) {
    return D_800A548C[(s32)(arg0 * arg2 * 100.0f)] * arg1;
}


void func_15145A50(struct127 *arg0) {
    arg0->unk5 = 3;
    if (D_800BE9F0 != 51) {
        if ((D_800BE616 != 0) || (arg0->interaction_state == 5) || (arg0->interaction_state == 1) || (arg0->interaction_state == 21)) {
            arg0->interaction_state = 5;
            if (arg0->unk31C != NULL) {
                arg0->unk31C->unk78 = 0;
            }
        } else {
            func_15053694(arg0);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15145AD8.s")

u8 func_15145C90(s32 arg0) {
    if (arg0 < 0) {
        return 1;
    } else {
        return (D_800DBEF4[arg0].unk6F & 0x80) == 0x80;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15145CD0.s")
// NON-MATCHING: score 3036, loop body byte-perfect. Reg-alloc near-miss: target
// homes arg1/arg2 across func_150A8050 and reuses arg0's saved reg (s1) for arg1;
// my C keeps arg0 in a 5th saved reg (s4). Also bnez vs bgtz on the back-edge.
// Permuter candidate. Reconstruction (struct_xf, struct17):
// void func_15145CD0(struct_xf *arg0, struct17 **arg1, struct17 **arg2, s32 arg3) {
//     f32 mtx[4][4]; s32 i; struct17 *in; struct17 *out;
//     func_150A8050(mtx, arg0->unk0, arg0->unk4, arg0->unk8);
//     mtx[3][0]=arg0->unk10; mtx[3][1]=arg0->unk12; mtx[3][2]=arg0->unk14;
//     for (i = arg3; i > 0; i--) {
//         in = *arg1; out = *arg2;
//         func_150A7960(mtx, in->unk0, in->unk4, in->unk8, &out->unk0, &out->unk4, &out->unk8);
//         arg1++; arg2++;
//     }
// }
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15145DB4.s")
// NON-MATCHING: score 2016, loop body byte-correct. Reg-alloc/iterator strength-
// reduction near-miss: target reuses arg0's saved reg (s0) for arg1 and precomputes
// arg2+4/arg2+8 iterators; my C differs on register assignment. Permuter candidate.
// Same shape as func_15145CD0 but arg1/arg2 are contiguous struct17 arrays (stride 0xC):
// void func_15145DB4(struct_xf *arg0, struct17 *arg1, struct17 *arg2, s32 arg3) {
//     f32 mtx[4][4]; s32 i;
//     func_150A8050(mtx, arg0->unk0, arg0->unk4, arg0->unk8);
//     mtx[3][0]=arg0->unk10; mtx[3][1]=arg0->unk12; mtx[3][2]=arg0->unk14;
//     for (i = arg3; i > 0; i--) {
//         func_150A7960(mtx, arg1->unk0, arg1->unk4, arg1->unk8, &arg2->unk0, &arg2->unk4, &arg2->unk8);
//         arg1++; arg2++;
//     }
// }
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15145EA4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15146078.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_151462C8.s")

u8 func_151464B8(s16 *arg0) {
    s32 i;
    s16 mask;
    u8 ret;

    for (i = 0, mask = 0; i <= D_80082FA0; i++) {
        mask |= 1 << i;
    }
    ret = (arg0[1] & mask) == 0;
    return ret;
}

void func_15146508(struct127 *arg0, struct127 *arg1) {
    struct193 tmp;

    tmp.unk0 = arg0;
    tmp.unk4 = arg1;
    tmp.unk8 = arg0->unique_id;
    tmp.unk9 = arg1->unique_id;
    func_15169040(&tmp, 45, arg0, arg1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_1514654C.s")

s32 func_1514672C(struct17 *arg0) {
    f32 new_var;
    new_var = D_800A56C4;
dummy_label_28409: ;
    if ((new_var < fabsf(arg0->unk0)) || (new_var < fabsf(arg0->unk8)) || (new_var < arg0->unk4) || (arg0->unk4 < D_800A56C8)) {
        return 0;
    } else {
        return 1;
    }
}

void func_151467A4(f32 *arg0, f32 arg1, f32 *arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 *arg7) {
    *arg0 = *arg0 - D_800BE9A4;
    if (*arg0 < 0.0f) {
        *arg0 = func_150ADA68() * arg1;
        if ((func_150ADA20() & 3) != 0) {
            *arg2 = (func_150ADA68() * (arg4 - arg3)) + arg3;
        } else {
            *arg2 = (func_150ADA68() * (arg5 - arg4)) + arg4;
        }
    }
    *arg7 = ((*arg2 - *arg7) * arg6) + *arg7;
}
