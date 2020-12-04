#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_80015550(struct26 *arg0, s32 arg1) {
    struct33 tmp;

    tmp.unk0 = 14;
    tmp.unk4 = arg1;

    func_8001C224(&arg0->unk48, &tmp, 0, 2);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_15550/func_800155A0.s")

s32 func_80015878(struct04 *arg0) {
    struct04 *sp2C;
    struct33 tmp;

    sp2C = arg0;
    do {
        if (sp2C->unk28 == 32) {
            if (0) {};
            tmp.unk0 = 32;
            func_8001C224(&sp2C->unk14, &tmp, sp2C->unk48, 3);
        } else {
            func_80015944(&sp2C->unk28);
            if (0) {};
        }
        sp2C->unk4C = func_8001C108(&sp2C->unk14, &sp2C->unk28);
    } while (sp2C->unk4C == 0);

    sp2C->unk50 += sp2C->unk4C;
    return sp2C->unk4C;
}

// jump table
#pragma GLOBAL_ASM("asm/nonmatchings/code_15550/func_80015944.s")

void func_80016E90(struct31 *arg0) {
    if ((arg0->unk53 & 4) != 0) {
        func_8001C770(&arg0->unk10);
        func_8001C810(&arg0->unk10);
    }
    func_80017298(arg0);
    func_80016F80(D_8002BA2C + 20, arg0, 0xFFFF);
}

