#include <ultra64.h>

#include "functions.h"
#include "variables.h"

void func_10003930(void) {
    if (D_80038080) {
        D_80038090 = 0x807F5000;
        D_80038094 = 0x807FE000;
        D_8003809C = 0x807FE000;
        D_80038098 = 0x807F5000;
    } else {
        D_80038090 = 0x803F5000;
        D_80038094 = 0x803FE000;
        D_8003809C = 0x803FE000;
        D_80038098 = 0x803F5000;
    }
}
