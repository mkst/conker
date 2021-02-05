/*====================================================================
 *
 * Copyright 1995, Silicon Graphics, Inc.
 * All Rights Reserved.
 *
 * This is UNPUBLISHED PROPRIETARY SOURCE CODE of Silicon Graphics,
 * Inc.; the contents of this file may not be disclosed to third
 * parties, copied or duplicated in any form, in whole or in part,
 * without the prior written permission of Silicon Graphics, Inc.
 *
 * RESTRICTED RIGHTS LEGEND:
 * Use, duplication or disclosure by the Government is subject to
 * restrictions as set forth in subdivision (c)(1)(ii) of the Rights
 * in Technical Data and Computer Software clause at DFARS
 * 252.227-7013, and/or in similar or successor clauses in the FAR,
 * DOD or NASA FAR Supplement. Unpublished - rights reserved under the
 * Copyright Laws of the United States.
 *====================================================================*/

#ifndef __N_SNDP__
#define __N_SNDP__

#include <libaudio.h>
#include "n_libaudio.h"

#ifndef MIN
#define MIN(a,b) (((a)<(b))?(a):(b))
#endif

#ifndef MAX
#define MAX(a,b) (((a)>(b))?(a):(b))
#endif

#define MIN_RATIO	0.0001

typedef enum {
    AL_SNDP_PLAY_EVT,
    AL_SNDP_STOP_EVT,
    AL_SNDP_PAN_EVT,
    AL_SNDP_VOL_EVT,
    AL_SNDP_PITCH_EVT,
    AL_SNDP_API_EVT,
    AL_SNDP_DECAY_EVT,
    AL_SNDP_END_EVT,
    AL_SNDP_FX_EVT
} ALSndpMsgType;

typedef struct {
    N_ALVoice     voice;
    ALSound     *sound;         /* sound referenced here */
    s16         priority;
    f32         pitch;          /* current playback pitch                    */
    s32         state;          /* play state for this sound                 */
    /* 0x30 */  s16         vol;            /* volume - combined with volume from bank   */
    /* 0x32 */  ALPan       pan;            /* pan - 0 = left, 127 = right               */
    /* 0x33 */  u8          fxMix;          /* wet/dry mix - 0 = dry, 127 = wet          */
    /* 0x34 */  u8          unk34;
    /* 0x35 */  u8          chan;
    /* 0x36 */  u8          unk36;
    /* 0x37 */  u8          pad37;
    /* 0x38 */  u8          unk38;
} N_ALSoundState;

typedef union {

    N_ALEvent             msg;

    struct {
        s16              type;
        N_ALSoundState  *state;
    } common;

    struct {
        s16             type;
        N_ALSoundState *state;
        s16             vol;
    } vol;

    struct {
        s16             type;
        N_ALSoundState *state;
        f32             pitch;
    } pitch;

    struct {
        s16             type;
        N_ALSoundState *state;
        ALPan           pan;
    } pan;

    struct {
        s16             type;
        N_ALSoundState *state;
        u8              mix;
    } fx;

} N_ALSndpEvent;

static  ALMicroTime     _n_sndpVoiceHandler(void *node);
static  void            _n_handleEvent(N_ALSndpEvent *event);
static	void		_removeEvents(ALEventQueue *evtq, N_ALSoundState *state);
static	s32		_DivS32ByF32 (s32 i, f32 f);

#endif /* __N_SNDP__ */
