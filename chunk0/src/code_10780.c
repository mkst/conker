#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_15010780(void) {
    func_15177410(1, 255,    0, 108, 0, 0.0f, 15000, 80.0f, 77, 15, 127, 127, 127, 127, 127, 127);
    func_15177410(0, 255, 6628, 108, 0, 0.0f, 15000, 80.0f, 77, 15, 127, 127, 127, 127, 127, 127);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_10780/func_15010880.s")
// NON-MATCHING: ops in wrong order
// void func_15010880(void) {
//     struct177 tmp;
//     struct37 *temp_v0;
//
//     func_15177410(0x10, 0xE9, -437, 0x463, -0xCBF, 90.0f, 15000, 36.0f, 0x4D, 15, 127, 127, 127, 127, 127, 127);
//
//     D_800E0934 = func_150DE32C;
//
//     tmp.unk0 = 0;
//     tmp.unk4 = &D_800D3098->unkEA0;
//     tmp.unk8 = &D_800D3098->unkED4;
//
//     temp_v0 = func_15149130(300, -1, 94, -1, 0, 0, 12, 255, 1);
//     if (temp_v0 != NULL) {
//         func_10022EC0(&temp_v0->unk28, &tmp, 12); // memcpy
//     }
//     if ((D_800D2E4C->unk12 & 0x40) != 0) {
//         func_15149130(5, 9, -1, -1, 1, 0, 0, 255, 1);
//     }
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_10780/func_150109D0.s")
// NON-MATCHING: just nonsense...
// void func_150109D0(void) {
//     struct179 tmp;
//
//     tmp.unk20 = 0;
//     tmp.unk4.unk0 = D_80096430->unk0;
//     tmp.unk4.unk4 = D_80096430->unk4;
//     tmp.unk4.unk8 = D_80096430->unk8;
//     tmp.unk4.unkC = D_80096430->unkC;
//     tmp.unk4.unk10 = D_80096430->unk10;
//     tmp.unk4.unk14 = D_80096430->unk14;
//     tmp.unk0 = 1;
//     tmp.unk1C = fabsf(tmp.unk4.unk4 - tmp.unk4.unk10);
//     func_151ACBD4(&tmp, 0);
//     func_150E8854();
// }
