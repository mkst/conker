#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_150442C0(f32 arg0[4][4], f32 x, f32 y, f32 z) {
    arg0[3][0] += x * arg0[0][0] + y * arg0[1][0] + z * arg0[2][0];
    arg0[3][1] += x * arg0[0][1] + y * arg0[1][1] + z * arg0[2][1];
    arg0[3][2] += x * arg0[0][2] + y * arg0[1][2] + z * arg0[2][2];
}
