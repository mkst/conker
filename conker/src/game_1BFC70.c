#include <ultra64.h>
#include "functions.h"
#include "variables.h"


void func_151927C0(struct114 *arg0) {
    s32 tmp0;
    s32 tmp1;
    tmp0 = (s16)((arg0->unk14 & 0xFF) >> 1);
    tmp1 = (tmp0 << 16) + tmp0;
    arg0->unk38 = 300;
    arg0->unk3A = 10;
    arg0->unk14 = tmp1;
    arg0->unk3B = 0;
}
