#include <ultra64.h>

#include "functions.h"
#include "variables.h"

#pragma GLOBAL_ASM("asm/nonmatchings/code_3220/func_80003220.s")
// non-matching, uses a0 not a1
// s32 func_80003220(void) {
//     func_80023A10(&D_80036B60, 64); // bzero?
//     if (D_80036B70) {
//         D_80036B70 = func_800233C0(D_80036B70); // osVirtualToPhysical?
//     }
//     if (D_80036B78) {
//         D_80036B78 = func_800233C0(D_80036B78);
//     }
//     if (D_80036B80) {
//         D_80036B80 = func_800233C0(D_80036B80);
//     }
//     if (D_80036B88) {
//         D_80036B88 = func_800233C0(D_80036B88);
//     }
//     if (D_80036B8C) {
//         D_80036B8C = func_800233C0(D_80036B8C);
//     }
//     if (D_80036B90) {
//         D_80036B90 = func_800233C0(D_80036B90);
//     }
//     if (D_80036B98) {
//         D_80036B98 = func_800233C0(D_80036B98);
//     }
//     return &D_80036B60;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_3220/func_80003330.s")

void func_8000349C(s32 arg0) {
    while(func_80023E80() != 0);
    func_80023DA0(0x125);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_3220/func_800034E0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_3220/func_80003658.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_3220/osCreateThread.s")
