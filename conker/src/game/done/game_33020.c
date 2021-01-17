#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_15005B70(s32 arg0) {
    s32 i;

    func_1509BFB0(0, 0x4014, 0);
    for (i = 0 ; i < 3; i++)
    {
      func_1509BFB0(0, i + 0x400C, 0);
    }
}
