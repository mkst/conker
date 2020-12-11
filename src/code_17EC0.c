#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_10017EC0(struct18 *arg0) {
    if (arg0->unk18 == 0) {
        return 0;
    }
    return (f32)arg0->unk24 / arg0->unk18->unk8;
}
