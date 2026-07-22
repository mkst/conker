#include <ultra64.h>

#include "functions.h"
#include "variables.h"

void func_1000DEC4(void);


struct151 *func_1000B1B0(s32 arg0) {
    s32 i;

    for(i = 0; i < 3; i++)
    {
        if ((D_800417B0[i] != 0) && (arg0 == D_800417B0[i]->unk4)) {
            return D_800417B0[i];
        }
    }

    return NULL;
}

#pragma GLOBAL_ASM("asm/nonmatchings/init_B1B0/func_1000B1FC.s")
// NON-MATCHING (asm-differ score 30, but every instruction is identical).
// The code below produces the exact 38 instructions of the target. The only
// difference is which symbol the two loop-end addresses relocate against:
// the .s says %hi/%lo(D_800417BC) while the compiler emits
// %hi(D_800417B0)/%lo(D_800417B0+0xc). Both resolve to 0x800417BC, so the
// linked ROM bytes are identical; only the .o relocation entries differ.
// Writing the loops as pointer walks against &D_800417BC does emit the right
// symbol, but IDO then unrolls them 4x (152 -> 352 bytes) because the trip
// count is no longer a compile-time constant.
//
// struct151 *func_1000B1FC(s32 arg0) {
//     struct151 *temp;
//     s32 i;
//
//     for (i = 0; i < 3; i++) {
//         if ((D_800417B0[i] != NULL) && (D_800417B0[i]->unk4 == arg0)) {
//             return D_800417B0[i];
//         }
//     }
//
//     for (i = 0; i < 3; i++) {
//         if (D_800417B0[i] != NULL) {
//             temp = (struct151 *) D_800417B0[i]->unk60;
//             if ((temp != NULL) && (temp->unk4 == arg0)) {
//                 return temp;
//             }
//         }
//     }
//
//     return NULL;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/init_B1B0/func_1000B294.s")
// NON-MATCHING (asm-differ score 10, but every instruction is identical).
// Same situation as func_1000B1FC: the code below emits all 24 target
// instructions; only the loop-end relocation differs (.s uses D_800417BC,
// the compiler uses D_800417B0+0xc - same address, identical linked bytes).
//
// void func_1000B294(s32 *arg0) {
//     struct151 *temp;
//     s32 i;
//
//     for (i = 0; i < 3; i++) {
//         if (D_800417B0[i] != NULL) {
//             if (arg0 == D_800417B0[i]->unk10) {
//                 D_800417B0[i]->unk10 = (s32 *) D_800417B0[i];
//             }
//             temp = (struct151 *) D_800417B0[i]->unk60;
//             if ((temp != NULL) && (arg0 == temp->unk10)) {
//                 temp->unk10 = (s32 *) temp;
//             }
//         }
//     }
// }

struct137 *func_1000B2F4(s32 arg0) {
    s32 i;

    for (i = 0; i < 12; i++)
    {
        if (D_800419A8[i].unk4 == -1) {

            bzero(&D_800419A8[i], 100);

            D_800419A8[i].unk0 = -1;

            if (arg0 < 150) {
                D_800419A8[i].unk2C = D_8002B074[arg0].unk0; // (s32)(u16)
            } else {
                D_800419A8[i].unk2C = 26000;
            }
            D_800419A8[i].unk30 = D_800419A8[i].unk2C;
            D_800419A8[i].unk4E = D_800419A8[i].unk4C = D_800419A8[i].unk52 = D_800419A8[i].unk54 = D_800419A8[i].unk58 = D_800419A8[i].unk5A = 32768;
            D_800419A8[i].unk4 = arg0;
            D_800419A8[i].unk8 = &D_8002B9D4;
            D_800419A8[i].unkC = &D_8002B9F4;
            D_800419A8[i].unk10 = &D_800419A8[i];
            return &D_800419A8[i];
        }
    }
    return NULL;
}

