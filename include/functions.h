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
void func_8000349C(s32 arg0);
s32  func_8000390C(void);
void func_80003930(void);
void func_800039B0(void);
void func_800039C0(void);
s32  func_80003C40(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_80004250(void);
void func_80004308(void);
void func_8000440C(void);
void func_80004470(void);
s32  func_80004514(s32 devAddr, void *dramAddr, u32 size, s32 arg3);
void func_80004674(void);
void func_80004F00(void);
void func_80004FE0(void);
void func_80005020(void);
void func_800051E8(void);
void func_80005218(void);
void func_80005298(void);
void func_800084D8(u8 arg0);
void func_8000853C(u8 arg0);
void func_80008570(u8 arg0, s32 arg1);
void func_800085A4(s32 arg0, s32 arg1, s32 arg2);
void func_800085B8(u8 arg0, s32 arg1, u8 arg2);
void func_800085F8(u8 arg0, s32 arg1);
void func_8000862C(u8 arg0, s32 arg1);
void func_80008660(u8 arg0, u8 arg1, u8 arg2, s32 arg3);
void func_800086FC(u8 arg0, u8 arg1, u8 arg2);
void func_80008744(u8 arg0, u8 arg1, u8 arg2);
void func_80008790(u8 arg0, s32 arg1, u8 arg2, s32 arg3);
void func_80008824(u8 arg0, u8 arg1, u8 arg2);
void func_8000886C(u8 arg0, s32 arg1, u8 arg2);
void func_800088F0(u8 arg0, s32 arg1, s32 arg2);
void func_80008988(u8 arg0, s32 arg1, s32 arg2);
u8   func_80008A4C(u8 arg0, u8 arg1);
void func_80008A94(u8 arg0, s32 arg1, s32 arg2);
void func_80008B2C(u8 arg0);
void func_80008B60(u8 arg0, u8 arg1, u8 arg2, u8 arg3, s32 arg4);
void func_80008BC0(u8 arg0, f32 arg1, f32 arg2);
void func_80008EE0(u8 arg0, s32 arg1);
void func_80008F24(u8 arg0);
void func_80008F58(u8 arg0);
void func_800093CC(void);
s32  func_80009980(s32 *arg0);
void func_80009B2C(struct54 *arg0);
void func_80009B4C(struct54 *arg0);
void func_80009B90(struct54 *arg0);
struct151 *func_8000B1B0(s32 arg0);
s32  func_8000BBE8(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32  func_8000BC28(s32 arg0, u8 arg1, s32 arg2, s32 arg3);
void func_8000E054(s32 arg0, s32 arg1);
s32  func_8000E0F8(s32 arg0);
s32  func_8000E704(s32 arg0, s32 arg1, s32 arg2);
void func_8000E75C(s32 arg0);
s32  func_8000E770(s32 *arg0, s32 *arg1);
u16  func_8000EA94(s32 arg0);
s32  func_8000EB00(struct04 *arg0, s32 arg1, s32 *arg2, s32 *arg3, s32 arg6, s32 arg7, u16 *arg8);
s32  func_8000EBC4(struct00 *arg0, s32 arg1, s32 arg2, s32 arg3);
s32  func_8000EF40(struct57 *arg0, struct57 *arg1, s32 *arg2, s32 arg3, s32 arg4, s32 arg5, u16 *arg6);
s32  func_8000F3D0(u16 arg0);
s32  func_8000F44C(u16 arg0);
void func_8000F91C(u16 arg0, u16 arg1, s16 arg2, u8 arg3, s32 arg4, s16 arg5, s16 arg6, s16 arg7, s16 arg8, s16 arg9);
void func_8000F9D4(u16 arg0, s16 arg1, s16 arg2, s16 arg3);
s32  func_800107F8(struct127 *arg0);
s32  func_80010894(struct127 *arg0);
void func_800109D0(struct127 *arg0);
void func_80010A3C(struct127 *arg0);
void func_80010AA8(struct127 *arg0);
void func_80010F30(s32 arg0, u16 arg1, u8 arg2, s16 arg3, u8 arg4);
void func_800111C8(u16 arg0);
void func_8001123C(u16 arg0);
s32  func_800112BC(s32 arg0, s32 arg1);
s32  func_8001147C(u16 arg0);
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
void func_80012934(struct122 *arg0, s32 arg1, s32 arg2);
void func_80012A28(struct121 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_80012B84(struct11 *arg0, s32 arg1);
void func_80012BD0(struct11 *arg0, s32 arg1);
void func_80012C5C(struct9 *arg0, s32 arg1, s32 arg2);
void func_80012CFC(struct12 *arg0, s32 arg1, s32 arg2);
f32  func_80012D80(u8 arg0);
s32  func_80012E04(s32 *arg0, f32 *arg1, u8 arg2, u8 arg3, u8 arg4, u8 arg5);
s32  func_80012F94(struct124 *arg0, f32 *arg1);
void func_800131D8(s32 *arg0);
void func_800131FC(struct13 *arg0, s32 arg1);
void func_80015550(struct26 *arg0, s32 arg1);
s32  func_80015878(struct04 *arg0);
void func_80016E90(struct31 *arg0);
void func_80016F00(struct154 *arg0);
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
void func_8001A2F8(struct26 *arg0, s32 arg1, s32 arg2, s32 arg3);
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
void func_8001CD54(struct125 *arg0);
f32  func_8001CEA4(s32 arg0);
void func_8001D6E8(struct42 *arg0, s32 (*arg1)(s32 arg), struct15 *arg2);
void func_8001D900(struct22 *arg0, u8 arg1);
s32  func_8001D9B0(s16 arg0);
s32  func_8001DA28(s16 arg0);
void func_8001DAA0(s32 arg0, s16 arg1, s32 arg2);
void func_8001DAE4(struct139 *arg0, s16 arg1, s32 *arg2);
void func_8001E170(struct22 *arg0, s32 arg1, f32 arg2, s16 arg3, u8 arg4, u8 arg5, u8 arg6, f32 arg7, u8 arg8, s32 arg9);
void func_8001E2A0(struct22 *arg0, u8 arg1);
void func_8001E350(struct22 *arg0, u8 arg1);
void func_8001E400(struct26 *arg0, s32 arg1, u8 arg2, u8 arg3, u8 arg4);
void func_8001E480(void);
void func_8001E494(void);
s32  func_8001E4A0(s16 arg0, s32 arg1, s32 arg2);
f32  func_8001FA78(struct112 *arg0, s32 arg1);
void func_8001FFE0(struct43 *arg0, s16 arg1);
s32  func_80020978(struct21 *arg0, s32 arg1, s32 arg2);
s16  func_80021028(s16 arg0, s32 arg1, s16 arg2, u16 arg3);
s32  func_80022338(struct21 *arg0, s32 arg1, s32 arg2);
/* chunk0 */
void func_85000000(void);
void func_85000090(void);
void func_85000AC0(void);
void func_85001B08(void);
void func_85001970(void);
void func_850026C4(s32 arg0);
void func_850026E8(s32 arg0);
void func_85002724(s32 arg0);
void func_85002F40(s32 arg0);
s32  func_85002FA0(s32 arg0);
void func_8500310C(void);
void func_850038A0(void);
s32  func_8500390C(s32 arg0);
void func_850039B0(s32 arg0);
void func_850045BC(void);
void func_85004E00(void);
void func_85004E80(void);
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
void func_85005C80(struct108 *arg0);
void func_85005CF0(s32 arg0);
void func_85005D00(struct108 *arg0);
void func_85005D60(struct108 *arg0);
void func_85005DB0(struct108 *arg0);
void func_85005E30(struct108 *arg0);
void func_85005E70(struct108 *arg0);
void func_85005EA0(struct108 *arg0);
void func_85005EE0(struct108 *arg0);
void func_85005F20(struct108 *arg0);
void func_85005F60(struct108 *arg0);
void func_85005FA0(s32 arg0);
void func_85005FB0(struct108 *arg0);
void func_85006010(struct108 *arg0);
void func_85006140(struct108 *arg0);
void func_85006170(struct108 *arg0);
void func_850061B0(void);
void func_850064E0(void);
void func_85007644(void);
void func_8500764C(void);
void func_85007668(void);
void func_85007684(void);
void func_850076A0(void);
void func_850076BC(s32 arg0);
void func_85007718(s32 arg0);
void func_85007750(s32 arg0);
void func_85007A20(void);
void func_85007A70(s16 arg0, s16 arg1, s16 arg2);
void func_850081E4(void);
void func_85008230(void);
void func_85008248(s32 arg0);
void func_850082CC(void);
void func_85008840(void);
void func_85008A10(void);
void func_85008B90(void);
void func_85008BB0(void);
void func_85008BE0(void);
void func_85008DD0(void);
void func_85008E00(void);
void func_85009150(s32 arg0);
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
void func_85009AA0(s32 arg0, s32 arg1);
void func_85009AEC(s32 arg0, s32 arg1);
void func_85009B38(s32 arg0, s32 arg1);
void func_85009B84(s32 arg0, s32 arg1);
void func_85009D28(s32 arg0, s32 arg1);
void func_85009D6C(s32 arg0, s32 arg1);
void func_85009DB0(s32 arg0, s32 arg1);
void func_85009DFC(s32 arg0, s32 arg1);
void func_85009E48(s32 arg0, s32 arg1);
void func_85009E84(s32 arg0, s32 arg1);
void func_85009EC8(s32 arg0, s32 arg1);
void func_85009EF4(s32 arg0, s32 arg1);
void func_85009F30(s32 arg0, s32 arg1);
void func_8500A028(s32 arg0, s32 arg1);
void func_8500A06C(s32 arg0, s32 arg1);
void func_8500A0B0(s32 arg0, s32 arg1);
void func_8500A0FC(s32 arg0, s32 arg1);
void func_8500A148(s32 arg0, s32 arg1);
void func_8500A194(s32 arg0, s32 arg1);
void func_8500A1E0(s32 arg0, s32 arg1);
void func_8500A21C(s32 arg0, s32 arg1);
void func_8500A260(s32 arg0, s32 arg1);
void func_8500A33C(s32 arg0, s32 arg1);
void func_8500A380(s32 arg0, s32 arg1);
void func_8500A3C4(s32 arg0, s32 arg1);
void func_8500A410(s32 arg0, s32 arg1);
void func_8500A454(s32 arg0, s32 arg1);
void func_8500A490(s32 arg0, s32 arg1);
void func_8500A4D4(s32 arg0, s32 arg1);
void func_8500A518(s32 arg0, s32 arg1);
void func_8500A55C(s32 arg0, s32 arg1);
void func_8500A5A8(s32 arg0, s32 arg1);
void func_8500A5F4(s32 arg0, s32 arg1);
void func_8500A640(s32 arg0, s32 arg1);
void func_8500A68C(s32 arg0, s32 arg1);
void func_8500A79C(s32 arg0, s32 arg1);
void func_8500A8C8(s32 arg0, s32 arg1);
void func_8500A904(s32 arg0, s32 arg1);
void func_8500A94C(s32 arg0, s32 arg1);
void func_8500A990(s32 arg0);
void func_8500AB5C(s32 arg0);
void func_8500ABA0(s32 arg0);
void func_8500BE40(s32 arg0);
void func_8500BE68(void);

void func_850DE310(s32 arg0);
void func_850DEC90(s32 arg0);
void func_8500EB20(void);
void func_8500EB30(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void func_8500EBC4(void);
void func_8500ED80(void);
void func_8500EE18(struct127 *arg0, s32 arg1, s32 arg2);
void func_8500EE94(struct16 *arg0);
void func_8500EF20(void);

void func_850102C0(void);
void func_85010680(void);
void func_850106A0(void);
void func_850106B0(void);
void func_85011C40(void);
void func_85011330(void);
void func_85011C70(void);
void func_85011CA0(void);
void func_85011CC0(void);
u8   func_85012720(void);
void func_85012770(void);
void func_85012780(void);
s32  func_850150A4(void);
s32  func_85015300(struct134 *arg0);
void func_85017790(void);
void func_850177F8(void);
void func_8501C860(void);
void func_8501C870(void);

void func_85040350(void *arg0, u32 arg1);
void func_85042D50(void);
void func_85042D78(u8 arg0);
void func_850432BC(f32 arg0);
void func_850432CC(s32 arg0, s32 arg1);
void func_850432FC(s16 arg0, s16 arg1);
void func_8504332C(u8 arg0, u8 arg1, u8 arg2, u8 arg3);
void func_85043A00(struct105 *arg0, s32 arg1, s32 arg2);
void func_85043EC8(struct112 *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6);
void func_85043FF0(vertex *arg0, struct113 *arg1);
void func_850442C0(struct112 *arg0, f32 x, f32 y, f32 z);
f32  func_8504A5E0(f32 arg0);
s32  func_8504AEF4(s32 arg0, s32 arg1);
s32  func_8504C078(void);
s32  func_8504C0B8(void);
void func_8504C854(struct127 *arg0);
void func_85052408(struct127 *arg0);
void func_85052458(s32 arg0);
void func_85052464(struct127 *arg0);
void func_85052490(struct127 *arg0, u16 arg1, f32 arg2, f32 arg3);
void func_85052EF0(struct127 *arg0);
struct127 *func_85052F58(s32 arg0, s32 arg1);
void func_85053694(struct127 *arg0);
void func_850536D0(struct127 *arg0);
void func_850536E8(struct127 *arg0);
void func_8505371C(struct127 *arg0);

void func_85062BDC(struct127 *arg0, f32 arg1, f32 arg2);
void func_8506AF74(void);
void func_8506AFE0(void);
void func_8506B020(void);
void func_8506B070(void);
void func_8506B078(void);
void func_8506B100(s32 arg0, f32 arg1, f32 arg2);
void func_85093878(void);
s32  func_850C3D48(s32 arg0);
void func_850CEF10(struct108 *arg0);
void func_850FCA00(struct108 *arg0);

void func_85100330(s32 arg0);
void func_8511FC20(s32 arg0);
s32  func_8511FC2C(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32  func_8511FC44(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_85122AE0(void);
void func_85124770(struct108 *arg0, s32 arg1);
void func_85123508(struct108 *arg0);
void func_85124AB4(struct108 *arg0);
void func_85125394(struct108 *arg0);
void func_85125594(struct108 *arg0);
void func_85125608(struct108 *arg0);
void func_85125690(struct108 *arg0, s32 arg1);
void func_85126138(struct108 *arg0);
void func_85127FEC(struct108 *arg0, s32 arg1, s32 arg2);
void func_85128680(s32 arg0);
void func_85128774(struct108 *arg0, struct127 *arg1);
void func_8512D380(s32 arg0);
void func_85165F70(void);
void func_8516972C(struct102 *arg0);
void func_8516979C(struct102 *arg0);
void func_85169804(struct102 *arg0);
void func_85169824(s32 arg0);
void func_8519EF70(s32 arg0, s32 arg1, s32 arg2);

void func_86000000(void);
s32  func_86000028(void);
void func_86000058(void);
s32  func_86000224(void);
void func_86000304(void);
void func_8600030C(void);
void func_86000314(void);
s32  func_86000384(void);
void func_86000424(struct118 *arg0);
void func_860012B0(s32 arg0, u8 *arg1);
void func_86001338(u8 arg0, u8 arg1, u8 arg2);
s32  func_860016F4(s32 arg0);
s32  func_86001984();
s32  func_860019A8(s32 direction, void *dramAddr);
void func_86001A64(void);
s32  func_86001A6C(f32 arg0);
void func_86001AB0(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
u8*  func_86001AD0(u8 *arg0, u8 *arg1, u32 arg2);
s32  func_86001B8C(u8 *arg0, u8 *arg1, u32 arg2);


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
// void func_800038C0(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
// void func_800038E0(void);
void func_80003920(void);
// void func_80003BD0(void);
//func_80003ACC
//func_80003C6C
//func_80004074
void func_800043B4(s32 *arg0, u32 arg1);
//func_800046E4
//func_8000480C
//func_800049E0
//func_80004DB0
void func_800050A0(OSMesgQueue *arg0);
// s32 func_800051C8(OSPfs *pfs, OSMesgQueue *queue)
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
//func_80008B60
//func_80008BC0
//func_80008C04
void func_80008C6C(u8 arg0, u8 arg1);
//func_80008CE8
//func_80008F90
//func_80009400
//func_800095A0
//func_800097CC
//func_800099BC
void func_80009BE4(struct147 *arg0);
//func_80009CBC
s32  func_80009FFC(void);
//func_8000A03C
//func_8000A348
//func_8000A420
//func_8000A750
//func_8000B060
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
s16 func_8000DF68(s32 arg1, s32 arg2);
//func_8000E134
//func_8000E17C
//func_8000E2F4
//func_8000E40C
s32 func_8000E46C(s32 arg1, s32 arg2, s32 arg3);
s32 func_8000E588(s32 arg1, s32 arg2);
//func_8000E654
//func_8000E7A0
//func_8000E8C4
//func_8000E8F0
//func_8000E934
//func_8000EC24
//func_8000ECCC
//func_8000EDA0
//func_8000EE70
//func_8000EFB4
//func_8000F1A8
//func_8000F248
//func_8000F44C
//func_8000F4D8
//func_8000F568
//func_8000F6B8
void func_8000F85C(u16 arg0, u16 arg1, s32 arg2);
void func_8000F91C(u16 arg0, u16 arg1, s16 arg2, u8 arg3, s32 arg4, s16 arg5, s16 arg6, s16 arg7, s16 arg8, s16 arg9);
u16  func_8000FA64(u16 arg0, u8 arg1, s16 arg2, s16 arg3, s32 arg4, u16 arg5, s16 arg6, s32 arg7, s32 arg8, s32 arg9, s32 argA, s32 argB);
//func_8000FC18
//func_8000FD38
//func_8000FDF4
//func_8000FE88
//func_8000FEF0
s32  func_8000FF90(s32 arg0, s32 arg1, s32 arg2);
//func_8001001C
//func_800100E0
//func_80010154
//func_80010344
//func_80010558
//func_80010630
//func_80010720
//func_800107F8
//func_8001091C
//func_800109D0
//func_80010A3C
u16 func_80010BE8(s32 arg0, s32 arg1, u16 arg2, u8 arg3, s16 arg4, u8 arg5, u8 arg6);
//func_80010E78
//func_80010F88
//func_80010FFC
//func_80011310
//func_800114D0
//func_80011624
//func_80011BB8
//func_80011EB8
s32 func_80011FB0(s32 arg0);
//func_80012020
//func_8001263C
//func_800126E8
//func_80012718
void func_80015464(struct18 *arg0, f32 arg1);
// void func_80017870(u8 arg0);
void func_80018790(struct26 *arg0, s32 arg1, u32 arg2, u32 arg3);
void func_80019D98(struct26 *arg0, u8 arg1);
void func_8001A030(struct26 *arg0, s32 arg1, s32 arg2, u32 arg3);
void func_8001A508(struct26 *arg0, struct25 *arg1, s32 arg2, s32 arg3);
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
void func_8001C224(void *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_8001CF38(struct139 *arg0, f32 arg1);
struct21 *func_80020ABC(struct42 *arg0, struct119 *arg1, s32 arg2, s32 arg3, struct21 *arg4);
s16  func_80020E18(f32 arg0, f32 arg1, s32 arg2, u16 *arg3);
struct21 *func_80022040(struct42 *arg0, struct119 *arg1, s32 arg2, struct21 *arg3);
void func_850403C8(void *arg0, u32 arg1, s32 arg2);
f32  func_85047C00(f32 arg0);
f32  func_85047D60(f32 arg0);
f32  func_850484A0(f32 arg0, f32 arg1);
f32  func_850487E0(f32 arg0);
f32  func_85048FC8(s32 arg0);
void func_8505E650(struct127 *arg0, u16 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, s32 arg6);
void func_85060F28(void *arg0, s32 arg1);
s32  func_850859AC(s16 arg0, s32 arg1); // a guess
void func_8510B32C(s32 arg0, f32 arg1, f32 arg2, f32 arg3);
s32  func_8510FD20(s32 arg0, s32 arg1);
s32  func_85123934(struct108 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32  func_851239CC(struct108 *arg0, s32 arg1);
void func_85127EB8(struct108 *arg0);
f32  func_85144598(struct134 *arg0);
f32  func_8514462C(s32 arg0);
void func_8516127C(s32 arg0, u8 arg1, u8 arg2);
void func_85161334(s32 arg0, u8 arg1, u8 arg2);
s32  func_851615F8(s32 arg0, u8 arg1, u8 arg2, u8 arg3, u8 arg4, u8 arg5);
void func_85177410(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, f32 arg5, s32 arg6, f32 arg7, s32 arg8, s32 arg9, s32 argA, s32 argB, s32 argC, s32 argD, s32 argE, s32 argF);
s32  func_85187EC0(s32 arg0, f32 arg1, s32 arg2, s32 arg3, u8 arg4, u8 arg5, u8 arg6, u8 arg7);
void *func_85195AA8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void func_851B8DB0(s32 arg0, u8 arg1, u8 arg2, u8 arg3);

#endif
