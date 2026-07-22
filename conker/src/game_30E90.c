#include <ultra64.h>

#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/game_30E90/func_150039E0.s")

// FIXME: matches but something isnt right
void func_15004574(void) {
    if (D_800DBF88 != 0xFF) {
        D_800DBF8C = D_800DBEF4[D_800DBF88].unk1C;
        D_800DBF90 = D_800DBEF4[D_800DBF88].unk28;
    }
}

void func_150045BC(void) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_30E90/func_150045C4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_30E90/func_150049A4.s")

// NON-MATCHING (best score 510). Display-list relocation walking 8-byte commands.
// Every instruction of the loop matches; the only real diff is the preheader: the
// target loads the command byte a second time after the guard branch
// (lb a2, 0(a0)) whereas IDO CSEs our second read into "move a1,a3". That single
// difference also flips which of arg1/arg2 is spilled to s0. Attempts to defeat
// the CSE (distinct struct type at the same offset, raw s8 cast, array vs pointer
// syntax, do-while vs while) all still CSE.
//
// typedef struct { s8 b0; s8 b1; s8 b2; u8 b3; u32 w1; } GfxCmd;
//
// void func_150049A4(GfxCmd *gfx, u32 arg1, u32 arg2) {
//     s32 i = 0;
//     GfxCmd *p = gfx;
//     s32 c;
//
//     if (gfx->b0 != -0x21) {
//         c = gfx->b0;
//         do {
//             i++;
//             switch (c) {
//                 case 0xDE:
//                     p->w1 += arg1;
//                     break;
//                 case 1:
//                     p->w1 += arg1;
//                     break;
//                 case -0x24:
//                     if (p->b3 == 0xE) {
//                         p->w1 += arg2;
//                     }
//                     break;
//             }
//             p = &gfx[i];
//             c = p->b0;
//         } while (p->b0 != -0x21);
//     }
// }

void func_15004A4C(void) {
    s32 i;

    for (i = 0; i < D_800DBEF0; i++) {
        (*(s32 **)&D_800DBEF8)[i] = 0;
        (*(u8 **)&D_800DBEFC)[i] = 0;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_30E90/func_15004AAC.s")
// NON-MATCHING. Body computation is VERIFIED byte-exact (per-vertex load/cvt/mul/add/trunc
// and the whole post-loop sqrt + BE2A0/2/4 branch chain match opcode-for-opcode; confirmed
// via the register-diff-only middle section). The ONLY blocker is IDO uopt's "searchloop"
// reduction unroller: the natural `for (i=0;i<count;i++)` max-reduction loop below gets
// 2x-unrolled with odd-iteration peeling and saved FP regs (score ~9977) whereas the target
// is NOT unrolled. uopt exposes NO -Wo flag to disable this (checked: -OPT:*, -Wo,-*unroll*
// are ignored/unrecognized; LOOP_UNROLL in the Makefile is referenced-but-undefined). The
// byte-offset variant `for (off=0; off<count*16; off+=16)` DEFEATS the unroller and reaches
// best 425, but then IDO guards on count*16 (blez count<<4) instead of count (blez count),
// and the residual is FP+int register rotation. Likely a permuter/source-structure puzzle.
//
// (byte-offset near-miss form, best 425:)
// typedef struct { s16 unk0; s16 unk2; s16 unk4; u8 pad6[0xA]; } AacVtx;              // 0x10
// typedef struct { u8 pad0[0x16]; u16 unk16; u8 pad18[0x10]; AacVtx *unk28;
//                  f32 unk2C; f32 unk30; f32 unk34; u8 pad38[0x18]; u16 unk50; u16 unk52; } AacObj; // 0x54
// extern u16 D_800BE2A0, D_800BE2A2, D_800BE2A4;
// void func_15004AAC(AacObj *arg0, s32 arg1) {           // arg1 homed-but-unused (sw a1,4(sp))
//     s32 max = 0, count = arg0->unk16, off, r;
//     for (off = 0; off < count * 16; off += 16) {
//         AacVtx *p = (AacVtx*)((u8*)arg0->unk28 + off);
//         f32 fz = p->unk4 * arg0->unk34;
//         f32 fx = p->unk0 * arg0->unk2C;
//         f32 fy = p->unk2 * arg0->unk30;
//         s32 val = (s32)(fz * fz + (fx * fx + fy * fy));
//         if (max < val) max = val;
//     }
//     if (max == 0) return;
//     r = (s32)sqrtf((f32)max);
//     if (arg0->unk50 == 0) { arg0->unk50 = r; arg0->unk52 = r; D_800BE2A2++; }
//     else if ((arg0->unk50 < r) || (arg0->unk52 < r)) D_800BE2A0++;
//     else D_800BE2A4++;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/game_30E90/func_15004BF0.s")
// NON-MATCHING (best 1465). PERMUTER CANDIDATE — algorithmically exact: every opcode
// matches 1:1 and in order. Sole diff is a whole-function register rotation: the target
// keeps loop-invariants start/count in the arg regs a0/a1 (start coalesced into the
// incoming a0) and loop-variants i/id in v0/v1; IDO gives our build the reverse
// (start/count -> v0/v1, i/id -> a0/a1) no matter how the source is ordered — even
// literally reusing the arg0 variable as `start` did not make IDO keep it in a0. Plus a
// single commutative `addu base,offset` vs `offset,base`. Pure register permutation.
//
// s32 func_15004BF0(s32 arg0) {
//     s32 count, i, id;
//     if (arg0 == 0) {                       // forward scan: lowest free id from D_800DBF00
//         count = D_800DBEF0;
//         arg0  = D_800DBF00;                 // start
//         id = 1;
//         if (arg0 < count) {
//             i = arg0;
//             do {
//                 if (((u8*)((u8*)D_800DBEF4 + i * 0xA0))[0x72] == id) { id++; i = arg0 - 1; }
//                 i++;
//                 if (id >= 0x100) return 0xFF;
//             } while (i < count);
//         }
//         return id;
//     } else {                               // backward scan: highest free id from 0xFF-D_800DBF00
//         arg0  = 0xFF - D_800DBF00;          // base
//         count = D_800DBEF0;
//         id = arg0;
//         if (count > 0) {
//             i = 0;
//             do {
//                 if (id == ((u8*)((u8*)D_800DBEF4 + i * 0xA0))[0x72]) { id--; i = -1; }
//                 i++;
//                 if (id <= 0) return arg0;
//             } while (i < count);
//         }
//         return id;
//     }
// }
#pragma GLOBAL_ASM("asm/nonmatchings/game_30E90/func_15004CE0.s")
// NON-MATCHING (best 215, register-only + 1 structural). Body is instruction-identical.
// Target emits TWO separate `lb 0(a0)` in the preheader (loop-rotation re-reads b0 for
// the guard AND the carried value); IDO CSEs our two reads into one `lb`+`move`. The
// pre-check+do-while form is WORSE (310, adds move a1,a2). PERMUTER CANDIDATE — the
// residual is all register renames once the second load lands.
//   typedef struct { s8 b0; s8 b1; s8 b2; u8 b3; u32 w1; } GfxCmd;
//   void func_15004CE0(GfxCmd *gfx, u32 arg1) {
//       s32 i = 0; GfxCmd *p = gfx; s32 c = gfx->b0;
//       while (c != -0x21) {
//           i++;
//           if ((c == -0x24) && (p->b3 == 0xE) && (p->w1 < 0x80000000)) p->w1 += arg1;
//           p = &gfx[i]; c = p->b0;
//       }
//   }
