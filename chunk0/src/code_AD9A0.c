#include <ultra64.h>

#include "functions.h"
#include "variables.h"


// some mips3/64bit stuff going on here

#pragma GLOBAL_ASM("asm/nonmatchings/code_AD9A0/func_850AD9A0.s")
// NON-MATCHING: I am nothing without mip2c.
// s32 func_850AD9A0(s32 arg0, s32 arg1, s32 arg2) {
//     s32 v0;
//     s32 tmp0 = (s32)arg0; // = arg0;
//     s32 tmp1 = (s32)arg1;
//     s32 tmp2 = (s32)arg2;
//
//     // /* AD9A0 850AD9A0 000417C3 */  sra        $v0, $a0, 0x1f
//     // /* AD9A4 850AD9A4 00822026 */  xor        $a0, $a0, $v0
//     // /* AD9A8 850AD9A8 00822022 */  sub        $a0, $a0, $v0
//     v0 = (tmp0 >> 31);
//     tmp0 = (tmp0 ^ v0) - v0;
//     // tmp0 =   tmp0 - v0;
//     // tmp0 = tmp0 - v0;
//     // /* AD9AC 850AD9AC 000517C3 */  sra        $v0, $a1, 0x1f
//     // /* AD9B0 850AD9B0 00A22826 */  xor        $a1, $a1, $v0
//     // /* AD9B4 850AD9B4 00A22822 */  sub        $a1, $a1, $v0
//     v0 = arg1 >> 31;
//     tmp1 = tmp1 ^ v0;
//     tmp1 = tmp1 - v0;
//
//     // /* AD9B8 850AD9B8 000617C3 */  sra        $v0, $a2, 0x1f
//     // /* AD9BC 850AD9BC 00C23026 */  xor        $a2, $a2, $v0
//     // /* AD9C8 850AD9C8 00C23022 */   sub       $a2, $a2, $v0
//     v0 = tmp2 >> 31;
//     tmp2 = tmp2 ^ v0;
//     // tmp2 = tmp2 - v0;
//
//     // /* AD9C0 850AD9C0 0085082A */  slt        $at, $a0, $a1
//     // /* AD9C4 850AD9C4 10200004 */  beqz       $at, .L850AD9D8
//     if (tmp0 < tmp1)
//     {
//         // .L850AD9D8:
//         // /* AD9CC 850AD9CC 00A42826 */  xor        $a1, $a1, $a0
//         // /* AD9D0 850AD9D0 00852026 */  xor        $a0, $a0, $a1
//         // /* AD9D4 850AD9D4 00A42826 */  xor        $a1, $a1, $a0
//         v0 = tmp1 ^ tmp0;
//         tmp0 = tmp0 ^ v0;
//         tmp1 = tmp1 ^ tmp0;
//     }
//     // /* AD9E0 850AD9E0 00C41026 */   xor       $v0, $a2, $a0
//     // /* AD9E4 850AD9E4 00822026 */  xor        $a0, $a0, $v0
//     // /* AD9E8 850AD9E8 00443026 */  xor        $a2, $v0, $a0
//     v0 = tmp2 ^ tmp0;
//     tmp0 = tmp0 ^ v0;
//     tmp2 = v0 ^ tmp0;
//     // /* AD9D8 850AD9D8 0086082A */  slt        $at, $a0, $a2
//     // /* AD9DC 850AD9DC 10200003 */  beqz       $at, .L850AD9EC
//     if (tmp0 < tmp2)
//     {
//         // .L850AD9EC:
//         // /* AD9EC 850AD9EC 00A6082A */  slt        $at, $a1, $a2
//         // /* AD9F0 850AD9F0 10200004 */  beqz       $at, .L850ADA04
//         if (tmp1 - tmp2 != 0)
//         {
//             v0 = 0xb; // ??
//             tmp2 = tmp2 ^ tmp1;
//             tmp1 = tmp1 ^ tmp2;
//             tmp2 = tmp2 ^ tmp1;
//         }
//
//         // /* AD9F4 850AD9F4 2402000B */   addiu     $v0, $zero, 0xb
//         // /* AD9F8 850AD9F8 00C53026 */  xor        $a2, $a2, $a1
//         // /* AD9FC 850AD9FC 00A62826 */  xor        $a1, $a1, $a2
//         // /* ADA00 850ADA00 00C53026 */  xor        $a2, $a2, $a1
//
//     }
//     // .L850ADA04:
//     // /* ADA04 850ADA04 00A20018 */  mult       $a1, $v0
//     tmp1 = tmp1 * v0;
//     // /* ADA08 850ADA08 00063082 */  srl        $a2, $a2, 2
//     tmp2 = tmp2 >> 2;
//     // /* ADA0C 850ADA0C 00C43020 */  add        $a2, $a2, $a0
//     tmp2 = tmp2 + tmp0;
//     // /* ADA10 850ADA10 00001012 */  mflo       $v0
//     // /* ADA14 850ADA14 00021142 */  srl        $v0, $v0, 5
//     v0 = v0 << 5;
//     // /* ADA18 850ADA18 03E00008 */  jr         $ra
//     // /* ADA1C 850ADA1C 00461020 */   add       $v0, $v0, $a2
//     v0 = v0 + tmp2;
//     return v0;
// }

