#include <ultra64.h>

#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/game_476D0/func_1501A220.s")
// PERMUTER CANDIDATE — best score 355. Logic is byte-correct (key insight: the
// rounding is IDO's native signed `% 4`, and D_800968E0 must be bit-reinterpreted
// as f32). Residual is a single register-allocation cascade: the target copies arg0
// into a saved register (`move s1, a0`, reading `s1 + 2`) while IDO keeps it in a0
// for this source; that one choice renames ~15 downstream temps. Reconstruction:
// void func_1501A220(s32 arg0, s32 arg1) {
//     s32 phi_s0, i, temp_f16;
//     f32 temp_f0, factor;
//     D_80082FA0 = arg0;
//     if (arg0 == 0) { phi_s0 = 1; } else { phi_s0 = arg0 + 2; }
//     D_800BE628 = allocate_memory((phi_s0 * 3) << 7, 1, 1, 0);
//     D_800BE62C = allocate_memory(phi_s0 * 16, 1, 1, 0);
//     if (D_80082FA0 == 1) {
//         temp_f0 = (f32) D_800BE63C[0] - 2.0f;
//         factor = *(f32 *) &D_800968E0;
//         temp_f16 = temp_f0 * factor;
//         D_800BE6B8 = (f32) (temp_f16 - temp_f16 % 4) / temp_f0;
//     }
//     func_150006E0(D_800BE9F0);
//     for (i = 0; i <= D_80082FA0; i++) { func_1501A8C0(i, D_80082FA0, 1023, 0); }
//     if (D_80082FA0 != 0) { func_1501A8C0(i, 0, 1023, 0); }
//     D_800BE617 = 1;
//     D_800BE614 = 1;
//     D_800BE635 = 0;
//     func_1510B070(arg1);
// }

#pragma GLOBAL_ASM("asm/nonmatchings/game_476D0/func_1501A39C.s")
// NON-MATCHING (structural): logic is a 2-iteration do-while over two Gfx* arrays.
// Correct behavior; blocker is IDO computing the runtime trip count
// (end-start)/stride and unrolling/peeling the loop (best 7631), whereas the target
// keeps a compact single-body do-while with a per-iteration `bne dst, &D_800BE9E0`.
// Could not suppress the unroll from C. Reconstruction:
// extern Gfx *D_800BE9C8[];
// extern Gfx D_8002C930[];
// void func_1501A39C(void) {
//     Gfx **src = D_800BE9C8;
//     s32 *dst = D_800BE9D8;
//     s32 off = 0;
//     Gfx *g;
//     do {
//         g = *src;
//         gSPSegment(g++, 0, 0);
//         gSPSegment(g++, 0, 0);
//         gSPDisplayList(g++, D_8002C930);
//         gDPSetDepthImage(g++, D_800BE9C4);
//         gSPViewport(g++, D_800BE628 + off + 0x40);
//         src++;
//         off += 0x10;
//         *dst++ = (s32)g;
//     } while (dst != &D_800BE9E0);
// }

// structs.h struct259 has an opaque unk0[0x74]; declare a file-local view of
// the 0x24..0x30 float fields. D_800BE628 is typed s32 but holds a pointer.
typedef struct {
    u8  pad0[0x24];
    f32 unk24;
    f32 unk28;
    f32 unk2C;
    f32 unk30;
    u8  pad34[0x14C];
} struct259_local; // size 0x180

#pragma GLOBAL_ASM("asm/nonmatchings/game_476D0/func_1501A490.s")
// NON-MATCHING: gDPPipeSync + gDPSetScissor display-list builder. functions.h wrongly declares this
// s32/s32; the real signature is Gfx*/Gfx* (siblings func_15142C10/func_15142CF0). At s32 the best is
// 1596; correcting the header to Gfx* drops it to 674 but a -g3 frame/register near-miss remains (not 0).
// Reconstruction (needs the Gfx*/Gfx* header + `void func_1501AF44(f32*,f32*,f32*,f32*);` fwd-declared):
// Gfx *func_1501A490(Gfx *gfx, s16 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
//     gDPPipeSync(gfx++);
//     if (arg1 == 0xFF) {
//         gDPSetScissor(gfx++, arg5, 2, 0, D_800BE620 - 2, D_800BE624);
//     } else {
//         struct259_local *s = &((struct259_local *) D_800BE628)[arg1];
//         f32 sp3C = s->unk2C, sp38 = s->unk30, sp34 = s->unk24, sp30;
//         if (arg4 != 0) {
//             f32 fa4 = (f32) arg4;
//             if (fa4 < s->unk28) { sp30 = fa4; } else { sp30 = s->unk28; }
//         } else { sp30 = s->unk28; }
//         func_1501AF44(&sp3C, &sp34, &sp38, &sp30);
//         gDPSetScissor(gfx++, arg5, sp3C, sp34, sp38, sp30);
//     }
//     return gfx;
// }

