#include <ultra64.h>

#include "functions.h"
#include "variables.h"

void func_80004470(void) {
    int i;
    func_800030A0(150, &D_800388B0, &D_800380E0, 0xC8);

    for (i = 0; i < 3; i++)
    {
        osCreateMesgQueue(&gMessageQueue[i], &gMessages[i], 1);
    }

    osCreateMesgQueue(&gMessageQueue0, &gMessage0, 300);
    D_8003A570 = 0;
    D_8003A571 = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_4470/func_80004514.s")

void func_80004674(void) {
    int i;
    for (i = 0; i < D_8003A571; i++)
    {
        osRecvMesg(&gMessageQueue0, 0, OS_MESG_BLOCK);
    }

    D_8003A571 = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_4470/func_800046E4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_4470/func_8000480C.s")
