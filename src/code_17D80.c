#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_80017D80(struct26 *arg0, u8 arg1, u8 arg2) {
    struct33 tmp;

    tmp.unk0 = 2;
    tmp.unk4 = 0;
    tmp.unk8 = arg1 | 0xB0;
    tmp.unk9 = 0xA;
    tmp.unkA = arg2;

    func_8001C224(&arg0->unk48, &tmp, 0, 2);
}
