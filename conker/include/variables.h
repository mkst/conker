#ifndef VARIABLES_H
#define VARIABLES_H

#include "structs.h"


/* defined */

// 0x0002C200
extern f32 D_8002C200;
extern f32 D_8002C204;
extern f32 D_8002C208;

// 0x0002C210
extern f32 D_8002C210;
extern f32 D_8002C214;
extern f32 D_8002C218;

// 0x0002C220
extern f32 D_8002C220;
extern f32 D_8002C224;
extern f32 D_8002C228;
extern f32 D_8002C22C;
// 0x0002C230
extern f32 D_8002C230;
extern f32 D_8002C234;
extern f32 D_8002C238;

extern struct120 D_8002C240[];

extern f32 D_8002C3F8;
extern f32 D_8002C3FC;

// 0x0002C750
extern f32 D_8002C750;

// 0x0002C770
extern f32 PI;
extern f32 D_8002C774;
extern f32 D_8002C778;
extern f32 D_8002C77C;
// 0x0002C780
extern f32 D_8002C780;
extern f32 D_8002C784;

// 0x0002C810
extern f32 D_8002C814;
// 0x0002C820
extern f32 D_8002C820;
// 0x0002C830
extern f32 D_8002C830;
extern f32 D_8002C834;
extern f32 D_8002C838;
// 0x0002C840
extern f64 D_8002C840; // double
extern f32 D_8002C848;

extern f32 D_8002C920;

extern u32 D_80042450[512]; // chunk0 offsets

extern char D_8002C6B0[];
extern char D_8002C6DC[];

/* undefined */

extern OSThread *__osRunningThread;

/* FUNCTIONS */
// FIXME: we should be able to reference these directly
extern s32  D_10013598;


/* 80000000 */

extern s32  D_80000000;
extern s32  D_80000004;
extern s32  D_80000008;
extern s32  D_8000000C;

extern struct14 *D_80000080;
extern struct14 *D_80000100;
extern struct14 *D_80000180;

extern s32  D_80000300;
extern s32  D_80000308;
extern s32  D_8000030C;
extern u32  D_80000310;
extern s32  D_8000031C[16]; // 64 bytes

/* 80020000 */

extern u8   D_8002AAE0;
extern u8   D_8002AAE4;
extern s32  D_8002AAE8[2]; // pointer to framebuffer
extern u8   D_8002AB40;
extern OSViMode *D_8002AB90;
extern OSViMode *D_8002ABE0;
extern s32  D_8002AC30;
extern struct58 *D_8002AC50; // contains pointer to framebuffer pointer
extern struct58 *D_8002AC54;
extern struct58 *D_8002AC58;
extern u8   D_8002AC5C;
extern u8   D_8002AC60;
extern u16  D_8002AC64;
extern s8   D_8002AC6C;
extern u8   D_8002AE40;
extern u32  D_8002AE44;
extern s32  D_8002AE48;
extern s32  D_8002AE4C;
extern s32  D_8002AE54;

extern s32  D_8002B070;
extern struct138 D_8002B074[];
extern s32  D_8002B078[][4]; // probably not correct...
extern s32  D_8002B9D4;
extern s32  D_8002B9F4;

extern struct31 *D_8002BA20;
extern struct31 *D_8002BA24;
extern struct31 *D_8002BA28;
extern s32  D_8002BA2C;
extern s16  D_8002BA30;

extern struct07  *D_8002BA40;
extern struct07  *D_8002BA44;

extern s16  D_8002BC10[];
extern s16  D_8002BD0E[];
extern s64  D_8002BD10;
extern s32  D_8002BD14;
extern s32  D_8002BD18;
extern s32  D_8002BD20; // init ok?
extern s32  D_8002BD60;
extern u8   D_8002BF70[];

/* DATA section from D_8002C080 to D_8002D4B0 */


/* BSS STARTS at D_8002D4B0 */

extern s32  D_8002D4B0; // BSS
extern s32 *D_8002D8B0;

/* 80030000 */
extern OSThread D_80031AE0;
extern OSThread D_800318B0;

extern s32  D_80032B30;
extern s32  D_80033330;

extern s32  D_800354F8;
extern s32 *D_800354FC; // contains chunk0 offsets
extern s16  D_80035500;
extern OSThread *D_80035910;

extern s32 D_800364C4;
extern OSMesgQueue D_80036B40;
extern OSMesg      D_80036B58;
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
extern s32 *D_800380B0;
extern s32 *D_800380B4;
extern s32 *D_800380B8;
extern s32 *D_800380BC;

extern s32  D_800380C0;
extern s32  D_800380C4;
extern s32  D_800380C8;
extern s32  D_800380CC;
extern s32  D_800380D0;
extern OSMesg      D_800380E0;
extern OSMesgQueue D_800388B0;

extern OSMesg      gMessage0;
extern OSMesgQueue gMessageQueue0;

extern OSMesg      gMessages[3];
extern OSMesgQueue gMessageQueue[3];

extern s32 D_80038904;
extern OSIoMesg D_80038950[];

extern u8  D_8003A570;
extern u8  D_8003A571;
extern u8  D_8003A572;
extern u8  D_8003A573;
extern u8  D_8003A574;
extern u8  D_8003A575;
extern u8  D_8003A580;
extern u8  D_8003A581;
extern u8  D_8003A582;
extern u8  D_8003A583;
extern u8  D_8003A584;
extern u8  D_8003A588;
extern u8  D_8003A5C8;

