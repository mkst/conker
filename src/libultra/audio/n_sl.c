#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void n_alInit(struct07 *arg0, s32 arg1) {
    if (D_8002BA40 == 0) {
        D_8002BA40 = arg0;
        if (D_8002BA44 == 0) {
            D_8002BA44 = D_8002BA40;
            n_alSynNew(arg1);
        }
    }
}

void n_alClose(s32 arg0) {
    if (D_8002BA40) {
        n_alSynDelete();
        D_8002BA40 = 0;
        D_8002BA44 = 0;
    }
}
