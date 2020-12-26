#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_150485E0(s32 arg0) {
    s32 index;
    s32 tmp1;
    s32 tmp2;
    u16* array;
    s32 phi_a1;
    s32 phi_v1;

    if (arg0 >= 32736) {
        phi_v1 = 7;
        phi_a1 = 3;
        array = &D_80085FBC;
        arg0 -= 32736;
    } else if (arg0 >= 30720) {
        phi_v1 = 31;
        phi_a1 = 5;
        array = &D_80085F3C;
        arg0 -= 30720;
    } else {
        phi_v1 = 511;
        phi_a1 = 9;
        array = &D_80085EC0;
    }

    index = arg0 >> phi_a1;
    tmp1 = array[index];
    tmp2 = array[index+1];

    return tmp1 - (((tmp1 - tmp2) * (arg0 & phi_v1)) >> phi_a1);
}

s32 func_15048664(s16 arg0) {
    s32 tmp;

    if (arg0 >= 0) {
       tmp = arg0;
    } else {
       tmp = -arg0;
    }

    tmp = func_150485E0(tmp);
    if (arg0 < 0) {
        tmp = 0xFFFF - tmp;
    }
    return tmp & 0xFFFF;
}

s16 func_150486B8(s16 arg0) {
    s32 tmp;

    if (arg0 >= 0) {
        tmp = arg0;
    } else {
        tmp = -arg0;
    }

    tmp = func_150485E0(tmp);
    if (arg0 >= 0) {
        tmp = 0x7FFF - tmp;
    } else {
        tmp = tmp - 0x8000;
    }
    return tmp;
}
