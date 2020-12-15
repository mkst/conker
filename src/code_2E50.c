#include <ultra64.h>

#include "functions.h"
#include "variables.h"


extern void (*jtbl_8002C080[])(void);
#pragma GLOBAL_ASM("asm/nonmatchings/code_2E50/func_10002E50.s")
// NON-MATCHING: lots to figure out
// void func_10002E50(struct158 *arg0) {
//     s32 phi_s0;
//     struct188 tmp;
//
//     tmp.unk8 = NULL;
//
//     do {
//         osRecvMesg(arg0->unk8, &tmp.unk8, 1);
//         switch (tmp.unk8->unk0 - 0xA) {
//             case 7:
//                 // TODO: figure this out from the asm
//                 osStopThread(0);
//                 osRecvMesg(arg0->unk10, &tmp, 1);
//                 phi_s0 = 0;
//                 break;
//             case 1:
//                 jtbl_8002C080[tmp.unk8->unk0 - 0xA]();
//                 break;
//             case 2:
//                 osRecvMesg(arg0->unk10, &tmp, 1);
//                 phi_s0 = arg0->unk14(1, &tmp.unk8->unkC, &tmp.unk8->unk8, &tmp.unk8->unk10);
//                 break;
//             case 5:
//                 osRecvMesg(arg0->unk10, &tmp, 1);
//                 phi_s0 = arg0->unk18(&tmp.unk8->unk14, 0, &tmp.unk8->unkC, &tmp.unk8->unk8, &tmp.unk8->unk10);
//                 break;
//             case 6:
//                 osRecvMesg(arg0->unk10, &tmp, 1);
//                 phi_s0 = arg0->unk18(&tmp.unk8->unk14, 1, &tmp.unk8->unkC, &tmp.unk8->unk8, &tmp.unk8->unk10);
//                 break;
//             case 0:
//                 osSendMesg(tmp.unk8->unk4, tmp.unk8, 0);
//                 phi_s0 = -1;
//                 break;
//             default:
//                 phi_s0 = -1;
//         }
//         if (phi_s0 != 0) {
//             continue;
//         }
//         osRecvMesg(arg0->unkC, &tmp.unk4, 1);
//         osSendMesg(tmp.unk8->unk4, tmp.unk8, 0);
//         osSendMesg(arg0->unk10, 0, 0);
//         if (tmp.unk8->unk0 != 0xB) {
//             continue;
//         }
//         D_8003A573 = (u8)0;
//     } while (1);
// }
