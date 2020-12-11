#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_10018CB0(struct26 *arg0, s32 arg1) {
    struct35 tmp;

    tmp.unk0 = 13;
    tmp.unk4 = arg1;

    func_1001C224(&arg0->unk48, &tmp, 0, 2);
}

void func_10018D00(struct26 *arg0, s16 arg1) {
    struct39 tmp;

    tmp.unk0 = 10;
    tmp.unk4 = arg1;

    func_1001C224(&arg0->unk48, &tmp, 0, 2);
}

void func_10018D50(struct26 *arg0) {
    struct38 tmp;

    tmp.unk0 = 16;

    func_1001C224(&arg0->unk48, &tmp, 0, 2);
}
