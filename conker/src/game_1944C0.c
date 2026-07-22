#include <ultra64.h>

#include "functions.h"
#include "variables.h"

extern u8 D_800D2DAB;
extern void (*D_8008CA20[])();

void func_15168B10(s32 arg0, s32 arg1);
void func_15169070(s32 arg0, s32 arg1, s32 arg2, u8 arg3);

// Local struct: structs.h's struct102/struct114 do not cover all of the fields
// (0x4/0x8 links, 0xC, 0x3F) touched by the functions below.
typedef struct Obj {
    u8  unk0;
    u8  unk1;
    u8  pad2[2];
    struct Obj *unk4;
    struct Obj *unk8;
    u8  unkC;
    u8  padD[7];
    s32 unk14;
    u8  pad18[0x20];
    s16 unk38;
    u8  pad3A;
    u8  unk3B;
    u8  pad3C[3];
    u8  unk3F;
} Obj;

typedef struct {
    void *unk0;
    u8  unk4;
} ObjRef;

// 8-byte display-list command entry (byte0 = opcode, byte3 flag, word4 payload)
typedef struct {
    s8  cmd;
    u8  pad1[2];
    u8  unk3;
    s32 unk4;
} GfxCmd;

typedef struct {
    u8  pad0[4];
    u8  unk4;   // frame count
} AnimSrc;

typedef struct {
    u8       pad0[0x10];
    AnimSrc *unk10;
    s16      unk14;
    s16      unk16;
    u8       pad18[0xA];
    s8       unk22;
    u8       unk23;
    u8       unk24;
} AnimObj;

extern Obj *D_800DCE50[2][104];

void func_15168A4C(Obj *arg0, s32 arg1);

// structs.h types D_8008B4A8's entries with a struct102* parameter; these two
// slots are actually called with no arguments.
typedef struct {
    void (*unk0)(void);
    u8  pad0[0x14];
    void (*unk18)(void);
    u8  pad1[0x18];
} Handler;

#define HANDLERS ((Handler *)D_8008B4A8)

// struct115 (D_8008B4A8 entries) really has two consecutive Obj* handlers at
// 0x0/0x4; the header only declares 0x0 and 0x18.
typedef struct {
    void (*unk0)(Obj *arg0);
    void (*unk4)(Obj *arg0);
    u8  pad[0x2C];
} Handler2;

extern void (*D_8008CB64[3])(void);
// D_8008CB70 is &D_8008CB64[3]; referenced by name so the relocation matches.
extern void (*D_8008CB70[])(void);


#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_15167010.s")
// NON-MATCHING: best score 280. Every loop-body instruction matches byte-for-byte.
// The target strength-reduces an induction index `i` into the pointer compare
// (`sltu it,end` with `end = it + 0x1484` derived from s0) but KEEPS i's saved
// register s1 reserved-yet-unused (frame 0x28, saves s0/s1/s2). By hand IDO either
// keeps i as a live counter (for-loop w/ it++,i++ -> matches frame+savedregs but no
// reduction, score 840) OR fully strength-reduces AND eliminates i (HANDLERS[i]
// access -> end in s1, `!=` compare, no phantom, score 700; do-while it<end -> sltu
// but end absolute in s1, score 400). -g3 here eliminates dead vars, so the
// saved-but-dead s1 can't be forced by hand. PERMUTER CANDIDATE.
// void func_15167010(void) {
//     Handler *it;
//     Handler *end;
//     it = HANDLERS;
//     end = (Handler *)((s32)it + 0x1484);
//     for (;;) {
//         if (it->unk18 != NULL) { it->unk18(); }
//         it++;
//         if (it >= end) { break; }
//     }
// }

