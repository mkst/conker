#include <ultra64.h>

#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/code_940/func_85000940.s")

void func_85000AC0(void) {
    D_800D9E64 = (u8)0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_940/func_85000AD0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_940/func_85001460.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_940/func_85001970.s")
// NON-MATCHING: what does func_80003C40 return?
// void func_85001970(void) {
//     s32 sp18;
//     s32 temp_a0;
//     s32 temp_v0;
//
//     D_800B0DE4 = 0;
//     D_800DBE63 = 0;
//     D_800DBE18 = 0;
//     D_800DBE1C = 0;
//     temp_a0 = D_80091C04[D_800BE9F0];
//     D_800DBE20 = 0;
//     D_800DBE24 = 0;
//     sp18 = temp_a0;
//     temp_v0 = func_80003C40(sp18, 1, 0, 0);
//     D_800B0DC0 = temp_v0;
//     D_800B0DC8 = (s32) (sp18 + temp_v0);
//     D_800B0DC4 = temp_v0;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_940/func_85001A08.s")

void func_85001B08(void) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_940/func_85001B10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_940/func_85001B5C.s")
// NON-MATCHING: uses v1 not v0
// u8* func_85001B5C(u8 arg0) {
//     *D_800B0DE0 = arg0;
//     D_800B0DE0++;
//     return D_800B0DE0;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_940/func_85001B8C.s")
// NON-MATCHING: uses t9 not t0
// void func_85001B8C(u16 arg0) {
//     s32 tmp = arg0;
//
//     *(D_800B0DE0 + 0) = tmp >> 8;
//     *(D_800B0DE0 + 1) = tmp;
//     D_800B0DE0 += 2;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_940/func_85001BC8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_940/func_85001CEC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_940/func_85001DE0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_940/func_85002008.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_940/func_85002248.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_940/func_85002560.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_940/func_850025FC.s")
// NON-MATCHING: stack is wrong
// void func_850025FC(void) {
//     s32 tmp2;
//     s32 tmp1;
//     s32 tmp0;
//
//     tmp0 = D_800DBE2C;
//     D_800DBE28 = (( (D_800DBE2A + 7) / 8) + 0xF) & 0xFFF0;
//     tmp1 = func_8502B5C8(0, 2, 5, D_800BE9F0 * 2);
//     tmp2 = func_8502B5C8(0, 2, 5, D_800BE9F0 * 2 + 1);
//     if (tmp1 == 0) {
//         D_800BE5D0 = 0;
//         return;
//     }
//
//     func_850183D0(D_800DBE28, tmp0, tmp1, tmp2);
//     func_80004074(tmp2);
// }

void func_850026C4(void) {
    D_800DBE38 = 0;
    func_8510F800();
}

void func_850026E8(s32 arg0) {
    D_800DBE18[arg0] = D_800DBE38;
    D_800DBE4C = D_800DBE38;
    D_800B0DE4 += D_800DBE38;
}

void func_85002724(void) {
    D_800DBE38 += func_850027F8();
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_940/func_85002754.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_940/func_850027F8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_940/func_85002878.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_940/func_850028BC.s")

void func_85002F40(s32 arg0) {
    if (arg0 == 50 || arg0 == 51) {
        D_800DBE64 = 150.0f;
        return;
    }
    if (D_800BE616) {
        D_800DBE64 = 85.0f;
        return;
    }
    D_800DBE64 = 50.0f;
}

s32 func_85002FA0(s32 arg0) {
    return arg0 ^ 0xF0F0F0F0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_940/func_85002FB4.s")
// NON-MATCHING: not there yet
// void *func_85002FB4(s32 arg0) {
//     struct104 *sp3C;
//     s32 sp38;
//     s32 sp34;
//     s32 sp2C;
//     s32 temp_v0_3;
//     struct104 *temp_v0;
//     struct104 *temp_v0_2;
//     struct104 *temp_v0_4;
//
//     temp_v0_2 = func_8502B6BC(&sp34, 0, &sp38, 2, 0x15, arg0);
//     sp3C = temp_v0_2;
//     if ((sp38 != 0) && ((temp_v0_2->unk4 << 8) != 0)) {
//         D_800B0DF0 = (void *) temp_v0_2->unk0;
//         if (sp34 == 0) {
//             D_8003C8E0 = 0xC000037;
//             func_850AD770();
//         }
//         if (D_800B0DF0 == 0) {
//             D_8003C8E0 = 0xC000037;
//             func_850AD770();
//         }
//     }
//     func_851EF040(func_85002FA0(0x40F0FAAC), &sp2C); // 0xb0000a5c
//     temp_v0_3 = func_85002FA0(sp2C);
//     sp2C = temp_v0_3;
//     if (temp_v0_3 != 0xE7B00F09) {
//         temp_v0_4 = D_800B0DF0;
//         temp_v0_4->unk12 = ((u32) temp_v0_4->unk12 >> 1);
//     }
//
//     temp_v0 = D_800B0DF0;
//     if (temp_v0->unk12 != 0) {
//         D_800D2F3C = temp_v0->unk12;
//         D_800D2F40 = sp3C->unk8;
//     } else {
//         D_800D2F3C = 0U;
//         D_800D2F40 = 0;
//     }
//
//     if ((D_8008FD90 >= 2) && (temp_v0->unk8 == 4)) {
//         temp_v0->unk8 = (u8)2U;
//     }
//     return temp_v0;
// }

void func_8500310C(void) {
}
