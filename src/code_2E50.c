#include <ultra64.h>


// Unable to determine jump table for jr instruction.
#pragma GLOBAL_ASM("asm/nonmatchings/code_2E50/func_80002E50.s")
// void func_80002E50(void *arg0) {
//     void *sp5C;
//     ? sp58;
//     ? sp54;
//     s32 phi_s0;
//
//     sp5C = NULL;
// loop_1:
//     osRecvMesg(arg0->unk8, &sp5C, 1);
//     if ((u32) (sp5C->unk0 - 0xA) < 7U) {
//         // jr goes here
//         if (*(void *)0x8003A572 != 0) {
//             *(void *)0x8003A575 = (u8)1;
//             osStopThread(0x80035910);
//             *(void *)0x8003A575 = (u8)0;
//         }
//         *(void *)0x8003A573 = (u8)1;
//         osRecvMesg(arg0->unk10, &sp54, 1);
//         phi_s0 = arg0->unk14(0, sp5C->unkC, sp5C->unk8, sp5C->unk10);
//     } else {
//         phi_s0 = -1;
//     }
//     if (phi_s0 != 0) {
//         goto loop_1;
//     }
//     osRecvMesg(arg0->unkC, &sp58, 1);
//     osSendMesg(sp5C->unk4, sp5C, 0);
//     osSendMesg(arg0->unk10, 0, 0);
//     if (sp5C->unk0 != 0xB) {
//         goto loop_1;
//     }
//     *(void *)0x8003A573 = (u8)0;
//     goto loop_1;
// }
