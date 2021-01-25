#include <n_libaudio.h>


void func_10017AF0(N_ALCSPlayer *seqp, s32 arg1) {
    seqp->unk84 = arg1;
}

void func_10017B04(N_ALCSPlayer *seqp, s32 chan, u8 arg2) {
    seqp->chanState[chan].unk17 = arg2;
}

void func_10017B30(N_ALCSPlayer *seqp) {
    s32 chan;

    seqp->chanMask = 0xFFFF;
    for (chan = 0; chan < seqp->maxChannels; chan++)
    {
        seqp->chanState[chan].unkE = 0xFF;
        seqp->chanState[chan].unkD = 0xFF;
    }
}

void func_10017BB8(N_ALCSPlayer *seqp, s32 arg1) {
    func_1001E400(seqp, 0, arg1 | 0xB0, 252, 0);
}
