#include <ultra64.h>

#include "functions.h"
#include "variables.h"


extern f32 D_8009A13C; // 1.399999976158142

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15075400.s")
// NON-MATCHING: JUSTREG: t5/a3 not t4/a2
// void func_15075400(s32 arg0) {
//     u8 tmp;
//     u8 i;
//
//     if (arg0 < 0xF7) {
//         D_800D154C->unk218 += (arg0 * 5);
//         return;
//     }
//
//     for (i = 0; i < 100; i++) {
//         tmp = *(u8*)D_800D154C->unk218; // ???
//         if (tmp < 247) {
//             D_800D154C->unk218 += 5;
//         } else {
//             D_800D154C->unk218 += 1;
//             if (arg0 == (tmp & 0xFF)) {
//                 D_800D154C->unk218 += -5;
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

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15075650.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15075884.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15075938.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15075A50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15075AAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15075B60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15075B8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15075BB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15075BE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15075C24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15075CA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15075CCC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15075D0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15075D38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15075D64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15075D9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15075DC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15075DE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15075E6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15075E98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15075EB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15075F00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15075F40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15075F6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507602C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_150761C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_150761F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15076220.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15076250.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_150762B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_150762D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15076340.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15076394.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_150763B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_150764C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_150764E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15076500.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507652C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507659C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15076600.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15076608.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15076624.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15076678.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_150766D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15076760.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15076768.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_150767F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_150768DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15076B5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15076B78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15076B94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15076C7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15076CB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15076CCC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15076D04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15076D3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15076DF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15076E10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15076E48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15076E50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15076F40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15076F78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15076FA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_150770E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15077174.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15077190.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_150771F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15077294.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_150772E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15077318.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507735C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15077364.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15077404.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_150774B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15077508.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_150778F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_150779A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_150779D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15077AA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15077ABC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15077B14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15077B44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15077B80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15077BB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15077BE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15077C1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15077C38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15077DA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15077DBC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15077E9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15077EEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15077F08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15077F34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15077F64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15078074.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507813C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_150781A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_150781F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_150782CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_150782E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15078358.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507839C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15078520.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15078544.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507879C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15078874.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15078890.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15078900.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15078A08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15078A60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507900C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507903C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15079090.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_150790C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507911C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_150791F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15079228.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_150792E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_150792FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15079334.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15079390.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_150793D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15079570.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507965C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_150796CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15079790.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15079880.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_150798F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15079928.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15079988.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_150799B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15079A28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15079A58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15079A98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15079B30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15079F24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15079F50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15079F6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_15079FBC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507A100.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507A164.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507A210.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507A270.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507A2A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507A2F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507A3B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507A3CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507A3E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507A428.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507A47C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507A4D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507A528.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507A620.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507A6FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507A71C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507A774.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507A7C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507A7DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507A808.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507A838.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507A878.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507A8A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507A8EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507A984.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507AA48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507ACB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507ACE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507AD30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507AD60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507AD7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507ADAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507ADE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507AE78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507AE94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507AF3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507AF98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507B040.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507B058.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507B15C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507B178.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507B234.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507B280.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507B2CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507B318.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507B364.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507B3B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507B3FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507B448.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507B494.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507B4E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507B52C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507B578.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507B5C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507B630.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507B6E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507B734.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507B7BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507B7E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507B884.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507B8F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507B958.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507B974.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507BA48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507BAD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507BAF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507BB20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507BB28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_75400/func_1507BC14.s")
