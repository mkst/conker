#include <ultra64.h>
#include <libc/stdarg.h>

#define func_1502B7F0 func_1502B7F0_hdrdecl
#include "functions.h"
#undef func_1502B7F0
#include "variables.h"

#include "macros.h"

extern u8 D_AB1950[];

s32 func_1502AC88(s32 offset, s32 val, s32 *out);
s32 func_1502AF04(s32 offset, s32 arg1, s32 val, s32 arg3);
s32 func_1502B224(s32 arg0, s32 arg1, s32 hdr, s32 arg3);
s32 func_1502B350(s32 offset, s32 hdr, s32 *out);
s32 func_1502B4A8(s32 base, s32 count);

s32 allocate_memory(s32 size, s32 arg1, s32 arg2, s32 arg3);
s32 func_10006240(s32 arg0, s32 arg1, u32 arg2);
void func_10004074(s32 arg0);

void func_1502AAF0(void) {
}

void func_1502AAF8(s32 arg0) {
}

// NON-MATCHING (best 4286): algorithmically exact; both loops unroll by 4 like the target.
// Remaining diffs are not hand-controllable: the target's main fill loop is software-pipelined
// across 5 leading pointer registers (v0/v1/a0/a1/a2, +0x38 lead) producing a strength-reduced
// end pointer that relocates against the separate symbol D_800C3EA0 (= D_800C3D68+0x138); a
// plain C loop uses one base pointer + D_800C3D68+0x100 end. Also count wants saved-reg s2 and
// the guard wants sltiu vs slti. Same compiler-scheduling class as func_1502B4A8.
// typedef struct { s32 unk0, unk4, unk8, unkC; } AB04Entry;  extern AB04Entry D_800C3D68[16];
// void func_1502AB04(s32 count, s32 *src, s32 a2, s32 a3) {
//     s32 i;
//     if (count != 0) {
//         bcopy(&D_800C3D68[count], D_800C3D68, (16 - count) * 16);
//     }
//     for (i = 16 - count; i < 16; i++) {
//         D_800C3D68[i].unk0 = a3;
//         D_800C3D68[i].unk4 = a2;
//         D_800C3D68[i].unk8 = src[0];
//         D_800C3D68[i].unkC = src[1];
//         a3 += 8;
//         src += 2;
//     }
// }
#pragma GLOBAL_ASM("asm/nonmatchings/game_57FA0/func_1502AB04.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_57FA0/func_1502AC88.s")
// PERMUTER CANDIDATE (best 1501): algorithmically exact; structure + unrolled loop
// match, remaining diffs are register allocation (dram wants saved s2 but lands in a
// temp+spill; temp renames in the unrolled body; induction-var init moves).
// s32 func_1502AF04(s32 offset, s32 arg1, s32 val, s32 count) {
//     s32 q;
//     s32 dram;
//     s32 *data;
//     s32 i;
//
//     val = val * 8;
//     q = offset + val;
//     dram = (arg1 + 8) & ~0xF;
//     func_10004514(q & ~0xF, dram, ALIGN16((q & 0xE) + count * 8), 1);
//
//     data = (s32 *)(dram + (q & 0xF));
//     for (i = 0; i != count; i++) {
//         data[i * 2] += offset;
//     }
//
//     return dram + (q & 0xF);
// }
#pragma GLOBAL_ASM("asm/nonmatchings/game_57FA0/func_1502AF04.s")
s32 func_1502B020(s32 *arg0, s32 count, ...) {
    va_list ap;
    s32 offset;
    s32 val;
    s32 more;

    more = 1;
    offset = (s32)D_AB1950;
    va_start(ap, count);

    for (; count != 0; count--) {
        val = va_arg(ap, s32);
        if (more != 0) {
            offset += func_1502AC88(offset, val, &more);
        }
        more = more & 0xFFFFFFF;
    }

    if (arg0 != 0) {
        *arg0 = more & 0xFFFFFFF;
    }

    if (more == 0) {
        return 0;
    }
    return offset;
}
s32 func_1502B110(s32 offset, s32 arg1, s32 arg2, u32 count, ...) {
    va_list ap;
    s32 val;
    s32 more;
    s32 result;

    more = 1;
    result = 0;
    if (offset == 0) {
        offset = (s32)D_AB1950;
    }
    va_start(ap, count);

    for (; count >= 2; count--) {
        val = va_arg(ap, s32);
        if (more != 0) {
            offset += func_1502AC88(offset, val, &more);
        }
        more = more & 0xFFFFFFF;
    }

    val = va_arg(ap, s32);
    if (more != 0) {
        result = func_1502AF04(offset, arg2, val, arg1);
    }

    return result;
}
s32 func_1502B224(s32 arg0, s32 arg1, s32 hdr, s32 arg3) {
    s32 size;
    s32 *ptr;
    s32 checksum;

    size = ALIGN2(hdr & 0xFFFFFFF);
    if (arg3 != 0) {
        if ((u32)arg3 < (u32)size) {
            size = arg3;
        }
    }

    if ((hdr & 0x70000000) == 0x10000000) {
        ptr = (s32 *)allocate_memory(size, 1, 2, 2);
        if (ptr == 0) {
            return 0;
        }
        func_10004514(arg0, ptr, ALIGN16(size), 1);
        checksum = *ptr & 0x7FFFFFFF;
        size = func_10006240((s32)ptr, arg1, D_8003809C);
        if (size != checksum) {
            D_8003C8E0 = 0xC000036;
            func_150AD770();
        }
        func_10004074((s32)ptr);
        return size;
    } else {
        func_10004514(arg0, arg1, ALIGN16(size), 1);
        return size;
    }
}
// PERMUTER CANDIDATE (best ~1449): algorithmically exact; structure matches (result in s0,
// size double-homed, all calls/branches aligned). Remaining diffs are register allocation:
// -g3 frame is 0x38 vs 0x30 (ptr/outval stack slots don't pack the same) + temp-register
// renames (v1<->t0, t2<->t4). Not hand-crackable; hand off to permuter.
// s32 func_1502B350(s32 offset, s32 hdr, s32 *out) {
//     s32 size;
//     s32 *ptr;
//     s32 checksum;
//     s32 outval;
//     s32 result;
//
//     size = ALIGN2(hdr & 0xFFFFFFF);
//     outval = size;
//     ptr = (s32 *)allocate_memory(size, 1, 2, 2);
//     result = (s32)ptr;
//     if (ptr == 0) {
//         return 0;
//     }
//     func_10004514(offset, ptr, ALIGN16(size), 1);
//     if ((hdr & 0x70000000) == 0x10000000) {
//         checksum = *ptr & 0x7FFFFFFF;
//         *out = checksum;
//         if (checksum != 0) {
//             result = 0;
//             if ((u32)checksum < 0xF4240) {
//                 result = allocate_memory(checksum, 1, 2, 2);
//                 if (result != 0) {
//                     outval = func_10006240((s32)ptr, result, D_8003809C);
//                 } else {
//                     outval = 0;
//                 }
//             } else {
//                 outval = 0;
//             }
//         } else {
//             result = 0;
//             outval = 0;
//         }
//         func_10004074((s32)ptr);
//     }
//     *out = outval;
//     return result;
// }
#pragma GLOBAL_ASM("asm/nonmatchings/game_57FA0/func_1502B350.s")
typedef struct {
    s32 unk0;
    u32 unk4;
} B4A8Entry;

