#include <ultra64.h>

#include "functions.h"
#include "variables.h"

// Local struct definitions: the types used by this file are not described in
// structs.h, so they are declared here rather than editing the shared header.
typedef struct {
    /* 0x00 */ s32 unk0;
    /* 0x04 */ s32 unk4;
    /* 0x08 */ s32 unk8;
} Trail1897A0Data; // size 0xC

typedef struct {
    /* 0x00 */ Trail1897A0Data unk0;
    /* 0x0C */ f32 unkC;
} Trail1897A0Entry; // size 0x10

typedef struct {
    /* 0x00 */ f32 unk0;
    /* 0x04 */ f32 unk4;
    /* 0x08 */ f32 unk8;
} DataF1897A0; // size 0xC

typedef struct {
    /* 0x00 */ DataF1897A0 unk0;
    /* 0x0C */ f32 unkC;
} EntryF1897A0; // size 0x10, float view of Trail1897A0Entry

typedef struct {
    /* 0x00 */ f32 unk0;
    /* 0x04 */ f32 unk4;
    /* 0x08 */ u8 pad08[0x4];
    /* 0x0C */ f32 unkC;
    /* 0x10 */ f32 unk10;
    /* 0x14 */ u8 unk14;
    /* 0x15 */ u8 pad15[0x5];
    /* 0x1A */ u8 unk1A;
    /* 0x1B */ u8 pad1B[0x11];
    /* 0x2C */ s16 unk2C;
    /* 0x2E */ s16 unk2E;
    /* 0x30 */ s16 unk30;
    /* 0x32 */ u8 unk32;
    /* 0x33 */ u8 pad33[0x1];
    /* 0x34 */ f32 unk34;
    /* 0x38 */ s8 unk38;
    /* 0x39 */ s8 unk39;
} Params1897A0; // size at least 0x3A

typedef struct {
    /* 0x00 */ u8 pad00[0x10];
    /* 0x10 */ Trail1897A0Data unk10;
    /* 0x1C */ s16 unk1C;
    /* 0x1E */ u8 pad1E[0x7];
    /* 0x25 */ u8 unk25;
    /* 0x26 */ u8 pad26[0x6];
    /* 0x2C */ s8 unk2C;
    /* 0x2D */ s8 unk2D;
    /* 0x2E */ s8 unk2E;
    /* 0x2F */ u8 pad2F[0x25];
    /* 0x54 */ DataF1897A0 unk54;
    /* 0x60 */ u8 pad60[0x34];
    /* 0x94 */ Trail1897A0Entry *unk94;
    /* 0x98 */ Params1897A0 *unk98;
} Trail1897A0; // size at least 0x9C

typedef struct {
    /* 0x00 */ u8 pad00[0x8];
    /* 0x08 */ f32 unk8;
    /* 0x0C */ u8 pad0C[0x2D];
    /* 0x39 */ s8 unk39;
} Owner1897A0; // size at least 0x3A

typedef struct {
    /* 0x00 */ u8 pad00[0x18];
    /* 0x18 */ s32 unk18;
} Src1897A0;

typedef struct {
    /* 0x00 */ Src1897A0 *unk0;
    /* 0x04 */ f32 unk4;
    /* 0x08 */ u8 unk8;
} Msg1897A0; // size 0xC

typedef struct {
    /* 0x00 */ u8 pad00[0x98];
    /* 0x98 */ void *unk98;
} Alloc1897A0; // size at least 0x9C

extern Alloc1897A0 *func_15147A80(void *, void *, s32, s32, s32, s32, s32, s32, s32, u8, s32);

Alloc1897A0 *func_1515C2F0(void *arg0, void *arg1, void *arg2, s32 arg3, u8 arg4, s32 arg5) {
    Alloc1897A0 *ret;

    *(s32 *)((u8 *)arg0 + 0x10) = 0xA;
    ret = func_15147A80(arg0, (u8 *)arg1 + 0x40, 0x10, 8, 8, 8, 0, 0, arg3, arg4, arg5);
    if (ret == NULL) {
        return NULL;
    }
    memcpy(ret->unk98, arg2, 0x3C);
    return ret;
}

extern s32 (*D_8008B080[])(Trail1897A0 *);

#pragma GLOBAL_ASM("asm/nonmatchings/game_1897A0/func_1515C388.s")

extern s32 (*D_8008B084[])(Trail1897A0 *);

