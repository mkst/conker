#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_15005C30(struct108 *arg0) {
    arg0->unk84 |= 0x100000;
    arg0->unk84 &= -5;
    arg0->unk1B4 = 2;
    arg0->unk1E0 = 5;
    func_15124B18(arg0);
}
