#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_15007A20(void) {
    // zero out bss (?)
    bzero(&D_800B0DC0, (s32)&D_800E9D00 - (s32)&D_800B0DC0);
    // zero out (?)
    bzero(&D_80044B20, 0x3E000); // 253952 bytes
}
