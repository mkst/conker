#include <ultra64.h>

#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/code_8F90/func_80008F90.s")
// NON-MATCHING: so much to do
// void func_80008F90(struct15 *arg0, OSPri arg1, struct52 *arg2) {
//     // ? sp160;
//     s32 sp58;
//     // ? *temp_t4_2;
//     f32 temp_f0;
//     s32 temp_f8;
//     s32 temp_t4;
//     s32 temp_t7;
//     s32 temp_v0;
//     // u32 temp_a1;
//     // u32 temp_s0_2;
//     // void *temp_a0;
//     // void *temp_s0;
//     // void *temp_s0_3;
//     // void *temp_s1;
//     // void *temp_t0;
//     // void *temp_v0_2;
//     // void *temp_v0_3;
//     // void *temp_v0_4;
//     // void *temp_v1;
//     u32 phi_v1;
//     void *phi_t0;
//     s32 *phi_t4;
//     // void *phi_s0;
//     // void *phi_s1;
//     // void *phi_v0;
//     // s32 phi_v1_2;
//     // u32 phi_a1;
//     // u32 phi_s0_2;
//     // void *phi_s0_3;
//
//     func_80012588(&D_8003E370);
//     arg0->unk10 = &D_10009980;
//     temp_v0 = osAiSetFrequency(arg2->unk0);
//     arg0->unk2C = temp_v0;
//     arg0->unk14 = &D_10009FFC;
//     arg0->unk18 = &D_10009B2C;
//     arg0->unk1C = &D_10009B90;
//     arg0->unk20 = &D_10009B4C;
//     temp_f0 = ((f32) (u32) arg2->unk4 * (f32) temp_v0) / 30.0f;
//     temp_f8 = (s32) temp_f0;
//     D_80040F8C = temp_f8;
//     phi_v1 = temp_f8;
//     if ((f32) (u32) temp_f8 < temp_f0) {
//         temp_t4 = temp_f8 + 1;
//         D_80040F8C = temp_t4;
//         phi_v1 = (u32) temp_t4;
//     }
//     temp_t7 = ((phi_v1 / 184) * 184) + 184;
//     D_80040F8C = temp_t7;
//     D_80040F88 = temp_t7 - 184;
//     D_80040F90 = temp_t7 + 84;
//     D_80040F84 = (u8)0;
//     phi_t0 = D_8002AE54;
//     phi_t4 = &sp58;
// // loop_3:
// //     temp_t0 = phi_t0 + 0xC;
// //     temp_t4_2 = phi_t4 + 0xC;
// //     temp_t4_2->unk-C = (s32) *phi_t0;
// //     temp_t4_2->unk-8 = (s32) temp_t0->unk-8;
// //     temp_t4_2->unk-4 = (s32) temp_t0->unk-4;
// //     phi_t0 = temp_t0;
// //     phi_t4 = temp_t4_2;
// //     if (temp_t0 != 0x8002B064) {
// //         goto loop_3;
// //     }
// //     arg0->unk34 = &sp58;
// //     arg0->unk38 = &sp160;
// //     func_80018DA0(0x8003E640, arg0, (void *)0x80040F8C, &sp58);
// //     *(void *)0x8003E380 = 0x8003E640;
// //     D_800406B8.unk4 = 0;
// //     D_800406B8.unk0 = 0;
// //     phi_s0 = &D_800406B8;
// //     phi_s1 = (void *)0x800406CC;
// // loop_5:
// //     temp_v0_2 = phi_s0->unk0;
// //     phi_s0->unk18 = phi_s0;
// //     phi_s0->unk14 = temp_v0_2;
// //     if (temp_v0_2 != 0) {
// //         temp_v0_2->unk4 = phi_s1;
// //     }
// //     phi_s0->unk0 = phi_s1;
// //     temp_s1 = phi_s1 + 0x14;
// //     temp_s0 = phi_s0 + 0x14;
// //     temp_s0->unk-4 = func_80012844(0, 0, arg0->unk28, 1, 2048);
// //     phi_s0 = temp_s0;
// //     phi_s1 = temp_s1;
// //     if ((u32) temp_s1 < (u32) &D_80040AC8) {
// //         goto loop_5;
// //     }
// //     temp_s0->unk10 = func_80012844(0, 0, arg0->unk28, 1, 2048);
// //     bzero(&D_80040AC8, 1200);
// //     D_80040AC8.unk4 = 0;
// //     D_80040AC8.unk0 = 0;
// //     phi_v0 = &D_80040AC8;
// //     phi_v1_2 = 0x80040AE0;
// //     phi_a1 = 0U;
// // loop_9:
// //     temp_a0 = phi_v0->unk0;
// //     phi_v0->unk1C = phi_v0;
// //     phi_v0->unk18 = temp_a0;
// //     if (temp_a0 != 0) {
// //         temp_a0->unk4 = phi_v1_2;
// //     }
// //     phi_v0->unk0 = phi_v1_2;
// //     temp_a1 = phi_a1 + 1;
// //     temp_v0_3 = phi_v0 + 0x18;
// //     temp_v0_3->unk-8 = 0;
// //     phi_v0 = temp_v0_3;
// //     phi_v1_2 = phi_v1_2 + 0x18;
// //     phi_a1 = temp_a1;
// //     if (temp_a1 < 0x31U) {
// //         goto loop_9;
// //     }
// //     temp_v0_3->unk10 = 0;
// //     phi_s0_2 = 0x8003E388U;
// // loop_13:
// //     temp_s0_2 = phi_s0_2 + 4;
// //     temp_s0_2->unk-4 = func_80012844(0, 0, arg0->unk28, 1, arg2->unk8 * 8);
// //     phi_s0_2 = temp_s0_2;
// //     if (temp_s0_2 < 0x8003E390U) {
// //         goto loop_13;
// //     }
// //     *(void *)0x80040F94 = (s32) arg2->unk8;
// //     phi_s0_3 = (void *)0x8003E388;
// // loop_15:
// //     temp_v0_4 = func_80012844(0, 0, arg0->unk28, 1, 0x90);
// //     phi_s0_3->unk8 = temp_v0_4;
// //     temp_v0_4->unk70 = (u16)2;
// //     temp_v1 = phi_s0_3->unk8;
// //     temp_v1->unk74 = temp_v1;
// //     temp_s0_3 = phi_s0_3 + 4;
// //     phi_s0_3->unk8->unk0 = func_80012844(0, 0, arg0->unk28, 1, *(void *)0x80040F90 * 4);
// //     phi_s0_3 = temp_s0_3;
// //     if (temp_s0_3 != 0x8003E394) {
// //         goto loop_15;
// //     }
//
//     osCreateMesgQueue(&D_8003E608, &D_8003E620, 8);
//     osCreateMesgQueue(&D_8003E5D0, &D_8003E5E8, 8);
//     osCreateMesgQueue(&D_80041298, &D_800412B0, 32);
//     osCreateMesgQueue(&D_800416F0, &D_80041708, 40);
//     osCreateThread(&D_8003E3A0, 4, &D_10009400, 0, &D_800406A0, arg1);
//     D_8002AE40 = (u8)1;
//     osStartThread(&D_8003E3A0);
// }

