#include <ultra64.h>
#include "functions.h"
#include "variables.h"

void func_150E1800(struct108 *arg0) {
    if (func_1509BE40(1, 0x403E, 6, 0x2000) != 0) {
        arg0->unk84 |= 0x20;
        return;
    }
    arg0->unk84 &= ~0x20;
}
