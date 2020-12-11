#include <ultra64.h>

#include "functions.h"
#include "variables.h"


u8 func_85012720(void) {
    switch(D_800BE9F0)
    {
        case 0:
        case 44:
        case 55:
            return 2;
        case 40:
            return 6;
        default:
            return 5;
    }
}
