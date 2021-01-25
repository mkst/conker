#include <os_internal.h>
#include <ultraerror.h>
#include "n_synthInternals.h"


// s32 _allocatePVoice( N_PVoice **pvoice, s16 priority);
#pragma GLOBAL_ASM("asm/nonmatchings/libultra/audio/n_synallocvoice/n_alSynAllocVoice.s")
// NON-MATCHING: plenty to figure out with the nlibaudio struct changes
// s32 n_alSynAllocVoice( N_ALVoice *voice, ALVoiceConfig *vc)
// {
//     N_PVoice  *pvoice = 0;
//     ALFilter *f;
//     ALParam *update;
//     s32 stolen;
//     N_PVoice *sp20;
//
// #ifdef _DEBUG
//     /* need two updates if voice is stolen */
//     if (n_syn->paramList == 0) {
//         __osError(ERR_ALSYN_NO_UPDATE, 0);
//         return 0;
//     } else if (n_syn->paramList->next == 0) {
//         __osError(ERR_ALSYN_NO_UPDATE, 0);
//         return 0;
//     }
// #endif
//
//     voice->priority     = vc->priority;
//     voice->unityPitch   = vc->unityPitch;
//     voice->table        = 0;
//     voice->fxBus        = vc->fxBus;
//     voice->state        = AL_STOPPED;
//     voice->pvoice       = 0;
//
//     voice->clientPrivate = vc->unk8;
//
//     stolen = _allocatePVoice( &pvoice, vc->priority);
//
//     if (pvoice) {    /* if we were able to allocate a voice */
//         if (stolen) {
//
//             pvoice->offset = 0x228; //512;
//             pvoice->vvoice->pvoice = 0; /* zero stolen voice */
//
// #if 1
//             pvoice->vvoice = voice;
//             voice->pvoice  = pvoice;
// #endif
//
//             /*
//              * ramp down stolen voice
//              */
//             update = __n_allocParam();
//             if (update) {
// #ifdef SAMPLE_ROUND
//                 update->delta      = SAMPLE184( n_syn->paramSamples );
// #else
//                 update->delta      = n_syn->paramSamples;
// #endif
//                 update->type       = AL_FILTER_SET_VOLUME;
//                 update->data.i     = 0;
//                 update->moredata.i = 0x170; //pvoice->offset - 64;
//
//                 n_alEnvmixerParam(voice->pvoice, AL_FILTER_ADD_UPDATE, update);
//             }
//             /*
//              * stop stolen voice
//              */
//             update = __n_allocParam();
//             if (update) {
// #ifdef SAMPLE_ROUND
//                 update->delta  = SAMPLE184( n_syn->paramSamples + pvoice->offset);
// #else
//                 update->delta  = n_syn->paramSamples + pvoice->offset;
// #endif
//                 update->type   = AL_FILTER_STOP_VOICE;
//                 update->next   = 0;
//                 n_alEnvmixerParam(voice->pvoice, AL_FILTER_ADD_UPDATE, update);
//
//             } else {
// #ifdef _DEBUG
//                 __osError(ERR_ALSYN_NO_UPDATE, 0);
// #endif
//             }
//
//         } else {
//             pvoice->offset = 0;
// #if 1
//             pvoice->vvoice = voice;
//             voice->pvoice  = pvoice;
//
//             sp20 = pvoice->vvoice; // + 8;
//             if (sp20->node.next != 0) {
//                 sp20->node.prev = sp20->node;
//             }
//             // if (sp20->unk4 != 0) {
//             //     *sp20->unk4 = (s32) sp20->unk0;
//             // }
//             // temp_t1 = pvoice + 8;
//             // sp1C = temp_t1;
//             // sp18 = D_8002BA44->unk48[vc->unk2].unk14;
//             // *temp_t1 = (s32) *sp18;
//             // sp1C->unk4 = sp18;
//             // if (*sp18 != 0) {
//             //     (*sp18)->unk4 = sp1C;
//             // }
//             // *sp18 = sp1C;
//             // pvoice->unk28 = 0;
// #endif
//         }
//
// #if 0
//         pvoice->vvoice = voice;     /* assign new voice  */
//         voice->pvoice  = pvoice;
// #endif
//
//     }
//
//     return (pvoice != 0);
// }


#pragma GLOBAL_ASM("asm/nonmatchings/libultra/audio/n_synallocvoice/_allocatePVoice.s")
