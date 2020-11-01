#include <ultra64.h>

#include "functions.h"
#include "variables.h"

void func_800128D0(struct8 *arg0, s32 arg1) {
    s32 size = arg1;

    s32 i;
    for (i = 0; i < arg0->unk2; i++)
    {
        arg0->unk4[i].unk0 += size;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_128D0/func_80012934.s")
// void func_80012934(void *arg0, s32 arg1, s32 arg2) {
//     void *sp24;
//     s32 sp20;
//     s32 sp1C;
//     s32 sp18;
//     s32 temp_t1;
//     void *temp_t6;
//
//     sp24 = arg0;
//     sp20 = arg1;
//     sp1C = arg2;
//     if (arg0->unk0 != 0x4231) {
//         return;
//     }
//     sp18 = 0;
//     if ((s32) arg0->unk2 > 0) {
// loop_3:
//         temp_t6 = arg0 + (sp18 * 4);
//         temp_t6->unk4 = (void *) (temp_t6->unk4 + sp24);
//         if ((arg0 + (sp18 * 4))->unk4 != 0) {
//             func_80012A28((arg0 + (sp18 * 4))->unk4, sp24, sp20, sp1C);
//         }
//         temp_t1 = sp18 + 1;
//         sp18 = temp_t1;
//         if (temp_t1 < (s32) arg0->unk2) {
//             goto loop_3;
//         }
//     }
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_128D0/func_80012A28.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_128D0/func_80012B84.s")
// NOT-MATCHING: missing some moves
// void func_80012B84(struct11 *arg0, s32 arg1) {
//     if (arg0->unk3) {
//         return;
//     }
//     arg0->unk3 = 1;
//     arg1 = (0xFFFFFFF8 & arg1) << 5;
//     arg0->unk10 += arg1;
// }

// #pragma GLOBAL_ASM("asm/nonmatchings/code_128D0/func_80012BC8.s")
// static void func_80012BC8(void) {
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_128D0/func_80012BD0.s")
// void func_80012BD0(void *arg0, s32 arg1) {
//     s32 sp4;
//     s32 temp_t2;
//     s32 temp_t8;
//
//     if (arg0->unk3 != 0) {
//         return;
//     }
//     arg0->unk3 = (u8)1U;
//     sp4 = 0;
//     if ((s32) arg0->unkE > 0) {
// loop_3:
//         arg0[sp4].unk10 = (s32) (arg0[sp4].unk10 + ((arg1 & -8) << 5));
//         temp_t8 = sp4 + 1;
//         sp4 = temp_t8;
//         if (temp_t8 < (s32) arg0->unkE) {
//             goto loop_3;
//         }
//     }
// }

void func_80012C5C(struct9 *arg0, s32 arg1, s32 arg2) {
    if (arg0->unkE) {
        return;
    }
    arg0->unkE = 1;
    arg0->unk0 = arg0->unk0 + arg1;
    arg0->unk4 = arg0->unk4 + arg1;
    arg0->unk8 = arg0->unk8 + arg1;
    func_80012CFC(arg0->unk8, arg1, arg2);
}

void func_80012CFC(struct12 *arg0, s32 arg1, s32 arg2) {
    arg0->unk9 = 1;
    arg0->unk0 += arg2;
    if (arg0->unk8 == 0) {
        arg0->unk10 += arg1;
        if (arg0->unkC != 0) {
            arg0->unkC += arg1;
        }
        arg0->unk14 = 0;
    } else if ((arg0->unk8 == 1) && (arg0->unkC != 0)) {
        arg0->unkC = (s32) (arg0->unkC + arg1);
    }
}

// #pragma GLOBAL_ASM("asm/nonmatchings/code_128D0/func_80012D78.s")
// static void func_80012D78(void) {
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_128D0/func_80012D80.s")
// NOT-MATCHING: missing a couple of moves
// f32 func_80012D80(u8 arg0) {
//     f32 sp4 = D_8002C450;
//     f32 sp0 = 1.0f;
//
//     while (arg0)
//     {
//         if (arg0 & 1) {
//             sp0 *= sp4;
//         }
//         sp4 *= sp4;
//         arg0 = arg0 >> 1;
//     }
//     return sp0;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_128D0/func_80012E04.s")
// s32 func_80012E04(void *arg0, void *arg1, u8 arg2, u8 arg3, u8 arg4, u8 arg5) {
//     void *sp2C;
//     s32 sp28;
//
//     sp28 = 0;
//     if (arg5 == 0) {
//         return 0;
//     }
//     if (*(void *)0x80042800 != 0) {
//         sp2C = *(void *)0x80042800;
//         *(void *)0x80042800 = (void *) **(void *)0x80042800;
//         sp2C->unk4 = arg2;
//         *arg0 = sp2C;
//         sp28 = arg5 << 0xE;
//         if (arg2 != 1) {
//             if (arg2 != 0x80) {
//
//             } else {
//                 sp2C->unk28 = func_80012D80(arg4);
//                 sp2C->unk24 = (u16)0;
//                 sp2C->unk22 = (s16) (0x103 - arg3);
//                 *arg1 = 1.0f;
//             }
//         } else {
//             sp2C->unk24 = (u16)0;
//             sp2C->unk22 = (s16) (0x103 - arg3);
//             sp2C->unk28 = (s8) ((s32) arg4 >> 1);
//             sp2C->unk29 = (s8) (0x7F - sp2C->unk28);
//             *arg1 = (f32) (u32) sp2C->unk29;
//         }
//     }
//     return sp28;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_128D0/func_80012F94.s")
// s32 func_80012F94(void *arg0, void *arg1) {
//     f32 sp2C;
//     void *sp28;
//     s32 sp24;
//     u8 temp_s0;
//
//     sp28 = arg0;
//     sp24 = 0x3E80;
//     temp_s0 = sp28->unk4;
//     if (temp_s0 != 1) {
//         if (temp_s0 != 0x80) {
//
//         } else {
//             sp28->unk24 = (u16) (sp28->unk24 + 1);
//             if ((s32) sp28->unk24 >= (s32) sp28->unk22) {
//                 sp28->unk24 = (u16)0;
//             }
//             sp2C = (f32) (u32) sp28->unk24 / (f32) (u32) sp28->unk22;
//             sp2C = func_85047D60(sp2C * *(void *)0x8002C458) * sp28->unk28;
//             *arg1 = func_80019AB0((s32) sp2C);
//         }
//     } else {
//         sp28->unk24 = (u16) (sp28->unk24 + 1);
//         if ((s32) sp28->unk24 >= (s32) sp28->unk22) {
//             sp28->unk24 = (u16)0;
//         }
//         sp2C = (f32) (u32) sp28->unk24 / (f32) (u32) sp28->unk22;
//         sp2C = func_85047D60(sp2C * *(void *)0x8002C454);
//         sp2C = (f32) (u32) sp28->unk28 * sp2C;
//         *arg1 = (f32) ((f32) (u32) sp28->unk29 + sp2C);
//     }
//     return sp24;
// }

// #pragma GLOBAL_ASM("asm/nonmatchings/code_128D0/func_800131D8.s")
void func_800131D8(s32 *arg0) {
    *arg0 = D_80042800;
    D_80042800 = arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_128D0/func_800131FC.s")
// void func_800131FC(struct13 *arg0, s32 arg1) {
//     struct13 *sp24;
//     s32 sp20;
//     s32 temp_t2;
//
//     D_80042804 = func_80012844(0, 0, arg0->unkC, arg1, 0x2C);
//     D_80042800 = D_80042804;
//     D_80042800 = D_80042804;
//     sp24 = D_80042804;
//     sp20 = 0;
//     if ((arg1 - 1) > 0) {
//         do
//         {
//             *sp24 = (s32) ((sp20 * 44) + D_80042804 + 44);
//             sp24 = *sp24;
//             temp_t2 = sp20 + 1;
//             sp20 = temp_t2;
//         } while (temp_t2 < (arg1 - 1));
//     }
//     *sp24 = 0;
//     arg0->unk10 = D_10012E04;
//     arg0->unk14 = D_10012F94;
//     arg0->unk18 = D_100131D8;
// }
