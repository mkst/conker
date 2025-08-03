#include <ultra64.h>
#include "functions.h"

#define PI 3.1415927410125732f

// TODO: FIX RODATA

// #pragma GLOBAL_ASM("asm/nonmatchings/game_75810/func_15048360.s")

f32 func_15048360(f32 arg0) {
    s16 phi_a0;

    if (arg0 >= 1.0f) {
        phi_a0 = 0x7FFF;
    } else if (arg0 <= -1.0f) {
        phi_a0 = -0x7FFF;
    } else {
        phi_a0 = arg0 * 32767.0f;
    }
    return func_15048664(phi_a0) * (PI / 65535);
}

// #pragma GLOBAL_ASM("asm/nonmatchings/game_75810/func_15048408.s")

f32 func_15048408(f32 arg0) {
    s16 phi_a0;

    if (arg0 >= 1.0f) {
        phi_a0 = 0x7FFF;
    } else if (arg0 <= -1.0f) {
        phi_a0 = -0x7FFF;
    } else {
        phi_a0 = arg0 * 32767.0f;
    }
    return func_150486B8(phi_a0) * (PI / 65535);
}
