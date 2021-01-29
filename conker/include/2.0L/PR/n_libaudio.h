/*====================================================================
 *
 * Copyright 1993, Silicon Graphics, Inc.
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

#ifndef __N_LIBAUDIO__
#define __N_LIBAUDIO__

#include <PR/libaudio.h>

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

#include <PR/ultratypes.h>
#include <PR/mbi.h>


/*
 * Synthesis driver stuff
 */
typedef struct N_ALVoice_s {
    /* 0x00 */  ALLink              node;
    /* 0x08 */  struct N_PVoice_s   *pvoice;
    /* 0x0C */  ALWaveTable         *table;
    /* 0x10 */  void                *unk10;
    /* 0x14 */  void                *unk14;
    /* 0x18 */  s16                 state;
    /* 0x1A */  s16                 priority;
    // /* 0x1C */  void                *clientPrivate;
    /* 0x20 */  s16                 fxBus;
    /* 0x22 */  s16                 unityPitch;
} N_ALVoice; // size 0x20

typedef struct {
    /* 0x00 */  ALPlayer    *head;          /* client list head                     */
    // ALPlayer    *n_seqp1;    /* for fade in / fade out */
    // ALPlayer    *n_seqp2;
    // ALPlayer    *n_sndp;
    ALLink      pFreeList;      /* list of free physical voices         */
    ALLink      pAllocList;     /* list of allocated physical voices    */
    ALLink      pLameList;      /* list of voices ready to be freed     */
    /* 0x1C */  s32         paramSamples;
    /* 0x20 */  s32         curSamples;     /* samples from start of game           */
    /* 0x24 */  u8          pad24[0x8];
    /* 0x2C */  ALDMANew    dma;
    ALHeap      *heap;
    u8 pad[0xC];
    /* 0x40 */  struct ALParam_s      *paramList;
    /* 0x44 */  struct N_ALMainBus_s  *mainBus;
    /* 0x48 */  struct N_ALAuxBus_s   *auxBus;
    s32         numPVoices;
    s32         maxAuxBusses;
    /* 0x54 */ s32         outputRate;
    s32         maxOutSamples;
    s32         sv_dramout;
    s32         sv_first;
} N_ALSynth;


void    n_alSynAddPlayer(ALPlayer *client);
void    n_alSynAddSndPlayer(ALPlayer *client);
void    n_alSynAddSeqPlayer(ALPlayer *client);

ALFxRef n_alSynAllocFX( s16 bus,ALSynConfig *c, ALHeap *hp);
s32     n_alSynAllocVoice( N_ALVoice *voice, ALVoiceConfig *vc);


void    n_alSynFreeVoice(N_ALVoice *voice);
ALFxRef n_alSynGetFXRef( s16 bus, s16 index);
s16     n_alSynGetPriority( N_ALVoice *voice);
void    n_alSynRemovePlayer( ALPlayer *client);
void    n_alSynSetFXMix(N_ALVoice *v, u8 fxmix);
void    n_alSynSetFXParam(ALFxRef fx, s16 paramID, void *param);
void    n_alSynFreeFX(ALFxRef *fx);
void    n_alSynSetPan(N_ALVoice *v, u8 pan);
void    n_alSynSetPitch( N_ALVoice *v, f32 pitch);
void    n_alSynSetPriority( N_ALVoice *voice, s16 priority);
void    n_alSynSetVol( N_ALVoice *v, s16 volume, ALMicroTime t);
void    n_alSynStartVoice(N_ALVoice *v, ALWaveTable *table);
void    n_alSynStartVoiceParams(N_ALVoice *v, ALWaveTable *w,f32 pitch, s16 vol,
                                ALPan pan, u8 fxmix, u8 arg6, f32 arg7, u8 arg8,
                                ALMicroTime t);
void    n_alSynStopVoice( N_ALVoice *v);

void    n_alSynNew(ALSynConfig *c);
void    n_alSynDelete(void);


/*
 * Audio Library (AL) stuff
 */
