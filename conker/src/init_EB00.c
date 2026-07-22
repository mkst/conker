#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_1000EB00(struct04 *arg0, s32 arg1, s32 *arg2, s32 *arg3, s32 arg6, s32 arg7, u16 *arg8) {
    if (arg0->unk24 != 0) {
        arg0->unk24 = 0;
    }
    *arg3 = 64;
    if (D_800CC37D || (*arg2 == 0)) {
        *arg2 = 0;
        *arg8 = 0;
        return 0;
    }
    arg0->unk18 -= D_800BE9E4;
    if (arg0->unk18 > 0) {
        *arg2 = 0;
        *arg8 = 0;
    } else {
        arg0->unk18 = (func_150ADA20() & 0x7F) + 0x80;
        arg0->unk0 = (func_150ADA20() % 3U) + 0x6C;
    }
    return 0;
}

s32 func_1000EBC4(struct00 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0 = arg0->unkC;
    s32 temp_v1 = arg0->unk18;
    temp_v1 -= D_800BE9E4;

    if (temp_v1 <= 0) {
        temp_v0 = temp_v0 - D_800BE9E4 * 1000;
        if (temp_v0 < 0) {
            return 1;
        }
        arg0->unkC = temp_v0;
    }
    arg0->unk18 = temp_v1;
    return 0;
}