#pragma GLOBAL_ASM("asm/nonmatchings/init_B1B0/func_1000B3D4.s")

s32 func_1000B548(s32 *arg0) {
    s32 ret = 0;
    s32 i;

    for (i = 0; i < 12; i++) {
        if ((D_800419A8[i].unk4 != -1) && (D_800419A8[i].unk0 != -1)) {
            if (ret < 3) {
                *arg0++ = D_800419A8[i].unk4;
                ret++;
            }
        }
    }
    return ret;
}

#pragma GLOBAL_ASM("asm/nonmatchings/init_B1B0/func_1000B638.s")
// NON-MATCHING (score 3592): logic reconstructed but the stack frame comes out
// 0x28 vs the target's 0x20 (target keeps the arg0&1 flag in a3 and reuses arg
// homes for call-spills). Frame/register-allocation mismatch.


s32 func_1000B830(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 tmp = D_800DBFF0->unk5F0 & 1;
    if ((tmp != 0) && (arg0 == 0)) {
        arg0 = 1;
        func_1000E40C(16, 1000);
    } else if ((tmp == 0) && (arg0 != 0)) {
        arg0 = 0;
        func_1000E40C(16, 18000);
    }
    return arg0;
}

s32 func_1000B8B8(s32 arg0, u8 arg1, f32 arg2, f32 arg3, f32 arg4) {
    s32 tmp;

    if (D_800BE9F0 == 4) {
        if (((arg0 & 1) != 0) && (D_80041F0C == 0)) {
            func_1000E46C(19, 0, 4096, 0);
            arg0 = arg0 & ~1;
        } else {
            if (D_80041F0C != 0) {
                tmp = D_80041F08 / D_80041F0C / 80;
                if (tmp >= 101) {
                    tmp = 100;
                }
                func_1000E588(19, tmp, 4096);
                arg0 |= 1;
            }
        }
        D_80041F08 = 0;
        D_80041F0C = 0;
        if ((arg0 & 2) == 0) {
            func_1000DF68(19, 0, 1);
            func_1000DF68(19, 32768, 0);
            arg0 |= 2;
        }
        return arg0;
    }
    return func_1000C530(arg0, arg1, arg2, arg3, arg4);
}

s32 func_1000BA18(u32 arg0, u8 arg1, f32 arg2, f32 arg3, f32 arg4) {
    u32 sp44;
    s32 sp40;
    s32 sp3C;

    sp44 = 0;
    sp3C = arg0 & 0x00FFFFFF;
    arg0 = arg0 & 0xFF000000;
    func_100114D0(0, -377, 8227, 32767, 4000, 3000, &sp40, &sp44, 0);
    sp44 = (sp44 << 16) & 0xFF000000;
    if (arg0 != sp44) {
        arg0 = sp44;
        func_1000E588(0x4D, arg0 >> 24, 0x6000);
    }
    sp3C = func_1000C530(sp3C, arg1, arg2, arg3, arg4) & 0xFFFFFF;
    // fakematch
    sp44 = sp3C & 0xFFFFFFFFFFFFFFFF;
    return arg0 | sp44;
}

s32 func_1000BAFC(u32 arg0, u8 arg1, f32 arg2, f32 arg3, f32 arg4) {
    u32 sp44;
    s32 sp40;
    s32 sp3C;

    sp44 = 0;
    sp3C = arg0 & 0x00FFFFFF;
    arg0 = arg0 & 0xFF000000;
    func_100114D0(0, 0, 0, 0x7FF8, 0xE74, 0xA28, &sp40, &sp44, 0);
    sp44 = ((0x7FFF - sp44) << 16) & 0xFF000000;
    if (arg0 != sp44) {
        arg0 = sp44;
        func_1000E588(0x93, arg0 >> 24, 0x6000);
    }
    sp3C = func_1000C530(sp3C, arg1, arg2, arg3, arg4) & 0xFFFFFF;
    sp44 = sp3C & 0xFFFFFFFFFFFFFFFF;
    return arg0 | sp44;
}

