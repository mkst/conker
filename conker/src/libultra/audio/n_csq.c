#include <n_libaudio.h>

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/audio/n_csq/n_alCSeqNew.s")
#pragma GLOBAL_ASM("asm/nonmatchings/libultra/audio/n_csq/n_alCSeqNextEvent.s")
#pragma GLOBAL_ASM("asm/nonmatchings/libultra/audio/n_csq/__n_alCSeqGetTrackEvent.s")
#pragma GLOBAL_ASM("asm/nonmatchings/libultra/audio/n_csq/func_100186DC.s")
// void func_100186DC(void *arg0, void *arg1) {
//     s32 sp4;
//     s32 temp_t0;
//     s32 temp_t4;
//     s32 temp_t5;
//     s32 temp_t8;
//
//     arg0->unk4 = (s32) arg1->unk0;
//     arg0->unkC = (s32) arg1->unk4;
//     arg0->unk10 = (s32) arg1->unk8;
//     sp4 = 0;
// loop_1:
//     temp_t0 = sp4 * 4;
//     (arg0 + temp_t0)->unk18 = (s32) (arg1 + temp_t0)->unkC;
//     temp_t5 = sp4 * 4;
//     (arg0 + temp_t5)->unk58 = (s32) (arg1 + temp_t5)->unk4C;
//     (arg0 + sp4)->unk98 = (u8) (arg1 + sp4)->unk8C;
//     (arg0 + sp4)->unkA8 = (u8) (arg1 + sp4)->unk9C;
//     temp_t8 = sp4 * 4;
//     (arg0 + temp_t8)->unkB8 = (s32) (arg1 + temp_t8)->unkAC;
//     temp_t4 = sp4 + 1;
//     sp4 = temp_t4;
//     if (temp_t4 < 0x10) {
//         goto loop_1;
//     }
// }

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/audio/n_csq/func_10018790.s")

u8 __getTrackByte(ALCSeq *seq, s32 track) {
    u8 theByte;

    if (seq->curBULen[track]) {
        theByte = *seq->curBUPtr[track];
        seq->curBUPtr[track]++;
        seq->curBULen[track]--;
    } else {
        theByte = *seq->curLoc[track];
        seq->curLoc[track]++;
        if (theByte == AL_CMIDI_BLOCK_CODE) {
            u8 loBackUp, hiBackUp, theLen, nextByte;
            u32 backup;

            nextByte = *seq->curLoc[track];
            seq->curLoc[track]++;
            if (nextByte != AL_CMIDI_BLOCK_CODE) {
                hiBackUp = nextByte;
                loBackUp = *seq->curLoc[track];
                seq->curLoc[track]++;
                theLen = *seq->curLoc[track];
                seq->curLoc[track]++;
                backup = (u32) hiBackUp;
                backup <<= 8;
                backup += loBackUp;
                seq->curBUPtr[track] = seq->curLoc[track] - (backup + 4);
                seq->curBULen[track] = (u32)theLen;
                theByte = *seq->curBUPtr[track];
                seq->curBUPtr[track]++;
                seq->curBULen[track]--;
            }
        }
    }
    return theByte;
}

u32 __readVarLen(ALCSeq *seq, s32 track) {
    u32 value;
    u32 c;

    value = __getTrackByte(seq, track);
    if (value & 0x80) {
        value &= 0x7F;
        do
        {
            c = __getTrackByte(seq, track);
            value = (value << 7) + (c & 0x7F);
        } while (c & 0x80);
    }
    return value;
}
