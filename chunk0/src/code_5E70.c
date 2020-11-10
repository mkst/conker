#include <ultra64.h>

#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/code_5E70/func_85005E70.s")
// NON-MATCHING: wrong order
// void func_85005E70(struct108 *arg0) {
//     arg0->unk1B4 = 2;
//     func_85124B18();
//     arg0->unk23C = (u8)1;
// }

void func_85005EA0(struct108 *arg0) {
    arg0->unk1B4 = 1;
    arg0->unk1E0 = 15;
    func_85124B18(arg0);
    arg0->unk134 = 1;
}
