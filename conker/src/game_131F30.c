#include <ultra64.h>
#include "functions.h"
#include "variables.h"

// D_800DCE50 holds per-slot object list heads; D_800A5770 is declared as a
// bare s32 in variables.h but is used as a 2 element array (see func_151494E0).
typedef struct FileNode {
    u8  pad0[0x8];
    struct FileNode *unk8;
    u8  padC[0x7];
    u8  unk13;
    u8  pad14[0x14];
    s32 unk28;
} FileNode;

extern FileNode *D_800DCE50[2][104];

typedef struct { s32 unk0; s32 unk4; u8 unk8; } Blk;
typedef struct { s32 unk0; Blk *unk4; struct127 *unk8; } Arg;
extern u32 *D_800DBF94;
extern Blk D_800A2380;
extern Blk D_800A238C;
extern Blk D_800A2398;

#pragma GLOBAL_ASM("asm/nonmatchings/game_131F30/func_15104A80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_131F30/func_15104C44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_131F30/func_15104FF8.s")
// PERMUTER CANDIDATE. Best attempt: score 16. Every instruction, register and immediate matches;
// the only difference is the frame's local-slot base - the target spills the
// func_1000EF40 address to 0x3c(sp) and the &arg0->unk28 pointer to 0x40(sp),
// while this spills them to 0x38(sp)/0x3c(sp) (frame size 0x48 is correct).
// The target's frame reserves one extra word below the spill area; adding any
// third local shifts the spills correctly but grows the frame to 0x50.
//
// // structs.h lacks the s16 x/y/z at the head of struct205 and a field at
// // offset 8 in struct206, so file-local equivalents are used.
// typedef struct {
//     s16 unk0;
//     s16 unk2;
//     s16 unk4;
//     u8  pad6[0xE];
//     u8  unk14;
// } FileObj;
//
// typedef struct {
//     FileObj *unk0;
//     u16 unk4;
//     u8  pad6[0x2];
//     s16 unk8;
// } FileSub;
//
// typedef struct {
//     u8      pad0[0x28];
//     FileSub unk28;
// } FileOwner;
//
// void func_15104FF8(FileOwner *arg0, s32 arg1, u8 arg2) {
//     FileSub *sub = &arg0->unk28;
//
//     if (arg2 == 0x38) {
//         if (sub->unk0->unk14 == 1) {
//             FileObj *obj = sub->unk0;
//
//             sub->unk8 = 300;
//             func_1000FD38(func_1000EF40, obj, 0);
//             func_1000FA64(566, sub->unk0->unk0, sub->unk0->unk2, sub->unk0->unk4,
//                           16384, 1500, 1000, func_1000EF40, sub->unk0, 0, 8, 0);
//         }
//     }
// }

#pragma GLOBAL_ASM("asm/nonmatchings/game_131F30/func_151050B0.s")

void func_1510550C(struct102 *arg0, s32 arg1, u8 arg2) {
    if (arg2 == 0x4B) {
        func_1516972C(arg0);
    }
}

