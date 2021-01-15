#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_15011FA0(s32 arg0) {
    struct17 tmp;
    struct37 *temp_v0;

    tmp.unk0 = 50.0f;
    tmp.unk4 = 50.0f;
    tmp.unk8 = 0.0f;
    temp_v0 = func_15149130(300, -1, 0x48, -1, 0, 0, 12, 255, 1);
    if (temp_v0 != NULL) {
        memcpy(&temp_v0->unk28, &tmp, 12);
    }
}