extern OSMesgQueue D_8003B1E8;
extern OSMesgQueue D_8003B200;
extern OSMesgQueue D_8003B218;

extern OSMesgQueue *D_8003B230;
extern OSPfs       *D_8003B234;
extern u8 D_8003B238;
extern u8 D_8003B239;
extern u8 D_8003B23A;
extern OSMesg      D_8003B240;

// extern s32 *D_8003B264;
extern OSThread    D_8003B6A0;
extern OSMesg      D_8003B660;
extern OSMesg      D_8003B670;
extern OSMesg      D_8003B680;

extern OSMesgQueue D_8003B9D0;
extern OSMesg      D_8003B9E8;
extern OSThread    D_8003B9F0;

extern u64  D_8003BC20;
extern u32  D_8003BC24;

extern s32  D_8003BC30;
extern s32  D_8003BD30;
extern s32  D_8003BE30;
extern u8   D_8003BE50[];
extern s32  D_8003BE70;
extern s32  D_8003BE74;
extern s16  D_8003BE78;
extern s8   D_8003BE7C;

extern s32  D_8003C8E0;
extern struct26 *D_8003C900[];
extern struct14 *D_8003CD40;
extern struct247  D_8003CD48[];
extern s16  D_8003C910[];

extern s32  D_8003E368;
extern s32  D_8003E370;
extern s32  D_8003E388;
extern struct50 *D_8003E390[];
extern OSThread  D_8003E3A0;
extern s32  D_8003E640;

extern OSMesgQueue *D_8003E608;
extern OSMesg      *D_8003E620;
extern OSMesgQueue *D_8003E5D0;
extern OSMesg      *D_8003E5E8;

extern s32  D_8003CA3C[];
extern u8   D_8003CA48[];
extern ALCSeq D_8003CA58[];
extern s32  D_8003C90C;

/* 80040000 */


extern s32  D_80040000;
extern struct147 D_800406A0;
extern struct54 *D_800406A4;
extern struct54 *D_800406B0;
extern u8   D_800406B8;
extern u32  D_80040AC8;  // 1200 byte struct?
extern struct147 D_80040F78;
extern u8   D_80040F84;
extern s32  D_80040F88;
extern s32  D_80040F8C;
extern s32  D_80040F90;
extern struct146 D_80040F98[];
extern u8   D_80041F00;
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
extern struct00 D_80041F68[];
extern s8   D_80041FD8;
extern u8   D_80041FD9;
extern s32  D_80041FDC;
extern struct15 D_80041FE0[];
// extern struct15 **D_80041FEC[]; // struct size 0x30 ?
extern s32 D_80041FEC[][12];

extern OSMesgQueue *D_80041298;
extern OSMesg      *D_800412B0;
extern OSMesgQueue *D_800416F0;
extern OSMesg      *D_80041708;

extern struct151* D_800417B0[];
extern u8 D_800418AC[];

extern u8 D_800419A0;
extern struct137 D_800419A8[12]; // 1200 bytes
extern OSMesgQueue D_80041E58[3];
extern struct117 D_80041EA0[3];

extern s32  D_80042760;
extern s32  D_80042770;
extern s32  D_80042774;
extern s32  D_80042778;
extern s32  D_8004277C;
extern f32  D_80042780;
extern f32  D_80042784;
extern f32  D_80042788;
extern f32  D_80042790;
extern f32  D_80042794;
extern f32  D_80042798;
extern s32  D_800427A0;
extern s32  D_800427B0;
extern s16  D_800427F4;
extern struct120 D_800425E0[];
extern struct124 *D_80042800;
extern s32  D_80042804;
extern u16  D_800428B8[];
extern u8   D_800428C0;
extern u8   D_800428C1;
extern u8   D_800428C2;
extern u8   D_800428C4[];
extern u8   D_800428C6[];
extern u8   D_800428C8[];
extern s32  D_800428E0;
extern s32 *D_800428F8;

// BSS ENDS AT D_80043B40

extern s32  *D_80043B40; // 4064
extern s32  D_80044B20; // 253952 bytes, bunch of structs?

// this space is filled by D_80044B20
// 0x80044B20 + 253952 = 0x80082B20

/* 80080000 */
extern s32  D_80082B20;
extern void (*D_80082B40[])(struct108 *);
extern u8   D_80082BB4;
extern u8   D_80082BC0;
extern u8   D_80082BE0[4];
extern u8   D_80082BE4[5];
extern void (*D_80082BFC[])(s32 arg0);
extern void (*D_80082D60[])(void);
extern void (*D_80082D90[])(void);
extern void (*D_80082EA0[])(void);
extern void (*D_80082ECC[])(void);
extern void (*D_80082F40[])(void);
extern void (*D_80082F70[])(void);
extern s32  D_80082FA0;
extern s32  D_80082FA4;
extern u8   D_80084064;
extern s32  D_80084300;
extern s16  D_80084480;
extern void (*D_800844B0[])(s32 arg0);
extern s32  D_800848B0;

extern f32 D_80085FD0;
extern f32 D_80085FD4;
extern f32 D_80085FD8;
extern f32 D_80085FDC;
extern f32 D_80085FE0;
extern f32 D_80085FE4;
extern f32 D_80085FE8;

extern f32 D_80085EB0;
extern f32 D_80085EB4;
extern f32 D_80085EB8;
extern f32 D_80085EBC;
extern u16 D_80085EC0[];
extern u16 D_80085F3C[];
extern u16 D_80085FBC[];

