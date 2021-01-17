#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_1500EF20(void) {
    struct102 *temp_v0;
    struct174 tmp;

    func_15195AA8(D_800B0E00[0], D_800902B8, 1, -1, 0, 0, 0, -8);
    func_15195AA8(D_800B0E00[1], D_800902B8, 1, -1, 0, 1, 0, -8);

    tmp.unk0 = D_80096220;
    tmp.unk4 = D_80096224;
    tmp.unkC = D_80096228;
    tmp.unk8 = 400.0f;
    temp_v0 = func_151491F4((s16) ((func_150ADA20() % 0x33U) + 0x19), 5, -1, 1, 0, 0x10, 0xFF, 0);
    if (temp_v0 != NULL) {
        memcpy(&temp_v0->unk28, &tmp, 16);
    }

    tmp.unk0 = D_8009622C;
    tmp.unk4 = D_80096230;
    tmp.unkC = D_80096234;
    temp_v0 = func_151491F4((s16) ((func_150ADA20() % 0x33U) + 0x19), 5, -1, 1, 0, 0x10, 0xFF, 0);
    if (temp_v0 != NULL) {
        memcpy(&temp_v0->unk28, &tmp, 16);
    }

    tmp.unk4 = D_80096238;
    temp_v0 = func_151491F4((s16) ((func_150ADA20() % 0x33U) + 0x19), 5, -1, 1, 0, 0x10, 0xFF, 0);
    if (temp_v0 != NULL) {
        memcpy(&temp_v0->unk28, &tmp, 16);
    }

    tmp.unk0 = D_8009623C;
    tmp.unk4 = D_80096240;
    tmp.unkC = D_80096244;
    temp_v0 = func_151491F4((s16) ((func_150ADA20() % 0x33U) + 0x19), 5, -1, 1, 0, 0x10, 0xFF, 0);
    if (temp_v0 != NULL) {
        memcpy(&temp_v0->unk28, &tmp, 16);
    }

    temp_v0 = &D_800DCD20;
    D_800DCD94 = temp_v0->unk0;
    D_800DCD98 = temp_v0->unk1;
    D_800DCD9C = temp_v0->unk2;
    D_800DCDA0 = 0.0f;
}
