#include <ultra64.h>

#include "functions.h"
#include "variables.h"


typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
} Node305D0;

#define P32_305D0 (*(s32 **)D_800B0E30)
#define P8_305D0  (*(u8 **)D_800B0E34)

// PERMUTER CANDIDATE (JUSTREG, best 140): byte-identical except target inserts
// `move a3,a1` up front (keeps arg1 in a3, allocates a1 to the reloaded node pointer);
// mine keeps arg1 in a1, node ptr in a3. arg1 and the pointer necessarily interfere;
// pure graph-coloring coin-flip, not source-controllable by hand.
void func_15003120(s32 arg0, s32 arg1, s32 arg2) {
    s32 i;
    s32 new_var;
    P32_305D0[arg0] = arg2;
    P8_305D0[arg0] = 0;
    if (arg2 == 0) return;
    P32_305D0[arg0] += arg1;
    i = 0;
    new_var = P32_305D0[arg0];
    if (((Node305D0 *) new_var)->f0 != 0) {
        do {
            ((Node305D0 *) P32_305D0[arg0])[i].f0 += arg1;
            ((Node305D0 *) P32_305D0[arg0])[i].f4 += arg1;
            i++;
        } while (((Node305D0 *) P32_305D0[arg0])[i].f0 != 0);
    }
    P8_305D0[arg0] = i;
}

// NON-MATCHING (best 7146): reconstruction below is ALGORITHMICALLY COMPLETE and the
// body/main-loop matches instruction-for-instruction (verified: beqzl/bnel branch-likely,
// pointer relocations with obj+tmp operand order, the D_800B0E00/E10/E20/E40[i] block, the
// second D_80082B20 walk all align). The ONLY blocker is the 3-element zeroing loop over
// D_800B0E04/E14/E44 (terminating at &D_800B0E50). In isolation IDO compiles this loop
// byte-perfect (same registers v1=E44,a0=E04,a1=E14,end=D_800B0E44+0xC as the target), but
// in the full function IDO's global regalloc keeps &D_800B0E50 in a saved reg (shared with
// the `D_800B0E50 = ret` store), reuses it as the loop end, computes the runtime pointer
// distance (subu) and applies Duff's-device unrolling -> total cascade. Tried: pointer
// do-while / while, for-counter (shared & dedicated index), sized [3] vs incomplete arrays,
// store reorder, volatile store -- ALL unroll in-context. To match, the target needs
// D_800B0E44 and D_800B0E50 to be compile-time-adjacent (one struct/array) so IDO knows the
// trip is 3 while still emitting the D_800B0E50 symbol; that requires a header/symbol-layout
// change (forbidden here), not a source mutation. NOT a permuter candidate (declaration issue).
//
// extern s32 func_1502B6BC(s32 *arg0, s32 arg1, s32 *arg2, s32 count, ...);
// extern void *allocate_memory(s32 size, s32 arg1, s32 arg2, s32 arg3);
// extern void func_150049A4(s32 arg0, s32 arg1, s32 arg2);
// extern void func_1510CE60(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
// extern u32 func_1510D0EC(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
// extern void func_15003120(s32 arg0, s32 arg1, s32 arg2);
// extern s32 D_800B0E14[3]; extern s32 D_800B0E44[3]; extern s32 D_800B0E50;
// extern s32 D_800B0E10[]; extern s32 D_800B0E20[]; extern s32 D_800B0E40[]; extern u8 D_800B0E38;
// typedef struct { s32 unk0,unk4,unk8,unkC,unk10; u8 pad14[0xC]; s32 unk20,unk24; u8 unk28[4]; } Obj305;
// typedef struct { Obj305 *unk0; s32 unk4; } Ent305;
// void func_150031EC(s32 arg0) {
//     s32 sp50[4]; s32 sp60; s32 sp64; Ent305 *ent; Obj305 *obj; s32 i, ret, tmp; void *p;
//     if (arg0 >= 0x45) arg0 = 0;
//     ret = func_1502B6BC(&sp60, 0, &sp64, 2, 4, arg0);
//     D_800B0E50 = ret;
//     { s32 k; for (k = 0; k < 3; k++) { (&D_800B0E04)[k] = 0; D_800B0E14[k] = 0; D_800B0E44[k] = 0; } }
//     func_150034B4();
//     if (sp60 == 0) goto second;
//     D_800B0E30[0] = (s32) allocate_memory(sp64 * 4, 1, 0, 0);
//     p = allocate_memory(sp64, 1, 0, 0); D_800B0E34[0] = (s32) p;
//     bzero(p, sp64); bzero((void *) D_800B0E30[0], sp64);
//     tmp = sp64; i = 0; D_800B0E38 = (u8) tmp; if (tmp == 0) goto second;
//     ent = (Ent305 *) ret; obj = ent->unk0;
//     do {
//         if (obj != 0 && ent->unk4 != 0) {
//             tmp = obj->unk0;  if (tmp != 0) obj->unk0 = (s32) obj + tmp;
//             tmp = obj->unk8;  if (tmp != 0) obj->unk8 = (s32) obj + tmp;
//             tmp = obj->unk10; if (tmp != 0) obj->unk10 = (s32) obj + tmp;
//             func_15003120(i, (s32) obj, obj->unk20);
//             if ((u32) i < 4U) {
//                 s32 u0 = obj->unk0;
//                 D_800B0E10[i] = (s32) obj + 0x28;
//                 D_800B0E40[i] = (u32) (u0 - (s32) obj - 0x28) >> 4;
//                 D_800B0E00[i] = u0;
//                 D_800B0E20[i] = obj->unk8;
//                 if (i == 0) func_150039BC(obj->unk10);
//                 func_150049A4(D_800B0E00[i], D_800B0E10[i] + 0xFF000000, (s32) obj);
//                 func_1510CE60(D_800B0E00[i], 0, 1, 0x3F, 0);
//             } else {
//                 func_150049A4(obj->unk0, 0, (s32) obj);
//             }
//         }
//         i++; ent++; obj = ent->unk0;
//     } while ((u32) i < (u32) sp64);
// second:
//     { s32 idx, *base, node, off;
//       idx = ((u8 *) D_800B0DF0)[0x4B];
//       if (idx != 0) {
//           base = (s32 *) (&D_80082B20)[idx]; off = 4; node = base[0];
//           if (node != 0) do {
//               func_1510D0EC(node, (s32) sp50, 0x3E, 0);
//               base = (s32 *) (&D_80082B20)[((u8 *) D_800B0DF0)[0x4B]];
//               node = *(s32 *) ((s32) base + off); off += 4;
//           } while (node != 0);
//       } }
// }
#pragma GLOBAL_ASM("asm/nonmatchings/game_305D0/func_150031EC.s")

