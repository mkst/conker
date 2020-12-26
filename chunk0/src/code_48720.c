#include <ultra64.h>

#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/code_48720/func_15048720.s")
// f32 func_15048A70(f32 arg0, f32 arg1);
// NON-MATCHING: JUSTREG: wrong registers
// f32 func_15048720(f32 arg0, f32 arg1, f32 arg2) {
//     return func_15048A70(arg1, arg2) * arg0 + arg1;
// }

void func_15048758(f32 *arg0) {
    while (*arg0 < 0.0f) {
        *arg0 = (f32) (*arg0 + 360.0f);
    }
    while (*arg0 >= 360.0f) {
        *arg0 = (f32) (*arg0 - 360.0f);
    }
}
