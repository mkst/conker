#include <ultra64.h>

#include "functions.h"
#include "variables.h"

// relies on jump table
#pragma GLOBAL_ASM("asm/nonmatchings/code_20000/func_10020000.s")

s32 n_alEnvmixerParam(struct21 *arg0, s32 arg1, s32 arg2) {
    struct21 *sp24 = arg0;

    switch (arg1) {
        case 3:
            if (sp24->unk88 != 0) {
                *sp24->unk88 = arg2;
            } else {
                sp24->unk84 = arg2;
            }
            sp24->unk88 = arg2;
            break;
        case 4:
            sp24->unk80 = 1;
            sp24->unk8C = 0;
            sp24->unk62 = 1;
            sp24->unk7C = 0;
            sp24->unk54 = 0.0f;
            sp24->unk58 = 1;
            sp24->unk50 = 0;
            func_10022338(sp24, 4, arg2);
            break;
        case 9:
            sp24->unk8C = 1;
            break;
        default:
            func_10022338(sp24, arg1, arg2);
            break;
    }

    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_20000/func_10020ABC.s")
// NON-MATCHING: pretty close but no cigar
// struct21 *func_10020ABC(struct42 *arg0, struct119 *arg1, s32 arg2, s32 arg3, struct21 *arg4) {
//     struct21 *sp34;
//     struct42 *sp30;
//     struct21 *sp2C;
//     struct21 *sp28;
//     struct21 *sp24;
//     struct21 *sp20;
//     struct21 *sp1C;
//
//     sp34 = arg4;
//     sp30 = arg0;
//     if (sp30->unk28 != 0) {
//         sp30->unk28->unkA = (u8)1;
//     }
//     if ((sp30->unk8C != 1) || (arg3 == 0)) {
//         return sp34;
//     }
//
//     sp34 = func_10022040(sp30, arg1, arg3, arg4);
//     if (sp30->unk80) {
//         sp30->unk80 = 0;
//         sp30->unk70 = (D_8002BC10[(s16)sp30->unk60] * (s16)sp30->unk62) >> 15;
//         sp30->unk6E = func_10020E18((s16)sp30->unk64, (s16)sp30->unk70, sp30->unk7C, &sp30->unk6C);
//         sp30->unk76 = (D_8002BD0E[-(s16)sp30->unk60] * (s16)sp30->unk62) >> 15;
//         sp30->unk74 = func_10020E18((s16)sp30->unk66, (s16)sp30->unk76, sp30->unk7C, &sp30->unk72);
//
//         sp2C = sp34 = &sp34->unk8;
//         sp2C->unk0 = ((s16)sp30->unk64 & 0xFFFF) | 0x9060000;
//         sp2C->unk4 = (((s16)sp30->unk68 & 0xFFFF) << 16) | ((s16)sp30->unk6A & 0xFFFF);
//
//         sp28 = sp34 = &sp34->unk8;
//         sp28->unk0 = ((s16)sp30->unk76 & 0xFFFF) | 0x9040000;
//         sp28->unk4 = (((s16)sp30->unk74 & 0xFFFF) << 16) | (sp30->unk72 & 0xFFFF);
//
//         sp24 = sp34 = &sp34->unk8;
//         sp24->unk0 = ((s16)sp30->unk70 & 0xFFFF) | 0x9000000;
//         sp24->unk4 = (((s16)sp30->unk6E & 0xFFFF) << 16) | (sp30->unk6C & 0xFFFF);
//
//         sp20 = sp34 = &sp34->unk8;
//         sp20->unk0 = ((s16)sp30->unk66 & 0xFFFF) | 0x3010000;
//         sp20->unk4 = osVirtualToPhysical(sp30->unk5C);
//     } else {
//         sp1C = sp34 = &sp34->unk8;
//         sp1C->unk0 = 0x3000000;
//         sp1C->unk4 = osVirtualToPhysical(sp30->unk5C);
//         // nop...
//     }
//     arg1 = &arg1->unk170;
//     sp30->unk78 += 0xb8; // 184
//     if ((((s16)sp30->unk68 & 2)) || (((s16)sp30->unk6A & 2))) {
//         sp30->unk68 = (s16)sp30->unk68 & -3;
//         sp30->unk6A = (s16)sp30->unk6A & -3;
//         sp30->unk80 = 1;
//     }
//     return sp34;
// }

s16 func_10020E18(f32 arg0, f32 arg1, s32 arg2, u16 *arg3) {
    s16 spE;
    s16 spC;
    f32 sp8;
    f32 sp4;
    f32 sp0;

    if (arg2 == 0) {
        if (arg0 <= arg1) {
            *arg3 = 0xFFFF;
            return 0x7FFF;
        } else {
            *arg3 = 0;
            return -0x8000;
        }
    }
    sp8 = 1.0f / (f32) arg2;

    if (arg1 < 1.0f) {
        arg1 = 1.0f;
    }
    if (arg0 <= 0.0f) {
        arg0 = 1.0f;
    }
    sp4 = (arg1 - arg0) * sp8 * 8.0f;
    spE = (s16) (s32) sp4;
    sp0 = sp4 - (f32) spE;
    spE = spE - 1;
    sp0 = sp0 + 1.0f;
    spC = (s16) (s32) sp0;
    spE = spE + spC;
    sp0 = sp0 - (f32) spC;
    *arg3 = (u32) (D_8002C814 * sp0); // 65535.0f
    return spE;
}

s16 func_10021028(s16 arg0, s32 arg1, s16 arg2, u16 arg3) {
    s32 tmp;

    arg1 = arg1 >> 3;
    if (arg1 == 0) {
        return arg0;
    }
    tmp = arg1 * arg3;
    tmp = tmp >> 16;
    tmp += (arg2 * arg1);
    return arg0 = arg0 + tmp;
}
