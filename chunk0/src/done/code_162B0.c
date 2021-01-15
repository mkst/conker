#include <ultra64.h>
#include "functions.h"
#include "variables.h"


void func_150162B0(void) {

    bzero(&D_800CC2D0, 20300);
    D_80086000 = 0;

    if (D_800D2138 == 2) {
        D_800CC26E = 2;
    } else if (D_800D2138 == 3) {
        D_800CC26E = 3;
    } else if (D_800D2138 == 4) {
        D_800CC26E = 4;
    } else {
        D_800CC26E = 0;
    }
    D_800CC2B0 = 0;
    bzero(&D_800CC298, 24);
    D_800CC2A2 = 1;
    D_800D18D0 = 0;
}
