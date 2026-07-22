#include <n_libaudio.h>

void __n_resetPerfChanState(N_ALSeqPlayer *seqp, s32 chan);

// File-local view of the object passed to func_1001BD34/func_1001BE1C; it holds
// a pair of callbacks at 0x28/0x30 and has no type in the shared headers yet.
typedef struct {
    u8   pad0[0x30];
    void (*unk30)(void *);
} InitBankCallbacks;

void func_1001AAE0(N_ALSeqPlayer *seqp, N_ALVoice *voice) {
    N_ALVoiceState *last;
    N_ALVoiceState *vs;

    last = NULL;
    vs = seqp->vAllocHead;

    if (vs) do {
        if (&vs->voice == voice) {
            if (last) {
                last->next = vs->next;
            } else {
                seqp->vAllocHead = vs->next;
            }
            if (seqp->vAllocTail == vs) {
                seqp->vAllocTail = last;
            }
            vs->next = seqp->vFreeList;
            seqp->vFreeList = vs;
            seqp->usedVoices--;
            return;
        }
        last = vs;
    } while ((vs = vs->next) != NULL);
}

typedef struct RelNode {
    struct RelNode *unk0;
    struct RelNode *unk4;
    s32             unk8;
    s16             unkC;
    u8              padE[0x2];
    void           *unk10;
} RelNode;

typedef struct {
    u8       pad0[0x1C];
    s32      unk1C;
    u8       pad20[0x28];
    RelNode *unk48;
    u8       pad4C[0x4];
    RelNode *unk50;
} RelSeqp;

void __n_seqpReleaseVoice(RelSeqp *arg0, N_ALVoice *arg1, s32 arg2) {
    N_ALEvent sp38;
    N_ALVoiceState *sp34;
    RelNode *sp30;
    RelNode *sp2C;
    RelNode *sp28;
    RelNode *sp24;
    RelNode *sp20;
    RelNode *sp1C;
    RelNode **sp18;

    sp34 = arg1->unk10;
    if (sp34->envPhase == 0) {
        sp30 = arg0->unk50;
        if (sp30 != 0) {
            do {
                sp2C = sp30->unk0;
                sp28 = sp30;
                sp24 = sp2C;
                if (sp28->unkC == 6) {
                    if (sp28->unk10 == arg1) {
                        if (sp24 != 0) {
                            sp24->unk8 += sp28->unk8;
                        }
                        sp20 = sp30;
                        if (sp20->unk0 != 0) {
                            sp20->unk0->unk4 = sp20->unk4;
                        }
                        if (sp20->unk4 != 0) {
                            sp20->unk4->unk0 = sp20->unk0;
                        }
                        sp1C = sp30;
                        sp18 = &arg0->unk48;
                        sp1C->unk0 = *sp18;
                        sp1C->unk4 = (RelNode *)sp18;
                        if (*sp18 != 0) {
                            (*sp18)->unk4 = sp1C;
                        }
                        *sp18 = sp1C;
                    }
                }
                sp30 = sp2C;
            } while (sp30 != 0);
        }
    }
    sp34->velocity = 0;
    sp34->envPhase = 3;
    sp34->envGain = 0;
    sp34->envEndTime = arg0->unk1C + arg2;
    n_alSynSetPriority(arg1, 0);
    n_alSynSetVol(arg1, 0, arg2);
    sp38.type = 5;
    sp38.msg.note.voice = arg1;
    arg2 = arg2 + 0x7D00;
    n_alEvtqPostEvent((ALEventQueue *)&arg0->unk48, &sp38, arg2, 0);
}

typedef struct EvtNode {
    struct EvtNode *unk0;
    struct EvtNode *unk4;
    s32             unk8;
    s16             unkC;
    u8              padE[0x2];
    void           *unk10;
} EvtNode;

typedef struct {
    u8       pad0[0x48];
    EvtNode *unk48;
    u8       pad4C[0x4];
    EvtNode *unk50;
} EvtSeqp;

s32 func_1001ADA4(EvtSeqp *seqp, void *arg1, s32 arg2) {
    EvtNode *sp1C;
    EvtNode *sp18;
    EvtNode *sp14;
    s32 sp10;
    u8 spF;
    EvtNode *sp8;
    EvtNode *sp4;
    EvtNode **sp0;

    sp10 = 0;
    spF = 1;
    sp1C = seqp->unk50;
    if (sp1C != 0) {
        do {
            sp18 = sp1C->unk0;
            sp14 = sp1C;
            sp10 += sp14->unk8;
            if (sp14->unkC == 5) {
                if (sp14->unk10 == arg1) {
                    if (arg2 < sp10) {
                        if (sp18 != 0) {
                            sp18->unk8 += sp14->unk8;
                        }
                        sp8 = sp1C;
                        if (sp8->unk0 != 0) {
                            sp8->unk0->unk4 = sp8->unk4;
                        }
                        if (sp8->unk4 != 0) {
                            sp8->unk4->unk0 = sp8->unk0;
                        }
                        sp4 = sp1C;
                        sp0 = &seqp->unk48;
                        sp4->unk0 = *sp0;
                        sp4->unk4 = (EvtNode *)sp0;
                        if (*sp0 != 0) {
                            (*sp0)->unk4 = sp4;
                        }
                        *sp0 = sp4;
                        goto done;
                    }
                    spF = 0;
                done:
                    break;
                }
            }
            sp1C = sp18;
        } while (sp1C != 0);
    }
    return spF;
}

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

