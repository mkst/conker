#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_15049440(f32 arg0[4][4], f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9) {
    f32 ret;
    f32 tmp;

    ret = -(arg0[0][2] * arg1 + arg0[1][2] * arg2 + arg0[2][2] * arg3 + arg0[3][2]);
    if (ret < arg6) {
        return 0;
    }
    if (arg7 < ret) {
        return 0;
    }
    tmp = arg0[0][0] * arg1 + arg0[1][0] * arg2 + arg0[2][0] * arg3 + arg0[3][0];
    if (arg8 < (tmp - arg4)) {
        return 0;
    }
    if ((tmp + arg4) < -arg8) {
        return 0;
    }
    tmp = arg0[0][1] * arg1 + arg0[1][1] * arg2 + arg0[2][1] * arg3 + arg0[3][1];
    if (arg9 < (tmp - arg5)) {
        return 0;
    }
    if ((tmp + arg5) < -arg9) {
        return 0;
    }
    return ret;
}
