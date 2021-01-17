#include <libaudio.h>
#include <os_internal.h>
#include <ultraerror.h>
#include <assert.h>
#include "n_libaudio.h"
#include "n_seqp.h"
#include "cseq.h"
#include "n_cseqp.h"


static ALMicroTime      __n_CSPVoiceHandler(void *node);
static void              __n_CSPHandleNextSeqEvent(N_ALCSPlayer *seqp);
static void             __n_CSPHandleMIDIMsg(N_ALCSPlayer *seqp, N_ALEvent *event);
static void             __n_CSPHandleMetaMsg(N_ALCSPlayer *seqp, N_ALEvent *event);
static void             __n_CSPRepostEvent(ALEventQueue *evtq, N_ALEventListItem *item);
void              __n_setUsptFromTempo(N_ALCSPlayer *seqp, f32 tempo);


#pragma GLOBAL_ASM("asm/nonmatchings/libultra/audio/n_csplayer/n_alCSPNew.s")
// void n_alCSPNew(struct26 *arg0, struct30 *arg1) {
//     s32 i;
//     s32 sp30;
//     struct30 *sp2C;
//     s32 sp28;
//     s32 sp24;
//     s32 temp_t5;
//
//     sp24 = arg1->unkC;
//     arg0->unk20 = 0;
//     arg0->unk18 = 0;
//     arg0->unk14 = D_8002BA44; // fuuuuuuu
//     arg0->unk30 = 0xFFFF;
//     func_10017B30(arg0);
//     arg0->unk24 = 488;
//     arg0->unk28 = 0;
//     arg0->unk2C = 0;
//     arg0->unk32 = 32767;
//     arg0->unk35 = arg1->unk9;
//     arg0->unk5C = 16000;
//     arg0->unk1C = 0;
//     arg0->unk70 = arg1->unk10;
//     arg0->unk74 = arg1->unk14;
//     arg0->unk78 = arg1->unk18;
//     arg0->unk7C = 0.0f;
//     arg0->unk80 = 1.0f;
//     arg0->unk84 = 0;
//     arg0->unk8D = 0;
//     arg0->unk8C = arg1->unk0;
//     arg0->unk38 = 9;
//     arg0->unk34 = arg1->unk8;
//     arg0->unk60 = alHeapDBAlloc(0, 0, sp24, arg1->unk8, 0x3C);
//     __n_initChanState(arg0);
//     sp28 = alHeapDBAlloc(0, 0, sp24, arg1->unk0, 0x44);
//     arg0->unk6C = 0; // NULL?
//     /// fuuuuuuu
//     // for (i = 0; i < arg1->unk0; i++)
//     // {
//     //     arg0->unk6C[i].unk0 = arg1;
//     // }
// //     if (arg1->unk0 > 0) {
// // loop_1:
// //         sp2C = (i * 0x44) + sp28;
// //         *sp2C = (s32) arg0->unk6C;
// //         arg0->unk6C = sp2C;
// //         temp_t5 = i + 1;
// //         i = temp_t5;
// //         if (temp_t5 < arg1->unk0) {
// //             goto loop_1;
// //         }
// //     }
//
//     arg0->unk64 = 0;
//     arg0->unk68 = 0;
//     sp30 = alHeapDBAlloc(0, 0, sp24, arg1->unk4, 0x1C);
//     n_alEvtqNew(arg0 + 0x48, sp30, arg1->unk4);
//     arg0->unk0 = 0;
//     arg0->unk8 = &D_10013598;
//     arg0->unk4 = arg0;
//     func_1001C700(arg0);
// }

// jump table
#pragma GLOBAL_ASM("asm/nonmatchings/libultra/audio/n_csplayer/__n_CSPVoiceHandler.s")

