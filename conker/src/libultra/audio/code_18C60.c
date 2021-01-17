#include <libaudio.h>
#include "n_libaudio.h"
#include "n_seqp.h"


void func_10018C60(N_ALSeqPlayer *seqp) {
    N_ALEvent evt;

    evt.type = AL_TRACK_END;
    n_alEvtqPostEvent(&seqp->evtq, &evt, 0, 2);
}
