#include <ultra64.h>

#include "functions.h"
#include "variables.h"

// read/write from/to Controller Pak
#pragma GLOBAL_ASM("asm/nonmatchings/code_57E0/func_800057E0.s")
// cannot mips2c: contains a delay slot
#pragma GLOBAL_ASM("asm/nonmatchings/code_57E0/func_80005948.s")