extern s32 D_80086000;
extern void (*D_80086004[])(s32);
extern void (*D_8008600C[])(s32);
extern void (*D_80086014[])(s32);
extern void (*D_80086150[])(s32);
extern void (*D_80086730[])(void);
extern s8  D_80087260;
extern s8  D_8008726C;
extern u8  D_80087280[];
extern u32 D_80087380;

extern u64 D_800885B0;
extern s32 D_80088720;
extern s32 D_80088730;
extern s32 D_80088750;
extern vertex D_80088724;
extern u8  D_80088980;
extern u8  D_80088B40;
extern u8  D_80088B60;
extern u8  D_80088B90;
extern u8  D_80088BB0;
extern s32 D_800894B0;
extern s32 D_80089520;
extern s32 D_80089524[]; // struct arrays?
extern s32 D_80089534[];
extern s16 D_80089550;
extern void (*D_80089C44[])(void);
extern void (*D_80089C54[])(void);
extern void (*D_80089EE8[])(void);
extern void (*D_80089EF0[])(void);
extern void (*D_80089EF8[])(void);
extern void (*D_80089F2C[])(void);
// extern void (*D_80089F60[])(s32, s32);
extern void (*D_80089F60[])(s32, s32, u8);
extern s32 D_8008A074[2];
extern struct32 D_8008A0B4[];
extern s32  D_8008A084[];
extern s32  (*D_8008B0F0[])(void);
extern u8   (*D_8008B1F8[])(struct225*);
extern void (*D_8008B208[])(struct225*);
extern void (*D_8008B2B0[])(struct225*);
extern s32 (*D_8008B36C[])(void);
extern s32 (*D_8008B370[])(s32);
extern void (*D_8008B374[])(s32);

extern struct115 D_8008B4A8[];
extern struct115 D_8008B4D0[];
extern struct115 D_8008B4D4[];


extern u8   D_8008CEB0;
extern u8   D_8008CD00;
extern s32  D_8008CFFC[];

extern s8   D_8008FD8C;
extern s8   D_8008FD90;
extern s32  D_8008FD94;
extern s8   D_8008FDA8;
extern u16  D_8008FDBC;

/* 8009 */
extern s32 D_800902B8;
extern s32 D_800902E4;
extern s32 D_800902E8;
extern s32 D_800902EC;
extern s32 D_80090310;
extern s32 D_80090314;
extern s32 D_80090318;
extern s32 D_8009031C;
extern s32 D_80090320;

extern s32 jtbl_80091A30[];

extern s32 D_80091AF0[];
extern s32 D_80091C04[];
extern s32 D_80091D20[];

// chunk0 data starts at rom 0x80082B20
// this chunk0 data
// D_800959E0 is 0x80082B20 + 0x00012ec0

extern f32 D_80095B10;
extern f32 D_80095B14;
extern f32 D_80095B18;
extern f32 D_80095B1C;
extern f32 D_80095B20;
extern f32 D_80095B24;
extern u8  D_80095B27[];
extern f32 D_80095B28;
extern f32 D_80095B2C;
extern f32 D_80095B30;
extern f32 D_80095B40;
extern f32 D_80095B44;
// func_15009990 suggests they are u8, but they look like floats!
extern u8 D_80095B48[]; // 0.002188183832913637
extern u8 D_80095B4C[]; // 20.100000381469727
extern u8 D_80095B50[]; // 0.4000000059604645

extern f32 D_80095B54;
extern u8  D_80095B70[4];
extern u8  D_80095B74[2];
extern f32 D_80095BB8;
extern f32 D_80095BBC;
extern f32 D_80095BC0;
extern f32 D_80095BC4;
extern f32 D_80095BC8;
extern f32 D_80095BCC;
extern f32 D_80095BD0;
extern f32 D_80095BD4;
extern f32 D_80095BD8;

extern f32 D_8009616C;
extern f32 D_80096170;
extern f32 D_80096174;
extern f32 D_80096178;
extern f32 D_8009617C;
extern f32 D_80096180;
extern f32 D_80096184;

extern f32 D_800961A8;
extern f32 D_800961AC;
extern f32 D_800961B0;
extern f32 D_800961B4;
extern f32 D_800961B8;
extern f32 D_800961BC;
extern f32 D_800961C0;

extern s32 D_80096210;
extern f32 D_80096214;
extern f32 D_80096218;
extern f32 D_8009621C;
extern f32 D_80096220;
extern f32 D_80096224;
extern f32 D_80096228;
extern f32 D_8009622C;
extern f32 D_80096230;
extern f32 D_80096234;
extern f32 D_80096238;
extern f32 D_8009623C;
extern f32 D_80096240;
extern f32 D_80096244;

extern f32 *D_800963A0;
extern struct180 *D_80096430; // 6 x s32?

extern f32 D_80096530;
extern f32 D_80096534;

extern f32 D_80096540;

extern f32 D_80096560;
extern f32 D_80096570;
extern u32 D_8009667C;
extern f32 D_800968B0;
extern f32 D_800968C0;
extern s32 D_800968E0;

extern f32 D_80098D90[];
extern f32 D_80098DB0; // 0.008726646192371845
extern f32 D_80098DB4; // 0.008726646192371845

