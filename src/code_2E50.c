#include <ultra64.h>

#include "functions.h"
#include "variables.h"


// Unable to determine jump table for jr instruction.
#pragma GLOBAL_ASM("asm/nonmatchings/code_2E50/func_80002E50.s")
// void func_80002E50(struct158 *arg0) {
//     s32 phi_s0;
//     struct158 *sp5C;
//     s32 sp58;
//     s32 sp54;
//
//     sp5C = NULL;
//     do {
//         osRecvMesg(&arg0->unk8, &sp5C, 1);
//         if ((u32) (sp5C->unk0 - 10) < 7U) {
//             jump_relative();             // jr goes here
//             if (D_8003A572 != 0) {
//                 D_8003A575 = 1;
//                 osStopThread(D_80035910);
//                 D_8003A575 = 0;
//             }
//             D_8003A573 = 1;
//             osRecvMesg(&arg0->unk10, &sp54, 1);
//             phi_s0 = arg0->unk14(0, &sp5C->unkC, &sp5C->unk8, &sp5C->unk10);
//         } else {
//             phi_s0 = -1;
//         }
//         if (phi_s0 != 0) {
//             continue;
//         }
//         osRecvMesg(&arg0->unkC, sp58, 1);
//         osSendMesg(&sp5C->unk4, sp5C, 0);
//         osSendMesg(&arg0->unk10, 0, 0);
//         if (sp5C->unk0 != 11) {
//             continue;
//         }
//         D_8003A573 = 0;
//     } while (1);
// }
