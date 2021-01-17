#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_15010FB0(void) {
    D_800BE4F0 = malloc(16, 1, 0, 0);
    D_800BE4F0->unk0 = func_15195AA8(D_800B0E00[1], D_80090310, 1, -1, 0, 1, 0, 0);
    D_800BE4F0->unk4 = func_15195AA8(D_800B0E00[0], D_80090314, 0, -1, 0, 0, 0, 0);
    D_800BE4F0->unk8 = func_15195FB0(func_151149AC(250), D_80090310, 1, -1, 0, 0, 0);
    D_800BE4F0->unkC = func_15195FB0(func_151149AC(249), D_80090310, 1, -1, 0, 0, 0);
    func_1510F800(0);
    D_800D9A40 = func_1510FD20(0x1500, 0x700);
}