void func_800093CC(void) {
    if (D_8002AE40 != 0) {
        osStopThread(&D_8003E3A0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_8F90/func_80009400.s")
// NON-MATCHING: a long way to go
// void func_80009400(s32 arg0) {
//     OSMesg *msg;
//     s32 sp54;
//     void *sp4C;
//     s16 temp_v0;
//     u32 phi_s0;
//     u32 phi_s0_2;
//     s32 phi_s5;
//     s32 phi_s4;
//     s32 phi_s1;
//
//     msg = NULL;
//     sp54 = 0;
//     phi_s0 = 0;
//     phi_s5 = 0;
//     phi_s4 = 1;
//     phi_s1 = 0;
//     func_800051C8(&sp4C, &D_8003E5D0);
//     do {
//         osRecvMesg(&D_8003E5D0, &msg, 1);
//         if (D_8002AC5C != 0) {
//             ((struct53*)msg)->unk0 = (u16)4;
//         }
//         temp_v0 = ((struct53*)msg)->unk0;
//         if (temp_v0 != 1) {
//             if (temp_v0 == (u16)4 || temp_v0 == 16) {
//                     phi_s1 = 1;
//             }
//         } else {
//             phi_s0_2 = phi_s0;
//             if (phi_s0 >= 2U) {
//                 phi_s0_2 = 0U;
//             }
//             if (phi_s0_2 == 0) { //&& (func_800095A0(((((u32) *(void *)0x8002AE44 % 3U) * 4) + 0x80040000)->unk-1C70, phi_s5) != 0)) {
//                 if (phi_s4 == 0) {
//                     osRecvMesg(&D_8003E608, &msg, 1);
//                     phi_s5 = ((struct53*)msg)->unk4;
//                 }
//                 phi_s4 = 0;
//             }
//             phi_s0 = phi_s0_2 + 1;
//         }
//     }
//     while (phi_s1 == 0);
//
//
//     func_80018E0C(&D_8003E640);
//     while (1) {
//         osRecvMesg(&D_8003E5D0, &msg, 1);
//     }
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_8F90/func_800095A0.s")
// NON-MATCHING: so far away
// s32 func_800095A0(struct50 *arg0, struct51 *arg1) {
//     s32 sp3C;
//     s32 sp34;
//     u32 sp30;
//     s32 temp_a2;
//     s32 temp_v1;
//     u32 temp_t7;
//     u8 temp_v0;
//     s32 phi_v1;
//     s32 phi_a2;
//
//     sp3C = osVirtualToPhysical(arg0->unk0);
//     func_800099BC();
//     func_8000A03C();
//     temp_a2 = sp3C;
//     temp_t7 = (u32) AI_A4500004 >> 2;
//     phi_v1 = (s32) temp_t7;
//     if (arg1 != 0) {
//         sp3C = temp_a2;
//         sp30 = temp_t7;
//         func_80002DB0(arg1->unk4, arg1->unk8 * 4, temp_a2);
//         phi_v1 =  sp30;
//     }
//     if ((phi_v1 >= 0xF9) && (D_80040F84 == 0)) {
//         arg0->unk8 = D_80040F88; // *
//         D_80040F84 = 2U;
//     } else {
//         arg0->unk8 = D_80040F8C; // *
//         temp_v0 = D_80040F84;
//         if (temp_v0 != 0) {
//             D_80040F84 = (u8) (temp_v0 - 1);
//         }
//     }
//     if (((temp_a2 + (arg0->unk8 * 4)) & 0x1FFF) == 0) {
//         arg0->unk4 = (s32) (arg0->unk0 + 16);
//         phi_a2 = temp_a2 + 16;
//     } else {
//         arg0->unk4 = (s32) arg0->unk0;
//         phi_a2 = temp_a2;
//     }
//     // temp_v1 = func_80019498(((*D_8002AE4C * 4) + 0x80040000)->unk-1C78, &sp34, phi_a2, arg0->unk8);
//     if (sp34 == 0) {
//         return 0;
//     }
//     arg0->unk10 = 0;
//     arg0->unk68 = 0x8003E608;
//     arg0->unk6C = arg0->unk70;
//     arg0->unk1C = 2;
//     arg0->unk20 = 0;
//     arg0->unk58 = (s32) ((D_8002AE4C * 4) + D_8003E388);
//     arg0->unk5C = (s32) (((s32) (temp_v1 - ((D_8002AE4C * 4) + D_8003E388)) >> 3) * 8);
//     arg0->unk28 = 2;
//     arg0->unk30 = 0x100290D0;
//     arg0->unk34 = (s32) (D_100291A0 - D_100290D0);
//     arg0->unk2C = 0;
//     arg0->unk38 = 0x100291A0;
//     arg0->unk40 = 0x8002C960;
//     arg0->unk44 = 2048;
//     arg0->unk60 = 0;
//     arg0->unk64 = 1024;
//     // D_8002AE4C, 0x8003E388, 2
//     osWritebackDCacheAll();
//     osSendMesg(&D_8003B200, &arg0->unk10, 1);
//     D_8002AE4C = D_8002AE4C ^ 1;
//     return 1;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_8F90/func_800097CC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_8F90/func_80009980.s")
// NON-MATCHING: might be a struct
// s32 func_80009980(s32 *arg0) {
//     if (D_80040F78[0] == 0) {
//         D_80040F78[1] = (u8) 0;
//         D_80040F78[2] = &D_800406B8;
//         D_80040F78[0] = 1;
//     }
//     *arg0 = 0;
//     return &D_100097CC;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_8F90/func_800099BC.s")

void func_80009B2C(struct54 *arg0) {
    if (((s32)arg0 & 1) == 0) {
        arg0->unk14--;
    }
}

void func_80009B4C(struct54 *arg0) {
    if (((s32)arg0 & 1) == 0) {
        arg0->unk14--;
        if (arg0->unk14 == 0) {
            func_80009BE4(arg0);
        }
    }
}

void func_80009B90(struct54 *arg0) {
    if (((s32)arg0 & 1) == 0) {
        if (1 == arg0->unk15) {
            if (1 == arg0->unk16) {
                arg0->unk14 += 1;
            }
            arg0->unk15 = 2;
            return;
        }
        arg0->unk14 += 1;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_8F90/func_80009BE4.s")
// NON-MATCHING: work-in-progress
// struct54 *func_80009BE4(struct54 * arg0) {
//     struct54 *temp_a1;
//     struct54 *temp_v0;
//     struct54 *temp_v0_2;
//     struct54 *temp_v1;
//
//     if (((s32)arg0 & 1) != 0) {
//         D_8003C8E0 = 0xF000004;
//         return func_850AD770(0x80040000);
//     }
//     arg0->unkC = arg0->unk8; //*
//     if (arg0 == D_800406A0->unk4) {
//         D_800406A4 = arg0->unk0; // *
//     }
//     temp_v0_2 = arg0->unk0;
//     if (temp_v0_2 != 0) {
//         temp_v0_2->unk4 = arg0->unk4;
//     }
//     temp_v0 = arg0->unk4;
//     if (temp_v0 != 0) {
//         temp_v0 = arg0->unk0; // *
//     }
//     temp_v1 = D_800406A0->unk10;
//     if (temp_v1 != 0) {
//         arg0->unk4 = temp_v1;
//         arg0->unk0 = temp_v1; // *
//         temp_a1 = temp_v1; //
//         if (temp_a1 != 0) {
//             temp_a1->unk4 = arg0;
//         }
//         temp_v1 = arg0; // *
//         return temp_v1;
//     }
//     D_800406B0 = arg0;
//     arg0->unk0 = NULL;
//     arg0->unk4 = NULL;
//     return temp_v0;
// }


#pragma GLOBAL_ASM("asm/nonmatchings/code_8F90/func_80009CBC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_8F90/func_80009FFC.s")
// NON-MATCHING: might be a struct
// s32 func_80009FFC(void) {
//     if (D_800406A0[0] == 0) {
//         D_800406A0[1] = 0;
//         D_800406A0[2] = &D_80040AC8;
//         D_800406A0[3] = 0;
//         D_800406A0[4] = 0;
//         D_800406A0[0] = (u8)1U;
//     }
//     return &D_10009CBC;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_8F90/func_8000A03C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_8F90/func_8000A348.s")
