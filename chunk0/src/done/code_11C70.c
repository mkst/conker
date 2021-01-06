#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_15011C70(void) {
    D_800D9AA0[0] = 0;
    D_800D9AA0[1] = 0;
    D_800D9AA0[2] = 0;
    func_15103800();
}

void func_15011CA0(void) {
    func_15103800();
}

void func_15011CC0(void) {
    func_15195AA8(D_800B0E00[0], D_800902E4, 0, -1, 0, 0, 0, 4);
    func_15195AA8(D_800B0E00[1], D_800902E4, 0, -1, 0, 1, 0, 4);
}