// well this is a bastard
#pragma GLOBAL_ASM("asm/nonmatchings/code_AD9A0/func_850ADA20.s")
// s32 func_850ADA20() {
//     // u32 tmp1;
//     u64 tmp2;
//     u64 tmp0;
//
//     // /* ADA20 850ADA20 3C048009 */  lui        $a0, 0x8009
//     // /* ADA24 850ADA24 DC8485B0 */  ld         $a0, -0x7a50($a0)
//     tmp0 = D_800885B0;
//     // /* ADA28 850ADA28 000437FC */  dsll32     $a2, $a0, 0x1f
//     // tmp2 = tmp0 << 63;
//     // /* ADA2C 850ADA2C 000637FA */  dsrl       $a2, $a2, 0x1f
//     tmp2 = (u32) tmp0; //tmp2 >> 31;
//     // /* ADA30 850ADA30 00042FF8 */  dsll       $a1, $a0, 0x1f
//     // tmp1 = tmp0; // << 31;
//     // /* ADA34 850ADA34 0005283E */  dsrl32     $a1, $a1, 0
//     // tmp1 = tmp1 >> 0 + 32;
//     // /* ADA38 850ADA38 00C53025 */  or         $a2, $a2, $a1
//     tmp2 = tmp2 | (u32)(tmp0 >> 31) ;
//     // /* ADA3C 850ADA3C 0004233C */  dsll32     $a0, $a0, 0xc
//     tmp0 = tmp0 << 44;
//     // /* ADA40 850ADA40 0004203E */  dsrl32     $a0, $a0, 0
//     tmp0 = tmp0 >> 32;
//     // /* ADA44 850ADA44 00C43026 */  xor        $a2, $a2, $a0
//     tmp2 = tmp2 ^ tmp0;
//     // /* ADA48 850ADA48 0006253A */  dsrl       $a0, $a2, 0x14
//     tmp0 = tmp2 >> 20;
//     // /* ADA4C 850ADA4C 30840FFF */  andi       $a0, $a0, 0xfff
//     tmp0 = tmp0 & 0xfff;
//     // /* ADA50 850ADA50 00862026 */  xor        $a0, $a0, $a2
//     tmp0 = tmp0 ^ tmp2;
//     // /* ADA54 850ADA54 3C018009 */  lui        $at, 0x8009
//     // /* ADA58 850ADA58 FC2485B0 */  sd         $a0, -0x7a50($at)
//     // D_800885B0 = tmp0;
//     ///* ADA60 850ADA60 03E00008 */  jr         $ra
//     * (u64 *) 0x800885B0 = tmp0;
//     return tmp0;
//     // /* ADA5C 850ADA5C 0004103C */  dsll32     $v0, $a0, 0
//     // tmp0 = tmp0 << 0 + 32;
//     // /* ADA64 850ADA64 0002103F */   dsra32    $v0, $v0, 0
//     // tmp0 = tmp0 >> 0 + 32;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_AD9A0/func_850ADA68.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_AD9A0/func_850ADACC.s")
// NON-MATCHING: hand-written function
// void func_850ADACC(s64 arg0) {
//     D_800885B0 = arg0 + 1;
// }
