#include <n_libaudio.h>


void func_10017F10(N_ALCSPlayer *seqp, u8 arg1, u8 arg2, u8 arg3, s32 arg4) {

    N_ALEvent evt;
    evt.type = 0x1A;
    evt.msg.unknown2.unk0 = arg1;
    evt.msg.unknown2.unk1 = arg2;
    evt.msg.unknown2.unk2 = arg3;
    evt.msg.unknown2.unk4 = arg4;

    n_alEvtqPostEvent(&seqp->evtq, &evt, 0, 2);
}