extern f32 D_800990B0; // 0.6931471824645996f
extern f32 D_800990B4; // 0.6931471824645996f
extern s8  D_80099140[];
extern u16 D_8009919C[6];
extern f32 D_800991A8;
extern f32 D_800991AC;
extern f32 D_800991B0;
extern f32 D_800991D4; // 0.10000000149011612f
extern f32 D_80099408;
extern f32 D_8009940C;
extern f32 D_80099410;
extern f32 D_80099414;
extern f32 D_80099418;
extern f32 D_8009941C; // 0.949999988079071

extern f32 D_80099444;
extern s16 D_80099A3C[];
extern s16 D_80099A3E;
extern u8  D_80099A43;
extern s16 D_80099AB4[];
extern s16 D_80099ABC[];

extern f32 D_80099C1C;
extern f32 D_80099C34;
extern f32 D_80099C38;
extern f32 D_80099C3C;
extern f32 D_80099C40;
extern f32 D_80099C44;

extern f32 D_80099D44;
extern f32 D_80099D4C;
extern f32 D_80099DA0;
extern f32 D_80099DA4;
extern f32 D_80099DA8;

extern f32 D_80099E98;
extern f32 D_80099E9C;

extern f32 D_80099F30;
extern f32 D_80099F4C;

extern f32 D_8009A020[];
extern f32 D_8009A0E8;
extern f32 D_8009A0EC;
extern f32 D_8009A0F0;
extern f32 D_8009A0F4;
extern f32 D_8009A0F8;
extern f32 D_8009A0FC;
extern f32 D_8009A100;
// code_75400.c
extern f32 D_8009A13C; // 1.399999976158142
extern f32 D_8009A140;
extern f32 D_8009A144;
extern f32 D_8009A148;
extern f32 D_8009A1E4;

extern f32 D_8009A220[];
extern f32 D_8009A420[];
extern f32 D_8009A620[];

extern s16 D_8009DCB4[];
extern f32 D_8009F6C0; // 0.01745329238474369f

/* 800A0000 */
extern f32 D_800A028C;
extern f32 D_800A0288;
extern f32 D_800A0290;
extern f32 D_800A0310;
extern f32 D_800A0314;
extern f32 D_800A1B80;
extern f32 D_800A1B8C;
extern f32 D_800A1B98;
extern f32 D_800A1B9C;
extern f32 D_800A1BA0;
extern f32 D_800A1FB0;
extern f32 D_800A1FBC;
extern f32 D_800A2148;
extern f32 D_800A2154;
// extern struct201 D_800A2CD0[];
extern u8  D_800A2CD0[][3];

extern s32 D_800A4AA0; //?
extern f32 D_800A5168;
extern f32 D_800A5178;
extern f32 D_800A5644;
extern f32 D_800A56A8;
extern f32 D_800A56AC;
extern f32 D_800A56B4;
extern f32 D_800A56B8;
extern f32 D_800A56BC; // 57.2957763671875
extern f32 D_800A56C0;
extern f32 D_800A56C4;
extern f32 D_800A56C8;

// in game_18D770.c
extern u8  D_800A6690[5];  // "scale"
extern u8  D_800A6698[24]; // "../Effects/Light/light.c"
extern f32 D_800A66B4[3];  // { 0.0f, -415.0f, 0.0f }
extern f32 D_800A66C0[9];  // { 70.0f, 38.0f, 70.0f, 55.0f, 50.0f, 80.0f, 140.0f, 70.0f, 34.0f };
extern s32 D_800A66E4[10]; // { 1099, 1100, 1101, 1102, 1103, 1104, 1105, 1106, 1107, 1108 }
extern s32 D_800A6A0C;
extern f32 D_800A6AD4;     // 0.005000000353902578f
extern f32 D_800A6AD8;     // 6.2831854820251465f
extern f32 D_800A6ADC;     // 0.10209999978542328f
extern f32 D_800A6AE0;     // 0.24889999628067017f
extern f32 D_800A6AE4;     // 0.07999999821186066f
extern f32 D_800A6AE8;     // 6.2831854820251465f
extern f32 D_800A6AEC;     // 0.07660000026226044f
extern f32 D_800A6AF0;
extern f32 D_800A6AF4;
extern f32 D_800A6AF8;
extern f32 D_800A6AFC;
extern s32 D_800A670C[][3]; // { {128.0f, 59.5f, 59.5f}, {187.0f, 59.5f, 59.5f}, {128.0f, 17.5f, 0.0f} }
extern s32 D_800A6730[][3];
extern f32 D_800A6754[];
extern f32 D_800A6760[24];
extern f32 D_800A67C0[24];
extern f32 D_800A6820[24];
extern f32 D_800A6880[];
extern f32 D_800A6894[];
extern f32 D_800A68A8[];
extern f32 D_800A68BC[];
extern f32 D_800A68D0[];
extern f32 D_800A68E4[];
extern f32 D_800A68F8[3];
extern f32 D_800A6904[3];
extern f32 D_800A6910[3];
extern s32 D_800A691C[3];
extern s32 D_800A6928[3];
extern f32 D_800A6934[3];
extern f32 D_800A6940[3];
extern f32 D_800A694C[3];
extern f32 D_800A6958[3];
extern f32 D_800A6964[14];
extern f32 D_800A699C[14];
extern f32 D_800A69D4[14];

extern f32 D_800A6B00; // 6.2831854820251465f
extern f32 D_800A6B04; // 3.1415927410125732f
extern f32 D_800A6B08;
extern f32 D_800A6B0C;
extern f32 D_800A6B10;