void func_1516706C(void) {
    void (**it)(void);
    void (**end)(void);

    for (it = D_8008CB64, end = D_8008CB70;;) {
        if (*it != NULL) {
            (*it)();
        }
        it++;
        if (it == end) {
            break;
        }
    }
}
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_151670C0.s")
// NON-MATCHING: best score 25. Byte-identical ops; only a v0<->t9 rename on the
// loop-carried handler pointer `fn` (cascades to the D_800DD190-- temp t9<->t0).
// Permuter running. Reconstruction (twin of func_151671E8, uses h->unk0):
// void func_151670C0(void) {
//     s32 col, i; Handler2 *h; Obj *obj, **sp; void (*fn)(Obj *);
//     for (col = 0; col != 2; col++) {
//         h = (Handler2 *)D_8008B4A8;
//         for (i = 0; i != 0x65; i++) {
//             if (h->unk0 != NULL) {
//                 obj = D_800DCE50[col][i];
//                 D_800DD190++;
//                 if (obj != NULL) {
//                     sp = &((Obj **)D_800DD198)[D_800DD190];
//                     do {
//                         fn = h->unk0; *sp = obj->unk8; fn(obj);
//                         sp = &((Obj **)D_800DD198)[D_800DD190]; obj = *sp;
//                     } while (obj != NULL);
//                 }
//                 D_800DD190--;
//             }
//             h++;
//         }
//     }
// }
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_151671E8.s")
// NON-MATCHING: best score 25. Twin of func_151670C0 but uses h->unk4. Same
// v0<->t9 rename on the loop-carried handler pointer. Apply permuter fix from
// func_151670C0 (swap h->unk0 for h->unk4).
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_15167310.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_151674F8.s")
Obj *func_15167A68(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4, u8 arg5) {
    Obj *obj;

    obj = (Obj *)func_10003C6C(arg2, 1, arg3, 0, arg5);
    if (obj != NULL) {
        obj->unk1 = arg1;
        func_15168A4C(obj, arg0);
        obj->unkC = arg4;
    }
    return obj;
}
void func_15167AD8(s32 arg0, u8 arg1, s32 arg2) {
    void *obj;

    obj = func_15167A68(3, arg2, 0x28, 0, arg1, 1);
    if (obj != NULL) {
        bcopy((void *)arg0, (u8 *)obj + 0x10, 0x18);
        *((u8 *)obj + 0x23) = 0xFF;
    }
}
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_15167B44.s")
// NON-MATCHING: best score 40. Every instruction/op/branch matches byte-for-byte;
// only a1<->a2 are swapped in the ctrl<0 block (target holds unk14/pos in a2 and
// -ctrl in a1; this build does the reverse). Pure arg-register tie-break.
// void func_15167B44(AnimObj *arg0) {  // fields 0x10 ptr, 0x14/0x16 s16, 0x22 s8, 0x23/0x24 u8
//     s8 ctrl;
//     if (arg0->unk24 != 0) { D_8008CA20[arg0->unk24](); }
//     ctrl = arg0->unk22;
//     if (ctrl > 0) {
//         if (ctrl < arg0->unk23) { arg0->unk23 = arg0->unk23 - ctrl; }
//         else { arg0->unk14 = arg0->unk10->unk4 << 8; }
//     } else if (ctrl < 0) {
//         if (arg0->unk14 / 256 >= arg0->unk10->unk4 - 1) {
//             if (-ctrl < arg0->unk23) {
//                 arg0->unk23 = arg0->unk23 - (-ctrl);
//                 arg0->unk14 = arg0->unk14 - arg0->unk16;
//             }
//         }
//     }
//     arg0->unk14 = arg0->unk14 + arg0->unk16;
//     if (arg0->unk14 / 256 >= arg0->unk10->unk4) { func_1516972C((struct102 *)arg0); }
// }
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_15167C58.s")
// NON-MATCHING: best score 540. EVERY instruction, operand, branch and delay slot
// matches byte-for-byte. The only differences are (1) a uniform temp-register
// rotation: the target's temp allocation starts at t7 (flag=1 -> t7), this build
// starts at t6, so all ~10 temps are shifted by +1; and (2) -g3 reserves stack
// slots for extra named locals in the original, giving the frame gaps
// idx@0x48 / flag@0x50 / vtx@0x5C (0x70 frame) that this packed build can only
// approximate. Both are allocation-seed artifacts -> PERMUTER CANDIDATE.
// Callee sigs used: func_15142E24 takes 11 args (gdl,unk10,unk14<<8,2,0x100,0x100,
// unk10->unk0[unk14>>8],5,&vtx,&flag,3) -> Gfx*; func_15142FBC(gdl,0x2C00,
// (A[idx].unk4|A[idx].unk0)|4,&flag); func_15095760(gdl,&vtx). A = D_800A4AC8
// (array of {s32 unk0; s32 unk4;}). idx = (obj->unk22==0xFF)?9:3 via if/else-if.
// void func_15167C58(Gfx *gdl, DrawObj *obj, s32 arg2 /*homed, unused*/) {
//     Vtx2 vtx; s32 flag; s32 idx;
//     flag = 1;
//     gdl = func_15142E24(gdl, obj->unk10, obj->unk14 << 8, 2, 0x100, 0x100,
//                         obj->unk10->unk0[obj->unk14 >> 8], 5, &vtx, &flag, 3);
//     vtx.unk0 = obj->unk18; vtx.unk2 = obj->unk1A; vtx.unk4 = obj->unk1C;
//     vtx.unk6 = obj->unk1E; vtx.unk8 = obj->unk20; vtx.unkD = 0;
//     vtx.unkA = obj->unk23;
//     if (obj->unk22 != 0xFF) { idx = 3; } else if (obj->unk22 == 0xFF) { idx = 9; }
//     gdl = func_15142FBC(gdl, 0x2C00,
//                         (D_800A4AC8[idx].unk4 | D_800A4AC8[idx].unk0) | 4, (u8*)&flag);
//     func_15095760(gdl, &vtx);
// }
// DrawObj: 0x10 FooSrc*{u32* unk0}; 0x14 s16 unk14; 0x18/1A/1C/1E/20 s16;
//          0x22 s8 unk22; 0x23 u8 unk23.  Vtx2: s16[5] @0,u8 @A, u8 @D (14 bytes).
void *func_15167D84(s32 arg0, s32 arg1, s32 arg2, s8 arg3, u8 arg4, s32 arg5) {
    void *obj;

    obj = func_15167A68((arg1 == 0) ? 5 : 0x42, arg5, arg2 + 0x50, 0, arg4, 1);
    if (obj == NULL) {
        return obj;
    }
    bcopy((void *)arg0, (u8 *)obj + 0x10, 0x38);
    *((s8 *)obj + 0x48) = arg3;
    return obj;
}
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_15167E0C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_15168118.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_1516865C.s")
// NON-MATCHING: best score 425. Leaf function; EVERY instruction, operand,
// branch and delay slot matches byte-for-byte (loop body + entire tail are
// exact). The whole remaining diff is a single register-coloring tie-break: the
// target pairs the two "swap" pairs va/vb -> v0/v1 and tc/td -> t1/t2, but this
// build allocates tc=v1 and vb=t1 (a clean t1<->v1 swap). That one decision
// cascades: because vb lands in a temp instead of v1, its scaled-value +0x100
// is done in-place (one scheduling flip), and the branch recompute blocks rotate
// t6..t9 by one. IDO makes the pairing by swap-pair foresight; no C form forces
// it (tested: operand/decl reorder, split vs inline scale, flags u16->s32,
// entry/tc ordering -> 1465/795/705/570/515/445/425, 425 is the hand floor).
// PERMUTER CANDIDATE. The reconstruction below is algorithmically exact.
// typedef struct { u8 pad0[6]; s16 f6; s16 f8; s16 fA; u8 fC,fD,fE,fF; } Slot865;
// typedef struct { Slot865 slots[8]; u8 pad80[8]; s16 unk88; u8 pad8A[0xE];
//                  u16 unk98; u8 pad9A[2]; s16 unk9C; s16 unk9E; u8 unkA0; } Obj865;
// typedef struct { u8 pad0[6]; u16 unk6; u16 unk8; } Tune865;
// extern Tune865 *D_8008CA4C[];
// void func_1516865C(Obj865 *arg0, u8 arg1, u8 arg2, u8 arg3, u8 arg4) {
//     Tune865 *entry; Slot865 *p; s32 i, va, tc, vb, td, flags; s16 tmp;
//     va = 0x2000; tc = 0x2000;
//     entry = D_8008CA4C[arg0->unkA0];
//     vb = ((entry->unk8 + 0x100) << 21) >> 16;
//     td = ((entry->unk6 + 0x100) << 21) >> 16;
//     i = 0; p = &arg0->slots[0];
//     for (; i < 2; i++) {
//         p += 4;
//         p[-3].f6=0; p[-3].fC=arg1; p[-3].fD=arg2; p[-3].fE=arg3; p[-3].fF=arg4;
//         p[-2].f6=0; p[-2].fC=arg1; p[-2].fD=arg2; p[-2].fE=arg3; p[-2].fF=arg4;
//         p[-1].f6=0; p[-1].fC=arg1; p[-1].fD=arg2; p[-1].fE=arg3; p[-1].fF=arg4;
//         p[-4].f6=0; p[-4].fC=arg1; p[-4].fD=arg2; p[-4].fE=arg3; p[-4].fF=arg4;
//     }
//     flags = arg0->unk98;
//     if (flags & 0x80) { va = ((D_8008CA4C[arg0->unkA0]->unk8+0x100)<<21)>>16; vb = 0x2000; }
//     if (flags & 0x100) { td = 0x2000; tc = ((D_8008CA4C[arg0->unkA0]->unk6+0x100)<<21)>>16; }
//     arg0->slots[6].f8 = tc;
//     tmp = arg0->slots[6].f8;
//     arg0->slots[7].fA = va; arg0->slots[7].f8 = td;
//     arg0->slots[2].f8 = tmp; arg0->slots[5].f8 = tmp; arg0->slots[1].f8 = tmp;
//     tmp = arg0->slots[7].fA;
//     arg0->slots[5].fA = vb; arg0->unk88 = 0;
//     arg0->slots[3].fA = tmp; arg0->slots[6].fA = tmp; arg0->slots[2].fA = tmp;
//     tmp = arg0->slots[7].f8; arg0->unk9C = 0; arg0->unk9E = 0;
//     arg0->slots[3].f8 = tmp; arg0->slots[4].f8 = tmp; arg0->slots[0].f8 = tmp;
//     tmp = arg0->slots[5].fA;
//     arg0->slots[1].fA = tmp; arg0->slots[4].fA = tmp; arg0->slots[0].fA = tmp;
// }
void *func_15168800(s32 arg0, u8 arg1, s32 arg2) {
    void *obj;

    obj = func_15167A68(0xE, arg2, 0xB8, 1, arg1, 1);
    if (obj == NULL) {
        return NULL;
    }
    bcopy((void *)arg0, (u8 *)obj + 0x10, 0xA8);
    return obj;
}
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_15168870.s")
// permuter NO ZERO, best 65 (hand). Permuter improved to real pscore 75 via a dead
// `product=` pre-assignment but hard-plateaued there across ~30k iterations; the
// coupled a2/a3 + t0/t9 register swap cannot be forced from C.
// NON-MATCHING: best score 65. EVERY instruction, operand order, branch and
// delay slot match byte-for-byte; the only differences are a coupled temp-
// register coloring tie-break: the target keeps `delta`(unk9A) in a2 and the
// multiply result in t1, and puts the D_800BE9E4 base in t0 / the unk98 reload
// in t9; this build swaps them (delta->a3, product->a2, D_800BE9E4->t9,
// unk98->t0). Non-overlapping ranges, so no C form forces it (tested: operand
// swap, product hoist/placement, frame local, unk98 preload, decl reorder ->
// 260/220/135/75/255; the form below is the hand floor at 65). PERMUTER CANDIDATE.
// Uses a file-local view of the 0x32C object (header struct127 types at
// pad98/unkA8/unkB2 disagree). D_8008CA4C[] = anim sources (0x4 = frame count);
// D_8008C9C8[] = per-object callbacks.
// typedef struct { u8 pad0[0x98]; s16 unk98; s16 unk9A; u8 pad9C[0xC];
//                  u16 unkA8; u8 padAA[6]; u8 unkB0; u8 padB1; s8 unkB2; } CtrObj;
// typedef struct { u8 pad0[4]; u8 unk4; } CtrSrc;
// extern CtrSrc *D_8008CA4C[]; extern void (*D_8008C9C8[])(CtrObj *arg0);
// void func_15168870(CtrObj *arg0) {
//     s32 v0, v1; void (*func)(CtrObj *); s16 delta;
//     delta = arg0->unk9A;
//     if (delta != 0) {
//         s32 product;
//         v1 = (D_8008CA4C[arg0->unkB0]->unk4 << 8) - 1;
//         product = delta * D_800BE9E4;
//         arg0->unk98 = arg0->unk98 + product;
//         v0 = arg0->unk98;
//         if (v0 > v1) {
//             if (arg0->unkA8 & 0x40) { arg0->unk98 = v1 - (v0 % v1); arg0->unk9A = -delta; }
//             else if (arg0->unkA8 & 0x4) { arg0->unk98 = -1; }
//             else { do { arg0->unk98 = v0 - v1; v0 = arg0->unk98; } while (v0 > v1); }
//         } else if (v0 < 0) {
//             if (arg0->unkA8 & 0x40) { arg0->unk98 = (-v0) % v1; arg0->unk9A = -delta; }
//             else if (arg0->unkA8 & 0x4) { arg0->unk98 = -1; }
//             else { do { arg0->unk98 = v0 + v1; v0 = arg0->unk98; } while (v0 < 0); }
//         }
//     }
//     v0 = arg0->unkB2;
//     if (v0 != -1) { func = D_8008C9C8[v0]; if (func != NULL) { func(arg0); } }
//     if (arg0->unk98 == -1) { func_1516972C((struct102 *)arg0); }
// }
void func_15168A2C(s32 arg0) {
    func_15168B10(arg0, 0);
}
void func_15168A4C(Obj *arg0, s32 arg1) {
    s32 type;
    Obj **head;

    type = arg0->unk1;
    head = &D_800DCE50[type][arg1];
    arg0->unk8 = *head;
    if (arg0->unk8 != NULL) {
        arg0->unk8->unk4 = arg0;
    }
    arg0->unk0 = arg1;
    arg0->unk4 = NULL;
    *head = arg0;
}
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_15168A9C.s")
// NON-MATCHING: best score 395. Every instruction/op is byte-identical; only a
// register-allocation shuffle - the target keeps the two indices + the reused
// next/prev chain in v0/v1 (so `prev` lands in v0 and the return is free),
// while this build spreads them across t6/t8 and returns prev via `move v0,v1`.
// Permuter candidate. Reconstruction:
// Obj *func_15168A9C(Obj *arg0) {
//     Obj **head; Obj *next, *prev;
//     head = &D_800DCE50[arg0->unk1][arg0->unk0];
//     if (arg0 == *head) { *head = arg0->unk8; }
//     next = arg0->unk8;
//     if (next != NULL) { next->unk4 = arg0->unk4; }
//     prev = arg0->unk4;
//     if (prev != NULL) { prev->unk8 = arg0->unk8; }
//     return prev;
// }


