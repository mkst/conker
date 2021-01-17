#include <ultra64.h>

#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/game_A28B0/func_15075400.s")
// NON-MATCHING: JUSTREG: t5/a3 not t4/a2
// void func_15075400(s32 arg0) {
//     u8 tmp;
//     u8 i;
//
//     if (arg0 < 0xF7) {
//         D_800D154C->unk218 += arg0;
//         return;
//     }
//
//     for (i = 0; i < 100; i++) {
//         tmp = *(u8*)D_800D154C->unk218; // ???
//         if (tmp < 247) {
//             D_800D154C->unk218 += 1;
//         } else {
//             D_800D154C->unk218 += 1;
//             if (arg0 == (tmp & 0xFF)) {
//                 D_800D154C->unk218 += -1;
//                 return;
//             }
//         }
//     }
// }

void func_15075498(void) {
    s32 tmp = D_800D1893 & 0x7F;

    if (tmp != 0x7F) {
        D_800D154C->unk244 = tmp;
    }
    D_800D154C->unkF4 &= ~0x143E;
    if (D_800D1890 == 0xFA) {
        D_800D154C->unkF4 |= 0x22;
    } else if (D_800D1890 == 0xFB) {
        D_800D154C->unkF4 |= 4;
    }
    if ((D_800D1893 & 0x80) != 0) {
        D_800D154C->unkF4 |= 16;
    }
}

