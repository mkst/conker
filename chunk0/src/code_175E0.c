#include <ultra64.h>

#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/code_175E0/func_850175E0.s")
// NON-MATCHING: uses different registers...
// u8* func_850175E0(void) {
//     if ((D_800BE616 == 0) && ((D_800D2E4C->unk18 & 1) == 0)) {
//         D_800D2456 = 3;
//         D_800D2457 = 3;
//         return &D_800D2456;
//     }
//     D_800D2456 = 6;
//     D_800D2457 = 6;
//     return &D_800D2456;
// }


#pragma GLOBAL_ASM("asm/nonmatchings/code_175E0/func_85017640.s")
// void func_85017640(void) {
//     u32 temp_v0;
//     void *temp_v0_2;
//     u32 phi_v0;
//
//     *(void *)0x800D2458 = (u8)0;
//     *(void *)0x800D2588 = 0;
//     (void *)0x800D2438->unk0 = 0.0f;
//     (void *)0x800D2438->unk4 = 0.0f;
//     (void *)0x800D2438->unk8 = 0.0f;
//     (void *)0x800D2428->unk0 = (f32) (void *)0x8009DCB4->unk0;
//     (void *)0x800D2428->unk4 = (f32) (void *)0x8009DCB4->unk2;
//     (void *)0x800D2428->unk8 = (f32) (void *)0x8009DCB4->unk4;
//     *(void *)0x800D2444 = 0;
//     *(void *)0x800D245C = 0;
//     phi_v0 = 0x800D2410U;
// loop_1:
//     temp_v0 = phi_v0 + 4;
//     temp_v0->unk-4 = 1.0f;
//     phi_v0 = temp_v0;
//     if (temp_v0 < 0x800D2428U) {
//         goto loop_1;
//     }
//     *(void *)0x800D246D = (u8)0;
//     *(void *)0x800D247D = (u8)0;
//     temp_v0_2 = (2 * 0x10) + 0x800D2460;
//     temp_v0_2->unk1D = (u8)0;
//     temp_v0_2->unk2D = (u8)0;
//     temp_v0_2->unk3D = (u8)0;
//     temp_v0_2->unkD = (u8)0;
//     *(void *)0x800D24C0 = 0;
//     func_800226F0(0x800D24C8, 0xC0, (void *)0x800D2438);
//     func_85048134(0x800D23D0, 0x800D2454, 0x42480000, 0x42726666, 53.0f, *(void *)0x800968B0, 1.0f);
// }
