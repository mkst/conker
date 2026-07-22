#include <ultra64.h>

#include "functions.h"
#include "variables.h"

extern f32 D_800A34B0[4][2];
extern f32 D_800A34D0;
extern f32 D_800A34D4;
extern f32 D_800A34D8;
extern f32 D_800A34DC;
extern f32 D_800A34E0;
extern f32 D_800A34E4;
extern f32 D_800A34E8;
extern f32 D_800A34EC;
extern f32 D_800A34F0;
extern f32 D_800A34F4;
extern f32 D_800A34F8;
extern f32 D_800A34FC;
extern f32 D_800A3500;
extern f32 D_800A3504;
extern f32 D_800A3508;
extern f32 D_800A350C;
extern f32 D_800A3510;
extern f32 D_800A3514;
extern f32 D_800A3518;
extern f32 D_800A351C;
extern f32 D_800A3520;
extern f32 D_800A3524;
extern f32 D_800A3528;
extern f32 D_800A352C;
extern f32 D_800A3530;
extern f32 D_800A3534;
extern f32 D_800A3538;
extern f32 D_800A353C;
extern f32 D_800A3540;
extern f32 D_800A3544;
extern f32 D_800A3548;
extern f32 D_800A354C;
extern f32 D_800A3550;
extern f32 D_800A3554;
extern f32 D_800A3558;
extern f32 D_800A355C;
extern f32 D_800A3560;
extern f32 D_800A3564;
extern f32 D_800A3568;
extern f32 D_800A356C;
extern f32 D_800A3570;
extern f32 D_800A3574;
extern f32 D_800A3578;
extern f32 D_800A357C;
extern f32 D_800A3580;
extern f32 D_800A3584;
extern f32 D_800A3588;
extern f32 D_800A358C;
extern f32 D_800A3590;
extern f32 D_800A3594;
extern f32 D_800A3598;
extern f32 D_800A359C;
extern f32 D_800A35A0;
extern f32 D_800A35A4;
extern f32 D_800A35A8;
extern f32 D_800A35AC;


#if 0
f32 D_800A34B0[4][2] = {
    { 267.0f, 100.0f },
    { 247.0f, 100.0f },
    { 370.0f, 185.0f },
    { 530.0f, 400.0f }
};

f32 D_800A34D0 = 0.01666666753590107f;
f32 D_800A34D4 = 0.10000000149011612f;
f32 D_800A34D8 = 999.0f;
f32 D_800A34DC = 0.01745329238474369f;
f32 D_800A34E0 = 0.01745329238474369f;
f32 D_800A34E4 = 0.01745329238474369f;
f32 D_800A34E8 = 0.01745329238474369f;
f32 D_800A34EC = 530.0f;
f32 D_800A34F0 = 3.1415927410125732f;
f32 D_800A34F4 = 3.1415927410125732f;
f32 D_800A34F8 = 0.3253220021724701f;
f32 D_800A34FC = 1.5707963705062866f;
f32 D_800A3500 = 1.5707963705062866f;
f32 D_800A3504 = 0.6499999761581421f;
f32 D_800A3508 = 0.550000011920929f;
f32 D_800A350C = 0.8999999761581421f;
f32 D_800A3510 = 0.8500000238418579f;
f32 D_800A3514 = -10000.0f;
f32 D_800A3518 = 0.0033333334140479565f;
f32 D_800A351C = 57.2957763671875f;
f32 D_800A3520 = 0.01745329238474369f;
f32 D_800A3524 = 0.01745329238474369f;
f32 D_800A3528 = 0.01745329238474369f;
f32 D_800A352C = 0.01745329238474369f;
f32 D_800A3530 = 0.01745329238474369f;
f32 D_800A3534 = 6.2831854820251465f;
f32 D_800A3538 = 0.01745329238474369f;
f32 D_800A353C = 0.03999999910593033f;
f32 D_800A3540 = 0.05000000074505806f;
f32 D_800A3544 = 0.07999999821186066f;
f32 D_800A3548 = 0.03999999910593033f;
f32 D_800A354C = 0.05000000074505806f;
f32 D_800A3550 = 0.01745329238474369f;
f32 D_800A3554 = 0.01745329238474369f;
f32 D_800A3558 = 0.019999999552965164f;
f32 D_800A355C = 0.01745329238474369f;
f32 D_800A3560 = 0.6000000238418579f;
f32 D_800A3564 = 10000.0f;
f32 D_800A3568 = 10000.0f;
f32 D_800A356C = -0.01745329238474369f;
f32 D_800A3570 = -0.01745329238474369f;
f32 D_800A3574 = -0.01745329238474369f;
f32 D_800A3578 = -0.01745329238474369f;
f32 D_800A357C = -0.9399999976158142f;
f32 D_800A3580 = -10000.0f;
f32 D_800A3584 = 0.01666666753590107f;
f32 D_800A3588 = 0.01745329238474369f;
f32 D_800A358C = 0.02500000037252903f;
f32 D_800A3590 = -0.01745329238474369f;
f32 D_800A3594 = -0.01745329238474369f;
f32 D_800A3598 = -0.01745329238474369f;
f32 D_800A359C = -0.01745329238474369f;
f32 D_800A35A0 = 999.0f;
f32 D_800A35A4 = 0.01745329238474369f;
f32 D_800A35A8 = 999.0f;
f32 D_800A35AC = 999.0f;
#endif

