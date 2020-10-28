#include <ultra64.h>

#include "functions.h"
#include "variables.h"

#pragma GLOBAL_ASM("asm/nonmatchings/code_EB00/func_8000EB00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_EB00/func_8000EBC4.s")
// s32 func_8000EBC4(struct0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
//     s32 temp_v0;
//     s32 temp_v1;
//
//     temp_v1 = arg0->unk18 - D_800BE9E4;
//     if (temp_v1 <= 0) {
//         temp_v0 = arg0->unkC - D_800BE9E4 * 1000;
//         if (temp_v0 < 0) {
//             return 1;
//         }
//         arg0->unkC = temp_v0;
//     }
//     arg0->unk18 = temp_v1;
//     return 0;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_EB00/func_8000EC24.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_EB00/func_8000ECCC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_EB00/func_8000EDA0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_EB00/func_8000EE70.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_EB00/func_8000EF40.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_EB00/func_8000EFB4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_EB00/func_8000F1A8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_EB00/func_8000F248.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_EB00/func_8000F3D0.s")
// s32 func_8000F3D0(s32 arg0) {
//     s32 temp_a1;
//     s32 temp_t6;
//     struct1 *temp_v1;
//
//     temp_t6 = arg0 & 0xFFFF;
//     temp_a1 = temp_t6 & 0xF;
//     temp_v1 = (temp_a1 * 12) + &D_800425E0;
//     if (temp_v1->unk8) {
//         if ((temp_t6 == temp_v1->unk0) || (temp_a1 == temp_t6)) {
//             if (func_800173C4(temp_v1 + 8, temp_a1)) {
//                 return 1;
//             }
//         }
//     }
//     return 0;
// }


#pragma GLOBAL_ASM("asm/nonmatchings/code_EB00/func_8000F44C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_EB00/func_8000F4D8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_EB00/func_8000F568.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_EB00/func_8000F6B8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_EB00/func_8000F85C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_EB00/func_8000F91C.s")
// void func_8000F91C(u16 arg0, u16 arg1, s16 arg2, u8 arg3, s32 arg4,
//                    s16 arg5, s16 arg6, s16 arg7, s16 arg8, s16 arg9) {
//     s32 sp2C;
//
//     func_8000F85C(arg0, 8, (u32) (arg1 * func_8000F6B8(arg4, arg5, arg6, arg7, &sp2C, (s32) arg8, (s32) arg9)) >> 0xF);
//     func_8000F85C(arg0, 4, sp2C & 0x7F);
//     func_8000F85C(arg0, 256, (sp2C & 0x80) | arg3);
//     func_8000F85C(arg0, 16, arg2);
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_EB00/func_8000F9D4.s")
// void func_8000F9D4(u16 arg0, s16 arg1, s16 arg2, s16 arg3) {
//     u32 tmp;
//
//     func_8000F6B8(-1, arg1, arg2, arg3, &tmp, 0x7FF8, 0x7FFD);
//     func_8000F85C(arg0, 4, tmp & 0x7F);
//     func_8000F85C(arg0, 256, tmp & 0x80);
// }


#pragma GLOBAL_ASM("asm/nonmatchings/code_EB00/func_8000FA64.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_EB00/func_8000FC18.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_EB00/func_8000FD38.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_EB00/func_8000FDF4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_EB00/func_8000FE88.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_EB00/func_8000FEF0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_EB00/func_8000FF90.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_EB00/func_8001001C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_EB00/func_800100E0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_EB00/func_80010154.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_EB00/func_80010344.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_EB00/func_80010558.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_EB00/func_80010630.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_EB00/func_80010720.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_EB00/func_800107F8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_EB00/func_80010894.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_EB00/func_8001091C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_EB00/func_800109D0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_EB00/func_80010A3C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_EB00/func_80010AA8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_EB00/func_80010BE8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_EB00/func_80010E78.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_EB00/func_80010F30.s")
// void func_80010F30(s32 arg0, u16 arg1, u8 arg2, s16 arg3, u8 arg4) {
//     func_80010BE8(0, arg0, arg1, arg2, (s32) arg3, (u32) arg4, (u32) D_80041FD9);
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_EB00/func_80010F88.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_EB00/func_80010FFC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_EB00/func_800111C8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_EB00/func_8001123C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_EB00/func_800112BC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_EB00/func_80011310.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_EB00/func_8001147C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_EB00/func_800114D0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_EB00/func_80011624.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_EB00/func_80011BB8.s")

void func_80011E88(s32 arg0) {
}

void func_80011E94(s32 arg0) {
    if (arg0) {
        D_80041F61 = 1;
        return;
    }
    D_80041F61 = 0;
}


#pragma GLOBAL_ASM("asm/nonmatchings/code_EB00/func_80011EB8.s")
