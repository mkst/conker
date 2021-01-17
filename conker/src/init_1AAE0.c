#include <ultra64.h>

#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/init_1AAE0/func_1001AAE0.s")
// void func_1001AAE0(void *arg0, s32 arg1) {
//     void *sp4;
//     void *sp0;
//     void *temp_t6;
//
//     sp4 = NULL;
//     sp0 = arg0->unk64;
//     if (sp0 != 0) {
// loop_1:
//         if ((sp0 + 4) == arg1) {
//             if (sp4 != 0) {
//                 *sp4 = (s32) *sp0;
//             } else {
//                 arg0->unk64 = (void *) *sp0;
//             }
//             if (arg0->unk68 == sp0) {
//                 arg0->unk68 = sp4;
//             }
//             *sp0 = (void *) arg0->unk6C;
//             arg0->unk6C = sp0;
//             arg0->unk8D = (u8) (arg0->unk8D - 1);
//             return;
//         }
//         sp4 = sp0;
//         temp_t6 = *sp0;
//         sp0 = temp_t6;
//         if (temp_t6 != 0) {
//             goto loop_1;
//         }
//     }
// }

#pragma GLOBAL_ASM("asm/nonmatchings/init_1AAE0/func_1001ABA0.s")
// void func_1001ABA0(struct26 *arg0, void *arg1, s32 arg2) {
//     void *sp3C;
//     s16 sp38;
//     void *sp34;
//     void *sp30;
//     void *sp2C;
//     void *sp28;
//     void *sp24;
//     void *sp20;
//     void *sp1C;
//     void *sp18;
//
//     sp34 = arg1->unk10;
//     if (sp34->unk38 == 0) {
//         sp30 = arg0->unk50;
//         if (sp30 != 0) {
// loop_2:
//             sp2C = *sp30;
//             sp28 = sp30;
//             sp24 = sp2C;
//             if ((sp28->unkC == 6) && (sp28->unk10 == arg1)) {
//                 if (sp24 != 0) {
//                     sp24->unk8 = (s32) (sp24->unk8 + sp28->unk8);
//                 }
//                 sp20 = sp30;
//                 if (sp20->unk0 != 0) {
//                     sp20->unk0->unk4 = (s32) sp20->unk4;
//                 }
//                 if (sp20->unk4 != 0) {
//                     *sp20->unk4 = (s32) sp20->unk0;
//                 }
//                 sp1C = sp30;
//                 sp18 = arg0 + 0x48;
//                 sp1C->unk0 = (s32) *sp18;
//                 sp1C->unk4 = sp18;
//                 if (*sp18 != 0) {
//                     (*sp18)->unk4 = sp1C;
//                 }
//                 *sp18 = sp1C;
//             }
//             sp30 = sp2C;
//             if (sp30 != 0) {
//                 goto loop_2;
//             }
//         }
//     }
//     sp34->unk37 = (u8)0;
//     sp34->unk38 = (u8)3;
//     sp34->unk34 = (u8)0;
//     sp34->unk28 = (s32) (arg0->unk1C + arg2);
//     func_1001FFE0(arg1, 0);
//     n_alSynSetVol(arg1, 0, arg2);
//     sp38 = 5;
//     sp3C = arg1;
//     arg2 = arg2 + 0x7D00;
//     n_alEvtqPostEvent(arg0 + 0x48, &sp38, arg2, 0);
// }

