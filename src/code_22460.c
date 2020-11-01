#include <ultra64.h>

#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/code_22460/func_80022460.s")

// void *func_80022460(void *arg0, void *arg1, void *arg2) {
//     void *sp34;
//     s16 sp32;
//     s32 sp2C;
//     s32 sp28;
//     f32 sp24;
//     void *sp20;
//     void *sp1C;
//     void *temp_t0;
//     void *temp_t4;
//
//     sp34 = arg2;
//     sp32 = 0x170;
//     if (arg0->unk50 != 0) {
//         sp34 = func_800214F0(arg0, &sp32, 0xB8, arg2);
//         temp_t0 = sp34;
//         sp34 = temp_t0 + 8;
//         sp20 = temp_t0;
//         sp20->unk0 = (s32) ((sp32 & 0xFFFFFF) | 0xA000000);
//         sp20->unk4 = (s32) (((*arg1 & 0xFFFF) << 0x10) | 0x170);
//     } else {
//         if (*(void *)0x8002C840 < (f64) arg0->unk4C) {
//             arg0->unk4C = (f32) *(void *)0x8002C848;
//         }
//         arg0->unk4C = (f32) (s32) (arg0->unk4C * 32768.0f);
//         arg0->unk4C = (f32) (arg0->unk4C / 32768.0f);
//         sp24 = arg0->unk54 + (arg0->unk4C * 184.0f);
//         sp2C = (s32) sp24;
//         arg0->unk54 = (f32) (sp24 - (f32) sp2C);
//         sp34 = func_800214F0(arg0, &sp32, sp2C, arg2);
//         sp28 = (s32) (arg0->unk4C * 32768.0f);
//         temp_t4 = sp34;
//         sp34 = temp_t4 + 8;
//         sp1C = temp_t4;
//         sp1C->unk0 = (s32) ((osVirtualToPhysical(arg0->unk48) & 0xFFFFFF) | 0x5000000);
//         sp1C->unk4 = (s32) (((arg0->unk58 & 3) << 0x1E) | ((sp28 & 0xFFFF) << 0xE) | ((sp32 & 0xFFF) * 4));
//         arg0->unk58 = 0;
//     }
//     return sp34;
// }
