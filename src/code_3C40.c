#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_80003C40(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    return func_80003C6C(arg0, arg1, arg2, 0, arg3);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_3C40/func_80003C6C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_3C40/func_80004074.s")

void func_80004250(void) {
    u32 temp_v0;
    u32 temp_v1;
    u32 mask;
    struct54 *phi_s0;

    mask = osSetIntMask(1);

    if (phi_s0 = D_800380B4) {
        do {
            temp_v1 = phi_s0->unk8;
            temp_v0 = temp_v1 >> 0x18;
            if (2 == temp_v0) {
                func_80004074(&phi_s0->unkC);
            } else if ((temp_v0 == 3) || (temp_v0 == 4)) {
                phi_s0->unk8 = ((temp_v0 - 1) << 0x18) | (temp_v1 & 0xFFFFFF);
            }
        } while(phi_s0 = phi_s0->unk0);
    }
    osSetIntMask(mask);
}

void func_80004308(void) {
    u32 temp_t6;
    struct54 *phi_s0;
    OSIntMask mask;

    mask = osSetIntMask(1);
    phi_s0 = D_800380B4;
    func_85042D50();

    if (phi_s0) {
        do {
            temp_t6 = phi_s0->unk8 >> 24;
            if (temp_t6 == 1 || temp_t6 == 2 || temp_t6 == 3 || temp_t6 == 4) {
                func_80004074(&phi_s0->unkC);
            }
        }
        while (phi_s0 = phi_s0->unk0);
    }
    osSetIntMask(mask);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_3C40/func_800043B4.s")
// NON-MATCHING: missing an addiu
// void func_800043B4(s32 *arg0, u32 arg1) {
//     OSIntMask mask = osSetIntMask(1);
//     *(arg0 - 1) = (arg1 << 24) | *(arg0 - 1) & 0xFFFFFF;
//     osSetIntMask(mask);
// }

void func_8000440C(void) {
    struct54 *foo;
    struct54 *last_good_foo;
    s32 tmp0;

    foo = D_800380B8;
    tmp0 = 0;

    if (foo) {
        do {
            if (tmp0 < (s32) foo->unk8) {
                tmp0 = foo->unk8;
                last_good_foo = foo;
            }
        } while ((foo = foo->unkC));
    }
    D_800380B0 = last_good_foo;
    D_8002AC30 = tmp0;
}