typedef struct {
    N_ALSynth     drvr;
} N_ALGlobals;

extern N_ALGlobals *n_alGlobals;
extern N_ALSynth *n_syn;

void n_alInit(N_ALGlobals *g, ALSynConfig *c);
void n_alClose(N_ALGlobals *glob);
Acmd *n_alAudioFrame(Acmd *cmdList, s32 *cmdLen,
            s16 *outBuf, s32 outLen);


/*
 * Sequence Player stuff
 */
typedef struct {
    struct N_ALVoice_s    *voice;
} N_ALNoteEvent;


typedef struct {
    struct N_ALVoice_s  *voice;
    ALMicroTime         delta;
    u8                  vol;
} N_ALVolumeEvent;


typedef struct {
    struct N_ALVoiceState_s    *vs;
    void                       *oscState;
    u8                         chan;
} N_ALOscEvent;

typedef struct {
    f32 unk0;
    f32 unk4;
    u8  pad8[0x4];
} N_ALUnknownEvent1;

typedef struct {
    /* 0x00 */  ALLink              node;
    /* 0x08 */  u8                  pad8[0x4];
    /* 0x0C */  s32                 unkC;
    /* 0x10 */  N_ALVoice          *unk10;
    /* 0x14 */  u8                  pad14[0x1C];
    /* 0x30 */  f32                 unk30;
    /* 0x34 */  u8                  pad34[0x4];
    /* 0x38 */  s32                *unk38;
    /* 0x3C */  s32                 unk3C;
    /* 0x40 */  s32                 unk40;
    /* 0x44 */  u8                  pad44[0x8];
    /* 0x4C */  s16                 unk4C;
    /* 0x4E */  s8                  unk4E;
    /* 0x4F */  u8                  pad4F[0x4];
    /* 0x53 */  u8                  unk53;
    /* 0x54 */  u8                  unk54;
} N_ALUnknownStruct1;

typedef struct {
    N_ALUnknownStruct1 *unk0;
    u8  pad4[0x8];
} N_ALUnknownEvent2;

typedef struct {
    u8  unk0;
    u8  unk1;
    u8  unk2;
    u8  pad3;
    s32 unk4;
    u8  pad[0x4];
} N_ALUnknownEvent3;

typedef struct {
    s16                     type;
    union {
        ALMIDIEvent         midi;
        ALTempoEvent        tempo;
        ALEndEvent          end;
        N_ALNoteEvent       note;
        N_ALVolumeEvent     vol;
        ALSeqpLoopEvent     loop;
        ALSeqpVolEvent      spvol;
        ALSeqpPriorityEvent sppriority;
        ALSeqpSeqEvent      spseq;
        ALSeqpBankEvent     spbank;
        N_ALOscEvent        osc;
        N_ALUnknownEvent1   unknown0;
        N_ALUnknownEvent2   unknown1;
        N_ALUnknownEvent3   unknown2;
    } msg;
} N_ALEvent;


typedef struct {
    ALLink         node;
    ALMicroTime    delta;
    N_ALEvent      evt;
} N_ALEventListItem;

void            n_alEvtqNew(ALEventQueue *evtq, N_ALEventListItem *items, s32 itemCount);
ALMicroTime     n_alEvtqNextEvent(ALEventQueue *evtq, N_ALEvent *evt);
void            n_alEvtqPostEvent(ALEventQueue *evtq, N_ALEvent *evt, ALMicroTime delta, s32 foo);
void            n_alEvtqFlushType(ALEventQueue *evtq, s16 type);