#pragma GLOBAL_ASM("asm/nonmatchings/init_1AAE0/func_1001ADA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/init_1AAE0/func_1001AF28.s")
// NON-MATCHING: what is going on with struct26!
// struct29 *func_1001AF28(struct26 *arg0, u8 arg1, u8 arg2, u8 arg3) {
//     struct29 *sp4;
//
//     sp4 = arg0->unk6C;
//     if (arg0->unk8D > arg0->unk8C) {
//         return NULL;
//     }
//     if (sp4 != 0) {
//         arg0->unk6C = sp4->unk0;
//         sp4->unk0 = 0;
//         if (arg0->unk64 == 0) {
//             arg0->unk64 = &sp4->unk0;
//         } else {
//             arg0->unk68 = &sp4->unk0;
//         }
//         arg0->unk68 = sp4->unk0;
//         sp4->unk35 = arg3;
//         sp4->unk36 = arg1;
//         sp4->unk37 = arg2;
//         sp4->unk14 = sp4;
//         arg0->unk8D++;
//     }
//     return sp4;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/init_1AAE0/func_1001AFEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/init_1AAE0/func_1001B07C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/init_1AAE0/__n_vsVol.s")
// s16 __n_vsVol(struct25 *arg0, struct26 *arg1) {
//     s32 sp4;
//     s32 sp0;
//
//     sp4 = (s32) (arg0->unk3A * arg0->unk37 * arg0->unk34) >> 6;
//     sp0 = (s32) ((arg1->unk60 + (arg0->unk35 * 0x3C))->unk9 * (arg0->unk24->unkD * arg1->unk32)) >> 0xE;
//     if ((arg1->unk60 + (arg0->unk35 * 0x3C))->unkD != 0xFF) {
//         sp0 = (s32) ((u32) (((arg1->unk60 + (arg0->unk35 * 0x3C))->unkD * sp0) + 1) >> 8);
//     }
//     sp4 = sp4 * sp0;
//     sp4 = (s32) ((u32) sp4 >> 0xF);
//     return sp6;
// }


#pragma GLOBAL_ASM("asm/nonmatchings/init_1AAE0/func_1001B310.s")
// NON-MATCHING: missing a move
// s32 func_1001B310(struct25 *arg0, struct26 *arg1) {
//     s32 sp14;
//     s32 sp10;
//
//     sp14 = arg1->unk60[arg0->unk35].unkA & 0x80;
//     sp10 = ((arg1->unk60[arg0->unk35].unkA & 0x7F) + (s32) (arg1->unk7C * 127.0f)) * arg1->unk80;
//
//     return (MAX(0, MIN(127, sp10)) | sp14) & 0xff;
// }

s32 __n_vsDelta(struct07 *arg0, s32 t) {
    s32 delta = arg0->unk28 - t;
    if (delta >= 0) {
        return delta;
    } else {
        return 1000; // AL_GAIN_CHANGE_TIME
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/init_1AAE0/__n_vsPan.s")
#pragma GLOBAL_ASM("asm/nonmatchings/init_1AAE0/__n_initFromBank.s")
#pragma GLOBAL_ASM("asm/nonmatchings/init_1AAE0/__n_initChanState.s")

void __n_resetPerfChanState(struct26 *arg0, s32 chan) {
    arg0->unk60[chan].unkA = 0;     // fxId or fxmix ?
    arg0->unk60[chan].unk6 = 64;    // pan
    arg0->unk60[chan].unk9 = 127;   // vol
    arg0->unk60[chan].unk7 = 5;     // priority
    arg0->unk60[chan].unkC = 0;     // sustain
    arg0->unk60[chan].unk4 = 200;   // bendRange
    arg0->unk60[chan].unk18 = 1.0f; // pitchBend
    arg0->unk60[chan].unk17 = 0;
    arg0->unk60[chan].unkD = 255;
    arg0->unk60[chan].unkE = 255;
    arg0->unk60[chan].unkF = 0;
    arg0->unk60[chan].unkB = 0;
    arg0->unk60[chan].unk16 = 0;
    arg0->unk60[chan].unk15 = 0;
    arg0->unk60[chan].unk14 = 0;
    arg0->unk60[chan].unk8 = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/init_1AAE0/func_1001B7D0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/init_1AAE0/func_1001BD34.s")
// s32 func_1001BD34(void *arg0, void *arg1, s32 arg2) {
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

#pragma GLOBAL_ASM("asm/nonmatchings/init_1AAE0/func_1001BE1C.s")
// void func_1001BE1C(void *arg0, s32 arg1, s32 arg2) {
//     if (arg2 == -1) {
//         arg0->unk30(arg1);
//     } else {
//         arg0->unk30((arg1 + (arg2 * 4))->unk10);
//     }
// }

#pragma GLOBAL_ASM("asm/nonmatchings/init_1AAE0/__n_seqpStopOsc.s")
