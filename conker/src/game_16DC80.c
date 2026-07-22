#include <ultra64.h>

#include "functions.h"
#include "variables.h"

typedef struct {
    u8 pad0[0x44];
    vertex *unk44;
} struct_16DC80_0;

typedef struct {
    u8 pad0[0x34];
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad4C[0xC4];
    struct_16DC80_0 unk110;
    u8 pad158[0x18];
    f32 unk170;
    f32 unk174;
    vertex *unk178;
    vertex unk17C;
} struct_16DC80_1;

// structs.h's struct210 is declared too short (ends at 0x120), so this file-local view is
// used for the 0x154..0x17C range.
typedef struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
} struct_16DC80_4;

typedef struct {
    u8 pad0[0x154];
    union {
        void *p;
        s32 i;
    } unk154;
    f32 unk158;
    u8 pad15C[0xC];
    u8 unk168;
    u8 pad169[0x7];
    struct_16DC80_4 unk170;
} struct_16DC80_2;

// 8-byte template copied out of D_8008A074 (typed s32[2] in variables.h, so it has to be
// re-viewed as a struct here to get the 2-word block copy).
typedef struct {
    s32 unk0;
    s32 unk4;
} struct_16DC80_5;

typedef struct {
    u8 pad0[0x48];
    f32 unk48;
} struct_16DC80_8;

typedef struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    f32 unk10;
    f32 unk14;
    f32 unk18;
} struct_16DC80_9;

typedef struct {
    u8 pad0[0x180];
    f32 unk180;
} struct_16DC80_A;

extern void (*D_80089F9C[])(struct_16DC80_2 *);
extern void (*D_80089FE4[])(struct_16DC80_2 *);
extern s32 D_800DC9F0;

void func_1517E134(void *arg0);
void func_150A7960(void *arg0, f32 arg1, f32 arg2, f32 arg3, f32 *arg4, f32 *arg5, f32 *arg6);

void func_1514182C(struct_16DC80_1 *arg0, vertex *arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5);

#pragma GLOBAL_ASM("asm/nonmatchings/game_16DC80/func_151407D0.s")
// PERMUTER CANDIDATE (best 600, but algorithmically exact - all ops/args byte-correct; the only
// diffs are IDO delay-slot scheduling: the target defers the &D_800DC9F0 address (lui into the
// block1-exit `b` delay, addiu into the `beqz` delay) whereas IDO computes it eagerly, which
// pushes the `lb arg7` load late and turns the increment guard into `beqzl`+duplicated move.
// permuter NO ZERO (~20.7k iters): normalized base 540, best 60; normalized <= real so best 60
// => real pscore >= 60, never a match. The delay-slot scheduling is not reachable from C.
// Needs the following file-local support (functions.h wrongly declares func_1513D524 as void):
//   #define func_1513D524 func_1513D524_hdr  (around the functions.h include)
//   #undef func_1513D524
//   extern s32 func_1513D524(s32,u8,u8,u8,u8,u8,s32,u8,s32);
//   typedef struct { u8 pad0[1]; u8 unk1; u8 pad2[0x3E]; s32 unk40; } struct_16DC80_3;
// s32 func_151407D0(void *arg0, s32 arg1, struct_16DC80_3 *arg2, u8 arg3, u8 arg4, u8 arg5,
//                   u8 arg6, s8 arg7, u8 arg8, s32 arg9) {
//     s32 ret; u8 *p;
//     arg2->unk1 = 3;
//     arg2->unk40 |= 0x40400000;
//     ret = func_1513D524((s32)arg2, arg3, arg4, arg5, 1, arg6, arg1, arg8, arg9);
//     if (ret != 0) {
//         p = (u8 *)ret + 0x110;
//         memcpy(p, arg0, arg1);
//         *(s32 *)(p + 0x44) = 0;
//         *(s8 *)(p + 0x59) = arg7;
//     } else {
//         return 0;
//     }
//     if (ret != 0) { D_800DC9F0++; }
//     return ret;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/game_16DC80/func_151408A4.s")

void func_151411A4(struct210 *arg0) {
    func_1513CA6C(arg0);
}

void func_151411C4(struct210 *arg0) {
    func_1513CAA0(arg0);
}

