#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_15016670(void) {
    D_800D18C0 = 0;
}

void func_15016680(void) {
    D_800D212C = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_16670/func_15016690.s")
// NON-MATCHING: 95% there
// void func_15016690(s32 arg0) {
//     D_800D2120 = -1;
//     D_800D2124 = -1;
//     D_800D2128 = func_1502B7F0(&D_800D212C, 3, 12, arg0, 6) / 0x18U;
//
//     if (D_800D2128 == NULL) {
//         D_800D212C = func_10003C40(24, 1, 0, 0);
//         D_800D2128 = 1U;
//         if (D_800D20FC) {
//             D_800D212C->unk0 = D_800D20FC->unk6;
//             D_800D212C->unk2 = D_800D20FC->unk8;
//             D_800D212C->unk4 = D_800D20FC->unkA;
//             D_800D212C->unk8 = D_800D20FC->unk6 + 0x64;
//             D_800D212C->unkC = D_800D20FC->unk8 + 0x64;
//             D_800D212C->unk10 = D_800D20FC->unkA;
//             D_800D212C->unk6 = 0;
//             D_800D212C->unk7 = D_800D20FC->unkC;
//             D_800D212C->unk15 = 0;
//         } else {
//             D_800D212C->unk0 = 0xE10;
//             D_800D212C->unk2 = -0xC80;
//             D_800D212C->unk4 = -0x898;
//             D_800D212C->unk10 = 1000.0f;
//             D_800D212C->unk8 = D_800D212C->unkC = D_800D212C->unk10;
//             D_800D212C->unk6 = 0;
//             D_800D212C->unk7 = 0;
//             D_800D212C->unk15 = 0;
//           }
//     }
// }