extern u16 D_800AB140[];
extern s32 D_800AB168[1];
// game_2062D0.c
extern u8  D_800AB340[3]; // 88, 64, 62
extern u8  D_800AB344[5]; // 46, 48, 45, 51, 52
extern u8  D_800AB34C[4]; // 96, 97, 98, 99
extern s32 D_800AB350[7]; // 0, 1, 2, 58, 59, 60, 61
extern s32 D_800AB36C[3]; // 15, 16, 17
extern s32 D_800AB384[2]; // 28, 29
extern s32 D_800AB378[3]; // 143, 144, 145
extern s32 D_800AB38C[2]; // 8, 9
extern s32 D_800AB394[5]; // 49, 50, 51, 13, 14
extern s32 D_800AB3A8[3]; // 150, 151, 152
extern s32 D_800AB3B4[2]; // 27, 28
extern s32 D_800AB3BC[3]; // 160, 161, 162
extern s32 D_800AB3C8[1]; // 179
extern s32 D_800AB3CC[3]; // 185, 186, 187
extern s32 D_800AB3D8[4]; // 96, 97, 98, 99
extern f32 D_800AB3E8; // 0.0f;
extern f32 D_800AB3EC; //-1.0f

extern f32 D_800AB464;
extern f32 D_800AB468;
extern f32 D_800AB46C; // 0.0003000000142492354f
extern f32 D_800AB4C0;
extern f32 D_800AB4C4;
extern f32 D_800AB4C8;
extern f32 D_800AB4CC;
extern f32 D_800AB4E4;
extern f32 D_800AB4E8;
extern f32 D_800AB4EC;
extern f32 D_800AB4F0;
extern f32 D_800AB4F4;

extern f32 D_800A5480;
extern f32 D_800A548C[];

// end of data D_800B0DBC

/* 800B0000 */

extern s32  D_800B0DC0;
extern s32  D_800B0DC4;
extern s32  D_800B0DC8;
extern s32  D_800B0DCC;
extern s32  D_800B0DD0;
extern s32  D_800B0DD4;
extern u16  D_800B0DD8;
extern s32  D_800B0DDC;
extern u8  *D_800B0DE0;
extern s32  D_800B0DE4;
extern struct104 *D_800B0DF0;
// extern struct00 *D_800B0E00;
extern s32 D_800B0E00[];
extern s32  D_800B0E04;

extern s32  D_800B0E30[];
extern u8   D_800B0E34[];

extern s32 D_800B0E58[7762];

extern s32 D_800B87A0[];

extern u8  D_800BC448[];

extern s32 D_800BE4A0; // struct/array of size 0x3c
extern struct14 *D_800BE4F0;
extern s32 D_800BE4E0;
extern u8  D_800BE500[5]; // might be a struct?
extern s32 D_800BE570;
extern u8  D_800BE574;
extern u8  D_800BE575;
extern s32 D_800BE5D0;
extern u8  D_800BE5E0;
extern u8  D_800BE9A0;
extern f32 D_800BE9A4;
extern f32 D_800BE9A8;
extern s32 D_800BE9F0;


extern s32  D_800BE2B0[]; // type?
extern OSMesg  D_800BE2D0;
extern u8   D_800BE358[8];
extern s8   D_800BE3D8;
extern s8   D_800BE3D9;
extern s8   D_800BE3DA;
extern s8   D_800BE3DB;
extern s16  D_800BE3DC;
extern u8   D_800BE3DE;
extern u8   D_800BE3DF;
extern u8   D_800BE3E0;
extern s32  D_800BE3E8;
extern u8   D_800BE3EC;
extern struct162 *D_800BE3F8;

extern u8   D_800BE614;
extern u8   D_800BE615;
extern u8   D_800BE616;
extern u8   D_800BE617;
extern s8   D_800BE618;
extern s32  D_800BE620;
extern s32  D_800BE624;
extern struct140 D_800BE628[]; // contains structs size 0x180
// extern s32 D_800BE628;
extern s32  D_800BE62C;
extern u8   D_800BE635;
extern s32  D_800BE638;
extern s32  D_800BE63C[];
extern s32  D_800BE650;
extern s32  D_800BE654[];
extern f32  D_800BE6B8;
extern struct156 D_800BE760[];
extern OSMesgQueue D_800BE900;
extern u8   D_800BE938;
extern s32  D_800BE9D0;
extern s32  D_800BE9D8[];

extern u8   D_800BE93C[];

extern u16  D_800BE710[];
extern u16  D_800BE720[];
extern s32  D_800BE728[];
extern u8   D_800BE940[];
extern u8   D_800BE944[];
extern u8   D_800BE948[];
extern f32  D_800BE950[];
extern f32  D_800BE960[];
extern f32  D_800BE970[];
extern f32  D_800BE980[];

extern OSMesg      D_800BE990;
extern u8   D_800BE9B4;
extern u8   D_800BE9C0;
extern s32  D_800BE9C4;
extern s32  D_800BE9E0; // OSMesg
extern s32  D_800BE9E4;
extern s32  D_800BE9E8;
extern u8   D_800BE9EC;
extern u8   D_800BE9ED;
extern u16  *D_800BE9F4; // was u16
extern s32  D_800BE9F8;

extern struct14 D_800BE730;
extern s32 D_800BE748;
extern s32 D_800BE74E;
extern s32 D_800BE754;
extern s32 D_800BE75A;