typedef struct N_ALVoiceState_s {
    /* 0x00 */  struct N_ALVoiceState_s *next;     /* MUST be first                */
    /* 0x04 */  N_ALVoice          voice;
    /* 0x24 */  ALSound            *sound;
    /* 0x28 */  ALMicroTime        envEndTime;     /* time of envelope segment end */
    /* 0x2C */  f32                pitch;          /* currect pitch ratio          */
    /* 0x30 */  f32                vibrato;        /* current value of the vibrato */
    /* 0x34 */  u8                 envGain;        /* current envelope gain        */
    /* 0x35 */  u8                 channel;        /* channel assignment           */
    /* 0x36 */  u8                 key;            /* note on key number           */
    /* 0x37 */  u8                 velocity;       /* note on velocity             */
    /* 0x38 */  u8                 envPhase;       /* what envelope phase          */
    /* 0x39 */  u8                 phase;
    /* 0x3A */  u8                 tremelo;        /* current value of the tremelo */
    /* 0x3B */  u8                 flags;          /* bit 0 tremelo flag
                                                      bit 1 vibrato flag           */
    u8 pad3C[0x8];
} N_ALVoiceState;

typedef struct {
    /* 0x00 */  ALPlayer            node;          /* note: must be first in structure */
    /* 0x14 */  N_ALSynth          *drvr;          /* reference to the client driver   */
    /* 0x18 */  ALSeq              *target;        /* current sequence                 */
    /* 0x1C */  ALMicroTime         curTime;
    /* 0x20 */  ALBank             *bank;           /* current ALBank                   */
    /* 0x24 */  s32                 uspt;           /* microseconds per tick            */
    /* 0x28 */  s32                 nextDelta;      /* microseconds to next callback    */
    /* 0x2C */  s32                 state;
    /* 0x30 */  u16                 chanMask;       /* active channels                  */
    /* 0x32 */  s16                 vol;            /* overall sequence volume          */
    /* 0x34 */  u8                  maxChannels;    /* number of MIDI channels          */
    /* 0x35 */  u8                  debugFlags;     /* control which error get reported */
    /* 0x38 */  N_ALEvent           nextEvent;
    /* 0x48 */  ALEventQueue        evtq;
    /* 0x5C */  ALMicroTime         frameTime;
    /* 0x60 */  ALChanState        *chanState;      /* 16 channels for MIDI             */
    /* 0x64 */  N_ALVoiceState     *vAllocHead;     /* list head for allocated voices   */
    /* 0x68 */  N_ALVoiceState     *vAllocTail;     /* list tail for allocated voices   */
    /* 0x6C */  N_ALVoiceState     *vFreeList;      /* list of free voice state structs */
    /* 0x70 */  ALOscInit           initOsc;
    /* 0x74 */  ALOscUpdate         updateOsc;
    /* 0x78 */  ALOscStop           stopOsc;
    /* 0x7C */  ALSeqMarker        *loopStart;
    /* 0x80 */  ALSeqMarker        *loopEnd;
    /* 0x84 */  s32                 loopCount;      /* -1 = loop forever, 0 = no loop   */
    /* 0x88 */  u8 pad88[0x4];
    /* 0x8C */  u8 maxVoices;
    /* 0x8D */  u8 usedVoices;
} N_ALSeqPlayer;

typedef struct {
    /* 0x00 */  ALPlayer            node;           /* note: must be first in structure */
    /* 0x14 */  N_ALSynth          *drvr;           /* reference to the client driver   */
    /* 0x18 */  ALCSeq             *target;         /* current sequence                 */
    /* 0x1C */  ALMicroTime         curTime;
    /* 0x20 */  ALBank             *bank;           /* current ALBank                   */
    /* 0x24 */  s32                 uspt;           /* microseconds per tick            */
    /* 0x28 */  s32                 nextDelta;      /* microseconds to next callback    */
    /* 0x2C */  s32                 state;
    /* 0x30 */  u16                 chanMask;       /* active channels                  */
    /* 0x32 */  s16                 vol;            /* overall sequence volume          */
    /* 0x34 */  u8                  maxChannels;    /* number of MIDI channels          */
    /* 0x35 */  u8                  debugFlags;     /* control which error get reported */
    /* 0x38 */  N_ALEvent           nextEvent;
    /* 0x48 */  ALEventQueue        evtq;
    /* 0x5C */  ALMicroTime         frameTime;
    /* 0x60 */  ALChanState        *chanState;      /* 16 channels for MIDI             */
    /* 0x64 */  N_ALVoiceState     *vAllocHead;     /* list head for allocated voices   */
    /* 0x68 */  N_ALVoiceState     *vAllocTail;     /* list tail for allocated voices   */
    /* 0x6C */  N_ALVoiceState     *vFreeList;      /* list of free voice state structs */
    /* 0x70 */  ALOscInit           initOsc;
    /* 0x74 */  ALOscUpdate         updateOsc;
    /* 0x78 */  ALOscStop           stopOsc;
    /* RARE CUSTOM */
    /* 0x7C */  f32 unk7C;
    /* 0x80 */  f32 unk80;
    /* 0x84 */  s32 unk84;
    /* 0x88 */  u8  unk88[0x4];
    /* 0x8C */  u8  unk8C;
    /* 0x8D */  u8  unk8D;
} N_ALCSPlayer;


