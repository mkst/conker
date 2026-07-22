#include <ultra64.h>

#include "functions.h"
#include "variables.h"

#include "macros.h"

s32 func_150027F8(s8 *arg0);
void func_15002560(s8 *arg0, s8 *arg1);
void func_15002008(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 func_15002248(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 *arg4, s32 *arg5, s32 arg6, s32 *arg7);

typedef struct { s16 x, z; } Coord_l;
extern Coord_l *D_800DBE44;

void func_15000AC0(void) {
    D_800D9E64 = (u8)0;
}

// jump table
#pragma GLOBAL_ASM("asm/nonmatchings/game_2DF70/func_15000AD0.s")
// loops!
#pragma GLOBAL_ASM("asm/nonmatchings/game_2DF70/func_15001460.s")

void func_15001970(void) {
    s32 pad;
    s32 tmp;

    D_800B0DE4 = 0;
    D_800DBE63 = 0;
    *D_800DBE18 = 0;
    *D_800DBE1C = 0;
    D_800DBE20 = 0;
    tmp = D_80091C04[D_800BE9F0];
    D_800DBE24 = 0;
    D_800B0DC0 = allocate_memory(tmp, 1, 0, 0);
    D_800B0DC8 = tmp + D_800B0DC0;
    D_800B0DC4 = D_800B0DC0;
}

// NON-MATCHING: best 445 (permuter candidate). Structure/frame (0x28) correct; residual is
// a temp-register allocation cascade (target uses v0 for the 3 PI-status reads, IDO picks t8),
// the D_A0000000 %hi/%lo reloc on the ROM read (literal 0xA0000000 gives no reloc), and a
// trailing D_15001B08 `jr ra;nop` stub. size is spilled to 0x24(sp) across both PI calls.
// permuter NO ZERO, best 345 (was 445): permuter only lever was retyping D_800B0DDC to
// `volatile unsigned int` (445->345), which can't be applied without editing the header.
// Even a perfect register match cannot reach 0: the ROM read needs a %hi/%lo reloc against
// the named symbol D_A0000000 (literal 0xA0000000 emits reloc-free lui/ori), and the compared
// region includes a separate trailing stub `glabel D_15001B08 (jr ra; nop)` that no single
// C body for this func can emit. Both need symbol/split config (off-limits). Reverted to pragma.
// void func_15001A08(void) {
//     s32 size;
//     u8 *ret;
//     u32 romval;
//
//     size = D_80091AF0[D_800BE9F0];
//     __osPiGetAccess(size);
//     while (*(vu32 *)0xA4600010 & 3) {
//     }
//     romval = *(u32 *)((D_80000308 | 0xB0000D24) | 0xA0000000);
//     __osPiRelAccess(size);
//     if (romval != 0x98CCE31A) {
//         size <<= 1;
//     }
//     ret = allocate_memory(size, 1, 0, 0);
//     D_800B0DDC = (s32) ret;
//     D_800B0DE0 = ret;
//     D_800B0DCC = 0;
//     D_800B0DD0 = 0;
//     D_800DBE30 = 0;
//     D_800DBE32 = 0;
//     D_800DBE34 = 0;
//     D_800DBE36 = 0;
// }
#pragma GLOBAL_ASM("asm/nonmatchings/game_2DF70/func_15001A08.s")

u16* func_15001B10(void) {
    u16 *temp_v0;

    D_800B0DE0 = ALIGN4(D_800B0DE0);
    D_800B0DCC += 1;

    temp_v0 = (u16*)D_800B0DE0;
    temp_v0[6] = 0;
    temp_v0[2] = 0;

    D_800B0DE0 += 14;
    return temp_v0;
}

void func_15001B5C(u8 arg0) {
    *D_800B0DE0++ = arg0;
}

void func_15001B8C(u16 arg0) {
   D_800B0DE0[0] = (arg0 >> 8);
   D_800B0DE0[1] = arg0 & 0xFF;
   D_800B0DE0 += 2;
}

void func_15001BC8(s32 arg0, s16 *arg1, s16 *arg2) {
    u16 *tmp;
    s16 *sp20;
    s32 i;

    func_1510F800(arg0);
    D_800B0DD8 = 10;
    D_800B0DD4 = 512;
    sp20 = allocate_memory((D_800DBE4C + 1) << 1, 1, 0, 0);

    *sp20 = D_800DBE4C;
    for (i = 0; i < D_800DBE4C; i++) {
        sp20[i + 1] = i;
    }

    tmp = func_15001DE0(0, 0, 32768, 32768, 0, sp20);
    D_800DBE08[arg0] = tmp;
    func_15002560(tmp, 0);
    func_10004074(sp20);

    // regalloc fix:
    if (1) { }

    if (arg1 != 0) {
        *arg1 = D_800B0DCC;
    }
    if (arg2 != 0) {
        *arg2 = D_800B0DD0;
    }
}

void func_15001CEC(s32 arg0) {
    u16 *temp_v0;
    s16 *sp20;
    s32 i;

    func_1510F800(arg0);
    temp_v0 = func_15001B10();

    D_800DBE08[arg0] = temp_v0;

    *((s16*)temp_v0 + 0) = 32768;
    temp_v0[1] = 32767;
    temp_v0[2] = 0;
    temp_v0[3] = -32768;
    temp_v0[4] = 0;
    temp_v0[5] = 0;
    temp_v0[6] = 0;

    sp20 = allocate_memory((D_800DBE4C + 1) << 1, 1, 0, 0);

    *sp20 = D_800DBE4C;
    for (i = 0; i < D_800DBE4C; i++) {
        sp20[i + 1] = i;
    }

    func_15002008(-0x8000, 0x8000, -0x8000, 0x8000, sp20);
    func_10004074(sp20);
}

u16 *func_15001DE0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    u16 *temp_v0;
    u16 *temp_v0_2;
    u16 *temp_v0_3;
    u16 *temp_v0_4;

    s32 sp7C;
    s32 sp78;

    s32 tmp0;
    s32 tmp1;

    s32 sp44;
    s32 sp48;
    s32 sp4C;
    s32 sp50;
    s32 sp54;
    s32 sp58;

    tmp0 = D_800B0DD8;
    tmp1 = D_800B0DD4;

    sp54 = arg0 - arg2;
    sp50 = arg0 + arg2;
    sp4C = arg1 - arg3;
    sp48 = arg1 + arg3;

    if ((func_15002248(sp54, sp50, sp4C, sp48, &sp7C, &sp78, arg5, &sp58) < tmp0) || (arg2 < tmp1)) {
        temp_v0 = func_15001B10();
        D_800B0DD0 = (D_800B0DD0 + 1);
        temp_v0[0] = sp7C;
        temp_v0[1] = sp78;
        temp_v0[3] = arg2;
        temp_v0[4] = arg0;
        temp_v0[5] = arg1;
        temp_v0[2] = 0;
        temp_v0[6] = 0;
        func_15002008(sp54, sp50, sp4C, sp48, sp58);
    } else {
        temp_v0 = func_15001B10();
        temp_v0[0] = sp7C;
        temp_v0[1] = sp78;
        temp_v0[3] = arg2;
        temp_v0[4] = arg0;
        temp_v0[5] = arg1;
        temp_v0[2] = 0;

        temp_v0_2 = func_15001DE0(arg0 - (arg2 >> 1), arg1 - (arg3 >> 1), arg2 >> 1, arg3 >> 1, 0, sp58);
        temp_v0[6] = (s32)temp_v0_2 - (s32)temp_v0;
        temp_v0_3 = func_15001DE0(arg0 - (arg2 >> 1), (arg3 >> 1) + arg1, arg2 >> 1, arg3 >> 1, 0, sp58);
        temp_v0_2[2] = (s32)temp_v0_3 - (s32)temp_v0_2;
        temp_v0_4 = func_15001DE0((arg2 >> 1) + arg0, arg1 - (arg3 >> 1), arg2 >> 1, arg3 >> 1, 0, sp58);
        temp_v0_3[2] = (s32)temp_v0_4 - (s32)temp_v0_3;
        temp_v0_4[2] = (s32)func_15001DE0((arg2 >> 1) + arg0, (arg3 >> 1) + arg1, arg2 >> 1, arg3 >> 1, 0, sp58) - (s32)temp_v0_4;
    }
    func_10004074(sp58);
    return temp_v0;
}

