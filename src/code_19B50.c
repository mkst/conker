#include <ultra64.h>

#include "functions.h"
#include "variables.h"

extern f32 fabsf(f32);
#pragma intrinsic (fabsf)


void func_80019B50(struct26 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    struct25 *sp2C;
    s16 tmp;
    arg0->unk60[arg2].unk9 = arg3;
    if(sp2C = arg0->unk64) {
        do {
            if ((sp2C->unk35 == arg2) && (sp2C->unk38 != 3)) {
                tmp = func_8001B200(sp2C, arg0);
                func_8001C910(&sp2C->unk4, tmp, func_8001B40C(sp2C, arg0->unk1C));
            }
        } while (sp2C = sp2C->unk0);
    }
}

void func_80019C28(struct26 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    struct25 *sp2C;
    u8 tmp;
    arg0->unk60[arg2].unk6 = arg3;
    if(sp2C = arg0->unk64) {
        do {
            if ((sp2C->unk35 == arg2)) {
                tmp = func_8001B450(sp2C, arg0);
                func_8001E2A0(&sp2C->unk4, tmp);
            }
        } while (sp2C = sp2C->unk0);
    }
}

void func_80019CD0(struct26 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    arg0->unk60[arg2].unk7 = arg3;
}

void func_80019CFC(struct21 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg0->unk84 != 0) {
        osSendMesg(arg0->unk84, (arg3 & 7) | 0x10 | ((arg0->unk10 << 5) & -0x100), 0);
    }
}

