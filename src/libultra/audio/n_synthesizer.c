#include <ultra64.h>

#include "functions.h"
#include "variables.h"

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/audio/n_synthesizer/n_alSynNew.s")
// void n_alSynNew(struct07 *arg0) {
//     s32 sp44;
//     // s32 sp40;
//     // void *sp3C;
//     // s32 sp38;
//     s32 sp34;
//     // s32 sp30;
//     // void *sp2C;
//     // void *sp28;
//     // void *sp24;
//     // s32 temp_t2;
//     // s32 temp_t3;
//     // s32 temp_t4;
//     // s32 temp_t9;
//
//     sp34 = arg0->unk28;
//     D_8002BA44->unk0 = 0;
//     D_8002BA44->unk4C = arg0->unk4;
//     D_8002BA44->unk20 = 0;
//     D_8002BA44->unk1C = 0;
//     D_8002BA44->unk54 = arg0->unk2C;
//     D_8002BA44->unk58 = 184;
//     D_8002BA44->unk24 = arg0->unk10;
//     D_8002BA44->unk28 = arg0->unk14;
//     D_8002BA44->unk2C = arg0->unk18;
//     D_8002BA44->unk30 = arg0->unk1C;
//     D_8002BA44->unk34 = arg0->unk20;
//     D_8002BA44->unk38 = arg0->unk24;
//     if (arg0->unkC >= 3) {
//         D_8002BA44->unk50 = 2;
//     } else if (arg0->unkC <= 0) {
//         D_8002BA44->unk50 = 1;
//     } else {
//         D_8002BA44->unk50 = (s32) arg0->unkC;
//     }
//     D_8002BA44->unk48 = func_10012844(0, 0, sp34, D_8002BA44->unk50, 0x44);
//     sp44 = 0;
//     if (D_8002BA44->unk50 > 0) {
// loop_6:
//         (D_8002BA44->unk48 + (sp44 * 0x44))->unk14 = 0;
//         (D_8002BA44->unk48 + (sp44 * 0x44))->unk18 = 0;
//         if ((arg0 + sp44)->unk30 != 0) {
//             (D_8002BA44->unk48 + (sp44 * 0x44))->unk1C = func_1001E4A0(sp44, arg0, sp34);
//         } else {
//             (D_8002BA44->unk48 + (sp44 * 0x44))->unk1C = 0;
//         }
//         (D_8002BA44->unk48 + (sp44 * 0x44))->unk40 = func_10012844(0, 0, sp34, 1, 0x38);
//         (D_8002BA44->unk48 + (sp44 * 0x44))->unk40->unk2 = (u16)0;
//         (D_8002BA44->unk48 + (sp44 * 0x44))->unk40->unk2C = func_10012844(0, 0, sp34, 1, 8);
//         (D_8002BA44->unk48 + (sp44 * 0x44))->unk40->unk30 = func_10012844(0, 0, sp34, 1, 8);
//         temp_t4 = sp44 + 1;
//         sp44 = temp_t4;
//         if (temp_t4 < D_8002BA44->unk50) {
//             goto loop_6;
//         }
//     }
//     D_8002BA44->unk44 = func_10012844(0, 0, sp34, 1, 0x14);
//     D_8002BA44->unk44->unk4 = 0x1001E530;
//     D_8002BA44->unk4 = 0;
//     D_8002BA44->unk8 = 0;
//     D_8002BA44->unk14 = 0;
//     D_8002BA44->unk18 = 0;
//     D_8002BA44->unkC = 0;
//     D_8002BA44->unk10 = 0;
//     sp38 = func_10012844(0, 0, sp34, arg0->unk4, 0xD0);
//     sp44 = 0;
//     if (arg0->unk4 > 0) {
// loop_11:
//         sp3C = (sp44 * 0xD0) + sp38;
//         sp28 = sp3C;
//         sp24 = D_8002BA44 + 4;
//         sp28->unk0 = (s32) *sp24;
//         sp28->unk4 = sp24;
//         if (*sp24 != 0) {
//             (*sp24)->unk4 = sp28;
//         }
//         *sp24 = sp28;
//         sp3C->unk10 = 0;
//         func_1001D6E8(sp3C, D_8002BA44->unk24, sp34);
//         temp_t3 = sp44 + 1;
//         sp44 = temp_t3;
//         if (temp_t3 < arg0->unk4) {
//             goto loop_11;
//         }
//     }
//     sp40 = 0;
//     if (D_8002BA44->unk50 > 0) {
// loop_15:
//         (D_8002BA44->unk48 + (sp40 * 0x44))->unk14 = 0;
//         (D_8002BA44->unk48 + (sp40 * 0x44))->unk18 = 0;
//         temp_t2 = sp40 + 1;
//         sp40 = temp_t2;
//         if (temp_t2 < D_8002BA44->unk50) {
//             goto loop_15;
//         }
//     }
//     sp30 = func_10012844(0, 0, sp34, arg0->unk8, 0x24);
//     D_8002BA44->unk40 = 0;
//     sp44 = 0;
//     if (arg0->unk8 > 0) {
// loop_17:
//         sp2C = (sp44 * 0x24) + sp30;
//         *sp2C = (s32) D_8002BA44->unk40;
//         D_8002BA44->unk40 = sp2C;
//         temp_t9 = sp44 + 1;
//         sp44 = temp_t9;
//         if (temp_t9 < arg0->unk8) {
//             goto loop_17;
//         }
//     }
//     D_8002BA44->unk3C = sp34;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/audio/n_synthesizer/n_alAudioFrame.s")
// void *n_alAudioFrame(void *arg0, void *arg1, s32 arg2, u32 arg3) {
//     void *sp3C;
//     void *sp38;
//     s32 sp34;
//     s32 sp30;
//     void *sp2C;
//     void *sp28;
//     s32 temp_t5_2;
//     void *temp_t0;
//     void *temp_t1;
//     void *temp_t2;
//     void *temp_t5;
//     void *temp_t7;
//     void *temp_t8;
//     void *temp_t9;
//
//     sp38 = arg0;
//     sp30 = arg2;
//     if (*D_8002BA44 == 0) {
//         *arg1 = 0;
//         return arg0;
//     }
//     D_8002BA44->unk1C = func_10019A04(&sp3C);
//     temp_t2 = D_8002BA44;
//     if ((u32) (temp_t2->unk1C - temp_t2->unk20) < arg3) {
// loop_3:
//         temp_t7 = D_8002BA44;
//         temp_t7->unk1C = (s32) (temp_t7->unk1C & -0x10);
//         sp3C->unk10 = (s32) (sp3C->unk10 + _n_timeToSamplesNoRound(sp3C->unk8(sp3C)));
//         D_8002BA44->unk1C = func_10019A04(&sp3C);
//         temp_t5 = D_8002BA44;
//         if ((u32) (temp_t5->unk1C - temp_t5->unk20) < arg3) {
//             goto loop_3;
//         }
//     }
//     temp_t9 = D_8002BA44;
//     temp_t9->unk1C = (s32) (temp_t9->unk1C & -0x10);
//     if ((s32) arg3 > 0) {
// loop_5:
//         temp_t5_2 = D_8002BA44->unk58;
//         if (temp_t5_2 < (s32) arg3) {
//             sp34 = temp_t5_2;
//         } else {
//             sp34 = (s32) arg3;
//         }
//         sp38 = func_1001FB40(D_8002BA44->unk20, sp38);
//         temp_t0 = sp38;
//         sp38 = temp_t0 + 8;
//         sp2C = temp_t0;
//         *sp2C = 0xD000000;
//         temp_t1 = sp38;
//         sp38 = temp_t1 + 8;
//         sp28 = temp_t1;
//         sp28->unk0 = 0x62E0000;
//         sp28->unk4 = sp30;
//         arg3 = arg3 - sp34;
//         sp30 = sp30 + (sp34 * 2 * 2);
//         temp_t8 = D_8002BA44;
//         temp_t8->unk20 = (s32) (temp_t8->unk20 + sp34);
//         if ((s32) arg3 > 0) {
//             goto loop_5;
//         }
//     }
//     *arg1 = (s32) ((s32) (sp38 - arg0) >> 3);
//     _collectPVoices();
//     return sp38;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/audio/n_synthesizer/__n_allocParam.s")
// void *__n_allocParam(void) {
//     void *sp4;
//     void *temp_t0;
//
//     sp4 = NULL;
//     if (D_8002BA44->unk40 != 0) {
//         sp4 = D_8002BA44->unk40;
//         temp_t0 = D_8002BA44;
//         temp_t0->unk40 = (void *) *temp_t0->unk40;
//         *sp4 = 0;
//     }
//     return sp4;
// }

