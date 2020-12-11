#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_10017C00(struct26 *arg0, s32 arg1) {
    arg0->unk30 |= 1 << arg1;

    func_1001E400(arg0, 0, arg1 | 0xB0, 0xFC, 0xFF);
}

void func_10017C68(struct26 *arg0, s32 arg1, u8 arg2, u8 arg3) {
    func_1001E400(arg0, 0, arg1 | 0xB0, 0xFD, arg3);
    func_1001E400(arg0, 0, arg1 | 0xB0, 0xFF, arg2);
}

void func_10017CE0(struct26 *arg0, s32 arg1, u8 arg2) {
    func_1001E400(arg0, 0, arg1 | 0xB0, 0x41, arg2);
}

void func_10017D30(struct26 *arg0, s32 arg1, u8 arg2) {
    func_1001E400(arg0, 0, arg1 | 0xB0, 0xFC, arg2);
}
