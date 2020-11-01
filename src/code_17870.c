#include <ultra64.h>

#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/code_17870/func_80017870.s")
// NON-MATCHING: fair bit wrong here
// void func_80017870(u8 arg0 /*, s32 arg1*/) {
//     s32 i;
//     s32 pad;
//     s32 pad1;
//     s32 pad2;
//
//     D_800428C0 = 0;
//     D_800428C1 = 0;
//     D_800428C2 = 0;
//
//     if (arg0 != 1) {
//         if (arg0 != 3) {
//             if (arg0 != 4) {
//                 if (0) {};
//                 D_800428C0 = 1;
//             } else {
//                 // nothing
//             }
//         } else {
//             D_800428C2 = 1;
//         }
//     } else {
//         D_800428C1 = 1;
//         if (0) {};
//     }
//
//     for (i = 0; i < 2; i++)
//     {
//         func_80017944(i, 0);
//     }
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_17870/func_80017944.s")
// NON-MATCHING: needs some TLC
// void func_80017944(u32 arg0, u32 arg1) {
//     u32 pad;
//     if (arg1 == 0) {
//         arg1 = D_800428C8[arg0];
//     }
//     D_800428C4[arg0] = 0;
//     D_800428C6[arg0] = 0;
//     if (arg1 != 2) {
//         if (arg1 != 3) {
//             if (arg1 != 4) {
//                 if (arg1 != 5) {
//                   // D_800428C4[arg0] = (u8)1;
//                 } else if (D_800428C1 != 0) {
//                     D_800428C6[arg0] = (u8)1;
//                 }
//             } else if (D_800428C1 != 0) {
//                 D_800428C4[arg0] = (u8)1;
//             }
//         } else if (D_800428C0 == 0) {
//             D_800428C4[arg0] = (u8)1;
//         }
//     } else if (D_800428C0 == 0) {
//         D_800428C6[arg0] = (u8)1;
//     }
//     D_800428C8[arg0] = arg1;
// }

s32 func_80017A80(struct26 *arg0) {
    return arg0->unk2C;
}
