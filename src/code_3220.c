#include <ultra64.h>

#include "functions.h"
#include "variables.h"

#pragma GLOBAL_ASM("asm/nonmatchings/code_3220/func_80003220.s")
// NON-MATCHING: using v0 instead of a0
// struct0* func_80003220(struct0 *arg0) {
//     bcopy(arg0, &D_80036B60, 64);
//     if (D_80036B70) {
//         D_80036B70 = osVirtualToPhysical(D_80036B70);
//     }
//     if (D_80036B78) {
//         D_80036B78 = osVirtualToPhysical(D_80036B78);
//     }
//     if (D_80036B80) {
//         D_80036B80 = osVirtualToPhysical(D_80036B80);
//     }
//     if (D_80036B88) {
//         D_80036B88 = osVirtualToPhysical(D_80036B88);
//     }
//     if (D_80036B8C) {
//         D_80036B8C = osVirtualToPhysical(D_80036B8C);
//     }
//     if (D_80036B90) {
//         D_80036B90 = osVirtualToPhysical(D_80036B90);
//     }
//     if (D_80036B98) {
//         D_80036B98 = osVirtualToPhysical(D_80036B98);
//     }
//     return &D_80036B60;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_3220/func_80003330.s")
// NON-MATCHING: extra lw
// void func_80003330(struct0 *arg0) {
//     struct0 *tmp = func_80003220(arg0);
//
//     if ((tmp->unk4 & 1) != 0) {
//         tmp->unk18 = tmp->unk38;
//         tmp->unk1C = tmp->unk3C;
//         arg0->unk4 &= -2;
//         if (tmp->unk4 & 4) {
//             tmp->unk10 = (arg0->unk38 + 0xBFC) | 0xA0000000;
//         }
//     }
//     func_80023D20(tmp, 64);   // osWritebackDCache
//     func_80023DA0(0x2B00);    // __osSpSetStatus
//
//     while (func_80023DB0(0x4001000) == -1) {};                          // __osSpSetPc
//     while (func_80023DF0(1, 0x4000FC0, tmp, 64) == -1) {};              // __osSpRawStartDma
//     while (__osSpDeviceBusy()) {};                                         // __osSpDeviceBusy
//     while (func_80023DF0(1, 0x4001000, tmp->unk8, tmp->unkC) == -1) {}; // __osSpRawStartDma
// }

void func_8000349C(s32 arg0) {
    while(__osSpDeviceBusy() != 0);
    __osSpSetStatus(0x125);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_3220/func_800034E0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_3220/func_80003658.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_3220/osCreateThread.s")
