#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_1001E2A0(struct22 *arg0, u8 arg1) {
    struct23 *sp1C;

    if (arg0->unk8) {
        sp1C = (struct23*) func_100196E4();
        if (sp1C == NULL) {
            return;
        }
        sp1C->unk4 = D_8002BA44->unk1C + arg0->unk8->unk90;
        sp1C->unk8 = 12;
        sp1C->unkC = arg1;
        sp1C->unk0 = 0;
        func_10020978(arg0->unk8, 3, sp1C);
    }
}

void func_1001E350(struct22 *arg0, u8 arg1) {
    struct23 *sp1C;

    if (arg0->unk8) {
        sp1C = (struct23*) func_100196E4();
        if (sp1C == NULL) {
            return;
        }
        sp1C->unk4 = D_8002BA44->unk1C + arg0->unk8->unk90;
        sp1C->unk8 = 17;
        sp1C->unkC = arg1;
        sp1C->unk0 = 0;
        func_10020978(arg0->unk8, 3, sp1C);
    }
}

void func_1001E400(struct26 *arg0, s32 arg1, u8 arg2, u8 arg3, u8 arg4) {
    struct33 tmp;
    s32 tmp2;

    tmp.unk0 = 2;
    tmp.unk4 = 0;
    tmp.unk8 = arg2;
    tmp.unk9 = arg3;
    tmp.unkA = arg4;
    tmp.unkC = 0;

    tmp2 = arg1;
    func_1001C224(&arg0->unk48, &tmp, tmp2, 2);
}
