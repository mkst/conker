#include <ultra64.h>

#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_1506AD30.s")

void func_1506AF74(void) {
    if ((D_800D154C->unk100 & 8) != 0) {
        D_800D154C->unk100 |= 4;
    }
    D_800D154C->unk100 &= 0xF7;
    func_1505E650(D_800D154C, 0x38, 1.0f, 5.0f, 0.0f, 0.0f, 0);
}

void func_1506AFE0(void) {
    func_1505E650(D_800D154C, 0x48, 1.0f, 5.0f, 0.0f, 0.0f, 0);
}

void func_1506B020(void) {
    D_800D154C->unk1CB = (u8)1;
    func_1505E650(D_800D154C, 0x39, 1.0f, 5.0f, 0.0f, 0.0f, 0);
}

void func_1506B070(void) {
}

void func_1506B078(void) {
    f32 tmp = (D_800D154C->y_position - (D_800D154C->unk118 - 150.0f)) * D_80099C34;

    if (tmp < 0.0f) {
        tmp = 1.0f;
    } else {
        tmp +=  1.0f;
    }
    func_1506B100(0xD1, tmp, 4.0f);
}

// triggered when entering water?
void func_1506B100(s32 arg0, f32 arg1, f32 arg2) {
    func_1505E650(D_800D154C, arg0, arg1, arg2, 0.0f, 0.0f, 0);
}

void func_1506B14C(void) {
    func_1505E650(D_800D154C, D_800D154C->unk84.uh + 1, D_800D154C->animation_speed, 3.0f, 0.0f, 0.0f, 0);
}

void func_1506B198(void) {
    func_1505E650(D_800D154C, D_800D154C->unk84.uh + 1, D_800D154C->animation_speed, 3.0f, 0.0f, 0.0f, 1);
}

void func_1506B1E8(void) {
    func_1505E650(D_800D154C, 0x3C, 1.0f, 3.0f, 0.0f, 0.0f, 0);
}

void func_1506B228(void) {
    func_1505E650(D_800D154C, 0x54, 1.0f, 3.0f, 0.0f, 0.0f, 0);
}

void func_1506B268(void) {
    D_800D154C->unk83 = 0;
    D_800D154C->disable_run = 0;
    func_1505E650(D_800D154C, 0xF, 1.0f, 6.0f, 0.0f, 0.0f, 0);
}

void func_1506B2BC(void) {
    s32 temp_v0 = func_150721E8(D_800D154C);
    if ((temp_v0 != 0) && ((((temp_v0 - (s32)&D_800CC2D0) / 0x32C) + 1) == D_800CC2D0[0].unk274)) {
        D_800D154C->unk218 = 0;
        D_800D154C->unk232 = (u8)4;
    }
}

void func_1506B328(void) {
    func_1505E650(D_800D154C, 0x3E, 1.0f, 5.0f, 0.0f, 0.0f, 0);
}

void func_1506B368(void) {
}

void func_1506B370(void) {
    // return index of D_800D154C in structs array
    func_1507D4F8(((s32)D_800D154C - (s32)&D_800CC2D0) / (s32)sizeof(struct127));
}

void func_1506B3B0(void) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_1506B3B8.s")
// NON-MATCHING: 5% there...
// void func_1506B3B8(void) {
//     u8 sp19;
//     s16 temp_t0;
//     s32 temp_a3;
//     s32 temp_v0;
//     s32 temp_v1;
//     struct127 *temp_a1;
//     struct127 *temp_a1_2;
//     s32 phi_a2;
//     s32 phi_a0;
//     u8 phi_a0_2;
//
//     temp_a1 = D_800D154C;
//     sp19 = 0;
//     temp_a1_2 = D_800D154C;
//     temp_t0 = (temp_a1_2->unk7A + (temp_a1_2->unk1FD << 8)) - func_1505A630(D_800CC2D0[0].x_position - temp_a1->x_position, temp_a1->z_position - D_800CC2D0[0].z_position, temp_a1, 0);
//     temp_v1 = (s32) temp_t0 >> 8;
//     temp_a3 = temp_v1 & 0xFF;
//     phi_a2 = temp_v1 & 0xFF;
//     if ((temp_a3 & 0x80) != 0) {
//         phi_a2 = -temp_a3 & 0xFF;
//     }
//     temp_v0 = phi_a2;
//     if (phi_a2 < (s32) D_80099A3C) {
//         phi_a0 = 1;
//     } else {
//         if ((s32) D_80099A43 < temp_v0) {
//             phi_a0_2 = (u8)5U;
//         } else {
//             phi_a0_2 = sp19;
//             if ((s32) D_80099A3E < temp_v0) {
//                 phi_a0_2 = (u8)2U;
//             }
//         }
//         if ((s32) temp_t0 < 0) {
//             phi_a0 = (phi_a0_2 + 4) & 0xFF;
//         } else {
//             phi_a0 = (phi_a0_2 + 3) & 0xFF;
//         }
//     }
//     temp_a1_2->unk138 = (u8)0;
//     D_800D154C->unk244 = (s16) D_80099A3C[phi_a0]; // + 0x800A0000)->unk-65C4;
//     D_800D154C->unk21C = (u16)0x4E20;
// }

void func_1506B4EC(void) {
    func_1506B3B8();
}

void func_1506B50C(void) {
    D_800D154C->unk21C = (u16)0;
}

void func_1506B520(void) {
    s32 tmp;

    if (D_800D154C->health != 0) {
        if ((D_800D154C->unk31C != 0) && (D_800D154C->unk31C->unk78 == 0x25)) {
            tmp = 427;
        } else {
            tmp = 240;
        }
        func_1505E650(D_800D154C, tmp, 1.5f, 3.0f, 0.0f, 0.0f, 0);
    } else {
        func_1507CD64(D_800D154C, 1);
    }
}

void func_1506B5A4(void) {
}

void func_1506B5AC(void) {
}

void func_1506B5B4(void) {
    D_800D154C->unk1CB = (u8)1;
}

void func_1506B5CC(void) {
    D_800D154C->unk1CB = (u8)1;
}

