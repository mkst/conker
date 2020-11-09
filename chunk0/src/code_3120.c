#include <ultra64.h>

#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/code_3120/func_85003120.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_3120/func_850031EC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_3120/func_850034B4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_3120/func_85003570.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_3120/func_85003668.s")

void func_850038A0(void) {
    func_85001A08();
    func_85001BC8(0, &D_800DBE2A, &D_800DBE2C);
    func_85001BC8(1, 0, 0);
    func_85001CEC(2);
    func_8510F800(0);
    func_850025FC();
    D_800DBE62 = (u8)1;
}

// some kind of cache?
s32 func_8500390C(s32 arg0) {
    struct105 *phi_v0;
    s32 phi_v1;

    if (arg0 == D_800B0E58) {
        return 0;
    }
    if (arg0 == D_800B0E5C) {
        return 1;
    }
    phi_v0 = D_800B0E60;
    phi_v1 = 2;

    do
    {
        if (arg0 == phi_v0->unk0) {
            return phi_v1;
        }
        if (arg0 == phi_v0->unk4) {
            return phi_v1 + 1;
        }
        if (arg0 == phi_v0->unk8) {
            return phi_v1 + 2;
        }
        if (arg0 == phi_v0->unkC) {
            return phi_v1 + 3;
        }
        phi_v0++;
        phi_v1 += 4;
    } while (phi_v1 != 7762);

    return -1;
}

void func_850039B0(s32 arg0) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_3120/func_850039BC.s")
// NON-MATCHING: uses v0 not v1
// void func_850039BC(s32 arg0) {
//     D_800DBE5C = arg0;
//     if (arg0) {
//         D_800DBE5C = arg0 + 8;
//     }
// }
