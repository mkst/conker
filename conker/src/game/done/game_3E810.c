#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_15011360(void) {
    func_15008E00();
    func_15008E10(2);
    func_15008E10(3);
    if ((D_800D2E4C->unk14 & 1) != 0) {
        D_800B0DF0->unk5 = (u8)0x30;
        D_800B0DF0->unk6 = (u8)0x38;
        D_800B0DF0->unk7 = (u8)0x5F;
    }
}
