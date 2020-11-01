#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_80012820(struct14 *arg0, s32 arg1, s32 arg2) {
    arg0->unk0 = arg1;
    arg0->unk8 = arg2;
    arg0->unk4 = arg0->unk0;
    arg0->unkC = 0;
}

s32 func_80012844(s32 arg0, s32 arg1, struct15 *arg2, u32 arg3, u32 arg4) {
    u32 sp4;
    u32 sp0 = 0;

    sp4 = (arg3 * arg4 + 0xF) & -0x10;

    if ((arg2->unk4 + sp4) <= (arg2->unk0 + arg2->unk8)) {
        sp0 = arg2->unk4;
        arg2->unk4 += sp4;
    } else {
      // empty
    }

    return sp0;
}
