#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_85005BD0(struct108 *arg0) {
    arg0->unk2C = 8;
    arg0->unk84 |= 0x300000;
    arg0->unk84 &= -5;
    arg0->unk1B4 = 1;
    arg0->unk1E0 = 3;
    func_85124B18(arg0);
    arg0->unk134 = 0;
}