void func_15075548(void) {
    f32 temp_f6;
    u8 temp_a0;

    D_800D154C->unk223 = 0;
    D_800D154C->unk21C = D_800D1890 * 100;
    temp_a0 = D_800D1892;
    if (temp_a0 != 0xFF) {
        temp_f6 = temp_a0;
        D_800D154C->unk44 = temp_f6;
        if (D_800D154C->unk44 == 1.0f) {
            D_800D154C->unk44 = 0.5f;
        }
        if (D_800BE616 != 0) {
            if ((D_800D154C->unk4 == 40) && ((D_800D154C->unk31C->unk128 & 1) != 0)) {
                D_800D154C->unk44 *= D_8009A13C;
            }
        }
    }
    func_15075498();
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_A28B0/func_15075650.s")
// NON-MATCHING: 95% there
// void func_15075650(void) {
//     u8 phi_a0;
//     u8 phi_a2;
//
//     phi_a0 = ((u8)(D_800D154C->unk13F + D_800D2108) - 1);
//     if (D_800D154C->unk21F != 0) {
//         phi_a0 = D_800D154C->unk21F;
//     }
//     phi_a0 = (u8)(phi_a0 - D_800D154C->unk220) & 0xff;
//     if (D_800D1891 == 0xFF) { // -1
//         if (D_800D154C->unk223 != 0xD) {
//             D_800D154C->unk21E = (func_150ADA20() % (u32) phi_a0) + D_800D154C->unk220;
//         }
//     } else if (D_800D1891 == 0xFE) { // -2
//         if (D_800D154C->unk223 != 0xD) {
//             phi_a2 = D_800D154C->unk21E - 1;
//             if (D_800D154C->unk21E <= D_800D154C->unk220) {
//                 phi_a2 = phi_a0 - 1;
//             }
//             phi_a0 = (func_150ADA20() % (u32) phi_a0) + D_800D154C->unk220;
//             if (phi_a0 != phi_a2) {
//                 D_800D154C->unk21E = phi_a0;
//             }
//         }
//     } else {
//         if (D_800D1891 == 0xFF) { // impossible?
//             D_800D154C->unk21E = phi_a0 - 1;
//         } else {
//             D_800D154C->unk21E = D_800D1891;
//         }
//     }
//
//     D_800D154C->unk223 = 0;
//     D_800D154C->unk21C = D_800D1890 * 0x64;
//
//     if (D_800D1892 != 0xFF) {
//         D_800D154C->unk44 = D_800D1892;
//         if (D_800D154C->unk44 == 1.0f) {
//             D_800D154C->unk44 = 0.5f;
//         }
//     }
//
//     if (D_800D154C->unk21E < D_800D154C->unk220) {
//         D_800D154C->unk21E = D_800D154C->unk220;
//     }
//     func_15075498();
// }

#pragma GLOBAL_ASM("asm/nonmatchings/game_A28B0/func_15075884.s")
// NON-MATCHING: array index is wrong
// void func_15075884(void) {
//     f32 temp_f0;
//     f32 temp_f12;
//     f32 temp_f2;
//     struct169 *temp_v1;
//     f32 phi_f2;
//
//     func_15075548();
//     temp_v1 = D_800D2104[(D_800D154C->unk13F) + (D_800D154C->unk21E)];
//     temp_f2 = temp_v1->unk8 - D_800D154C->unk14;
//     temp_f12 = temp_v1->unkC - D_800D154C->unk1C;
//     temp_f0 = sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12));
//     D_800D154C->unk44 = 2.0f * (temp_f0 / D_800D1891);
// }

#pragma GLOBAL_ASM("asm/nonmatchings/game_A28B0/func_15075938.s")
// NON-MATCHING: 2nd half ok, 1st is a mystery
// void func_15075938(void) {
//     u8 tmp;
//     u8 changed;
//     s32 temp_a0;
//     s32 phi_v1;
//     u8 temp_v0;
//
//     changed = 0;
//
//     temp_a0 = D_800D154C->unk21E - D_800D154C->unk221;
//     if (temp_a0 < 0) {
//         temp_v0 = D_800D154C->unk13F + D_800D2108;
//         temp_a0 = (temp_a0 + temp_v0) - 1;
//     } else {
//         temp_v0 = D_800D154C->unk13F + D_800D2108;
//         if ((temp_v0 - 1) <= temp_a0) {
//             temp_a0 = (temp_a0 - temp_v0) + 1;
//         }
//     }
//
//     if (D_800D1891 == 0xFF) {
//         phi_v1 = temp_v0 - 2;
//     } else {
//         phi_v1 = D_800D1891;
//     }
//
//     if (D_800D1892 == 0) {
//         if (phi_v1 == temp_a0) {
//             changed = 1;
//         }
//     } else if (D_800D1892 == 1) {
//         if (phi_v1 != temp_a0) {
//             changed = 1;
//         }
//     } else if (D_800D1892 == 2) {
//         if (phi_v1 < temp_a0) {
//             changed = 1;
//         }
//     } else {
//         if (phi_v1 > temp_a0) {
//             changed = 1;
//         }
//     }
//
//     if (changed) {
//         func_15075400(D_800D1890);
//     }
// }

void func_15075A50(void) {
    u8 temp_v0 = D_800D154C->unk21E;
    if (((D_800D1892 == 0) && (D_800D1891 == temp_v0)) ||
       ((D_800D1892 == 1) && (D_800D1891 != temp_v0))) {
        func_15075400(D_800D1890);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_A28B0/func_15075AAC.s")
// what is D_800D2104?
// void func_15075AAC(void) {
//     struct169 *temp_v0;
//
//     func_15075548();
//     temp_v0 = D_800D2104[D_800D1891 + D_800D154C->unk13F] ;
//     if (fabsf(temp_v0->unk0 - D_800D154C->unk14) + (fabsf(temp_v0->unk4 - D_800D154C->unk1C)) < 40.0f) {
//         D_800D154C->unk21C = 0;
//         D_800D154C->unk3C = 0.0f;
//     }
// }

void func_15075B60(void) {
    func_15075548();
    D_800D154C->unk223 = 10;
}

void func_15075B8C(void) {
    func_15075650();
    D_800D154C->unk223 = 10;
}

void func_15075BB8(void) {
    func_15075548();
    D_800D154C->unk22C |= 2;
}

void func_15075BE8(void) {
    if (D_800D1893 != 0) {
        D_800D154C->unk22C |= 0x80;
    }
    D_800D154C->unk233 = D_800D1890;
}

void func_15075C24(void) {
    if (D_800D1893 != 1) {
        D_800D154C->unk20 = (s16)((D_800D1892 << 8) | D_800D1890);
    }
    if (D_800D1893 != 2) {
        D_800D154C->unk24 = (s16)(s8)D_800D1891;
    }
}

void func_15075CA0(void) {
    func_15075548();
    D_800D154C->unk223 = 1;
}

void func_15075CCC(void) {
    func_15075548();
    D_800D154C->unk223 = 16;
    D_800D154C->unk231 = D_800D1891;
}

void func_15075D0C(void) {
    func_15075548();
    D_800D154C->unk223 = 15;
}

void func_15075D38(void) {
    func_15075CA0();
    D_800D154C->unk223 = 14;
}

void func_15075D64(void) {
    func_15075548();
    D_800D154C->unk223 = 12;
    D_800D154C->unk222 = 0;
}

void func_15075D9C(void) {
    func_15075548();
    D_800D154C->unk223 = 9;
}

void func_15075DC8(void) {
    func_15075CA0();
}

void func_15075DE8(void) {
    if (D_800D1891 == 0) {
        D_800D1891 = D_800D154C->unk232;
    }
    if (D_800D1893 != 0) {
        D_800D154C->unk232 = D_800D1893;
    }
    D_800D154C->unk218 = func_1507BB28(0, D_800D1891);
    D_800D154C->unk218 -= 1;
}

void func_15075E6C(void) {
    func_15075548();
    D_800D154C->unk223 = 2;
}

void func_15075E98(void) {
    D_800D154C->unk235 = D_800D1890;
}

void func_15075EB4(void) {
    if ((func_150ADA20() % 0x64U) < D_800D1892) {
        func_15075400(D_800D1890);
    }
}

void func_15075F00(void) {
    D_800D154C->unk234 = D_800D1890;
    D_800D154C->unk236 = D_800D1891;
    D_800D154C->unk237 = D_800D1892;
}

void func_15075F40(void) {
    func_15075548();
    D_800D154C->unk223 = 3;
}

void func_15075F6C(void) {
    if (D_800D1890 != 0) {
        if (D_800D1892 == 0) {
            D_800D154C->unk20 = D_800D1890;
        } else {
            D_800D154C->unk20 = -D_800D1890;
        }
    }
    if (D_800D1891 != 0) {
        D_800D154C->unk24 = D_800D1891;
    }
    D_800D154C->unk3A = D_800D1893;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_A28B0/func_1507602C.s")
// NON-MATCHING: indexing is wrong
// void func_1507602C(void) {
//     f32 temp_f12;
//     f32 temp_f14;
//     f32 temp_f2;
//     struct169 *temp_v1;
//
//     func_15075548();
//     D_800D154C->unk21E = D_800D1891;
//     temp_v1 = D_800D2104[D_800D154C->unk13F + D_800D1891]; // wrong
//     temp_f2 = temp_v1->unk8 - D_800D154C->unk14;
//     temp_f12 = temp_v1->unkC - D_800D154C->unk1C;
//     temp_f14 = 2.0f * (sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12)) / D_800D154C->unk44);
//     if (temp_f14 < 12.0f) {
//         D_800D154C->unk44 *= temp_f14 * D_8009A140;
//         temp_f14 = 12.0f;
//     }
//     D_800D154C->unk21C = temp_f14 * 100.0f;
//     D_800D154C->unk20 = D_800D154C->unk24 * temp_f14 * 0.5f;
//     D_800D154C->unk223 = 4;
// }

void func_150761C8(void) {
    func_15075650();
    D_800D154C->unk223 = 5;
}

void func_150761F4(void) {

    D_800D154C->unk223 = 6;
    D_800D154C->unk22C &= 0xFFFE;
}

void func_15076220(void) {
    func_150761F4();
    D_800D154C->unk22C |= 1;
}

void func_15076250(void) {
    s32 tmp = (D_800D1890 << 8) | D_800D1891;
    func_15060778(tmp, D_800D154C, 0x7D00, -0x64, 0x1F4, 0x9C4, D_800D1892);
}

void func_150762B0(void) {
    func_1000CBA8(D_800D1890);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_A28B0/func_150762D4.s")
// void func_151669A0(s32 arg0, s32 arg1, s32 arg2, f32 arg3, u8 arg4, s32 arg5);
// void func_150762D4(void) {
//     func_151669A0(&D_800D154C->unk14, (s32)D_800D154C->unk18 + 100.0f, D_800D154C->unk1C, 0.44999998807907104f, 0xFF, 0);
// }

void func_15076340(void) {
    if (D_800D154C->unk107 == 0) {
        func_15075400(D_800D1890);
    }
    if (D_800D1891 != 0) {
        D_800D154C->unk107 = 0;
    }
}

void func_15076394(void) {
    D_800D154C->unk236 = D_800D1890;
}

void func_150763B0(void) {

    if (D_800D1890 == 128) {
        D_800D154C->unk1E5 = D_800D154C->unk144->unkF;
    } else {
        D_800D154C->unk1E5 = D_800D1890;
    }
    D_800D154C->unk1E7 = 0;

    if (D_800D1892 != 0) {
        D_800D154C->unk1E5 += (func_150ADA20() % (u32) D_800D1892);
    }
    if (D_800D1893 == 1) {
        D_800D154C->unk1E6 = 0;
        D_800D154C->unk1E8 = 0;
        return;
    }
    if (D_800D1893 == 2) {
        D_800D154C->unk1E6 = D_800D1891;
        D_800D154C->unk1E8 = 0;
        return;
    }
    if (D_800D1891 == 0) {
        D_800D154C->unk1E6 = D_800D154C->unk1E5;
        D_800D154C->unk1E8 = 0;
    }
}

void func_150764C8(void) {
    D_800D154C->unk238 = D_800D1890;
}

void func_150764E4(void) {
    D_800D154C->unk239 = D_800D1890;
}

void func_15076500(void) {
    D_800D154C->unk22E = (D_800D1890 << 8) | D_800D1891;
}

void func_1507652C(void) {
    if (D_800D1891 != 0) {
        D_800CC3F5[D_800D154C->unk124 * 0x32C] = D_800D1890;
    } else {
        D_800D154C->unk125 = D_800D1890;
    }
}

void func_1507659C(void) {
    D_800D154C->unk18 = D_800D154C->unk18 + D_800D1890 * 100;
    if (D_800D1893 != 0) {
        D_800D154C->unk18 = 1800.0f;
    }
}

void func_15076600(void) {
}

void func_15076608(void) {
    D_800D154C->unk24A = D_800D1890;
}

void func_15076624(void) {
    s32 tmp = (D_800D1890 << 0x18) | (D_800D1891 << 0x10) | (D_800D1892 << 8) | D_800D1893;
    D_800D154C->unkF8 |= tmp;
}

s32 func_15076678(void) {
    s32 tmp = (D_800D1890 << 0x18) | (D_800D1891 << 0x10) | (D_800D1892 << 8) | D_800D1893;
    D_800D154C->unkF8 &= ~tmp;
}

void func_150766D0(void) {
    if (((D_800D154C->unk28 > 0.0f) && (D_800D1890 == 0)) ||
        (((D_800D1890 * 0x32) < D_800D154C->unk28) && (D_800D1890 != 0))) {
        D_800D154C->unk21C = 99;
        D_800D154C->unk218 -= 1;
    }
}

void func_15076760(void) {
}

// ???
#pragma GLOBAL_ASM("asm/nonmatchings/game_A28B0/func_15076768.s")
// u8 func_15076768(void) {
//     struct17 tmp;
//     f32 pad[6]; // struct?
//     f32 sp20;
//
//     if (D_800D1890 == 0) {
//         func_15197A7C(D_800D154C);
//         return;
//     } else if (D_800D1890 != 1) {
//         return;
//     }
//     tmp.unk4 = -390.0f;
//     tmp.unk0 = D_800D154C->unk14;
//     tmp.unk8 = D_800D154C->unk1C;
//     func_1504715C(&sp20, D_800D154C);
//     func_1514B364(&tmp, &sp20, 0xFF, 0);
// }

#pragma GLOBAL_ASM("asm/nonmatchings/game_A28B0/func_150767F4.s")
// NON-MATCHING: JUSTREG (?)
// void func_150767F4(void) {
//     struct127 *tmp = &D_800CC2D0[D_800D154C->unk222]; // * 0x32C) ;
//
//     if (((func_1505A630(tmp->unk14 - D_800D154C->unk14, D_800D154C->unk1C - tmp->unk1C, 0) >> 8) + ((D_800CC34A[D_800D154C->unk222 * 0x32C] >> 8) - D_800D1891) & 0xFF) < (D_800D1891 * 2)) {
//         func_15075400(D_800D1890);
//     }
// }

#pragma GLOBAL_ASM("asm/nonmatchings/game_A28B0/func_150768DC.s")
// NON-MATCHING: almost JUSTREG
// void func_150768DC(void) {
//     u8 temp_s2;
//     f32 temp_f20;
//     s32 temp_fp;
//     struct127 *temp_v0;
//     struct127 *current;
//     f32 phi_f22;
//     s32 i;
//     u8 tmp0;
//     struct124 *foo;
//     u8 tmp1;
//
//
//     phi_f22 = D_800D1890 * 8;
//     D_800D154C->unkA8 = 0;
//     temp_fp = ((s32)D_800D154C - (s32)D_800CC2D0) / (s32)sizeof(struct127);
//
//     for (i = 0; i < 25; i++) {
//         current = &D_800CC2D0[i];
//         if ((current->unk0 != 0) && (current->unk1CA != 0) && ((current->unkF8 & 0x20) != 0) && (i != temp_fp)) {
//             if ((D_800D1891 != 0) || (D_800D154C->unk4 != current->unk4)) {
//                 if (!(fabsf(D_800D154C->unk18 - current->unk18) > 50.0f)) {
//                     temp_f20 = func_1505A72C(D_800D154C, current);
//                     if (temp_f20 < phi_f22) {
//                         foo = D_800D1C90[D_800D154C->unk4];
//                         temp_s2 = foo->unk17;
//                         tmp1 = func_1505A630(current->unk14 - D_800D154C->unk14, D_800D154C->unk1C - current->unk1C, 0) >> 8;
//                         if ((((((D_800D154C->unk76 >> 8) + D_800D154C->unk2CA) - tmp1) + (temp_s2 / 2)) & 0xFF) < temp_s2) {
//                             D_800D154C->unkA8 = i;
//                             phi_f22 = temp_f20;
//                         }
//                     }
//                 }
//             }
//         }
//     }
//
//     if (D_800D154C->unkA8 != 0) {
//         D_800D154C->unk218 = func_1507BB28(0, D_800D1893);
//         D_800D154C->unk218 -= 1;
//         tmp0 = D_800D1892;
//         if (tmp0 != 0) {
//             temp_v0 = &D_800CC2D0[D_800D154C->unkA8 & 0x7F];
//             temp_v0->unk218 = 0;
//             temp_v0->unk232 = tmp0;
//             temp_v0->unk222 = temp_fp;
//         }
//     }
// }

void func_15076B5C(void) {
    D_800D154C->unk222 = (D_800D154C->unkA8 & 0x7F);
}

void func_15076B78(void) {
    D_800D154C->unk5 = D_800D1890;
}

void func_15076B94(void) {
    s32 idx = ((s32)D_800D154C - (s32)D_800CC2D0) / (s32)sizeof(struct127);

    if (D_800D1891) {
        idx = 25;
    }
    while (idx != 0) {
        if ((D_800D1890 == D_800CC2D0[idx-1].unk4) && (D_800CC2D0[idx-1].unk1CA != 0)) {
            func_15075548();
            D_800D154C->unk223 = 9;
            D_800D154C->unk222 = idx - 1;
            D_800D154C->unk21C = 1000;
            return;
        }
        idx--;
    };
}

void func_15076C7C(void) {
    func_1506160C(D_800D154C, 1, D_800D1890, 0, 0);
}

void func_15076CB4(void) {
    D_800D154C->unk76 = D_800D154C->unk78;
}

void func_15076CCC(void) {
    D_800D154C->unk21C = 10000;
    func_15060F28(D_800D154C, 1);
}

void func_15076D04(void) {
    D_800D154C->unk3C = D_800D1890;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_A28B0/func_15076D3C.s")
// ???
// void func_15076D3C(void) {
//     s32 temp_a3;
//     s32 tmp2;
//
//     temp_a3 = D_800D1892 | (D_800D1893 << 8);
//     tmp2 = D_800D1890 | (D_800D1891 << 8);
//     D_800D154C->unk14C = (s16)tmp2 * D_8009A144;
//     D_800D154C->unk150 = (s16)temp_a3 * D_8009A144;
//     D_800D154C->unk154 = D_800D154C->unk14C;
//     D_800D154C->unk158 = D_800D154C->unk150;
//     func_15062BDC(&D_800D154C, D_800D154C->unk14C, D_800D154C->unk150);
// }

void func_15076DF4(void) {
    D_800D154C->unk0 = D_800D1890;
}

void func_15076E10(void) {
    D_800D154C->unk1D0 = D_800D1890;
    D_800D154C->unk22C |= D_800D1891;
}

void func_15076E48(void) {
}

void func_15076E50(void) {
    func_15075548();
    D_800D154C->unk20 = ((f32) (u32) (func_150ADA20() % 0x14U) + 55.0f);
    D_800D154C->unk24 = 2.0f;
    D_800D154C->unk78 = func_150ADA20() % 0xFFFFU;
    D_800D154C->unk3C = (u32) ((func_150ADA20() % 0x14U) + 0xF);
    D_800D154C->unk44 = D_800D154C->unk3C;
    D_800D154C->unk223 = 7;
}

void func_15076F40(void) {
    D_800D154C->unk21C = 1000;
    func_15060F28(D_800D154C, 1);
}

void func_15076F78(void) {
    s8 tmp;
    tmp = D_800D1890;
    D_800D154C->unkCC = tmp;
    tmp = D_800D1891;
    D_800D154C->unkCE = tmp;
}

void func_15076FA8(void) {
    if (D_800D1893 == 0) {
        s16 tmp;
        tmp = (func_150ADA20() % (u32) D_800D1890) - (D_800D1890 / 2);
        D_800D154C->unk14 += tmp * 3.0f;
        tmp = (func_150ADA20() % (u32) D_800D1891) - (D_800D1891 / 2);
        D_800D154C->unk1C += tmp * 3.0f;
    } else {
        if (D_800D154C->unk3C < D_800D1893) {
            D_800D154C->unk3C = D_800D1893;
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_A28B0/func_150770E4.s")
// NON-MATCHING: JUSTREG (?)
// void func_150770E4(void) {
//     s32 idx = D_800D154C->unk222 * 203;
//     if (D_800CC30C[idx] < D_800D1892) {
//         func_15075400(D_800D1893);
//     }
// }

void func_15077174(void) {
    D_800D154C->unk10E = D_800D1890;
}

void func_15077190(void) {
    s32 tmp0 = (D_800D1890 << 8) | D_800D1891;
    if (tmp0 != 0) {
        s32 tmp1 = D_800D1892 << 7;
        func_10010630(tmp0, D_800D154C, tmp1, 0x1F4, 0x9C4);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_A28B0/func_150771F0.s")
// NON-MATCHING: something isnt right...
// void func_150771F0(void) {
//
//     s32 phi_a1;
//     if (D_800D1893 == 0) {
//         phi_a1 = (D_800D1892 != 0) ? 1 : 2;
//         func_1506160C(D_800D154C, phi_a1, D_800D1890, D_800D1891, 0);
//     } else {
//         if (D_800D1892 == 0) {
//             func_1502EA60(D_800D154C, D_800D1890);
//         } else {
//             func_1502EA7C(D_800D154C, D_800D1890);
//         }
//     }
// }

#pragma GLOBAL_ASM("asm/nonmatchings/game_A28B0/func_15077294.s")
// another mystery...
// u8 func_15077294(void) {
//     s16 tmp = D_800D1891;
//
//     if (tmp == 0) {
//         D_800D154C->unk1CA =  D_800D1890;
//     } else if (tmp == 1) {
//         D_800D154C->unk1CA--; // = (u8) (D_800D154C->unk1CA - 1);
//     }
// }

void func_150772E8(void) {
    func_1503DE70(D_800D154C, D_800D1890, -1);
}

void func_15077318(void) {
    if (D_800D1890 != 0) {
        D_800D154C->unk101 |= 1;
    } else {
        D_800D154C->unk101 &= 0xFFFE;
    }
}

void func_1507735C(void) {

}

void func_15077364(void) {
    if (D_800D1893 != 0) {
        D_800D1890 += func_150ADA20() % (u32) D_800D1893;
    }
    D_800D154C->unk246 = (u8) D_800D1890;
    D_800D154C->unk249 = (u8) 0;
    D_800D154C->unk247 = (u8) D_800D1891;
    D_800D154C->unk248 = (u8) D_800D1892;
}

// ??
#pragma GLOBAL_ASM("asm/nonmatchings/game_A28B0/func_15077404.s")

void func_150774B4(void) {
    if ((D_800D154C->unk20F == D_800D154C->unk211) || (D_800D154C->unk211 == 0xFF)) {
        D_800D154C->unk25C |= 0x800;
        func_15075400(D_800D1890);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_A28B0/func_15077508.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_A28B0/func_150778F0.s")
// NON-MATCHING: close but not there yet
// void func_150778F0(void) {
//     u8 temp_t9;
//
//     temp_t9 = (u8)(D_800D2108 + D_800D154C->unk13F) - 1;
//     if (D_800D154C->unk21F != 0) {
//         temp_t9 = D_800D154C->unk21F;
//     }
//     D_800D154C->unk21E += D_800D154C->unk221;
//     D_800D154C->unk21E += temp_t9;
//     D_800D154C->unk21E %= temp_t9;
//     if (D_800D154C->unk21E < D_800D154C->unk220) {
//         D_800D154C->unk21E = D_800D154C->unk220;
//     }
// }

void func_150779A8(void) {
    func_15075650();
    D_800D154C->unk223 = 0xB;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_A28B0/func_150779D4.s")
// NON-MATCHING: JUSTREG! using $f6 not $f2
// void func_150779D4(void) {
//     struct127 *tmp;
//     u8 idx = 0;
//
//     if (D_800D1892 != 0) {
//         idx = D_800D154C->unk222;
//     }
//     tmp = &D_800CC2D0[idx];
//     if ((D_800C3E78 != idx) && ((tmp->unk0 != 1) || (tmp->unk65 == 0))) {
//         if (func_1505A6F8(D_800D154C, tmp) < (D_800D1893 * 8)) {
//              func_15075400(D_800D1890);
//         }
//     }
// }

void func_15077AA0(void) {
    D_800D154C->unk239 = D_800D1890;
}

void func_15077ABC(void) {
    D_800D154C->unk258 = D_800D1890;
    D_800D154C->unk257 = D_800D1891;
    D_800D154C->unk86 = func_150ADA20() % 0xFFU;
}

void func_15077B14(void) {
    D_800D154C->unk24C = D_800D1890;
    D_800D154C->unk24D = D_800D1891;
}

void func_15077B44(void) {
    func_15060A30((D_800D1890 << 8) + D_800D1891, D_800D154C);
}

void func_15077B80(void) {
    s32 tmp = (D_800D1890 << 8) + D_800D1891;
    D_800D154C->unk25C |= tmp;
}

void func_15077BB4(void) {
    struct127 *tmp = func_1505F0AC(D_800D1891);
    tmp->unk218 = 0;
    tmp->unk232 = D_800D1890;
}

void func_15077BE4(void) {
    s32 tmp = ~((D_800D1890 << 8) + D_800D1891);
    D_800D154C->unk25C &= tmp;
}

void func_15077C1C(void) {
    D_800D154C->unk23D = D_800D1890;
}

void func_15077C38(void) {
    struct127 *phi_s0;
    f32 tmp0;
    f32 tmp1;
    s32 i;

    tmp0 = D_8009A148;
    D_800D154C->unk222 = (u8)0;

    for (i = 0; i < 25; i++) {
        phi_s0 = &D_800CC2D0[i];
        if (((phi_s0->unk0 != 0) && (phi_s0->unk1CA != 0)) &&
            ((phi_s0->unk125 == 0) || (phi_s0->unk125 == 0xFF)) &&
            ((phi_s0->unk65 == 0) || (D_800D1892 != 0)) &&
            ((phi_s0->unk4 == D_800D1890) || ((phi_s0->unk0 == D_800D1891) &&
            (phi_s0->unk104 == 0)))) {
            if (D_800D1893 == 0) {
                D_800D154C->unk222 = i;
                return;
            }
            tmp1 = func_1505A72C(D_800D154C, phi_s0);
            if (tmp0 > tmp1) {
                D_800D154C->unk222 = i;
                tmp0 = tmp1;
            }
        }
    }
}

void func_15077DA0(void) {
    D_800D154C->unk21E = D_800D1890;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_A28B0/func_15077DBC.s")
// ???
// void func_15077DBC(void) {
//     if (D_800D1890 != 0xFA) {
//         D_800D154C->unk21E = D_800D1890;
//     }
//     D_800D154C->unk14 = D_800D2104[(D_800D154C->unk13F) + (D_800D154C->unk21E)]->unk8;
//     D_800D154C->unk18 = D_800D2104[(D_800D154C->unk13F) + (D_800D154C->unk21E)]->unkA;
//     D_800D154C->unk1C = D_800D2104[(D_800D154C->unk13F) + (D_800D154C->unk21E)]->unkC;
// }

void func_15077E9C(void) {
    s32 tmp = ((D_800D1890 << 8) + D_800D1891);
    func_10012718(tmp, D_800D154C, 0x5DC0, 0x1F4, 0x9C4);
}

void func_15077EEC(void) {
    D_800D154C->unk254 = D_800D1890;
}

void func_15077F08(void) {
    D_800D154C->unk1EA = (D_800D1890 << 8) | D_800D1891;
}

void func_15077F34(void) {
    D_800D154C->unk24F = D_800D1890;
    D_800D154C->unk250 = D_800D1891;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_A28B0/func_15077F64.s")
// NON-MATCHING: what is D_800D2104 ???
// void func_15056A00(s32, s32, u8);
// void func_15077F64(void) {
//     u8 temp_t6;
//     struct169 *temp_v0;
//     s32 phi_a0;
//     s32 phi_a1;
//
//     temp_t6 = D_800D1890 - 1;
//     temp_v0 = D_800D2104[D_800D154C->unk13F] + (D_800D154C->unk21E);
//     D_800D154C->unk78 = func_1505A630(temp_v0->unk8 - D_800D154C->unk14, D_800D154C->unk1C - temp_v0->unkC, 0);
//     phi_a0 = phi_a1 = ((s32) (D_800D154C->unk78 - D_800D154C->unk76) >> 8) & 0xff;
//     if ((phi_a0 & 0x80) != 0) {
//         phi_a1 = phi_a0 = -phi_a0 & 0xFF;
//     }
//     if ((u8)D_80099A3C[temp_t6 * 0xA] < phi_a0) {
//         D_800D154C->unk250 = (u8) D_800D1891;
//         func_15056A00(D_800D154C, phi_a1, temp_t6);
//     }
// }

void func_15078074(void) {
    f32 temp_f20;
    struct127 *tmp;
    s32 i;

    temp_f20 = 8 * D_800D1893;

    for (i = 0; i < 25; i++) {
        tmp = &D_800CC2D0[i];
        if ((tmp->unk0 != 0) && (D_800C3E78 != i)) {
            if (func_1505A6F8(D_800D154C, tmp) < temp_f20) {
                func_15075400(D_800D1890);
                return;
            }
        }
    }
}

void func_1507813C(void) {
    s32 idx = D_800D154C->unk222;
    if (D_800CC2D0[idx].unk0 == 0) {
        func_15075400(D_800D1890);
    }
}

void func_150781A4(void) {
    D_800D154C->unk23F = D_800D1891;
    D_800D154C->unk240 = D_800D1892;
    D_800D154C->unk241 = D_800D1890;
    D_800D154C->unk242 = D_800D1893;
}

// another function with D_800D2104
#pragma GLOBAL_ASM("asm/nonmatchings/game_A28B0/func_150781F4.s")

void func_150782CC(void) {
    D_800D154C->unk23E = D_800D1890;
}

void func_150782E8(void) {
    if (((D_800D1892 == 0) && (D_800D154C->unk3B == D_800D1891)) ||
        ((D_800D1892 == 1) && (D_800D154C->unk3B != D_800D1891))) {
        func_15075400(D_800D1890);
    }
}

void func_15078358(void) {
    s32 tmp = func_15083FB0(D_800D1890);
    D_800D154C->unk222 = tmp;
    if (tmp == -1) {
        D_800D154C->unk222 = 0;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_A28B0/func_1507839C.s")
// NON-MATCHING: JUSTREG
// void func_1507839C(void) {
//     struct127 *tmp;
//     f32 phi_f0;
//     f32 phi_f2;
//
//     if (D_800D1892 == 0) {
//         tmp = &D_800CC2D0[D_800D154C->unk222];
//         phi_f0 = func_1505A6F8(D_800D154C, tmp);
//     } else if (D_800D1892 == 1) {
//         tmp = &D_800CC2D0[D_800D154C->unk222];
//         phi_f0 = func_1505A72C(D_800D154C, tmp);
//     } else {
//         phi_f0 = fabsf(D_800D154C->unk18 - D_800CC2D0[D_800D154C->unk222].unk18);
//     }
//
//     phi_f2 = D_800D1893 * 8;
//     if (D_800D1893 == 0xFF) {
//         phi_f2 = D_800D154C->unk23D * 8;
//     }
//     if (((D_800D1891 == 0) && (phi_f0 > phi_f2)) ||
//         ((D_800D1891 == 1) && (phi_f0 > phi_f2))) {
//         func_15075400(D_800D1890);
//     }
// }

void func_15078520(void) {
    func_15075400(D_800D1890);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_A28B0/func_15078544.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_A28B0/func_1507879C.s")
// NON-MATCHING: D_800CC5A0 ???
// void func_1507879C(void) {
//     f32 temp_f0 =  D_800CC5A0[D_800D154C->unk222].unk8;
//
//     if (((D_800D1892 == 0) && (temp_f0 < D_800D1891)) ||
//         ((D_800D1892 == 1) && (temp_f0 > D_800D1891))) {
//         func_15075400(D_800D1890);
//     }
// }

void func_15078874(void) {
    D_800D154C->unk251 = D_800D1890;
}

void func_15078890(void) {
    if (((D_800D1892 == 0) && (D_800D154C->unk251 == D_800D1891)) ||
        ((D_800D1892 == 1) && (D_800D154C->unk251 != D_800D1891))) {
        func_15075400(D_800D1890);
    }
}

void func_15078900(void) {
    if (D_800D1893 != 0) {
        if (D_800D154C->unk222 == 0) {
            func_15075400(D_800D1890);
        }
    } else {
        if (((D_800D1892 == 0) && (D_800D1891 == D_800CC521[D_800D154C->unk222 * 0x32C])) ||
            ((D_800D1892 == 1) && (D_800D1891 != D_800CC521[D_800D154C->unk222 * 0x32C]))) {
            func_15075400(D_800D1890);
        }
    }
}

void func_15078A08(void) {
    struct197 *temp_a0;
    struct197 *temp_v0;

    temp_v0 = D_800D154C->unk2D0;
    temp_a0 = D_800CC5A0[D_800D154C->unk222].unk0;
    temp_v0->unk8 = (f32) temp_a0->unk8;
    temp_v0->unkC = (f32) temp_a0->unkC;
}

// requires jump table
#pragma GLOBAL_ASM("asm/nonmatchings/game_A28B0/func_15078A60.s")

void func_1507900C(void) {
    if (func_15078A60(0) != 0) {
        func_15075400(D_800D1890);
    }
}

void func_1507903C(void) {
    if (func_15078A60(0) != 0) {
        D_800D154C->unk218 = func_1507BB28(0, D_800D1890);
        D_800D154C->unk218 -= 1;
    }
}

void func_15079090(void) {
    if (func_15078A60(D_800C3E78) != 0) {
        func_15075400(D_800D1890);
    }
}

void func_150790C4(void) {
    if (func_15078A60(D_800C3E78) != 0) {
        D_800D154C->unk218 = func_1507BB28(0, D_800D1890);
        D_800D154C->unk218 -= 1;
    }
}

u8 func_1507911C(void) {
    s16 temp_a2;
    s16 phi_a0;
    u8 idx;

    temp_a2 = (D_800D1891 << 8) | D_800D1892;
    idx =  D_800D1893 & 1;
    if (idx != 0) {
        idx = D_800C3E78;
    }
    phi_a0 = D_800CC2D0[idx].unk18;
    if ((D_800D1893 & 2) != 0) {
        phi_a0 = D_800CC2D0[idx].unk14;
    }
    if (phi_a0 < temp_a2) {
        func_15075400(D_800D1890);
    }
}

void func_150791F0(void) {
    if ((s32) D_800D154C->unk2C9 < (s32) D_800D1890) {
        D_800D154C->unk1C9 = (u8)0xFFU;
    } else {
        D_800D154C->unk1C9 = D_800D1890;
    }
}

// ???
#pragma GLOBAL_ASM("asm/nonmatchings/game_A28B0/func_15079228.s")

void func_150792E0(void) {
    D_800D154C->unk232 = D_800D1890;
}

void func_150792FC(void) {
    D_800D154C->unk2F8 &= 0xFFF8;
    D_800D154C->unk2F8 |= D_800D1890;
}

void func_15079334(void) {
    struct127 *tmp;

    if (D_800D154C->unkA8 != 0) {
        tmp = &D_800CC2D0[D_800D154C->unkA8 & 0x7F];
        tmp->unk218 = 0;
        tmp->unk232 = D_800D1890;
    }
}

void func_15079390(void) {
    u16 tmp0 = D_800D1890;
    u8 tmp1 = D_800D1891;
    u8 tmp2 = D_800D1892;
    func_1514D3B0(D_800D154C, tmp0, tmp1, tmp2);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_A28B0/func_150793D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_A28B0/func_15079570.s")
// NON-MATCHING: JUSTREG - t1 not t0
// void func_15079570(void) {
//     f32 temp_f2;
//
//     temp_f2 = func_1505A6F8(D_800D154C, &D_800CC2D0[ D_800D154C->unk222]);
//     D_800D154C->unk44 = D_800D154C->unk3C;
//     temp_f2 = 2.0f * (temp_f2 / D_800D154C->unk44);
//     D_800D154C->unk20 = D_800D154C->unk24 * temp_f2 * 0.5f;
//     D_800D154C->unk20 += ((D_800CC2E8[D_800D154C->unk222 * 203] - D_800D154C->unk18) / temp_f2) * 2.0f;
// }

void func_1507965C(void) {
    s32 idx;
    struct127 *temp_v1;

    idx = func_15083FB0(D_800D1890);
    if (idx != -1) {
        temp_v1 = &D_800CC2D0[idx];
        temp_v1->unk232 = D_800D1891;
        temp_v1->unk218 = 0;
        temp_v1->unk23A = 0;
    }
}

void func_150796CC(void) {
    s32 idx = func_15083FB0(D_800D1890);
    if (D_800D1892 != 0) {
        if (idx != -1) {
            D_800CC3F5[idx * sizeof(struct127)] = D_800D1891;
        }
    } else if ((idx != -1) && (D_800CC3D4[idx * sizeof(struct127)] != 0)) {
        func_15075400(D_800D1891);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_A28B0/func_15079790.s")
// seriously, D_800D2104?
// void func_15079790(void) {
//     s16 temp_t1;
//     s16 temp_t0;
//
//     if (D_800D1892 != 0) {
//         D_800D154C->unk4 = 0xFF;
//     } else {
//         D_800D154C->unk4 = 0x3A;
//         temp_t1 = (func_150ADA20() % 0x1F4U) - 0xFA;
//         temp_t0 = (func_150ADA20() % 0x1F4U) - 0xFA;
//         D_800D154C->unk14 = (s32)&D_800D2104[D_800D154C->unk13F] + temp_t1;
//         D_800D154C->unk1C = (s32)&D_800D2104[D_800D154C->unk13F + 1] + temp_t0;
//     }
// }

void func_15079880(void) {
    s32 tmp = D_800CC30C[0] + (s8)D_800D1892;

    if (tmp < D_800D1891) {
        tmp = D_800D1891;
    } else if (tmp >= 251) {
        tmp = 250;
    }
    D_800D1892 = tmp;
    func_15075548();
}

void func_150798F8(void) {
    D_800D1891 = D_800D154C->unk21E;
    func_150781F4();
}

void func_15079928(void) {
    s32 phi_a3;

    phi_a3 = ((D_800D1891 << 0x10) + D_800D1892) & 0xFFFF;
    if (phi_a3 == 0) {
        phi_a3 = 0xFFFF;
    }
    func_1507E7E4(D_800D154C, D_800D1890, D_800D1893, phi_a3, 0);
}

void func_15079988(void) {
    func_1507EB4C(D_800D154C, D_800D1890);
}

void func_150799B4(void) {
    s32 temp_a0 = (D_800D1890 << 8) + D_800D1891;
    if (D_800D1892 != 0) {
        temp_a0 += func_150ADA20() % (u32) D_800D1892;
    }
    func_15060A30(temp_a0, D_800D154C);
}

void func_15079A28(void) {
    D_800D154C->unk252 = D_800D1890;
    D_800D154C->unk253 = D_800D1891;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_A28B0/func_15079A58.s")
// void func_15079A58(void) {
//     s16 tmp = (D_800D1890 << 8) + D_800D1891;
//     D_800D2110[D_800D154C->unk13F] = tmp;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/game_A28B0/func_15079A98.s")
// void func_15079A98(s32 arg0) {
//     struct169 *temp_v0;
//     struct127 *temp_v1;
//
//     temp_v0 = D_800D2104[D_800D154C->unk13F];
//     temp_v1 = &D_800CC2D0[arg0];
//     func_1505A630(temp_v0->unk0 - temp_v1->unk14, temp_v1->unk1C - temp_v0->unk4, 0);
// }

// requires jump table
#pragma GLOBAL_ASM("asm/nonmatchings/game_A28B0/func_15079B30.s")

void func_15079F24(void) {
    D_800D154C->unk48 = D_800D1898[D_800D1890];
}

void func_15079F50(void) {
    D_800D154C->unk23B = D_800D1890;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_A28B0/func_15079F6C.s")
// NON-MATCHING: JUSTREG
// void func_15079F6C(void) {
//     u16 tmp0;
//     u16 tmp1;
//     tmp0 = D_800D1890 << 8;
//     tmp1 = D_800D1891;
//     D_800D154C->unk224 = tmp0 | tmp1;
//     D_800D154C->unk22B = D_800D1892;
//     D_800D154C->unk226 = D_800D1893;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/game_A28B0/func_15079FBC.s")
// NON-MATCHING: JUSTREG
// void func_15079FBC(void) {
//     s16 phi_v1;
//
//     if ((D_800CC2D0->unk65 == 0) || (D_800CC2D0->unk44 < 5.0f)) {
//         D_800D154C->unk232 = D_800D1891;
//         D_800D154C->unk218 = func_1507BB28(0, D_800D154C->unk232, D_800D154C);
//         D_800D154C->unk218 -= 1;
//         return;
//     }
//
//     D_800D154C->unk78 = D_800CC2D0->unk31C->unk4C;
//
//     if (D_800CC2D0->unk31C->unk4A) {
//         phi_v1 = D_800CC2D0->unk44;
//     } else {
//         phi_v1 = D_800CC2D0->unk44 * D_8009A1E4;
//     }
//     if (phi_v1 < 17) {
//         D_800D1893 += 1;
//         D_800D1890 = 8;
//     }
//     D_800D1892 = phi_v1;
//     func_15075F40();
//     D_800D154C->unkF4 |= 0x40;
// }

// D_800D2104!
#pragma GLOBAL_ASM("asm/nonmatchings/game_A28B0/func_1507A100.s")

s32 func_1507A164(void) {
    s32 tmp = D_800CC30C[0] + (s8)D_800D1892;

    if (tmp < D_800D1891) {
        tmp = D_800D1891;
    } else if (tmp > D_800D1890) {
        tmp = D_800D1890;
    }
    D_800D154C->unk44 = tmp;
    if (D_800D154C->unk44 == 1.0f) {
        D_800D154C->unk44 = 0.5f;
    }
}

void func_1507A210(void) {
    D_800D154C->unk223 = 0;
    D_800D154C->unk21C = D_800D1890 * 0x64;
    D_800D154C->unk22C &= 0xFD;
    func_15075498();
}

void func_1507A270(void) {
    func_1503DE70(D_800D154C, D_800D1890, (s8)D_800D1891);
}

void func_1507A2A4(void) {
    D_800D1893 = (func_150ADA20() % (u32) D_800D1891) + D_800D1893;
    func_15075CA0();
}

void func_1507A2F8(void) {
    s32 i;
    u32 used;
    u8 sp1C[25];

    used = 0;
    for (i = 0; i < 25; i++) {
        if ((D_800CC2D0[i].unk0 != 0) && (D_800CC2D0[i].unk4 == D_800D1890)) {
            sp1C[used] = i;
            used++;
        }
    }
    if (used != 0) {
        i = func_150ADA20();
        D_800D154C->unkA8 = D_800D154C->unk222;
        D_800D154C->unk222 = sp1C[i % used];
    }
}

void func_1507A3B4(void) {
    D_800D154C->unk222 = D_800D154C->unkA8;
}

void func_1507A3CC(void) {
    D_800D154C->unk229 = D_800D1890;
}

//  what is up with these??
#pragma GLOBAL_ASM("asm/nonmatchings/game_A28B0/func_1507A3E8.s")
// s32 func_1507A3E8(void) {
//     return (D_800D1890 << 0x18) | (D_800D1891 << 0x10) | (D_800D1892 << 8) | D_800D1893;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/game_A28B0/func_1507A428.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_A28B0/func_1507A47C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_A28B0/func_1507A4D4.s")
// void func_1507A4D4(void) {
//     D_800D154C->unk94 |= (D_800D1890 << 0x18) | (D_800D1891 << 0x10) | (D_800D1892 << 8) | D_800D1893;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/game_A28B0/func_1507A528.s")
// NON-MATCHING: 99% there..
// void func_1507A528(void) {
//     s32 phi_a0;
//     s32 temp_a1;
//
//     if (D_800D1890 == 0) {
//         D_800D154C->unk221 = D_800D1891;
//     } else if (D_800D1890 == 1) {
//         D_800D154C->unk221 = -D_800D154C->unk221;
//     } else if (D_800D1890 == 2) {
//         if (D_800D1892 != 0) {
//             phi_a0 = D_800D1892;
//         } else {
//             phi_a0 = (u8)(D_800D2108 + D_800D154C->unk13F) - 1;
//         }
//         D_800D154C->unk221 = -D_800D154C->unk221;
//         temp_a1 = D_800D154C->unk21E + D_800D154C->unk221;
//         if (D_800D154C->unk221 > 0) {
//             temp_a1 += D_800D1893;
//         } else {
//             temp_a1 -= D_800D1893;
//         }
//         if (temp_a1 >= phi_a0) {
//             temp_a1 = temp_a1 - phi_a0;
//         } else {
//             if (temp_a1 < 0) {
//                 temp_a1 = temp_a1 + phi_a0;
//             }
//         }
//         D_800D154C->unk21E = temp_a1;
//     }
// }

void func_1507A620(void) {
    u8 idx;
    u16 tmp;

    idx = D_800D154C->unk222;
    if (D_800D1891 != 0) {
        tmp = D_800D154C->unk78 >> 8;
    } else {
        tmp = (D_800D154C->unk7A - func_1505A630(D_800CC2D0[idx].unk14 - D_800D154C->unk14, D_800D154C->unk1C - D_800CC2D0[idx].unk1C, 0)) >> 8;
    }
    if ((u8)(tmp - D_800D1892) < (u8)(D_800D1893 - D_800D1892)) {
        func_15075400(D_800D1890);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_A28B0/func_1507A6FC.s")
// NON-MATCHING: JUSTREG
// s32 func_1507A6FC(s32 arg0) {
//     return D_800C18B8[arg0 * 3];
// }

void func_1507A71C(void) {
    u16 tmp0 = func_1507A6FC(D_800D1890);
    u16 tmp1 = ((D_800D1891 << 8) | D_800D1892);

    if ((tmp0 & tmp1) == tmp1) {
        func_15075400(D_800D1893);
    }
}

void func_1507A774(void) {
    u16 temp_v0 = (D_800D1891 << 8) | D_800D1892;
    if (D_800BE9F0 == temp_v0) {
        func_15075400(D_800D1890);
    }
}

void func_1507A7C0(void) {
    D_800D154C->unk89 = (u8) D_800D1890;
}

void func_1507A7DC(void) {
    func_150836CC(D_800D154C, D_800D1890);
}

void func_1507A808(void) {
    D_800D154C->unk22C = (D_800D154C->unk22C & D_800D1890) | D_800D1891;
}

void func_1507A838(void) {
    if (D_800D154C->unk1CA == D_800D1891) {
        func_15075400(D_800D1890);
    }
}

void func_1507A878(void) {
    func_1512D748(0, D_800D1890, D_800D1891);
}

void func_1507A8A8(void) {
    if ((D_800CC335 != 0) || (D_800BE616 != 0)) {
        func_15075400(D_800D1890);
    }
}

void func_1507A8EC(void) {
    if (D_800D1891 == D_800CC2D4[D_800D154C->unk222 * sizeof(struct127)]) {
        D_800D1892 ^= 1;
    }
    if (D_800D1892 != 0) {
        func_15075400(D_800D1890);
    }
}

void func_1507A984(void) {
    s32 temp_v0;

    if (D_800D1890 != 0) {
        temp_v0 = func_15083E90(D_800D1890);
        if (temp_v0 != 0) {
            if (D_800D1892 == 0) {
                D_800D154C->unk101 |= 4;
            }
            if (D_800D1893 != 0) {
                D_800D154C->unk101 |= 0x40;
            }
            D_800D154C->unk65 = ((s32) (temp_v0 - (s32)&D_800CC2D0) / 0x32C) + 1;
            D_800D154C->unk5C = D_800D1891;
        }
    } else {
        D_800D154C->unk65 = 0;
    }
}

// requires jump table
#pragma GLOBAL_ASM("asm/nonmatchings/game_A28B0/func_1507AA48.s")

void func_1507ACB0(void) {
    D_800D154C->unk220 = D_800D1890;
    D_800D154C->unk21F = D_800D1891;
}

void func_1507ACE0(void) {
    D_800D154C->unk1E5 = D_800D1890;
    D_800D154C->unk1E6 = D_800D1890;
    D_800D154C->unk1E7 = D_800D1891;
    D_800D154C->unk1E8 = D_800D1891;
}

void func_1507AD30(void) {
    D_800D154C->unk255 = D_800D1890;
    D_800D154C->unk256 = D_800D1891;
}

void func_1507AD60(void) {
    D_800D154C->unk1E4 = D_800D1890;
}

void func_1507AD7C(void) {
    D_800D154C->unkF4 |= func_1507A3E8();
}

void func_1507ADAC(void) {
    D_800D154C->unkF4 &= ~func_1507A3E8();
}

void func_1507ADE0(void) {
    s32 res;
    s32 temp_lo;
    s32 b = D_800D154C->unk7A;
    s32 a = D_800D154C->unk78;

    res = a - b;
    if (res < 0) {
        res = -res;
    }
    if (res >= 32769) {
        res = res + 0xFFFF0000;
    }
    if (res < 0) {
        res = -res;
    }
    temp_lo = res / (s32)D_800D1890;
    D_800D154C->unk1E6 = temp_lo >> 8;
    D_800D154C->unk1E8 = temp_lo & 0xFF;
}

void func_1507AE78(void) {
    D_800D154C->unk229 = D_800D1890;
}

void func_1507AE94(void) {
    D_800D154C->unkD2 = (D_800D1890 << 8) | D_800D1891;
    D_800D154C->unkD4 = (D_800D1892 << 8) | D_800D1893;
    D_800D154C->unkD2 *= D_800D154C->unk14C;
    D_800D154C->unkD4 *= D_800D154C->unk150;
}

void func_1507AF3C(void) {
    D_800D154C->unkD6 = (D_800D1890 << 8) | D_800D1891;
    D_800D154C->unkD6 *= D_800D154C->unk150;
}

void func_1507AF98(void) {
    D_800D154C->unkD8 = (D_800D1890 << 8) | D_800D1891;
    D_800D154C->unkDA = (D_800D1892 << 8) | D_800D1893;
    D_800D154C->unkD8 *= D_800D154C->unk14C;
    D_800D154C->unkDA *= D_800D154C->unk14C;
}

void func_1507B040(void) {
    D_800D154C->unk76 = D_800D154C->unk7A;
}

void func_1507B058(void) {
    struct127 *sp24 = D_800D154C;
    s32 sp20 = D_800C3E78;

    D_800D154C = func_15072208(D_800D154C, 0);
    D_800C3E78 = ((s32)D_800D154C - (s32)&D_800CC2D0) / 0x32C;

    if (D_800D154C != 0) {
        switch (D_800D1890) {
            case 0:
                func_1506160C(D_800D154C, 1, D_800D1891, 0, 0);
                break;
            case 1:
                D_800D154C->unk232 = D_800D1891;
            case 2:
                D_800D154C->unk218 = func_1507BB28(0, D_800D1891);
                D_800D154C->unk21C = 0;
        }
    }
    D_800C3E78 = sp20;
    D_800D154C = sp24;
}

void func_1507B15C(void) {
    D_800D154C->unk8A = D_800D1890;
}

void func_1507B178(void) {
    s16 tmp  = (D_800D1891 << 8) | D_800D1890;
    if (D_800D1893 == 2) {
        D_800D154C->unkE8 = (s16) (tmp * D_800D154C->unk150);
    } else if (D_800D1893 == 1) {
        func_15062B50(D_800D154C, tmp);
    } else {
        func_15062B1C(D_800D154C, tmp);
    }
}

void func_1507B234(void) {
    D_800D1580 = func_1507A3E8();
    if (func_1506E46C(D_800D154C, &D_800D1580, 1) != 0) {
        func_1506BAD8(300, 1800);
    }
}

void func_1507B280(void) {
    D_800D1580 = func_1507A3E8();
    if (func_1506E46C(D_800D154C, &D_800D1580, 1) != 0) {
        func_1506BAD8(300, 3000);
    }
}

void func_1507B2CC(void) {
    D_800D1580 = func_1507A3E8();
    if (func_1506E46C(D_800D154C, &D_800D1580, 0) != 0) {
        func_1506BA4C(300, 1800);
    }
}

void func_1507B318(void) {
    D_800D1580 = func_1507A3E8();
    if (func_1506E46C(D_800D154C, &D_800D1580, 0) != 0) {
        func_1506BA4C(0x12C, 0xBB8);
    }
}

void func_1507B364(void) {
    D_800D1580 = func_1507A3E8();
    if (func_1506E46C(D_800D154C, &D_800D1580, 1) != 0) {
        func_1506BAD8(0x2BC, 0xFA0);
    }
}

void func_1507B3B0(void) {
    D_800D1580 = func_1507A3E8();
    if (func_1506E46C(D_800D154C, &D_800D1580, 0) != 0) {
        func_1506BA4C(0x2BC, 0xFA0);
    }
}

void func_1507B3FC(void) {
    D_800D1580 = func_1507A3E8();
    if (func_1506E46C(D_800D154C, &D_800D1580, 1) != 0) {
        func_1506BAD8(0xBB8, 0x1F40);
    }
}

void func_1507B448(void) {
    D_800D1580 = func_1507A3E8();
    if (func_1506E46C(D_800D154C, &D_800D1580, 1) != 0) {
        func_1506BAD8(0xBE, 0x514);
    }
}

void func_1507B494(void) {
    D_800D1580 = func_1507A3E8();
    if (func_1506E46C(D_800D154C, &D_800D1580, 0) != 0) {
        func_1506BA4C(0xBE, 0x514);
    }
}

void func_1507B4E0(void) {
    D_800D1580 = func_1507A3E8();
    if (func_1506E46C(D_800D154C, &D_800D1580, 1) != 0) {
        func_1506BAD8(100, 800);
    }
}

void func_1507B52C(void) {
    D_800D1580 = func_1507A3E8();
    if (func_1506E46C(D_800D154C, &D_800D1580, 0) != 0) {
        func_1506BA4C(100, 800);
    }
}

void func_1507B578(void) {
    D_800D154C->unkD0 = D_800D1890;
    D_800D154C->unk114 = D_800D1891;
}

void func_1507B5C4(void) {
    if (D_800D154C->unk31C->unk75 == D_800D1891) {
        D_800D1892 ^= 1;
    }
    if (D_800D1892 != 0) {
        func_15075400(D_800D1890);
    }
}

void func_1507B630(void) {
    if ((D_800D154C->unk89 == 0) && (D_800D154C->unk28 == 0.0f)) {
        if (D_800D154C->unk31C->unk78 != 0) {
            D_800D1890 ^= 1;
        }
        if (D_800D1890 != 0) {
            D_800D154C->unk31C->unk8C |= 0x4000;
            D_800D154C->unk31C->unk8F = 0;
        }
    } else {
        D_800D154C->unk218 -= 1;
    }
    D_800D154C->unk21C = 100;
}

void func_1507B6E0(void) {
    if ((D_800D154C->unk89 != 0) || (D_800D154C->unk28 > 5.0f)) {
        D_800D154C->unk218 -= 1;
        D_800D154C->unk21C = 0x64;
    }
}

void func_1507B734(void) {
    u16 tmp = ((D_800D1890 << 8) | D_800D1891);
    if (D_800D1893 != 0) {
        D_800D154C->unk31C->unk8C = tmp;
        D_800D154C->unk31C->unk8F = D_800D1892;
    } else {
        D_800D154C->unk31C->unk8A = tmp;
        D_800D154C->unk31C->unk8E = D_800D1892;
    }
}

void func_1507B7BC(void) {
    func_15075548();
    D_800D154C->unk223 = 17;
}

void func_1507B7E8(void) {
    struct127 *tmp = &D_800CC2D0[D_800D154C->unk222];
    if ((tmp->unk104 != 0) || (tmp->unk1CA == 0)) {
        D_800D1891 ^= 1;
    }
    if (D_800D1891 != 0) {
        func_15075400(D_800D1890);
    }
}

u8 func_1507B884(void) {
    s32 tmp0;
    s32 tmp1;
    u8 temp_v0;
    void (*func)(s32);

    temp_v0 = D_800D1890;
    func = D_80086150[temp_v0];
    if (func != 0) {
        tmp0 = D_800D154C;
        tmp1 = D_800C3E78;
        func(temp_v0);
        D_800D154C = tmp0;
        D_800C3E78 = tmp1;
    }
}

void func_1507B8F4(void) {

    if (D_800BE616 != 0) {
        if ((D_800D1891 != 0) || ((D_800D154C->unk31C != 0) && (D_800D154C->unk31C->unk84 != 0))) {
            func_15075400(D_800D1890);
        }
    }
}

void func_1507B958(void) {
    D_800D154C->unkB0 = D_800D1890;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_A28B0/func_1507B974.s")
// NON-MATCHING: dont think D_800D2104 is correct
// void func_1507B974(void) {
//     struct127 *phi_v1;
//     struct169 *foo;
//
//     phi_v1 = D_800D154C;
//     if (D_800D154C->unk65 != 0) {
//         phi_v1 = &D_800CC2D0[D_800D154C->unk65 - 1];
//     }
//     foo = &D_800D2104[phi_v1->unk13F + phi_v1->unk21E + D_800D1893];
//     if (D_800D1891 == foo->unk0) {
//         D_800D1892 ^= 1;
//     }
//     if (D_800D1892 != 0) {
//         func_15075400(D_800D1890);
//     }
// }

void func_1507BA48(void) {
    u16 tmp = ((D_800D1892 << 8) | D_800D1893);
    if (D_800D1890 != 0) {
        tmp += func_150ADA20() % (u32) D_800D1890;
    }
    func_15060A9C(tmp, D_800D154C);
}

void func_1507BAD0(void) {
    D_800D154C->unkFC = func_1507A3E8();
}

void func_1507BAF8(void) {
    D_800D154C->unk2CC = func_1507A3E8();
}

void func_1507BB20(void) {
}

// scary loops
#pragma GLOBAL_ASM("asm/nonmatchings/game_A28B0/func_1507BB28.s")

void func_1507BC14(struct127 *arg0) {

    if (arg0->unk21C != 0) {
        if (arg0->unk218 != 0) {
            if (arg0->unk21C != 25500) {
                arg0->unk21C = arg0->unk21C - D_800CC264;
            }
            if ((arg0->unk21C >= 50000) || (arg0->unk21C == 0)) {
                arg0->unk21C = 0;
                if ((arg0->unkF4 & 0x400) != 0) {
                    arg0->unk21C = 20000;
                    arg0->unkF4 &= ~0x400;
                    arg0->unkF4 |= 4;
                }
            } else {
                return;
            }
        }
    }

    if (arg0->unk218 == 0) {
        arg0->unk218 = func_1507BB28(0, arg0->unk232);
        arg0->unk21C = 0;
    }

    while (arg0->unk21C == 0) {
        if (arg0->unk218->unk0 >= 0xF7) {
            arg0->unk218 = (u8 *)(arg0->unk218) + 1;
        } else {
            D_800D1890 = arg0->unk218->unk1;
            D_800D1891 = arg0->unk218->unk2;
            D_800D1892 = arg0->unk218->unk3;
            D_800D1893 = arg0->unk218->unk4;
            D_80086730[arg0->unk218->unk0]();
            arg0->unk218 = (u8 *)(arg0->unk218) + 5;
        }
    }
}
