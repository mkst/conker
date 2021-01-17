#include <ultra64.h>

#include "functions.h"
#include "variables.h"

f32 D_8002C760 = 1.0005778074264526;
f32 D_8002C764 = 0.999422550201416;

f32 alCents2Ratio(s32 cents) {
    f32 x;
    f32 ratio = 1.0f;

    if (cents >= 0) {
        x = D_8002C760;
    } else {
        x = D_8002C764;
        cents = -cents;
    }
    while (cents) {
        if (cents & 1) {
            ratio *= x;
        }
        x *= x;
        cents >>= 1;
    }
    return ratio;
}