#pragma GLOBAL_ASM("asm/nonmatchings/game_1897A0/func_1515C534.s")
// permuter NO ZERO, best 765 (permuter reached 540 on mutated forms but no match; the
// v0/v1-first register-allocation blocker below holds)
// PERMUTER CANDIDATE. Best attempt: score 765, but every instruction, immediate and
// memory offset matches the target - the entire remaining diff is register allocation.
// The target keeps `p` (arg0->unk98) in $a1 (spilled to 0x1c(sp) across the call), which
// cascades r->$a3, p->unk14->$a0, product->$v1, and leaves a `nop` in the guard delay slot.
// IDO here allocates the longest-lived value (p) to $v1 (it fills v0/v1 first), forcing
// r->$a1 and an extra `move $a3,$a1` in the guard delay slot. Per ido-matching-tricks:
// "leaf functions that want a value in a1 not v0/v1 are often unmatchable - IDO allocates
// v0/v1 first; no C form flips it." Tried: hoisting v to fn scope (780), a tmp for the
// subcall result (1164), explicit return if-form (765, best). Left for the permuter batch.
// The float loop unrolls-by-4 exactly from the plain `while (n) { p->unk0 *= p->unk34; n--; }`.
//
// s32 func_1515C534(Trail1897A0 *obj) {
//     Params1897A0 *p = obj->unk98;
//     u8 r = 0;
//
//     if (p->unk39 != -1) {
//         r = (D_8008B084[p->unk39](obj) == 0);
//     }
//     if (r == 0) {
//         if ((p->unk14 & 4) && (obj->unk1C < p->unk2C)) {
//             s32 v = obj->unk1C * p->unk2E;
//             if (v < p->unk1A) {
//                 p->unk1A = v;
//             }
//         }
//         if ((p->unk14 & 8) && (obj->unk1C < p->unk30) && (p->unk32 == 0)) {
//             s32 n = D_800BE9E4;
//             while (n != 0) {
//                 p->unk0 = p->unk0 * p->unk34;
//                 n--;
//             }
//         }
//     }
//     if (r == 0) {
//         return 1;
//     }
//     return 0;
// }
#pragma GLOBAL_ASM("asm/nonmatchings/game_1897A0/func_1515C6F4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_1897A0/func_1515CF9C.s")
// PERMUTER CANDIDATE. Best attempt: score 165. Every instruction matches except the tail: the target
// emits "sb zero,0x2e(a0) / b <exit> / li v0,1" (the branch delay slot holds a copy
// of the exit block's "li v0,1"), while IDO here fills that delay slot with the
// preceding "sb zero,0x2e(a0)" and shares a single "li v0,1", making the function
// one instruction short. Tried: shared trailing return, per-branch returns, a phi
// return variable, inverted/empty-arm inner if, single-line bodies, and a dead
// trailing statement - none change the delay-slot choice.
//
// s32 func_1515CF9C(Trail1897A0 *arg0, Owner1897A0 *arg1) {
//     Trail1897A0Entry *entries;
//
//     if (arg0->unk2C < arg0->unk25 - 1) {
//         entries = arg0->unk94;
//         arg0->unk2C = arg0->unk2C + 1;
//         entries[arg0->unk2E].unk0 = arg0->unk10;
//         entries[arg0->unk2E].unkC = arg1->unk8;
//         arg0->unk2E = arg0->unk2E + 1;
//         if (arg0->unk2E == arg0->unk25) {
//             arg0->unk2E = 0;
//         }
//     } else {
//         arg1->unk39 = -1;
//     }
//     return 1;
// }

s32 func_1515D030(Trail1897A0 *arg0, s32 arg1) {
    s32 ret = 1;

    if (arg0->unk2C >= 3) {
        arg0->unk2C = arg0->unk2C - 1;
        arg0->unk2E = arg0->unk2E - 1;
        if (arg0->unk2E < 0) {
            arg0->unk2E = arg0->unk25 - 1;
        }
    } else {
        ret = 0;
    }
    return ret;
}

s32 func_1515D088(Src1897A0 *arg0) {
    struct37 *temp_v0;
    Msg1897A0 tmp;

    tmp.unk8 = arg0->unk18;
    if ((tmp.unk8 < 0) || (tmp.unk8 >= 2)) {
        return 0;
    }
    tmp.unk0 = arg0;
    tmp.unk4 = 0.0f;
    temp_v0 = (struct37 *)func_151491F4(0x12C, -1, 0x11, 0, 0xD, 0xC, 0xFF, 1);
    if (temp_v0 != NULL) {
        memcpy(&temp_v0->unk28, &tmp, 0xC);
    }
    return (s32)temp_v0;
}

// fat struct
#pragma GLOBAL_ASM("asm/nonmatchings/game_1897A0/func_1515D130.s")