void func_15122AE0(void) {
    struct108 *temp_s0;
    s16 i;
    f32 temp_f20;

    temp_f20 = D_800BEA08 * D_800A34D0;

    for (i = 0; i <= D_80082FA0; i++) {
        temp_s0 = &D_800DBFF0[i]; // ???
        if (func_150859AC(i, 0) || (i == 0)) {
            temp_s0->unk7B4 = temp_f20;
            if ((D_800BEAC0 == 0) || (D_800C35EA != 0) || (D_800D2DB4 != 0)) {
                func_151239CC(temp_s0, 5);
                func_15122C5C(temp_s0);
            } else {
                func_15123934(temp_s0, 8192, 0, temp_s0->unk134, 5);
                func_1512C490(temp_s0);
            }
        }
    }
    D_800894B0 += 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_14FF90/func_15122C5C.s")
// NON-MATCHING: 80% there
// void func_15122C5C(struct108 *arg0) {
//     f32 phi_f12;
//     u8 temp_v0_2;
//     struct167 *temp_a1;
//     struct167 *temp_a0;
//
//     if (arg0->unk23C) {
//         arg0->unk2E0 = arg0->unk2BC;
//         arg0->unk2E4 = arg0->unk2C0;
//         arg0->unk2F0 = arg0->unk2FC;
//
//         arg0->unk2EC = arg0->unk2F8;
//         arg0->unk2E8 = arg0->unk2C4;
//         arg0->unk2F4 = arg0->unk300;
//     }
//
//     temp_a0 = &arg0->unk2BC;
//     temp_a1 = &arg0->unk2F8;
//
//     if ((arg0->unk3D4 != NULL) && (arg0->unk73C != 3) && ((arg0->unk2C != 0x100) || (arg0->unk73C != 0))) {
//         arg0->unk23E = arg0->unk3D4->unk78;
//     }
//
//     temp_v0_2 = arg0->unk23D;
//
//     if (D_800DBFF4[temp_v0_2] != 4) {
//         arg0->unk5F0 &= -5;
//     }
//
//     if ((arg0->unk2C << 9) >= 0) {
//         temp_a0->unk0 = arg0->unk2E0;
//         temp_a0->unk4 = arg0->unk2E4;
//         temp_a0->unk8 = arg0->unk2E8;
//         temp_a1->unk0 = arg0->unk2EC;
//         temp_a1->unk4 = arg0->unk2F0;
//         temp_a1->unk8 = arg0->unk2F4;
//     }
//     // temp_v0_2 = arg0->unk23D;
//     arg0->unk36C = D_800BE728[temp_v0_2];
//     arg0->unk36A = D_800BE710[temp_v0_2];
//     arg0->unk304 = temp_a1->unk0;
//     arg0->unk308 = temp_a1->unk4;
//     arg0->unk358 = arg0->unk35C;
//     arg0->unk30C = temp_a1->unk8;
//     arg0->unk2C8 = temp_a0->unk0;
//     arg0->unk2CC = temp_a0->unk4;
//     arg0->unk2D0 = temp_a0->unk8;
//     if (arg0->unk23C != 0) {
//         arg0->unk19C = arg0->unk1A4;
//         arg0->unk1A0 = arg0->unk1A8;
//         // phi_f12 = *(s32*)&arg0; // unk0?
//     } else {
//         arg0->unk19C += (arg0->unk1A4 - arg0->unk19C) * D_800A34D4;
//         arg0->unk1A0 += (arg0->unk1A8 - arg0->unk1A0) * D_800A34D4;
//         phi_f12 = D_800A34D4;
//     }
//
//     func_1510B128(phi_f12, temp_v0_2, arg0->unk19C, arg0->unk1A0, D_800BE628[temp_v0_2].unk84, (arg0->unk2C & 0x100) ? 16.0f : 0.0f);
//     func_15097798(arg0->unk23D);
//     func_15125A6C(arg0);
//     func_15128CB0(arg0);
//     func_15125DB4(arg0);
//     if ((arg0->unk3D4->unk120 != 0) && (arg0->unk3D4->unk197 != 0)) {
//         func_15127EB8(arg0);
//     }
//     if (func_15128540(arg0) == 0) {
//         if (((arg0->unk84 * 0x10) < 0) && ((arg0->unk84 & 0x400) == 0)) {
//             func_1512E8E0(arg0);
//         }
//         func_15130230(arg0, D_800BE9F0);
//         func_15126138(arg0);
//         func_15125C40(arg0);
//         func_15128680(arg0);
//         func_1512317C(arg0);
//         func_15125394(arg0);
//         if (((arg0->unk84 * 16) >= 0) && ((arg0->unk84 & 0x400) == 0)) {
//             func_1512E8E0(arg0);
//         }
//         func_15123568(arg0);
//         func_1512C200(arg0);
//         func_15125924(arg0);
//         func_151283B8(arg0);
//         if (arg0->unk23C != 0) {
//             func_15125594(arg0);
//             func_15123070(arg0);
//             func_151283B8(arg0);
//             func_151283B8(arg0);
//         }
//         func_15123508(arg0);
//         if (((arg0->unk84 & 2) != 0) && (arg0->unk3D4->unk120 == 0)) {
//             func_1512D390(arg0);
//         }
//         func_15125594(arg0);
//         func_151256BC(arg0);
//         func_1512D980(arg0);
//         func_1512C068(arg0);
//         func_1512B100(arg0);
//         func_1512C20C(arg0);
//         func_1512BB10(arg0);
//         if (arg0->unk23C != 0) {
//             func_1512C068(arg0);
//             func_1512B100(arg0);
//             func_1512C20C(arg0);
//             func_1512BB10(arg0);
//         }
//         func_15125594(arg0);
//         func_15123070(arg0);
//         if (arg0->unk7F4 == 0) {
//             func_151287E0(arg0, 0, 0);
//         }
//         func_1512C150(arg0);
//         func_151284C4(arg0);
//     }
// }

#pragma GLOBAL_ASM("asm/nonmatchings/game_14FF90/func_15123070.s")
// NON-MATCHING (best 165): logic byte-identical EXCEPT the if-branch's `b` delay slot.
// Target duplicates the -360.0f `lui at,0xc3b4` into BOTH predecessors (b delay slot +
// else path) so the merge is a single `mtc1`; IDO here fills the b delay slot with the
// `swc1 ...0x390` store instead, leaving the merge to do the lui (1 fewer lui in the
// if-path). Delay-slot/PRE decision, not controllable from C.  PERMUTER CANDIDATE.
// void func_15123070(struct108 *arg0) {
//     f32 temp_f0;
//     struct17 tmp;
//     if ((arg0->unk6C8 != 0) && ((arg0->unk6FC == 10) || (arg0->unk6FC == 14))) {
//         func_15048F90(&arg0->unk618, &arg0->unk2A4, &tmp);
//         arg0->unk390 = arg0->unk37C - func_15048FC8(&tmp);
//     } else {
//         temp_f0 = arg0->unk3D0->unk40 - arg0->unk37C - 180.0f;
//         while (temp_f0 < 0.0f) { temp_f0 += 360.0f; }
//         arg0->unk390 = temp_f0;
//     }
//     while (arg0->unk390 < -360.0f) { arg0->unk390 += 360.0f; }
// }

#pragma GLOBAL_ASM("asm/nonmatchings/game_14FF90/func_1512317C.s")

void func_15123508(struct108 *arg0) {
    if ((arg0->unk84 & 2) != 0) {
        if (((arg0->unk36A & 2) != 0) && (arg0->unk698 == 0)) {
            arg0->unk6B0 = -1;
        }
        if (((arg0->unk36A & 1) != 0) && (arg0->unk698 == 0)) {
            arg0->unk6B0 = 1;
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_14FF90/func_15123568.s")
// NON-MATCHING (best 610): logic byte-identical (every lw/andi/branch/store/call matches).
// The only diffs are temp-register rotation: the constant 4 stays in v1 the whole function
// in the target (so the v0>0 block's subtraction lands in t1, shifting the L600 temps to
// t3..t9), whereas IDO here reuses v1 (dead-after-guard) for the subtraction and the const 1,
// shifting temps down by two. Register-allocation only.  PERMUTER CANDIDATE.
// void func_15123568(struct108 *arg0) {
//     s32 v0, t1;
//     if ((arg0->unk3D4->unk120 == 4) && (arg0->unk2C != 0x40) && (*((u8 *) arg0 + 0x92C) == 0)) {
//         arg0->unk1B4 = 1;
//         *(f32 *) ((u8 *) arg0 + 0x7C0) = D_800A34D8;
//         func_15124B18(arg0);
//         arg0->unk198 = 0.0f;
//         arg0->unk190 = 0.0f;
//         return;
//     }
//     v0 = *(s32 *) &arg0->unk7B8;
//     if (v0 > 0) {
//         t1 = v0 - D_800BE9E4;
//         *(s32 *) &arg0->unk7B8 = t1;
//         if (t1 < 0) *(s32 *) &arg0->unk7B8 = 0;
//         return;
//     }
//     if ((arg0->unk84 & 4) == 0) return;
//     if ((arg0->unk36A & 8) == 0) return;
//     if (arg0->unkDC == 4) return;
//     if ((arg0->unk6C8 != 0) && (arg0->unk6FC != 4)) return;
//     if ((arg0->unk3D0->in_water == 1) && (arg0->unk1B4 == 1)) return;
//     v0 = arg0->unk1B4;
//     if (v0 == 1) return;
//     do {
//         arg0->unk1B4 = v0 - 1;
//         v0 = arg0->unk1B4;
//         if (v0 <= 0) { arg0->unk1B4 = 3; v0 = arg0->unk1B4; }
//     } while (((1 << v0) & arg0->unk1E0) == 0);
//     func_15124B18(arg0);
//     func_15125608(arg0);
//     *(s32 *) &arg0->unk7B8 = 20;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/game_14FF90/func_151236D0.s")
// NON-MATCHING (best 645): logic byte-identical (all ~100 instrs of the flag blocks match
// exactly, plus every andi/lw/branch/jal of the dispatch). The only diffs are in the ~13-instr
// dispatch tail: the target hoists the shared-block `unk5F0` load into the a2-skip branch's
// branch-likely delay slot (bnel) and keeps the value in v1 (with b0=v1&1 filling the beqz-a2
// delay); IDO here fills that delay with nop and loads f into v0 after the beqz, cascading
// register renames. Same CFG, delay-slot/register-alloc only.  PERMUTER CANDIDATE.
// (unk3D4 is declared struct127* in the header but really points to a larger struct; below
//  uses a file-local A3D4 view. func_1515BAxx take the unk23D byte.)
// extern void func_1515BA10(s32); func_1515BA1C; func_1515BA48; func_1515BA54; func_1515BA80; func_1515BAAC;
// typedef struct { u8 pad0[8]; s16 unk8; u8 pad0A[0xC]; u8 unk16; u8 pad17[0x37];
//                  u8 unk4E; u8 pad4F[0x46]; u8 unk95; u8 pad96[6]; s32 unk9C; } A3D4;
// void func_151236D0(struct108 *arg0) {
//     s32 a2 = arg0->unk5F0 & 1;
//     if (arg0->unk3D4 != NULL) {
//         if ((((A3D4 *) arg0->unk3D4)->unk9C != 0) ||
//             ((((A3D4 *) arg0->unk3D4)->unk95 != 0) && (((u8 *) arg0->unk3D0)[0x137] == 0)))
//             arg0->unk5F0 |= 0x40;
//         else arg0->unk5F0 &= ~0x40;
//         if (arg0->unk3D0->unk28 == 0.0f) arg0->unk5F0 &= ~0x400;
//         if ((((A3D4 *) arg0->unk3D4)->unk8 != 0) && (((A3D4 *) arg0->unk3D4)->unk16 == 0))
//             arg0->unk5F0 |= 8;
//         else arg0->unk5F0 &= ~8;
//         if (((A3D4 *) arg0->unk3D4)->unk4E == 2) arg0->unk5F0 |= 0x80;
//         else arg0->unk5F0 &= ~0x80;
//     }
//     if ((arg0->unk2FC <= *(f32 *) ((u8 *) arg0 + 0x360)) && (arg0->unk2C != 0x100))
//         arg0->unk5F0 |= 1;
//     else arg0->unk5F0 &= ~1;
//     if (arg0->unk23C != 0) {
//         if (arg0->unk5F0 & 1) func_1515BA80(arg0->unk23D);
//         else { func_1515BA48(arg0->unk23D); *(f32 *) ((u8 *) arg0 + 0x7B0) = 0.0f; }
//         return;
//     }
//     if (a2 == 0) {
//         s32 g = arg0->unk5F0;
//         if (g & 1) {
//             if ((g & 4) || ((arg0->unk2C << 13) < 0)) func_1515BA80(arg0->unk23D);
//             else func_1515BAAC(arg0->unk23D);
//             return;
//         }
//     }
//     { s32 f = arg0->unk5F0; s32 b0 = f & 1;
//       if ((a2 != 0) && (b0 == 0)) {
//           if ((f & 4) || ((arg0->unk2C << 13) < 0)) { func_1515BA48(arg0->unk23D); *(f32 *) ((u8 *) arg0 + 0x7B0) = 0.0f; }
//           else { func_1515BA54(arg0->unk23D); func_15124B18(arg0); }
//           return;
//       }
//       if (b0) func_1515BA1C(arg0->unk23D); else func_1515BA10(arg0->unk23D);
//     }
// }
// structs.h models the parallel "state stack" members of struct108 as scalars
// followed by padding; they are really 0x15-entry arrays (and unk1B6 is signed).
// Declare a file-local view here since shared headers may not be edited.
typedef struct {
    /* 0x000 */ u16 unk0;
    /* 0x002 */ u16 unk2[0x15];
    /* 0x02C */ s32 unk2C;
    /* 0x030 */ s32 unk30[0x15];
    /* 0x084 */ s32 unk84;
    /* 0x088 */ s32 unk88[0x15];
    /* 0x0DC */ s32 unkDC;
    /* 0x0E0 */ s32 unkE0[0x15];
    /* 0x134 */ s32 unk134;
    /* 0x138 */ s32 unk138[0x15];
    /* 0x18C */ u8  pad18C[0x28];
    /* 0x1B4 */ s16 unk1B4;
    /* 0x1B6 */ s16 unk1B6[0x15];
    /* 0x1E0 */ s16 unk1E0;
    /* 0x1E2 */ s16 unk1E2[0x15];
    /* 0x20C */ s16 unk20C[0x15];
} StateStack;

#define SS(p) ((StateStack *) (p))

s32 func_15123934(struct108 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    if (SS(arg0)->unk20C[arg4] == 0) {
        SS(arg0)->unk2[arg4] = SS(arg0)->unk0;
        SS(arg0)->unk30[arg4] = SS(arg0)->unk2C;
        SS(arg0)->unk88[arg4] = SS(arg0)->unk84;
        SS(arg0)->unkE0[arg4] = SS(arg0)->unkDC;
        SS(arg0)->unk138[arg4] = SS(arg0)->unk134;
        SS(arg0)->unk1B6[arg4] = SS(arg0)->unk1B4;
        SS(arg0)->unk1E2[arg4] = SS(arg0)->unk1E0;
        SS(arg0)->unk2C = arg1;
        SS(arg0)->unkDC = arg2;
        SS(arg0)->unk134 = arg3;
        SS(arg0)->unk20C[arg4] = 1;
        func_15125394(arg0);
        return 1;
    }
    return 0;
}

s32 func_151239CC(struct108 *arg0, s32 arg1) {
    if (SS(arg0)->unk20C[arg1] != 0) {
        SS(arg0)->unk0 = SS(arg0)->unk2[arg1];
        SS(arg0)->unk2C = SS(arg0)->unk30[arg1];
        SS(arg0)->unkDC = SS(arg0)->unkE0[arg1];
        SS(arg0)->unk84 = SS(arg0)->unk88[arg1];
        SS(arg0)->unk134 = SS(arg0)->unk138[arg1];
        SS(arg0)->unk1B4 = SS(arg0)->unk1B6[arg1];
        SS(arg0)->unk1E0 = SS(arg0)->unk1E2[arg1];
        func_15124B18(arg0);
        SS(arg0)->unk20C[arg1] = 0;
        return 1;
    }
    return 0;
}
#pragma GLOBAL_ASM("asm/nonmatchings/game_14FF90/func_15123A54.s")

void func_15124770(struct108 *arg0, s32 arg1) {
    if (arg1 != 0) {
        arg0->unk244 = arg1;
        arg0->unk248 = &D_800CC2D0[arg1];
    } else {
        arg0->unk244 = 0;
        arg0->unk248 = NULL;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_14FF90/func_151247C0.s")

void func_15124AB4(struct108 *arg0) {
    arg0->unk668 = -sinf(arg0->unk398);
    arg0->unk66C = cosf(arg0->unk398);
    arg0->unk664 = sinf(arg0->unk39C) * arg0->unk66C;
    arg0->unk66C = cosf(arg0->unk39C) * arg0->unk66C;
}

void func_15124B18(struct108 *arg0) {
    s32 temp_t8;
    f32 *temp_v0;

    if (arg0->unk1B4 == 0) {
        arg0->unk1B4 = 4;
    }
    temp_t8 = arg0->unk2C & 0x80;
    if ((temp_t8 != 0) && ((*arg0->unk36C & 0x10) != 0)) {
        arg0->unk348 = 40.0f;
        arg0->unk34C = 40.0f;
        arg0->unk374 = 150.0f;
    } else if (temp_t8 != 0) {
        arg0->unk348 = (f32) (arg0->unk2FC - arg0->unk354);
    } else if ((temp_t8 != 0) && (arg0->unk3D0->unk102 == 0) && (D_800BE9F0 != 0x17)) {
        arg0->unk348 = 40.0f;
        arg0->unk34C = 40.0f;
        arg0->unk374 = 150.0f;
    } else if (arg0->unk3D0->unk102 != 0) {
        arg0->unk348 = 40.0f;
        arg0->unk34C = 40.0f;
        arg0->unk374 = 194.0f;
    } else {
        temp_v0 = D_800A34B0[arg0->unk1B4];
        arg0->unk374 = temp_v0[0]; //->unk0;
        arg0->unk348 = temp_v0[1]; //->unk4;
        arg0->unk34C = arg0->unk348;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_14FF90/func_15124C38.s")

void func_1512523C(struct108 *arg0) {
    f32 temp_f12;
    f32 temp_f2;
    f32 phi_f14;

    temp_f2 = arg0->unk2BC - arg0->unk2F8;
    temp_f12 = arg0->unk2C4 - arg0->unk300;
    temp_f12 = sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12));
    if (temp_f12 < 0.0f) {
        phi_f14 = -temp_f12;
    } else {
        phi_f14 = temp_f12;
    }
    temp_f2 = func_150484A0(arg0->unk2FC - arg0->unk2C0, phi_f14) * D_800A351C;
    arg0->unk388 = temp_f2;
    if (temp_f2 > 180.0f) {
        arg0->unk388 -= 360.0f;
    }
    arg0->unk388 = -arg0->unk388;
    arg0->unk388 -= arg0->unk3A8;
    arg0->unk388 += arg0->unk38C;
    arg0->unk398 = arg0->unk388 * D_800A3520;
}

void func_15125330(struct108 *arg0) {
    struct17 tmp;

    tmp.unk0 = arg0->unk2BC - arg0->unk2F8;
    tmp.unk4 = 0.0f;
    tmp.unk8 = arg0->unk2C4 - arg0->unk300;

    arg0->unk37C = func_15048FC8(&tmp);
    arg0->unk39C = arg0->unk37C * D_800A3524;
}

void func_15125394(struct108 *arg0) {
    s32 i = 0;

    while ((arg0->unk2C & (1 << i)) == 0) {
        i += 1;
    }
    arg0->unk0 = i;
}

s32 func_151253CC(struct108 *arg0) {
    f32 temp_f0;
    f32 temp_f2;

    if (arg0->unk2C & 0x40000) {
        arg0->unk84 &= ~0x4F;
        arg0->unk84 |= 0x2680;
        arg0->unk3A8 = 0.0f;
        arg0->unk5E8 = 0.0f;
        arg0->unk38C = 0.0f;
        func_15125330(arg0);
        func_1512523C(arg0);
        temp_f0 = arg0->unk37C;
        temp_f2 = D_800A3528;
        arg0->unk380 = arg0->unk37C;
        arg0->unk3A0 = (f32) (temp_f0 * temp_f2);
        arg0->unk398 = (f32) (arg0->unk388 * temp_f2);
        func_15124AB4(arg0);
        if (arg0->unk3D4->unk197 != 0) {
            func_15127EB8(arg0);
        }
        func_1512C490(arg0);
        return 1;
    }
    return 0;
}

s32 func_15125490(struct108 *arg0) {
    struct127 *temp_v0 = arg0->unk3D0;
    s32 temp_v1;

    if (temp_v0->in_water == 1) {
        temp_v1 = (s32) fabsf(temp_v0->y_position - temp_v0->unk118);
        if (temp_v1 < 100) {
            return 0;
        }
        if (temp_v1 >= 301) {
            return 1;
        }
    } else {
        return 0;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_14FF90/func_151254F4.s")
// NON-MATCHING (best 120): body is byte-identical; ONLY the prologue const-load ordering
// differs. Target emits `lui at,%hi(D_800A352C); lwc1 f0,%lo(...)` BEFORE `sw ra`/`sw a1`;
// IDO here schedules the two spills first. Inlining the const (no temp) is worse (960);
// changing store order is worse (558). Could not force the const-load ahead of the register
// spills from C.  PERMUTER CANDIDATE (prologue scheduling).
// void func_151254F4(struct108 *arg0, s32 arg1) {
//     f32 temp = D_800A352C;
//     arg0->unk3A0 = arg0->unk380 * temp;
//     arg0->unk398 = arg0->unk388 * temp;
//     func_15124AB4(arg0);
//     func_151239CC(arg0, 1);
//     arg0->unk3D4->unk198 = 0;
//     arg0->unk73C = 0;
//     arg0->unk3D0 = &D_800CC2D0[arg1];
//     arg0->unk670 = 0.0f;
// }

void func_15125594(struct108 *arg0) {
    f32 temp_f0;
    f32 temp_f2;

    func_1512523C(arg0);
    func_15125330(arg0);

    temp_f0 = arg0->unk37C;
    temp_f2 = arg0->unk5E8;
    arg0->unk380 = temp_f0 - temp_f2;
    if (temp_f0 < temp_f2) {
        arg0->unk380 += 360.0f;
    }
    arg0->unk3A0 = arg0->unk380 * D_800A3530;
    func_15124AB4(arg0);
}


void func_15125608(struct108 *arg0) {
    arg0->unk24C = 3.0f;
    arg0->unk250 = 2.5f;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_14FF90/func_15125628.s")
// NON-MATCHING (best 900): logic below is correct, but IDO materializes each global's
// address once (lui;addiu base, reused for load+store with 0-offset) whereas the target
// keeps separate lui + %lo-in-offset for load and store (no address CSE). Tried temp-split
// load/store across the branch; IDO still CSEs the base.  PERMUTER CANDIDATE (addressing-idiom).
// void func_15125628(void) {
//     if (D_800DBFF4[0] != 0) D_800DBFF4[0]--;
//     if (D_800DBFF5 != 0) D_800DBFF5--;
//     if (D_800DBFF6 != 0) D_800DBFF6--;
//     if ((&D_800DBFF6)[1] != 0) (&D_800DBFF6)[1]--;
// }

void func_15125690(struct108 *arg0, s32 arg1) {
    u8 *temp_v0 = &D_800DBFF4[arg0->unk23D];

    if (*temp_v0 < arg1) {
        *temp_v0 = arg1;
    }
}

extern void func_1508EF80(f32 *arg0, f32 *arg1, f32 arg2, f32 *arg3);

#define F29C (*(f32 *) ((u8 *) arg0 + 0x29C))
#define F5EC (*(f32 *) ((u8 *) arg0 + 0x5EC))

void func_151256BC(struct108 *arg0) {
    f32 twoPi;
    f32 f12;
    f32 m1;
    f32 m2;
    u32 v;

    if ((arg0->unk2C & 0x80000) ||
        (((arg0->unk5F0 & 8) != 0) && ((arg0->unk2C << 13) >= 0))) {
        v = func_150ADA20();
        twoPi = D_800A3534;
        F29C += 2.0f * (f32) (v % 3) * D_800A3538 * D_800BE9A4;
        while (twoPi < F29C) {
            F29C -= twoPi;
        }
        F5EC += ((sinf(F29C) * 4.0f) - F5EC) * D_800A353C;
        f12 = F5EC * D_800A3540;
        if (arg0->unk2C & 0x80000) {
            m1 = 4.0f;
            m2 = 4.0f;
        } else {
            m1 = 1.0f;
            m2 = 20.0f;
        }
        func_1508EF80(&arg0->unk2F8, &arg0->unk2BC, f12 * m1, &arg0->unk2F8);
        func_1508EF80(&arg0->unk2BC, &arg0->unk2F8, f12 * m2, &arg0->unk2BC);
    } else {
        if (F29C == 0.0f) {
            return;
        }
        F29C -= F29C * D_800A3544;
        F5EC += ((sinf(F29C) * 4.0f) - F5EC) * D_800A3548;
        f12 = F5EC * D_800A354C;
        func_1508EF80(&arg0->unk2F8, &arg0->unk2BC, f12, &arg0->unk2F8);
        func_1508EF80(&arg0->unk2BC, &arg0->unk2F8, f12 * 20.0f, &arg0->unk2BC);
    }
}

#undef F29C
#undef F5EC

#pragma GLOBAL_ASM("asm/nonmatchings/game_14FF90/func_15125924.s")
// NON-MATCHING (best 450): logic byte-identical (every call/store matches). Two coupled
// codegen diffs in the first block: (1) phi_a1/phi_v1 land in swapped registers (target
// a1/v1, IDO here v1/a1), (2) target loads arg0->unk2C in BOTH arms of the unk3D4 if
// (plain beqz + b + duplicated lw), IDO here uses a branch-likely beqzl (one lw in the
// delay slot), leaving the tail shifted by one instruction. Neither controllable from C.
// PERMUTER CANDIDATE.
// void func_15125924(struct108 *arg0) {
//     s32 phi_a1 = 0, phi_v1 = 0;
//     f32 temp_f0;
//     if (arg0->unk3D4 != NULL) {
//         phi_v1 = ((u8 *) arg0->unk3D4)[0x4E];
//         phi_a1 = (s32) arg0->unk3D4->z_position;
//     }
//     if ((arg0->unk2C & 0x40) != 0) return;
//     if (((arg0->unk84 & 0x4000) == 0) && (arg0->unk3D0->unk102 == 0)) return;
//     if ((func_15125490(arg0) != 0) && (phi_v1 == 0) && (phi_a1 == 0)) {
//         if ((func_15123934(arg0, 0x80, 1, 1, 0xD) != 0) && (arg0->unk6C8 == 0)) {
//             func_15124B18(arg0);
//             arg0->unk5F0 |= 0x1000;
//         }
//         return;
//     }
//     if ((arg0->unk2C & 0x80) != 0) {
//         func_151239CC(arg0, 0xD);
//         arg0->unk190 = 0.0f;
//     }
//     if ((arg0->unk5F0 & 0x1000) != 0) {
//         arg0->unk5F0 &= ~0x1000;
//         temp_f0 = arg0->unk2FC - arg0->unk354;
//         *(f32 *) ((u8 *) arg0 + 0x344) = temp_f0;
//         arg0->unk348 = temp_f0;
//     }
// }
#pragma GLOBAL_ASM("asm/nonmatchings/game_14FF90/func_15125A6C.s")
// NON-MATCHING: miles away
// void func_15125A6C(struct108 *arg0) {
//     f32 pad3C;
//     f32 sp38;
//     f32 pad34;
//     f32 pad30;
//     f32 sp2C;
//     f32 sp28;
//     f32 sp24;
//
//     f32 temp_f12;
//     f32 temp_f12_2;
//
//     if (arg0->unk23E == 0x2A) {
//         sp38 = arg0->unk3D0->unk40;
//         if (arg0->unk2C != 0x40000) {
//             func_1512D560(arg0, 5, 0);
//             arg0->unk7E4 = 1U;
//         }
//         D_800DBFF4[0] = 3;
//         D_800C3600->unk0 = 1;
//         D_800C3600->unk4 = 0;
//         temp_f12 = sp38 * D_800A3550;
//         sp28 = temp_f12;
//         sp2C = sinf(temp_f12);
//         temp_f12_2 = (sp38 - 90.0f) * D_800A3554;
//         sp24 = temp_f12_2;
//         D_800C3600->unk14 = (sinf(temp_f12_2) * 46.0f) + (arg0->unk3D0->unk14 + (138.0f * sp2C));
//         D_800C3600->unk18 = arg0->unk3D0->unk18 + 96.0f;
//         sp2C = cosf(temp_f12);
//         D_800C3600->unk1C = (cosf(temp_f12_2) * 46.0f) + (arg0->unk3D0->unk1C + (138.0f * sp2C));
//         D_800C3600->unk20 = 0.0f;
//         D_800C3600->unk24 = -180.0f;
//         D_800C3600->unk8 = 0.0f;
//         D_800C3600->unk28 = sp38 - 180.0f;
//         D_800C3600->unk5C = 0;
//         func_1512D560(arg0, 7, D_800C3600);
//         return;
//     }
//
//     if (arg0->unk7E4 != 0) {
//         func_1512D560(arg0, 6, 0);
//         arg0->unk7E4 = 0U;
//     }
// }

#pragma GLOBAL_ASM("asm/nonmatchings/game_14FF90/func_15125C40.s")
// NON-MATCHING (best 425): logic byte-identical (every load/xor/branch/call/store matches).
// Only diff is register allocation: the const 0x1A lands in a3 (target: a2) and `e` gets an
// extra `move a0,a1` (target keeps e in a1, fills the beqz delay slot with the e^3 for the
// (e==3) test). This one extra move cascades register renames through the whole body. Tried
// declaration reorder (no effect). Register-alloc/delay-slot only.  PERMUTER CANDIDATE.
// void func_15125C40(struct108 *arg0) {
//     s32 flag;
//     s32 dec;
//     s32 nv;
//     u8 e = arg0->unk23E;
//     flag = (D_800D1940 == 0x42) && (e == 0x1A);
//     dec = (e == 3) || (e == 0x1A) || flag;
//     nv = arg0->unk7CC - 1;
//     arg0->unk7CC = nv;
//     if (dec) {
//         if (nv != 0) return;
//         if (flag) {
//             func_1509BFB0(3, 0x9000, 0x18, (s32) arg0->unk3D0->unk40, 0, 0xFA);
//         } else if (e == 0x1A) {
//             func_1509BFB0(3, 0x9000, 0x18, 0, 0, 0xFA);
//         }
//         arg0->unk5F0 |= 2;
//         *arg0->unk36C |= 0x10;
//         arg0->unk36A |= 0x10;
//         arg0->unk7CC = 1;
//     } else {
//         if ((arg0->unk5F0 & 2) && !dec) {
//             func_1509BFB0(1, 0x9000, 0x10, 0);
//             func_1509BFB0(1, 0x9000, 0xF, 0);
//             arg0->unk5F0 &= ~2;
//         }
//         arg0->unk7CC = 2;
//     }
// }

#pragma GLOBAL_ASM("asm/nonmatchings/game_14FF90/func_15125DB4.s")

void func_15126138(struct108 *arg0) {
    struct127 *temp_v0_2;
    struct108 *phi_a0;

    func_151247C0(arg0);

    temp_v0_2 = arg0->unk3D0;

    if (((temp_v0_2->x_position != arg0->unk2B0) ||
         (temp_v0_2->y_position != arg0->unk2B4) ||
         (temp_v0_2->z_position != arg0->unk2B8)) && ((arg0->unk2C & ~0x100) != 0)) {
        arg0->unk298 = 1;
        arg0->unk7E6 = 60;
        arg0->unk8ED = 0;
    } else {
        arg0->unk298 = 0;
    }

    if (arg0->unk84 & 0x200000) {
        temp_v0_2 = arg0->unk3D0; // again?!
        if (temp_v0_2->interaction_state != 0x1E) {
            if (temp_v0_2->unk102 == 0) {
                if ((*(arg0->unk36C) & 0xF) != 0) {
                    if ((arg0->unk2C & 0x40) == 0) {
                        func_151220D0(arg0);
                    }
                }
            }
        }
    }
    func_15124C38(arg0, 0);
}


#pragma GLOBAL_ASM("asm/nonmatchings/game_14FF90/func_1512623C.s")
// NON-MATCHING (best 1150): logic reconstructed (arg0/arg1 = struct127*, arg3-5 = f32* outs,
// arg6 flag). phi_v0 lands in v1 (IDO) vs v0 (target, the return reg), and IDO packs the
// phi-spill low (0x20) making the frame 0x40 vs the target's 0x48 (spill at 0x44, after the
// two struct17 locals + sp28). Every stack-offset then differs. Register-alloc/spill-layout.
// PERMUTER CANDIDATE.
// s32 func_1512623C(struct127 *arg0, struct127 *arg1, s32 arg2, f32 *arg3, f32 *arg4, f32 *arg5, s32 arg6) {
//     struct17 sp38, sp2C; s32 sp28, phi_v0 = 1;
//     if (arg0->unk1D4 != NULL) {
//         phi_v0 = 0;
//         if (arg6 != 0) { sp28 = 3; sp38.unk0 = 0.0f; sp38.unk4 = 20.0f; sp38.unk8 = 0.0f; }
//         else if (arg2 == 0x1B) { sp28 = 4; sp38.unk0 = 0.0f; sp38.unk4 = 116.0f; sp38.unk8 = 130.0f; }
//         else phi_v0 = 1;
//         if (phi_v0 == 0) {
//             func_15143134(&sp38, &sp2C, (u8 *) arg0->unk1D4 + sp28 * 0x40);
//             *arg3 = sp2C.unk0; *arg4 = sp2C.unk4; *arg5 = sp2C.unk8;
//         }
//     }
//     if (phi_v0 != 0) {
//         *arg3 = arg0->x_position;
//         *arg4 = arg0->y_position + (f32) *(s16 *) ((u8 *) arg1 + 0x114) * 0.75f;
//         *arg5 = arg0->z_position;
//     }
//     return phi_v0;
// }
#pragma GLOBAL_ASM("asm/nonmatchings/game_14FF90/func_15126378.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_14FF90/func_15127520.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_14FF90/func_151277B0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_14FF90/func_151279A0.s")

// D_800BE628 is declared `s32` but holds a pointer to an array of 0x180-byte structs;
// unk2FC is padding in struct127 in the shared header. File-local views (headers unedited).
typedef struct {
    u8  pad0[0x84];
    f32 unk84;
    u8  pad88[0xF8];
} BE628Elem; /* 0x180 */

typedef struct {
    u8  pad0[0x65];
    u8  unk65;
    u8  pad66[0xE];
    u8  unk74;
    u8  pad75[0x287];
    u8  unk2FC;
} S127Bits;

#pragma GLOBAL_ASM("asm/nonmatchings/game_14FF90/func_15127EB8.s")
// NON-MATCHING (best 100): logic byte-identical. Only remaining diff is the
// `v0 = arg0->unk3D0` default: the target emits an un-coalesced `move v0,v1`
// BEFORE the beqz (keeping the default live in v0 across the if-body, so idx
// lands in a0 and the array-index result overwrites v0). IDO here coalesces
// temp_v0 with temp_v1 (idx→v0, no move). Register-coalescing decision not
// controllable from C.  PERMUTER CANDIDATE.
// void func_15127EB8(struct108 *arg0) {
//     struct127 *temp_v0, *temp_v1;
//     u8 temp_a0;
//     func_151239CC(arg0, 1);
//     arg0->unk3D4->unk197 = 0;
//     func_151C9ED4(arg0);
//     arg0->unk19C = 0.0f;
//     arg0->unk1A0 = 0.0f;
//     arg0->unk1A4 = 0.0f;
//     arg0->unk1A8 = 0.0f;
//     func_1510B32C(arg0->unk23D, 0.0f, 0.0f, 1.0f);
//     ((BE628Elem *) D_800BE628)[arg0->unk23D].unk84 = 1.0f;
//     func_150627D4(arg0->unk3D0);
//     D_800DBFF4[arg0->unk23D] = 2;
//     temp_v1 = arg0->unk3D0;
//     temp_a0 = temp_v1->unk65;
//     temp_v0 = (temp_a0 != 0) ? &D_800CC2D0[temp_a0 - 1] : temp_v1;
//     ((S127Bits *) temp_v0)->unk2FC &= ~(1 << arg0->unk23D);
//     temp_v0->unk74 &= ~(1 << arg0->unk23D);
//     arg0->unk23C = 1;
// }

void func_15127FEC(struct108 *arg0, s32 arg1, s32 arg2) {
    arg0->unk7F4 = 1;
    arg0->unk7F8 = arg0->unk2A4;
    arg0->unk7FC = arg0->unk2A8;
    arg0->unk800 = *(f32*)&arg0->unk2AC;
    func_1512A390();
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_14FF90/func_15128030.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_14FF90/func_151283B8.s")
// NON-MATCHING (best 200): byte-identical EXCEPT the case-8 zero argument -> target emits
// `li a1,0` (addiu a1,zero,0), IDO here emits `move a1,zero` (or). Tried 0 / NULL / prototype;
// li-vs-move for a 0 arg is not controllable from C.  PERMUTER CANDIDATE (li/move).
// (Case bodies MUST be in this source order to match the target body layout.)

// structs.h types unk5FE as u16, but the original code reads it signed.
typedef struct {
    u8  pad0[0x5FE];
    s16 unk5FE;
} Struct108_5FE;

void func_151284C4(struct108 *arg0) {
    struct127 *temp_v0;

    func_1512C490(arg0);
    temp_v0 = arg0->unk3D0;
    arg0->unk2B0 = temp_v0->x_position;
    arg0->unk2B4 = temp_v0->y_position;
    arg0->unk2B8 = temp_v0->z_position;
    if (arg0->unk23C != 0) {
        arg0->unk23C -= 1;
    }
    if ((arg0->unk84 & 8) != 0) {
        if (((Struct108_5FE *) arg0)->unk5FE <= 0) {
            ((Struct108_5FE *) arg0)->unk5FE = 60;
            func_15128774(arg0, arg0->unk3D0);
        }
    }
}

s32 func_15128540(struct108 *arg0) {
    s32 temp;

    if (func_151253CC(arg0) != 0) {
        return 1;
    }
    if (func_15128030(arg0) != 0) {
        return 0;
    }
    temp = arg0->unk2C;
    if (temp & 0x80000) {
        func_1512A360(arg0);
        *(struct17 *) &arg0->unk2BC = *(struct17 *) &arg0->unk2A4;
        func_151256BC(arg0);
        func_151236D0(arg0);
        func_151284C4(arg0);
        return 1;
    }
    if (temp & 0x100000) {
        func_1512E4B0(arg0);
        func_151236D0(arg0);
        func_151284C4(arg0);
        return 1;
    }
    if (temp & 0x200000) {
        func_151219D0(arg0);
        func_151236D0(arg0);
        func_151284C4(arg0);
        return 1;
    }
    if (temp & 0x400000) {
        func_1512D380(arg0);
        func_151236D0(arg0);
        func_151284C4(arg0);
        return 1;
    }
    if (func_15126378(arg0) != 0) {
        func_151284C4(arg0);
        return 1;
    }
    return 0;
}

void func_15128680(struct108 *arg0) {
}

void func_1512868C(struct108 *arg0) {
    struct127 *temp_v1_2;
    u8 idx;
    s32 i;

    for (i = 0; i < 21; i++)
    {
        arg0->unk20C[i] = 0;
    }

    arg0->unk2C = 1;
    arg0->unkDC = 0;
    arg0->unk134 = 1;
    arg0->unk84 = 14;
    arg0->unk1B4 = 3;
    func_15124B18(arg0);
    idx = arg0->unk23D;
    arg0->unk3D0 = temp_v1_2 = &D_800CC2D0[idx];
    arg0->unk368 = arg0->unk3CC = idx;
    arg0->unk3D4 = temp_v1_2->unk31C;
    arg0->unk190 = 0.0f;
    arg0->unk198 = 0.0f;
    arg0->unk18C = 0.0f;
    arg0->unk194 = 0.0f;
    arg0->unk674 = 1.0f;
    arg0->unk3D4->unk198 = 0;
    arg0->unk73C = 0;
}

void func_15128774(struct108 *arg0, struct127 *arg1) {
    arg0->unk35C = arg1->unk180;
    arg0->unk304 = arg0->unk2F8 = arg1->x_position;
    arg0->unk308 = arg0->unk2FC = arg1->y_position;
    arg0->unk30C = arg0->unk300 = arg1->z_position;
    arg0->unk37C = arg0->unk3D0->unk40 - 180.0f;
    arg0->unk3D4->unk18C = D_800A35AC;
    arg0->unk23C = 1;
}
