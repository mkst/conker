#include <ultra64.h>

#include "functions.h"
#include "variables.h"


// contains jr
#pragma GLOBAL_ASM("asm/nonmatchings/init_49E0/func_100049E0.s")
// void func_100049E0(s32 arg0) {
//     u32 sp64;
//     s32 sp5C;
//     s32 sp58;
//     u8 temp_v0;
//     u8 temp_v0_2;
//     void *temp_s0;
//     void *temp_s0_2;
//     void *temp_v0_3;
//     void *phi_s0;
//
//     D_8003A581 = (u8)0U;
//     D_8003A582 = (u8)0U;
//     D_8003A584 = (u8)1U;
//     D_8003A583 = (u8)0U;
//     D_8003B240 = (u16)1;
//     sp64 = 0;
//     D_8003A5C8 = (u16)4;
// default:
// loop_1:
//     osRecvMesg(&D_8003B218, &sp64, (u16)1);
//     if (sp64 >= 7U) {
//         goto loop_1;
//     }
//     goto **(&jtbl_8002C0A0 + (sp64 * 4));
// case 0:
//     temp_s0 = D_8003B234;
//     phi_s0 = temp_s0;
//     if (temp_s0 != 0) {
// loop_4:
//         if ((phi_s0->unk8 & 1) == 0) {
//             osSendMesg(phi_s0->unk4, D_8003B240, 0);
//         }
//         temp_s0_2 = phi_s0->unk0;
//         phi_s0 = temp_s0_2;
//         if (temp_s0_2 != 0) {
//             goto loop_4;
//         }
//     }
//     temp_v0 = D_8003B238;
//     if ((temp_v0 != 0xFF) && ((s32) temp_v0 < 0xFF)) {
//         D_8003B238 = (s8) (temp_v0 + 1);
//     }
//     temp_v0_2 = D_8003B23A;
//     if (temp_v0_2 != 0) {
//         D_8003B23A = (s8) (temp_v0_2 - 1);
//     }
//     if ((D_8003A581 == 0) && (D_8002AC6C == 0) && (osRecvMesg(&D_8003B200, &D_8002AC54, 0) == 0)) {
//         sp5C = 0x30D40;
//         sp58 = 0;
//         if ((D_8003A582 != 0) || ((osAiGetStatus() << 0) >= 0)) {
//             sp5C = 20000;
//             sp58 = 0;
//         }
//         osSetTimer(&D_8003A588, 0, 0, &D_8003B218, 3);
//         D_8002AC6C = (s8) (u16)1;
//     }
//     if (D_8003A581 != 0) {
//         goto loop_1;
//     }
//     func_10004DB0();
//     goto loop_1;
// case 2:
//     if (D_8003A582 == 3) {
//         if (osSpTaskYielded(D_8002AC50->osTask) == (u8)1U) {
//             osSpTaskLoad(D_8002AC54->list);
//             osSpTaskStartGo(D_8002AC54->list);
//             D_8003A581 = (u8)1U;
//             D_8003A582 = (u8)4U;
//         } else {
//             D_8003A582 = (u8)1U;
//             osSpTaskLoad(D_8002AC54->list);
//             osSpTaskStartGo(D_8002AC54->list);
//             D_8003A581 = (u8)1U;
//             D_8003A583 = (u8)0U;
//         }
//     } else if (D_8003A581 != 0) {
//         temp_v0_3 = D_8002AC54;
//         osSendMesg(temp_v0_3->unk58, temp_v0_3->unk5C, (u16)1);
//         D_8003A581 = (u8)0U;
//         if (D_8003A582 != 4) {
//             goto loop_1;
//         }
//         osSpTaskLoad(D_8002AC50->osTask);
//         osSpTaskStartGo(D_8002AC50->osTask);
//         D_8003A580 = (s8) (u16)1;
//         D_8003A582 = (u8)1U;
//     } else {
//         D_8003A583 = (u8)0U;
//         if ((u16)1 != D_8003A584) {
//             goto loop_1;
//         }
//         func_10004FE0();
//         goto loop_1;
//     case 1:
//         D_8003A584 = (u8)1U;
//         if (D_8003A583 != 0) {
//             goto loop_1;
//         }
//         func_10004FE0();
//         goto loop_1;
//     case 3:
//         D_8002AC6C = (u8)0;
//         if (D_8003A583 != 0) {
//             osSpTaskYield();
//             D_8003A582 = (u8)3U;
//         } else {
//             osSpTaskLoad(D_8002AC54->list);
//             osSpTaskStartGo(D_8002AC54->list);
//             D_8003A581 = (u8)1U;
//             goto loop_1;
//         case 6:
//             if (D_8002AC5C != 0) {
//                 goto loop_1;
//             }
//             osContStartReadData(&D_800BE900);
//         }
//     }
//     goto loop_1;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/init_49E0/func_10004DB0.s")
// NON-MATCHING: branching is not right
// void func_10004DB0(void) {
//     if (D_8003A582 == 0) {
//         if (osRecvMesg(&D_8003B1E8, &D_8002AC50, 0) == 0) {
//             if ((osViGetCurrentFramebuffer() == D_8002AC50->framebuffer) ||
//                 (osViGetNextFramebuffer() == D_8002AC50->framebuffer) ||
//                 ((D_8003B23A != 0) && (D_8003B238 < D_8003B239))) {
//                 D_8003A582 = 2;
//             } else {
//                 if (D_8003B238 != 255) {
//                     if ((D_8003B238 >= D_8003B239) || (D_8003B23A == 0)) {
//                         D_8003B239 = D_8003B238;
//                     }
//                 }
//                 func_10004F00();
//             }
//         }
//     } else if (D_8003A582 == 2) {
//         if ((D_8003B23A == 0) || ( D_8003B238 >= D_8003B239)) {
//             func_10004F00();
//         }
//     } else if (D_8003A582 == 6) {
//         func_10004FE0();
//     }
// }

void func_10004F00(void) {
    if (D_8002AC5C == 0) {
        osSpTaskLoad(&D_8002AC50->list);
        osSpTaskStartGo(&D_8002AC50->list);
        D_8003A580 = 0;
        D_8002AC58 = D_8002AC50;
        D_8003A583 = 1;
        D_8003A584 = 0;
        if ((D_8003B238 == 255) ||
            ((D_8003B238 >= 11) && ((D_8003B238 >= 21) || (D_800C35EA != 1)))) {
            D_8003B238 = 2;
        }
        D_800BE9E4 = D_8003B238;
        D_8003B238 = 0 ;
        D_8003A582 = 1;
        osSendMesg(D_8003B230, &D_8003B240, 0);
    }
}

void func_10004FE0(void) {
    if (D_8003B238 <= 0) {
        D_8003A582 = 6;
    } else {
        func_10005020();
    }
}

void func_10005020(void) {
    void *fb;

    D_8003A582 = 0;
    fb = D_8002AC50->framebuffer;
    if ((D_8002AC50->flags & OS_SC_SWAPBUFFER) && (D_8002AC5C == 0)) {
        func_1515FDA0(fb);
        osViSwapBuffer(fb);
    }
    osSendMesg(D_8002AC50->msgQ, D_8002AC50->msg, 1);
}
