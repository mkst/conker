#include <n_libaudio.h>


void func_10017C00(N_ALCSPlayer *seqp, s32 arg1) {
    seqp->chanMask |= 1 << arg1;
    func_1001E400(seqp, 0, arg1 | 0xB0, 0xFC, 0xFF);
}

void func_10017C68(N_ALCSPlayer *seqp, s32 arg1, u8 arg2, u8 arg3) {
    func_1001E400(seqp, 0, arg1 | 0xB0, 0xFD, arg3);
    func_1001E400(seqp, 0, arg1 | 0xB0, 0xFF, arg2);
}

void func_10017CE0(N_ALCSPlayer *seqp, s32 arg1, u8 arg2) {
    func_1001E400(seqp, 0, arg1 | 0xB0, 0x41, arg2);
}

void func_10017D30(N_ALCSPlayer *seqp, s32 arg1, u8 arg2) {
    func_1001E400(seqp, 0, arg1 | 0xB0, 0xFC, arg2);
}
