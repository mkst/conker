#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_1001E170(struct22 *arg0, s32 arg1, f32 arg2, s16 arg3, u8 arg4,
                   u8 arg5, u8 arg6, f32 arg7, u8 arg8, s32 arg9) {
    struct45 *sp1C;


    if (arg0->unk8) {
        sp1C = (struct45 *) func_100196E4();
        if (sp1C == NULL) {
            return;
        }

        sp1C->unk4 = D_8002BA44->unk1C + arg0->unk8->unk90;
        sp1C->unk0 = 0;
        sp1C->unk8 = 13;
        sp1C->unkA = arg0->unk1E;
        sp1C->unk12 = arg4;
        sp1C->unk10 = arg3;
        sp1C->unk13 = arg5;
        sp1C->unkC = arg2;
        sp1C->unk14 = arg8;
        sp1C->unk15 = arg6;
        sp1C->unk18 = arg7;
        sp1C->unk1C = func_100199C8(arg9);
        sp1C->unk20 = arg1;
        func_10020978(arg0->unk8, 3, sp1C);
    }
}
