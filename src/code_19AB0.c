#include <ultra64.h>

#include "functions.h"
#include "variables.h"


f32 func_80019AB0(s32 arg0) {
    f32 sp4;
    f32 sp0 = 1.0f;

    if (arg0 >= 0) {
        sp4 = F_1__0005778074264526;
    } else {
        sp4 = F_0__999422550201416;
        arg0 = -arg0;
    }
    while (arg0) {
        if (arg0 & 1) {
            sp0 *= sp4;
        }
        sp4 *= sp4;
        arg0 = arg0  >> 1;
    }
    return sp0;
}