extern s32 D_800BEA00[]; // struct04
extern s32 D_800BEA04[]; // struct04
extern s32 D_800BEA08;
extern OSMesgQueue D_800BEA10;
extern OSMesg      D_800BEA28;
extern struct195  *D_800BEA68;
extern u16 D_800BEAA8;
extern u8  D_800BEAAA;
extern u8  D_800BEAAB;
extern u8  D_800BEAC0;
extern u8  D_800BEAC1;

/* 800C0000 */

extern u16 D_800C18B8[];
extern u8  D_800C35C4;
extern u8  D_800C35C5;
extern u8  D_800C35EA;
extern struct168 *D_800C3600;
extern u8  D_800C3638;
extern s32 D_800C3654;
extern u8  D_800C3663;
extern u8  D_800C3670;
extern u8  D_800C3671;
extern u8  D_800C3681;
extern u8  D_800C3682;
extern u8  D_800C3683;
extern struct233 *D_800C3958;
extern u8  D_800C3C88;
extern u8  D_800C3C90;
extern s32 D_800C3C94;
extern struct163 D_800C3CA0[3];
extern u8  D_800C3E78;
extern u16 D_800C3E7C;
extern s32 D_800C3E80;
extern s32 D_800C3E84;
extern s32 D_800C3EE0;
extern struct222* D_800C3FC0;
extern s32 D_800C3FC4;
extern s64 D_800C3A60[];
extern u8  D_800C4000;

extern s16 D_800C5A90[187]; // 374 bytes, 187 shorts
extern s32 D_800C5C08[187];
extern s32 D_800C6070[187];
extern s32 D_800C6360[187];

extern struct160 D_800C6650[];
extern s32 D_800C6654;
extern struct106 D_800C6660[];
extern u8  D_800C67F0;
extern u8  D_800C67F1;
extern s32 D_800C6860[];
extern u8  D_800C68A0;
extern u8  D_800C68A1;

extern s32 D_800CBE00;
extern u8  D_800CBD60;
extern u8  D_800CBD61;
extern u8  D_800CBD62;
extern u8  D_800CBD63;
extern s32 D_800CBD64;
extern s16 D_800CBD70;
extern s16 D_800CBD72;
extern u8  D_800CBD74;
extern u32 D_800CBD78;
extern s16 D_800CBD7C;

extern f32 D_800CBD80;

extern f32 D_800CC210;
extern f32 D_800CC214;
extern f32 D_800CC218;
extern f32 D_800CC21C;
extern f32 D_800CC220;
extern f32 D_800CC224;
extern f32 D_800CC228;
extern f32 D_800CC22C;
extern f32 D_800CC230;
extern f32 D_800CC234;
extern f32 D_800CC238;
extern f32 D_800CC23C;

extern s32 D_800CC250;

extern s16 D_800CC264;
extern s32 D_800CC268;
extern u8  D_800CC26E;
extern u8  D_800CC27C;
extern s32 D_800CC280;
extern s32 D_800CC284; //pointer to 6 u8s
extern s32 D_800CC288;
extern s32 D_800CC298; // 0x18 length
extern u8  D_800CC2A2;

extern f32 D_800CC2C0;
extern f32 D_800CC2C4;
extern f32 D_800CC2C8;

extern u8  D_800CC2B0;
extern u8  D_800CC2B8;
extern s32 D_800CC2BA;
extern s32 D_800CC2BC;
extern struct127 D_800CC2D0[26]; // objects
extern u8  D_800CC2D4[];
extern f32 D_800CC2E8[];
extern f32 D_800CC30C[];
extern u8  D_800CC335;
extern u16 D_800CC34A[];
extern u8  D_800CC37D;
extern u8  D_800CC3D4[];
extern s8  D_800CC3D7;
extern u8  D_800CC3F5[] ; // ??

extern struct127  D_800CC5A0[];
extern u8  D_800CC521[]; // ??

extern struct127 *D_800CE370;

/* 800D0000 */

extern f32 D_800D1550[];
extern s32 D_800D1580; // array?
extern s16 D_800D1582;
extern u8  D_800D1583;
extern s32 D_800D1588[187];  // 748 bytes
extern s32 D_800D1548;
extern struct127 *D_800D154C;

extern f32 D_800D1874;
extern f32 D_800D1878;
extern s32 D_800D1880;
extern u8  D_800D1890;
extern u8  D_800D1891;
extern u8  D_800D1892;
extern u8  D_800D1893;
extern f32 D_800D1898[];
extern u16 D_800D18A0;
extern u16 D_800D18A2;
extern s32 D_800D18A4;
extern u8  D_800D18A8;
extern u8  D_800D18C0;
extern u8  D_800D18D0;

extern u8  D_800D1940;
extern u8  D_800D1941;
extern s32 D_800D1944;
extern s32 D_800D1948;
extern s32 D_800D194C;
extern s32 D_800D1950;
extern s32 D_800D1958[12]; // 48 bytes long, struct?
extern f32 D_800D1988;
extern f32 D_800D198C;
extern f32 D_800D1990;
extern u8  D_800D1994;
extern u8  D_800D1995;
extern s32 D_800D1998;

extern s32 D_800D19A0;
extern struct124 *D_800D1C90[187]; // 748 bytes, 187 pointers? 17 structs?
extern s32 D_800D1F80[187]; // 187 bytes long
extern s32 D_800D2040[187]; // 187 bytes long
extern struct39 *D_800D20FC;

extern s32 D_800D2104[];
extern s32 D_800D2108;
extern s16 D_800D2110[];
extern s32 D_800D2120;
extern s32 D_800D2124;
extern s32 D_800D2128;
extern struct187 *D_800D212C;
extern s32 D_800D2138;

