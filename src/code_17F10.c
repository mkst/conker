#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_80017F10(struct26 *arg0, u8 arg1, u8 arg2, u8 arg3, s32 arg4) {
    struct38 tmp;

    tmp.unk0 = 0x1A;
    tmp.unk4 = arg1;
    tmp.unk5 = arg2;
    tmp.unk6 = arg3;
    tmp.unk7 = arg4;

    func_8001C224(&arg0->unk48, &tmp, 0, 2);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_17F10/func_80017F80.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_17F10/func_80018100.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_17F10/func_800182A8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_17F10/func_800186DC.s")
// void func_800186DC(void *arg0, void *arg1) {
//     s32 sp4;
//     s32 temp_t0;
//     s32 temp_t4;
//     s32 temp_t5;
//     s32 temp_t8;
//
//     arg0->unk4 = (s32) arg1->unk0;
//     arg0->unkC = (s32) arg1->unk4;
//     arg0->unk10 = (s32) arg1->unk8;
//     sp4 = 0;
// loop_1:
//     temp_t0 = sp4 * 4;
//     (arg0 + temp_t0)->unk18 = (s32) (arg1 + temp_t0)->unkC;
//     temp_t5 = sp4 * 4;
//     (arg0 + temp_t5)->unk58 = (s32) (arg1 + temp_t5)->unk4C;
//     (arg0 + sp4)->unk98 = (u8) (arg1 + sp4)->unk8C;
//     (arg0 + sp4)->unkA8 = (u8) (arg1 + sp4)->unk9C;
//     temp_t8 = sp4 * 4;
//     (arg0 + temp_t8)->unkB8 = (s32) (arg1 + temp_t8)->unkAC;
//     temp_t4 = sp4 + 1;
//     sp4 = temp_t4;
//     if (temp_t4 < 0x10) {
//         goto loop_1;
//     }
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_17F10/func_80018790.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_17F10/func_800189D0.s")
// u8 func_800189D0(s32 arg0, s32 arg1) {
//     u8 spF;
//     u8 spE;
//     u8 spD;
//     u8 spC;
//     u8 spB;
//     s32 sp4;
//
//     if ((arg0 + arg1)->unk98 != 0) {
//         spF = *(arg0 + (arg1 * 4))->unk58;
//         (arg0 + (arg1 * 4))->unk58 = (s32) ((arg0 + (arg1 * 4))->unk58 + 1);
//         (arg0 + arg1)->unk98 = (s8) ((arg0 + arg1)->unk98 - 1);
//     } else {
//         spF = *(arg0 + (arg1 * 4))->unk18;
//         (arg0 + (arg1 * 4))->unk18 = (s32) ((arg0 + (arg1 * 4))->unk18 + 1);
//         if (spF == 0xFE) {
//             spB = *(arg0 + (arg1 * 4))->unk18;
//             (arg0 + (arg1 * 4))->unk18 = (s32) ((arg0 + (arg1 * 4))->unk18 + 1);
//             if (spB != 0xFE) {
//                 spD = spB;
//                 spE = *(arg0 + (arg1 * 4))->unk18;
//                 (arg0 + (arg1 * 4))->unk18 = (s32) ((arg0 + (arg1 * 4))->unk18 + 1);
//                 spC = *(arg0 + (arg1 * 4))->unk18;
//                 (arg0 + (arg1 * 4))->unk18 = (s32) ((arg0 + (arg1 * 4))->unk18 + 1);
//                 sp4 = (s32) spD;
//                 sp4 = sp4 << 8;
//                 sp4 = sp4 + spE;
//                 (arg0 + (arg1 * 4))->unk58 = (s32) (((arg0 + (arg1 * 4))->unk18 - sp4) - 4);
//                 (arg0 + arg1)->unk98 = spC;
//                 spF = *(arg0 + (arg1 * 4))->unk58;
//                 (arg0 + (arg1 * 4))->unk58 = (s32) ((arg0 + (arg1 * 4))->unk58 + 1);
//                 (arg0 + arg1)->unk98 = (s8) ((arg0 + arg1)->unk98 - 1);
//             }
//         }
//     }
//     return spF;
// }

s32 func_80018BC4(s32 arg0, s32 arg1) {
    s32 tmp1;
    s32 tmp2;

    tmp1 = func_800189D0(arg0, arg1);
    if (tmp1 & 0x80) {
        tmp1 = tmp1 & 0x7F;
        do
        {
            tmp2 = func_800189D0(arg0, arg1);
            tmp1 = (tmp1 << 7) + (tmp2 & 0x7F);
        } while (tmp2 & 0x80);
    }
    return tmp1;
}