/*
 * Sequence data representation routines
 */
void    n_alSeqNextEvent(ALSeq *seq, N_ALEvent *event);
void    n_alSeqNewMarker(ALSeq *seq, ALSeqMarker *m, u32 ticks);

void    n_alCSeqNew(ALCSeq *seq, u8 *ptr);
void    n_alCSeqNextEvent(ALCSeq *seq, N_ALEvent *evt);
void    n_alCSeqNewMarker(ALCSeq *seq, ALCSeqMarker *m, u32 ticks);


/*
 * Sequence Player routines
 */
void    n_alSeqpNew(N_ALSeqPlayer *seqp, ALSeqpConfig *config);
void    n_alSeqpDelete(N_ALSeqPlayer *seqp);
u8      n_alSeqpGetChlVol(N_ALSeqPlayer *seqp, u8 chan);
u8      n_alSeqpGetChlFXMix(N_ALSeqPlayer *seqp, u8 chan);
ALPan   n_alSeqpGetChlPan(N_ALSeqPlayer *seqp, u8 chan);
u8      n_alSeqpGetChlPriority(N_ALSeqPlayer *seqp, u8 chan);
s32     n_alSeqpGetChlProgram(N_ALSeqPlayer *seqp, u8 chan);
ALSeq  *n_alSeqpGetSeq(N_ALSeqPlayer *seqp);
s32     n_alSeqpGetState(N_ALSeqPlayer *seqp);
s32     n_alSeqpGetTempo(N_ALSeqPlayer *seqp);
s16     n_alSeqpGetVol(N_ALSeqPlayer *seqp);        /* Master volume control */
void    n_alSeqpPlay(N_ALSeqPlayer *seqp);
void    n_alSeqpSendMidi(N_ALSeqPlayer *seqp, s32 ticks, u8 status, u8 byte1, u8 byte2);
void    n_alSeqpSetBank(N_ALSeqPlayer *seqp, ALBank *b);
void    n_alSeqpSetChlVol(N_ALSeqPlayer *seqp, u8 chan, u8 vol);
void    n_alSeqpSetChlFXMix(N_ALSeqPlayer *seqp, u8 chan, u8 fxmix);
void    n_alSeqpSetChlPan(N_ALSeqPlayer *seqp, u8 chan, ALPan pan);
void    n_alSeqpSetChlPriority(N_ALSeqPlayer *seqp, u8 chan, u8 priority);
void    n_alSeqpSetChlProgram(N_ALSeqPlayer *seqp, u8 chan, u8 prog);
void    n_alSeqpSetSeq(N_ALSeqPlayer *seqp, ALSeq *seq);
void    n_alSeqpSetTempo(N_ALSeqPlayer *seqp, s32 tempo);
void    n_alSeqpSetVol(N_ALSeqPlayer *seqp, s16 vol);
void    n_alSeqpStop(N_ALSeqPlayer *seqp);
void    n_alSeqpLoop(N_ALSeqPlayer *seqp, ALSeqMarker *start, ALSeqMarker *end, s32 count);


/*
 * Compressed Sequence Player routines
 */
