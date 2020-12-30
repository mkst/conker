#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_10004470(void) {
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

s32 func_10004514(s32 devAddr, void *dramAddr, u32 size, s32 arg3) {
    OSMesgQueue *msgQueue;
    OSIoMesg tmpIoMsg;
    OSIoMesg *ioMsg;
    s32 sp3c;

    sp3c = __osRunningThread->id - 3;
    if ((size < 0xC8U) && (sp3c == 0)) {
        func_1000480C(devAddr, dramAddr, size);
        return;
    }
    if ((sp3c >= 4) || ( sp3c < 0)) {
        sp3c = 0;
    }
    if (arg3 == 0) {
        if (D_8003A571 != 300) { // messages waiting?
            ioMsg = &D_80038950[D_8003A570];
            msgQueue = &gMessageQueue0;
            if (D_8003A570 == 299) { // number of message queues used?
                D_8003A570 = 0;
            } else {
                D_8003A570 += 1U;
            }
            D_8003A571 += 1U;
        } else {
            return;
        }
    } else {
        ioMsg = &tmpIoMsg;
        msgQueue = &gMessageQueue[sp3c];
    }
    osInvalDCache(dramAddr, size);
    osPiStartDma(ioMsg, 0, 0, devAddr, dramAddr, size, msgQueue);

    if (arg3 != 0) {
        osRecvMesg(msgQueue, 0, OS_MESG_BLOCK);
    }
}

void func_10004674(void) {
    int i;
    for (i = 0; i < D_8003A571; i++)
    {
        osRecvMesg(&gMessageQueue0, 0, OS_MESG_BLOCK);
    }

    D_8003A571 = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_4470/func_100046E4.s")
// NON-MATCHING: stack isnt right
// void func_100046E4(s32 devAddr, void *dramAddr, u32 size) {
//     s32 _dramAddr;
//     s32 idx;
//     s32 threadId;
//     s32 _devAddr; // pad
//     OSMesgQueue *mesgQueue;
//     OSIoMesg *sp68;
//     OSIoMesg *sp64; // mesg?
//     u32 _size;
//     u32 sent;
//
//
//     threadId = __osRunningThread->id - 3;
//     if ((threadId >= 4) || (idx = threadId, (threadId < 0))) {
//         idx = 0;
//     }
//     sent = 0;
//     osInvalDCache(dramAddr, size);
//     if (size != 0) {
//         mesgQueue =  &gMessageQueue[idx];
//         _dramAddr = dramAddr;
//         // _devAddr = devAddr;
//         do {
//             if ((size - sent) < 81920) {
//                 _size = size - sent;
//             } else {
//                 _size = 81920;
//             }
//             osPiStartDma(&sp68, 0, 0, devAddr, _dramAddr, _size, mesgQueue);
//             osRecvMesg(mesgQueue, &sp64, 1);
//             sent += _size;
//             devAddr += _size;
//             _dramAddr += _size;
//         } while (sent < size) ;
//     }
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_4470/func_1000480C.s")
// void func_1000480C(s32 devAddr, void *dramAddr, u32 size) {
//     s32 sp38;
//     s32 *temp_t0;
//     s32 *temp_t0_2;
//     s32 temp_a1;
//     s32 temp_s0;
//     s32 temp_s1;
//     s32 temp_t4;
//     s32 temp_t7;
//     u32 temp_a0;
//     u32 temp_a0_2;
//     u32 temp_a2;
//     u32 temp_a2_2;
//     void *temp_v0;
//     void *temp_v0_2;
//     s32 phi_a1;
//     void *phi_v0;
//     u32 phi_a0;
//     u32 phi_a0_2;
//     s32 phi_v1;
//     void *phi_v0_2;
//     u32 phi_a0_3;
//     u32 phi_a0_4;
//     void *phi_a1_2;
//     u32 phi_a2;
//
//     D_8003A572 = 1;
//     size = (size + 1) & ~1;
//     do {} while (D_8003A573 != 0);
//
//     temp_a2 = size - 2;
//
//     while ((IO_READ(PI_STATUS_REG) & (PI_STATUS_DMA_BUSY|PI_STATUS_IO_BUSY)) != 0) {};
//
//     temp_t0 = &sp38;
//     devAddr = devAddr | D_80000308;
//     if ((devAddr & 2) != 0) {
//         temp_s0 = size - 2;
//         sp38 = *((s32*)((devAddr - 2) | 0xA0000000));
// //         temp_a2_2 = temp_s0 - 2;
// //         *dramAddr = (u16) temp_t0->unk2;
// //         phi_a0_2 = 0U;
// //         phi_a1_2 = dramAddr;
// //         // phi_return = (void *) *(void *)0xA4600010;
// //         if (temp_a2_2 != 0) {
// //             phi_a1 = devAddr + 2;
// //             phi_v0 = dramAddr;
// //             phi_a0 = 0U;
// // loop_7:
// //             temp_t4 = *(phi_a1 | 0xA0000000);
// //             temp_a0 = phi_a0 + 4;
// //             sp38 = temp_t4;
// //             phi_v0->unk2 = (s16) (temp_t4 >> 0x10);
// //             temp_a1 = phi_a1 + 4;
// //             temp_v0 = phi_v0 + 4;
// //             *temp_v0 = (s16) sp38;
// //             phi_a1 = temp_a1;
// //             phi_v0 = temp_v0;
// //             phi_a0 = temp_a0;
// //             phi_a0_2 = temp_a0;
// //             phi_a1_2 = (void *) temp_a1;
// //             if (temp_a0 < temp_a2_2) {
// //                 goto loop_7;
// //             }
// //         }
// //         phi_a2 = temp_a2_2;
// //         if ((temp_s0 & 2) != 0) {
// //             sp38 = *((devAddr + phi_a0_2 + 2) | 0xA0000000);
// //             (dramAddr + phi_a0_2)->unk2 = (u16) temp_t0->unk0;
// //             phi_a2 = temp_a2_2;
// //         }
//     } else {
// //         phi_a0_4 = 0U;
// //         if (temp_a2 != 0) {
// //             phi_v1 = devAddr;
// //             phi_v0_2 = dramAddr;
// //             phi_a0_3 = 0U;
// // loop_12:
// //             temp_a0_2 = phi_a0_3 + 4;
// //             temp_v0_2 = phi_v0_2 + 4;
// //             temp_v0_2->unk-4 = (s32) *(phi_v1 | 0xA0000000);
// //             phi_v1 = phi_v1 + 4;
// //             phi_v0_2 = temp_v0_2;
// //             phi_a0_3 = temp_a0_2;
// //             phi_a0_4 = temp_a0_2;
// //             if (temp_a0_2 < temp_a2) {
// //                 goto loop_12;
// //             }
// //         }
// //         phi_a1_2 = dramAddr;
// //         phi_a2 = temp_a2;
// //         if ((size & 2) != 0) {
// //             temp_t0_2 = &sp38;
// //             sp38 = *((phi_a0_4 + devAddr) | 0xA0000000);
// //             *(dramAddr + phi_a0_4) = (u16) temp_t0_2->unk0;
// //             phi_a1_2 = dramAddr;
// //             phi_a2 = temp_a2;
// //         }
//     }
//     D_8003A572 = (u8)0;
//     if (D_8003A575 != 0) {
//         osStartThread(&D_80035910); //, phi_a1_2, phi_a2, 0xA0000000);
//     }
// }