typedef struct { f32 x, y, z; } Vec3f_l;
typedef struct { Vec3f_l v[3]; } Tri9_l;
typedef struct { s16 x, y, z; } DbVtx_l;
typedef struct { DbVtx_l *v[3]; } DbTri_l;

s32 func_15049260(Tri9_l arg0);

// 3 loops
// NON-MATCHING: algorithmically complete (best 6715). Residual is a pervasive saved-register
// allocation + stack-layout cascade: target puts arg1/arg0/arg3/arg2 in s0/s1/s2/s3 and hoists
// the 0x80000001 vertex-validity threshold to s4 and &tri.v[3] to s5, while IDO here assigns the
// args to s2-s5 and the invariants to s0/s1, and the tri temp lands at sp+0x70 vs sp+0x78. Needs
// a permuter register-swap pass (or manual saved-register coercion) from this base.
// void func_15002008(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
//     Tri9_l tri;
//     u16 *list, *end, *p;
//     s32 count, s6, prev;
//     DbTri_l *dt;
//     func_150492CC((f32)(arg1 - arg0), 32000.0f, (f32)(arg3 - arg2));
//     prev = -1;
//     list = (u16 *)arg4;
//     count = list[0];
//     if (count > 0) {
//         end = &list[count + 1];
//         p = &list[1];
//         s6 = *p;
//         do {
//             Vec3f_l *out; DbVtx_l **vp; s32 r;
//             dt = (DbTri_l *)D_800DBE3C + s6;
//             out = tri.v;
//             vp = dt->v;
//             do {
//                 DbVtx_l *vtx = *vp;
//                 if ((u32)vtx < 0x80000001U) {
//                     out->x = 0.0f; out->y = 0.0f; out->z = 0.0f;
//                 } else {
//                     out->x = (f32)(vtx->x - (arg0 + arg1) / 2);
//                     out->y = (f32)vtx->y;
//                     out->z = (f32)(vtx->z - (arg2 + arg3) / 2);
//                 }
//                 out++; vp++;
//             } while (out != &tri.v[3]);
//             r = func_15049260(tri);
//             if (r == 0) {
//                 if (prev == -1) { func_15001B8C(s6 | 0x8000); prev = s6; }
//                 else if ((s6 - prev) < 0x80) { func_15001B5C(s6 - prev); prev = s6; }
//                 else { func_15001B8C(s6 | 0x8000); prev = s6; }
//             }
//             p++;
//         } while (p != end);
//     }
//     func_15001B5C(0);
// }
#pragma GLOBAL_ASM("asm/nonmatchings/game_2DF70/func_15002008.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_2DF70/func_15002248.s")