void _n_freeParam(struct36 **arg0) {
    *arg0 = (s32) D_8002BA44->unk40;
    D_8002BA44->unk40 = arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/audio/n_synthesizer/_n_collectPVoices.s")
#pragma GLOBAL_ASM("asm/nonmatchings/libultra/audio/n_synthesizer/_n_freePVoice.s")

s32 _n_timeToSamplesNoRound(s32 micros) {
    f32 tmp = (((f32) micros * (f32) D_8002BA44->unk54) / D_8002C750) + 0.5f; // 1000000.0f
    return (s32) tmp;
}

s32 _n_timeToSamples(s32 micros) {
    return _n_timeToSamplesNoRound(micros) & -0x10;
}

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/audio/n_synthesizer/__n_nextSampleTime.s")
// static s32 __n_nextSampleTime(ALPlayer **client)
// {
//   ALMicroTime temp,delta = 0x7fffffff;     /* max delta for s32 */
//   ALPlayer *cl;
//
//   /*    assert(D_8002BA44->head); */
//   *client = 0;
//
// #if 0
//   for (cl = D_8002BA44->head; cl != 0; cl = cl->next) {
//     if ((cl->samplesLeft - D_8002BA44->curSamples) < delta) {
//       *client = cl;
//       delta = cl->samplesLeft - D_8002BA44->curSamples;
//     }
//   }
// #endif
//
//   if( D_8002BA44->n_sndp )
//     if( (temp = D_8002BA44->n_sndp->samplesLeft - D_8002BA44->curSamples) < delta ) {
//       *client = D_8002BA44->n_sndp;
//       delta = temp;
//     }
//
//   if( D_8002BA44->n_seqp1 )
//     if( (temp = D_8002BA44->n_seqp1->samplesLeft - D_8002BA44->curSamples) < delta ) {
//       *client = D_8002BA44->n_seqp1;
//       delta = temp;
//     }
//
//   if( D_8002BA44->n_seqp2 )
//     if( (D_8002BA44->n_seqp2->samplesLeft - D_8002BA44->curSamples) < delta ) {
//       *client = D_8002BA44->n_seqp2;
//     }
//
//   return (*client)->samplesLeft;
// }
// s32 func_10019A04(void *arg0) {
//     u32 sp4;
//     void *sp0;
//     void *temp_t2;
//     void *temp_t8;
//
//     sp4 = 0x7FFFFFFF;
//     *arg0 = NULL;
//     temp_t8 = *D_8002BA44;
//     sp0 = temp_t8;
//     if (temp_t8 != 0) {
// loop_1:
//         if ((u32) (sp0->unk10 - D_8002BA44->unk20) < sp4) {
//             *arg0 = sp0;
//             sp4 = sp0->unk10 - D_8002BA44->unk20;
//         }
//         temp_t2 = sp0->unk0;
//         sp0 = temp_t2;
//         if (temp_t2 != 0) {
//             goto loop_1;
//         }
//     }
//     return (*arg0)->unk10;
// }
