#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_150442C0(struct112 *arg0, f32 x, f32 y, f32 z) {
    arg0->unk30 += x * arg0->unk0 + y * arg0->unk10 + z * arg0->unk20;
    arg0->unk34 += x * arg0->unk4 + y * arg0->unk14 + z * arg0->unk24;
    arg0->unk38 += x * arg0->unk8 + y * arg0->unk18 + z * arg0->unk28;
}