s32 func_1000BBE8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg0 == 0) {
        func_1000E704(20, 1, 0xFFFF);
        arg0 = 1;
    }
    return arg0;
}

s32 func_1000BC28(s32 arg0, u8 arg1, s32 arg2, s32 arg3) {
    s32 tmp = func_10008A4C(arg1, 0) + func_10008A4C(arg1, 6) + 1;
    if (tmp >= 256) {
        tmp = 255;
    } else {
        if (tmp < 16) {
            tmp = 1;
        }
    }
    if (tmp != arg0) {
        func_150C851C(tmp - 1);
        arg0 = tmp;
    }
    return arg0;
}


#pragma GLOBAL_ASM("asm/nonmatchings/init_B1B0/func_1000BCBC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/init_B1B0/func_1000BF60.s")
extern u8 D_800C35E8;
extern void func_15178EFC(s32);

s32 func_1000C350(s32 arg0, u8 arg1, s32 arg2, s32 arg3) {
    s32 new_var;

    if ((arg0 & 0x80) == 0) {
        arg0 |= 0x80;
        if (D_800C35EA != 1) {
            func_1000886C(arg1, 0x1E, 1);
            func_1000886C(arg1, 1, 1);
            func_1000E40C(0x23, 0x61A8);
        } else {
            if (D_800C35E8 == 3) {
                func_1000E40C(0x23, 0xFA);
                func_15178EFC(2);
            } else if (D_800C35E8 == 6) {
                func_1000886C(arg1, 0x1E, 1);
                func_1000886C(arg1, 1, 0x40);
                func_15178EFC(2);
            } else {
                func_1000E40C(0x23, 0x61A8);
            }
        }
        return arg0;
    }
    new_var = arg0 & 0x7F;
    if (D_800BE9F0 != 0x1D) {
        func_10008F24(arg1);
        return arg0;
    }
    if (new_var != D_80041F08) {
        switch (D_80041F08) {
        case 1:
            func_10008790(arg1, 0x1E, 0, 0);
            func_10008790(arg1, 1, 0x40, 0);
            break;
        case 2:
            func_10008790(arg1, 0x18, 0xFF, 0);
            func_10008790(arg1, 6, 0, 0);
            func_10008790(arg1, 1, 1, 0);
            break;
        }
        arg0 = D_80041F08 | 0x80;
    }
    return arg0;
}
#pragma GLOBAL_ASM("asm/nonmatchings/init_B1B0/func_1000C530.s")
#pragma GLOBAL_ASM("asm/nonmatchings/init_B1B0/func_1000C7E8.s")
// NON-MATCHING (score 1865): logic + top control flow (out-of-line return
// trampolines) verified byte-identical. Remaining diffs are one FP register-
// allocation decision cascading through the whole float block: the target keeps
// arg2 in $f14 (mtc1 a2,f14 at entry) so D_8002C238 gets the persistent $f18 and
// 100.0f is re-materialized twice; IDO instead spills arg2 to 0x20(sp) here,
// freeing $f14 for D_8002C238 and pinning 100.0f in $f18. Pure register-alloc
// near-miss (PERMUTER CANDIDATE).
// s32 func_1000C7E8(s32 arg0, s32 arg1, f32 arg2, s32 arg3, f32 arg4) {
//     s32 v0;
//     f32 v;
//     if (D_800BE9F0 == 0x31) {
//         if (arg0 != 2) {
//             if (func_1000B1B0(9) == 0) {
//                 func_1000E704(0x3E, 0, 0xFFFF);
//                 func_1000E40C(0x3E, 0x7FFF);
//                 func_1000D96C(0x3D, 0x3E, 4);
//             }
//             return 2;
//         }
//         return 0;
//     }
//     v0 = D_8002B070;
//     if (v0 == 0) { v0 = 1; D_8002B070 = v0; }
//     if (arg0 != v0) { arg0 = v0; }
//     v = D_8002C238 - sqrtf((arg2 - -4000.0f) * (arg2 - -4000.0f) + arg4 * arg4) * 10.0f;
//     if (v < 100.0f) { v = 100.0f; } else if (D_8002C238 < v) { v = D_8002C238; }
//     func_1000E40C(0x3E, (s32) v);
//     return arg0;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/init_B1B0/func_1000C934.s")
// NON-MATCHING (score 145): byte-identical except sp3C is allocated to v1
// instead of a1, producing one extra `move a1,v1` before the func_1000E40C
// call. Pure register-coloring near-miss (PERMUTER CANDIDATE). The target loads
// sp3C directly into a1 at every reload (17d4/1824) so it is already the arg1 of
// func_1000E40C(0x54, sp3C); no C form observed forces IDO to color it a1 (clean
// form scores 825 with t-regs+move; the temp_a1 idiom below reaches v1 @145).
// s32 func_1000C934(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
//     s32 sp3C;
//     s32 sp38;
//     s32 temp_a1;
//     s32 temp_t7;
//
//     sp3C = 0;
//     temp_t7 = D_800DBFF0->unk5F0 & 1;
//     if (temp_t7 != 0) {
//         sp38 = 0x7FFF;
//     } else {
//         sp38 = 12000;
//     }
//     if ((D_800BE9F0 == 0x37) && (temp_t7 == 0)) {
//         func_100114D0(2200, 1066, -1600, sp38, 3000, 1500, 0, &sp3C, 0);
//         sp3C = sp38 - (sp3C & 0xFF00);
//     }
//     temp_a1 = sp3C;
//     if ((sp3C != arg0) & 0xFFFF) {
//         sp3C = temp_a1;
//         func_1000E40C(84, sp3C);
//     }
//     return sp3C | 0x80000000;
// }

