#include <ultra64.h>

#include "functions.h"
#include "variables.h"

#pragma GLOBAL_ASM("asm/nonmatchings/code_2E50/func_80002E50.s")

typedef struct {
  s32 unk0;
  s32 unk4;
  OSMesgQueue *unk8;
  s32 unkC;
  s32 unk10;
  s32 unk14;
  s32 unk18;
} struct0;

extern struct0 *D_8002AB50;

#pragma GLOBAL_ASM("asm/nonmatchings/code_2E50/func_800030A0.s")
// far from matching
// void func_800030A0(OSPri priority, OSMesgQueue *mesgQueue, OSMesg *arg2, s32 arg3) {
//     s32 foo;
//     OSPri targetPrio;
//     OSPri currentPrio;
//
//     if (D_8002AB50->unk0 == 0) {
//         osCreateMesgQueue(mesgQueue, arg2, arg3);
//         osCreateMesgQueue(&D_80036B40, &D_80036B58, 1);
//         if (D_8002BD60 == 0) {
//             func_800236D0();
//         }
//         osSetEventMesg(8, &D_80036B40, 0x22222222);
//         targetPrio = -1;
//         currentPrio = osGetThreadPri(0);
//         if (currentPrio < priority) {
//             targetPrio = currentPrio;
//             osSetThreadPri(0, priority);
//         }
//         foo = func_80022DC0();
//         D_8002AB50->unk0 = 1;
//         D_8002AB50->unk4 = &D_80035910;
//         D_8002AB50->unkC = &D_80036B40;
//         D_8002AB50->unk10 = &D_800428F8;
//         D_8002AB50->unk14 = &D_10023850;
//         D_8002AB50->unk18 = &D_10023930;
//         D_8002AB50->unk8 = &mesgQueue;
//         osCreateThread(&D_80035910, 0, &D_10002E50, D_8002AB50, &D_80036B40, priority);
//         osStartThread(&D_80035910);
//         func_80022DE0(foo);
//         if (targetPrio != -1) {
//             osSetThreadPri(0, targetPrio);
//         }
//     }
// }