void func_15105548(struct207 *arg0, s32 *arg1, u8 arg2) {
    struct206 *temp_v0 = &arg0->unk28;
    if ((arg2 == 0x38) && (temp_v0->unk0->unk14 == 1)) {
        temp_v0->unk70 = *arg1;
        temp_v0->unk4 = 300;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_131F30/func_1510558C.s")

void func_15105848(struct207 *arg0, s32 arg1, u8 arg2) {
    struct206 *temp_v0;

    if (arg2 == 0x38) {
        temp_v0 = &arg0->unk28;
        func_151058B4(arg0);
        temp_v0->unkC |= 1;
    } else {
        temp_v0 = &arg0->unk28;
        if (arg2 == 0x39) {
            temp_v0->unkC &= 0xFFFE;
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_131F30/func_151058B4.s")
// void func_151058B4(void *arg0) {
//     s8 spE1;
//     s8 spE0;
//     ?32 spDC;
//     s16 spDA;
//     s16 spD8;
//     ? spD4;
//     f32 spD0;
//     ? spCC;
//     s8 spC9;
//     s8 spC8;
//     f32 spC4;
//     s8 spC2;
//     s16 spC0;
//     s16 spBE;
//     s16 spBC;
//     ?32 spB8;
//     ?32 spB4;
//     s8 spB1;
//     s8 spB0;
//     s8 spAF;
//     s8 spAE;
//     s8 spAD;
//     s8 spAC;
//     s8 spAB;
//     s8 spAA;
//     s8 spA9;
//     s8 spA8;
//     s8 spA7;
//     s8 spA6;
//     s8 spA5;
//     s8 spA4;
//     f32 spA0;
//     ? sp94;
//     f32 sp90;
//     ? sp8C;
//     ? sp88;
//     f32 temp_f20;
//     f32 temp_f20_2;
//     f32 temp_f24;
//     f32 temp_f26;
//     s32 temp_s0;
//     u32 temp_s1;
//     void *temp_s4;
//     f32 phi_f20;
//
//     if (func_151464B8(arg0->unk30) == 0) {
//         temp_s4 = arg0 + 0x28;
//         temp_f20 = ((func_150ADA68() * *(void *)0x800A23EC) + *(void *)0x800A23F0) * temp_s4->unk4;
//         if (temp_f20 > 1.0f) {
//             spDA = 0x15;
//             spDC = 0xA;
//             spA7 = 0x61;
//             spA8 = 0xF2;
//             spE0 = -1;
//             spA4 = 4;
//             spA5 = 2;
//             spA6 = 3;
//             spA9 = 0xFF;
//             spAB = 0xFF;
//             spAC = 0xFF;
//             spAD = 0xFF;
//             spAE = 0xFF;
//             spAF = 0xFF;
//             spB0 = 3;
//             spB1 = 0x24;
//             spB4 = 0x200005;
//             spB8 = 0x60600;
//             spBC = 0x14;
//             spBE = 0xC;
//             spC0 = 1;
//             spC2 = 0;
//             spC4 = 1.0f;
//             spC8 = -1;
//             spC9 = 0;
//             temp_f26 = *(void *)0x800A23F4;
//             temp_f24 = *(void *)0x800A23F8;
//             spD0 = (f32) temp_s4->unk0->unk2;
//             phi_f20 = temp_f20;
// loop_3:
//             spAA = (func_150ADA20() % 0x65U) + 0x9B;
//             spE1 = (func_150ADA20() & 3) + 3;
//             func_151432BC(temp_s4->unk0, &spCC, &spD4, &sp8C, &sp88);
//             spD8 = (func_150ADA20() % 0x1FU) + 0x1E;
//             sp90 = (func_150ADA68() * temp_f24) + temp_f26;
//             temp_s0 = func_150ADA20();
//             temp_s1 = func_150ADA20();
//             func_15143794((s16) (temp_s0 & 0xFF), (s16) ((temp_s1 % 0x16U) - 0x36), (func_150ADA68() * 20.0f) + 30.0f, &sp94);
//             spA0 = (func_150ADA68() * *(void *)0x800A23FC) + *(void *)0x800A2400;
//             func_1515C2F0(&spCC, 0, &sp90, 0, (?32) arg0->unkC, (?32) arg0->unk1);
//             temp_f20_2 = phi_f20 - 1.0f;
//             phi_f20 = temp_f20_2;
//             if (temp_f20_2 > 1.0f) {
//                 goto loop_3;
//             }
//         }
//     }
// }

void func_15105BC8(struct204 *arg0) {
    if ((arg0->unk34 & 1) != 0) {
        func_1508B20C(arg0->unk28->unk0, arg0->unk28->unk2, arg0->unk28->unk4, 500.0f);
    }
}

FileNode *func_15105C24(s32 arg0) {
    u8 i;
    u8 j;
    FileNode *p;

    for (i = 0; i < 2; i++) {
        j = 0;
inner:
        p = D_800DCE50[j][(&D_800A5770)[i]];
        if (p != NULL) {
list:
            if ((p->unk13 == 0x2E) && (arg0 == p->unk28)) {
                return p;
            }
            p = p->unk8;
            if (p != NULL) {
                goto list;
            }
        }
        j++;
        if (j < 2) {
            goto inner;
        }
    }
    return NULL;
}