// NON-MATCHING (best 6365): algorithmically exact. Per-entry bodies + software-pipelined
// do-while match the target, but IDO auto-unrolls the relocation loop by 4 while the target
// is unrolled by 2 (stride 0x10). The unroll factor is an IDO heuristic not controllable from
// C (simple loop -> 4; manual unroll-by-2 gets re-unrolled to 4/8) and is not permuter-fixable.
// Minor remaining diff: auto-detect loop uses beqzl vs target's sltiu+bnezl boolean.
// s32 func_1502B4A8(s32 base, s32 count) {
//     B4A8Entry *e;
//     s32 w0;
//     u32 w1;
//     u32 w1c;
//
//     if (count == 0) {
//         e = (B4A8Entry *)(base + count * 8);
//         do {
//             w1 = e->unk4;
//             e++;
//             count++;
//         } while ((w1 & 0x80000000) == 0);
//     }
//
//     if (count > 0) {
//         B4A8Entry *end;
//         e = (B4A8Entry *)base;
//         end = (B4A8Entry *)(base + count * 8);
//         do {
//             w1c = e->unk4 & 0xFFFFFFF;
//             e->unk4 = w1c;
//             w0 = e->unk0;
//             if (w0 != -1 && w1c != 0) {
//                 e->unk0 = w0 + base;
//             } else {
//                 e->unk0 = 0;
//             }
//             e++;
//         } while (e != end);
//     }
//
//     return count;
// }
#pragma GLOBAL_ASM("asm/nonmatchings/game_57FA0/func_1502B4A8.s")
s32 func_1502B5C8(s32 *arg0, s32 count, ...) {
    va_list ap;
    s32 offset;
    s32 val;
    s32 localbuf;
    s32 ret;
    s32 stack0;
    s32 *p;

    p = &localbuf;
    if (arg0 != 0) {
        p = arg0;
    }
    *p = 1;
    offset = (s32)D_AB1950;
    va_start(ap, count);

    for (; count != 0; count--) {
        val = va_arg(ap, s32);
        if (*p != 0) {
            offset += func_1502AC88(offset, val, &stack0);
        }
        *p = stack0 & 0xFFFFFFF;
    }

    if (*p != 0) {
        ret = func_1502B350(offset, stack0, p);
    } else {
        ret = 0;
    }

    return ret;
}
s32 func_1502B6BC(s32 *arg0, s32 arg1, s32 *arg2, s32 count, ...) {
    va_list ap;
    s32 offset;
    s32 localbuf;
    s32 val;
    s32 *p;
    s32 stack0;
    s32 ptr;

    p = &localbuf;
    if (arg0 != 0) {
        p = arg0;
    }
    *p = 1;
    offset = (s32)D_AB1950;
    va_start(ap, count);

    for (; count != 0; count--) {
        val = va_arg(ap, s32);
        if (*p != 0) {
            offset += func_1502AC88(offset, val, &stack0);
        }
        *p = stack0 & 0xFFFFFFF;
    }

    if (*p != 0) {
        ptr = func_1502B350(offset, stack0, p);
        if (*p != 0 && ptr != 0) {
            arg1 = func_1502B4A8(ptr, arg1);
        } else {
            arg1 = 0;
        }
        if (arg2 != 0) {
            *arg2 = arg1;
        }
    } else {
        ptr = 0;
    }

    return ptr;
}
s32 func_1502B7F0(s32 *arg0, s32 count, ...) {
    va_list ap;
    s32 offset;
    s32 val;
    s32 more;
    s32 stack0;

    more = 1;
    offset = (s32)D_AB1950;
    va_start(ap, count);

    for (; count != 0; count--) {
        val = va_arg(ap, s32);
        if (more != 0) {
            offset += func_1502AC88(offset, val, &stack0);
        }
        more = stack0 & 0xFFFFFFF;
    }

    if (more != 0) {
        *arg0 = func_1502B350(offset, stack0, &more);
    } else {
        *arg0 = 0;
    }

    return more;
}

