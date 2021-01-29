#include <n_libaudio.h>

void __n_resetPerfChanState(N_ALSeqPlayer *seqp, s32 chan);

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

#pragma GLOBAL_ASM("asm/nonmatchings/init_1AAE0/__n_seqpReleaseVoice.s")
// void __n_seqpReleaseVoice(void *arg0, void *arg1, s32 arg2) {
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
//     n_alSynSetPriority(arg1, 0);
//     n_alSynSetVol(arg1, 0, arg2);
//     sp38 = 5;
//     sp3C = arg1;
//     arg2 = arg2 + 0x7D00;
//     n_alEvtqPostEvent(arg0 + 0x48, &sp38, arg2, 0);
// }

#pragma GLOBAL_ASM("asm/nonmatchings/init_1AAE0/func_1001ADA4.s")

N_ALVoiceState *__n_mapVoice(N_ALSeqPlayer *seqp, u8 key, u8 vel, u8 channel)
{
    N_ALVoiceState  *vs = seqp->vFreeList;

    if (seqp->usedVoices > seqp->maxVoices) {
        return NULL;
    }

    if (vs) {

        seqp->vFreeList = vs->next;

        vs->next = 0;

        if (!seqp->vAllocHead)
            seqp->vAllocHead = vs;
        else
            seqp->vAllocTail->next = vs;

        seqp->vAllocTail = vs;

        vs->channel             = channel;
        vs->key                 = key;
        vs->velocity            = vel;
        vs->voice.unk10         = vs; // this isn't right

        seqp->usedVoices++;
    }

    return vs;
}

#pragma GLOBAL_ASM("asm/nonmatchings/init_1AAE0/func_1001AFEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/init_1AAE0/func_1001B07C.s")

s16 __n_vsVol(N_ALVoiceState *vs, N_ALSeqPlayer *seqp)
{
    u32     t1,t2;

    t1 = (vs->tremelo*vs->velocity*vs->envGain) >> 6;
    t2 = (vs->sound->sampleVolume*seqp->vol*
          seqp->chanState[vs->channel].vol) >> 14;

    if (seqp->chanState[vs->channel].unkD != 0xFF) {
        t2 = ((seqp->chanState[vs->channel].unkD * t2) + 1) >> 8;
    }

    t1 *= t2;
    t1 >>= 15;

    return t1;
}

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

ALMicroTime __n_vsDelta(N_ALVoiceState *vs, ALMicroTime t) {
  /*
   * If we are interrupting a previously set envelope segment, we
   * need to recalculate the segment end time given the current
   * time. Note: this routine assumes that the voice is currently
   * playing.
   */

  s32 delta = vs->envEndTime - t;

  if (delta >= 0) {
      return delta;
  } else {
      return AL_GAIN_CHANGE_TIME;
  }
}

ALPan __n_vsPan(N_ALVoiceState *vs, N_ALSeqPlayer *seqp)
{
    s32 tmp;

    tmp = seqp->chanState[vs->channel].pan - AL_PAN_CENTER +
        vs->sound->samplePan;
    tmp = MAX(tmp, AL_PAN_LEFT);
    tmp = MIN(tmp, AL_PAN_RIGHT);

    return (ALPan) tmp;
}

// not vanilla
#pragma GLOBAL_ASM("asm/nonmatchings/init_1AAE0/__n_initFromBank.s")

void __n_initChanState(N_ALSeqPlayer *seqp)
{
    int i;

    for (i = 0; i < seqp->maxChannels; i++)
    {
        seqp->chanState[i].instrument = 0;
        __n_resetPerfChanState (seqp, i);
    }
}

void __n_resetPerfChanState(N_ALSeqPlayer *seqp, s32 chan) {
    seqp->chanState[chan].fxmix = 0;
    seqp->chanState[chan].pan = AL_PAN_CENTER;
    seqp->chanState[chan].vol = AL_VOL_FULL;
    seqp->chanState[chan].priority = AL_DEFAULT_PRIORITY;
    seqp->chanState[chan].sustain = 0;
    seqp->chanState[chan].bendRange = 200;
    seqp->chanState[chan].pitchBend = 1.0f;
    seqp->chanState[chan].unk17 = 0;
    seqp->chanState[chan].unkD = 255;
    seqp->chanState[chan].unkE = 255;
    seqp->chanState[chan].unkF = 0;
    seqp->chanState[chan].unkB = 0;
    seqp->chanState[chan].unk16 = 0;
    seqp->chanState[chan].unk15 = 0;
    seqp->chanState[chan].unk14 = 0;
    seqp->chanState[chan].unk8 = 0;
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
