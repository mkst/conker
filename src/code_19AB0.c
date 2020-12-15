#include <ultra64.h>

#include "functions.h"
#include "variables.h"

f32 D_8002C760 = 1.0005778074264526;
f32 D_8002C764 = 0.999422550201416;

f32 func_10019AB0(s32 arg0) {
    f32 sp4;
    f32 sp0 = 1.0f;

    if (arg0 >= 0) {
        sp4 = D_8002C760;
    } else {
        sp4 = D_8002C764;
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