extern void (*jtbl_8002C4CC[])(void);
// jump table
#pragma GLOBAL_ASM("asm/nonmatchings/libultra/audio/n_csplayer/__n_CSPHandleNextSeqEvent.s")
// jump table
#pragma GLOBAL_ASM("asm/nonmatchings/libultra/audio/n_csplayer/__n_CSPHandleMIDIMsg.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/audio/n_csplayer/__n_CSPHandleMetaMsg.s")
// void func_10015044(void *arg0, void *arg1) {
//     void *sp44;
//     s32 sp40;
//     s32 sp3C;
//     s32 sp38;
//     s32 sp34;
//     s32 sp30;
//     void *sp2C;
//     void *sp28;
//     void *sp24;
//     void *sp20;
//     void *sp1C;
//     void *sp18;
//     void *temp_t2;
//
//     sp44 = arg1 + 4;
//     sp30 = 0;
//     sp24 = NULL;
//     if ((arg1->unk8 == 0xFF) && (arg1->unk9 == 0x51)) {
//         sp3C = arg0->unk24;
//         sp40 = (sp44->unk7 << 0x10) | (sp44->unk8 << 8) | sp44->unk9;
//         __n_setUsptFromTempo(arg0, (f32) sp40);
//         sp2C = arg0->unk50;
//         if (sp2C != 0) {
// loop_3:
//             sp30 = sp30 + sp2C->unk8;
//             sp28 = sp2C->unk0;
//             if (sp2C->unkC == 0x16) {
//                 sp20 = sp2C;
//                 if (sp20->unk0 != 0) {
//                     sp20->unk0->unk4 = (s32) sp20->unk4;
//                 }
//                 if (sp20->unk4 != 0) {
//                     *sp20->unk4 = (s32) sp20->unk0;
//                 }
//                 if (sp24 != 0) {
//                     sp1C = sp2C;
//                     sp18 = sp24;
//                     sp1C->unk0 = (s32) *sp18;
//                     sp1C->unk4 = sp18;
//                     if (*sp18 != 0) {
//                         (*sp18)->unk4 = sp1C;
//                     }
//                     *sp18 = sp1C;
//                 } else {
//                     sp2C->unk0 = 0;
//                     sp2C->unk4 = 0;
//                     sp24 = sp2C;
//                 }
//                 sp34 = sp30;
//                 if (sp28 != 0) {
//                     sp30 = sp30 - sp2C->unk8;
//                     sp28->unk8 = (s32) (sp28->unk8 + sp2C->unk8);
//                 }
//                 sp2C->unk8 = sp34;
//             }
//             sp2C = sp28;
//             if (sp2C != 0) {
//                 goto loop_3;
//             }
//         }
//         sp2C = sp24;
//         if (sp2C != 0) {
// loop_18:
//             temp_t2 = sp2C->unk0;
//             sp28 = temp_t2;
//             sp38 = (s32) sp2C->unk8 / sp3C;
//             sp2C->unk8 = (s32) (arg0->unk24 * sp38);
//             func_10015310(arg0->unk48, sp2C);
//             sp2C = temp_t2;
//             if (sp2C != 0) {
//                 goto loop_18;
//             }
//         }
//     }
// }

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/audio/n_csplayer/func_10015310.s")

void __n_setUsptFromTempo (N_ALCSPlayer *seqp, f32 tempo)
{
  if (seqp->target)
    seqp->uspt = (s32)((f32)tempo * seqp->target->qnpt);
  else
    seqp->uspt = 488;    /* This is the initial value set by alSeqpNew. */
}

void __n_CSPPostNextSeqEvent(N_ALCSPlayer *seqp)
{
  N_ALEvent   evt;
  s32    deltaTicks;

  if (seqp->state != AL_PLAYING || seqp->target == NULL)
    return;

  /* Get the next event time in ticks. */
  /* If false is returned, then there is no next delta (ie. end of sequence reached). */
  if (!__alCSeqNextDelta(seqp->target, &deltaTicks))
    return;

  evt.type = AL_SEQ_REF_EVT;
  n_alEvtqPostEvent(&seqp->evtq, &evt, deltaTicks * seqp->uspt, 0);
}
