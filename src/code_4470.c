#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_80004470(void) {
    int i;
    osCreatePiManager(150, &D_800388B0, &D_800380E0, 0xC8);

    for (i = 0; i < 3; i++)
    {
        osCreateMesgQueue(&gMessageQueue[i], &gMessages[i], 1);
    }

    osCreateMesgQueue(&gMessageQueue0, &gMessage0, 300);
    D_8003A570 = 0;
    D_8003A571 = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_4470/func_80004514.s")
// NON-MATCHING: still a fair bit to clean up
// s32 func_80004514(s32 devAddr, void *dramAddr, u32 size, s32 arg3) {
//     OSMesgQueue *mesgQueue;
//     s32 sp3C;
//     OSIoMesg *sp38;
//     s32 threadId;
//     s32 phi_v0;
//     s32 phi_return;
//
//     threadId = __osRunningThread->id - 3;
//     if ((size < 200) && (threadId == 0)) {
//         return func_8000480C(devAddr, dramAddr, size);
//     }
//     if ((threadId >= 4) || (phi_v0 = threadId, phi_return = threadId, (threadId < 0))) {
//         phi_v0 = 0;
//         phi_return = 0;
//     }
//     if (arg3 == 0) {
//         if (D_8003A571 != 300) {
//             sp38 = &D_80038950[D_8003A570];
//             mesgQueue = &gMessageQueue0;
//             if (D_8003A570 == 299) {
//                 D_8003A570 = 0;
//             } else {
//                 D_8003A570 += 1;
//             }
//             D_8003A571 += 1;
//         }
//     } else {
//         sp38 = &sp3C;
//         mesgQueue = &gMessageQueue[phi_v0];
//     }
//
//     osInvalDCache(dramAddr, size);
//     phi_return = osPiStartDma(sp38, 0, 0, devAddr, dramAddr, size, mesgQueue);
//     if (arg3 != 0) {
//         phi_return = osRecvMesg(mesgQueue, 0, 1);
//     }
//
//     return phi_return;
// }

void func_80004674(void) {
    int i;
    for (i = 0; i < D_8003A571; i++)
    {
        osRecvMesg(&gMessageQueue0, 0, OS_MESG_BLOCK);
    }

    D_8003A571 = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_4470/func_800046E4.s")
// NON-MATCHING: similar state to func_80004514
// void func_800046E4(s32 devAddr, void *dramAddr, u32 size) {
//     OSMesgQueue *mesgQueue;
//     s32 idx;
//     s32 _dramAddr;
//     s32 _devAddr;
//     s32 threadId;
//     void *sp64; // mesg?
//     OSIoMesg *sp68;
//     u32 _size;
//     u32 sent;
//
//     threadId = __osRunningThread->id - 3;
//     if ((threadId >= 4) || (idx = threadId, (threadId < 0))) {
//         idx = 0;
//     }
//     osInvalDCache(dramAddr, size);
//     if (size != 0) {
//         mesgQueue =  &gMessageQueue[idx];
//         sent = 0;
//         _dramAddr = dramAddr;
//         _devAddr = devAddr;
//         do {
//             if ((size - sent) < 81920) {
//                 _size = size - sent;
//             } else {
//                 _size = 81920;
//             }
//             // s32 osPiStartDma(OSIoMesg *mb, s32 priority, s32 direction, u32 devAddr, void *dramAddr, u32 size, OSMesgQueue *mq)
//             osPiStartDma(&sp68, 0, 0, _devAddr, _dramAddr, _size, mesgQueue);
//             osRecvMesg(mesgQueue, &sp64, 1);
//             sent += _size;
//             _devAddr += _size;
//             _dramAddr += _size;
//         } while (sent < size) ;
//     }
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_4470/func_8000480C.s")