extern s16 D_800D2340;
extern u8  D_800D23A9;
extern s32 D_800D23C0;
extern s32 D_800D23D0;

extern f32 D_800D2410[];
extern f32 D_800D2428[3];
extern f32 D_800D2438[3];
extern s32 D_800D2444;
extern s32 D_800D2448;
extern s32 D_800D244C;
extern u8  D_800D2454;
extern u8  D_800D2456;
extern u8  D_800D2457;
extern u8  D_800D2458;
extern s32 D_800D245C;
extern u8  D_800D2460[][16];
extern u8  D_800D246D;
extern u8  D_800D247D;
extern s32 D_800D2548;
extern s32 D_800D2588;
extern s32 D_800D24C0;
extern s32 D_800D24C8;

extern u8  D_800D2C68;
extern s32 D_800D2C28;
extern s32 D_800D2C2C;

extern s32 D_800D2E50;
extern u8  D_800D2E60[];
extern s32 D_800D2E70; // struct/array of size 0xF0
extern u8  D_800D2E41;
extern u8  D_800D2E42;
extern u8  D_800D2E43;
extern u8  D_800D2E44;
extern u8  D_800D2E45;
extern struct102 *D_800D2E4C;

extern u8  D_800D2F3C;
extern u16 *D_800D2F40;
extern struct248 D_800D2F48; // bzero'd 0xC
extern f32 D_800D2DB0;
extern s32 D_800D2DB4;

extern s32 D_800D3094;
extern struct178 D_800D3098[73];
extern struct00 *D_800D3300;
extern s32 D_800D35DC;
extern s32 D_800D3668;
extern s32 D_800D366C;
extern f32 D_800D3670;
extern s16 D_800D3674;
extern s32 D_800D3858;

extern s32 D_800D98E0;
extern u8  D_800D987C;
extern u8  D_800D9890;

extern u8  D_800D9930[];
extern u8  D_800D9920;
extern u8  D_800D9921;
extern u8  D_800D9928;
extern u8  D_800D9929;
extern u8  D_800D9938;
extern u8  D_800D9939;
extern u8  D_800D992A[];
extern u8  D_800D993A[];

extern s32 D_800D99D0[8];
extern struct134 *D_800D9A20;
extern struct134 *D_800D9A24;
extern s32 D_800D9A40;
extern s32 D_800D9A50;
extern struct134 *D_800D9AA0[]; // length 3?
extern u16 D_800D9AB0[4];
extern struct17 D_800D9AC0[];
extern u8 D_800D9AF0;
extern struct200 D_800D9AF8[];

extern u8  D_800D9B18;
extern f32 D_800D9B1C;
extern f32 D_800D9B20;
extern u8  D_800D9B68[4][3];
extern u8  D_800D9B78[4][3];
extern u8  D_800D9B84[];
extern u8  D_800D9B88[];
extern u8  D_800D9B8B;
extern u8  D_800D9B8C;
extern u8  D_800D9BD0[][2][8];
extern s32 D_800D9E10[];
extern u8  D_800D9E20;

// extern u16 D_800D9E70[][3];
// extern u8 D_800D9E88[][3];
// extern u8 D_800D9E98[][3];
// extern u8 D_800D9EA8[][3];
// extern u8 D_800D9EB4[][3];
// extern u8 D_800D9EB8[][3];
//
// extern u8 D_800A2D04[][3];
// extern u8 D_800A2CE8[][3];
// extern u8 D_800A2CEC[][3];

extern s32 D_800D9D10[];
extern u8  D_800D9E64;
extern s32 D_800D9F58;
extern s32 D_800D9F5C;
extern u8  D_800D9F60;

extern s32 D_800DBDD8[];
extern s32 D_800DBDE8[];
extern s32 D_800DBDF8[];

extern u16* D_800DBE08[];
extern s32 D_800DBE18[];
extern s32 D_800DBE1C[];
extern s32 D_800DBE20;
extern s32 D_800DBE24;
extern s16 D_800DBE28;
extern s16 D_800DBE2A;
extern s16 D_800DBE2C;
extern u16 D_800DBE30;
extern u16 D_800DBE32;
extern u16 D_800DBE34;
extern u16 D_800DBE36;
extern s32 D_800DBE38;
extern s32 D_800DBE3C;
extern s32 D_800DBE4C;
extern s32 D_800DBE50;
extern s32 D_800DBE5C;
extern u8  D_800DBE62;
extern u8  D_800DBE63;
extern f32 D_800DBE64;
extern s32 D_800DBEF0;
extern struct131 *D_800DBEF4; // ???
extern s32 D_800DBEF8[];
extern s8  D_800DBEFC[];
extern u8  D_800DBF00;
extern u8  D_800DBF88;
extern s32 D_800DBF8C;
extern s32 D_800DBF90;
extern struct108 *D_800DBFF0;
extern u8  D_800DBFF4[];
extern u8  D_800DBFF5;
extern u8  D_800DBFF6;
extern u8  D_800DBFF7;

extern s32  D_800DC010;
extern s32 D_800DC020;
extern struct10 *D_800DC2A0; // TODO: find correct struct
extern s32 D_800DC2B0;
extern struct112 D_800DCC10[];
extern s32 D_800DC460;
extern s32 D_800DC464;
extern u16 D_800DC468[];
extern s32 D_800DC63C;
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
extern f32 D_800DCD90;
extern f32 D_800DCD94;
extern f32 D_800DCD98;
extern f32 D_800DCD9C;
extern f32 D_800DCDA0;

