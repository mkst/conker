#ifndef VARIABLES_H
#define VARIABLES_H

#include "structs.h"

extern s32  D_100010F8;
extern s32 *D_10001194;
extern s32 *D_10002070;

extern s32 *D_10002E50;
extern s32 *D_100049E0;
extern s32 *D_100052A0;

extern s32  D_10009400;
extern s32  D_100097CC;
extern s32  D_10009980;
extern s32  D_10009B2C;
extern s32  D_10009B4C;
extern s32  D_10009B90;
extern s32  D_10009CBC;
extern s32  D_10009FFC;
extern s32  D_10012560;
extern s32  D_10012E04;
extern s32  D_10012F94;
extern s32  D_100131D8;
extern s32  D_10013598;
extern s32  D_1001E530;
extern s32 *D_10023850;
extern s32 *D_10023930;
extern s32  D_100291A0;
extern s32  D_100290D0;
extern s32 *D_1002AAD0;

/* 80000000 */
extern s32  D_80000300;
extern s32  D_8000030C;
extern u32  D_80000310;

/* 80020000 */

extern u8   D_8002AAE0;
extern s32  D_8002AAE4;
extern s32  D_8002AAE8[2]; // framebuffer
extern u8   D_8002AB40;
extern OSViMode *D_8002AB90;
extern OSViMode *D_8002ABE0;
extern s32  D_8002AC30;
extern u8   D_8002AC5C;
extern u8   D_8002AE40;
extern s32  D_8002AE4C;
extern s32  D_8002AE54;
extern s32  D_8003E370;
extern s32  D_8003E388;
extern OSThread *D_8003E3A0;

extern OSMesgQueue *D_8003E608;
extern OSMesg      *D_8003E620;
extern OSMesgQueue *D_8003E5D0;
extern OSMesg      *D_8003E5E8;
extern OSMesgQueue *D_80041298;
extern OSMesg      *D_800412B0;
extern OSMesgQueue *D_800416F0;
extern OSMesg      *D_80041708;
extern s32  D_8003E640;

extern s32  D_8002B070;
extern struct07  *D_8002BA40;
extern struct07  *D_8002BA44;
extern struct31 *D_8002BA20;
extern struct31 *D_8002BA24;
extern struct31 *D_8002BA28;
extern s16  D_8002BA30;
extern s32  D_8002BA2C;
extern s32  D_8002BD18;
extern s32  D_8002BD60;
extern f32  D_8002C450;
extern f32  D_8002C750;
extern f32  D_8002C760; // 1.0005778074264526
extern f32  D_8002C764; // 0.999422550201416
extern f32  D_8002C770; // pi
extern f32  D_8002C774; // 1.4142136573791504
extern f32  D_8002C780; // 26768.0
extern f32  D_8002C784; // 26768.0
extern f32  D_8002C790;
extern s32  D_8002D4B0;
extern s32 *D_8002D8B0;

/* 80030000 */
extern OSThread *D_80031AE0;
extern OSThread *D_800318B0;

extern s32  D_80032B3F;
extern s32  D_8003333F;

extern s32  D_800354F8;
extern s32  D_800354FC;
extern s16  D_80035500;
extern OSThread *D_80035910;

extern OSMesgQueue *D_80036B40;
extern OSMesg      *D_80036B58;
extern struct00 *D_80036B60;
extern s32  D_80036B70;
extern s32  D_80036B78;
extern s32  D_80036B80;
extern s32  D_80036B88;
extern s32  D_80036B8C;
extern s32  D_80036B90;
extern s32  D_80036B98;

extern u32  D_80038070;
extern u16  D_80038074;
extern u8   D_80038080;
extern u32  D_80038090;
extern u32  D_80038094;
extern u32  D_80038098;
extern u32  D_8003809C;
extern f32  D_800380A0;
extern f32  D_800380A4;
extern s32  D_800380B0;
extern s32  D_800380B4[5];
extern s32  D_800380B8;
extern s32  D_800380BC;

