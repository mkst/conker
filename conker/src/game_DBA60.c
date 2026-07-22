#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_150AE5B0(struct108 *arg0) {
    if ((D_800D2E4C->unk4 & 0x80) == 0) {
        if (func_1509BE40(0, 0x2000, 0xBB) != -1) {
            if (func_15123934(arg0, arg0->unk2C, 0, arg0->unk134, 8) != 0) {
                arg0->unk84 |= 0x1000000;
                func_151254F4(arg0, D_800CC335 - 1);
            }
        } else if (func_151239CC(arg0, 8) != 0) {
            func_151254F4(arg0, 0);
        }
    }
    arg0->unk84 &= -0x4001;
    if ((D_800D2E4C->unk1 & 4) == 0) {
        if (func_1509BE40(1, 0x2000, 0x95, func_1509BE40(0, 0x2014, 0xB7) | 0x2000) != 0) {
            arg0->unk84 |= 0x1000000;
            if (((arg0->unk2C & 1) != 0) && (func_15123934(arg0, arg0->unk2C, 0, arg0->unk134, 0) != 0)) {
                arg0->unk1B4 = 3;
                arg0->unk84 &= -5;
                func_15124B18(arg0);
            }
        } else if (func_151239CC(arg0, 0) != 0) {
            func_15124B18(arg0);
            arg0->unk84 &= 0xFEFFFFFF;
        }
    }
    if (func_1509BE40(1, 0x4082, 6, 0x9000) != 0) {
        arg0->unk84 |= 0x10000;
    } else {
        arg0->unk84 &= 0xFFFEFFFF;
    }
}


#pragma GLOBAL_ASM("asm/nonmatchings/game_DBA60/func_150AE790.s")

// some funky xor going on
// PERMUTER CANDIDATE (best hand score 3404; full algorithm below is correct).
// Anti-tamper checksum: XOR-rotate over the code words [func_15001A08 .. &D_15001B08),
// compare to magic 0xB4E42D60; if mismatch zero D_800DCE50[0x23]/[0x8B]. Then populate
// objects via func_151491F4 for D_800886E0[s3].count entries (s3 stays 0). Off only in
// register allocation (target re-materializes the D_800886E0/E4 base addrs each iter;
// IDO here hoists them to extra saved regs -> frame 0x40 vs 0x38) and a loop-guard +0x1 peel.
// typedef struct { u8 pad0[0x3B]; u8 unk3B; } StructAE_arg;
// typedef struct { u8 pad0[0x28]; StructAE_arg *unk28; u8 unk2C; u8 unk2D; } StructAE_ret;
// typedef struct { s32 count; s32 unk4; } Struct886E0;
// typedef struct { u8 unk0; u8 pad1; s16 unk2; } Struct886E4;
// extern u32 func_15001A08[]; extern u32 D_15001B08;
// extern Struct886E0 D_800886E0[]; extern Struct886E4 *D_800886E4; extern s32 D_800DCE50[];
// void func_150AEB9C(StructAE_arg *arg0) {
//     u32 sum; u32 *p; s32 s0, s1, s3 = 0; StructAE_ret *r;
//     if (arg0 != 0) {
//         sum = 0;
//         for (p = func_15001A08; p < &D_15001B08; p++) sum = (sum ^ *p) << 1;
//         if (sum != 0xB4E42D60) { D_800DCE50[0x23] = 0; D_800DCE50[0x8B] = 0; }
//         for (s1 = 0, s0 = 0; s1 < D_800886E0[s3].count; s1++, s0 += 4) {
//             r = (StructAE_ret *) func_151491F4(*(s16 *)((u8 *)D_800886E4 + s0 + 2), 0, -1, 1, 0x27, 8, 0xFF, 0);
//             if (r == 0) break;
//             r->unk28 = arg0; r->unk2C = arg0->unk3B; r->unk2D = *(u8 *)((u8 *)D_800886E4 + s0);
//         }
//     }
// }
#pragma GLOBAL_ASM("asm/nonmatchings/game_DBA60/func_150AEB9C.s")

void func_150AECCC(struct42 *arg0) {
    arg0->unk96 = arg0->unk96 + (arg0->unk94 * D_800BE9E4);
    if (arg0->unk96 >= 0x1401) {
        arg0->unk96 = 0x1400;
    }
    arg0->unk9E = arg0->unk9E - ((s32) arg0->unk96 >> 8);
    arg0->unkA4 = arg0->unkA4 + D_800BE9E4;
    if (arg0->unkA4 >= 0x1A) {
        arg0->unkA4 = 0x19;
    }
}