void func_151411E4(struct_16DC80_2 *arg0) {
    if (arg0->unk154.i != 0) {
        func_1517E134(arg0->unk154.p);
    }
    D_800DC9F0--;
    D_80089F9C[arg0->unk168](arg0);
}

void func_15141250(struct_16DC80_2 *arg0) {
    if (arg0->unk154.i != 0) {
        func_1517E134(arg0->unk154.p);
    }
    D_800DC9F0--;
    D_80089FE4[arg0->unk168](arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_16DC80/func_151412BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_16DC80/func_1514143C.s")
// PERMUTER CANDIDATE. Best 120: 14/15 instrs match; only `addiu v0, a0, 0x110` is one slot
// early (hoisted before `beqz` instead of first instr of the if-body). Independently confirmed
// the addiu position is fixed by `sub`'s declaration point: declaring `sub = &arg0->unk110`
// before the if keeps the base+0x44(v0) form for the body but always hoists the addiu ahead of
// the branch (score 120, regardless of whether the condition is written as `sub->unk44`,
// `arg0->unk110.unk44`, or a direct 0x154 cast - all fold the condition read to 0x154(a0));
// assigning `sub` inside the body lets copy-prop fold the body reads to 0x154(a0) and drops the
// intermediate entirely (score 255). Needs the permuter's instruction reordering.

#pragma GLOBAL_ASM("asm/nonmatchings/game_16DC80/func_15141478.s")
// PERMUTER CANDIDATE (best 54). Structurally exact: both pointers materialize (v1=s0+0x170,
// a0=s0+0x110), the bc1fl branch, the nested if(func_150ADA20()&3), and every load/store/op
// match byte-for-byte. Only two register-level diffs remain: (1) the three `r * X` multiplies
// emit the operand order swapped (IDO puts the freshly-loaded operand first; target puts the
// call result f0 first) - localizing X into a named local fixes the order but adds a -g3 slot
// that grows the frame 0x30->0x38 and shifts every FP reg (net worse, 190); (2) the v1 spill
// lands at 0x20(sp) vs the target's 0x24(sp). Both are exactly what the permuter cracks.
// Uses struct_16DC80_8/9/A (defined above).
// permuter NO ZERO. Two runs (~19.5k iters each, incl. chained from the improved base) plateau at
// normalized best 10; permuter-normalized <= real, so best 10 => real pscore >= 10, never a match.
// Inlining the else-branch call (`b->unkC = func_150ADA68() * (b->unk8-b->unk0) + b->unk0;`) does
// lower real pscore 54->44 but is still non-zero, so it stays a comment per the hard rule.
// s32 func_15141478(struct_16DC80_A *arg0) {
//     struct_16DC80_8 *a = (struct_16DC80_8 *)((u8 *)arg0 + 0x110);
//     struct_16DC80_9 *b = (struct_16DC80_9 *)((u8 *)arg0 + 0x170);
//     f32 r;
//     arg0->unk180 -= D_800BE9A4;
//     if (arg0->unk180 < 0.0f) {
//         r = func_150ADA68();
//         b->unk10 = r * b->unk14;
//         if (func_150ADA20() & 3) {
//             r = func_150ADA68();
//             b->unkC = r * (b->unk0 - b->unk4) + b->unk4;
//         } else {
//             r = func_150ADA68();
//             b->unkC = r * (b->unk8 - b->unk0) + b->unk0;
//         }
//     }
//     a->unk48 = a->unk48 + (b->unkC - a->unk48) * b->unk18;
//     return 1;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/game_16DC80/func_15141564.s")
// PERMUTER CANDIDATE. Best: 26/28 instrs, all operations byte-correct; only differs in
// register/spill allocation. Target materializes `v1 = &arg0->unk170` (addiu v1,a0,0x170) and
// keeps it live across func_15144B68 (spilled to 0x18(sp), frame 0x28); IDO folds the pointer
// back to a0-relative addressing (0x170(a0)..0x17c(a0)), keeps arg0 in a0 across the call, and
// uses a 0x18 frame. Tried: pointer assigned before/after sinf, sinf arg via pointer vs arg0,
// (u8*) cast pointer arithmetic - IDO copy-propagates &arg0->unk170 to a0-relative in every
// form. Needs the permuter to force the v1 materialization / spill choice.
// permuter NO ZERO (best pscore 8): permuter's scorer normalizes the frame-size/spill offsets
// that ARE the remaining diff, so it reports a FALSE base score 0 and is blind to this near-miss.
// s32 func_15141564(struct_16DC80_2 *arg0) {
//     struct_16DC80_4 *p = &arg0->unk170;
//     f32 s = sinf(p->unk8);
//     arg0->unk158 = p->unk0 + (p->unk4 * s);
//     p->unk8 = p->unk8 + (p->unkC * D_800BE9A4);
//     p->unk8 = func_15144B68(p->unk8);
//     return 1;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/game_16DC80/func_151415D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_16DC80/func_151416E8.s")
// PERMUTER CANDIDATE (algorithmically correct, but IDO folds `v1 = &arg0->unk110` to a0-relative
// addressing (0x168(a0)/0x169(a0)) instead of materializing `addiu v1,a0,0x110`, does not CSE the
// &D_8008A02C base, and picks bnel over bne on the 0x25 test - same class as func_15141564.
// Uses struct_16DC80_6 { u8 pad0[0x58]; u8 unk58; s8 unk59; } and
// extern void (*D_8008A02C[])(void *, u8 *, u8);
// void func_151416E8(void *arg0, u8 *arg1, u8 arg2) {
//     struct_16DC80_6 *v1;
//     if (D_8008A02C[((u8 *)arg0)[0x168]] != NULL) {
//         D_8008A02C[((u8 *)arg0)[0x168]](arg0, arg1, arg2);
//     }
//     if (arg2 == 0x22 || arg2 == 0x24 || arg2 == 0x25) {
//         v1 = (struct_16DC80_6 *)((u8 *)arg0 + 0x110);
//         if (*arg1 == v1->unk58) {
//             if (arg2 == 0x22) { func_1516972C(arg0); }
//             else if (arg2 == 0x24) { v1->unk59 = -1; }
//             else if (arg2 == 0x25) { v1->unk59 = 2; }
//         }
//     }
// }

// ???
#pragma GLOBAL_ASM("asm/nonmatchings/game_16DC80/func_151417C4.s")
// PERMUTER CANDIDATE (best: only ONE extra instr - a `move a0, v0`). With the merged struct +
// u8/u8 args below EVERYTHING is byte-correct (block copy, local.b at 0x24, andi a3, lbu 0x2b,
// all four args); IDO just builds the block-copy destination in v0 (`addiu v0,sp,0x1c` + `move
// a0,v0`) instead of directly in a0 the way the target does (`addiu a0,sp,0x1c`). Confirmed the
// move is immovable from C (matches the prior agent's finding; the merged-struct here additionally
// fixes the local.b byte-position that earlier attempts got wrong). Needs the permuter.
// permuter NO ZERO, best 580 (never improved; the move a0,v0 is immovable from C).
// void func_151417C4(u8 arg0, u8 arg1) {
//     struct { struct_16DC80_5 a; u8 b; } local;
//     local.a = *(struct_16DC80_5 *)D_8008A074;
//     local.b = arg0;
//     func_15169260((s32)&local.a, 2, (s32)&local.b, arg1);
// }

s32 func_15141818(s32 arg0, s32 arg1) {
    return 0;
}

void func_1514182C(struct_16DC80_1 *arg0, vertex *arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5) {
    f32 temp0;
    f32 temp1;
    f32 temp2;
    f32 mtx[4][4];

    func_150A8050(mtx, arg4, 0.0f, arg5);
    mtx[3][0] = arg1->x;
    mtx[3][1] = arg1->y;
    mtx[3][2] = arg1->z;
    func_150A7960(mtx, 0.0f, arg2, 0.0f, &arg0->unk34, &arg0->unk38, &arg0->unk3C);
    temp0 = (arg0->unk34 - arg1->x) * arg3;
    temp1 = (arg0->unk38 - arg1->y) * arg3;
    temp2 = (arg0->unk3C - arg1->z) * arg3;
    arg0->unk40 = arg0->unk34 + temp0 * 500.0f;
    arg0->unk44 = arg0->unk38 + temp1 * 500.0f;
    arg0->unk48 = arg0->unk3C + temp2 * 500.0f;
}

s32 func_15141928(struct_16DC80_1 *arg0) {
    vertex *temp = arg0->unk178;

    func_1514182C(arg0, &arg0->unk17C, arg0->unk170, arg0->unk174, temp->x, temp->z);
    return 1;
}
