#ifndef VARIABLES_H
#define VARIABLES_H

#include "structs.h"


/* defined */

extern f32 PI;

extern f32 F_1__0005778074264526;
extern f32 F_0__999422550201416;
extern f32 F_0__10000000149011612;
extern f32 F_1__4142136573791504;
extern f32 F_1_000_000;

/* undefined */

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
extern struct58 *D_8002AC50; // contains pointer to framebuffer
extern u8   D_8002AC54;
extern u8   D_8002AC5C;
extern s8   D_8002AC6C;
extern u8   D_8002AE40;
extern s32  D_8002AE4C;
extern s32  D_8002AE54;
extern s32  D_8003E370;
extern s32  D_8003E388;
extern OSThread *D_8003E3A0;
extern s32  D_8003E640;

extern OSMesgQueue *D_8003E608;
extern OSMesg      *D_8003E620;
extern OSMesgQueue *D_8003E5D0;
extern OSMesg      *D_8003E5E8;
extern OSMesgQueue *D_80041298;
extern OSMesg      *D_800412B0;
extern OSMesgQueue *D_800416F0;
extern OSMesg      *D_80041708;
extern s32  D_80044B20;
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
extern f32  D_8002C450; // 1.0309929847717285
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
extern struct54 *D_800380B4;
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
extern u8  D_8003A581;
extern u8  D_8003A582;
extern u8  D_8003A583;
extern u8  D_8003A584;
extern u8  D_8003A588;
extern u8  D_8003A5C8;

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
extern s32  D_80041F54;
extern s32  D_80041F56;
extern f32  D_80041F58;
extern s32  D_80041F5C;
extern u8   D_80041F60;
extern u8   D_80041F61;
extern s8   D_80041FD8;
extern s8   D_80041FD9;
extern s32  D_80041FDC;

extern f32  D_8002C3F8; // rodata
extern f32  D_8002C3FC; // rodata


extern s32  D_80042770;
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
extern u8   D_80082BB4;
extern u8   D_800BE3EC;
extern s32  D_80084064;
extern s32  D_8008FD90;
/* 800E0000 */
extern s32  D_800E9D00;
extern s32  D_800E9D10[];

extern s32 D_800BE2D0;
extern u8  D_800BE616;
extern s32 D_800BE620;
extern s32 D_800BE624;
extern s32 D_800BE760;
extern OSMesgQueue *D_800BE900;
extern u8   D_800BE938;
extern s32  D_800BE944;
extern s32  D_800BE948;
extern OSMesg      *D_800BE990;
extern u8   D_800BE9B4;
extern u8   D_800BE9C0;
extern s32  D_800BE9C4;
extern s32  D_800BE9E0;
extern s32  D_800BE9E4;
extern u8   D_800BE9ED;
extern s32  D_800BE9F4;
extern s32  D_800BE9F8;

extern struct14 *D_800BE730;
extern s32 D_800BE748;
extern s32 D_800BE74E;
extern s32 D_800BE754;
extern s32 D_800BE75A;
/* 800C0000 */

extern u8  D_800C35C4;
extern u8  D_800C3C88;
extern u16 D_800C3E7C;
extern s32 D_800C3E80;
extern s32 D_800C3E84;
extern s32 D_800C3EE0;
extern struct106 D_800C6660[];
extern u8  D_800C4000;
/* other */

extern s32 D_80041E58;
extern s32 D_80041EA0;

extern u8  D_80087280;
extern u32 D_80087380;
extern s32 D_80088720;
extern s32 D_80088730;
extern vertex *D_80088724;

extern u8  D_8008CEB0;

extern f32 D_80095B40;
extern f32 D_80095B44;
extern f32 D_80095B48;
extern f32 D_80095B4C;
extern f32 D_80095B50;
extern f32 D_80095B54;

extern s32 D_80095B70;
extern s32 D_80091C04[];

/* 8009 */
extern f32 D_800968C0;

/* 800B */

extern s32 D_800B0DC0;
extern s32 D_800B0DC4;
extern s32 D_800B0DC8;
extern u8 *D_800B0DE0;
extern s32 D_800B0DE4;
extern struct104 *D_800B0DF0;
extern s32 D_800B0E58;
extern s32 D_800B0E5C;
extern struct105 *D_800B0E60[];
extern s32 D_800BE4A0; // struct/array of size 0x3c
extern s32 D_800BE570;
extern u8  D_800BE574;
extern u8  D_800BE575;
extern s32 D_800BE5D0;
extern s32 D_800BE9F0;