Gfx *func_1501A680(Gfx *arg0) {
    gDPSetColorImage(arg0++, G_IM_FMT_RGBA, G_IM_SIZ_16b, D_800BE620, D_8002AAE8[D_800BE9C0]);
    return arg0;
}

Gfx *func_1501A6CC(Gfx *arg0, s32 a, s32 b, s32 c, s32 d) {
    if (a < 3) {
        a = 2;
    }
    if (b <= 0) {
        b = 0;
    }
    if (c >= (D_800BE620 - 2)) {
        c = D_800BE620 - 2;
    }
    if (d >= D_800BE624) {
        d = D_800BE624;
    }

    gDPFillRectangle(arg0++, a, b, c, d);
    return arg0;
}

void func_150A7A00(s32 arg0, f32 arg1, f32 arg2, f32 arg3, f32* arg4, f32* arg5, f32* arg6, f32* arg7);

typedef struct {
    s16 unk0;
    u8  pad2[6];
    s16 unk8;
    u8  padA[6];
} A764Sub; // 0x10

typedef struct {
    u8  pad0[0xC];
    f32 unkC;
    f32 unk10;
    u8  pad14[0x20];
    f32 unk34;
    f32 unk38;
    u8  pad3C[0x8];
    A764Sub unk44[19];
    u8  pad174[0xC];
} A764Elem; // 0x180

#define A764_ELEM(i) (((A764Elem *) D_800BE628)[i])

