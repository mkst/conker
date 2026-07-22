#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_1507C8E0(struct127 *arg0, s32 arg1) {
    arg0->unk31C->unk120 = (u8)2;
    arg0->unk31C->unk124 = arg1;
}

// "goto" hell
#pragma GLOBAL_ASM("asm/nonmatchings/game_A9D90/func_1507C8FC.s")

void func_1507CD0C(struct127 *arg0) {
    s32 temp_lo = ((s32)arg0 - (s32)&D_800CC2D0) / (s32)sizeof(struct127);

    arg0->unk31C->unk120 = 3;

    if (temp_lo <= D_80082FA0) {
        func_15181D70(temp_lo);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_A9D90/func_1507CD64.s")

// The original references D_800CC2D0[i].unk13F through the split symbol D_800CC40F,
// which is not declared in variables.h. Declare it locally with struct127's stride.
typedef struct {
    /* 0x000 */ u8 unk0;
    /* 0x001 */ u8 pad1[0x32B];
} Struct127At13F;

extern Struct127At13F D_800CC40F[];

void func_1507D158(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp = D_800CC40F[arg0].unk0;

    func_1509BFB0(3, temp | 0x2000, arg1, arg2, arg3, arg4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_A9D90/func_1507D1D8.s")

// PERMUTER CANDIDATE (best score 1460). Logic is byte-op exact (all non-address
// instructions match). Remaining diff is entirely an 8-byte stack-frame-size delta
// (target frame 0x30 with ra@0x1c + arg-cache@0x24; IDO gives us frame 0x28) that
// cascades through every stack offset and branch target, plus two branch-likely
// scheduler coin-flips (the `||` in the D_8008FDA8<0 test picks bgezl+fill vs the
// target's plain bltz+nop). Casts verified from the .s: D_800E0C20 and D_800BE3DF
// read signed (lb) though headers say s32/u8; D_8008FD94 (header s32) decremented
// as a byte. Param must be s32 with (s16) casts at the s16-param call sites, else
// arg0 promotes into saved s0 (scores ~5979). This s32 form is the permuter seed.
// void func_1507D4F8(s32 arg0) {
//     struct127 *temp_a0;
//     if ((D_8008FDBC & 1) == 0) {
//         func_15085710((s16)arg0, 4, 1);
//     }
//     if (func_150859AC((s16)arg0, 3) != 0) {
//         func_15085710((s16)arg0, 5, D_8008726C);
//         temp_a0 = &D_800CC2D0[arg0];
//         temp_a0->unkB2 = 0;
//         if (D_800BE616 != 0) {
//             if (*(s8 *)&D_800E0C20 == 0) {
//                 func_1507D1D8(temp_a0);
//             } else {
//                 temp_a0->unk31C->unk120 = 0xA;
//             }
//             return;
//         }
//         D_800D18A8 = 1;
//         if (((D_800D2E4C->unk19 & 4) != 0) || (D_8008FDA8 < 0)) {
//             func_1501C730(2, *(s8 *)&D_800BE3DF, D_800BE3E0, 0, 0);
//             return;
//         }
//         func_1501C730(1, 0x22, 0, 0, 0);
//         return;
//     }
//     if (D_800BE616 == 0) {
//         D_800D2E43 = 1;
//         func_1509C3A0();
//         D_800D18A8 = 1;
//         func_15085710((s16)arg0, 5, D_8008726C);
//         func_15085710((s16)arg0, 2, D_80087260);
//         func_1501C730(1, 0x18, 0, 0, 0);
//     } else {
//         D_800D18A0 |= 1 << arg0;
//     }
//     temp_a0 = &D_800CC2D0[arg0];
//     if (temp_a0->unk31C->unk84 == 0) {
//         *(s8 *)&D_8008FD94 -= 1;
//     }
//     temp_a0->unk31C->unk120 = 0xA;
//     D_800BE618 -= 1;
// }
#pragma GLOBAL_ASM("asm/nonmatchings/game_A9D90/func_1507D4F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_A9D90/func_1507D754.s")

void func_1507DB44(s32 arg0, s32 arg1) {
    func_1503DE70(arg0, arg1, -1);
}

void func_1507DB64(void) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_A9D90/func_1507DB6C.s")

void func_1507DE4C(struct127 *arg0) {

    if (arg0->interaction_state == 1) {
        func_150836CC(arg0, 0x44);
        func_150836CC(arg0, 0x23);
        arg0->unk9C |= 0xF000;
        func_150836CC(arg0, 0x44);
        func_150836CC(arg0, 0x23);
        return;
    }

    switch(arg0->id) {
        case 0x9F:
        case 0xa0:
            arg0->unk9C |= 0xF000;
            break;
        case 0x5A:
        case 0x74:
        case 0x7A:
            arg0->unk9C |= 0xFF8;
            break;
    }
}


// UNMATCHABLE as C (best .text score 500, logic byte-identical). The target dispatches
// through EXTERNAL jump table jtbl_8009B884 (the expected object has no .rodata; the table
// lives in a separately-linked data segment). A C `switch` always emits a *local* .rodata
// jump table, so the two jtbl-referencing instructions (%hi/%lo) can never match, and a
// local table would misplace ROM data. Reconstruction below is verified to match all .text
// instructions exactly except the jtbl symbol. Case values 5/6 vs 7/8 (which two are empty)
// don't affect .text; the middle cases only need to be dense (4..9) to force the jump table.
// void func_1507DF10(struct127 *arg0, s32 arg1) {
//     switch (arg1) {
//     case 4: arg0->unk94 |= 0x20; arg0->unk9C |= 0x78;       arg0->unk2E4 = 1; break;
//     case 5: arg0->unk94 |= 0x40; arg0->unk94 &= ~0x200; arg0->unk9C |= 0xF00;     arg0->unk2E4 = 2; break;
//     case 6: arg0->unk94 |= 0xE;  arg0->unk94 &= ~0x410; arg0->unk9C |= 0xEE0000;  arg0->unk2E4 = 4; break;
//     case 7: break;
//     case 8: break;
//     case 9: arg0->unk94 |= 0x80; arg0->unk94 &= ~0x500;     arg0->unk2E4 = 8; break;
//     }
// }
#pragma GLOBAL_ASM("asm/nonmatchings/game_A9D90/func_1507DF10.s")

extern void func_15084D70(s32, s32, s32, s16 *, f32 *, u8 *, u8 *, s32 *, s32 *, s32, s32 *);
extern void func_15022190(s16, s16, s16, f32);
extern void func_1501D348(s32, s32, s32, s32, s32);

void func_1507DFE4(s32 arg0, s32 arg1) {
    s32 sp64;
    s16 sp5C[3];
    f32 sp50[3];
    u8 sp4F;
    u8 sp4E;
    s32 sp48;
    s32 sp44;
    f32 temp;
    s32 sp3C;
    s32 sp38;

    if (D_800C35EA != 1) {
        func_15084D70(0, arg0, 1, sp5C, sp50, &sp4F, &sp4E, &sp44, &sp48, 1, &sp38);
        temp = (f32)((s32)sp4E - 0x40) * 1.40625f + 180.0f;
        if (sp38 == 0) {
            sp3C = 1;
        } else if (sp38 == 1) {
            sp3C = 3;
        } else {
            return;
        }
        func_15022190(sp5C[0], sp5C[1], sp5C[2], temp);
        sp64 = D_800BE9F0;
        D_800BE9F0 = 0x25;
        D_800C3671 = 1;
        func_1501D348(0x25, sp3C, 0, 0, 0);
        D_800C3670 = 1;
        D_800BE9F0 = sp64;
    }
}
// func_15084D70 is not declared in functions.h; prototype derived from asm/B21B0.s.
extern void func_15084D70(s32, s32, s32, s16 *, f32 *, u8 *, u8 *, s32 *, s32 *, s32, s32 *);

// D_800BE9F4 is typed "u16 *" in variables.h but is used as an s32 counter/state,
// and D_800BE3DF is typed u8 but read signed (lb), hence the casts.
s32 func_1507E114(s32 arg0) {
    s32 sp5C;
    s16 sp54[3];
    f32 sp48[3];
    s32 sp44;
    u8 sp43;
    u8 sp42;
    s32 sp3C;

    if (D_800D18A8 == 0) {
        return 0;
    }

    if ((*(s32 *)&D_800BE9F4 == 0x22) || (*(s32 *)&D_800BE9F4 == 0x18)) {
        return 0;
    }

    *(s32 *)&D_800BE9F4 = *(s8 *)&D_800BE3DF;
    func_15084D70(0, D_800BE3E0, 1, sp54, sp48, &sp43, &sp42, &sp44, &sp3C, 1, &sp5C);
    return sp5C + 1;
}

extern void func_15143134(f32 *, f32 *, s32);

// PERMUTER CANDIDATE (best score 974). Reconstruction below is logically/byte-op
// exact; only scheduler/allocation differs: target hoists the 30.0f `lui` above the
// null-check branch, giving `beqz` + arg1-load in the delay slot, whereas IDO emits
// `beqzl` here and shifts the two vec3 stack locals +4 (0x1C/0x28 -> 0x20/0x2C).
// (early-return restructure scores worse, 2187.)
// void func_1507E1D0(struct127 *arg0, f32 *arg1, f32 *arg2, f32 *arg3) {
//     f32 sp28[3];
//     f32 sp1C[3];
//     s32 temp;
//     if (arg0->unk1D4 != 0) {
//         sp28[0] = 0.0f;
//         sp28[1] = 30.0f * arg0->y_scale;
//         sp28[2] = 0.0f;
//         temp = (s32) arg0->unk1D4;
//         if (arg0->interaction_state == 1) {
//             temp += 0x300;
//         } else if (arg0->interaction_state == 30) {
//             temp += 0xC0;
//         }
//         func_15143134(sp28, sp1C, temp);
//         *arg1 = sp1C[0];
//         *arg2 = sp1C[1];
//         *arg3 = sp1C[2];
//     } else {
//         *arg1 = arg0->x_position;
//         *arg2 = arg0->y_position;
//         *arg3 = arg0->z_position;
//     }
// }
#pragma GLOBAL_ASM("asm/nonmatchings/game_A9D90/func_1507E1D0.s")
