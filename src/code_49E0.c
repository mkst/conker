#include <ultra64.h>

#include "functions.h"
#include "variables.h"


// contains jr
#pragma GLOBAL_ASM("asm/nonmatchings/code_49E0/func_100049E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_49E0/func_10004DB0.s")
// NON-MATCHING: branching is not right
// void func_10004DB0(void) {
//     if (D_8003A582 == 0) {
//         if (osRecvMesg(&D_8003B1E8, &D_8002AC50, 0) == 0) {
//             if ((osViGetCurrentFramebuffer() == D_8002AC50->framebuffer) ||
//                 (osViGetNextFramebuffer() == D_8002AC50->framebuffer) ||
//                 ((D_8003B23A == 0) || ((D_8003B238 <= D_8003B239)))) {
//
//
//                 if ((D_8003B238 != 255) && (( D_8003B238 >= D_8003B239) || (D_8003B23A == 0))) {
//                     D_8003B239 = D_8003B238;
//                 }
//                 D_8003A582 = 2;
//
//                 func_10004F00();
//             }
//         }
//     } else if (D_8003A582 == 2) {
//         if ((D_8003B23A == 0) || ( D_8003B238 >=  D_8003B239)) {
//             func_10004F00();
//         }
//     } else if (D_8003A582 == 6) {
//         func_10004FE0();
//     }
// }

void func_10004F00(void) {
    if (D_8002AC5C == 0) {
        osSpTaskLoad(&D_8002AC50->osTask);
        osSpTaskStartGo(&D_8002AC50->osTask);
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
    if ((s32) D_8003B238 <= 0) {
        D_8003A582 = 6;
    } else {
        func_10005020();
    }
}

void func_10005020(void) {
    s32 fb;

    D_8003A582 = 0;
    fb = D_8002AC50->framebuffer;
    if ((D_8002AC50->unkC & 0x40) && (D_8002AC5C == 0)) {
        func_1515FDA0(D_8002AC50->framebuffer);
        osViSwapBuffer(fb);
    }
    osSendMesg(D_8002AC50->mesgQueue, D_8002AC50->mesg, 1);
}
