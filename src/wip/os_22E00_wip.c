#include <ultra64.h>


#pragma GLOBAL_ASM("asm/nonmatchings/os_22E00_wip/func_800019A0.s")
// #pragma GLOBAL_ASM("asm/nonmatchings/os_22E00_wip/func_80001A60.s")


void *func_80001A60(void *dst, void *src, s32 len) {
    s32 temp_a2;
    void *temp_v0;
    void *phi_v1;
    void *phi_v0;
    s32 phi_a2;

    phi_v1 = src;
    phi_v0 = dst;
    phi_a2 = len;
    if (len != 0) {
loop_1:
        temp_a2 = phi_a2 - 1;
        temp_v0 = phi_v0 + 1;
        (temp_v0->unk - 1) = (u8) *phi_v1;
        phi_v1 = phi_v1 + 1;
        phi_v0 = temp_v0;
        phi_a2 = temp_a2;
        if (temp_a2 != 0) {
            goto loop_1;
        }
    }
    return dst;
}


#pragma GLOBAL_ASM("asm/nonmatchings/os_22E00_wip/func_80001A8C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/os_22E00_wip/func_80001AB4.s")

/*
0x80022e00,osStopThread
0x80022ec0,memcpy
0x80022eec,strlen
0x80022f14,strchr
*/
