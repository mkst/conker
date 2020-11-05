#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_80017AF0(struct26 *arg0, s32 arg1) {
    arg0->unk84 = arg1;
}

void func_80017B04(struct26 *arg0, s32 arg1, u8 arg2) {
    arg0->unk60[arg1].unk17 = arg2;
}

void func_80017B30(struct26 *arg0) {
    s32 i;

    arg0->unk30 = 0xFFFF;
    for (i = 0; i < arg0->unk34; i++)
    {
        arg0->unk60[i].unkE = 0xFF;
        arg0->unk60[i].unkD = 0xFF;
    }
}

void func_80017BB8(struct26 *arg0, s32 arg1) {
    func_8001E400(arg0, 0, arg1 | 0xB0, 252, 0);
}