void func_15002560(s8 *arg0, s8 *arg1) {
    s8 *s1;
    s32 v0;

loop:
    if (arg0 == 0) {
        return;
    }
    if (*(s16 *)(arg0 + 4) == 0) {
        if (arg1 != 0) {
            v0 = (s32)arg1 - (s32)arg0;
        } else {
            v0 = 0;
        }
        *(s16 *)(arg0 + 4) = v0;
    }
    v0 = *(s16 *)(arg0 + 0xC);
    if (v0 == 0) {
        return;
    }
    s1 = arg0 + v0;
    if (*(s16 *)(s1 + 4) != 0) {
        s8 *s0;
        do {
            s0 = s1;
            s0 += *(s16 *)(s1 + 4);
            func_15002560(s1, s0);
            s1 = s0;
        } while (*(s16 *)(s0 + 4) != 0);
    }
    arg0 = s1;
    goto loop;
}

void func_150025FC(void) {
    s32 tmp0;
    s32 tmp1;
    s32 tmp2;
    s32 tmp3;

    tmp0 = D_800DBE2A;
    tmp1 = D_800DBE2C;

    D_800DBE28 = (((tmp0 + 7) / 8) + 0xF) & 0xFFF0;
    tmp2 = func_1502B5C8(0, 2, 5, D_800BE9F0 << 1);
    tmp3 = func_1502B5C8(0, 2, 5, (D_800BE9F0 << 1) + 1);
    if (tmp2 == 0) {
        D_800BE5D0 = 0;
    } else {
        func_150183D0(D_800DBE28, tmp1, tmp2, tmp3);
        func_10004074(tmp3);
    }
}

