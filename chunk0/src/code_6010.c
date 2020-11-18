#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_85006010(struct108 *arg0) {

    if (arg0->unk3D0->unk102) {
        if (func_85123934(arg0, 8, 0, 0, 0)) {
            arg0->unk84 |= 0x100000;
            arg0->unk84 &= -5;
            arg0->unk1B4 = 1;
            arg0->unk1E0 = 3;
            func_85124B18(arg0);
        }
        arg0->unk348 = 143.0f;
        arg0->unk34C = 143.0f;
        arg0->unk374 = 150.0f;
        arg0->unk190 = -38.0f;
        return;
    }
    if (arg0->unk23E == 0x3B) {
        if (func_85123934(arg0, 8, 0, 0, 0)) {
            arg0->unk84 |= 0x100000;
            arg0->unk84 &= -5;
            arg0->unk348 = 155.0f;
            arg0->unk34C = 155.0f;
            arg0->unk190 = 30.0f;
            arg0->unk18C = 30.0f;
            arg0->unk374 = 178.0f;
            return;
        }
    } else {
        func_851239CC(arg0, 0);
    }
}

void func_85006140(struct108 *arg0) {
    arg0->unk1E0 = 5;
    arg0->unk1B4 = 2;
    func_85124B18(arg0);
}
