#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_15006170(struct108 *arg0) {
    arg0->unk1E0 = (u16)5;
    arg0->unk1B4 = (u16)2;
    func_15124B18(arg0);
    arg0->unk84 = (s32) (arg0->unk84 | 0x4000);
}
