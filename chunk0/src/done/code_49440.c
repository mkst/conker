#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_15049440(struct112 *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9) {
    f32 ret;
    f32 tmp;

    ret = -(arg0->unk38 + ((arg0->unk8 * arg1) + (arg0->unk18 * arg2) + (arg0->unk28 * arg3)));
    if (ret < arg6) {
        return 0;
    }
    if (arg7 < ret) {
        return 0;
    }
    tmp = arg0->unk30 + ((arg0->unk0 * arg1) + (arg0->unk10 * arg2) + (arg0->unk20 * arg3));
    if (arg8 < (tmp - arg4)) {
        return 0;
    }
    if ((tmp + arg4) < -arg8) {
        return 0;
    }
    tmp = arg0->unk34 + ((arg0->unk4 * arg1) + (arg0->unk14 * arg2) + (arg0->unk24 * arg3));
    if (arg9 < (tmp - arg5)) {
        return 0;
    }
    if ((tmp + arg5) < -arg9) {
        return 0;
    }
    return ret;
}