/* 800C */

extern s32 D_800C5A90;
extern s32 D_800C5C08;
extern s32 D_800C6070;
extern s32 D_800C6360;
extern u8  D_800C67F0;
extern u8  D_800C67F1;


/* 800D */
extern s32 D_800D1588;
extern u8  D_800D18A8;

extern s32 D_800D19A0;
extern s32 D_800D1C90;
extern s32 D_800D1F80;
extern s32 D_800D2040;


extern u8  *D_800D2138;
extern s32 D_800D23C0;

extern f32 D_800D2410[];
extern s32 D_800D2448;
extern s32 D_800D244C;
extern s8  D_800D2456;
extern u8  D_800D2457;
extern u8  D_800D2458;
extern struct102 *D_800D2E4C;
extern s32 D_800D2E50;
extern s32 D_800D2E60;
extern s32 D_800D2E70; // struct/array of size 0xF0
extern u8  D_800D2E44;

extern s32 D_800D98E0;
extern s32 D_800D99D0;
extern u8  D_800D9E64;

extern s32 D_800DBDD8[];
extern s32 D_800DBDE8[];
extern s32 D_800DBDF8[];

extern s32 D_800DBE18[];
extern s32 D_800DBE1C;
extern s32 D_800DBE20;
extern s32 D_800DBE24;
extern s16 D_800DBE28;
extern s16 D_800DBE2A;
extern s16 D_800DBE2C;
extern s32 D_800DBE38;
extern s32 D_800DBE4C;
extern s32 D_800DBE50;
extern s32 D_800DBE5C;
extern u8  D_800DBE62;
extern u8  D_800DBE63;
extern f32 D_800DBE64;
extern u8  D_800DBF00;
extern u8  D_800DBF88;
extern s32 D_800DBF8C;
extern s32 D_800DBF90;

extern u8  D_800DDD1C;
extern s32 D_800DDC00;
extern s32 D_800DDC08;
extern s32 D_800DDC04;
extern s32 D_800DDD20;


extern s32 D_800DDA90; // struct/array of size 0xf0
extern s32 D_800DD478; // struct/array of size 0x618
extern u8  D_800DCD30;
extern u8  D_800DCD31;
extern u8  D_800DCD32;
extern u8  D_800DCD33;
extern u8  D_800DCD34;
extern u8  D_800DCD35;
extern u8  D_800DCD36;
extern u8  D_800DCD37;
extern u8  D_800DCD38;
extern u8  D_800DCD39;
extern u8  D_800DCD3A;
extern u8  D_800DCD3B;
extern u8  D_800DCD3C;
extern u8  D_800DCD3D;
extern s32 D_800DCD40;
extern s32 D_800DCD78;
extern s32 D_800DCD7C;
extern s32 D_800DCD80;
extern s32 D_800DCD84;

extern u8  D_800D2F3C;
extern s32 D_800D2F40;
extern s32 D_800D2F48;
extern f32 D_800D2DB0;
extern u8  D_800D2E41;
extern u8  D_800D2E42;
extern s32 D_800D3858;
extern u8  D_800D2E44;

extern struct100 *D_800DCD24;
extern struct100 *D_800DCD28;

extern u8   D_800DD2C0;
extern u8   D_800DD2A0;
extern u8   D_800DD2A1;
extern u8   D_800DD2A2;
extern u8   D_800DD2A3;

/* other */
extern s32  D_151FA130;
extern s32  D_15000000;

extern u8 _extcodeSegmentRomStart[];
extern u8 _extcodeSegmentRomEnd[];

/* unsure */
extern s32  D_16003890;
extern u8   D_16003AF4;
extern s8   D_16003B1C;
extern s32  D_160038A0;
extern s8   D_16003B28;
extern s32  D_1600389C;

extern s32  D_160047D0;
extern s32  D_160047D4;
extern s32  D_160047DC;
extern s32  D_160047E0;

/* these are registers */
extern u32  AI_A4500000;
extern s32  AI_A4500004;

/* what is this */
extern u16 *D_BC000C02;



#endif