N_ALVoiceState *func_1001AFEC(N_ALSeqPlayer *seqp, u8 key, u8 channel) {
    N_ALVoiceState *vs;

    vs = seqp->vAllocHead;

    while (vs) {
        if (vs->key == key && vs->channel == channel && vs->phase != 3 && vs->phase != 4) {
            return vs;
        }
        vs = vs->next;
    }
    return NULL;
}

ALSound *func_1001B07C(N_ALSeqPlayer *seqp, u8 key, u8 vel, u8 chan) {
    ALInstrument *inst;
    s32 lo;
    s32 hi;
    s32 mid;
    ALKeyMap *keyMap;

    inst = seqp->chanState[chan].instrument;
    lo = 1;
    if (inst == NULL) {
        return NULL;
    }
    hi = inst->soundCount;
    while (hi >= lo) {
        mid = (lo + hi) / 2;
        keyMap = inst->soundArray[mid - 1]->keyMap;
        if (key >= keyMap->keyMin && key <= keyMap->keyMax &&
            vel >= keyMap->velocityMin && vel <= keyMap->velocityMax) {
            return inst->soundArray[mid - 1];
        } else {
            if (key < keyMap->keyMin ||
                (vel < keyMap->velocityMin && key <= keyMap->keyMax)) {
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }
    }
    return NULL;
}

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

s32 func_1001B310(N_ALVoiceState *vs, N_ALCSPlayer *seqp) {
    s32 sp14;
    s32 sp10;

    sp14 = seqp->chanState[vs->channel].fxmix & 0x80;
    sp10 = ((seqp->chanState[vs->channel].fxmix & 0x7F) + (s32) (seqp->unk7C * 127.0f)) * seqp->unk80;

    return (MAX(0, MIN(127, sp10)) | sp14) & 0xff;
}

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
void __n_initFromBank(N_ALSeqPlayer *seqp, ALBank *b)
{
    s32 i;
    ALInstrument *inst;

    inst = NULL;
    for (i = 1; inst == NULL; i++) {
        inst = b->instArray[i];
    }

    for (i = 0; i < seqp->maxChannels; i++) {
        __n_resetPerfChanState(seqp, i);
    }

    if (b->percussion) {
        __n_resetPerfChanState(seqp, i);
    }
}

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

s32 func_1001BD34();
void func_10012C5C(void *arg0, s32 arg1, s32 arg2);

typedef struct {
    void *unk0;
    s16   unk4;
    u8    unk6;
    u8    unk7;
    u8    unk8;
    u8    unk9;
    u8    padA[0x12];
    s32   unk1C;
    s32   unk20;
    s32   unk24;
    u8    unk28;
    u8    unk29;
    u8    unk2A;
    u8    unk2B;
    u8    unk2C;
    u8    unk2D;
    u8    unk2E;
    u8    unk2F;
    u8    unk30;
    u8    unk31;
    u8    unk32;
    u8    unk33;
    u8    unk34;
    u8    unk35;
    u8    unk36;
    u8    unk37;
    s16   unk38;
    u8    pad3A[0x2];
} B7DChanState;

typedef struct {
    u8    pad0[0x34];
    void (*unk34)(void *);
    s32   unk38;
} B7DBankCb;

typedef struct {
    u8            pad0[0x14];
    B7DBankCb    *unk14;
    u8            pad18[0x8];
    ALBank       *unk20;
    u8            pad24[0x3C];
    B7DChanState *unk60;
} B7DSeqp;

s32 func_1001B7D0(B7DSeqp *arg0, s32 arg1, s32 arg2) {
    ALSound *sp24;
    ALInstrument *sp20;
    s32 sp1C;

    sp20 = (ALInstrument *)func_1001BD34(arg0->unk14, &arg0->unk20->instArray[arg1], -1);
    if (arg0->unk60[arg2].unk0 != 0) {
        arg0->unk14->unk34(arg0->unk20->instArray[arg0->unk60[arg2].unk38]);
        arg0->unk60[arg2].unk0 = 0;
    }
    if (sp20 != 0) {
        for (sp1C = 0; sp1C < sp20->soundCount; sp1C++) {
            sp24 = sp20->soundArray[sp1C];
            if ((u32) sp24->envelope < 0x100000) {
                func_10012C5C(sp24, (s32) sp20, arg0->unk14->unk38);
            }
        }
        sp24 = sp20->soundArray[0];
    }
    if (sp20 != 0) {
        if (sp20->soundCount == 0) {
            return 0;
        }
        if (sp24 != 0) {
            arg0->unk60[arg2].unk1C = sp24->envelope->attackTime;
            arg0->unk60[arg2].unk20 = sp24->envelope->decayTime;
            arg0->unk60[arg2].unk24 = sp24->envelope->releaseTime;
            arg0->unk60[arg2].unk29 = sp24->envelope->attackVolume;
            arg0->unk60[arg2].unk2A = sp24->envelope->decayVolume;
        }
        arg0->unk60[arg2].unk6 = sp20->pan;
        arg0->unk60[arg2].unk9 = sp20->volume;
        arg0->unk60[arg2].unk7 = sp20->priority;
        arg0->unk60[arg2].unk4 = sp20->bendRange;
        arg0->unk60[arg2].unk2C = sp20->tremType;
        arg0->unk60[arg2].unk2D = sp20->tremRate;
        arg0->unk60[arg2].unk2E = sp20->tremDepth;
        arg0->unk60[arg2].unk2F = sp20->tremDelay;
        arg0->unk60[arg2].unk30 = sp20->vibType;
        arg0->unk60[arg2].unk31 = sp20->vibRate;
        arg0->unk60[arg2].unk32 = sp20->vibDepth;
        arg0->unk60[arg2].unk33 = sp20->vibDelay;
        arg0->unk60[arg2].unk36 = 0;
        arg0->unk60[arg2].unk0 = sp20;
    } else {
        arg0->unk60[arg2].unk36 = 1;
    }
    arg0->unk60[arg2].unk2B = 0;
    arg0->unk60[arg2].unk28 = 0;
    arg0->unk60[arg2].unk35 = 0;
    arg0->unk60[arg2].unk38 = arg1;
    if (sp20 == 0) {
        return 1;
    }
    return 0;
}
typedef s32 (*BankScanCb)(void *, s32);
typedef BankScanCb (*BankScanGetter)(void);

typedef struct {
    u8             pad0[0x28];
    BankScanGetter unk28;
} BankScanObj;

s32 func_1001BD34(BankScanObj *arg0, void **arg1, s32 arg2) {
    BankScanCb sp1C;
    s32 sp18;

    sp18 = 0;
    sp1C = arg0->unk28();
    if (sp1C != 0) {
        if (arg2 == -1) {
            sp18 = sp1C(arg1, 1);
        } else {
            sp18 = sp1C((u8 *)*arg1 + arg2 * 4 + 0x10, 0);
        }
        if (sp18 != 0 && (sp18 & 0xFF000003) != 0x80000000) {
            return 0;
        }
    } else {
        return 0;
    }
    return sp18;
}

void func_1001BE1C(InitBankCallbacks *arg0, ALInstrument *inst, s32 idx) {
    if (idx == -1) {
        arg0->unk30(inst);
    } else {
        arg0->unk30(inst->soundArray[idx]);
    }
}

typedef struct OscNode {
    struct OscNode *unk0;
    struct OscNode *unk4;
    s32             unk8;
    s16             unkC;
    u8              padE[0x2];
    void           *unk10;
    void           *unk14;
} OscNode;

typedef struct {
    u8       pad0[0x48];
    OscNode *unk48;
    u8       pad4C[0x4];
    OscNode *unk50;
    u8       pad54[0x24];
    void   (*unk78)(void *);
} OscSeqp;

void __n_seqpStopOsc(OscSeqp *arg0, N_ALVoiceState *arg1) {
    OscNode *sp2C;
    OscNode *sp28;
    s16 sp26;
    OscNode *sp20;
    OscNode *sp1C;
    OscNode **sp18;

    sp2C = arg0->unk50;
    if (sp2C != 0) {
        do {
            sp28 = sp2C->unk0;
            sp26 = sp2C->unkC;
            if (sp26 == 0x17 || sp26 == 0x18) {
                if (sp2C->unk10 == arg1) {
                    arg0->unk78(sp2C->unk14);
                    sp20 = sp2C;
                    if (sp20->unk0 != 0) {
                        sp20->unk0->unk4 = sp20->unk4;
                    }
                    if (sp20->unk4 != 0) {
                        sp20->unk4->unk0 = sp20->unk0;
                    }
                    if (sp28 != 0) {
                        sp28->unk8 += sp2C->unk8;
                    }
                    sp1C = sp2C;
                    sp18 = &arg0->unk48;
                    sp1C->unk0 = *sp18;
                    sp1C->unk4 = (OscNode *)sp18;
                    if (*sp18 != 0) {
                        (*sp18)->unk4 = sp1C;
                    }
                    *sp18 = sp1C;
                    if (sp26 == 0x17) {
                        arg1->flags &= 0xFE;
                    } else {
                        arg1->flags &= 0xFD;
                    }
                    if (arg1->flags == 0) {
                        return;
                    }
                }
            }
            sp2C = sp28;
        } while (sp2C != 0);
    }
}
