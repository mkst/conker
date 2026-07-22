#include "n_synthInternals.h"

extern f32 D_8002C814;

// relies on jump table
#pragma GLOBAL_ASM("asm/nonmatchings/init_20000/func_10020000.s")

s32 n_alEnvmixerParam(N_PVoice *filter, s32 paramID, void *param) {
    N_PVoice  *e = filter;

    switch (paramID) {
      case (AL_FILTER_ADD_UPDATE):
          if (e->em_ctrlTail) {
              e->em_ctrlTail->next = (ALParam *)param;
          } else {
              e->em_ctrlList = (ALParam *)param;
          }
          e->em_ctrlTail = (ALParam *)param;
          break;
      case (AL_FILTER_RESET):
          e->em_first = 1;
          e->em_motion = AL_STOPPED;
          e->em_volume = 1;
          e->em_segEnd = 0;
          e->rs_delta  = 0.0;
          e->rs_first  = 1;
          e->rs_upitch = 0;
          n_alLoadParam(e, AL_FILTER_RESET, param);
          break;
      case (AL_FILTER_START):
          e->em_motion = AL_PLAYING;
          break;
      default:
#if 1
          n_alLoadParam(e, paramID, param);
#else
          n_alResampleParam(e, paramID, param); // TODO
#endif
          break;
  }
  return 0;
}

extern s16 D_8002BC10[];
extern s16 D_8002BD0E[];

typedef struct { u32 w0; u32 w1; } Cmd;

typedef struct {
    u8  pad0[0xA];
    /* 0xA */ u8 unkA;
} SubState;

typedef struct {
    u8  pad0[0x28];
    /* 0x28 */ SubState *unk28;
    u8  pad2C[0x30];
    /* 0x5C */ void *unk5C;
    /* 0x60 */ s16  unk60;
    /* 0x62 */ s16  unk62;
    /* 0x64 */ s16  unk64;
    /* 0x66 */ s16  unk66;
    /* 0x68 */ s16  unk68;
    /* 0x6A */ s16  unk6A;
    /* 0x6C */ u16  unk6C;
    /* 0x6E */ s16  unk6E;
    /* 0x70 */ s16  unk70;
    /* 0x72 */ u16  unk72;
    /* 0x74 */ s16  unk74;
    /* 0x76 */ s16  unk76;
    /* 0x78 */ s32  unk78;
    /* 0x7C */ s32  unk7C;
    /* 0x80 */ s32  unk80;
    u8  pad84[0x8];
    /* 0x8C */ s32  unk8C;
} SubVoice;

s16 _getRate(f32, f32, s32, u16 *);
Cmd *func_10022040(SubVoice *, s16 *, s32, Cmd *);

// _pullSubFrame
Cmd *func_10020ABC(SubVoice *arg0, s16 *arg1, s32 arg2, s32 arg3, Cmd *arg4) {
    Cmd *sp34;
    SubVoice *sp30;
    Cmd *sp2C;
    Cmd *sp28;
    Cmd *sp24;
    Cmd *sp20;
    Cmd *sp1C;

    sp34 = arg4;
    sp30 = arg0;
    if (sp30->unk28 != 0) {
        sp30->unk28->unkA = (u8) 1;
    }
    if ((sp30->unk8C != 1) || (arg3 == 0)) {
        return sp34;
    }

    sp34 = func_10022040(sp30, arg1, arg3, arg4);
    if (sp30->unk80) {
        sp30->unk80 = 0;
        sp30->unk70 = (D_8002BC10[sp30->unk60] * sp30->unk62) >> 15;
        sp30->unk6E = _getRate(sp30->unk64, sp30->unk70, sp30->unk7C, &sp30->unk6C);
        sp30->unk76 = (D_8002BD0E[-sp30->unk60] * sp30->unk62) >> 15;
        sp30->unk74 = _getRate(sp30->unk66, sp30->unk76, sp30->unk7C, &sp30->unk72);

        sp2C = sp34++;
        sp2C->w0 = (sp30->unk64 & 0xFFFF) | 0x9060000;
        sp2C->w1 = ((sp30->unk68 & 0xFFFF) << 16) | (sp30->unk6A & 0xFFFF);

        sp28 = sp34++;
        sp28->w0 = (sp30->unk76 & 0xFFFF) | 0x9040000;
        sp28->w1 = ((sp30->unk74 & 0xFFFF) << 16) | (sp30->unk72 & 0xFFFF);

        sp24 = sp34++;
        sp24->w0 = (sp30->unk70 & 0xFFFF) | 0x9000000;
        sp24->w1 = ((sp30->unk6E & 0xFFFF) << 16) | (sp30->unk6C & 0xFFFF);

        sp20 = sp34++;
        sp20->w0 = (sp30->unk66 & 0xFFFF) | 0x3010000;
        sp20->w1 = osVirtualToPhysical(sp30->unk5C);
        goto join;
    }
    sp1C = sp34++;
    sp1C->w0 = 0x3000000;
    sp1C->w1 = osVirtualToPhysical(sp30->unk5C);
join:
    arg1[0] += 0x170;
    sp30->unk78 += 0xB8;
    if (((sp30->unk68 & 2)) || ((sp30->unk6A & 2))) {
        sp30->unk68 &= -3;
        sp30->unk6A &= -3;
        sp30->unk80 = 1;
    }
    return sp34;
}

s16 _getRate(f32 arg0, f32 arg1, s32 arg2, u16 *arg3) {
    s16 spE;
    s16 spC;
    f32 sp8;
    f32 sp4;
    f32 sp0;

    if (arg2 == 0) {
        if (arg0 <= arg1) {
            *arg3 = 0xFFFF;
            return 0x7FFF;
        } else {
            *arg3 = 0;
            return -0x8000;
        }
    }
    sp8 = 1.0f / (f32) arg2;

    if (arg1 < 1.0f) {
        arg1 = 1.0f;
    }
    if (arg0 <= 0.0f) {
        arg0 = 1.0f;
    }
    sp4 = (arg1 - arg0) * sp8 * 8.0f;
    spE = (s16) (s32) sp4;
    sp0 = sp4 - (f32) spE;
    spE = spE - 1;
    sp0 = sp0 + 1.0f;
    spC = (s16) (s32) sp0;
    spE = spE + spC;
    sp0 = sp0 - (f32) spC;
    *arg3 = (u32) (D_8002C814 * sp0); // 65535.0f
    return spE;
}

s16 _getVol(s16 ivol, s32 samples, s16 ratem, u16 ratel)
{
    s32 tmp1;
#ifdef AUD_PROFILE
    lastCnt[++cnt_index] = osGetCount();
#endif

    samples >>= 3;
    if (samples == 0){
        return ivol;
    }

    tmp1 = ratel * samples;
    tmp1 >>= 16;
    tmp1 += ratem * samples;
    ivol += tmp1;

#ifdef AUD_PROFILE
    PROFILE_AUD(vol_num, vol_cnt, vol_max, vol_min);
#endif
    return ivol;
}