s32 func_1000EC24(struct251 *arg0, s32 arg1, s32 *arg2, struct11 *arg3, struct04 *arg4, s32 *arg5, u16 *arg6) {
    s16 temp_v1 = arg0->unk18.h[1];

    if (*arg6 != 0) {
        arg0->unk1C = *arg6;
        arg0->unk0 = 0;
        *arg6 = 0;
    }

    temp_v1 -= D_800BE9E4;

    if (temp_v1 <= 0) {
        if (*arg2 != 0) {
            func_10010F30(arg0->unk1C, *arg2, arg3->unk3, arg4->unk2, *arg5);
        }
        return 1;
    }
    arg0->unk18.w = temp_v1;
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/init_EB00/func_1000ECCC.s")
// NON-MATCHING: best 93 (permuter reached 55). Logic byte-correct; remaining diff
// is arg6 pointer landing in a3 (mine) vs a2 (target) -> arg-home store order. Permuter running.
// typedef struct { s16 unk0; u8 pad2[6]; u16 unk8; s16 unkA; s32 unkC; u8 p10[8]; s32 unk18; s32 unk1C; } ECCCStruct;
// s32 func_1000ECCC(ECCCStruct *arg0, s32 arg1, s32 *arg2, struct11 *arg3, struct04 *arg4, s32 *arg5, u16 *arg6) {
//     s16 temp_a1; s32 temp_v1; u16 temp_v0;
//     temp_v1 = arg0->unk18; temp_v0 = *arg6; temp_a1 = temp_v1;
//     if (temp_v0 != 0) {
//         arg0->unk18 = (temp_v0 << 0x10) | (temp_v1 & 0xFFFF);
//         arg0->unk0 = 0; *arg6 = 0; temp_v1 = arg0->unk18; }
//     temp_a1 -= D_800BE9E4;
//     if (temp_a1 <= 0) {
//         *arg6 = temp_v1 >> 0x10; arg0->unk0 = temp_v1 >> 0x10;
//         if (func_10010894((struct127 *) arg0->unk1C) == 0) {
//             func_10010344(*arg6, arg0->unk1C, arg0->unkC, arg0->unkA, arg0->unk8); }
//         return 1; }
//     arg0->unk18 = (temp_v1 & 0xFFFF0000) | temp_a1;
//     return 0; }

#pragma GLOBAL_ASM("asm/nonmatchings/init_EB00/func_1000EDA0.s")
// BLOCKED BY HEADER: reconstruction is byte-shaped (sibling of matched func_1000EC24),
// but real signature is `s32 func_1000EDA0(struct* a0, s32,s32,s32,s32,s32, u16* arg6)`
// (7 params, arg6 at 0x40, s32 return). functions.h:956 wrongly declares it
// `void func_1000EDA0(void*,s32,s32,s32,void*)` (5 params/void) -> IDO redeclaration
// error. Needs header fix to match. Reconstruction:
// s32 func_1000EDA0(EDA0Struct *arg0, s32,s32,s32,s32,s32, u16 *arg6) {
//     s16 temp_a1; s32 temp_v1; u16 temp_v0;
//     temp_v1 = arg0->unk18; temp_v0 = *arg6; temp_a1 = temp_v1;
//     if (temp_v0 != 0) { arg0->unk18 = (temp_v0<<0x10)|(temp_v1&0xFFFF);
//         arg0->unk0 = 0; *arg6 = 0; temp_v1 = arg0->unk18; }
//     temp_a1 -= D_800BE9E4;
//     if (temp_a1 <= 0) { *arg6 = temp_v1>>0x10; arg0->unk0 = temp_v1>>0x10;
//         func_10010630(*arg6, arg0->unk1C, arg0->unkC, arg0->unkA, arg0->unk8); return 1; }
//     arg0->unk18 = (temp_v1 & 0xFFFF0000) | temp_a1; return 0; }

#pragma GLOBAL_ASM("asm/nonmatchings/init_EB00/func_1000EE70.s")
// NON-MATCHING: best 1650 but all ops match; only diff is the first two guards
// use branch-likely beqzl (li v0,1 in delay) vs my plain beqz+hoisted li.
// Permuter running. arg0 = { s16 unk2@2,unk4@4,unk6@6; struct127* unk18@18; s32 unk1C@1C; u16 unk24@24 }
// s32 func_1000EE70(void *arg0, s32, void *arg2, s32, s32, void *arg5) {
//     EE70Struct *p = arg0; struct127 *v1 = p->unk18;
//     if (v1 == NULL) return 1;
//     if (*(s32 *)arg2 == 0) return 1;
//     if ((v1->interaction_state != 0) && (v1->unique_id == (p->unk1C & 0xFF))) {
//         *(s32 *)arg5 = (((u32) v1->unk184 >> 3) & 0x30) << 1;
//         p->unk2 = v1->x_position; p->unk4 = v1->y_position; p->unk6 = v1->z_position;
//         return 0; }
//     if (func_1000F44C(p->unk24) != 0) return 1;
//     return 0; }

s32 func_1000EF40(struct57 *arg0, struct57 *arg1, s32 *arg2, s32 arg3, s32 arg4, s32 arg5, u16 *arg6) {
    if (arg0->unk10 & 0x80) {
        arg0->unk10 = (s32) (arg0->unk10 & -0x81);
    }
    if (*arg2 == 0) {
        if (arg0->unk24 != 0) {
            func_100111C8(arg0->unk24);
            arg0->unk24 = 0;
        }
        *arg6 = 0;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/init_EB00/func_1000EFB4.s")
void func_1000F1A8(void) {
    s32 i;

    D_80042760 = 0;
    D_80041FD9 = 1;
    D_80041FD8 = 0;
    bzero(D_800425E0, 0x180);
    for (i = 0; i < 16; i++) {
        D_800425E0[i].unk2 = i + 16;
    }
    D_80041F50 = 0;
    func_100176EC();
    D_80041F60 = D_80041F61 = 0;
}

void func_10017780(u8 arg0, u16 arg1);
s32* allocate_memory(s32, s32, s32, s32);
void func_1000F248(s32 arg0) {
    u16 tmp;

    func_1000F1A8();
    if (arg0 == 4) {
        D_80041F54 = 0;
        D_80041F58 = D_8002C3F8; // 0.009999999776482582
    } else {
        D_80041F54 = 23000;
        D_80041F58 = D_8002C3FC; // 0.10000000149011612
    }

    if (arg0 == 0x35) {
        D_80041FD9 = 0;
    } else if (arg0 == 0x36) {
        D_80041FD9 = 0;
    } else if (arg0 == 0x3C) {
        D_80041FD9 = 0;
        D_80041FD8 = 0x3C;
    } else if (arg0 == 0x27) {
        D_80041FD9 = 0;
        D_80041FD8 = 0x28;
    } else if ((arg0 == 0x3A) || (arg0 == 0x40)) {
        D_80041FD9 = 0;
        D_80041FD8 = 0x3C;
    }

    D_80041F5C = allocate_memory(1762, 1, 0, 0);

    bzero(D_80041F5C, 1762);

    if (arg0 == 0x31) {
        D_80041FDC = 14000;
    } else {
        D_80041FDC = 23000;
    }
    func_10011E88(arg0);
    D_80041F60 = D_80041F61 = 0;
    func_10017780(0, D_80041F56);
    func_10017780(1, D_80041F56);
    func_10017780(2, 23000);
    // fakematch
    if (arg0) {}
}

s32 func_1000F3D0(u16 arg0) {
    struct120 *temp_v1;

    temp_v1 = &D_800425E0[arg0 & 0xF];
    if (temp_v1->unk8 != 0) {
        if ((temp_v1->unk0 == arg0) || (arg0 == (arg0 & 0xF))) {
            if (func_100173C4(&temp_v1->unk8) != 0) {
                return 1;
            }
        }
    }
    return 0;
}

s32 func_1000F44C(u16 arg0) {
    u32 mask;
    struct120 *temp_a1;
    struct31 *temp_a2;

    mask = __osDisableInt();
    temp_a1 = &D_800425E0[arg0 & 0xF];
    temp_a2 = temp_a1->unk8;
    if ((temp_a2 != 0) && (temp_a1->unk0 == arg0) && ((temp_a2->unk53 & 2) != 0)) {
        __osRestoreInt(mask);
        return 1;
    }
    __osRestoreInt(mask);
    return 0;
}

extern struct120 D_800426A0[];
s32 func_1000F4D8(u16 arg0) {
    struct120 *p;

    arg0 &= 0x7FFF;
    p = D_800425E0; do {
        if (p->unk8 != 0) {
            if ((p->unk4 & 0x7FFF) == arg0) {
                if (func_100173C4(&p->unk8) != 0) {
                    return 1;
                }
            }
        }
        p++;
    } while (p != D_800426A0);
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/init_EB00/func_1000F568.s")
// NON-MATCHING (best 2100): PERMUTER CANDIDATE. Algorithm byte-correct and structure
// byte-ALIGNED (every instruction present and in order); the entire remaining score is a
// systematic register-coloring permutation (mine {val=a0,bit=a1,arg1=a2,arg0=t2} vs target
// {val=v0,bit=v1,arg1=a1,arg0=t1}) that cannot be forced from C. Divisor=arg1 gives divu on
// the first (unsigned) modulo but signed div in the loop, matching the target's break-guards.
// s32 func_1000F568(s32 arg0, s32 arg1) {
//     s32 bit; u8 *p; s32 val; s32 mask; s32 n; s32 newval; s32 b;
//     bit = func_150ADA20() % (u32) arg1;
//     if (arg0 >= 0x6E2) { return 1; }
//     if (arg1 < 2) { return arg0; }
//     p = (u8 *) D_80041F5C + arg0;
//     if (D_80041F5C != NULL) {
//         if (arg1 < 8) {
//             b = *p; val = b;
//             if (!((b & 0x80) && (b & (mask = (1 << arg1) - 1)))) { val = 0xFF; mask = (1 << arg1) - 1; }
//             if ((val & (1 << bit)) == 0) {
//                 n = bit + 1;
//                 do { bit = n % arg1; n = bit + 1; } while ((val & (1 << bit)) == 0); }
//             newval = val ^ (1 << bit); *p = newval;
//             if (((newval & 0xFF) & mask) == 0) { ((u8 *) D_80041F5C)[arg0] = val ^ mask; }
//         } else { *p = bit + 1; }
//     }
//     return arg0 + bit; }

#pragma GLOBAL_ASM("asm/nonmatchings/init_EB00/func_1000F6B8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/init_EB00/func_1000F85C.s")
// NON-MATCHING: even with the header fixed to (u16,s16,s32) this reaches only score 10
// (a register diff), not 0 — header fix alone insufficient. Left as pragma. Reconstruction:
// void func_1000F85C(u16 arg0, s16 arg1, s32 arg2){ if(arg0>=0x10 && func_1000F3D0(arg0)){
//   if(arg1==0x10){f32 f=alCents2Ratio(arg2);arg2=*(s32*)&f;} else if(arg1==0x11)arg1=0x10;
//   func_10017714((s32)D_800425E0[arg0&0xF].unk8,arg1,arg2);} }

void func_1000F91C(u16 arg0, u16 arg1, s16 arg2, u8 arg3, s32 arg4,
                   s16 arg5, s16 arg6, s16 arg7, s16 arg8, s16 arg9) {
    s32 sp2C;
    s32 tmp = func_1000F6B8(arg4, arg5, arg6, arg7, &sp2C, (s32) arg8, (s32) arg9);

    func_1000F85C(arg0, 8, (u32) (tmp * arg1) >> 0xF);
    func_1000F85C(arg0, 4, sp2C & 0x7F);
    func_1000F85C(arg0, 256, (sp2C & 0x80) | arg3);
    func_1000F85C(arg0, 16, arg2);
}

void func_1000F9D4(u16 arg0, s16 arg1, s16 arg2, s16 arg3) {
    u32 tmp;

    func_1000F6B8(-1, arg1, arg2, arg3, &tmp, 32760, 32765);
    func_1000F85C(arg0, 4, tmp & 0x7F);
    func_1000F85C(arg0, 256, tmp & 0x80);
}

#pragma GLOBAL_ASM("asm/nonmatchings/init_EB00/func_1000FA64.s")
#pragma GLOBAL_ASM("asm/nonmatchings/init_EB00/func_1000FC18.s")
// NON-MATCHING (best 260): loop body byte-perfect. Same base-vs-blez scheduling
// as func_1000FDF4 (target schedules move s1/s2 before blez, base after; mine
// base before) + downstream first-compare operand order (both resist permuter).
// typedef struct { u16 unk0; s16 unk2; s16 unk4; s16 unk6; u16 unk8; u8 p[6]; s32 unk10; u8 p2[0x10]; u16 unk24; u8 p3[0xA]; } FC18Elem;
// void func_1000FC18(u16 arg0, s16 arg1, s16 arg2, s16 arg3, u16 arg4) {
//     FC18Elem *p; s32 *new_var; s32 count; s32 i;
//     count = D_80042760; p = (FC18Elem *) D_80041FE0;
//     for (i = 0; i < count; i++, p++) {
//         if ((arg0 == p->unk0) && (arg1 == p->unk2) && (arg2 == p->unk4) &&
//             (arg3 == p->unk6) && (arg4 == (p->unk8 & 0x7FFF))) {
//             new_var = &D_80042760;
//             if (p->unk24 != 0) { func_100111C8(p->unk24); count = *new_var; }
//             p->unk10 |= 0x80; } } }
void func_1000FD38(s32 arg0, s32 arg1, s32 arg2) {
    struct15 *p;
    s32 *new_var;
    s32 count;
    s32 i;

    count = D_80042760;
    p = D_80041FE0;
    for (i = 0; i < count; i++, p++) {
        if ((arg0 == p->unk14) && (arg1 == p->unk18) && (arg2 == p->unk1C)) {
            new_var = &D_80042760;
            if (p->unk24 != 0) {
                func_100111C8(p->unk24);
                count = *new_var;
            }
            p->unk10 |= 0x80;
        }
    }
}
#pragma GLOBAL_ASM("asm/nonmatchings/init_EB00/func_1000FDF4.s")
// NON-MATCHING: best 280. Loop body byte-perfect; remaining diff is count in
// v0(target)/v1(mine) and base-setup vs moves scheduled around the blez guard.
// Permuter running. void func_1000FDF4(u16 arg0) {
//     struct15 *p; s32 *new_var; s32 count; s32 i; u16 temp;
//     count = D_80042760; p = D_80041FE0;
//     for (i = 0; i < count; i++, p++) {
//         temp = p->unk24;
//         if (temp == arg0) {
//             new_var = &D_80042760;
//             if (temp != 0) { func_100111C8(temp); count = *new_var; }
//             p->unk10 |= 0x80; } } }

s32 func_1000FE88(struct15 *arg0, s32 arg1, s32 *arg2) {
    if (arg1 < *arg2) {
        if (arg0[arg1].unk24 != 0) {
            func_100111C8(arg0[arg1].unk24);
        }
        arg0[arg1].unk10 |= 0x80;
        return 0;
    }
    return 1;
}

s32 func_1000FEF0(u16 arg0, void *arg1, s32 arg2) {
    u16 id;
    s32 i;

    if (!arg0) {
        return -1;
    }
    for (i = 0; i < D_80042760; i++) {
        if ((arg0 == (*(&D_80041FE0[i])).unk24) && ((s32) arg1 == D_80041FE0[i].unk18) &&
            (arg2 == D_80041FE0[i].unk1C) && ((D_80041FE0[i].unk10 & 0x80) == 0)) {
            return i;
        }
    }
    return -1;
}

s32 func_1000FF90(s32 arg0, s32 arg1, s32 arg2) {
    s32 i;

    for (i = 0; i < D_80042760; i++) {
        if ((arg0 == D_80041FE0[i].unk14) &&
            ((arg1 == D_80041FE0[i].unk18) || (arg1 == -1)) &&
            ((arg2 == D_80041FE0[i].unk1C) || ((u32) arg2 == 0xFFFFFFFFU)) &&
            ((D_80041FE0[i].unk10 & 0x80) == 0)) {
            return i;
        }
    }
    return -1;
}

void func_1001001C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    struct15 *p;
    s32 *new_var;
    s32 count;
    s32 i;

    count = D_80042760;
    p = D_80041FE0;
    for (i = 0; i < count; i++, p++) {
        if ((arg0 == p->unk14) && (arg1 == p->unk18) && (arg2 == p->unk1C)) {
            new_var = &D_80042760;
            *(f32 *)&p->unk2C = alCents2Ratio(arg4);
            p->unkC = arg3;
            count = *new_var;
        }
    }
}

void func_100100E0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 count;
    struct15 *p;

    p = D_80041FE0;
    count = D_80042760;
    if (count > 0) {
        p = D_80041FE0;
        do {
            if ((arg0 == p->unk14) && (arg1 == p->unk18) && (arg2 == p->unk1C)) {
                p->unk14 = arg3;
                p->unk18 = arg4;
                p->unk1C = arg5;
            }
            p++;
        } while (p < &D_80041FE0[count]);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/init_EB00/func_10010154.s")
#pragma GLOBAL_ASM("asm/nonmatchings/init_EB00/func_10010344.s")
s32 func_1000ECCC();
void func_10010558(u16 arg0, struct127 *arg1, s32 arg2, s16 arg3, u16 arg4, s32 arg5) {
    if (arg5 <= 0) {
        func_10010344(arg0, arg1, arg2, arg3, arg4);
    } else {
        func_1000FA64(arg0, arg1->x_position, arg1->y_position, arg1->z_position, arg2, arg4, arg3, func_1000ECCC, arg5, arg1, 0, 0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/init_EB00/func_10010630.s")
// NON-MATCHING: best 2084 (ops all match; target keeps arg2 in saved reg s1,
// mine spills to stack -> regalloc cascade). Permuter running.
// void func_10010630(u16 arg0, struct127 *arg1, s32 arg2, s16 arg3, u16 arg4) {
//     if (arg1->interaction_state != 0) {
//         if (arg1->camera != 0) {
//             func_10010F30(arg0, arg2 & 0xFFFF, 64, 0, (((u32) arg1->unk184 >> 3) & 0x30) * 2);
//         } else {
//             func_1000FA64(arg0, arg1->x_position, arg1->y_position, arg1->z_position, arg2, arg4, arg3, (void *) func_1000EE70, arg1, arg1->unique_id, 0, 0);
//         }
//     }
// }

void func_10010720(u16 arg0, struct127 *arg1, s32 arg2, s16 arg3, u16 arg4, s32 arg5) {
    if (arg5 <= 0) {
        func_10010630(arg0, arg1, arg2, arg3, arg4);
    } else {
        func_1000FA64(arg0, arg1->x_position, arg1->y_position, arg1->z_position, arg2, arg4, arg3, func_1000EDA0, arg5, arg1, 0, 0);
    }
}

s32 func_100107F8(struct127 *arg0) {
    if (arg0->interaction_state == 0) {
        return 0;
    } else {
        if (arg0->camera != 0) {
            if (arg0->unk8E != 0) {
                if (func_1000F3D0(arg0->unk8E) != 0) {
                    return 1;
                }
            }
        } else {
            if (func_1000FF90(func_1000EE70, arg0, arg0->unique_id | 0x10000) != -1) {
                return 1;
            }
        }
        arg0->unk8E = 0;
    }
    return 0;
}

s32 func_10010894(struct127 *arg0) {
    if (arg0->camera != 0) {
        if (arg0->unk8C != 0) {
            if (func_1000F3D0(arg0->unk8C) != 0) {
                return 1;
            }
        }
    } else {
        if (func_1000FF90(func_1000EE70, arg0, arg0->unique_id | 0x20000) != -1) {
            return 1;
        }
    }
    arg0->unk8C = 0;
    return 0;
}

void func_1001091C(struct127 *arg0, struct15 *arg1) {
    s32 temp_v0;

    if ((arg1 != NULL) && (arg0->interaction_state != 0)) {
        if (arg0->camera != 0) {
            if (arg0->unk8E != 0) {
                func_1000F85C(arg0->unk8E, 8, *(s32 *)&arg1);
            }
        } else {
            temp_v0 = func_1000FF90(func_1000EE70, arg0, arg0->unique_id | 0x10000);
            if (temp_v0 != -1) {
                D_80041FEC[temp_v0][0] = (s32) arg1;
            } else {
                arg0->unk8E = 0;
            }
        }
    }
}

void func_100109D0(struct127 *arg0) {
    if (arg0->camera) {
        if (arg0->unk8E) {
            func_100111C8(arg0->unk8E);
        }
    } else {
        func_1000FD38(func_1000EE70, arg0, arg0->unique_id | 0x10000);
    }
    arg0->unk8E = 0;
}

void func_10010A3C(struct127 *arg0) {
    if (arg0->camera) {
        if (arg0->unk8C) {
            func_100111C8(arg0->unk8C);
        }
    } else {
        func_1000FD38(func_1000EE70, arg0, arg0->unique_id | 0x20000);
    }
    arg0->unk8C = 0;
}

void func_10010AA8(struct127 *arg0) {
    s32 sp24;
    struct15 *tmp;

    if (arg0->camera != 0) {
        if (arg0->unk8C && func_1000F44C(arg0->unk8C)) {
            func_100111C8(arg0->unk8C);
        }
        if (arg0->unk8E && func_1000F44C(arg0->unk8E)) {
            func_100111C8(arg0->unk8E);
        }
    } else {
        sp24 = func_1000FEF0(arg0->unk8C, arg0, arg0->unique_id);
        if (sp24 != -1) {
            if (func_1000F44C(arg0->unk8C)) {
                func_100111C8(arg0->unk8C);
            }
            tmp = &D_80041FE0[sp24];
            tmp->unk10 |= 0x80;
        }
        sp24 = func_1000FEF0(arg0->unk8E, arg0, arg0->unique_id);
        if (sp24 != -1) {
            if (func_1000F44C(arg0->unk8E)) {
                func_100111C8(arg0->unk8E);
            }
            tmp = &D_80041FE0[sp24];
            tmp->unk10 |= 0x80;
        }
    }
    arg0->unk8C = 0;
    arg0->unk8E = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/init_EB00/func_10010BE8.s")

s32 func_10010E78(u16 arg0, s32 arg1, u16 arg2, s16 arg3, u8 arg4, s32 arg5, s16 arg6,
                  s16 arg7, s16 arg8, s16 arg9, s16 argA) {
    s32 sp2C;
    s32 tmp = func_1000F6B8(arg5, arg6, arg7, arg8, &sp2C, (s32) arg9, (s32) argA);

    tmp = (u32) (arg2 * tmp) >> 15;
    if (tmp != 0) {
        return func_10010BE8(arg0, arg1, tmp, sp2C & 0x7F, arg3, (sp2C & 0x80) | arg4, D_80041FD9);
    }
    return 0;
}

void func_10010F30(s32 arg0, u16 arg1, u8 arg2, s16 arg3, u8 arg4) {
    func_10010BE8(0, arg0, arg1, arg2, arg3, arg4, D_80041FD9);
}

void func_10010F88(s32 arg0, u16 arg1, s16 arg2, u8 arg3, s32 arg4, s16 arg5, s16 arg6,
                   s16 arg7, s16 arg8, s16 arg9) {
    func_10010E78(0, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
}
#pragma GLOBAL_ASM("asm/nonmatchings/init_EB00/func_10010FFC.s")

void func_100111C8(u16 arg0) {
    struct120 *tmp = &D_800425E0[arg0 & 0xF];

    if ((tmp->unk8 != 0) && (tmp->unk0 == arg0)) {
        tmp->unk0 = 0;
        tmp->unk4 = 0;
        func_10017594(tmp->unk8);
        tmp->unk8 = 0;
    }
}

void func_1001123C(u16 arg0) {
    struct120 *tmp = &D_800425E0[arg0 & 0xF];

    if ((tmp->unk8 != 0) && (tmp->unk0 == arg0)) {
        if (func_100112BC(arg0, 1) == 0) {
            func_10017594(tmp->unk8);
            tmp->unk8 = 0;
        }
    }
}

s32 func_100112BC(s32 arg0, s32 arg1) {
    struct49 *temp_a0;
    s32 temp_v1 = D_80041F50;

    if (temp_v1 < 16) {
        temp_a0 = &D_80041F10[temp_v1];
        temp_a0->unk0 = arg0;
        temp_a0->unk2 = arg1;
        temp_a0->unk3 = arg0 & 0xF;
        D_80041F50 = temp_v1 + 1;
        return 1;
    } else {
        return 0;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/init_EB00/func_10011310.s")

s32 func_1001147C(u16 arg0) {
    struct120 *tmp;

    if (arg0 != 0) {
        tmp = &D_800425E0[arg0 & 0xF];
        if (tmp->unk0 == arg0) {
            return tmp->unk4 & 0x7FFF;
        }
    }
    return -1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/init_EB00/func_100114D0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/init_EB00/func_10011624.s")
#pragma GLOBAL_ASM("asm/nonmatchings/init_EB00/func_10011BB8.s")

void func_10011E88(s32 arg0) {
}

void func_10011E94(s32 arg0) {
    if (arg0) {
        D_80041F61 = 1;
    } else {
        D_80041F61 = 0;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/init_EB00/func_10011EB8.s")
// NON-MATCHING (best 220): logic byte-correct with 3 params + 2D reinterp of
// D_8002C240 (stride 0x14, sub-stride 4; header wrongly says struct120). Remaining
// diffs are a dead `move a3,a0; move a0,a3` arg0 shuffle at entry (-g3 artifact) and
// the func_1000F568 branch-delay-slot filler (a0 vs a1). Reconstruction:
// typedef struct { u16 unk0; u16 unk2; } EB8Sub; typedef struct { EB8Sub sub[5]; } EB8Row;
// u16 func_10011EB8(s32 arg0, s16 *arg1, s32 arg2) {
//     EB8Row *base = (EB8Row *) D_8002C240; s32 temp_v0, temp_a0;
//     temp_v0 = func_1510F8CC(arg0);
//     if (arg1 != NULL) {
//         if (D_80082FA0 != 0) *arg1 = 0x7FFF / (D_80082FA0 + 1); else *arg1 = 0x7FFF; }
//     temp_a0 = base[temp_v0].sub[arg2].unk0;
//     if (base[temp_v0].sub[arg2].unk2 >= 2)
//         temp_a0 = func_1000F568(temp_v0, base[temp_v0].sub[arg2].unk2);
//     return temp_a0; }
