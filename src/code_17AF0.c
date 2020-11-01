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

#pragma GLOBAL_ASM("asm/nonmatchings/code_17AF0/func_80017BB8.s")
// NON-MATCHING: wrong ordering
// void func_80017BB8(struct26 *arg0, s32 arg1) {
//     func_8001E400(arg0, 0, arg1 | 0xB0, 252, 0);
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_17AF0/func_80017C00.s")
// NON-MATCHING: almost matching on 5.3
// void func_80017C00(struct26 *arg0, s32 arg1) {
//     arg0->unk30 |= 1 << arg1;
//
//     func_8001E400(arg0, 0, arg1 | 0xB0, 0xFC, 0xFF);
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_17AF0/func_80017C68.s")
// NON-MATCHING: matches on 5.3
// void func_80017C68(struct26 *arg0, s32 arg1, u8 arg2, u8 arg3) {
//     func_8001E400(arg0, 0, arg1 | 0xB0, 0xFD, arg3);
//     func_8001E400(arg0, 0, arg1 | 0xB0, 0xFF, arg2);
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_17AF0/func_80017CE0.s")
// NON-MATCHING: matches on 5.3
// void func_80017CE0(struct26 *arg0, s32 arg1, u8 arg2) {
//     func_8001E400(arg0, 0, arg1 | 0xB0, 0x41, arg2);
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_17AF0/func_80017D30.s")
// NON-MATCHING: matches on 5.3
// void func_80017D30(struct26 *arg0, s32 arg1, u8 arg2) {
//     func_8001E400(arg0, 0, arg1 | 0xB0, 0xFC, arg2);
// }

void func_80017D80(struct26 *arg0, u8 arg1, u8 arg2) {
    struct33 tmp;

    tmp.unk0 = 2;
    tmp.unk4 = 0;
    tmp.unk8 = arg1 | 0xB0;
    tmp.unk9 = 0xA;
    tmp.unkA = arg2;

    func_8001C224(&arg0->unk48, &tmp, 0, 2);
}
