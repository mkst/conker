#include <ultra64.h>

#include "functions.h"
#include "variables.h"


f32 func_15048720(f32 arg0, f32 arg1, f32 arg2) {
    f32 res = func_15048A70(arg1, arg2) * arg0;
    return arg1 + res;
}

void func_15048758(f32 *arg0) {
    while (*arg0 < 0.0f) {
        *arg0 = (f32) (*arg0 + 360.0f);
    }
    while (*arg0 >= 360.0f) {
        *arg0 = (f32) (*arg0 - 360.0f);
    }
}
