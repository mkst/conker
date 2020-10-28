#include <ultra64.h>

#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/code_1AAE0/func_8001AAE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_1AAE0/func_8001ABA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_1AAE0/func_8001ADA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_1AAE0/func_8001AF28.s")
// void *func_8001AF28(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
//     void *sp4;
//
//     sp4 = arg0->unk6C;
//     if ((s32) arg0->unk8C < (s32) arg0->unk8D) {
//         return NULL;
//     }
//     if (sp4 != 0) {
//         arg0->unk6C = (void *) sp4->unk0;
//         sp4->unk0 = 0;
//         if (arg0->unk64 == 0) {
//             arg0->unk64 = sp4;
//         } else {
//             *arg0->unk68 = sp4;
//         }
//         arg0->unk68 = sp4;
//         sp4->unk35 = (s8) (arg3 & 0xFF);
//         sp4->unk36 = (s8) (arg1 & 0xFF);
//         sp4->unk37 = (s8) (arg2 & 0xFF);
//         sp4->unk14 = sp4;
//         arg0->unk8D = (u8) (arg0->unk8D + 1);
//     }
//     return sp4;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_1AAE0/func_8001AFEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_1AAE0/func_8001B07C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_1AAE0/func_8001B200.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_1AAE0/func_8001B310.s")
// s32 func_8001B310(void *arg0, void *arg1) {
//     s32 sp14;
//     s32 sp10;
//     s32 phi_a3;
//     s32 phi_a2;
//     s32 phi_t0;
//
//     sp14 = (arg1->unk60 + (arg0->unk35 * 0x3C))->unkA & 0x80;
//     sp10 = (s32) ((f32) (((arg1->unk60 + (arg0->unk35 * 0x3C))->unkA & 0x7F) + (s32) (arg1->unk7C * 127.0f)) * arg1->unk80);
//     if (sp10 >= 0x80) {
//         phi_a3 = 0x7F;
//     } else {
//         phi_a3 = sp10;
//     }
//     if (phi_a3 < 0) {
//         phi_a2 = 0;
//     } else {
//         if (sp10 >= 0x80) {
//             phi_t0 = 0x7F;
//         } else {
//             phi_t0 = sp10;
//         }
//         phi_a2 = phi_t0;
//     }
//     return (phi_a2 | sp14) & 0xFF;
// }

// #pragma GLOBAL_ASM("asm/nonmatchings/code_1AAE0/func_8001B40C.s")

s32 func_8001B40C(struct7 *arg0, s32 arg1) {
    s32 sp4;

    sp4 = arg0->unk28 - arg1;
    if (sp4 >= 0) {
        return sp4;
    }
    return 1000;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_1AAE0/func_8001B450.s")
// u8 func_8001B450(void *arg0, void *arg1) {
//     s32 sp4;
//
//     sp4 = ((arg1->unk60 + (arg0->unk35 * 0x3C))->unk6 + arg0->unk24->unkC) - 0x40;
//     if (sp4 > 0) {
//       // nothing?!
//     } else {
//         sp4 = 0;
//     }
//     if (sp4 < 0x7F) {
//
//     } else {
//         sp4 = 0x7F;
//     }
//     return sp7;
// }



#pragma GLOBAL_ASM("asm/nonmatchings/code_1AAE0/func_8001B4D4.s")
// void func_8001B4D4(void *arg0, void *arg1) {
//     s32 sp1C;
//     s32 sp18;
//     s32 temp_t8;
//
//     sp18 = 0;
//     sp1C = 1;
//     if (sp18 == 0) {
// loop_1:
//         sp18 = (arg1 + (sp1C * 4))->unkC;
//         sp1C = sp1C + 1;
//         if (sp18 == 0) {
//             goto loop_1;
//         }
//     }
//     sp1C = 0;
//     if ((s32) arg0->unk34 > 0) {
// loop_3:
//         func_8001B620(arg0, sp1C);
//         temp_t8 = sp1C + 1;
//         sp1C = temp_t8;
//         if (temp_t8 < (s32) arg0->unk34) {
//             goto loop_3;
//         }
//     }
//     if (arg1->unk8 != 0) {
//         func_8001B620(arg0, sp1C);
//     }
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_1AAE0/func_8001B59C.s")
// void func_8001B59C(void *arg0) {
//     s32 sp1C;
//     s32 temp_t4;
//
//     sp1C = 0;
//     if ((s32) arg0->unk34 > 0) {
// loop_1:
//         *(arg0->unk60 + (sp1C * 0x3C)) = 0;
//         func_8001B620(arg0, sp1C);
//         temp_t4 = sp1C + 1;
//         sp1C = temp_t4;
//         if (temp_t4 < (s32) arg0->unk34) {
//             goto loop_1;
//         }
//     }
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_1AAE0/func_8001B620.s")
// void func_8001B620(void *arg0, s32 arg1) {
//     (arg0->unk60 + (arg1 * 0x3C))->unkA = (u8)0;
//     (arg0->unk60 + (arg1 * 0x3C))->unk6 = (u8)0x40; // 64
//     (arg0->unk60 + (arg1 * 0x3C))->unk9 = (u8)0x7F; // 127
//     (arg0->unk60 + (arg1 * 0x3C))->unk7 = (u8)5;
//     (arg0->unk60 + (arg1 * 0x3C))->unkC = (u8)0;
//     (arg0->unk60 + (arg1 * 0x3C))->unk4 = (u16)0xC8; // 200
//     (arg0->unk60 + (arg1 * 0x3C))->unk18 = 1.0f;
//     (arg0->unk60 + (arg1 * 0x3C))->unk17 = (u8)0;
//     (arg0->unk60 + (arg1 * 0x3C))->unkD = (u8)0xFF; // 255
//     (arg0->unk60 + (arg1 * 0x3C))->unkE = (u8)0xFF; // 255
//     (arg0->unk60 + (arg1 * 0x3C))->unkF = (u8)0;
//     (arg0->unk60 + (arg1 * 0x3C))->unkB = (u8)0;
//     (arg0->unk60 + (arg1 * 0x3C))->unk16 = (u8)0;
//     (arg0->unk60 + (arg1 * 0x3C))->unk15 = (u8)0;
//     (arg0->unk60 + (arg1 * 0x3C))->unk14 = (u8)0;
//     (arg0->unk60 + (arg1 * 0x3C))->unk8 = (u8)0;
// }


// #pragma GLOBAL_ASM("asm/nonmatchings/code_1AAE0/func_8001B7C8.s")
void func_8001B7C8(void) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_1AAE0/func_8001B7D0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1AAE0/func_8001BD34.s")
// s32 func_8001BD34(void *arg0, void *arg1, s32 arg2) {
//     void *sp1C;
//     s32 sp18;
//     s32 phi_v0;
//
//     sp18 = 0;
//     sp1C = arg0->unk28();
//     if (sp1C == 0) {
//         return 0;
//     }
//     if (arg2 == -1) {
//         phi_v0 = sp1C(arg1, 1);
//     } else {
//         phi_v0 = sp1C(*arg1 + (arg2 * 4) + 0x10, 0);
//     }
//     sp18 = phi_v0;
//     if ((sp18 != 0) && ((sp18 & 0xFF000003) != 0x80000000)) {
//         return 0;
//     }
//     return sp18;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_1AAE0/func_8001BE1C.s")
// void func_8001BE1C(void *arg0, s32 arg1, s32 arg2) {
//     if (arg2 == -1) {
//         arg0->unk30(arg1);
//     } else {
//         arg0->unk30((arg1 + (arg2 * 4))->unk10);
//     }
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_1AAE0/func_8001BE94.s")
