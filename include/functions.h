#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <ultra64.h>

#include "structs.h"

/* matching */
void func_80001050(void);
void func_800010F8(s32 arg0);
void func_80001444(void);
void func_800014A0(void);
s32  func_80002070(s32 arg0, s32 arg1, s32 arg2);
// void func_80002088(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_8000349C(s32 arg0);
s32  func_8000390C(void);
void func_80003930(void);
void func_800039B0(void);
void func_800039C0(void);
s32  func_80003C40(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_80004470(void);
void func_80004674(void);
void func_80004FE0(void);
void func_80005020(void);
void func_800051E8(void);
void func_80005218(void);
void func_80005298(void);
void func_800084D8(u8 arg0);
void func_8000853C(u8 arg0);
void func_80008570(u8 arg0, s32 arg1);
void func_800085A4(s32 arg0, s32 arg1, s32 arg2);
void func_800085F8(u8 arg0, s32 arg1);
void func_8000862C(u8 arg0, s32 arg1);
void func_80008B2C(u8 arg0);
void func_80008F24(u8 arg0);
void func_80008F58(u8 arg0);
void func_800093CC(void);
void func_80009B2C(struct54 *arg0);
void func_80009B4C(struct54 *arg0);
void func_80009B90(struct54 *arg0);
s32  func_8000BBE8(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32  func_8000E704(s32 arg0, s32 arg1, s32 arg2);
void func_8000E75C(s32 arg0);
s32  func_8000E770(s32 *arg0, s32 *arg1);
u16  func_8000EA94(s32 arg0);
s32  func_8000EF40(struct57 *arg0, struct57 *arg1, s32 *arg2, s32 arg3, s32 arg4, s32 arg5, u16 *arg6);
void func_80011E88(s32 arg0);
void func_80011E94(s32 arg0);
void func_80011FA0(s32 *arg0);
void func_80011FDC(s32 arg0);
void func_80011FEC(void);
void func_80012560(s32 arg0);
void func_80012588(s32 arg0);
void func_800125CC(s32 arg0);
void func_8001263C(s32 arg0, s32 arg1, s32 arg2);
void func_800126E8(s32 arg0, s32 arg1);
s32  func_800127D0(void);
void func_80012820(struct14 *arg0, s32 arg1, s32 arg2);
s32  func_80012844(s32 arg0, s32 arg1, struct15 *arg2, u32 arg3, u32 arg4);
void func_800128D0(struct8 *arg0, s32 arg1);
void func_80012B84(struct11 *arg0, s32 arg1);
void func_80012C5C(struct9 *arg0, s32 arg1, s32 arg2);
void func_80012CFC(struct12 *arg0, s32 arg1, s32 arg2);
void func_800131D8(s32 *arg0);
void func_80015550(struct26 *arg0, s32 arg1);
s32  func_80015878(struct04 *arg0);
void func_80016E90(struct31 *arg0);
struct31 *func_80017100(s32 arg0, s16 arg1);
void func_80017298(struct31 *arg0);
s32  func_800173C4(struct31 **arg0);
void func_80017594(struct31 *arg0);
void func_800176C4(void);
void func_800176EC(void);
void func_80017714(s32 arg0, s16 arg1, s32 arg2);
void func_80017870(u8 arg0);
void func_80017944(s32 arg0, u32 arg1);
s32  func_80017A80(struct26 *arg0);
void func_80017AA0(struct26 *arg0);
void func_80017AF0(struct26 *arg0, s32 arg1);
void func_80017B04(struct26 *arg0, s32 arg1, u8 arg2);
void func_80017B30(struct26 *arg0);
void func_80017BB8(struct26 *arg0, s32 arg1);
void func_80017C00(struct26 *arg0, s32 arg1);
void func_80017C68(struct26 *arg0, s32 arg1, u8 arg2, u8 arg3);
void func_80017CE0(struct26 *arg0, s32 arg1, u8 arg2);
void func_80017D30(struct26 *arg0, s32 arg1, u8 arg2);
void func_80017D80(struct26 *arg0, u8 arg1, u8 arg2);
void func_80017DF0(struct26 *arg0, f32 arg1, f32 arg2);
void func_80017E4C(struct26 *arg0, u8 arg1, u8 arg2);
s32  func_80017EC0(struct18 *arg0);
void func_80017F10(struct26 *arg0, u8 arg1, u8 arg2, u8 arg3, s32 arg4);
s32  func_80018BC4(s32 arg0, s32 arg1);
void func_80018C60(struct26 *arg0);
void func_80018CB0(struct26 *arg0, s32 arg1);
void func_80018D00(struct26 *arg0, s16 arg1);
void func_80018D50(struct26 *arg0);
void func_80018DA0(struct07 *arg0, s32 arg1);
void func_80018E0C(s32 arg0);
void func_80019744(struct36 **arg0);
s32  func_80019964(s32 arg0);
f32  func_80019AB0(s32 arg0);
void func_80019B50(struct26 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_80019C28(struct26 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_80019CD0(struct26 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_80019CFC(struct21 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_80019D6C(struct26 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_80019ED8(struct26 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_80019F38(struct26 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_80019F98(struct26 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_8001A224(struct26 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_8001A39C(struct26 *arg0, s32 arg1, s32 arg2, u32 arg3);
void func_8001A3E0(struct24 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_8001A3FC(struct26 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_8001A9DC(struct26 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_8001AA08(struct26 *arg0, s32 arg1, s32 arg2, s32 arg3);
s32  func_8001B40C(struct07 *arg0, s32 arg1);
void func_8001B620(struct26 *arg0, s32 arg1);
void func_8001C770(struct22 *arg0);
void func_8001C910(struct22 *arg0, s16 arg1, s32 arg2);
void func_8001C9E0(struct22 *arg0, f32 arg1);
void func_8001CA90(struct22 *arg0, f32 arg1);
void func_8001CB40(struct22 *arg0, u8 arg1);
void func_8001CBF0(f32 arg0, f32 arg1, f32 arg2, struct17 *arg3, struct17 *arg4);
void func_8001D6E8(struct42 *arg0, s32 (*arg1)(s32 arg), struct15 *arg2);
void func_8001D900(struct22 *arg0, u8 arg1);
s32  func_8001D9B0(s16 arg0);
s32  func_8001DA28(s16 arg0);
void func_8001DAA0(s32 arg0, s16 arg1, s32 arg2);
void func_8001E170(struct22 *arg0, s32 arg1, f32 arg2, s16 arg3, u8 arg4, u8 arg5, u8 arg6, f32 arg7, u8 arg8, s32 arg9);
void func_8001E2A0(struct22 *arg0, u8 arg1);
void func_8001E350(struct22 *arg0, u8 arg1);
void func_8001E400(struct26 *arg0, s32 arg1, u8 arg2, u8 arg3, u8 arg4);
void func_8001E480(void);
void func_8001E494(void);
s32  func_8001E4A0(s16 arg0, s32 arg1, s32 arg2);
s32  func_80022338(struct21 *arg0, s32 arg1, s32 arg2);

/* chunk0 */
void func_85000090(void);
void func_85000AC0(void);

void func_85001B08(void);
void func_850026C4(void);
void func_850026E8(s32 arg0);
void func_85002724(void);
void func_85002F40(s32 arg0);
s32  func_85002FA0(s32 arg0);
void func_8500310C(void);
void func_850038A0(void);
s32  func_8500390C(s32 arg0);
void func_850039B0(s32 arg0);
void func_850045BC(void);
void func_85004E00(void);
void func_85004F00(void);
void func_85004F10(void);
void func_85004F30(void);
void func_85005270(void);
void func_85005AB0(struct108 *arg0);
void func_85005AF0(s32 arg0);
void func_85005B00(s32 arg0);
void func_85005B10(struct108 *arg0);
void func_85005B50(s32 arg0);
void func_85005B60(s32 arg0);
void func_85005B70(s32 arg0);
void func_85005BD0(struct108 *arg0);
void func_85005C30(struct108 *arg0);
void func_85005CF0(s32 arg0);
void func_85005D00(struct108 *arg0);
void func_85005D60(struct108 *arg0);
void func_85005E30(struct108 *arg0);
void func_85005EA0(struct108 *arg0);
void func_85005EE0(struct108 *arg0);
void func_85005F20(struct108 *arg0);
void func_85005F60(struct108 *arg0);
void func_85005FA0(s32 arg0);
void func_85005FB0(struct108 *arg0);
void func_85006170(struct108 *arg0);
void func_85007644(void);
void func_8500764C(void);
void func_85007668(void);
void func_85007684(void);
void func_850076A0(void);
void func_850076BC(s32 arg0);
void func_85007718(s32 arg0);
void func_85007750(s32 arg0);
void func_85007A20(void);
void func_85008230(void);
void func_85008840(void);
void func_85008B90(void);
void func_85008BB0(void);
void func_85008BE0(void);

void func_850095D8(s32 arg0, s32 arg1);
void func_85009600(s32 arg0, s32 arg1);
void func_8500969C(s32 arg0, s32 arg1);
void func_85009740(s32 arg0, s32 arg1);
void func_85009768(s32 arg0, s32 arg1);
void func_850097A4(s32 arg0, s32 arg1);
void func_850097CC(s32 arg0, s32 arg1);
void func_85009818(s32 arg0, s32 arg1);
void func_85009844(s32 arg0, s32 arg1);
void func_85009870(s32 arg0, s32 arg1);
void func_85009894(s32 arg0, s32 arg1);
void func_850098D0(s32 arg0, s32 arg1);
void func_850098F8(s32 arg0, s32 arg1);
void func_85009944(s32 arg0, s32 arg1);

void func_85017790(void);
void func_850177F8(void);

void func_85093878(void);
s32  func_850C3D48(s32 arg0);
void func_850CEF10(struct108 *arg0);

/* non-matching */
void func_80001194(s32 arg0);
void func_80001420(void);
void func_800014C4(s32 arg0);
//func_80001550
s16  func_800019F0(s16 *arg0, struct05 *arg1);
//func_80001AA8
// s32  func_800020D0(s32 *arg0, s32 arg1, s32 *arg2, s32 arg3);
//func_80002718
// s32  func_80002DB0(s32 arg0, s32 arg1);
//func_80002E50
void func_800030A0(OSPri priority, OSMesgQueue *mesgQueue, OSMesg *arg2, s32 arg3);
struct00* func_80003220(struct00 *arg0);
void func_80003330(struct00 *arg0);
//func_800034E0
//func_80003658
void func_800038C0(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
// void func_800038E0(void);
void func_80003920(void);
void func_800039C0(void);
// void func_80003BD0(void);
//func_80003ACC
//func_80003C6C
//func_80004074
//func_80004250
//func_80004308
void func_800043B4(s32 *arg0, u32 arg1);
//func_8000440C
//func_80004514
//func_800046E4
//func_8000480C
//func_800049E0
//func_80004DB0
//func_80004F00
void func_800050A0(OSMesgQueue *arg0);
// s32  func_800051C8(struct01 *arg0, OSMesgQueue *arg1);
void func_800052A0(s32 arg0);
//func_80005570
//func_800056A0
//func_800057E0
//func_80005948
//func_80005AB0
void func_80005B04(s32 arg0);
//func_80005BE0
//func_80005C2C
void func_8000709C(void);
//func_80007C74
//func_80007CC4
//func_80007D28
//func_80007DA0
//func_80007DAC
//func_80008120
//func_80008180
//func_800085B8
void func_80008660(u8 arg0, u8 arg1, u8 arg2, s32 arg3);
//func_800086FC
//func_80008744
//func_80008790
//func_80008824
//func_8000886C
//func_800088F0
//func_80008988
//func_80008A4C
void func_80008A94(u8 arg0, s32 arg1, s32 arg2);
//func_80008B60
//func_80008BC0
//func_80008C04
//func_80008C6C
//func_80008CE8
//func_80008EE0
//func_80008F90
//func_80009400
//func_800095A0
//func_800097CC
s32 func_80009980(s32 *arg0);
//func_800099BC
struct54 *func_80009BE4(struct54 * arg0);
//func_80009CBC
s32 func_80009FFC(void);
//func_8000A03C
//func_8000A348
//func_8000A420
//func_8000A750
//func_8000B060
s32 *func_8000B1B0(s32 arg0);
//func_8000B1FC
//func_8000B294
//func_8000B2F4
//func_8000B3D4
//func_8000B548
//func_8000B638
//func_8000B830
//func_8000B8B8
//func_8000BA18
//func_8000BAFC
//func_8000BC28
//func_8000BCBC
//func_8000BF60
//func_8000C350
//func_8000C530
//func_8000C7E8
//func_8000C934
//func_8000CA18
//func_8000CAE4
//func_8000CBA8
//func_8000CBF0
//func_8000CC54
//func_8000CD40
//func_8000CDA0
//func_8000CEAC
//func_8000D2F8
//func_8000D758
//func_8000D96C
//func_8000DE1C
//func_8000DEC4
//func_8000DF68
//func_8000E054
//func_8000E0F8
//func_8000E134
//func_8000E17C
//func_8000E2F4
//func_8000E40C
//func_8000E46C
//func_8000E588
//func_8000E654
//func_8000E7A0
//func_8000E8C4
//func_8000E8F0
//func_8000E934
//func_8000EB00
s32  func_8000EBC4(struct00 *arg0, s32 arg1, s32 arg2, s32 arg3);
//func_8000EC24
//func_8000ECCC
//func_8000EDA0
//func_8000EE70
//func_8000EFB4
//func_8000F1A8
//func_8000F248
// s32 func_8000F3D0(s32 arg0);
//func_8000F44C
//func_8000F4D8
//func_8000F568
//func_8000F6B8
//func_8000F85C
void func_8000F91C(u16 arg0, u16 arg1, s16 arg2, u8 arg3, s32 arg4, s16 arg5, s16 arg6, s16 arg7, s16 arg8, s16 arg9);
void func_8000F9D4(u16 arg0, s16 arg1, s16 arg2, s16 arg3);
//func_8000FA64
//func_8000FC18
//func_8000FD38
//func_8000FDF4
//func_8000FE88
//func_8000FEF0
//func_8000FF90
//func_8001001C
//func_800100E0
//func_80010154
//func_80010344
//func_80010558
//func_80010630
//func_80010720
//func_800107F8
//func_80010894
//func_8001091C
//func_800109D0
//func_80010A3C
//func_80010AA8
//func_80010BE8
//func_80010E78
void func_80010F30(s32 arg0, u16 arg1, u8 arg2, s16 arg3, u8 arg4);
//func_80010F88
//func_80010FFC
//func_800111C8
//func_8001123C
//func_800112BC
//func_80011310
//func_8001147C
//func_800114D0
//func_80011624
//func_80011BB8
//func_80011EB8
s32 func_80011FB0(s32 arg0);
//func_80012020
//func_8001263C
//func_800126E8
//func_80012718
void func_80012934(void *arg0, s32 arg1, s32 arg2);
//func_80012A28
void func_80012BD0(void *arg0, s32 arg1);
f32  func_80012D80(u8 arg0);
s32  func_80012E04(void *arg0, void *arg1, u8 arg2, u8 arg3, u8 arg4, u8 arg5);
s32  func_80012F94(void *arg0, void *arg1);
void func_800131FC(struct13 *arg0, s32 arg1);
void func_80015464(struct18 *arg0, f32 arg1);
// void func_80017870(u8 arg0);
void func_80019D98(struct26 *arg0, u8 arg1);
void func_8001A030(struct26 *arg0, s32 arg1, s32 arg2, u32 arg3);
void func_8001A508(struct26 *arg0, struct25 *arg1, s32 arg2, s32 arg3);
void func_8001A2F8(struct26 *arg0, s32 arg1, s32 arg2, s32 arg3);
//func_8001AAE0
//func_8001ABA0
//func_8001ADA4
// void *func_8001AF28(struct26 *arg0, s32 arg1, s32 arg2, s32 arg3);
//func_8001AFEC
//func_8001B07C
//func_8001B200
// s32  func_8001B310(void *arg0, void *arg1);
// u8   func_8001B450(void *arg0, void *arg1);
//func_8019EA88
//func_8019EAB0
//func_8019EAE0
//func_8019ECAC
//func_8019ED8C
//func_8019ED94
//func_8019ED9C
//func_8019EE0C
//func_8019EEAC
//func_8019F018
//func_8019F154
//func_8019F214
//func_8019F4E4
//func_8019F59C
//func_8019FA14
//func_8019FACC
//func_8019FD38
//func_8019FDC0
//func_8019FE18
//func_8019FF78
//func_801A0094
//func_801A0100
//func_801A017C
//func_801A0188
//func_801A02B8
//func_801A0344
//func_801A040C
//func_801A0430
//func_801A04EC
//func_801A04F4
//func_801A0538
f32  func_8001FA78(struct06 *arg0, s32 arg1);
f32  func_850484A0(f32 arg0, f32 arg1);

void func_8516127C(s32 arg0, u8 arg1, u8 arg2);
void func_85161334(s32 arg0, u8 arg1, u8 arg2);
void func_851B8DB0(s32 arg0, u8 arg1, u8 arg2, u8 arg3);
s32  func_851615F8(s32 arg0, u8 arg1, u8 arg2, u8 arg3, u8 arg4, u8 arg5);

#endif
