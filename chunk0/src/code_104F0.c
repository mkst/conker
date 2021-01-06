#include <ultra64.h>
#include "functions.h"
#include "variables.h"


// ???
#pragma GLOBAL_ASM("asm/nonmatchings/code_104F0/func_150104F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_104F0/func_15010538.s")
// NON-MATCHING: close but ops in wrong order
// void func_15010538(struct127 *arg0) {
//     struct175 tmp;
//     struct37 *temp_v0;
//
//     func_15161E24(arg0, 2, 2, 300, 30, 100, 200, 255, 255, 1);
//
//     tmp.unk0 = arg0;
//     tmp.unk4 = arg0->unk3B;
//     tmp.unk6 = tmp.unk8 = tmp.unkA = 0;
//
//     temp_v0 = func_15149130(300, -1, 80, -1, 0, 61, 12, 255, 1);
//     if (temp_v0 != NULL) {
//         func_10022EC0((s32)&temp_v0->unk28, &tmp, 12); // memcpy
//     }
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_104F0/func_15010600.s")
// NON-MATCHING: addresses are wrong :(
// void func_15010600(void) {
//     s32 i;
//
//     for (i = 0; i < 11; i++) {
//         D_800D9930[i] = D_800D9920[i] = 0;
//     }
// }
