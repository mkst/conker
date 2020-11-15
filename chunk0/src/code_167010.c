#include <ultra64.h>

#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/code_167010/func_85167010.s")
// NON-MATCHING: not hugely far away
// void* func_85167010(void) {
//     void * (*func)(void);
//     void * res;
//     s32 i;
//
//     for (i = 0; i < 101; i++)
//     {
//         func = D_8008B4A8[i].unk18;
//         res = func;
//         if (func != NULL) {
//             res = func();
//         }
//     }
//     return res;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_167010/func_8516706C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_167010/func_851670C0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_167010/func_851671E8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_167010/func_85167310.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_167010/func_851674F8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_167010/func_85167A68.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_167010/func_85167AD8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_167010/func_85167B44.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_167010/func_85167C58.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_167010/func_85167D84.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_167010/func_85167E0C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_167010/func_85168118.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_167010/func_8516865C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_167010/func_85168800.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_167010/func_85168870.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_167010/func_85168A2C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_167010/func_85168A4C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_167010/func_85168A9C.s")
// void *func_85168A9C(struct12 *arg0) {
//     void *temp_a1;
//     void *temp_v0;
//     void *temp_v0_2;
//
//     temp_a1 = (arg0->unk1 * 0x1A0) + (arg0->unk0 * 4) + 0x800DCE50;
//     if (arg0 == *temp_a1) {
//         *temp_a1 = (void *) arg0->unk8;
//     }
//     temp_v0_2 = arg0->unk8;
//     if (temp_v0_2 != 0) {
//         temp_v0_2->unk4 = (void *) arg0->unk4;
//     }
//     temp_v0 = arg0->unk4;
//     if (temp_v0 != 0) {
//         temp_v0->unk8 = (void *) arg0->unk8;
//     }
//     return temp_v0;
// }


void func_85168B10(s32 arg0, s32 arg1) {
    func_85168A9C(arg0);
    func_85168A4C(arg0, arg1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_167010/func_85168B44.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_167010/func_85168BAC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_167010/func_85168BE4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_167010/func_85168C4C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_167010/func_85168E34.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_167010/func_85168E54.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_167010/func_85168F08.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_167010/func_85168F84.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_167010/func_85169040.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_167010/func_85169070.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_167010/func_85169260.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_167010/func_8516944C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_167010/func_851695F0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_167010/func_8516962C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_167010/func_85169668.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_167010/func_8516968C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_167010/func_851696DC.s")

void func_8516972C(struct102 *arg0) {
    void (*func)(struct102 *arg0);
    func_851696DC();

    if (arg0->unk0 >= 2) {
        func = D_8008B4D0[arg0->unk0].unk0;
        if (func != NULL) {
            func(arg0);
            return;
        }
        func_85169804(arg0);
    }
}

void func_8516979C(struct102 *arg0) {
    void (*func)(struct102 *arg0);

    func_851696DC();
    func = D_8008B4D4[arg0->unk0].unk0;
    if (func != NULL) {
        func(arg0);
        return;
    }
    func_85169824(arg0);
}

void func_85169804(struct102 *arg0) {
    func_85168B10(arg0, 1);
}

void func_85169824(s32 arg0) {
    func_85168A9C(arg0);
    func_80004074(arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_167010/func_85169850.s")
