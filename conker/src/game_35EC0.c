#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_15008A10(void) {
    D_80088720 = func_15083E90(1);
    D_80088724.x = 0.0f;
    D_80088724.y = 0.0f;
    D_80088724.z = 0.0f;
    D_80088730 = func_15083E90(1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_35EC0/func_15008A60.s")
// NON-MATCHING:is this handwritten or something?
// void func_15008A60(void) {
//     D_800DDE08 = 0;
//
//     D_800DDE40 = 0;
//     D_800DDDAC = 0;
//     D_800DDE28 = 0;
//     D_800DDDB0 = 0;
//     D_800DDE1C = 0;
//     D_800DDE20 = 0;
//     D_800DDDC8 = 0.0f;
//     D_800DDDD8 = 0.0f;
//
//     D_800DDE3C = 0;
//     D_800DDDAD = 0;
//     D_800DDE2C = 0;
//     D_800DDDB4 = 0;
//     D_800DDE1D = 0;
//     D_800DDE21 = 0;
//     D_800DDDCC = 0.0f;
//     D_800DDDDC = 0.0f;
//
//     D_800DDE3D = 0;
//     D_800DDDAE = 0;
//     D_800DDE30 = 0;
//     D_800DDDB8 = 0;
//     D_800DDE1E = 0;
//     D_800DDE22 = 0;
//     D_800DDDD0 = 0.0f;
//     D_800DDDE0 = 0.0f;
//
//     D_800DDE3E = 0;
//     D_800DDDAF = 0;
//     D_800DDE34 = 0;
//     D_800DDDBC = 0;
//     D_800DDE1F = 0;
//     D_800DDE23 = 0;
//     D_800DDDD4 = 0.0f;
//     D_800DDDE4 = 0.0f;
//
//     D_800DDE3F = 0;
//     D_800DDE18 = 0;
//     D_800DDE38 = 0;
// }