void func_1501A764(s16 arg0, f32 arg1, f32 arg2, f32 arg3, f32 *arg4, f32 *arg5, f32 *arg6) {
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;

    func_150A7A00((s32) D_800D9D10 + (arg0 << 6), arg1, arg2, arg3, &sp34, &sp30, &sp2C, &sp28);
    sp28 = 1.0f / sp28;
    *arg4 = A764_ELEM(arg0).unk34 + ((A764_ELEM(arg0).unkC + 5.0f) * sp34 * sp28);
    *arg5 = A764_ELEM(arg0).unk38 - ((A764_ELEM(arg0).unk10 + 5.0f) * sp30 * sp28);
    *arg6 = (((sp2C * sp28) * (f32) A764_ELEM(arg0).unk44[D_800BE9C0].unk0) +
             (f32) A764_ELEM(arg0).unk44[D_800BE9C0].unk8) * 32.0f;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_476D0/func_1501A8C0.s")

s32 func_1501AE94(s32 arg0) {
    f32 w = (f32) D_800BE620 - 2.0f;
    f32 h = (f32) D_800BE624;
    struct259_local *sp = &((struct259_local *) D_800BE628)[arg0];

    if ((sp->unk2C < 2.0f) || (w < sp->unk30)) {
        return 0;
    }
    if ((sp->unk24 < 0.0f) || (h < sp->unk28)) {
        return 0;
    }
    return 1;
}

void func_1501AF44(f32 *a0, f32 *a1, f32 *a2, f32 *a3) {
    f32 v;
    f32 hi;
    f32 result;

    v = *a0;
    if (v < 2.0f) {
        *a0 = 2.0f;
    } else {
        hi = (f32) D_800BE620 - 2.0f;
        result = (hi < v) ? hi : v;
        *a0 = result;
    }

    v = *a2;
    if (v < 2.0f) {
        *a2 = 2.0f;
    } else {
        hi = (f32) D_800BE620 - 2.0f;
        result = (hi < v) ? hi : v;
        *a2 = result;
    }

    v = *a1;
    if (v < 0.0f) {
        *a1 = 0.0f;
    } else {
        hi = (f32) D_800BE624 - 0.0f;
        result = (hi < v) ? hi : v;
        *a1 = result;
    }

    v = *a3;
    if (v < 0.0f) {
        *a3 = 0.0f;
    } else {
        hi = (f32) D_800BE624 - 0.0f;
        result = (hi < v) ? hi : v;
        *a3 = result;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_476D0/func_1501B0A0.s")
// permuter NO ZERO, best 275
// NON-MATCHING: best 275 — PERMUTER CANDIDATE. Logic is byte-identical to the target;
// the ONLY residual is instruction scheduling: IDO hoists the `lwc1 f0, D_800968F4`
// constant load to the top of the prologue (before `sw ra`), while for this source it
// schedules that load next to its first use. Every other instruction matches 1:1 and
// the frame (0x50) is exact. D_800968F4/F8/FC are undeclared rodata f32 consts (need
// file-local externs); func_1510B128(s32,f32,f32,f32,f32); D_800BE638/D_800BE650 are
// scalar-typed in the header so index via (&D_800BE638)[arg1]. Reconstruction:
// extern f32 D_800968F4, D_800968F8, D_800968FC;
// void func_1510B128(s32, f32, f32, f32, f32);
// typedef struct { u8 pad0[0xC]; f32 unkC, unk10; u8 pad14[0x58]; f32 unk6C, unk70;
//                  u8 pad74[0x10C]; } B0A0Elem; // 0x180
// #define B0A0_ELEM(i) (((B0A0Elem *) D_800BE628)[i])
// void func_1501B0A0(s32 arg0, s32 arg1) {
//     f32 a = B0A0_ELEM(arg0).unk6C * D_800968F4;
//     f32 b = B0A0_ELEM(arg0).unk70 * D_800968F4;
//     f32 tan_a = sinf(a) / cosf(a);
//     f32 tan_b = sinf(b) / cosf(b);
//     f32 xa = (f32) (&D_800BE638)[arg1] / (tan_a + tan_a);
//     f32 xb = (f32) (&D_800BE650)[arg1] / (tan_b + tan_b);
//     f32 f6 = func_150484A0(B0A0_ELEM(arg0).unkC, xa) * D_800968F8 - B0A0_ELEM(arg1).unk6C;
//     f32 f2 = func_150484A0(B0A0_ELEM(arg0).unk10, xb) * D_800968FC - B0A0_ELEM(arg1).unk70;
//     func_1510B128(arg0, f6, f2, 1.0f, 0.0f);
// }

#pragma GLOBAL_ASM("asm/nonmatchings/game_476D0/func_1501B22C.s")
// PERMUTER CANDIDATE — best score 471 (logic byte-correct; residual is FP spill-slot
// coalescing in block1 (sp20/sp30 vs target sp24/sp34) + a byte-identical f12<->f2
// register cascade in block2). Reconstruction that reaches 471:
// void func_1501B22C(s32 arg0) {
//     struct259 *temp_s0;
//     f32 tmp0, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7;
//     temp_s0 = (struct259 *) (arg0 * 0x180 + D_800BE628);
//     tmp0 = temp_s0->unk74 * 0.5f;
//     tmp7 = -tmp0;
//     tmp5 = temp_s0->unk78 * 0.5f;
//     tmp7 *= D_80096900;
//     tmp3 = cosf(tmp7);
//     tmp7 = sinf(tmp7);
//     temp_s0->unk9C = tmp7;
//     temp_s0->unk90 = tmp7;
//     tmp3 = -tmp3;
//     temp_s0->unk94 = tmp3;
//     temp_s0->unk88 = -tmp3;
//     temp_s0->unk98 = 0.0f;
//     temp_s0->unk8C = 0.0f;
//     tmp6 = tmp5 * D_80096904;
//     tmp2 = cosf(tmp6);
//     tmp0 = sinf(tmp6);
//     tmp0 = -tmp0;
//     temp_s0->unkA0 = 0.0f;
//     temp_s0->unkA8 = tmp0;
//     temp_s0->unkB4 = tmp0;
//     tmp4 = -tmp2;
//     temp_s0->unkAC = 0.0f;
//     temp_s0->unkA4 = tmp4;
//     temp_s0->unkB0 = -tmp4;
// }