s32 func_1000CA18(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 tmp;

    if (D_800BE9F0 == 55) {
        if ((D_800DBFF0->unk5F0 & 1) != 0) {
            tmp = 0;
        } else {
            func_100114D0(2200, 1066, -1600, 24000, 3000, 1500, 0, &tmp, 0);
            tmp &= 0xFF00;
        }
    } else {
        tmp = 24000;
    }

    if ((tmp != arg0) & 0xFFFF) {
        func_1000E40C(84, tmp);
    }
    return tmp | 0x80000000;
}

s32 func_1000CAE4(s32 arg0, u8 arg1, f32 arg2, f32 arg3, f32 arg4) {
    s32 tmp;

    tmp = arg0 & 2;
    arg0 = arg0 & 1;

    if (D_800BE9F0 == 0x42) {
        func_10011FA0((s32 *) 4);
        if (arg0 == 0) {
            arg0 = 1;
            func_1000E704(0x58, 1, 0xFFFF);
        }
    } else {
        if (arg0 != 0) {
            func_1000E704(0x58, 0, 0xFFFF);
            func_1000E40C(0x58, 16000);
            arg0 = 0;
        }
    }

    if (tmp == 0) {
        func_10008790(arg1, 0x1000, 0, 1);
        tmp = 2;
    }
    return tmp | arg0;
}

void func_1000CBA8(s32 arg0) {
    if (D_800417B0[0] != NULL) {
        D_800417B0[0]->unk4E = arg0;
        D_800417B0[0]->unk50 = (u16)0x500;
    }
    if (D_800417B0[1] != NULL) {
        D_800417B0[1]->unk4E = arg0;
        D_800417B0[1]->unk50 = (u16)0x500;
    }
}

void func_1000CBF0(s32 arg0, s32 arg1, s32 arg2) {
    s32 i;

    for (i = 0; i < 3; i++) {
        if (((1 << i) & arg2) != 0) {
            if (D_800417B0[i] != NULL) {
                D_800417B0[i]->unk5A = arg0;
                D_800417B0[i]->unk5C = arg1;
                if (arg1 == 0) {
                    D_800417B0[i]->unk58 = arg0;
                }
            }
        }
    }
}

