#include <ultra64.h>

#include "functions.h"
#include "variables.h"

// contains jr
#pragma GLOBAL_ASM("asm/nonmatchings/code_49E0/func_800049E0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_49E0/func_80004DB0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_49E0/func_80004F00.s")

void func_80004FE0(void) {
    if ((s32) D_8003B238 <= 0) {
        D_8003A582 = 6;
        return;
    }
    func_80005020();
}

void func_80005020(void) {
    s32 fb;

    D_8003A582 = 0;
    fb = D_8002AC50->framebuffer;
    if ((D_8002AC50->unkC & 0x40) && (D_8002AC5C == 0)) {
        func_8515FDA0(D_8002AC50->framebuffer);
        osViSwapBuffer(fb);
    }
    osSendMesg(D_8002AC50->mesgQueue, D_8002AC50->mesg, 1);
}