void func_1506B5E4(void) {
    func_1506160C(D_800D154C, 2, 7, 8, 0);
    D_800D154C->animation_speed = 0.0f;
    D_800D154C->unk2D0->unk10 = 0.0f;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_1506B634.s")
// NON-MATCHING: miles away
// void func_1506B634(u8 arg0) {
//     s32 temp_a0;
//     u32 temp_hi;
//     struct126 *temp_a1;
//     s32 phi_a0;
//     s32 phi_a0_2;
//
//     temp_hi = func_150ADA20() % (u32) arg0;
//     temp_a0 = temp_hi & 0xFF;
//     temp_a1 = D_800D154C->unk31C;
//     if (temp_a1->unk16 != 0) {
//         phi_a0 = temp_a0;
//         if (D_800BE9F0 == 0x29) {
//             phi_a0 = temp_a0;
//             if ((temp_hi & 0xFF) == 7) {
//                 phi_a0 = 0;
//             }
//         }
//         temp_a1->unkE = (s16) D_80099ABC[phi_a0]; // + 0x800A0000)->unk-6544;
//         phi_a0_2 = phi_a0;
//     } else {
//         temp_a1->unkE = (s16) D_80099AB4[(temp_hi & 0xFF)]; // + 0x800A0000)->unk-654C;
//         phi_a0_2 = temp_a0;
//     }
//     if (D_800D154C->unk31C->unkE == 0xA7) {
//         D_800D1580 = 0xFF020144; // 4278321476
//         D_800D154C->unk31C->unkC = (func_150ADA20(phi_a0_2, temp_a1, &D_800D154C) % 3U) + 2;
//         func_1506E8D8();
//         D_800D154C->xz_velocity = (f32) (D_800D154C->xz_velocity * D_80099C38);
//     }
// }

void func_1506B740(void) {
    u8 res = func_150ADA20() & 0xFF;

    if ((D_80099C3C != D_800D154C->unk118) && (D_800D154C->y_position < D_800D154C->unk118)) {
        D_800D154C->unk31C->unkE = 0x2D0;
    } else {
        if (D_800D154C->unk84.uh == 0xA7) {
            if (D_800D154C->unk31C->unkC == 0) {
                res = 0;
            } else {
                D_800D154C->unk31C->unkC--;
                res = 0xFF;
            }
        }
        if (res < 0x80) {
            func_1506B634(8);
        }
    }
}

void func_1506B7F4(void) {
    D_800D154C->disable_run = 0;
    D_800D154C->unk83 = 0;
    func_1506B634(2);
}

void func_1506B82C(void) {
    D_800D154C->disable_run = 0;
    D_800D154C->unk83 = 0;
    func_1507F640();
}

void func_1506B860(void) {
    func_1506B100(181, 0.6299999952316284f, 5.0f);
}

void func_1506B88C(void) {
    func_1506B100(182, 1.0f, 4.0f);
}

void func_1506B8B4(void) {
    D_800D154C->unk31C->unk78 = (u8)0;
    D_800D154C->disable_run = (u8)0;
    D_800D154C->unk83 = (u8)0;
    func_1507F640();
}

void func_1506B8F4(void) {
    func_1506B100(222, 0.75f, 4.0f);
}

void func_1506B91C(void) {
    func_1506B100(191, 1.0f, 4.0f);
}

void func_1506B944(void) {
    D_800D154C->disable_run = (u8)0;
    D_800D154C->unk83 = (u8)0;
    func_1506B100(0xC5, 1.0f, 4.0f);
}

void func_1506B984(void) {
    func_1506B100(0xAF, 1.0f, 4.0f);
}

void func_1506B9AC(void) {
    D_800D154C->unk244 = (u16)0;
}

void func_1506B9C0(void) {
    struct127 *temp_a0;

    D_800BE720[D_800C3E78] |= 0x4000;
    temp_a0 = D_800D154C->unk31C;
    if (temp_a0 != 0) {
        temp_a0->unk78_u8 = 0;
        D_800D2E60[(D_800D1940 >> 3)] |=  (1 << (D_800D1940 & 7));
    }
    func_1507F640(temp_a0);
}

void func_1506BA4C(s32 arg0, s32 arg1) {
    if (D_800D1580 == 0) {
        func_100109D0(D_800D154C);
    } else {
        if (D_800D154C->camera == 0) {
            func_10010154(D_800D1580, D_800D154C, 28000, arg0, arg1);
        } else {
            func_10010154(D_800D1580, D_800D154C, 24000, 500, 2500);
        }
    }
}

void func_1506BAD8(s32 arg0, s32 arg1) {
    if (D_800D1580 == 0) {
        func_10010A3C(D_800D154C);
    } else {
        if (D_800D154C->camera == 0) {
            func_10010344(D_800D1580, D_800D154C, 28000, arg0, arg1);
        } else {
            func_10010344(D_800D1580, D_800D154C, 24000, 500, 2500);
        }
    }
}

void func_1506BB64(s32 arg0, s32 arg1) {
    func_10012718(D_800D1582, D_800D154C, 28000, arg0, arg1);
}

void func_1506BBA8(s32 arg0, s32 arg1) {
    if (D_800D154C->camera == 0) {
        func_10010154(D_800D1582, D_800D154C, 14000, arg0, arg1);
    } else {
        func_10010154(D_800D1582, D_800D154C, 12000, 500, 2500);
    }
}

void func_1506BC24(s32 arg0, s32 arg1) {
    if (D_800D154C->camera == 0) {
        func_10010344(D_800D1582, D_800D154C, 0x36B0, arg0, arg1);
    } else {
        func_10010344(D_800D1582, D_800D154C, 0x2EE0, 0x1F4, 0x9C4);
    }
}

void func_1506BCA0(void) {
    D_800D154C->y_velocity = D_800D1580;
}

// ???
#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_1506BCC8.s")

void func_1506BDE8(void) {
    if (D_800D154C->y_position < D_80099C40) {
        D_800D154C->y_velocity = (f32) D_800D1580;
    }
}

void func_1506BE2C(void) {
    D_800D154C->gravity = D_800D1580;
}

void func_1506BE54(void) {
    D_800D154C->gravity = D_800D1580 * D_80099C44;
}

void func_1506BE84(void) {
    D_800D154C->disable_run = 0;
}

void func_1506BE98(void) {
    D_800D154C->target_speed = D_800D1580;
}

void func_1506BEC0(void) {
    D_800D154C->disable_run = D_800D1580;
}

void func_1506BEDC(void) {
    D_800D154C->unkD0 = D_800D1580;
    D_800D154C->unk114 = (f32) ((s32) D_800D1580 >> 8);
}

void func_1506BF1C(void) {
    if (D_800D154C->unk118 <= D_800D154C->y_position) {
        func_1506BF5C();
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_1506BF5C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_1506C32C.s")

void func_1506C418(void) {
    func_10010A3C(D_800D154C);
}

void func_1506C43C(void) {
    func_100109D0(D_800D154C);
}

// requires jump table
#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_1506C460.s")
// requires jump table
#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_1506CE6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_1506D2E8.s")
// NON-MATCHING: plenty to figure out here
// void func_1506D2E8(void) {
//     f32 sp40;
//     f32 sp3C;
//     f32 sp38;
//     f32 sp2C;
//     u16 temp_v0_2;
//     struct127 *temp_s0;
//     f32 phi_f0;
//
//     temp_s0 = func_1505EEF4(func_15083E0C(D_800D1580 & 0xFF));
//     if (temp_s0 != NULL) {
//         sp2C = 0.0f;
//         func_151A3390(temp_s0, 0xFF);
//         phi_f0 = 0.0f;
//         if ((D_800D1580 & 0xFF00) != 0) {
//             phi_f0 = D_800D154C->camera->unk780 - 15.0f;
//         }
//         temp_v0_2 = D_800D154C->unk7A;
//         temp_s0->unk78 = temp_v0_2;
//         temp_s0->unk7A = temp_v0_2;
//         temp_s0->unk76 = temp_v0_2;
//         func_1505A184(temp_v0_2, 5000.0f, phi_f0, &sp40, &sp3C, &sp38);
//         D_800D2104[temp_s0->unk13F]->unk8 = (s16) (s32) (D_800D154C->x_position + sp40);
//         D_800D2104[temp_s0->unk13F]->unkC = (s16) (s32) (D_800D154C->z_position + sp3C);
//         D_800D2104[temp_s0->unk13F]->unkA = (s16) (s32) (D_800D154C->y_position + sp38);
//         temp_s0->unk65 = (u8)0;
//         temp_s0->unk218 = 0;
//         if ((D_800D1580 & 0xFF00) != 0) {
//             temp_s0->unk232 = (u8)4;
//             temp_s0->unk14C = 0.25f;
//             temp_s0->unk150 = 0.25f;
//             temp_s0->y_position = (f32) (D_800D154C->y_position + 70.0f);
//         } else {
//             temp_s0->unk232 = (u8)2;
//             temp_s0->xz_velocity = -15.0f;
//             temp_s0->y_velocity = 34.0f;
//             temp_s0->unk14C = 0.5f;
//             temp_s0->unk150 = 0.5f;
//             temp_s0->gravity = (f32) D_80099D44;
//         }
//     }
// }

void func_1506D4EC(void) {
}

void func_1506D4F4(void) {
    func_1505E650(D_800D154C, D_800D154C->unk84.uh, 0.009999999776482582f, 0.0f, 0.0f, 0.0f, 0);
}

void func_1506D538(void) {
    if (D_800C35EA != 1) {
        func_1507D4F8(D_800C3E78);
    }
}

void func_1506D570(void) {
    D_800D154C->unk6E = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_1506D584.s")
// ???
#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_1506D6B4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_1506D74C.s")

void func_1506D898(void) {
    D_800D154C->y_position -= 80.0f;
    func_1505E650(D_800D154C, 663, 1.0f, 0.0f, 0.0f, 0.0f, 0);
    D_800D154C->unk100 &= 0xFFDF;
    D_800D154C->unk83 = 0;
    D_800D154C->disable_run = 0;
    D_800D154C->unk31C->unk97 = 0;
    D_800D154C->unk31C->unk44 = 12;
}

void func_1506D934(void) {
    D_800D154C->unk103 = D_800D1580;
}

void func_1506D950(void) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_1506D958.s")

void func_1506DA78(void) {
    D_800D154C->immune = D_800D1580;
}

void func_1506DA94(void) {
    if (D_800D1580 != 0) {
        if ((D_800D154C->unk44 > 20.0f) && (D_800D154C->xz_velocity > 20.0f)) {
            D_800D154C->unk83 = (u8)0;
        }
    }
    func_15174690(D_800C3E78, 0, 24, 0, 409, 4, 170, 0xFF, 0);
}

void func_1506DB30(void) {
    D_800D1890 = (s8) D_800D1580;
    func_15076760();
}

void func_1506DB5C(void) {
    D_800D154C->xz_velocity = (f32) D_800D1580;
}

void func_1506DB84(void) {
    D_800D154C->unk239 = (s8) D_800D1580;
}

void func_1506DBA0(void) {
    D_800D154C->unk1E5 = D_800D1580 & 0xff;
    D_800D154C->unk1E6 = (D_800D1580 >> 8) & 0xff;
}

void func_1506DBD4(void) {
    s32 temp_v0 = func_15072208(D_800D154C, 0);
    if (temp_v0 != 0) {
        func_15054A5C(temp_v0, D_800D154C);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_1506DC10.s")

void func_1506DCA4(void) {
    D_800D154C->unk2E8 = D_800D1580;
}

void func_1506DCC0(void) {
    D_800D154C->unk2EC = (s32) D_800D1580;
}

void func_1506DCDC(void) {
    D_800D154C->health = (s8) D_800D1580;
}

void func_1506DCF8(void) {
}

void func_1506DD00(void) {
    struct127 *temp_v1;

    if (D_800D1580 == 0) {
        temp_v1 = D_800D154C;
        temp_v1->unkF8 = (s32) temp_v1->unk144->unk18;
    } else {
        temp_v1 = D_800D154C;
        temp_v1->unkF8 |= D_800D1580;
    }
}

void func_1506DD44(void) {
    D_800D154C->unkF8 &= ~D_800D1580;
}

void func_1506DD6C(void) {
    if (D_800D154C->unk31C != 0) {
        D_800D154C->unk31C->matrix_physics = D_800D1580 & 0x7F;
    }
    if (D_800D1580 == 0) {
        D_800D154C->unk76 = D_800D154C->unk7A;
    }
}

void func_1506DDB8(void) {
}

void func_1506DDC0(void) {
    if (func_15178E50(D_800BE9F0) != 0) {
        func_1516EED4(D_800C3E78, D_800D1580, 0xFF, 0);
    }
}

void func_1506DE04(void) {
    s32 i;
    for(i = 0; i < 2; i++) {
        func_15174690(D_800C3E78, 10, 18, 12, 0x199, 4, 0xAA, 0xFF, 0);
    }
}

// jump table
#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_1506DE84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_1506E0EC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_1506E2CC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_1506E46C.s")

void func_1506E5FC(void) {
    if (func_1506E46C(D_800D154C, &D_800D1580, 0) != 0) {
        func_1506BA4C(300, 1800);
    }
}

void func_1506E63C(void) {
    if (func_1506E46C(D_800D154C, &D_800D1580, 0) != 0) {
        func_1506BA4C(100, 800);
    }
}

void func_1506E67C(void) {
    if (func_1506E46C(D_800D154C, &D_800D1580, 0) != 0) {
        func_1506BA4C(190, 1300);
    }
}

void func_1506E6BC(void) {
    if (func_1506E46C(D_800D154C, &D_800D1580, 0) != 0) {
        func_1506BA4C(300, 3000);
    }
}

void func_1506E6FC(void) {
    if (func_1506E46C(D_800D154C, &D_800D1580, 0) != 0) {
        func_1506BA4C(700, 4000);
    }
}

void func_1506E73C(void) {
    if (func_1506E46C(D_800D154C, &D_800D1580, 0) != 0) {
        func_1506BA4C(3000, 8000);
    }
}

void func_1506E77C(void) {
    if (func_1506E46C(D_800D154C, &D_800D1580, 0) != 0) {
        func_1506BBA8(300, 1800);
    }
}

void func_1506E7BC(void) {
    if (func_1506E46C(D_800D154C, &D_800D1580, 0) != 0) {
        func_1506BBA8(300, 3000);
    }
}

void func_1506E7FC(void) {
    if (D_800D154C->unk28 == 0.0f) {
        if (D_800D154C->unk107 == 0) {
            func_1506E5FC();
        }
    }
}

void func_1506E848(void) {
    if ((func_1506E46C(D_800D154C, &D_800D1580, 0) != 0) && (func_1000F4D8((u16)D_800D1582) == 0)) {
        func_1506BA4C(0x50, 800);
    }
}

void func_1506E898(void) {
    if (func_1506E46C(D_800D154C, &D_800D1580, 2) != 0) {
        func_1506BB64(300, 1800);
    }
}

void func_1506E8D8(void) {
    if (func_1506E46C(D_800D154C, &D_800D1580, 1) != 0) {
        func_1506BAD8(300, 1800);
    }
}

void func_1506E918(void) {
    if (func_1506E46C(D_800D154C, &D_800D1580, 1) != 0) {
        func_1506BAD8(100, 800);
    }
}

void func_1506E958(void) {
    if (func_1506E46C(D_800D154C, &D_800D1580, 1) != 0) {
        func_1506BAD8(190, 1300);
    }
}

void func_1506E998(void) {
    if (func_1506E46C(D_800D154C, &D_800D1580, 1) != 0) {
        func_1506BAD8(300, 3000);
    }
}

void func_1506E9D8(void) {
    if (func_1506E46C(D_800D154C, &D_800D1580, 1) != 0) {
        func_1506BAD8(700, 4000);
    }
}

void func_1506EA18(void) {
    if (func_1506E46C(D_800D154C, &D_800D1580, 1) != 0) {
        func_1506BAD8(3000, 8000);
    }
}

void func_1506EA58(void) {
    if (func_1506E46C(D_800D154C, &D_800D1580, 1) != 0) {
        func_1506BC24(300, 3000);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_1506EA98.s")
// NON-MATCHING: needs some love
// void func_1506EA98(void) {
//     u8 sp27;
//     struct127 *sp18;
//     u8 temp_t6;
//     u8 temp_v0;
//     struct127 *temp_a1;
//     struct127 *temp_v1;
//     struct127 *phi_v1;
//
//     temp_v1 = D_800D154C;
//     temp_v0 = temp_v1->unk13C;
//     temp_t6 = (temp_v0 - 0x64) & 0xFF;
//     if (temp_v0 != 0) {
//         temp_a1 = &D_800CC2D0[temp_t6];
//         phi_v1 = temp_v1;
//         if ((s32) temp_a1->unk13D >= 0x64) {
//             temp_a1->unk13D = (u8)0U;
//             temp_a1->xz_velocity = 18.0f;
//             temp_a1->y_velocity = 40.0f;
//             temp_a1->gravity = 6.0f;
//             temp_a1->unk65 = (u8)0;
//             temp_a1->unk76 = (u16) temp_v1->unk7A;
//             if (temp_a1->id  == 0x20) {
//                 temp_a1->y_velocity = 0.0f;
//                 temp_a1->unkF8 |= 0x200;
//                 temp_a1->gravity = 0.0f;
//                 temp_a1->xz_velocity = 0.0f;
//             }
//             temp_a1->stunned = (u8)0xFE;
//             temp_a1->unk105 = (u8)0;
//             sp18 = temp_a1;
//             sp27 = temp_t6;
//             temp_a1->unk106 = func_1505E7CC(0xC, temp_a1, temp_t6);
//             temp_a1->unk84 = (u16)0xFFFF;
//             temp_a1->unk1CC = (f32) D_80099DA0;
//             func_1505E874(sp27, temp_a1);
//             temp_a1->unk25C |= 0x40;
//             phi_v1 = D_800D154C;
//         }
//         phi_v1->unk13C = (u8)0;
//     }
// }

void func_1506EBC0(void) {
    u8 temp_v0 = (u8)(D_800D154C->unk13C - 100);

    if (D_800D154C->unk13C) {
        if ((s32) D_800CC2D0[temp_v0].unk13D >= 0x64) {
            D_800CC2D0[temp_v0].unk65 = 0;
            D_800CC2D0[temp_v0].unk13D = (u8)0U;
            D_800CC2D0[temp_v0].xz_velocity = 0.0f;
            D_800CC2D0[temp_v0].y_velocity = 0.0f;
            D_800CC2D0[temp_v0].gravity = 6.0f;
            D_800CC2D0[temp_v0].unk1CC = D_80099DA4; // 1000000.0
        }
        D_800D154C->unk13C = 0U;
    }
}

void func_1506EC50(void) {
    if (D_80099DA8 < D_800D154C->unk28) {
        if (((D_800D1580 & 0x8000) == 0) || (D_800CC2E8[0] < D_800D154C->y_position)) {
            D_800D1878 = D_800D1580 & 0xFF;
            D_800D1880 = 0;
            D_800D154C->unk138 -= 1;
        }
    }
}

void func_1506ECD0(void) {
    D_800D154C->unk2D0->unk4 |= 0x8000;
}

void func_1506ECF0(void) {
    D_800D154C->unk3A = (s8) D_800D1580;
}

void func_1506ED0C(void) {
    D_800D154C->unk83 = (s8) D_800D1580;
    D_800D154C->unk100 |= 0x10;
    D_800D154C->unk31C->unk31 = (u8)1;
}

void func_1506ED4C(void) {
    D_800D154C->unk100 = (s8) D_800D1580;
}

void func_1506ED68(void) {
    D_800D154C->unkA9 = (u8)5;
    D_800D154C->unk31C->unk31 = (u8)0;
}

void func_1506ED90(void) {
    D_800D154C->unk21C = (s16) D_800D1580;
}

void func_1506EDAC(void) {
    D_800D154C->unkF4 = (s32) D_800D1580;
}

void func_1506EDC8(void) {
    D_800D154C->unkF4 &= ~D_800D1580;
}

void func_1506EDF0(void) {
    D_800D154C->unkF4 |= D_800D1580;
}

void func_1506EE14(void) {
    D_800D154C->unk25C |= D_800D1580;
}

void func_1506EE38(void) {
    D_800D154C->unk25C &= ~D_800D1580;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_1506EE60.s")
// NON-MATCHING: same issue as earlier
// void func_1506EE60(void) {
//     s32 temp_a1;
//     s32 temp_v0;
//
//     temp_v0 = D_800D1580;
//     temp_a1 = temp_v0 & 0xFFFF;
//     if (temp_v0 != 0) {
//         func_15188810(D_800D154C.unk0, temp_a1, temp_v0 >> 0x10);
//         return;
//     }
//     func_15188A9C(D_800D154C.unk154C, temp_a1);
// }

void func_1506EEAC(void) {
    func_151898C0(D_800D154C, D_800D1580);
}

void func_1506EED8(void) {
    D_800D154C->unk24E = (s8) D_800D1580;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_1506EEF4.s")
// NON-MATCHING: JUSTREG
// void func_1506EEF4(void) {
//     D_800D154C->unk276 = D_800D1580 >> 16;
//     D_800D154C->unk278 = (D_800D1580 >> 24) & 0xFF;
//     D_800D154C->unk282 = D_800D1580;
//     D_800D154C->unk284 = 0;
//     D_800D154C->unk285 = 0;
//     D_800D154C->unk286 = 0;
//     D_800D154C->unk287 = 0;
// }

// TBD whats goins on here
#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_1506EF5C.s")

void func_1506EFB4(void) {
    D_800D154C->unk282 = (u16)0;
}

void func_1506EFC8(s32 arg0) {
    if (D_800D154C->id != 0x8C) {
        func_150BB760(D_800D154C);
    }
}

void func_1506F004(s32 arg0) {
    func_150BCBBC(D_800D154C);
}

void func_1506F02C(s32 arg0) {
    func_150BA4C0(D_800D154C, 0xFF, 0);
}

void func_1506F05C(s32 arg0) {
    func_151925C4(D_800D154C, 0x32, 0xFF, 1);
}

void func_1506F090(s32 arg0) {
    func_151925C4(D_800D154C, -1, 0xFF, 1);
}

void func_1506F0C4(s32 arg0) {
    func_150C1260(D_800D154C, 0);
}

void func_1506F0F0(s32 arg0) {
    func_150C1260(D_800D154C, 1);
}

void func_1506F11C(s32 arg0) {
    func_150BABE0(D_800D154C, 0, 0xFF);
}

void func_1506F14C(s32 arg0) {
    func_150BABE0(D_800D154C, 1, 0xFF);
}

void func_1506F17C(s32 arg0) {
    func_150AEEB0(D_800D154C, 0xFF);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_1506F1A8.s")

void func_1506F524(s32 arg0) {
    func_15197A7C(D_800D154C);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_1506F54C.s")

void func_1506F8C0(s32 arg0) {
    func_1519EF70(D_800D154C, 0, 0);
}

void func_1506F8F0(s32 arg0) {
    struct127* a0;
    func_150E2EA4(a0 = D_800D154C, a0->unique_id, 0x14, -1, 482.0f, -127.0f, -45.0f, D_80099E98, -211.0f, -114.0f, 3, 3, 5, 20.0f, (func_150ADA68() * 10.0f) + 40.0f, 0, 0.0f);
}

void func_1506F9C0(s32 arg0) {
    struct127* a0;
    func_150E2EA4(a0 = D_800D154C, a0->unique_id, 0x14, -1, 241.0f, -127.0f, -45.0f, 418.0f, -211.0f, -114.0f, 3, 3, 5, 20.0f, (func_150ADA68() * 10.0f) + 40.0f, 0, 0.0f);
}

void func_1506FA90(s32 arg0) {
    struct127* a0;
    func_150E2EA4(a0 = D_800D154C, a0->unique_id, 0x1A, -1, -181.0f, -218.0f, -1.0f, D_80099E9C, -584.0f, -2.0f, 3, 3, 5, 20.0f, (func_150ADA68() * 10.0f) + 40.0f, 0, 0.0f);
}

void func_1506FB60(s32 arg0) {
    if (func_151044F4() != 0) {
        func_151C6A28(D_800D154C, (arg0 - 0x13) & 0xFF, 0xFF, 0);
    } else {
        func_151C62D0(D_800D154C, (arg0 - 0x13) & 0xFF, 0, 0, -1, 0xFF, 0);
    }
}

void func_1506FBE8(s32 arg0) {
    func_151A0A10(D_800D154C, 0x46, 0xFF, 0);
}

void func_1506FC1C(s32 arg0) {
    func_151A0A10(D_800D154C, 0x28, 0xFF, 0);
}

void func_1506FC50(s32 arg0) {
    func_1519E688();
}

void func_1506FC74(s32 arg0) {
    func_1519E6BC(D_800D154C);
}

void func_1506FC9C(s32 arg0) {
    func_150B3AB0(D_800D154C, 0xFF);
}

void func_1506FCC8(s32 arg0) {
    func_15196438(D_800D154C, 6, 0xFF, 0);
}

void func_1506FCFC(s32 arg0) {
    func_15196438(D_800D154C, 5, 0xFF, 0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_1506FD30.s")

void func_1506FDF0(s32 arg0) {
    func_151AABC4(D_800D154C, 0);
}

void func_1506FE1C(s32 arg0) {
    func_151AABC4(D_800D154C, 1);
}

void func_1506FE48(s32 arg0) {
    func_151AABC4(D_800D154C, 0);
}

void func_1506FE74(s32 arg0) {
    func_151AABC4(D_800D154C, 1);
}

void func_1506FEA0(s32 arg0) {
    func_151AABC4(D_800D154C, 2);
}

void func_1506FECC(s32 arg0) {
    func_151AABC4(D_800D154C, 3);
}

void func_1506FEF8(s32 arg0) {
    func_151AB920(D_800D154C, 0);
}

void func_1506FF24(s32 arg0) {
    func_151AB920(D_800D154C, 1);
}

void func_1506FF50(s32 arg0) {
    func_151AB930(D_800D154C);
}

void func_1506FF78(s32 arg0) {
    func_150CBF80(D_800D154C, 0, 1, 0xFF);
}

void func_1506FFAC(s32 arg0) {
    func_150CBF80(D_800D154C, 1, 1, 0xFF);
}

void func_1506FFE0(s32 arg0) {
    func_150CBF80(D_800D154C, 2, 1, 0xFF);
}

void func_15070014(s32 arg0) {
    func_150CA150(D_800D154C);
}

void func_1507003C(s32 arg0) {
    func_151B01B8(D_800D154C, 0);
    func_151B09BC(D_800D154C, 0, 0x3E8, 0xFF, 0);
}

void func_15070084(s32 arg0) {
    func_151AECA0(D_800D154C, 0xFF, 1);
}

void func_150700B4(s32 arg0) {
    func_151B03B8(D_800D154C, 0xFF, 1);
}

void func_150700E4(s32 arg0) {
    func_15193660(D_800D154C, 0xFF, 1);
}

void func_15070114(s32 arg0) {
    func_151937F4(D_800D154C, 0xFF, 1);
}

void func_15070144(s32 arg0) {
    struct198 tmp;
    s32 tmp0;

    tmp.unk0 = 1;
    tmp.unk8 = 0;
    tmp.unkC = 0;
    tmp.unk4 = D_800D154C;

    if (D_800BE9F0 == 0x2B) {
        tmp0 = 3;
    } else {
        tmp0 = 0;
    }
    func_151C0698(D_800D154C, 0, &tmp, tmp0 & 0xFF, 0xFF, 1);
    func_151C1FB8(D_800D154C);
}

void func_150701C4(s32 arg0) {
    func_151C5280(D_800D154C, 0xFF, 1);
}

void func_150701F4(s32 arg0) {
    func_151C9740(D_800D154C, 0xFF, 1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_15070224.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_15070300.s")

void func_15070690(s32 arg0) {
    func_150EEE00(D_800D154C, (arg0 - 0x3E) & 0xFF, arg0);
}

void func_150706C4(s32 arg0) {
    func_150EEF40(D_800D154C, (arg0 - 0x3E) & 0xFF, arg0);
}

void func_150706F8(s32 arg0) {
    if ((D_800D154C->unk94 & 0x10) == 0) {
        func_150F03F8(D_800D154C, 0, 0xFF, 1);
    }
    if ((D_800D154C->unk94 & 8) == 0) {
        func_150F03F8(D_800D154C, 1, 0xFF, 1);
    }
}

void func_15070760(s32 arg0) {
    func_150EBEC0(D_800D154C, 0, 0xFF, 1);
}

void func_15070794(s32 arg0) {
    func_150EBEC0(D_800D154C, 1, 0xFF, 1);
}

void func_150707C8(s32 arg0) {
    func_150FDDA0(D_800D154C, 0xFF, 1);
}

void func_150707F8(s32 arg0) {
    func_150FDF38(D_800D154C, 0xFF, 1, 0, 0);
}

void func_15070830(s32 arg0) {
    func_150FE320(D_800D154C, 0xFF, 1);
}

void func_15070860(s32 arg0) {
    func_150FE49C(D_800D154C, 0xFF, 1, 0, 0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_15070898.s")

void func_15070C18(s32 arg0) {
    func_15199834(D_800D154C);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_15070C40.s")
// NON-MATCHING: missing a move and a branch
// void func_15103E40(s32, s32, s32, u8, u8, u8, u8);
// void func_15070C40(u8 arg0) {
//     struct17 tmp;
//     struct127 *temp_a1;
//     struct127 *phi_a0;
//
//     phi_a0 = temp_a1 = D_800D154C;
//     tmp.unk0 = temp_a1->x_position;
//     tmp.unk4 = temp_a1->y_position;
//     tmp.unk8 = temp_a1->z_position;
//
//     if (temp_a1->unk124) {
//         phi_a0 = &D_800CC2D0[temp_a1->unk124 - 1];
//         func_15103E40(phi_a0, temp_a1, &tmp, arg0, 0, 0xFF, 0);
//     }
// }

void func_15070CDC(s32 arg0) {
    func_15070C40(1);
}

void func_15070D00(s32 arg0) {
    func_15070C40(0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_15070D24.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_15070F60.s")
void func_15071230(s32 arg0) {
    func_15070F60(0);
}

void func_15071254(s32 arg0) {
    func_15070F60(1);
}

void func_15071278(s32 arg0) {
    func_150FC438(D_800D154C, 0, 1, D_800D154C->unk84.ub[1]);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_150712AC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_15071360.s")

void func_15071434(s32 arg0) {
    func_150FF840(D_800D154C, 1, 0, 0xFF, 1);
}

void func_15071470(s32 arg0) {
    func_150FF840(D_800D154C, 0, 0, 0xFF, 1);
}

void func_150714AC(s32 arg0) {
    func_150FF840(D_800D154C, 0, 1, 0xFF, 1);
}

void func_150714E8(s32 arg0) {
    func_151D5714(D_800D154C, &D_800A2148, &D_800A2154, D_80088BB0, 1.0f, 0xFF, 1);
}

void func_15071544(s32 arg0) {
    func_151D4668(D_800D154C);
    func_151D469C(D_800D154C, 4, 0x78, 0xFF, 1);
}

void func_1507158C(s32 arg0) {
    func_151D4668(D_800D154C);
    func_151D469C(D_800D154C, 2, 0x78, 0xFF, 1);
}

void func_150715D4(s32 arg0) {
    func_151D4668(D_800D154C);
    func_151D469C(D_800D154C, 3, 0x78, 0xFF, 1);
}

void func_1507161C(s32 arg0) {

}

void func_15071628(s32 arg0) {
    func_151D0058(D_800D154C, (arg0 - 0x55) & 0xFF, 0xFF, 1);
}

void func_15071668(s32 arg0) {
    func_151D0024(D_800D154C);
}

void func_15071690(s32 arg0) {
    struct127 *temp_a0;
    s32 pad0;
    s32 sp1C;

    temp_a0 = D_800D154C;
    if ((temp_a0->unk1D4 != 0) && ((temp_a0->unk74 & 0xF) != 0xF)) {
        func_150B60E0(temp_a0, &sp1C);
        func_150B5C38(&sp1C, 0xFF, 1);
    }
}

void func_150716EC(s32 arg0) {
    struct17 tmp;
    struct127 *temp_v0;

    temp_v0 = D_800D154C;
    tmp.unk0 = temp_v0->x_position;
    tmp.unk4 = temp_v0->y_position;
    tmp.unk8 = temp_v0->z_position;
    func_151D5404(&tmp, 1502.0f, 3000.0f, 0.00033333332976326346f, 0xC, 0xF, 0xFF, 0);
}

void func_15071764(s32 arg0) {
    s32 sp34;

    sp34 = func_15083E90(18);
    if (sp34 != 0) {
        func_150F0BEC(sp34);
        func_150F10D4(sp34);
        func_15161E24(sp34, 1, 2, 300, 70, 255, 130, 0, 255, 1);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_150717E0.s")
// void func_150717E0(s32 arg0) {
//     u8 sp24;
//     void *sp20;
//     void **sp18;
//     void **temp_a0;
//     void *temp_v0;
//
//     temp_v0 = func_15083E90(0x12);
//     temp_a0 = &sp20;
//     if (temp_v0 != 0) {
//         sp20 = temp_v0;
//         sp18 = temp_a0;
//         sp24 = temp_v0->unk3B;
//         func_15131D4C(temp_a0, 0x43);
//         func_151494E0(temp_a0, 0x43);
//     }
// }

void func_15071830(s32 arg0) {
    func_150F9BB0(D_800D154C, 0xFF, 1);
}

void func_15071860(s32 arg0) {
    func_1519072C(D_800D154C);
}

void func_15071888(s32 arg0) {
    func_151D5714(D_800D154C, &D_800A1FB0, &D_800A1FBC, D_80088B90, D_80099F30, 0xFF, 1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_150718E4.s")

void func_15071998(s32 arg0) {
    func_150FA520(D_800D154C, 0, 0xFF, 1);
}

void func_150719CC(s32 arg0) {
    func_150FA520(D_800D154C, 1, 0xFF, 1);
}

void func_15071A00(s32 arg0) {
    func_150FA520(D_800D154C, 2, 0xFF, 1);
}

void func_15071A34(s32 arg0) {
    func_151D09A8(D_800D154C, 0xFF, 1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_15071A64.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_15071B18.s")

void func_15071D08(s32 arg0) {
    func_150F2230(D_800D154C, 0xFF, 1);
}

void func_15071D38(void) {
    void (*func)(s32);

    func = D_80086150[D_800D1580];
    if (func != 0) {
        func(D_800D1580);
    }
}

void func_15071D78(void) {
    struct127 *tmp;
    struct127 *orig;

    tmp = func_150721E8(D_800D154C);
    if (tmp != NULL) {
        orig = D_800D154C;
        D_800D154C = tmp;
        func_15071D38();
        D_800D154C = orig;
    }
}

void func_15071DC8(void) {
    func_15141A7C(D_800D154C, D_800D1580);
}

void func_15071DF4(void) {
    func_15192800(D_800D154C, D_800D1580);
}

void func_15071E20(void) {
    D_800D154C->unk247 = (s8) D_800D1580;
}

void func_15071E3C(void) {
    D_800D154C->unk248 = (s8) D_800D1580;
}

void func_15071E58(void) {
    D_800D1878 = D_800D1580 & 0xFF;
    D_800D154C->unk244 = (D_800D1580 >> 8) & 0xFF;
    func_1505E650(D_800D154C, D_800D154C->unk244, 1.2000000476837158f, 3.0f, D_800D1878, 0.0f, 0);
}

void func_15071ED4(void) {
    func_1505E650(D_800D154C, 0x59, 1.0f, 3.0f, 0.0f, 0.0f, 0);
}

void func_15071F14(void) {
    func_1505E650(D_800D154C, 0x24, 1.0f, 3.0f, 0.0f, 0.0f, 0);
}

void func_15071F54(void) {
    func_1507C8E0(D_800D154C, D_800D1580);
}

void func_15071F80(void) {
    if (D_800C35EA == 1) {
        D_800D154C->unk138++;
    }
}

void func_15071FB0(void) {
    if (D_800D154C->unk28 == 0.0f) {
        D_800D154C->unk10C = (u16)0;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_15071FDC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_150721A4.s")

s32 func_150721E8(struct127 *arg0) {
    func_15072208(arg0, 0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_15072208.s")

void func_150722F0(void) {
    s32 temp_v0 = func_150721E8(D_800D154C);
    if (temp_v0 != 0) {
        s32 tmp0 = D_800D1580 >> 8;
        u16 tmp1 = D_800D1580;
        func_1506160C(temp_v0, 2, tmp0, tmp1, 0);
    }
}

void func_1507233C(void) {
    D_800D154C->unk94 = (s32) ~(D_800D1580 | 1);
}

void func_15072360(void) {
    D_800D154C->unk94 &= ~D_800D1580;
}

void func_15072388(void) {
    D_800D154C->unk94 |= D_800D1580;
}

void func_150723AC(void) {
    struct127 *temp_v0 = func_15083E90(D_800D1583);
    if (temp_v0 != NULL) {
        func_15060F28(temp_v0, 0);
    }
}

void func_150723E0(void) {
    struct127 *temp_v0 = func_15083E90(D_800D1583);
    if ((temp_v0 != 0) && (temp_v0->unk65 != 0)) {
        func_15060F28(temp_v0, 0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_15072420.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_1507266C.s")

void func_15072740(void) {
    s32 temp_v0;
    struct127 *temp_v1;

    temp_v0 = D_800D1580 >> 16;
    temp_v1 = &D_800CC2D0[D_800D154C->unk222];
    temp_v1->unk65 = D_800C3E78 + 1;
    temp_v1->unk5C = temp_v0;
    temp_v1->unk101 = 4;
}

void func_150727AC(void) {
    D_800D154C->animation_speed = D_800D1580 * D_80099F4C;
    D_800D154C->unk2D0->unk10 = D_800D154C->animation_speed;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_150727F0.s")

void func_15072918(void) {
    func_15060F28(D_800D154C, 0);
}

void func_15072940(void) {
    func_15060F28(D_800D154C, 1);
}

void func_15072968(void) {
    func_1505E650(D_800D154C, 44, 1.5f, 12.0f, 0.0f, 0.0f, 0);
    D_800D154C->disable_run = 25;
}

void func_150729B4(void) {
    D_800D154C->unk2E4 = D_800D1580;
}

void func_150729D0(void) {
    D_800D154C->unk31C->unk8 = (u16)1;
    func_1507EB4C(D_800D154C, 21);
    func_1506B82C();
}

void func_15072A14(void) {
    D_800D154C->unk31C->unk66 = (u16)0;
    func_1507F640();
}

void func_15072A40(void) {
    D_800D154C->unk31C->unk19B = (u8)0;
    D_800D154C->unk31C->unk78 = (u8)0;
    func_1507F640();
}

void func_15072A7C(void) {
    if (D_800D154C->unk31C != 0) {
        D_800D154C->unk31C->unk1A9++;
        if ((func_150ADA20() & 7) < (u32) D_800D154C->unk31C->unk1A9) {
            func_1505E650(D_800D154C, 394, 1.0f, 4.0f, 0.0f, 0.0f, 0);
        }
    }
}

void func_15072AF8(void) {
    func_1505E650(D_800D154C, D_800D154C->unk84.uh + 1, 1.0f, 6.0f, 0.0f, 0.0f, 0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_15072B44.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_15072DA0.s")

void func_15072DD8(void) {
    func_15083568(D_800D154C, D_800D1580, 1.0f, 0);

    if ((D_800D154C->unk31C != 0) && (D_800D154C->unk31C->unk11A == 1)) {
        D_800D154C->unk31C->unk11A = (u8)2U;
    }
}

void func_15072E38(void) {
    func_150836CC(D_800D154C, D_800D1580);

    if (D_800D154C->unk31C != 0) {
        D_800D154C->unk31C->unk11A = (u8)0;
    }
}

void func_15072E7C(void) {
    D_800D154C->unk10C = (s16) D_800D1580;
}

void func_15072E98(void) {
    D_800D154C->unk2D0->unk10 *= D_800D1874;
}

void func_15072EC0(void) {
    struct197 *tmp;

    tmp = D_800D154C->unk2D0;
    if (tmp->unk10 < D_800D1874) {
        D_800D154C->unk10C = 0;
    }
}

void func_15072EF4(void) {
    D_800D154C->stunned = (s8) D_800D1580;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_15072F10.s")

void func_1507304C(void) {

}

void func_15073054(void) {
    D_800D154C->unk22E = (s16) D_800D1580;
}

void func_15073070(void) {

}

void func_15073078(void) {
    func_1512D748(0, D_800D1580, 1);
}

void func_150730A4(void) {
    D_800D154C->unk1FF = (u8)3;
    D_800D154C->unk200 = (s8) D_800D1580;
}

void func_150730D0(void) {
    struct127 *temp_v0;

    if (D_800D1580 == 1) {
        temp_v0 = D_800D154C;
        temp_v0->unk2F8 |= 0x100;
    } else {
        temp_v0 = D_800D154C;
        temp_v0->unk2F8 &= 0xFEFF;
      }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_15073118.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_1507342C.s")

void func_150738E8(void) {
    u8 temp_v0 = (u8)(D_800D154C->unk13C - 100);

    if (D_800D154C->unk13C != 0) {
        D_800D154C->unk13C = 0U;
        D_800CC2D0[temp_v0].unkF8 = 0x8200;
        D_800CC2D0[temp_v0].unk13D = 0;
        D_800CC2D0[temp_v0].unk76 = D_800D154C->unk7A;
        D_800CC2D0[temp_v0].unk65 = 0;
        D_800CC2D0[temp_v0].unk232 = 6;
        D_800CC2D0[temp_v0].unk218 = 0;
        D_800CC2D0[temp_v0].stunned = 0;
        D_800CC2D0[temp_v0].unk7A = 0xE000;
        func_1505E650(D_800D154C, 0x97, 1.0f, 5.0f, 0.0f, 0.0f, 0);
    }
}

void func_150739A4(void) {
    D_800D154C->unk64 = (s8) D_800D1580;
}

void func_150739C0(void) {
    D_800D154C->unk64 -= D_800BE9A0;

    if (D_800D154C->unk64 >= 0) {
        D_800D1880 = 0;
        D_800D154C->unk138--;
        D_800D1878 = D_800D1580;
    }
}

void func_15073A28(void) {
    D_800D154C->unk44 = (f32) D_800D1580;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_15073A50.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_15073B38.s")

void func_15073C28(void) {
    func_1507F640();
}

void func_15073C48(void) {

}

// ???
#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_15073C50.s")

void func_15073CB8(void) {
    struct127 *tmp = func_1505F0AC(0x53);
    if ((tmp != 0) && ((u16)tmp->unk244 == 0x1F)) {
        tmp->unk21C = (u16)0;
    }
}

void func_15073CF4(void) {
    func_15062B1C(D_800D154C, (f32) D_800D1580);
}


void func_15073D34(void) {
    func_15062B50(D_800D154C, (f32) D_800D1580);
}

void func_15073D74(void) {
    struct127 *temp_v0;

    temp_v0 = func_15083E90(D_800D1583);
    if (temp_v0 != 0) {
        temp_v0->unk65 = (u8)0;
    }
}

void func_15073DA4(void) {
    s32 tmp;

    if (D_800D1580 != 0) {
        tmp = 18;
    } else {
        tmp = 2;
    }
    func_1506C460(D_800D154C->unk40, 150.0f, 0, 0, 100, tmp, 60.0f, 0.5f, 0, 0, 1);
}

void func_15073E2C(void) {
    func_1506C460(D_800D154C->unk40, 80.0f, 0, 0, 100, 11, 40.0f, 0.5f, 0, 14, 1);
}

void func_15073EA4(void) {
    func_1506C460(D_800D154C->unk40, 60.0f, 0, 0, 100, 12, 40.0f, 0.5f, 0, 14, 1);
}

void func_15073F1C(void) {
    struct126 *temp_v0 = func_1503195C(D_800D154C, 0x3C, 0);
    if (temp_v0 != NULL) {
        temp_v0->unk38 = 0x960;
    }
}

void func_15073F54(void) {
}

void func_15073F5C(void) {
    D_800D154C->unk2CB = (s8) D_800D1580;
}

void func_15073F78(void) {
    D_800D154C->unk10B &= ~D_800D1580;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_15073FA0.s")

void func_15074644(void) {
    D_800D154C->unk31C->unk11A = (s8) D_800D1580;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_15074664.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_150746F0.s")
// ?
#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_150747E4.s")

void func_15074840(void) {
    if (D_800D154C->unk31C != 0) {
        D_800D154C->unk31C->unk1AA += D_800D1580;
    }
}

void func_15074870(void) {
    D_800D154C->unk24F = (s8) D_800D1580;
}

// ??
#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_1507488C.s")

void func_150748F4(void) {
    D_800CC3D7 = (s8) D_800D1580;
}

void func_1507490C(void) {
    struct127 *tmp;
    u8 temp_v0 = (u8)(D_800D154C->unk13C - 100);

    if (D_800D154C->unk13C != 0) {
        tmp = &D_800CC2D0[temp_v0 & 0xFF];
        if (D_800CC2D0[temp_v0].unk13D >= 0x64) {
            D_800CC2D0[temp_v0].unk232 = D_800D1580;
            D_800CC2D0[temp_v0].unk218 = 0;
            D_800CC2D0[temp_v0].stunned = 0;
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_15074980.s")

void func_15074A44(void) {
    if (D_800D154C->unk31C != 0) {
        D_800D154C->unk31C->unk26 = (s8) D_800D1580;
    }
}

void func_15074A6C(void) {
    if (D_800D154C->unk13C == 0) {
        D_800D154C->unk138++;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_15074A94.s")
// NON-MATCHING: JUSTREG
// void func_15074A94(void) {
//     f32 phi_f2;
//     f32 temp_f0;
//
//     temp_f0 = func_1505A72C(&D_800CC2D0, D_800D154C);
//
//     if (D_800D154C->unk148 < D_8009A0E8) {
//         D_800D154C->unk148 = D_800D154C->unk154;
//     }
//
//     if (temp_f0 < 200.0f) {
//         phi_f2 = D_8009A0EC;
//     } else {
//         if (D_8009A0F0 < temp_f0) {
//             phi_f2 = D_800D154C->unk148;
//         } else {
//             f32 tmp = D_8009A0F4;
//             phi_f2 = D_800D154C->unk148;
//             phi_f2 = phi_f2 - tmp;
//             phi_f2 = phi_f2 * ((temp_f0 - 200.0f) / D_8009A0F8);
//             phi_f2 = phi_f2 + tmp;
//         }
//     }
//     D_800D154C->unk154 = D_800D154C->unk158 = phi_f2;
//     D_800D154C->unk15C = D_8009A0FC;
// }

void func_15074B7C(void) {
    D_800D1880 = 0;
    D_800D1878 = D_800D1580;

    if (D_800D1580 == 0) {
        D_800D1878 = D_8009A100;
        D_800D154C->unk1FC |= 4;
        D_800D154C->unk138 = 0;
    }
}

void func_15074BD8(s32 arg0, s32 arg1, s32 arg2) {
}

void func_15074BEC(s32 arg0, s32 arg1, s32 arg2) {
}

void func_15074C00(s32 arg0, struct127 *arg1, s32 arg2) {
    struct199 tmp; // is this actually 2 structs?

    if (((u8)arg1->unk239 & 0x7F) == 5) {
        func_1504715C(&tmp);
        tmp.unk24 = D_800CC2C0;
        tmp.unk28 = D_800CC2C4;
        tmp.unk2C = D_800CC2C8;
        func_150C04C0(&tmp.unk24, &tmp, 0x16, 1, 0xFF, 0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_15074C80.s")

void func_15074DEC(struct127 *arg0, s32 arg1, s32 arg2) {
    arg0->unk2E8 = 1;
}

void func_15074E04(s32 arg0, s32 arg1, s32 arg2) {
    func_1516FE1C((s32) (arg1 - (s32)&D_800CC2D0) / (s32) sizeof(struct127), 0xB4, 0xFF, 0);
    func_1518D1C0(arg1, 0xB, 0, 1, 0xFF, 0, &D_80099C1C);
}

void func_15074E80(struct127 *arg0, struct127 *arg1, s32 arg2) {
    s8 sp1F = 0;
    func_15194794(arg0, arg1, &sp1F);
    if (arg1->interaction_state == 1) {
        arg0->immune = (u8)0xFF;
        arg1->immune = (u8)0xC8;
        D_800D1580 = 0x60000; // 393216
        func_15072740();
    }
}

void func_15074EE8(struct127 *arg0, struct127 *arg1, s32 arg2) {
    if (arg1->interaction_state == 1) {
        arg0->immune = (u8)0xFF;
        arg1->immune = (u8)0xC8;
        D_800D1580 = 0x70000;
        func_15072740();
    }
}

void func_15074F30(struct127 *arg0, struct127 *arg1, s32 arg2) {
    arg0->unk232 = arg1->unk109;
    arg0->unk218 = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_15074F48.s")

void func_15074FD4(struct127 *arg0, struct127 *arg1, s32 arg2) {
    if (arg1->interaction_state == 1) {
        arg0->immune = (u8)0xFF;
        arg1->immune = (u8)0xC8;
        D_800D1580 = 0x60000;
        if (arg0->id == 0x8E) {
            D_800D1580 = 0x140000;
        }
        func_15072740();
    }
    func_151942B0(arg0, arg1, arg2);
}

void func_15075050(struct127 *arg0, s32 arg1, s32 arg2) {
    arg0->unkB8 = 5.0f;
    if (arg0->xz_velocity > 0.0f) {
        arg0->unkB8 = -5.0f;
    }
    arg0->gravity = 5.0f;
    arg0->y_velocity = 12.0f;
}

void func_150750A4(struct127 *arg0, s32 arg1, s32 arg2) {
    arg0->gravity = 5.0f;
}

void func_150750C4(struct127 *arg0, struct127 *arg1, u8 *arg2) {

    if ((arg1->id  == 0x88) && ((s32) arg0->unk107 < 0x37)) {
        arg0->unk138 += 3;
    }
    func_15194794(arg0, arg1, arg2);
    if (arg1->id != 0x53) {
        func_15145A50(arg1);
        arg1->health = (u8)0;
        func_1507CD64(arg1, 8);
        *arg2 = (u8)39;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_981E0/func_1507515C.s")
