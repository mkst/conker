#include <ultra64.h>

#include "functions.h"
#include "variables.h"



#pragma GLOBAL_ASM("asm/nonmatchings/libultra/audio/n_synallocvoice/n_alSynAllocVoice.s")
// s32 n_alSynAllocVoice(struct43 *arg0, struct44 *arg1) {
//     void *sp2C;
//     void *sp28;
//     s32 sp24;
//     void *sp20;
//     void *sp1C;
//     void *sp18;
//     void *temp_t1;
//
//     sp2C = NULL;
//     arg0->unk1A = (s16) arg1->unk0;
//     arg0->unk1E = (s16) arg1->unk4;
//     arg0->unkC = 0;
//     arg0->unk1C = (s16) arg1->unk2;
//     arg0->unk18 = (u16)0;
//     arg0->unk8 = 0;
//     arg0->unk14 = (s32) arg1->unk8;
//     sp24 = func_1001DF3C(&sp2C, arg1->unk0);
//     if (sp2C != 0) {
//         if (sp24 != 0) {
//             sp2C->unk90 = 0x228;
//             sp2C->unk10->unk8 = 0;
//             sp2C->unk10 = arg0;
//             arg0->unk8 = sp2C;
//             sp28 = __n_allocParam();
//             if (sp28 != 0) {
//                 sp28->unk4 = (s32) D_8002BA44->unk1C;
//                 sp28->unk8 = (u16)0xB;
//                 sp28->unkC = 0;
//                 sp28->unk10 = 0x170;
//                 n_alEnvmixerParam(arg0->unk8, 3, sp28);
//             }
//             sp28 = __n_allocParam();
//             if (sp28 != 0) {
//                 sp28->unk4 = (s32) (D_8002BA44->unk1C + sp2C->unk90);
//                 sp28->unk8 = (u16)0xF;
//                 sp28->unk0 = 0;
//                 n_alEnvmixerParam(arg0->unk8, 3, sp28);
//             }
//         } else {
//             sp2C->unk90 = 0;
//             sp2C->unk10 = arg0;
//             arg0->unk8 = sp2C;
//             sp20 = sp2C + 8;
//             if (sp20->unk0 != 0) {
//                 sp20->unk0->unk4 = (s32) sp20->unk4;
//             }
//             if (sp20->unk4 != 0) {
//                 *sp20->unk4 = (s32) sp20->unk0;
//             }
//             temp_t1 = sp2C + 8;
//             sp1C = temp_t1;
//             sp18 = D_8002BA44->unk48[arg1->unk2].unk14;
//             *temp_t1 = (s32) *sp18;
//             sp1C->unk4 = sp18;
//             if (*sp18 != 0) {
//                 (*sp18)->unk4 = sp1C;
//             }
//             *sp18 = sp1C;
//             sp2C->unk28 = 0;
//         }
//     }
//     return sp2C != 0;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/audio/n_synallocvoice/_allocatePVoice.s")
