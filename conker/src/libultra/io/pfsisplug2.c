#include <os_internal.h>
#include "controller.h"
#include "siint.h"


extern OSPifRam __osPfsPifRam; // D_800429D0
extern u8 _osLastSentSiCmd;   // D_80042A50
extern u8 _osContNumControllers; // D_80042A51 (__osMaxControllers) ?
// extern u8 __osMaxControllers; // D_80042A51

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/io/pfsisplug2/osPfsIsPlug2.s")
// s32 osPfsIsPlug2(OSMesgQueue *queue, u8 *pattern)
// {
//     s32 ret;
//     OSMesg dummy;
//     u8 bitpattern;
//     OSContStatus data[MAXCONTROLLERS];
//     int channel;
//     u8 bits;
//     int crc_error_cnt;
//     ret = 0;
//     bits = 0;
//     crc_error_cnt = 3;
//     __osSiGetAccess();
//     while (TRUE)
//     {
//         __osPfsRequestData(CONT_CMD_REQUEST_STATUS);
//         ret = __osSiRawStartDma(OS_WRITE, &__osPfsPifRam);
//         osRecvMesg(queue, &dummy, OS_MESG_BLOCK);
//         ret = __osSiRawStartDma(OS_READ, &__osPfsPifRam);
//         osRecvMesg(queue, &dummy, OS_MESG_BLOCK);
//         __osPfsGetInitData(&bitpattern, data);
//         for (channel = 0; channel < _osContNumControllers; channel++)
//         {
//             if ((data[channel].status & CONT_ADDR_CRC_ER) == 0)
//             {
//                 crc_error_cnt--;
//                 break;
//             }
//         }
//         if (_osContNumControllers == channel)
//             crc_error_cnt = 0;
//         if (crc_error_cnt < 1)
//         {
//             for (channel = 0; channel < _osContNumControllers; channel++)
//             {
//                 if (data[channel].errno == 0 && (data[channel].status & CONT_CARD_ON) != 0)
//                     bits |= 1 << channel;
//             }
//             __osSiRelAccess();
//             *pattern = bits;
//             return ret;
//         }
//     }
// }

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/io/pfsisplug2/__osPfsRequestData2.s")
// void __osPfsRequestData2(u8 cmd) {
//     u8 *ptr;
//     __OSContRequesFormat requestformat;
//     int i;
//
//     _osLastSentSiCmd = cmd;
//
//     for (i = 0; i < ARRLEN(__osPfsPifRam.ramarray) + 1; i++) { // also clear pifstatus
//         __osPfsPifRam.ramarray[i] = 0;
//     }
//
//     __osPfsPifRam.pifstatus = CONT_CMD_EXE;
//
//     ptr = (u8 *)&__osPfsPifRam;
//     requestformat.dummy = CONT_CMD_NOP;
//     requestformat.txsize = CONT_CMD_REQUEST_STATUS_TX;
//     requestformat.rxsize = CONT_CMD_REQUEST_STATUS_RX;
//     requestformat.cmd = cmd;
//     requestformat.typeh = CONT_CMD_NOP;
//     requestformat.typel = CONT_CMD_NOP;
//     requestformat.status = CONT_CMD_NOP;
//     requestformat.dummy1 = CONT_CMD_NOP;
//     for (i = 0; i < _osContNumControllers; i++) {
//         *(__OSContRequesFormat *)ptr = requestformat;
//         ptr += sizeof(__OSContRequesFormat);
//     }
//     *ptr = CONT_CMD_END;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/io/pfsisplug2/__osPfsGetInitData2.s")
// void __osPfsGetInitData2(u8 *pattern, OSContStatus *data)
// {
//     u8 *ptr;
//     __OSContRequesFormat requestformat;
//     int i;
//     u8 bits;
//     bits = 0;
//     ptr = (u8 *)&__osPfsPifRam;
//     for (i = 0; i < _osContNumControllers; i++, ptr += sizeof(__OSContRequesFormat))
//     {
//         requestformat = *(__OSContRequesFormat *)ptr;
//         data->errno = CHNL_ERR(requestformat);
//         if (data->errno == 0)
//         {
//             data->type = (requestformat.typel << 8) | (requestformat.typeh);
//             data->status = requestformat.status;
//             bits |= 1 << i;
//         }
//         data++;
//     }
//     *pattern = bits;
// }