void func_15168B10(s32 arg0, s32 arg1) {
    func_15168A9C(arg0);
    func_15168A4C(arg0, arg1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_15168B44.s")
// NON-MATCHING: best score 155. Instruction sequence, operand order, branch
// shape and delay slots all match; only temp-register naming in the first
// branch differs (this build puts the `unk14 & 0xFFFF` CSE in a1, target t6),
// plus the li 0x1e / lui 0xffff constants are materialized in swapped order.
// Permuter candidate. Reconstruction:
// void func_15168B44(Obj *arg0) {
//     s32 v;
//     v = (arg0->unk14 & 0xFFFF) - 1;
//     if ((arg0->unk14 & 0xFFFF) != 0) {
//         arg0->unk14 &= 0xFFFF0000; arg0->unk38 = 0x1E;
//         arg0->unk14 |= v & 0xFFFF; return;
//     }
//     v = arg0->unk14 >> 16;
//     if ((u16)v < arg0->unk3F) {
//         arg0->unk3F = arg0->unk3F - (u16)v; arg0->unk38 = 0x1E; return;
//     }
//     arg0->unk38 = 0;
// }

void func_15168BAC(u8 *arg0) {
    if (arg0[0xE4] != 0) {
        D_8008CA20[arg0[0xE4]]();
    }
}
void func_15168BE4(s32 *arg0, u8 arg1, s32 arg2) {
    void *obj;

    if (arg0[0x10] != 0) {
        obj = func_15167A68(0x10, arg2, 0xF0, 1, arg1, 1);
        if (obj != NULL) {
            bcopy((void *)arg0, (u8 *)obj + 0x90, 0x60);
        }
    }
}
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_15168C4C.s")
void func_15168E34(s32 *arg0, s32 arg1) {
    if ((*arg0 & 0xF000000) == 0) {
        *arg0 += arg1;
    }
}
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_15168E54.s")
// NON-MATCHING: best score 625. Same issue as its twin func_15168F08 - identical
// instruction count/ops, only a CSE'd `move v1,v0` where the target reloads with
// a fresh `lb v0,0(s1)`, cascading into a v0/v1/a2 rename. Permuter candidate.
// void func_15168E54(GfxCmd *arg0, s32 arg1) {
//     s32 i; GfxCmd *entry; s32 cmd;
//     i = 0; entry = arg0;
//     if (arg0->cmd != -0x21) {
//         cmd = entry->cmd;
//         do {
//             if (cmd == 1 || (cmd == -0x24 && entry->unk3 == 0xE)) {
//                 func_15168E34(&entry->unk4, arg1);
//             }
//             i++;
//             entry = arg0 + i;
//             cmd = entry->cmd;
//         } while (cmd != -0x21);
//     }
// }
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_15168F08.s")
// NON-MATCHING: best score 335. Instruction COUNT and every op match; the only
// difference is IDO CSEs the loop-cmd init (`move a1,a2`) with the guard load,
// where the target keeps them as two separate `lb`s - which cascades into a
// v0/a1/a2 register rename. Cannot be defeated from C (IDO CSEs arg0->cmd and
// entry->cmd regardless). Permuter candidate (reload mutation).
// void func_15168F08(GfxCmd *arg0, s32 arg1) {
//     s32 i; GfxCmd *entry; s32 cmd;
//     i = 0; entry = arg0;
//     if (arg0->cmd != -0x21) {
//         cmd = entry->cmd;
//         do {
//             i++;
//             if (cmd == 1 || (cmd == -0x24 && entry->unk3 == 0xE)) {
//                 entry->unk4 = entry->unk4 & 0xFFFFFF;
//                 entry->unk4 = entry->unk4 + arg1;
//             }
//             entry = arg0 + i;
//             cmd = entry->cmd;
//         } while (cmd != -0x21);
//     }
// }
void func_15168F84(s32 arg0, s32 *arg1, s32 *arg2) {
    if (arg0 == 0) {
        *arg1 = 1;
        *arg2 = 0x41;
    } else if (arg0 == 1) {
        *arg1 = 0x42;
        *arg2 = 0x4F;
    } else if (arg0 == 2) {
        *arg1 = 0x50;
        *arg2 = 0x58;
    } else if (arg0 == 3) {
        *arg1 = 0x59;
        *arg2 = 0x5C;
    } else if (arg0 == 5) {
        *arg1 = 0x61;
        *arg2 = 0x63;
    } else if (arg0 == 6) {
        *arg1 = 0x64;
        *arg2 = 0x65;
    } else {
        *arg1 = 0x5D;
        *arg2 = 0x60;
    }
}
void func_15169040(s32 arg0, u8 arg1) {
    func_15169070(0, 0x68, arg0, arg1);
}
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_15169070.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_15169260.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_1516944C.s")
void func_151695F0(Obj *arg0, u8 arg1) {
    ObjRef sp18;

    sp18.unk0 = arg0;
    sp18.unk4 = arg0->unk3B;
    func_15169040((s32)&sp18, arg1);
}

void func_1516962C(s32 arg0, Obj *arg1, u8 arg2) {
    ObjRef sp18;

    sp18.unk0 = arg1;
    sp18.unk4 = arg1->unk3B;
    func_1516944C(arg0, (s32)&sp18, arg2);
}
s32 func_15169668(s32 arg0, u8 arg1, u8 arg2, u8 arg3) {
    D_800D2DAB = 1;
    return arg0;
}
void func_1516968C(Obj *arg0, Obj *arg1, u8 arg2) {
    if ((arg2 == 0xF) || (arg2 == 0x10)) {
        if (arg0->unkC == arg1->unk0) {
            func_1516972C((struct102 *)arg0);
        }
    }
}

void func_151696DC(Obj *arg0) {
    s8 i;

    for (i = 0; i < D_800DD190; i++) {
        if (((Obj **)D_800DD198)[i] == arg0) {
            ((Obj **)D_800DD198)[i] = arg0->unk8;
        }
    }
}

void func_1516972C(struct102 *arg0) {
    void (*func)(struct102 *arg0);
    func_151696DC((Obj *)arg0);

    if (arg0->unk0 >= 2) {
        func = D_8008B4D0[arg0->unk0].unk0;
        if (func != NULL) {
            func(arg0);
            return;
        }
        func_15169804(arg0);
    }
}

void func_1516979C(struct102 *arg0) {
    void (*func)(struct102 *arg0);

    func_151696DC((Obj *)arg0);
    func = D_8008B4D4[arg0->unk0].unk0;
    if (func != NULL) {
        func(arg0);
        return;
    }
    func_15169824(arg0);
}

void func_15169804(struct102 *arg0) {
    func_15168B10(arg0, 1);
}

void func_15169824(struct102 *arg0) {
    func_15168A9C(arg0);
    func_10004074(arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_15169850.s")
// NON-MATCHING: best score 30. Structure/ops/branches all byte-identical; only
// a v0<->v1 rename in the arg1==0x2D branch (target loads *arg0 into v1 and
// *arg2 into v0; this build does the reverse). Pure allocator artifact - IDO
// fixes the register regardless of operand order (verified swap = still 30).
// Permuter candidate.
// void func_15169850(s32 arg0, u8 arg1, s32 arg2, s32 arg3, s32 arg4) {
//     struct12 *p = (struct12 *)arg0;
//     s32 *q = (s32 *)arg2;
//     u8 *r = (u8 *)arg3;
//     if (arg1 == 0) {
//         if ((p->unk0 == *q) || (((u8 *)arg0)[4] == *r)) {
//             func_1516972C((struct102 *)arg4);
//         }
//     } else if (arg1 == 0x2D) {
//         if (p->unk0 == *q) {
//             *q = p->unk4; *r = p->unk9;
//         } else if (p->unk4 == *q) {
//             *q = p->unk0; *r = p->unk8;
//         }
//     }
// }
