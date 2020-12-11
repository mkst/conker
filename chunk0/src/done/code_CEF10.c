#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_150CEF10(struct108 *arg0) {
    arg0->unk84 |= 0x10;
    if (arg0->unk1B4 == 3) {
        arg0->unk1E0 = 5;
        arg0->unk1B4 = 2;
        func_15124B18(arg0);
    }
}