s32 func_1502B8E0(s32 arg0, s32 arg1, s32 count, ...) {
    va_list ap;
    s32 more;
    s32 offset;
    s32 val;
    s32 stack0;

    more = 1;
    offset = (s32)D_AB1950;
    va_start(ap, count);

    while (count != 0) {
        val = va_arg(ap, s32);
        if (more != 0) {
            offset += func_1502AC88(offset, val, &stack0);
        }
        count--;
        more = stack0 & 0xFFFFFFF;
    }

    if (more != 0) {
        more = func_1502B224(offset, arg0, stack0, arg1);
    }

    return more;
}

s32 func_1502B9B4(s32 count, ...) {
    va_list ap;
    s32 offset;
    s32 val;
    s32 more;
    s32 stack0;
    s32 buf[7];
    s32 *p;

    more = 1;
    offset = (s32)D_AB1950;
    va_start(ap, count);

    for (; count != 0; count--) {
        val = va_arg(ap, s32);
        if (more != 0) {
            offset += func_1502AC88(offset, val, &stack0);
        }
        more = stack0 & 0xFFFFFFF;
    }

    if (more != 0) {
        more = ALIGN2(stack0 & 0xFFFFFFF);
        if ((stack0 & 0x70000000) == 0x10000000) {
            p = buf;
            if (((s32)p & 8) != 0) {
                p = buf + 2;
            }
            func_10004514(offset, p, 0x10, 1);
            more = *p;
        }
    }

    return more;
}
