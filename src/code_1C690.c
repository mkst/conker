#include <ultra64.h>

#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/code_1C690/func_1001C690.s")
// NON-MATCHING: matches if D_8002BA44 is struct07**
// void func_1001C690(struct07 *arg0) {
//     OSIntMask mask = osSetIntMask(1);
//     arg0->unk10 = (s32) D_8002BA44[8];
//     arg0->unk0 = (s32) *D_8002BA44;
//     *D_8002BA44 = arg0;
//     osSetIntMask(mask);
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_1C690/func_1001C700.s")
// NON-MATCHING: matches if D_8002BA44 is struct07**
// void func_1001C700(struct07 *arg0) {
//     OSIntMask mask = osSetIntMask(1);
//     arg0->unk10 = (s32) D_8002BA44[8];
//     arg0->unk0 = (s32) *D_8002BA44;
//     *D_8002BA44 = arg0;
//     osSetIntMask(mask);
// }

void func_1001C770(struct22 *arg0) {
    struct40 *sp1C;

    if (arg0->unk8 != 0) {
        sp1C = func_100196E4();
        if (sp1C == 0) {
            return;
        }
        sp1C->unk4 = D_8002BA44->unk1C + arg0->unk8->unk90;
        sp1C->unk8 = 15;
        sp1C->unk0 = 0;
        func_10020978(arg0->unk8, 3, sp1C);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_1C690/func_1001C810.s")
// void func_1001C810(struct22 *arg0) {
//     struct40 *sp1C;
//
//     if (arg0->unk8 != 0) {
//         if (arg0->unk8->unk90 != 0) {
//             sp1C = func_100196E4();
//             if (sp1C == 0) {
//                 return;
//             }
//             sp1C->unk4 = (s32) (D_8002BA44->unk1C + arg0->unk8->unk90);
//             sp1C->unk8 = (u16)0;
//             sp1C->unkC = (s32) arg0->unk8;
//             func_10020978(arg0->unk8, 3, sp1C);
//         } else {
//             func_100198B0(arg0->unk8);
//         }
//         arg0->unk8 = 0;
//     }
//     if (arg0->unk14 != 0) {
//         D_8002BA44->unk2C(arg0->unk14);
//     }
// }

void func_1001C910(struct22 *arg0, s16 arg1, s32 arg2) {
    struct41 *sp1C;

    if (arg0->unk8 != 0) {
        sp1C = func_100196E4();
        if (sp1C == 0) {
            return;
        }
        sp1C->unk4 = D_8002BA44->unk1C + arg0->unk8->unk90;
        sp1C->unk8 = 0xB;
        sp1C->unkC = arg1;
        sp1C->unk10 = func_100199C8(arg2);
        sp1C->unk0 = 0;
        func_10020978(arg0->unk8, 3, sp1C);
    }
}