void func_80016F00(struct154 *arg0) {
    s16 pad;
    struct155 tmp;
    f32 res;

    res = func_80019AB0(arg0->unkC->unk4->unk5) * arg0->unk34;
    tmp.unk0 = 16;
    tmp.unk4 = arg0;
    tmp.unk8 = *(s32*)&res;
    func_8001C224(D_8002BA2C + 20, &tmp, 33333, 2);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_15550/func_80016F80.s")
// void func_80016F80(void *arg0, s32 arg1, u16 arg2) {
//     void *sp3C;
//     void *sp38;
//     void *sp34;
//     void *sp30;
//     void *sp2C;
//     s32 sp28;
//     void *sp24;
//     void *sp20;
//     void *sp1C;
//
//     sp28 = osSetIntMask(1);
//     sp3C = arg0->unk8;
//     if (sp3C != 0) {
// loop_1:
//         sp38 = *sp3C;
//         sp34 = sp3C;
//         sp30 = sp38;
//         sp2C = sp34 + 0xC;
//         if ((sp2C->unk4 == arg1) && ((sp2C->unk0 & arg2) != 0)) {
//             if (sp30 != 0) {
//                 sp30->unk8 = (s32) (sp30->unk8 + sp34->unk8);
//             }
//             sp24 = sp3C;
//             if (sp24->unk0 != 0) {
//                 sp24->unk0->unk4 = (s32) sp24->unk4;
//             }
//             if (sp24->unk4 != 0) {
//                 *sp24->unk4 = (s32) sp24->unk0;
//             }
//             sp20 = sp3C;
//             sp1C = arg0;
//             sp20->unk0 = (s32) *sp1C;
//             sp20->unk4 = sp1C;
//             if (*sp1C != 0) {
//                 (*sp1C)->unk4 = sp20;
//             }
//             *sp1C = sp20;
//         }
//         sp3C = sp38;
//         if (sp3C != 0) {
//             goto loop_1;
//         }
//     }
//     osSetIntMask(sp28);
// }

struct31 *func_80017100(s32 arg0, s16 arg1) {
    struct31 *sp24;
    u32 mask;
    struct31 *sp1C;

    mask = osSetIntMask(1);
    sp24 = D_8002BA28;
    if (sp24 != 0) {
        D_8002BA28 = sp24->unk0;
        sp1C = sp24;
        if (sp1C->unk0) {
            sp1C->unk0->unk4 = sp1C->unk4;
        }
        if (sp1C->unk4) {
            *sp1C->unk4 = sp1C->unk0;
        }
        if (D_8002BA20) {
            sp24->unk0 = D_8002BA20;
            sp24->unk4 = NULL;
            D_8002BA20->unk4 = sp24;
            D_8002BA20 = sp24;
        } else {
            sp24->unk4 = 0;
            sp24->unk0 = sp24->unk4;
            D_8002BA20 = sp24;
            D_8002BA24 = sp24;
        }
        osSetIntMask(mask);
        sp24->unkC = 0;
        sp24->unk4C = arg1;
        sp24->unk3C = arg0;
        sp24->unk4E = 64;
        sp24->unk54 = 5;
        sp24->unk40 = 2;
        sp24->unk53 = 0;
        sp24->unk38 = 0;
        sp24->unk30 = 1.0f;
    } else {
        osSetIntMask(mask);
    }
    return sp24;
}

void func_80017298(struct31 *arg0) {
    struct31 *sp4;

    if (D_8002BA20 == arg0) {
        D_8002BA20 = arg0->unk0;
    }
    if (D_8002BA24 == arg0) {
        D_8002BA24 = arg0->unk4;
    }
    sp4 = arg0;
    if (sp4->unk0) {
        sp4->unk0->unk4 = sp4->unk4;
    }
    if (sp4->unk4) {
        *sp4->unk4 = sp4->unk0;
    }
    if (D_8002BA28) {
        arg0->unk0 = D_8002BA28;
        arg0->unk4 = NULL;
        D_8002BA28->unk4 = arg0;
        D_8002BA28 = arg0;
    } else {
        arg0->unk4 = NULL;
        arg0->unk0 = arg0->unk4;
        D_8002BA28 = arg0;
    }
    if (arg0->unk53 & 4) {
        D_8002BA30 = D_8002BA30 - 1;
    }
    arg0->unk54 = 0;
    if (arg0->unk38) {
        if (*arg0->unk38 == arg0) {
            *arg0->unk38 = 0;
        }
        arg0->unk38 = NULL;
    }
}

s32 func_800173C4(struct31 **arg0) {
    s32 sp1C;
    s32 mask;

    sp1C = 0;
    if (*arg0) {
        mask = __osDisableInt();
        if (*arg0) {
            sp1C = (*arg0)->unk54;
        }
        __osRestoreInt(mask);
    }
    return sp1C;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_15550/func_80017438.s")
// void *func_80017438(s32 arg0, s16 arg1, u16 arg2, u8 arg3, f32 arg4, u8 arg5, u8 arg6, void *arg7) {
//     void *sp34;
//     void *sp30;
//     s16 sp2E;
//     s32 sp28;
//     void *sp1C;
//     s16 sp18;
//
//     sp30 = NULL;
//     sp2E = 0;
//     if (arg1 != 0) {
// loop_1:
//         sp34 = func_80017100(arg0, arg1 - 1);
//         if (sp34 != 0) {
//             (*(void *)0x8002BA2C)->unk3C = sp34;
//             sp18 = 0x4000;
//             sp1C = sp34;
//             sp34->unk4F = arg3;
//             sp34->unk44 = arg2;
//             sp34->unk34 = arg4;
//             sp34->unk50 = arg5;
//             sp34->unk51 = arg6;
//             sp28 = 0;
//             func_8001C224(D_8002BA2C + 20, &sp18, sp28 + 1, 2);
//             sp30 = sp34;
//         }
//         arg1 = (u16)0;
//         if (arg1 != 0) {
//             if (sp34 != 0) {
//                 goto loop_1;
//             }
//         }
//         if ((sp30 == 0) || (sp30->unk53 = (u8) (sp30->unk53 | 1), sp30->unk38 = arg7, (sp2E != 0))) {
//
//         }
//     }
//     if (arg7 != 0) {
//         *arg7 = sp30;
//     }
//     return sp30;
// }

// TODO: use struct
void func_80017594(struct31 *arg0) {
    u16 pad0[3];
    struct31 *sp1C;
    u16 pad1;
    s16 sp18;

    if (arg0) {
        sp18 = 1024;
        sp1C = arg0;
        sp1C->unk53 &= -0x11;
        func_8001C224(D_8002BA2C + 20, &sp18, 0, 2);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_15550/func_80017604.s")
// NON-MATCHING: stack isnt quite right
// void func_80017604(u8 arg0) {
//     s32 mask;
//     struct31 *sp20;
//     u16 foo;
//     s16 sp1C;
//     struct31 *sp18;
//
//     mask = osSetIntMask(1);
//     sp18 = D_8002BA20;
//     if (sp18 != 0) {
//         do
//         {
//             sp1C = 1024;
//             sp20 = sp18;
//             if ((sp18->unk53 & arg0) == arg0) {
//                 sp20->unk53 = sp20->unk53 & -0x11;
//                 func_8001C224(D_8002BA2C + 20, &sp1C, 0, 2);
//             }
//             sp18 = sp18->unk0;
//         }
//         while (sp18);
//     }
//     osSetIntMask(mask);
// }

void func_800176C4(void) {
    func_80017604(1);
}

void func_800176EC(void) {
    func_80017604(3);
}

void func_80017714(s32 arg0, s16 arg1, s32 arg2) {
    struct35 tmp;

    if (arg0 != 0) {
        tmp.unk0 = arg1;
        tmp.unk4 = arg0;
        tmp.unk8 = arg2;
        func_8001C224(D_8002BA2C + 20, &tmp, 0, 2);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_15550/func_80017780.s")
// NON-MATCHING: far from matching
// void func_80017780(u8 arg0, u16 arg1) {
//     s32 sp34;
//     struct31 *sp30;
//     s32 sp2C;
//     struct31 *sp20;
//     s16 sp1C;
//     struct31 *temp_t4;
//     struct31 *temp_t4_2;
//
//     sp34 = osSetIntMask(1);
//     sp30 = D_8002BA20;
//     D_800428B8[arg0] = arg1;
//     sp2C = 0;
//     if (sp30 != 0) {
//         do
//         {
//             temp_t4 = sp30->unkC;
//             // if ((temp_t4 != 0) && ((temp_t4->unk4->unk2 & 0x1F) == arg0)) {
//             //     sp1C = 1024;
//             //     sp20 = sp30;
//             //     func_8001C224(D_8002BA2C + 20, &sp1C, 0, 2);
//             // }
//             sp2C = sp2C + 1;
//             temp_t4_2 = sp30->unk0;
//             sp30 = temp_t4_2;
//         }
//         while (temp_t4_2 != 0);
//     }
//     osSetIntMask(sp34);
// }