extern s32  D_800380C0;
extern s32  D_800380C4;
extern s32  D_800380C8;
extern s32  D_800380CC;
extern s32  D_800380D0;
extern s32  D_800380E0;
extern s32  D_800388B0;

extern OSMesg *gMessage0;
extern OSMesgQueue *gMessageQueue0;

extern OSMesg *gMessages[3];
extern OSMesgQueue gMessageQueue[3];

extern s32 D_80038904;

extern OSMesgQueue *D_8003B1E8;
extern OSMesgQueue *D_8003B200;
extern OSMesgQueue *D_8003B218;

extern OSMesgQueue *D_8003B230;
extern s32 D_8003B234;
extern u8 D_8003B238;
extern u8 D_8003B239;
extern u8 D_8003B23A;
extern OSMesg      *D_8003B240;

extern s32 D_8003B260;
extern s32 D_8003B264;
extern OSThread    *D_8003B6A0;
extern OSMesg      *D_8003B660;
extern OSMesg      *D_8003B670;
extern OSMesg      *D_8003B680;

extern OSMesgQueue *D_8003B9D0;
extern OSMesg      *D_8003B9E8;
extern OSThread    *D_8003B9F0;

extern u64 D_8003BC20;
extern u32 D_8003BC24;

extern u8  D_8003A570;
extern u8  D_8003A571;
extern u8  D_8003A582;

extern s32  D_8003BC30;
extern s32  D_8003BD30;
extern s32  D_8003BE30;
extern u8   D_8003BE50[];
extern u32  D_8003BE70;
extern u32  D_8003BE74;
extern u8   D_8003BE78;
extern s32   D_8003BE7C;

extern s32  D_8003C8E0;
extern struct26 *D_8003C900[];
extern u32  D_803F5000;
extern u32  D_803FE000;
extern u32  D_807F5000;
extern u32  D_807FE000;

/* 80040000 */
extern s32  D_80040000;
extern struct54 *D_800406A0;
extern struct54 *D_800406A4;
extern struct54 *D_800406B0;
extern u8   D_800406B8;
extern u32  D_80040AC8;  // 1200 byte struct?
extern u32  D_80040F78[];
extern u8   D_80040F84;
extern s32  D_80040F88;
extern s32  D_80040F8C;
extern s32  D_80040F90;
extern s32  D_80041F04;
extern s32  D_80041F08;
extern s32  D_80041F0C;
extern struct49 *D_80041F10[];
extern u32  D_80041F50;
extern u8   D_80041F61;
extern s8   D_80041FD9;

extern s32 *D_80042770;
extern s32  D_80042774;
extern s32  D_80042778;
extern s32  D_8004277C;
extern s32  D_800427A0;
extern s32  D_800427B0;
extern s16  D_800427F4;
extern s32  D_800425E0;
extern s32  *D_80042800;
extern s32  D_80042804;
extern u16  D_800428B8[];
extern u8   D_800428C0;
extern u8   D_800428C1;
extern u8   D_800428C2;
extern u8  D_800428C4[];
extern u8  D_800428C6[];
extern u8  D_800428C8[];
extern s32 *D_800428F8;

extern u32  D_80043B40[]; // 4064

/* 80080000 */
extern s32  D_80082B20;
extern s32  D_80084064;

/* 800E0000 */
extern s32  D_800E9D10[];

extern s32 D_800BE620;
extern s32 D_800BE624;
extern s32 D_800BE760;
extern OSMesgQueue *D_800BE900;
extern s32  D_800BE944;
extern s32  D_800BE948;
extern OSMesg      *D_800BE990;
extern u8 D_800BE9C0;
extern s32 D_800BE9C4;
extern s32 D_800BE9E4;
extern s32 D_800BE9F8;

/* other */

extern s32 D_151FA130;
extern s32 D_15000000;

extern u8 _extcodeSegmentRomStart[];
extern u8 _extcodeSegmentRomEnd[];

extern u32  AI_A4500000;
extern s32  AI_A4500004;

extern u16 *D_BC000C02;

#endif
