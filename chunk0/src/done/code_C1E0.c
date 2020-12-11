#include <ultra64.h>
#include "functions.h"
#include "variables.h"


void func_1500C1E0(void) {
    s32 i;

    for (i = 0; i < 4; i++) {
        D_800DDF5C[i] = D_800DDF60[i] = 0;
    }
    for (i = 0; i < 11; i++) {
        D_800DDF68[i] = -2;
    }

    func_100226F0(D_800DDE80, 220); // bzero 220 bytes

    for (i = 0; i < 11; i++) {
        D_800DDF78[i] = 0;
    }
}