void func_150AED4C(struct114 *arg0) {
    arg0->unk34 += arg0->unk14 * D_800BE9E4;
    if (arg0->unk2A < arg0->unk34) {
        arg0->unk3A = 70;
        arg0->unk34 = arg0->unk2A;
    }
    arg0->unk36 = arg0->unk34;
}

typedef struct {
    u8  pad0[0x1C];
    s16 unk1C;
    u8  pad1E[0x7A];
    struct110 *unk98;
} struct_DBA60_0;

s32 func_150AED9C(struct_DBA60_0 *arg0) {
    struct110 *ptr;
    s32 val;

    ptr = arg0->unk98;
    val = arg0->unk1C * 8;
    if (val >= 0x100) {
        val = 0xFF;
    }
    ptr->unk1B = val;
    if (ptr->unk1B < 0) {
        return 0;
    }
    return 1;
}

s32 func_150AEDD8(struct202 *arg0) {
    if (arg0->unk1C < 0x20) {
        arg0->unk28 = arg0->unk1C * 8;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_DBA60/func_150AEDF8.s")
// Best attempt: score 165 (asm-differ). Everything matches except one delay-slot
// scheduling choice in the second inner arm: the target emits
// "sb t0,4(v0) / b <epi+4> / lw ra,0x14(sp)" (delay slot filled from the epilogue),
// while IDO here always folds the sb into the branch delay slot
// ("b <epi> / sb t0,4(v0)"), i.e. one instruction shorter.
// Tried: local temps vs pure CSE expressions, both operand orders on every compare,
// explicit returns, if/else vs else-if vs nested vs switch, store reordering,
// empty else - none change that one delay slot.
// struct_DBA60_1/_2 are file-local: arg0+0x28 is {s32; u8} and arg1 offset 4 is
// read both as a word and as a byte, which no shared header type expresses.
//
// typedef struct {
//     /* 0x00 */ s32 unk0;
//     /* 0x04 */ u8  unk4;
// } struct_DBA60_1;
//
// typedef struct {
//     /* 0x00 */ s32 unk0;
//     /* 0x04 */ union { s32 w; u8 b; } unk4;
//     /* 0x08 */ u8  unk8;
//     /* 0x09 */ u8  unk9;
// } struct_DBA60_2;
//
// void func_150AEDF8(struct102 *arg0, struct_DBA60_2 *arg1, u8 arg2) {
//     struct_DBA60_1 *ptr = (struct_DBA60_1 *) ((u8 *) arg0 + 0x28);
//     s32 val;
//
//     if (arg2 == 0x2D) {
//         if (ptr->unk0 == arg1->unk0) {
//             ptr->unk0 = arg1->unk4.w;
//             ptr->unk4 = arg1->unk9;
//         } else if (ptr->unk0 == arg1->unk4.w) {
//             ptr->unk0 = arg1->unk0;
//             ptr->unk4 = arg1->unk8;
//         }
//     } else if (arg2 == 0) {
//         val = arg1->unk0;
//         if ((val == ptr->unk0) || (arg1->unk4.b == ptr->unk4)) {
//             func_1516972C(arg0);
//         }
//     }
// }
//
// void func_150AEDF8(void *arg0, void *arg1, s32 arg2) {
//     s32 temp_a0;
//     s32 temp_t6;
//     s32 temp_v1;
//     void *temp_v0;
//     void *temp_v0_2;
//
//     temp_t6 = arg2 & 0xFF;
//     if (temp_t6 == 0x2D) {
//         temp_v0 = arg0->unk28;
//         temp_a0 = temp_v0->unk0;
//         temp_v1 = arg1->unk0;
//         if (temp_v1 == temp_a0) {
//             temp_v0->unk0 = (s32) arg1->unk4;
//             temp_v0->unk4 = (u8) arg1->unk9;
//             return;
//         }
//         if (arg1->unk4 == temp_a0) {
//             temp_v0->unk0 = temp_v1;
//             temp_v0->unk4 = (u8) arg1->unk8;
//             return;
//         }
//     } else {
//         temp_v0 = arg0->unk28;
//         if (temp_t6 == 0) {
//             if ((arg1->unk0 == temp_v0->unk0) || ((temp_v0->unk4 == (u8) arg1->unk4))) {
//                 func_1516972C(arg0, temp_t6, arg0);
//             }
//         }
//     }
// }
