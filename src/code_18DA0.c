#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_10018DA0(struct07 *arg0, s32 arg1) {
    if (D_8002BA40 == 0) {
        D_8002BA40 = arg0;
        if (D_8002BA44 == 0) {
            D_8002BA44 = D_8002BA40;
            func_10018E60(arg1);
        }
    }
}

void func_10018E0C(s32 arg0) {
    if (D_8002BA40) {
        func_1001E480();
        D_8002BA40 = 0;
        D_8002BA44 = 0;
    }
}
