#include <ultra64.h>

#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/init_3920/func_10003920.s")
// non-matching; ops in wrong order
// void func_10003920(void) {
//     D_80038080 = 0;
// }

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
