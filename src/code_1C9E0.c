#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_1001C9E0(struct22 *arg0, f32 arg1) {
    struct40 *sp1C;

    if (arg0->unk8) {
        sp1C = func_100196E4();
        if (sp1C == NULL) {
            return;
        }
        sp1C->unk4 = D_8002BA44->unk1C + arg0->unk8->unk90;
        sp1C->unk8 = 7;
        sp1C->unkC = arg1;
        sp1C->unk0 = 0;
        func_10020978(arg0->unk8, 3, sp1C);
    }
}

void func_1001CA90(struct22 *arg0, f32 arg1) {
    struct40 *sp1C;

    if (arg0->unk8) {
        sp1C = func_100196E4();
        if (sp1C == NULL) {
            return;
        }
        sp1C->unk4 = D_8002BA44->unk1C + arg0->unk8->unk90;
        sp1C->unk8 = 19;
        sp1C->unkC = arg1;
        sp1C->unk0 = 0;
        func_10020978(arg0->unk8, 3, sp1C);
    }
}

void func_1001CB40(struct22 *arg0, u8 arg1) {
    struct41 *sp1C;

    if (arg0->unk8) {
        sp1C = func_100196E4();
        if (sp1C == NULL) {
            return;
        }
        sp1C->unk4 = D_8002BA44->unk1C + arg0->unk8->unk90;
        sp1C->unk8 = 18;
        sp1C->unkC = arg1;
        sp1C->unk0 = 0;
        func_10020978(arg0->unk8, 3, sp1C);
    }
}

void func_1001CBF0(f32 arg0, f32 arg1, f32 arg2, struct17 *arg3, struct17 *arg4) {
    f32 sp24;
    f32 sp20;
    f32 sp1C;

    if (arg1 >= (arg0 - 200.0f)) {
        arg1 = arg0 - 200.0f;
    }

    sp24 = func_150484A0(arg1 * PI, arg0);
    sp20 = sp24 * sp24;
    sp1C = (sp24 * D_8002C774) / arg2;
    arg3->unk0 = sp20 / (1.0f + sp20 + sp1C);
    arg3->unk4 = arg3->unk0 * 2.0f;
    arg3->unk8 = arg3->unk0;
    arg4->unk4 = ((sp20 - 1.0f) * 2.0f) / (1.0f + sp20 + sp1C);
    arg4->unk8 = ((1.0f + sp20) - sp1C) / (1.0f + sp20 + sp1C);
}

void func_1001CD54(struct125 *arg0) {
    s32 i;
    s32 sp10;
    s16 spE;
    f32 temp_f8;
    f32 sp4;
    f32 sp0;

    sp10 = arg0->unk0 * 16384.0f;
    spE = sp10 >> 15;
    arg0->unk2 = 16384.0f - spE;
    arg0->unk28 = 0;

    for (i = 0; i < 8; i++)
    {
        arg0->unk8[i] = 0;
    }
    arg0->unk8[i] = spE;

    i = i + 1;
    sp0 = 16384.0f;
    sp4 = temp_f8 = spE / sp0;

    for (;i < 16; i++)
    {
        sp4 *= temp_f8;
        arg0->unk8[i] = sp4 * sp0;
    }
}

f32 func_1001CEA4(s32 arg0) {
    f32 sp4;
    f32 sp0 = 1.0f;

    if (arg0 >= 0) {
        sp4 = D_8002C778;
    } else {
        sp4 = D_8002C77C;
        arg0 = -arg0;
    }

    while (arg0 != 0) {
        if ((arg0 & 1) != 0) {
            sp0 = sp0 * sp4;
        }
        sp4 *= sp4;
        arg0 = arg0 >> 1;
    };

    return sp0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_1C9E0/func_1001CF38.s")
// NON-MATCHING: missing some addiu
// void func_1001CF38(struct139 *arg0, f32 arg1) {
//     s32 i;
//     struct17 sp30;
//     struct17 sp24;
//
//     if (arg0->unk2 == 0) {
//         return;
//     }
//     if ((s32) arg0->unk2 < 10) {
//         arg0->unk2 = 10;
//     }
//     func_1001CBF0(arg1,  arg0->unk0 + 10.0f, arg0->unk2 / 10.0f, &sp30, &sp24);
//
//     for(i = 3; i < 8; i++) {
//         arg0->unk8[i] = 0;
//     }
//     arg0->unk8[0] =       (s32) (sp30.unk0 * (D_8002C780 -   (arg0->unk2 * 128.0f)));
//     arg0->unk8[1] = (s16) (s32) (sp30.unk4 * (D_8002C784 - (arg0->unk2 * 128.0f)));
//     arg0->unk8[2] = 0;
//
//     arg0->unk8[8] = (s16) (s32) (sp24.unk4 * -16384.0f);
//     arg0->unk8[9] = (s16) (s32) (sp24.unk8 * -16384.0f);
//     //
//     for (i = 10; i < 16; i++) {
//         arg0->unk8[i] = 0;
//     }
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_1C9E0/func_1001D124.s")

void func_1001D6E8(struct42 *arg0, s32 (*arg1)(s32 arg), struct15 *arg2) {
    arg0->unk14 = func_10012844(0, 0, arg2, 1, 32);
    arg0->unk18 = func_10012844(0, 0, arg2, 1, 32);
    arg0->unk30 = arg1(&arg0->unk34);
    arg0->unk3C = 0;
    arg0->unk40 = 1;
    arg0->unk44 = 0;
    arg0->unk48 = func_10012844(0, 0, arg2, 1, 32);
    arg0->unk54 = 0.0f;
    arg0->unk58 = 1;
    arg0->unk4C = 1.0f;
    arg0->unk50 = 0;
    arg0->unk5C = func_10012844(0, 0, arg2, 1, 80);
    arg0->unk80 = 1;
    arg0->unk8C = 0;
    arg0->unk62 = 1;
    arg0->unk70 = 1;
    arg0->unk76 = 1;
    arg0->unk64 = 1;
    arg0->unk66 = 1;
    arg0->unk68 = 0;
    arg0->unk6A = 0;
    arg0->unk6E = 1;
    arg0->unk6C = 0;
    arg0->unk6E = 1;
    arg0->unk6C = 0;
    arg0->unk78 = 0;
    arg0->unk7C = 0;
    arg0->unk60 = 0;
    arg0->unk84 = 0;
    arg0->unk88 = 0;
    arg0->unk99 = 0;
    arg0->unkA2 = 0;
    arg0->unkA0 = 0;
    arg0->unkCC = func_10012844(0, 0, arg2, 1, 8);
    arg0->unkC8 = 0;
}
