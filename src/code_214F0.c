#include <ultra64.h>

#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/code_214F0/func_800214F0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_214F0/func_80021C40.s")
// ? func_80021C40(void *arg0, s32 arg1, s32 arg2) {
//     s32 temp_s0;
//     s32 temp_s0_2;
//     void *temp_t3;
//     void *temp_t3_2;
//
//     if (arg1 != 4) {
//         if (arg1 != 5) {
//
//         } else {
//             arg0->unk28 = arg2;
//             arg0->unk44 = (s32) *arg0->unk28;
//             arg0->unk38 = 0;
//             temp_t3 = arg0->unk28;
//             temp_t3->unk4 = (s32) (((s32) temp_t3->unk4 / 9) * 9);
//             if ((arg0->unk28->unk10 & 0xFF000003) != 0x80000000) {
//                 arg0->unk24 = 0;
//                 temp_s0 = arg0->unk24;
//                 arg0->unk20 = temp_s0;
//                 arg0->unk1C = temp_s0;
//             } else {
//                 temp_t3_2 = arg0->unk28->unk10;
//                 arg0->unk2C = (s32) (temp_t3_2->unk0 * 2 * temp_t3_2->unk4 * 8);
//                 if (arg0->unk28->unkC != 0) {
//                     arg0->unk1C = (s32) *arg0->unk28->unkC;
//                     arg0->unk20 = (s32) arg0->unk28->unkC->unk4;
//                     arg0->unk24 = (s32) arg0->unk28->unkC->unk8;
//                     bcopy(arg0->unk28->unkC + 0xC, arg0->unk18, 0x20);
//                 } else {
//                     arg0->unk24 = 0;
//                     temp_s0_2 = arg0->unk24;
//                     arg0->unk20 = temp_s0_2;
//                     arg0->unk1C = temp_s0_2;
//                 }
//             }
//         }
//     } else {
//         arg0->unk3C = 0;
//         arg0->unk40 = 1;
//         arg0->unk38 = 0;
//         if (arg0->unk28 != 0) {
//             arg0->unk44 = (s32) *arg0->unk28;
//             arg0->unk24 = 0;
//         }
//     }
//     return 0;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_214F0/func_80021E4C.s")