// #pragma GLOBAL_ASM("asm/nonmatchings/init_B1B0/func_1000CC54.s")
void func_1000CC54(s32 arg0) {
    s32 phi_a3;
    struct151 *temp_v0;

    temp_v0 = D_800417B0[arg0];
    if (temp_v0 != 0) {
        phi_a3 = (((u32) (temp_v0->unk58 * ((u32) (temp_v0->unk4C * temp_v0->unk52) >> 0xF)) >> 0xF) * temp_v0->unk2C) >> 0xF;
        if (phi_a3 != temp_v0->unk30) {
            if (temp_v0->unk30 == 0) {
                func_10008988(arg0, temp_v0->unk38 ^ 0xFFFF, 1);
            } else {
                if (phi_a3 == 0) {
                    func_10008988(arg0, temp_v0->unk38 ^ 0xFFFF, 0);
                }
            }
            temp_v0->unk30 = phi_a3;
            func_10008EE0(arg0, phi_a3);
        }
    }
}

s32 func_1000CD40(s32 arg0, s32 arg1, s32 arg2) {
    if (arg1 != arg0) {
        arg2 = arg2 * D_800BE9E4;
        if (arg0 < arg1) {
            arg0 = arg0 + arg2;
            if (arg1 < arg0) {
                arg0 = arg1;
            }
        } else {
            arg0 = arg0 - arg2;
            if ((arg0 < arg1) || (arg0 < 0)) {
                arg0 = arg1;
            }
        }
    }
    return arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/init_B1B0/func_1000CDA0.s")
// NON-MATCHING (score 1670): logic is correct, but the early `return 1` guards
// compile to branch-likely + inline returns where the target uses plain beqz/bltz
// branches to shared epilogue trampolines placed at the function end. IDO
// return-placement heuristic not reproduced from structured C (confirmed: guards
// 2 & 3 want plain beqz/bltz+nop to out-of-line returns; IDO emits inverted bnezl
// with the continue-path load hoisted into the delay slot). PERMUTER CANDIDATE.
// s32 func_1000CDA0(u8 arg0, struct137 *arg1) {
//     if (arg0 == 0) return 1;
//     if (arg1 == NULL) return 1;
//     if (arg1->unk0 < 0) return 1;
//     if (D_800417B0[arg1->unk0] == NULL) return 1;
//     if (arg1->unk4 <= 0) return 1;
//     if (func_1000853C(arg1->unk0) == 3) return 1;
//     if ((D_8002B078[arg1->unk4][0] & 0x20) == 0) {
//         D_800418AC[arg1->unk0] |= 3;
//     }
//     return (u8)(arg0 & ~D_800418AC[arg1->unk0]) == 0;
// }
#pragma GLOBAL_ASM("asm/nonmatchings/init_B1B0/func_1000CEAC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/init_B1B0/func_1000D2F8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/init_B1B0/func_1000D758.s")
#pragma GLOBAL_ASM("asm/nonmatchings/init_B1B0/func_1000D96C.s")

void func_1000DE1C(s32 arg0, s32 arg1) {
    s32 count;
    s32 i;
    s32 sp34[3];

    arg0 &= 0xFFF;
    if (arg0 == 0) {
        func_1000DEC4();
        count = func_1000B548(sp34);
        for (i = 0; i < count; i++) {
            if (sp34[i] > 0) {
                func_1000D96C(0, sp34[i], arg1);
            }
        }
    } else {
        func_1000D96C(0, arg0, arg1);
    }
}

void func_1000DEC4(void) {
    struct137 *p;

    // NOTE: keep the init on the same source line as the `do` - at -g3 IDO groups
    // the three hoisted %hi/%lo address pairs per line, and splitting them changes
    // the order the addiu halves are emitted in.
    p = D_800419A8; do {
        if (p->unk0 == -1) {
            if (p->unk4 != -1) {
                p->unk4 = -1;
            }
        } else if (func_1000853C(p->unk0) == 0) {
            D_800417B0[p->unk0] = NULL;
            p->unk0 = -1;
            p->unk4 = -1;
        }
        // structs.h types offset 0x60 of struct137 as u16 pad60; the game stores a word there
        *(s32 *) &p->pad60 = 0;
        p++;
    } while (p != (struct137 *) D_80041E58);
}
#pragma GLOBAL_ASM("asm/nonmatchings/init_B1B0/func_1000DF68.s")
// NON-MATCHING (best score 415): structure verified correct. Remaining diffs are
// (a) the final clamp's `v < 0x8000` test emits beqzl instead of the target's
// bnezl-with-store-in-delay (branch-likely polarity that no observed C form flips
// here; factored/inverted/nested variants all score 575-618, worse), and (b) the
// func_1000CC54 pointer access reads v1 where the target reads v0 (the pointer is
// live in both after `move v1,v0`; a pure coloring choice). PERMUTER CANDIDATE.
// s16 func_1000DF68(s32 arg0, s32 arg1, s32 arg2) {
//     struct151 *v1 = func_1000B1FC(arg0);
//     s32 v;
//     if (v1 != NULL) {
//         v1->unk4E = arg1;
//         if (arg2 == 1) {
//             v1->unk4C = arg1;
//             if (v1->unk0 >= 0) {
//                 func_1000CC54(v1->unk0);
//             }
//         }
//         if (arg2 >= 2) {
//             v = v1->unk4C - arg1;
//             if (v < 0) { v = -v; }
//             v = v / arg2;
//             if (v <= 0) {
//                 v = 2;
//             } else {
//                 if (v < 0x8000) { v1->unk50 = v; goto done; }
//                 v = 0x7FFF;
//             }
//             v1->unk50 = v;
//         done:;
//         } else {
//             v1->unk50 = 0x200;
//         }
//     }
// }

void func_1000E054(s32 arg0, s32 arg1) {
    struct151 *sp1C;

    sp1C = func_1000B1B0(arg0);
    if (sp1C != 0) {
        if ((2 == sp1C->unk15) && (arg1 == 0)) {
            func_100084D8(sp1C->unk0);
            sp1C->unk15 = 0;
            sp1C->unk30 = -1;
            func_1000CC54(sp1C->unk0);
            return;
        }
        if ((2 != sp1C->unk15) && (arg1 != 0)) {
            if (sp1C->unk15 != 1) {
                func_10008F58(sp1C->unk0);
            }
            sp1C->unk15 = 2;
        }
    }
}

s32 func_1000E0F8(s32 arg0) {
    struct151 *tmp;

    arg0 &= 0xFFF;
    tmp = func_1000B1FC(arg0);

    if (tmp && tmp->unk60 == 0) {
        return 1;
    } else {
        return 0;
    }
}

s32 func_1000E134(s32 arg0) {
    s32 tmp;

    if (arg0 < 150) {
        tmp = D_8002B078[arg0][0] & ~0xF0;
        if ((tmp == 1) || (tmp == 3)) {
            return 1;
        }
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/init_B1B0/func_1000E17C.s")
// NON-MATCHING (score 1625): logic verified correct (3 loops over D_800419A8).
// IDO CSE's &D_800419A8 across the three loops into one register (with `move`s)
// while the target re-materializes lui/addiu each loop; also s3/s4/s5 constant
// renames. GCSE/register-pressure mismatch, not expressible from C.
// void func_1000E17C(void) {
//     struct137 *p;
//     s32 cls;
//     struct137 *tmp;
//     p = D_800419A8;
//     do {
//         if (p->unk4 > 0) {
//             cls = ((s32 *) &D_8002B074[p->unk4])[1] & ~0xF0;
//             if ((cls == 1) || (cls == 3)) {
//                 if (p->unk0 == -1) { p->unk4 = -1; }
//             }
//         }
//         p++;
//     } while (p < (struct137 *) D_80041E58);
//     p = D_800419A8;
//     do {
//         if (p->unk4 > 0) {
//             tmp = *(struct137 **) &p->pad60;
//             if ((tmp != NULL) && (tmp->unk4 == -1)) { *(s32 *) &p->pad60 = 0; }
//             if ((p->unk10 != NULL) && (p->unk10->unk4 == -1)) { p->unk10 = NULL; }
//         }
//         p++;
//     } while (p < (struct137 *) D_80041E58);
//     p = D_800419A8;
//     do {
//         if (p->unk4 > 0) {
//             cls = ((s32 *) &D_8002B074[p->unk4])[1] & ~0xF0;
//             if ((cls == 1) || (cls == 3)) {
//                 if (p->unk0 != -1) { func_1000DE1C(p->unk4, 4); }
//             }
//         }
//         p++;
//     } while (p != (struct137 *) D_80041E58);
// }
void func_1000E2F4(s32 arg0) {
    struct151 *p;
    s32 i;

    for (i = 0; i < 3; i++) {
        p = D_800417B0[i];
        if (p == NULL) {
            continue;
        }
        if (p->unk4 <= 0) {
            continue;
        }
        if (p->unk15 != 0) {
            continue;
        }
        if (arg0 != 0) {
            func_10008EE0((u8)i, 0);
            if ((((s32 *) &D_8002B074[D_800417B0[i]->unk4])[1] & 0x10) != 0) {
                continue;
            }
            func_10008F58((u8)i);
        } else {
            if ((((s32 *) &D_8002B074[p->unk4])[1] & 0x10) == 0) {
                func_100084D8((u8)i);
                p = D_800417B0[i];
            }
            p->unk30 = -1;
            func_1000CC54(i);
        }
    }
    D_80041F00 = (u8) arg0;
}

void func_1000E40C(s32 arg0, s32 arg1) {
    struct151 *temp_v0;

    if (arg1 >= 0x8000) {
        arg1 = 0x7FFF;
    } else if (arg1 < 0) {
        arg1 = 0;
    }
    temp_v0 = func_1000B1FC(arg0);
    if (temp_v0 != NULL) {
        if (temp_v0->unk0 < 0) {
            temp_v0->unk30 = arg1;
        }
        temp_v0->unk2C = arg1;
    }
}

s32 func_1000E46C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    struct151 *v0 = func_1000B1FC(arg0);
    s32 v1;

    arg1 = arg1 * 255 / 100;
    if (arg1 >= 0x100) {
        arg1 = 0xFF;
    } else if (arg1 < 0) {
        arg1 = 0;
    }
    if (v0 != NULL) {
        if (v0->unk0 >= 0) {
            if (arg3 < 0) {
                func_1000886C(v0->unk0, arg2, arg1);
            } else {
                func_10008790(v0->unk0, arg2, arg1, arg3);
            }
            return 1;
        }
        if (arg1 == 0) {
            v0->unk38 |= arg2;
        } else if (arg1 > 0) {
            v0->unk38 &= ~arg2;
        }
        v1 = 0;
        if (arg2 != 0) {
            do {
                if (arg2 & 1) {
                    v0->unk3C[v1] = arg1;
                }
                v1++;
                arg2 = arg2 >> 1;
            } while (arg2 != 0);
        }
        return 1;
    }
    return 0;
}
s32 func_1000E588(s32 arg0, s32 arg1, s32 arg2) {
    struct151 *v1 = func_1000B1FC(arg0);
    if (v1 != NULL) {
        if (v1->unk0 >= 0) {
            if (arg1 >= 101) {
                arg1 = 100;
            } else if (arg1 < 0) {
                arg1 = 0;
            }
            func_1000886C(v1->unk0, arg2, arg1 * 255 / 100);
            return 1;
        } else {
            if (arg1 <= 0) {
                v1->unk38 |= arg2;
                return 1;
            } else if (arg1 > 0) {
                v1->unk38 &= ~arg2;
                return 1;
            }
        }
    }
    return 0;
}

s32 func_1000E654(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    struct151 *sp1C;
    struct151 *phi_a0;

    sp1C = func_1000B1FC(arg0);
    phi_a0 = NULL;
    if (arg3 >= 0) {
        phi_a0 = func_1000B1FC(arg3);
    }

    if (sp1C != NULL) {
        if (arg2 == 0) {
            if (sp1C->unk0 >= 0) {
                func_10008C6C(sp1C->unk0, arg1 - 1);
                return 1;
            }
        }
        sp1C->unk24 = arg1;
        sp1C->unk20 = arg2;
        if (phi_a0 != NULL) {
            sp1C->unk10 = phi_a0;
        }
        return 1;
    }
    return 0;
}

s32 func_1000E704(s32 arg0, s32 arg1, s32 arg2) {
    struct151 *tmp = func_1000B1B0(arg0);
    if (tmp && tmp->unk0 >= 0) {
        func_10008A94(tmp->unk0, arg2, arg1);
        return 1;
    }
    return 0;
}

void func_1000E75C(s32 arg0) {
    D_8002B070 = arg0 >> 1;
}

s32 func_1000E770(s32 *arg0, s32 *arg1) {
    if (arg0 != 0) {
        *arg0 = D_80041F08;
    }
    if (arg1 != 0) {
        *arg1 = D_80041F0C;
    }
    return D_80041F04;
}

#pragma GLOBAL_ASM("asm/nonmatchings/init_B1B0/func_1000E7A0.s")
// NON-MATCHING (score 760): logic verified correct. Remaining diffs are pure
// register allocation (target keeps arg0 in a0 and uses v0 for the F0C/F08
// addresses; mine reuses a0) plus one branch-likely hoist of the `& 0x10`
// check into the `& 8` guard delay slot. Permuter candidate.
// void func_1000E7A0(u32 arg0, s32 arg1) {
//     s32 tmp;
//     if ((arg0 & 1) == 1) {
//         D_80041F04 |= 1;
//     } else if (arg0 & 2) {
//         D_80041F08 += arg1;
//         D_80041F0C += 1;
//     } else if (arg0 & 4) {
//         D_80041F08 = arg1 + 1;
//         D_80041F04 |= 4;
//     } else if (arg0 & 8) {
//         D_80041F0C = arg1 >> 8;
//         tmp = arg1 & 0xFF;
//         if ((tmp == 0) || (tmp == 4) || (tmp == 5)) {
//             D_80041F08 = 2;
//         } else if (tmp == 10) {
//             D_80041F08 = 1;
//         } else {
//             D_80041F08 = 3;
//         }
//     } else if (arg0 & 16) {
//         D_80041F04 |= 16;
//     }
// }

void func_1000E8C4(s32 arg0) {
    if ((arg0 & 1) == 1) {
        D_80041F04 &= -2; // truncate odd to even
    }
}

u8 func_1000E8F0(s32 arg0) {
    struct151 *temp_v0 = func_1000B1B0(arg0);
    if ((temp_v0 != 0) && (temp_v0->unk0 >= 0)) {
        return D_800418AC[temp_v0->unk0];
    } else {
        return 0;
    }
}

// initialising with grim loops
#pragma GLOBAL_ASM("asm/nonmatchings/init_B1B0/func_1000E934.s")

u16 func_1000EA94(s32 arg0) {
    u16 tmp;

    if (arg0 == 0) {
        tmp = 82;
    } else if (arg0 == 2) {
        tmp = 81;
    } else if (arg0 == 1) {
        tmp = 83;
    }
    func_1000D96C(tmp, 0, 0);
    return tmp;
}
