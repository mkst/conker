#include <ultra64.h>

#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/game_75E60/func_150489B0.s")
// NON-MATCHING: not convinced this is correct
// f32 func_150489B0(u8 arg0) {
//     f32 ret;
//
//     if (arg0 >= 65) {
//         if (arg0 >= 129) {
//             if (arg0 >= 193) {
//                 ret = D_8009A620[-arg0];
//             } else {
//                 ret = -D_8009A020[arg0];
//             }
//         } else {
//             ret = -D_8009A420[-arg0];
//         }
//     } else {
//         ret = D_8009A220[arg0];
//     }
//
//     return ret;
// }

void func_15048A40(u8 arg0) {
    func_150489B0((arg0 - 0x40) & 0xFF);
}

f32 func_15048A70(f32 arg0, f32 arg1) {
    f32 tmp = arg0 - arg1;
    if (tmp > 180.0f) {
        arg0 -= 360.0f;
    } else {
        if (tmp <= -180.0f) {
            arg1 -= 360.0f;
        }
    }
    return arg1 - arg0;
}

s32 func_15048AD0(s32 arg0, s32 arg1) {
    s32 temp_v0 = arg0 - arg1;
    if (temp_v0 >= 181) {
        arg0 = arg0 - 360;
    } else {
        if (temp_v0 < -179) {
            arg1 = arg1 - 360;
        }
    }
    return arg1 - arg0;
}
