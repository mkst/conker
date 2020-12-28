#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_10017DF0(struct26 *arg0, f32 arg1, f32 arg2) {
    struct34 tmp;

    tmp.unk0 = 25;
    tmp.unk4 = arg1;
    tmp.unk8 = arg2;

    n_alEvtqPostEvent(&arg0->unk48, &tmp, 0, 2);
}

void func_10017E4C(struct26 *arg0, u8 arg1, u8 arg2) {
    struct33 tmp;

    tmp.unk0 = 2;
    tmp.unk4 = 0;
    tmp.unk8 = arg1 | 0xB0;
    tmp.unk9 = 92;
    tmp.unkA = arg2;

    n_alEvtqPostEvent(&arg0->unk48, &tmp, 0, 2);
}
