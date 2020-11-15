#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_86000000(void) {
    func_860012B0(278, &D_160046AC);
}

s32 func_86000028(void) {
    if (D_16003890 & 0xC000) {
        D_16003AF4 = 1;
        return 3;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_19EA88/func_86000058.s")
// void func_86000058(void) {
//     s32 temp_s0;
//     s32 temp_s2;
//     s32 temp_v0;
//     s32 phi_s0;
//     s32 phi_s2;
//     void *phi_s1;
//
//     func_86001338(0xFF, 0xFF, 0xFF);
//     func_860012B0(0x2C, 0x160046D0);
//     phi_s0 = 0;
//     phi_s2 = 0x6C;
//     phi_s1 = (void *)0x16003B20;
// loop_1:
//     if (phi_s0 == *(void *)0x16003B1C) {
//         func_86001338(0xFF, 0, 0);
//     } else {
//         func_86001338(0xFF, 0xFF, 0xFF);
//     }
//     func_860012B0(phi_s2, *phi_s1);
//     temp_s0 = phi_s0 + 1;
//     temp_s2 = phi_s2 + 0x20;
//     phi_s0 = temp_s0;
//     phi_s2 = temp_s2;
//     phi_s1 = phi_s1 + 4;
//     if (temp_s0 != 2) {
//         goto loop_1;
//     }
//     if (2 == *(void *)0x16003B1C) {
//         func_86001338(0xFF, 0, 0);
//     } else {
//         func_86001338(0xFF, 0xFF, 0xFF);
//     }
//     temp_v0 = *(void *)0x16003AF0;
//     if (temp_v0 != 0) {
//         if (((*(void *)0x1600389C)->unk120 == 0x20) && (*(void *)0x160038A4 == 0)) {
//             func_860012B0(temp_s2, 0x160046DC);
//         } else if (temp_v0 != 0) {
//             func_860012B0(temp_s2, 0x160046E8);
//         }
//     } else {
//         func_860012B0(temp_s2, 0x160046F4);
//     }
//     func_86001338(0xFF, 0xFF, 0xFF);
//     func_860012B0(0x263, 0x16004700);
//     func_86001044(0x26B, 1, 0xA3);
//     func_860012B0(0x283, 0x16004708);
//     func_860012B0(0x28B, 0x16004710);
//     func_860012B0(0x297, 0x1600471C);
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_19EA88/func_86000224.s")

void func_86000304(void) {
}

void func_8600030C(void) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_19EA88/func_86000314.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_19EA88/func_86000384.s")

void func_86000424(struct118 *arg0) {
    // TODO is this a RGB struct?
    u32 tmp0;
    u32 tmp1;
    s32 pad;

    func_86001338(255, 255, 255);
    func_860012B0(35, &D_16004728);
    func_86001044(43, 0, arg0->unk11C);
    func_860012B0(67, &D_1600472C);
    func_86001044(75, 0, arg0->unk120);
    func_86001338(128, 128, 255);
    tmp0 = arg0->unk120;
    tmp1 = (tmp0 >> 2) & 0xF;

    func_860012B0(107, D_16003848[tmp1]);
    if (tmp1 == 11) {
        func_86001044(111, 1, (tmp0 >> 28) & 3);
    }
    func_86001338(255, 255, 255);
    func_860012B0(131, &D_16004734);
    func_86001044(139, 0, arg0->unk118);
    func_860012B0(163, &D_16004738);
    func_86001044(171, 0, arg0->unk124);
    func_860012B0(195, &D_16004740);
    func_86001044(203, 1, arg0->unk14);
    if (D_160038A4 != 0) {
        func_860012B0(52, &D_16004748);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_19EA88/func_86000590.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_19EA88/func_860006CC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_19EA88/func_8600078C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_19EA88/func_86000A5C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_19EA88/func_86000B14.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_19EA88/func_86000F8C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_19EA88/func_86001044.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_19EA88/func_860012B0.s")

// convert rgb to rgba16
void func_86001338(u8 arg0, u8 arg1, u8 arg2) {
    D_1600388C = ((arg0 & 0xF8) << 8) | ((arg1 & 0xF8) << 3) | ((arg2 & 0xF8) >> 2) | 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_19EA88/func_86001390.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_19EA88/func_860014F0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_19EA88/func_8600160C.s")

// contains delay slot
#pragma GLOBAL_ASM("asm/nonmatchings/code_19EA88/func_86001678.s")

s32 func_860016F4(s32 arg0) {
    return arg0;
}
