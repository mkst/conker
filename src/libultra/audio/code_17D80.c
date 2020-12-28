#include <libaudio.h>
#include "n_libaudio.h"

void func_10017D80(N_ALCSPlayer *seqp, u8 chan, u8 prog)
{
    N_ALEvent evt;

    evt.type            = AL_SEQP_MIDI_EVT;
    evt.msg.midi.ticks  = 0;
    evt.msg.midi.status = AL_MIDI_ControlChange | chan; // AL_MIDI_ChannelModeSelect?
    evt.msg.midi.byte1  = 10;
    evt.msg.midi.byte2  = prog;

    n_alEvtqPostEvent(&seqp->evtq, &evt, 0, 2);
}