void func_80019D6C(struct26 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    arg0->unk60[arg2].unk8 = arg3;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_19B50/func_80019D98.s")
// NON-MATCHING: not there yet...
// void func_80019D98(struct26 *arg0, u8 arg1) {
//     struct25 *sp2C;
//     s16 tmp;
//     s8 sp29;
//     f32 sp24;
//
//     sp29 = arg0->unk60[arg1].unk15 - 64;
//     sp24 = arg0->unk60[arg1].unk18;
//     if(sp2C = arg0->unk64) {
//         do {
//               tmp = arg0->unk60[arg1].unk14;
//               func_8001CB40(&sp2C->unk4, tmp);
//               if (tmp != 0) {
//                   func_8001CA90(&sp2C->unk4, func_8001CEA4((sp2C->unk36 - sp2C->unk24->unk4->unk4) + sp29) * 440.0f * sp24);
//               }
//         } while (sp2C = sp2C->unk0);
//     }
// }

void func_80019ED8(struct26 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    arg0->unk60[arg2].unk14 = arg3;
    func_80019D98(arg0, arg2);
}

void func_80019F38(struct26 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    arg0->unk60[arg2].unk15 = arg3;
    func_80019D98(arg0, arg2);
}

void func_80019F98(struct26 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    struct25 *sp1C;
    arg0->unk60[arg2].unk16 = arg3;
    if(sp1C = arg0->unk64) {
        do {
            if ((sp1C->unk35 == arg2)) {
                func_8001E350(&sp1C->unk4, arg3);
            }
        } while (sp1C = sp1C->unk0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_19B50/func_8001A030.s")
// NON-MATCHING: lots to figure out here
// void func_8001A030(struct26 *arg0, s32 arg1, s32 arg2, u32 arg3) {
//     struct25 *sp24;
//     s32 phi_s0;
//     s32 phi_s0_2;
//
//     arg0->unk60[arg2].unkC = arg3;
//     if(sp24 = arg0->unk64) {
//         do
//         {
//             if ((sp24->unk35 == arg2) && (sp24->unk39 != 3)) {
//                 if (arg3 >= 64) {
//                     if (sp24->unk39 == 0) {
//                         sp24->unk39 = 2;
//                     }
//                 } else if (sp24->unk39 == 2) {
//                     sp24->unk39 = 0;
//                 } else if (sp24->unk39 == 4) {
//                     sp24->unk39 = 3;
//                     if (arg0->unk60[arg2].unk28 != 0) {
//                         if (arg0->unk60[arg2].unk24[0].unk0 < 16000) {
//                             phi_s0 = 16000;
//                         } else {
//                             phi_s0 = arg0->unk60[arg2].unk24;
//                         }
//                         func_8001ABA0(arg0, &sp24->unk4, phi_s0);
//                     } else {
//                         // if (sp24->unk24->unk8 < 16000) {
//                         //     phi_s0_2 = 16000;
//                         // } else {
//                         //     phi_s0_2 = sp24->unk24->unk8;
//                         // }
//                         func_8001ABA0(arg0, &sp24->unk4, phi_s0_2);
//                     }
//                 }
//             }
//         } while (sp24 = sp24->unk0);
//     }
// }

void func_8001A224(struct26 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    struct25 *sp1C;

    arg0->unk60[arg2].unkA = (arg0->unk60[arg2].unkA & 0x7F) | (arg3 << 7);
    if(sp1C = arg0->unk64) {
        do {
            if ((sp1C->unk35 == arg2) && (sp1C->unk38 != 3)) {
                func_8001D900(&sp1C->unk4, arg0->unk60[arg2].unkA);
            }
        } while (sp1C = sp1C->unk0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_19B50/func_8001A2F8.s")
// NON-MATCHING: doesnt use t3 reg
// void func_8001A2F8(struct26 *arg0, s32 arg1, s32 arg2, s32 arg3) {
//     arg3 = arg3 & 0x7F;
//     arg0->unk60[arg2].unkA = (arg0->unk60[arg2].unkA & 0x80) | arg3;
//     func_8001A224(arg0, arg1, arg2, arg0->unk60[arg2].unkA >> 7);
// }

void func_8001A39C(struct26 *arg0, s32 arg1, s32 arg2, u32 arg3) {
    if (arg3 < D_8002BA44->unk50) {
        arg0->unk60[arg2].unkB = arg3;
    }
}

void func_8001A3E0(struct24 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    arg0->unk36 = arg3;
}

void func_8001A3FC(struct26 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_8001263C(arg0->unk36 * 0x64 + arg3, 0x7FFF, 0x40);
}


#pragma GLOBAL_ASM("asm/nonmatchings/code_19B50/func_8001A45C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_19B50/func_8001A508.s")
// NON-MATCHING: not too far away
// void func_8001A508(struct26 *arg0, struct25 *arg1, s32 arg2, s32 arg3) {
//     f32 sp1C;
//     struct25 *temp_t2;
//
//     if (arg0->unk60[arg2].unkF == 0) {
//         arg0->unk60[arg2].unkF = 136;
//     }
//     if (arg0->unk60[arg2].unkE != arg3) {
//         sp1C = arg3 - arg0->unk60[arg2].unkD;
//         temp_t2 = &arg0->unk60[arg2];
//         temp_t2->unk10 = sp1C / (temp_t2->unkF & 0x7F);
//         arg0->unk60[arg2].unk10 = fabsf(arg0->unk60[arg2].unk10);
//         temp_t2 = &arg0->unk60[arg2];
//         if (temp_t2->unkD == temp_t2->unkE) {
//             arg0->unk60[arg2].unkE = (s8) arg3;
//             arg1->unk9 = 0xFE;
//             func_8001A704(arg0, arg1, arg2, arg3);
//         } else {
//             arg0->unk60[arg2].unkE = arg3;
//         }
//     }
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_19B50/func_8001A704.s")
// void func_8001A704(struct26 *arg0, s32 arg1, s32 arg2, s32 arg3) {
//     u8 sp2F;
//     u8 sp2E;
//     s32 sp28;
//     s32 sp24;
//     f32 sp20;
//     f32 sp1C;
//
//     sp2F = arg0->unk60[arg2].unkD;
//     sp2E = arg0->unk60[arg2].unkE;
//     sp20 = arg0->unk60[arg2].unk10;
//     sp28 = sp2E - sp2F;
//     if (sp28 > 0) {
//         if (arg0->unk60[arg2].unkF & 0x80) {
//             sp20 = sp20 * 2.0f;
//         }
//         sp24 = sp20;
//         if (sp24 == 0) {
//             sp24 = 1;
//             sp1C = 1.0f / sp20;
//         } else {
//             sp1C = (f32) sp24 / sp20;
//         }
//         if (sp24 < sp28) {
//             sp28 = sp24;
//         }
//     } else {
//         sp24 = sp20;
//         if (sp24 == 0) {
//             sp24 = 1;
//             sp1C = sp20;
//         } else {
//             sp1C = (f32) sp24 / sp20;
//         }
//         sp24 = -sp24;
//         if (sp28 < sp24) {
//             sp28 = sp24;
//         }
//     }
//     sp2F = sp28 + sp2F;
//     arg0->unk60[arg2].unkD = sp2F;
//     if (sp2F != sp2E) {
//         func_8001C224(&arg0->unk48, arg1, (s32) (arg0->unk24 * 100 * sp1C), 2);
//     }
//     if (sp2F != 0) {
//         arg0->unk30 = (arg0->unk30 | (1 << arg2));
//     } else {
//         arg0->unk30 = (arg0->unk30 & ~(1 << arg2));
//     }
//     func_8001A45C(arg0, arg2);
// }



void func_8001A9DC(struct26 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    arg0->unk60[arg2].unkF = arg3;
}

void func_8001AA08(struct26 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    arg0->unk60[arg2].unkD = arg3;
    arg0->unk60[arg2].unkE = arg3;
    if (arg3 == 0) {
        arg0->unk30 = arg0->unk30 & ((1 << arg2) ^ 0xFFFF);
    } else {
        arg0->unk30 = arg0->unk30 | (1 << arg2);
    }
    func_8001A45C(arg0, arg2);
}
