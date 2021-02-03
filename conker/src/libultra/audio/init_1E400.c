#include "n_synthInternals.h"


// non-vanilla n_alCSPSendMidi or n_alSeqpSendMidi
void func_1001E400(N_ALCSPlayer *seqp, s32 deltaTime, u8 status, u8 byte1, u8 byte2) {
    N_ALEvent evt;
    ALMicroTime delta;

    evt.type            = AL_SEQP_MIDI_EVT;
    evt.msg.midi.ticks  = 0;
    evt.msg.midi.status = status;
    evt.msg.midi.byte1  = byte1;
    evt.msg.midi.byte2  = byte2;
    evt.msg.midi.duration = 0;

    delta = deltaTime;
    n_alEvtqPostEvent(&seqp->evtq, &evt, delta, 2);
}
