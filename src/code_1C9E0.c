#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_8001C9E0(struct22 *arg0, f32 arg1) {
    struct40 *sp1C;

    if (arg0->unk8) {
        sp1C = func_800196E4();
        if (sp1C == NULL) {
            return;
        }
        sp1C->unk4 = D_8002BA44->unk1C + arg0->unk8->unk90;
        sp1C->unk8 = 7;
        sp1C->unkC = arg1;
        sp1C->unk0 = 0;
        func_80020978(arg0->unk8, 3, sp1C);
    }
}

void func_8001CA90(struct22 *arg0, f32 arg1) {
    struct40 *sp1C;

    if (arg0->unk8) {
        sp1C = func_800196E4();
        if (sp1C == NULL) {
            return;
        }
        sp1C->unk4 = D_8002BA44->unk1C + arg0->unk8->unk90;
        sp1C->unk8 = 19;
        sp1C->unkC = arg1;
        sp1C->unk0 = 0;
        func_80020978(arg0->unk8, 3, sp1C);
    }
}

void func_8001CB40(struct22 *arg0, u8 arg1) {
    struct41 *sp1C;

    if (arg0->unk8) {
        sp1C = func_800196E4();
        if (sp1C == NULL) {
            return;
        }
        sp1C->unk4 = D_8002BA44->unk1C + arg0->unk8->unk90;
        sp1C->unk8 = 18;
        sp1C->unkC = arg1;
        sp1C->unk0 = 0;
        func_80020978(arg0->unk8, 3, sp1C);
    }
}

void func_8001CBF0(f32 arg0, f32 arg1, f32 arg2, struct17 *arg3, struct17 *arg4) {
    f32 sp24;
    f32 sp20;
    f32 sp1C;

    if (arg1 >= (arg0 - 200.0f)) {
        arg1 = arg0 - 200.0f;
    }

    sp24 = func_850484A0(arg1 * PI, arg0);
    sp20 = sp24 * sp24;
    sp1C = (sp24 * F_1__4142136573791504) / arg2;
    arg3->unk0 = sp20 / (1.0f + sp20 + sp1C);
    arg3->unk4 = arg3->unk0 * 2.0f;
    arg3->unk8 = arg3->unk0;
    arg4->unk4 = ((sp20 - 1.0f) * 2.0f) / (1.0f + sp20 + sp1C);
    arg4->unk8 = ((1.0f + sp20) - sp1C) / (1.0f + sp20 + sp1C);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_1C9E0/func_8001CD54.s")
// void func_8001CD54(void *arg0) {
//     s32 sp14;
//     s32 sp10;
//     s16 spE;
//     f32 sp8;
//     f32 sp4;
//     f32 sp0;
//     f32 temp_f8;
//     s32 temp_t3;
//     s32 temp_t8;
//
//     sp10 = (s32) ((f32) arg0->unk0 * 16384.0f);
//     spE = (s16) (sp10 >> 0xF);
//     arg0->unk2 = (s16) (s32) (16384.0f - (f32) spE);
//     arg0->unk28 = 0;
//     sp14 = 0;
// loop_1:
//     (arg0 + (sp14 * 2))->unk8 = (u16)0;
//     temp_t8 = sp14 + 1;
//     sp14 = temp_t8;
//     if (temp_t8 < 8) {
//         goto loop_1;
//     }
//     (arg0 + (sp14 * 2))->unk8 = spE;
//     sp14 = sp14 + 1;
//     sp0 = 16384.0f;
//     temp_f8 = (f32) spE / sp0;
//     sp8 = temp_f8;
//     sp4 = temp_f8;
//     if (sp14 < 0x10) {
// loop_3:
//         sp4 = sp4 * sp8;
//         (arg0 + (sp14 * 2))->unk8 = (s16) (s32) (sp4 * sp0);
//         temp_t3 = sp14 + 1;
//         sp14 = temp_t3;
//         if (temp_t3 < 0x10) {
//             goto loop_3;
//         }
//     }
// }


#pragma GLOBAL_ASM("asm/nonmatchings/code_1C9E0/func_8001CEA4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1C9E0/func_8001CF38.s")
// void func_8001CF38(struct47 *arg0, f32 arg1) {
//     s32 sp3C;
//     ? sp30;
//     ? sp24;
//     s32 temp_t3;
//     s32 temp_t9;
//
//     if (arg0->unk2 == 0) {
//         return;
//     }
//     if ((s32) arg0->unk2 < 0xA) {
//         arg0->unk2 = (u16)0xA;
//     }
//     func_8001CBF0(arg1, (f32) arg0->unk0 + 10.0f, (f32) arg0->unk2 / 10.0f, &sp30, &sp24);
//     sp3C = 3;
// loop_5:
//     (arg0 + (sp3C * 2))->unk8 = (u16)0;
//     temp_t3 = sp3C + 1;
//     sp3C = temp_t3;
//     if (temp_t3 < 8) {
//         goto loop_5;
//     }
//     arg0->unk8 = (s16) (s32) (sp30.unk0 * (*(void *)0x8002C780 - ((f32) arg0->unk2 * 128.0f)));
//     arg0->unkA = (s16) (s32) (sp30.unk4 * (*(void *)0x8002C784 - ((f32) arg0->unk2 * 128.0f)));
//     arg0->unkC = (u16)0;
//     arg0->unk18 = (s16) (s32) (sp24.unk4 * -16384.0f);
//     arg0->unk1A = (s16) (s32) (sp24.unk8 * -16384.0f);
//     sp3C = 0xA;
// loop_7:
//     (arg0 + (sp3C * 2))->unk8 = (u16)0;
//     temp_t9 = sp3C + 1;
//     sp3C = temp_t9;
//     if (temp_t9 < 0x10) {
//         goto loop_7;
//     }
// }


#pragma GLOBAL_ASM("asm/nonmatchings/code_1C9E0/func_8001D124.s")

void func_8001D6E8(struct42 *arg0, s32 (*arg1)(s32 arg), struct15 *arg2) {
    arg0->unk14 = func_80012844(0, 0, arg2, 1, 32);
    arg0->unk18 = func_80012844(0, 0, arg2, 1, 32);
    arg0->unk30 = arg1(&arg0->unk34);
    arg0->unk3C = 0;
    arg0->unk40 = 1;
    arg0->unk44 = 0;
    arg0->unk48 = func_80012844(0, 0, arg2, 1, 32);
    arg0->unk54 = 0.0f;
    arg0->unk58 = 1;
    arg0->unk4C = 1.0f;
    arg0->unk50 = 0;
    arg0->unk5C = func_80012844(0, 0, arg2, 1, 80);
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
    arg0->unkCC = func_80012844(0, 0, arg2, 1, 8);
    arg0->unkC8 = 0;
}