s32 func_150034B4(void) {
      s32 i;

      for (i = 0; i < 7762; i++) {
          D_800B0E58[i] = -1;
          D_800BC448[i] = 0;
      }

      D_800D9F58 = 0xFFFF; // -1 s16?
      D_800D9F5C = -1;

      if ((D_800BE9F0 != 1) && (D_800BE9F0 != 50)) {
          D_800D9F60 = 0;
      } else {
          D_800D9F60 = 1;
      }
}

// PERMUTER CANDIDATE (best 210, the plain-[i] form below). Logic exact & verified. Header
// bugs handled: D_800B87A0 written via `sh` (s32[] -> s16, stride 2); D_80091D20 read via `lhu`
// (s32[] -> u16, stride 2); D_1A37E0 is a symbol (ROM addr). Remaining diff is a coupled
// terminator/register choice: the write-first [i] form (below) gets correct registers
// (s2=read, s3=write) and store scheduling (post-inc store at -2) but strength-reduces the loop
// on the READ pointer (end D_80091D20+0x3ca4) -- base-symbol mismatch vs target's write end
// (D_800B87A0+0x3ca4, shown by splat as D_800BC444). Putting the write last flips termination to
// the write pointer (base symbol then MATCHES at object level) but swaps s2/s3 -> 985. A
// do-while pointer-walk gets the write terminator but regresses `*w++` store scheduling
// (store-at-0 vs -2) -> 950/1185. IDO couples "which pointer terminates" to "which gets s2",
// so write=s3 + write-terminates + [i]-style store isn't hand-reachable. Permuter territory.
// permuter NO ZERO, best 210 (permuter reached 105 normalized only by reusing s1 to hold the
// packed word -> semantic change to `s0 += D_80091D20[i] + s1`, not adoptable; no true zero).
// extern u8 D_1A37E0[]; extern void *allocate_memory(s32,s32,s32,s32); extern void func_10004074(void*);
// void func_15003570(void) {
//     u8 *buf; s32 s0, s1, i; u8 *v0;
//     buf = allocate_memory(0x10, 1, 2, 0);
//     s0 = (s32) D_1A37E0;
//     for (i = 0; i < 7762; i++) {
//         if (s0 & 1) { s0 -= 1; s1 = 1; } else { s1 = 0; }
//         func_10004514(s0, buf, 0x10, 1);
//         v0 = s1 + buf;
//         ((s16 *) D_800B87A0)[i] = (v0[0]<<24) + (v0[1]<<16) + (v0[2]<<8) + v0[3];
//         s0 += ((u16 *) D_80091D20)[i] + s1;
//     }
//     func_10004074(buf);
// }
#pragma GLOBAL_ASM("asm/nonmatchings/game_305D0/func_15003570.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_305D0/func_15003668.s")
// NON-MATCHING: 40% there
// void func_15003668(s32 arg0) {
//     struct131 *temp_v0_2;
//     s32 temp_t7;
//     s32 i;
//     s32 tmp0;
//
//     D_800DBE62 = (u8)0;
//     func_15001970();
//     D_800D2C68 = (u8)0;
//     func_150026C4(0);
//     func_15002724(D_800B0E00[0]); // ->unk0
//     func_15002754();
//     func_15001460(D_800B0E00[0]); // ->unk0
//     func_150026E8(0);
//     func_150026C4(1);
//     func_15002724(D_800B0E00[3]);
//     func_15002754();
//     func_15001460(D_800B0E00[3]);
//     func_150026E8(1);
//     func_150026C4(2);
//
//     if (D_800DBEF0 > 0) {
//         for (i = 0; i < D_800DBEF0; i++) {
//             temp_v0_2 = &D_800DBEF4[i];
//             if (((u8)temp_v0_2->unk4F & 0x60) != 32) {
//                 func_15002724(temp_v0_2->unk1C);
//             }
//         }
//     }
//
//     func_15002754();
//     D_800D2C68 = (u8)1;
//     D_800D2C2C = 0;
//
//     for (i = 0; i < D_800DBEF0; i++) {
//         temp_v0_2 = &D_800DBEF4[i];
//         if (((u8)temp_v0_2->unk4F & 0x60) != 32) {
//             temp_v0_2->unk58 = D_800DBE38;
//             temp_v0_2->unk56 = 0; //D_800DBE38 - D_800DBE38;
//             func_15001460(temp_v0_2->unk1C);
//         } else {
//             temp_v0_2->unk58 = 0;
//             temp_v0_2->unk56 = 0;
//         }
//     }
//
//     func_150026E8(2);
//     D_800D2C68 = 0;
//     D_800D3300->unk0 = 0;
//     D_800D3300->unk4 = (s32) (D_800DBE3C << 8);
//     func_1510F800(0);
//     temp_t7 = (func_15002878() + 7) & ~7; // ALIGN8
//     D_800D3668 = D_8003809C;
//     D_800D366C = (s32) (D_8003809C + temp_t7);
//     func_1510F800(2);
// }

void func_150038A0(void) {
    func_15001A08();
    func_15001BC8(0, &D_800DBE2A, &D_800DBE2C);
    func_15001BC8(1, 0, 0);
    func_15001CEC(2);
    func_1510F800(0);
    func_150025FC();
    D_800DBE62 = (u8)1;
}

s32 func_1500390C(s32 arg0) {
    s32 i;

    for (i = 0; i < 7762; i++) {
        if (arg0 == D_800B0E58[i]) {
            return i;
        }
    }
    return -1;
}

void func_150039B0(s32 arg0) {
}

void func_150039BC(s32 arg0) {
    D_800DBE5C = arg0;
    if (D_800DBE5C) {
        D_800DBE5C += 8;
    }
}