void func_150026C4(s32 arg0) {
    D_800DBE38 = 0;
    func_1510F800(arg0);
}

void func_150026E8(s32 arg0) {
    D_800DBE18[arg0] = D_800DBE38;
    D_800DBE4C = D_800DBE38;
    D_800B0DE4 += D_800DBE38;
}

void func_15002724(s32 arg0) {
    D_800DBE38 += func_150027F8(arg0);
}

void func_15002754(void) {
    s32 idx;

    D_800B0DC0 = ALIGN4(D_800B0DC0);
    idx = D_800DBE50;
    D_800DBDD8[idx] = D_800B0DC0;
    D_800B0DC0 += D_800DBE38 * 12;
    D_800DBDE8[idx] = D_800B0DC0;
    D_800B0DC0 += D_800DBE38 * 8;
    D_800DBDF8[idx] = D_800B0DC0;
    D_800B0DC0 += D_800DBE38 * 4;
    func_1510F800(idx);
    D_800DBE38 = 0;
}


s32 func_150027F8(s8 *arg0) {
    s32 count;
    s32 total;
    s8 val;

    if (arg0 == 0) {
        return 0;
    }

    count = 0;
    total = 0;
    val = arg0[0];
    while (val != -0x21) {
        count++;
        if ((val >> 4) == 1) {
            total += 4;
        } else if (val == 6) {
            total += 2;
        } else if (val == 5) {
            total += 1;
        }
        val = *(s8 *)((count << 3) + (s32)arg0);
    }
    return total;
}

s32 func_15002878(void) {
    s32 i;
    s32 tmp;
    s32 highest;

    highest = *D_800DBE18;

    for (i = 0; i < 3; i++) {
        tmp = D_800DBE1C[i];
        if (highest < tmp) {
            highest = tmp;
        }
    }

    return highest;
}

// 12 loops!
#pragma GLOBAL_ASM("asm/nonmatchings/game_2DF70/func_150028BC.s")

void func_15002F40(s32 arg0) {
    if (arg0 == 50 || arg0 == 51) {
        D_800DBE64 = 150.0f;
        return;
    }
    if (D_800BE616) {
        D_800DBE64 = 85.0f;
        return;
    }
    D_800DBE64 = 50.0f;
}

s32 func_15002FA0(s32 arg0) {
    return arg0 ^ 0xF0F0F0F0;
}

void func_15002FB4(s32 arg0) {
    struct00 *sp3C; // TBD
    s32 sp38;
    s32 sp34;
    struct104 *temp_v0;
    s32 sp2C;

    sp3C = func_1502B6BC(&sp34, 0, &sp38, 2, 21, arg0);
    if ((sp38 != 0) && ((sp3C->unk4 << 8) != 0)) {
        D_800B0DF0 = sp3C->unk0;
        if (sp34 == 0) {
            D_8003C8E0 = 0xC000037;
            func_150AD770();
        }
        if (D_800B0DF0 == 0) {
            D_8003C8E0 = 0xC000037;
            func_150AD770();
        }
    }
    func_151EF040(func_15002FA0(0x40F0FAAC), &sp2C);
    sp2C = func_15002FA0(sp2C);
    if (sp2C != 0xE7B00F09) {
        temp_v0 = D_800B0DF0;
        temp_v0->unk12 >>= 1;
    }

    temp_v0 = D_800B0DF0;
    if (temp_v0->unk12 != 0) {
        D_800D2F3C = temp_v0->unk12;
        D_800D2F40 = sp3C->unk8;
    } else {
        D_800D2F3C = 0U;
        D_800D2F40 = 0;
    }

    if ((D_8008FD90 >= 2) && (temp_v0->unk8 == 4)) {
        temp_v0->unk8 = 2U;
    }
}

void func_1500310C(void) {
}
