#include <n_libaudio.h>
#include "n_sndp.h"


void func_10019B50(N_ALCSPlayer *seqp, s32 arg1, s32 chan, s32 vol) {
    N_ALSoundState *state;
    s16 tmp;
    seqp->chanState[chan].vol = vol;
    for(state = seqp->vAllocHead; state != NULL; state = state->voice.node.next) {
        if ((state->chan == chan) && (state->unk38 != 3)) {
            tmp = __n_vsVol(state, seqp);
            n_alSynSetVol(&state->voice.node.prev, tmp, __n_vsDelta(state, seqp->curTime));
        }
    }
}

void func_10019C28(N_ALCSPlayer *seqp, s32 arg1, s32 chan, s32 pan) {
    N_ALSoundState *state;
    u8 tmp;
    seqp->chanState[chan].pan = pan;
    for (state = seqp->vAllocHead; state != NULL; state = state->voice.node.next) {
        if ((state->chan == chan)) {
            tmp = __n_vsPan(state, seqp);
            func_1001E2A0(&state->voice.node.prev, tmp);
        }
    }
}

void func_10019CD0(N_ALCSPlayer *seqp, s32 arg1, s32 chan, s32 priority) {
    seqp->chanState[chan].priority = priority;
}

void func_10019CFC(N_ALCSPlayer *seqp, s32 arg1, s32 arg2, s32 arg3) {
    if (seqp->unk84 != 0) {
        osSendMesg(seqp->unk84, (arg3 & 7) | 0x10 | ((seqp->node.samplesLeft << 5) & -0x100), 0);
    }
}

void func_10019D6C(N_ALCSPlayer *seqp, s32 arg1, s32 chan, s32 arg3) {
    seqp->chanState[chan].unk8 = arg3;
}

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/audio/init_19B50/func_10019D98.s")

void func_10019ED8(N_ALCSPlayer *seqp, s32 arg1, s32 chan, s32 arg3) {
    seqp->chanState[chan].unk14 = arg3;
    func_10019D98(seqp, chan);
}

void func_10019F38(N_ALCSPlayer *seqp, s32 arg1, s32 chan, s32 arg3) {
    seqp->chanState[chan].unk15 = arg3;
    func_10019D98(seqp, chan);
}

void func_10019F98(N_ALCSPlayer *seqp, s32 arg1, s32 chan, s32 arg3) {
    N_ALSoundState *state;
    seqp->chanState[chan].unk16 = arg3;
    for (state = seqp->vAllocHead; state != NULL; state = state->voice.node.next) {
        if (state->chan == chan) {
            func_1001E350(&state->voice.node.prev, arg3);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/audio/init_19B50/func_1001A030.s")

void func_1001A224(N_ALCSPlayer *seqp, s32 arg1, s32 chan, s32 arg3) {
    N_ALSoundState *state;

    seqp->chanState[chan].fxmix = (seqp->chanState[chan].fxmix & 0x7F) | (arg3 << 7);
    for (state = seqp->vAllocHead; state != NULL; state = state->voice.node.next) {
        if ((state->chan == chan) && (state->unk38 != 3)) {
            n_alSynSetFXMix(&state->voice.node.prev, seqp->chanState[chan].fxmix);
        }
    }
}

void func_1001A2F8(N_ALCSPlayer *seqp, s32 arg1, s32 chan, s32 arg3) {
    arg3 = arg3 & 0x7F;
    seqp->chanState[chan].fxmix = (seqp->chanState[chan].fxmix & 0x80) | arg3;
    func_1001A224(seqp, arg1, chan, seqp->chanState[chan].fxmix >> 7);
}

void func_1001A39C(N_ALCSPlayer *seqp, s32 arg1, s32 chan, u32 arg3) {
    if (arg3 < n_syn->maxAuxBusses) {
        seqp->chanState[chan].unkB = arg3;
    }
}

// FIXME:
typedef struct {
    u8 pad0[0x36];
    u8 unk36;
} struct24;

void func_1001A3E0(struct24 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    arg0->unk36 = arg3;
}

void func_1001A3FC(struct24 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_1001263C(arg0->unk36 * 100 + arg3, 0x7FFF, 0x40);
}

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/audio/init_19B50/func_1001A45C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/libultra/audio/init_19B50/func_1001A508.s")

void func_1001A704(N_ALCSPlayer *seqp, s32 arg1, s32 chan, s32 arg3) {
    u8 sp2F;
    u8 sp2E;
    s32 sp28;
    s32 sp24;
    f32 sp20;
    f32 sp1C;

    sp2F = seqp->chanState[chan].unkD;
    sp2E = seqp->chanState[chan].unkE;
    sp20 = seqp->chanState[chan].unk10;
    sp28 = sp2E - sp2F;
    if (sp28 > 0) {
        if (seqp->chanState[chan].unkF & 0x80) {
            sp20 = sp20 * 2.0f;
        }
        sp24 = sp20;
        if (sp24 == 0) {
            sp24 = 1;
            sp1C = 1.0f / sp20;
        } else {
            sp1C = sp24 / sp20;
        }
        if (sp28 > sp24) {
            sp28 = sp24;
        }
    } else {
        sp24 = sp20;
        if (sp24 == 0) {
            sp24 = 1;
            sp1C = sp20;
        } else {
            sp1C = sp24 / sp20;
        }
        sp24 = -sp24;
        if (sp28 < sp24) {
            sp28 = sp24;
        }
    }
    sp2F = sp28 + sp2F;
    seqp->chanState[chan].unkD = sp2F;
    if (sp2F != sp2E) {
        n_alEvtqPostEvent(&seqp->evtq, arg1, seqp->uspt * 100 * sp1C, 2);
    }
    if (sp2F != 0) {
        seqp->chanMask |= (1 << chan);
    } else {
        seqp->chanMask &= ~(1 << chan);
    }
    func_1001A45C(seqp, chan);
}

void func_1001A9DC(N_ALCSPlayer *seqp, s32 arg1, s32 chan, s32 arg3) {
    seqp->chanState[chan].unkF = arg3;
}

void func_1001AA08(N_ALCSPlayer *seqp, s32 arg1, s32 chan, s32 arg3) {
    seqp->chanState[chan].unkD = arg3;
    seqp->chanState[chan].unkE = arg3;
    if (arg3 == 0) {
        seqp->chanMask &= (1 << chan) ^ 0xFFFF; // disable
    } else {
        seqp->chanMask |= 1 << chan;
    }
    func_1001A45C(seqp, chan);
}