extern struct100 *D_800DCD20;
// extern struct100 *D_800DCD24;
// extern struct100 *D_800DCD28;

extern s8 D_800DCD24[3];
extern u8 D_800DCD28[3];

extern s32  D_800DCDC4; // probably wrong type
extern u8   D_800DCDD0;
extern s8   D_800DD190;
extern u8   D_800DD198[]; // 24 bytes
extern f32  D_800DD1D8[];
extern f32  D_800DD1E8[];

extern u8   D_800DD2C0;
extern u8   D_800DD2D0;
extern u8   D_800DD2A0;
extern u8   D_800DD2A1;
extern u8   D_800DD2A2;
extern u8   D_800DD2A3;

extern u8   D_800DD404;
extern u8   D_800DD405;
extern u8   D_800DD406;
extern s32  D_800DD410[2];
extern u8   D_800DD418;
extern u16  D_800DD444;
extern s32  D_800DD460[2];
extern s32  D_800DD478; // struct/array of size 0x618 (1560)

extern s32  D_800DDA90; // struct/array of size 0xf0
extern s32  D_800DDC00;
extern s32  D_800DDC08;
extern s32  D_800DDC04;
extern s32  D_800DDD10[];
extern s32  D_800DDD0C;
extern u8   D_800DDD1C;
extern s32  D_800DDD20;
extern u8   D_800DDD61;
extern s32  D_800DDD64;

extern u8   D_800DDDAC;
extern u8   D_800DDDAD;
extern u8   D_800DDDAE;
extern u8   D_800DDDAF;
extern s32  D_800DDDB0;
extern s32  D_800DDDB4;
extern s32  D_800DDDB8;
extern s32  D_800DDDBC;
extern f32  D_800DDDC8;
extern f32  D_800DDDCC;
extern f32  D_800DDDD0;
extern f32  D_800DDDD4;
extern f32  D_800DDDD8;
extern f32  D_800DDDDC;
extern f32  D_800DDDE0;
extern f32  D_800DDDE4;
extern u16  D_800DDE08;
extern s32  D_800DDE18;
extern u8   D_800DDE1C;
extern u8   D_800DDE1D;
extern u8   D_800DDE1E;
extern u8   D_800DDE1F;
extern u8   D_800DDE20;
extern u8   D_800DDE21;
extern u8   D_800DDE22;
extern u8   D_800DDE23;
extern s32  D_800DDE2C;
extern s32  D_800DDE28;
extern s32  D_800DDE30;
extern s32  D_800DDE34;
extern u8   D_800DDE38;
extern u8   D_800DDE3C;
extern u8   D_800DDE3D;
extern u8   D_800DDE3E;
extern u8   D_800DDE3F;
extern u8   D_800DDE40;
extern u8   D_800DDE50;
extern s32  D_800DDE80[55]; // 220 bytes?

extern s32  D_800DF7C8[];
extern u8   D_800DDF5C[];
extern u8   D_800DDF60[];
extern s8   D_800DDF68[];
extern s32  D_800DDF78[];

/* 800E0000 */
extern u8   D_800E0B94;
extern s32  D_800E0C20;
extern s32  D_800E0E04;
extern struct134 *D_800E0900[]; // probably not struct134
extern s32  D_800E0930;
extern s32  D_800E0934;
extern s32  D_800E0940;
extern u8   D_800E0950;
extern s32  D_800E0964;
extern s16  D_800E0968[];
extern s32  D_800E0990[];
extern u8   D_800E0A10;
extern struct186 D_800E0D80; // libaudio struct?

// end of zero'd out section

extern s32  D_800E9D00;
extern s32  *D_800E9D10; // probably not struct54

/* debugger variables */

extern s32  D_16001B8C; // a struct
extern s8   D_160036F3; // control stick Y-axis ?
extern s32  D_16003848[];
extern u8   D_16003888;
extern u16  D_1600388C;
extern s32  D_160038A0;
extern u8   D_160038A4;
extern s32  D_160038A8;
extern s32  D_16003890;
extern s32  D_16003AF0;
extern u8   D_16003AF4;
extern s8   D_16003B1C;
extern s32  D_16003B20[]; // array containing 0x20 structs?
extern s8   D_16003B28;
extern s32  D_16003B4C;
extern struct118 *D_1600389C; // array or struct?

extern u8   D_160046AC[]; // data
extern u8   D_160046D0[];
extern u8   D_160046DC[];
extern u8   D_160046E8[];
extern u8   D_160046F4[];
extern u8   D_16004700[];
extern u8   D_16004708[];
extern u8   D_16004710[];
extern u8   D_1600471C[];
extern u8   D_16004728[];
extern u8   D_1600472C[];
extern u8   D_16004734[];
extern u8   D_16004738[];
extern u8   D_16004740[];
extern u8   D_16004748[];
extern u8   D_160047B0[];
extern u8   D_160047BC[];
extern u8   D_160047C0[];
extern u8   D_160047D0[];
extern u8   D_160047D4[];
extern u8   D_160047DC[];
extern u8   D_160047E0[];

/* other */

extern u32  D_00AB1950; // offsets table

extern s32  D_100290D0; // start of data (?)
extern s32  D_100291A0;
extern s32 *D_1002AAD0;
extern s32  D_151F3C4C;

/* what is this */
extern s16  D_BC000C02;
extern s32  D_1FC007FC;

#endif
