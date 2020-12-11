#include <ultra64.h>

#include "functions.h"
#include "variables.h"

void func_15000000(void) {
    OSMesgQueue *msgQueue;
    s32 i;

    for (i = 0; i < 3; i++)
    {
        msgQueue = &D_80041E58[i];

        func_10023790(msgQueue, (OSMesg*)&D_80041EA0[i], 8); // osCreateMesgQueue
        func_10008570(i, msgQueue);
    }

    func_100085A4(0, 6, 1); // stub function
    func_1000E934();
}

void func_15000090(void) {
    func_1000DEC4();
}

// jump table
#pragma GLOBAL_ASM("asm/nonmatchings/code_0/func_150000B0.s")
// no thankyou
#pragma GLOBAL_ASM("asm/nonmatchings/code_0/func_150006E0.s")
