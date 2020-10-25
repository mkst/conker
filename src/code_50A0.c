#include <ultra64.h>

#include "functions.h"
#include "variables.h"

#pragma GLOBAL_ASM("asm/nonmatchings/code_50A0/func_800050A0.s")
// not quite matching
// void func_800050A0(OSMesgQueue *arg0) {
//     D_8003B260 = 0;
//     D_8003B264 = 0xFEFEFEFE;
//     D_8003B234 = 0;
//     D_8003B230 = arg0;
//     D_8003B238 = 0xFF;
//     D_8003B239 = 0;
//     D_8003B23A = 0;
//     osCreateMesgQueue(&D_8003B1E8, &D_8003B660, 3);
//     osCreateMesgQueue(&D_8003B200, &D_8003B670, 1);
//     osCreateMesgQueue(&D_8003B218, &D_8003B680, 8);
//     func_800039C0();
//     osViSetEvent(&D_8003B218, 0, 1);
//     osSetEventMesg(9, &D_8003B218, 1);
//     osSetEventMesg(4, &D_8003B218, 2);
//     osCreateThread(&D_8003B6A0, 0x14, &D_100049E0, 0, &D_8003B660, 0xD);
//     osStartThread(&D_8003B6A0);
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_50A0/func_800051C8.s")
// void *func_800051C8(void *arg0, OSMesgQueue *arg1) {
//     arg0->unk4 = arg1;
//     arg0->unk0 = (void *) *(void *)0x8003B234;
//     *(void *)0x8003B234 = arg0;
//     return (void *)0x8003B234;
// }

void func_800051E8(void) {
    osSendMesg(D_8003B230, &D_8003B240, 0);
}

void func_80005218(void) {
    osCreateMesgQueue(&D_8003B9D0, &D_8003B9E8, 2);
    osSetEventMesg(0xE, &D_8003B9D0, 5);
    osCreateThread(&D_8003B9F0, 0x15, &D_100052A0, 0, &D_8003B9D0, 0xFA);
    osStartThread(&D_8003B9F0);
}

void func_80005298(void) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_50A0/func_800052A0.s")
// no thankyou
// void func_800052A0(s32 arg0) {
//     OSMesg *sp4C; // was ?32
//     s32 temp_ret;
//     s32 temp_s0;
//     s32 temp_s1;
//     u32 temp_ret_2;
//     u32 temp_ret_3;
//     u32 temp_ret_4;
//     u32 temp_ret_5;
//     u32 temp_t2;
//     u32 temp_t3;
//     u32 temp_t4;
//     u32 temp_t5;
//     u32 temp_t6;
//     u32 temp_t7;
//     u32 temp_t8;
//     u32 temp_t9;
//     u32 temp_v0;
//     u32 temp_v0_2;
//     u32 temp_v0_3;
//     u32 temp_v0_4;
//     u32 temp_v1;
//     void *phi_s2;
//     s32 phi_s0;
//
//     sp4C = 0;
//     if (D_8002BD18 == 0) {
//         osRecvMesg(&D_8003B9D0, &sp4C, 1);
//     }
//     D_8002AC5C = 1;
//     osStopThread(&D_80035910);
//     osStopThread(&D_80031AE0);
//     func_800093CC();
//     temp_ret = osGetTime();
//     temp_v1 = (u32) (u64) temp_ret;
//     D_8003BC20 = temp_ret;
//     D_8003BC24 = temp_v1;
//     func_800242B0();
//     D_8002AAE0 = 1;
//     osSetThreadPri(0, 0xB);
//     if (D_8002AAE4 != 0) {
//         if (D_80084064 == 0) {
//             osRecvMesg(&D_800BE900, &D_800BE990, 1);
//         }
//         phi_s2 = D_800BE944;
//         phi_s0 = 0;
//         do
//         {
//             if (*phi_s2 != 0) {
//                 temp_s1 = (phi_s0 * 0x68) + D_800BE760;
//                 func_800057E0(&D_800BE900, temp_s1, phi_s0);
//                 func_80005570(temp_s1);
//                 *(phi_s0 + D_800BE948) = (u8)0;
//             }
//             temp_s0 = phi_s0 + 1;
//             phi_s2 = phi_s2 + 1;
//             phi_s0 = temp_s0;
//         } while (temp_s0 != 4);
//     }
//     temp_ret_2 = osGetTime();
//     temp_v0 = temp_ret_2;
//     temp_t5 = D_8003BC24 + 2272727;
//     temp_t4 = D_8003BC20 + (temp_t5 < 2272727);
//     if (temp_t4 >= temp_v0) {
//         if ((temp_v0 < temp_t4) || ((u32) (u64) temp_ret_2 < temp_t5)) {
//             do
//             {
//                 do
//                 {
//                     temp_ret_3 = osGetTime();
//                     temp_v0_2 = temp_ret_3;
//                     temp_t9 = D_8003BC24 + 2272727;
//                     temp_t8 = D_8003BC20 + (temp_t9 < 2272727);
//                 } while (temp_v0_2 < temp_t8);
//             } while ((temp_t8 >= temp_v0_2) && ((u32) (u64) temp_ret_3 < temp_t9));
//         }
//     }
//     temp_ret_4 = osGetTime();
//     temp_v0_3 = temp_ret_4;
//     temp_t3 = D_8003BC24 + 7500000;
//     temp_t2 = D_8003BC20 + (temp_t3 < 7500000);
//     if (temp_t2 >= temp_v0_3) {
//         if ((temp_v0_3 < temp_t2) || ((u32) (u64) temp_ret_4 < temp_t3)) {
//             do
//             {
//                 do
//                 {
//                     temp_ret_5 = osGetTime();
//                     temp_v0_4 = temp_ret_5;
//                     temp_t7 = D_8003BC24 + 7500000;
//                     temp_t6 = D_8003BC20 + (temp_t7 < 7500000);
//                 } while (temp_v0_4 < temp_t6);
//             } while ((temp_t6 >= temp_v0_4) && ((u32) (u64) temp_ret_5 < temp_t7));
//         }
//     }
//     osWritebackDCacheAll();
//     while(1);
// }