void    n_alCSPNew(N_ALCSPlayer *seqp, ALSeqpConfig *config);
void    n_alCSPDelete(N_ALCSPlayer *seqp);
u8      n_alCSPGetChlVol(N_ALCSPlayer *seqp, u8 chan);
u8      n_alCSPGetChlFXMix(N_ALCSPlayer *seqp, u8 chan);
ALPan   n_alCSPGetChlPan(N_ALCSPlayer *seqp, u8 chan);
u8      n_alCSPGetChlPriority(N_ALCSPlayer *seqp, u8 chan);
s32     n_alCSPGetChlProgram(N_ALCSPlayer *seqp, u8 chan);
ALCSeq *n_alCSPGetSeq(N_ALCSPlayer *seqp);
s32     n_alCSPGetState(N_ALCSPlayer *seqp);
s32     n_alCSPGetTempo(N_ALCSPlayer *seqp);
s16     n_alCSPGetVol(N_ALCSPlayer *seqp);
void    n_alCSPPlay(N_ALCSPlayer *seqp);
void    n_alCSPSendMidi(N_ALCSPlayer *seqp, s32 ticks, u8 status, u8 byte1, u8 byte2);
void    n_alCSPSetBank(N_ALCSPlayer *seqp, ALBank *b);
void    n_alCSPSetChlVol(N_ALCSPlayer *seqp, u8 chan, u8 vol);
void    n_alCSPSetChlFXMix(N_ALCSPlayer *seqp, u8 chan, u8 fxmix);
void    n_alCSPSetChlPan(N_ALCSPlayer *seqp, u8 chan, ALPan pan);
void    n_alCSPSetChlPriority(N_ALCSPlayer *seqp, u8 chan, u8 priority);
void    n_alCSPSetChlProgram(N_ALCSPlayer *seqp, u8 chan, u8 prog);
void    n_alCSPSetSeq(N_ALCSPlayer *seqp, ALCSeq *seq);
void    n_alCSPSetTempo(N_ALCSPlayer *seqp, s32 tempo);
void    n_alCSPSetVol(N_ALCSPlayer *seqp, s16 vol);
void    n_alCSPStop(N_ALCSPlayer *seqp);


/*
 * Sound Player stuff
 */
typedef struct {
    /* 0x00 */  ALPlayer            node;           /* note: must be first in structure */
    /* 0x14 */  ALEventQueue        evtq;
    /* 0x28 */  N_ALEvent           nextEvent;
    /* 0x38 */  N_ALSynth           *drvr;          /* reference to the client driver   */
    /* 0x3C */  s32                 target;
    /* 0x40 */  void                *sndState;
    /* 0x44 */  s32                 maxSounds;
    /* 0x48 */  ALMicroTime         frameTime;
    /* 0x4C */  ALMicroTime         nextDelta;      /* microseconds to next callback    */
    /* 0x50 */  ALMicroTime         curTime;
} N_ALSndPlayer;

void     n_alSndpNew(N_ALSndPlayer *sndp, ALSndpConfig *c);
void     n_alSndpDelete(void);
ALSndId  n_alSndpAllocate(ALSound *sound);
void     n_alSndpDeallocate(ALSndId id);
s32      n_alSndpGetState(void);
void     n_alSndpPlay(void);
void     n_alSndpPlayAt(ALMicroTime delta);
void     n_alSndpSetFXMix(u8 mix);
void     n_alSndpSetPan(ALPan pan);
void     n_alSndpSetPitch(f32 pitch);
void     n_alSndpSetPriority(ALSndId id, u8 priority);
void     n_alSndpSetVol(s16 vol);
void     n_alSndpStop(void);
ALSndId  n_alSndpGetSound(void);
void     n_alSndpSetSound(ALSndId id);


/*
 *  for n_audio micro code
 */
extern long long int    n_aspMainTextStart[], n_aspMainTextEnd[];
extern long long int    n_aspMainDataStart[], n_aspMainDataEnd[];


#ifdef _LANGUAGE_C_PLUS_PLUS
}
#endif

#endif /* __N_LIBAUDIO__ */
