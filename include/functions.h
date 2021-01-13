#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <ultra64.h>

#include "structs.h"

extern f32 fabsf(f32);
#pragma intrinsic (fabsf)

/* matching */
void func_10001050(void);
void func_100010F8(s32 arg0);
void func_10001444(void);
void func_100014A0(void);
s32  func_10002070(s32 arg0, s32 arg1, s32 arg2);
void func_1000349C(s32 arg0);
s32  func_1000390C(void);
void func_10003930(void);
void func_100039B0(void);
void func_100039C0(void);
s32  func_10003C40(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_10004250(void);
void func_10004308(void);
void func_1000440C(void);
void func_10004470(void);
s32  func_10004514(s32 devAddr, void *dramAddr, u32 size, s32 arg3);
void func_10004674(void);
void func_10004F00(void);
void func_10004FE0(void);
void func_10005020(void);
void func_100051C8(OSPfs *pfs, OSMesgQueue *queue);
void func_100051E8(void);
void func_10005218(void);
void func_10005298(void);
void func_100084D8(u8 arg0);
void func_1000853C(u8 arg0);
void func_10008570(u8 arg0, s32 arg1);
void func_100085A4(s32 arg0, s32 arg1, s32 arg2);
void func_100085B8(u8 arg0, s32 arg1, u8 arg2);
void func_100085F8(u8 arg0, s32 arg1);
void func_1000862C(u8 arg0, s32 arg1);
void func_10008660(u8 arg0, u8 arg1, u8 arg2, s32 arg3);
void func_100086FC(u8 arg0, u8 arg1, u8 arg2);
void func_10008744(u8 arg0, u8 arg1, u8 arg2);
void func_10008790(u8 arg0, s32 arg1, u8 arg2, s32 arg3);
void func_10008824(u8 arg0, u8 arg1, u8 arg2);
void func_1000886C(u8 arg0, s32 arg1, u8 arg2);
void func_100088F0(u8 arg0, s32 arg1, s32 arg2);
void func_10008988(u8 arg0, s32 arg1, s32 arg2);
u8   func_10008A4C(u8 arg0, u8 arg1);
void func_10008A94(u8 arg0, s32 arg1, s32 arg2);
void func_10008B2C(u8 arg0);
void func_10008B60(u8 arg0, u8 arg1, u8 arg2, u8 arg3, s32 arg4);
void func_10008BC0(u8 arg0, f32 arg1, f32 arg2);
void func_10008EE0(u8 arg0, s32 arg1);
void func_10008F24(u8 arg0);
void func_10008F58(u8 arg0);
void func_100093CC(void);
s32  func_10009980(s32 *arg0);
void func_10009B2C(struct54 *arg0);
void func_10009B4C(struct54 *arg0);
void func_10009B90(struct54 *arg0);
struct151 *func_1000B1B0(s32 arg0);
s32  func_1000B830(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32  func_1000B8B8(s32 arg0, u8 arg1, f32 arg2, f32 arg3, f32 arg4);
s32  func_1000BBE8(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32  func_1000BC28(s32 arg0, u8 arg1, s32 arg2, s32 arg3);
void func_1000CBA8(s32 arg0);
void func_1000E054(s32 arg0, s32 arg1);
s32  func_1000E0F8(s32 arg0);
s32  func_1000E654(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32  func_1000E704(s32 arg0, s32 arg1, s32 arg2);
void func_1000E75C(s32 arg0);
s32  func_1000E770(s32 *arg0, s32 *arg1);
u16  func_1000EA94(s32 arg0);
s32  func_1000EB00(struct04 *arg0, s32 arg1, s32 *arg2, s32 *arg3, s32 arg6, s32 arg7, u16 *arg8);
s32  func_1000EBC4(struct00 *arg0, s32 arg1, s32 arg2, s32 arg3);
s32  func_1000EF40(struct57 *arg0, struct57 *arg1, s32 *arg2, s32 arg3, s32 arg4, s32 arg5, u16 *arg6);
s32  func_1000F3D0(u16 arg0);
s32  func_1000F44C(u16 arg0);
void func_1000F91C(u16 arg0, u16 arg1, s16 arg2, u8 arg3, s32 arg4, s16 arg5, s16 arg6, s16 arg7, s16 arg8, s16 arg9);
void func_1000F9D4(u16 arg0, s16 arg1, s16 arg2, s16 arg3);
void func_10010720(u16 arg0, struct48 *arg1, s32 arg2, s16 arg3, u16 arg4, s32 arg5);
s32  func_100107F8(struct127 *arg0);
s32  func_10010894(struct127 *arg0);
void func_100109D0(struct127 *arg0);
void func_10010A3C(struct127 *arg0);
void func_10010AA8(struct127 *arg0);
void func_10010F30(s32 arg0, u16 arg1, u8 arg2, s16 arg3, u8 arg4);
void func_100111C8(u16 arg0);
void func_1001123C(u16 arg0);
s32  func_100112BC(s32 arg0, s32 arg1);
s32  func_1001147C(u16 arg0);
void func_10011E88(s32 arg0);
void func_10011E94(s32 arg0);
void func_10011FA0(s32 *arg0);
void func_10011FB0(s32 arg0);
void func_10011FDC(s32 arg0);
void func_10011FEC(void);
void func_10012560(s32 arg0);
void func_10012588(s32 arg0);
void func_100125CC(s32 arg0);
void func_1001263C(s32 arg0, s32 arg1, s32 arg2);
void func_100126E8(s32 arg0, s32 arg1);
s32  func_10012718(u16 arg0, struct127 *arg1, s32 arg2, s16 arg3, u16 arg4);
s32  func_100127D0(void);
// void func_10012820(struct14 *arg0, s32 arg1, s32 arg2);
// s32  func_10012844(s32 arg0, s32 arg1, struct15 *arg2, u32 arg3, u32 arg4);
void func_100128D0(struct8 *arg0, s32 arg1);
void func_10012934(struct122 *arg0, s32 arg1, s32 arg2);
void func_10012A28(struct121 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_10012B84(struct11 *arg0, s32 arg1);
void func_10012BD0(struct11 *arg0, s32 arg1);
void func_10012C5C(struct9 *arg0, s32 arg1, s32 arg2);
void func_10012CFC(struct12 *arg0, s32 arg1, s32 arg2);
f32  func_10012D80(u8 arg0);
s32  func_10012E04(s32 *arg0, f32 *arg1, u8 arg2, u8 arg3, u8 arg4, u8 arg5);
s32  func_10012F94(struct124 *arg0, f32 *arg1);
void func_100131D8(s32 *arg0);
void func_100131FC(struct13 *arg0, s32 arg1);
void func_10015550(struct26 *arg0, s32 arg1);
s32  func_10015878(struct04 *arg0);
void func_10016E90(struct31 *arg0);
void func_10016F00(struct154 *arg0);
struct31 *func_10017100(s32 arg0, s16 arg1);
void func_10017298(struct31 *arg0);
s32  func_100173C4(struct31 **arg0);
void func_10017594(struct31 *arg0);
void func_100176C4(void);
void func_100176EC(void);
void func_10017714(s32 arg0, s16 arg1, s32 arg2);
void func_10017870(u8 arg0);
void func_10017944(s32 arg0, u32 arg1);
s32  func_10017A80(struct26 *arg0);
void func_10017AA0(struct26 *arg0);
void func_10017AF0(struct26 *arg0, s32 arg1);
void func_10017B04(struct26 *arg0, s32 arg1, u8 arg2);
void func_10017B30(struct26 *arg0);
void func_10017BB8(struct26 *arg0, s32 arg1);
void func_10017C00(struct26 *arg0, s32 arg1);
void func_10017C68(struct26 *arg0, s32 arg1, u8 arg2, u8 arg3);
void func_10017CE0(struct26 *arg0, s32 arg1, u8 arg2);
void func_10017D30(struct26 *arg0, s32 arg1, u8 arg2);
void func_10017D80(struct26 *arg0, u8 arg1, u8 arg2);
void func_10017DF0(struct26 *arg0, f32 arg1, f32 arg2);
void func_10017E4C(struct26 *arg0, u8 arg1, u8 arg2);
//s32   n_alCSPGetTempo(N_ALCSPlayer *seqp)
void func_10017F10(struct26 *arg0, u8 arg1, u8 arg2, u8 arg3, s32 arg4);
// u32 __readVarLen(ALCSeq *seq,u32 track)
// void func_10018C60(N_ALSeqPlayer *seqp)
// void func_10018CB0(struct26 *arg0, s32 arg1);
// void func_10018D00(struct26 *arg0, s16 arg1);
// void func_10018D50(struct26 *arg0);
void n_alInit(struct07 *arg0, s32 arg1);
void n_alClose(s32 arg0);
void _n_freeParam(struct36 **arg0);
s32  _n_timeToSamplesNoRound(s32 micros);
s32  _n_timeToSamples(s32 micros);
f32  alCents2Ratio(s32 arg0);
void func_10019B50(struct26 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_10019C28(struct26 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_10019CD0(struct26 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_10019CFC(struct21 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_10019D6C(struct26 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_10019ED8(struct26 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_10019F38(struct26 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_10019F98(struct26 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_1001A224(struct26 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_1001A2F8(struct26 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_1001A39C(struct26 *arg0, s32 arg1, s32 arg2, u32 arg3);
void func_1001A3E0(struct24 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_1001A3FC(struct26 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_1001A9DC(struct26 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_1001AA08(struct26 *arg0, s32 arg1, s32 arg2, s32 arg3);
s32  __n_vsDelta(struct07 *arg0, s32 arg1);
void func_1001B620(struct26 *arg0, s32 arg1);
void func_1001C770(struct22 *arg0);
void func_1001C910(struct22 *arg0, s16 arg1, s32 arg2);
void func_1001C9E0(struct22 *arg0, f32 arg1);
void func_1001CA90(struct22 *arg0, f32 arg1);
void func_1001CB40(struct22 *arg0, u8 arg1);
void func_1001CBF0(f32 arg0, f32 arg1, f32 arg2, struct17 *arg3, struct17 *arg4);
void func_1001CD54(struct125 *arg0);
f32  func_1001CEA4(s32 arg0);
void func_1001D6E8(struct42 *arg0, s32 (*arg1)(s32 arg), struct15 *arg2);
void func_1001D900(struct22 *arg0, u8 arg1);
s32  func_1001D9B0(s16 arg0);
s32  func_1001DA28(s16 arg0);
void func_1001DAA0(s32 arg0, s16 arg1, s32 arg2);
void func_1001DAE4(struct139 *arg0, s16 arg1, s32 *arg2);
void func_1001E170(struct22 *arg0, s32 *w, f32 pitch, s16 vol, u8 pan, u8 fxmix, u8 arg6, f32 arg7, u8 arg8, s32 arg9);
void func_1001E2A0(struct22 *arg0, u8 arg1);
void func_1001E350(struct22 *arg0, u8 arg1);
void func_1001E400(struct26 *arg0, s32 arg1, u8 arg2, u8 arg3, u8 arg4);
void func_1001E480(void);
void func_1001E494(void);
s32  func_1001E4A0(s16 arg0, s32 arg1, s32 arg2);
f32  func_1001FA78(struct112 *arg0, s32 arg1);
void func_1001FFE0(struct43 *arg0, s16 arg1);
s32  func_10020978(struct21 *arg0, s32 arg1, s32 arg2);
s16  func_10021028(s16 arg0, s32 arg1, s16 arg2, u16 arg3);
s32  func_10022338(struct21 *arg0, s32 arg1, s32 arg2);
/* chunk0 */
void func_15000000(void);
void func_15000090(void);
void func_15000AC0(void);
void func_15016500(void);
void func_15001B08(void);
void func_15001970(void);
void func_150026C4(s32 arg0);
void func_150026E8(s32 arg0);
void func_15002724(s32 arg0);
void func_15002F40(s32 arg0);
s32  func_15002FA0(s32 arg0);
void func_1500310C(void);
s32  func_150034B4(void);
void func_150038A0(void);
s32  func_1500390C(s32 arg0);
void func_150039B0(s32 arg0);
void func_150039BC(s32 arg0);
void func_150045BC(void);
void func_15004E00(void);
void func_15004E80(void);
void func_15004F00(void);
void func_15004F10(void);
void func_15004F30(void);
void func_15005270(void);
void func_15005A60(struct108 *arg0, s32 arg1);
void func_15005AB0(struct108 *arg0);
void func_15005AF0(s32 arg0);
void func_15005B00(s32 arg0);
void func_15005B10(struct108 *arg0);
void func_15005B50(s32 arg0);
void func_15005B60(s32 arg0);
void func_15005B70(s32 arg0);
void func_15005BD0(struct108 *arg0);
void func_15005C30(struct108 *arg0);
void func_15005C80(struct108 *arg0);
void func_15005CF0(s32 arg0);
void func_15005D00(struct108 *arg0);
void func_15005D60(struct108 *arg0);
void func_15005DB0(struct108 *arg0);
void func_15005E30(struct108 *arg0);
void func_15005E70(struct108 *arg0);
void func_15005EA0(struct108 *arg0);
void func_15005EE0(struct108 *arg0);
void func_15005F20(struct108 *arg0);
void func_15005F60(struct108 *arg0);
void func_15005FA0(s32 arg0);
void func_15005FB0(struct108 *arg0);
void func_15006010(struct108 *arg0);
void func_15006140(struct108 *arg0);
void func_15006170(struct108 *arg0);
void func_150061B0(void);
void func_150064E0(void);
void func_15007644(void);
void func_1500764C(void);
void func_15007668(void);
void func_15007684(void);
void func_150076A0(void);
void func_150076BC(s32 arg0);
void func_15007718(s32 arg0);
void func_15007750(s32 arg0);
void func_15007A20(void);
void func_15007A70(s16 arg0, s16 arg1, s16 arg2);
void func_150081E4(void);
void func_15008230(void);
void func_15008248(s32 arg0);
void func_150082CC(void);
void func_15008840(void);
void func_15008A10(void);
void func_15008B90(void);
void func_15008BB0(void);
void func_15008BE0(void);
void func_15008DD0(void);
void func_15008E00(void);
void func_15009150(s32 arg0);
void func_150095D8(s32 arg0, s32 arg1);
void func_15009600(s32 arg0, s32 arg1);
void func_1500969C(s32 arg0, s32 arg1);
void func_15009740(s32 arg0, s32 arg1);
void func_15009768(s32 arg0, s32 arg1);
void func_150097A4(s32 arg0, s32 arg1);
void func_150097CC(s32 arg0, s32 arg1);
void func_15009818(s32 arg0, s32 arg1);
void func_15009844(s32 arg0, s32 arg1);
void func_15009870(s32 arg0, s32 arg1);
void func_15009894(s32 arg0, s32 arg1);
void func_150098D0(s32 arg0, s32 arg1);
void func_150098F8(s32 arg0, s32 arg1);
void func_15009944(s32 arg0, s32 arg1);
void func_15009AA0(s32 arg0, s32 arg1);
void func_15009AEC(s32 arg0, s32 arg1);
void func_15009B38(s32 arg0, s32 arg1);
void func_15009B84(s32 arg0, s32 arg1);
void func_15009D28(s32 arg0, s32 arg1);
void func_15009D6C(s32 arg0, s32 arg1);
void func_15009DB0(s32 arg0, s32 arg1);
void func_15009DFC(s32 arg0, s32 arg1);
void func_15009E48(s32 arg0, s32 arg1);
void func_15009E84(s32 arg0, s32 arg1);
void func_15009EC8(s32 arg0, s32 arg1);
void func_15009EF4(s32 arg0, s32 arg1);
void func_15009F30(s32 arg0, s32 arg1);
void func_1500A028(s32 arg0, s32 arg1);
void func_1500A06C(s32 arg0, s32 arg1);
void func_1500A0B0(s32 arg0, s32 arg1);
void func_1500A0FC(s32 arg0, s32 arg1);
void func_1500A148(s32 arg0, s32 arg1);
void func_1500A194(s32 arg0, s32 arg1);
void func_1500A1E0(s32 arg0, s32 arg1);
void func_1500A21C(s32 arg0, s32 arg1);
void func_1500A260(s32 arg0, s32 arg1);
void func_1500A33C(s32 arg0, s32 arg1);
void func_1500A380(s32 arg0, s32 arg1);
void func_1500A3C4(s32 arg0, s32 arg1);
void func_1500A410(s32 arg0, s32 arg1);
void func_1500A454(s32 arg0, s32 arg1);
void func_1500A490(s32 arg0, s32 arg1);
void func_1500A4D4(s32 arg0, s32 arg1);
void func_1500A518(s32 arg0, s32 arg1);
void func_1500A55C(s32 arg0, s32 arg1);
void func_1500A5A8(s32 arg0, s32 arg1);
void func_1500A5F4(s32 arg0, s32 arg1);
void func_1500A640(s32 arg0, s32 arg1);
void func_1500A68C(s32 arg0, s32 arg1);
void func_1500A79C(s32 arg0, s32 arg1);
void func_1500A8C8(s32 arg0, s32 arg1);
void func_1500A904(s32 arg0, s32 arg1);
void func_1500A94C(s32 arg0, s32 arg1);
void func_1500A990(s32 arg0);
void func_1500AB5C(s32 arg0);
void func_1500ABA0(s32 arg0);
void func_1500BE40(s32 arg0);
void func_1500BE68(void);

void func_1500EB20(void);
void func_1500EB30(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void func_1500EBC4(void);
void func_1500ED80(void);
void func_1500EE18(struct127 *arg0, s32 arg1, s32 arg2);
void func_1500EE94(struct16 *arg0);
void func_1500EF20(void);

void func_15010240(void);
void func_150102C0(void);
void func_150102D0(void);
void func_150103E0(void);
void func_15010538(struct127 *arg0);
void func_15010680(void);
void func_150106A0(void);
void func_150106B0(void);
s32  func_150106D0(struct39 *arg0);
void func_15010780(void);
void func_15010FB0(void);
void func_150110F0(void);
void func_15011170(void);
void func_15011330(void);
void func_15011360(void);
void func_15011A78(struct127 *arg0, u8 arg1, s32 arg2);
void func_15011B00(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_15011B94(void);
void func_15011C40(void);
void func_15011C70(void);
void func_15011CA0(void);
void func_15011CC0(void);
void func_15011F20(s32 arg0);
void func_15011FA0(s32 arg0);
void func_15012020(s32 arg0, s32 arg1);
u8   func_15012720(void);
void func_15012770(void);
void func_15012780(void);
s32  func_150150A4(void);
s32  func_15015300(struct134 *arg0);
void func_15016370(void);
void func_150175E0(void);
void func_15017790(void);
void func_150177F8(void);
void func_1501C860(void);
void func_1501C870(void);

void func_15040350(void *arg0, u32 arg1);
s32  func_1504082C(u32 *arg0);
void func_150408CC(struct148 *arg0);
void func_15042D50(void);
void func_15042D78(u8 arg0);
void func_150432BC(f32 arg0);
void func_150432CC(s32 arg0, s32 arg1);
void func_150432FC(s16 arg0, s16 arg1);
void func_1504332C(u8 arg0, u8 arg1, u8 arg2, u8 arg3);
void func_15043A00(struct105 *arg0, s32 arg1, s32 arg2);
void func_15043E68(s32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6);
void func_15043EC8(struct112 *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6);
void func_15043FF0(vertex *arg0, struct113 *arg1);
void func_150442C0(struct112 *arg0, f32 x, f32 y, f32 z);
void func_15047F00(f32 *arg0, u16 *arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6);
void func_15048134(s32 arg0, s32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6);
f32  func_15048720(f32 arg0, f32 arg1, f32 arg2);
void func_15048758(f32 *arg0);
f32  func_150487E0(f32 arg0);
f32  func_15048864(f32 arg0);
void func_15048A40(u8 arg0);
f32  func_15048A70(f32 arg0, f32 arg1);
s32  func_15048AD0(s32 arg0, s32 arg1);
void func_15048B10(s32 arg0, s32 arg1);
void func_15048F20(struct17 *arg0, struct17 *arg1, struct17 *arg2);
void func_15048F58(struct17 *arg0, struct17 *arg1, struct17 *arg2);
void func_15048F90(struct17 *arg0, struct17 *arg1, struct17 *arg2);
void func_15049148(struct17 *arg0, f32 arg1, struct17 *arg2);
void func_1504917C(struct17 *arg0, struct17 *arg1);
void func_150491EC(struct17 *arg0, struct17 *arg1, struct17 *arg2);
void func_150492CC(f32 arg0, f32 arg1, f32 arg2);
s32  func_15049440(struct112 *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9);
f32  func_1504A5E0(f32 arg0);
s32  func_1504AEF4(s32 arg0, s32 arg1);
s32  func_1504C078(void);
s32  func_1504C0B8(void);
void func_1504C854(struct127 *arg0);

void func_15052408(struct127 *arg0);
void func_15052458(s32 arg0);
void func_15052464(struct127 *arg0);
void func_15052490(struct127 *arg0, u16 arg1, f32 arg2, f32 arg3);
void func_15052EF0(struct127 *arg0);
struct127 *func_15052F58(s32 arg0, s32 arg1);
void func_15053694(struct127 *arg0);
void func_150536D0(struct127 *arg0);
void func_150536E8(struct127 *arg0);
void func_1505371C(struct127 *arg0);
void func_15055D48(struct127 *arg0);
void func_15058EA4(struct127 *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6);
void func_15062BDC(struct127 *arg0, f32 arg1, f32 arg2);
void func_1506AF74(void);
void func_1506AFE0(void);
void func_1506B020(void);
void func_1506B070(void);
void func_1506B078(void);
void func_1506B100(s32 arg0, f32 arg1, f32 arg2);
void func_1506B14C(void);
void func_1506B198(void);
void func_1506B1E8(void);
void func_1506B228(void);
void func_1506B268(void);
void func_1506B2BC(void);
void func_1506B328(void);
void func_1506B368(void);
void func_1506B370(void);
void func_1506B3B0(void);
void func_1506B4EC(void);
void func_1506B50C(void);
void func_1506B520(void);
void func_1506B5A4(void);
void func_1506B5AC(void);
void func_1506B5B4(void);
void func_1506B5CC(void);
void func_1506B5E4(void);
void func_1506B740(void);
void func_1506B7F4(void);
void func_1506B82C(void);
void func_1506B860(void);
void func_1506B88C(void);
void func_1506B8B4(void);
void func_1506B8F4(void);
void func_1506B91C(void);
void func_1506B944(void);
void func_1506B984(void);
void func_1506B9AC(void);
void func_1506BA4C(s32 arg0, s32 arg1);
void func_1506BAD8(s32 arg0, s32 arg1);
void func_1506BB64(s32 arg0, s32 arg1);
void func_1506BBA8(s32 arg0, s32 arg1);
void func_1506BC24(s32 arg0, s32 arg1);
void func_1506BCA0(void);
void func_1506BDE8(void);
void func_1506BE2C(void);
void func_1506BE54(void);
void func_1506BE84(void);
void func_1506BE98(void);
void func_1506BEC0(void);
void func_1506BEDC(void);
void func_1506BF1C(void);
void func_1506C418(void);
void func_1506C43C(void);
void func_1506D4EC(void);
void func_1506D4F4(void);
void func_1506D538(void);
void func_1506D570(void);
void func_1506D934(void);
void func_1506D950(void);
void func_1506DA78(void);
void func_1506DA94(void);
void func_1506DB30(void);
void func_1506DB5C(void);
void func_1506DB84(void);
void func_1506DBD4(void);
void func_1506DCA4(void);
void func_1506DCC0(void);
void func_1506DCDC(void);
void func_1506DCF8(void);
void func_1506DD44(void);
void func_1506DD6C(void);
void func_1506DDB8(void);
void func_1506DDC0(void);
void func_1506DE04(void);
void func_1506E5FC(void);
void func_1506E63C(void);
void func_1506E67C(void);
void func_1506E6BC(void);
void func_1506E6FC(void);
void func_1506E73C(void);
void func_1506E77C(void);
void func_1506E7BC(void);
void func_1506E7FC(void);
void func_1506E848(void);
void func_1506E898(void);
void func_1506E8D8(void);
void func_1506E918(void);
void func_1506E958(void);
void func_1506E998(void);
void func_1506E9D8(void);
void func_1506EA18(void);
void func_1506EA58(void);
void func_1506EC50(void);
void func_1506ECD0(void);
void func_1506ECF0(void);
void func_1506ED0C(void);
void func_1506ED4C(void);
void func_1506ED68(void);
void func_1506ED90(void);
void func_1506EDAC(void);
void func_1506EDC8(void);
void func_1506EDF0(void);
void func_1506EE14(void);
void func_1506EE38(void);
void func_1506EEAC(void);
void func_1506EED8(void);
void func_1506EFB4(void);
void func_1506EFC8(s32 arg0);
void func_1506F004(s32 arg0);
void func_1506F02C(s32 arg0);
void func_1506F05C(s32 arg0);
void func_1506F090(s32 arg0);
void func_1506F0C4(s32 arg0);
void func_1506F0F0(s32 arg0);
void func_1506F11C(s32 arg0);
void func_1506F14C(s32 arg0);
void func_1506F17C(s32 arg0);
void func_1506F524(s32 arg0);
void func_1506F8C0(s32 arg0);
void func_1506FB60(s32 arg0);
void func_1506FBE8(s32 arg0);
void func_1506FC1C(s32 arg0);
void func_1506FC50(s32 arg0);
void func_1506FC74(s32 arg0);
void func_1506FC9C(s32 arg0);
void func_1506FCC8(s32 arg0);
void func_1506FCFC(s32 arg0);
void func_1506FDF0(s32 arg0);
void func_1506FE1C(s32 arg0);
void func_1506FE48(s32 arg0);
void func_1506FE74(s32 arg0);
void func_1506FEA0(s32 arg0);
void func_1506FECC(s32 arg0);
void func_1506FEF8(s32 arg0);
void func_1506FF24(s32 arg0);
void func_1506FF50(s32 arg0);
void func_1506FF78(s32 arg0);
void func_1506FFAC(s32 arg0);
void func_1506FFE0(s32 arg0);
void func_15070014(s32 arg0);
void func_1507003C(s32 arg0);
void func_15070084(s32 arg0);
void func_150700B4(s32 arg0);
void func_150700E4(s32 arg0);
void func_15070114(s32 arg0);
void func_15070144(s32 arg0);
void func_150701C4(s32 arg0);
void func_150701F4(s32 arg0);
void func_15070690(s32 arg0);
void func_150706C4(s32 arg0);
void func_150706F8(s32 arg0);
void func_15070760(s32 arg0);
void func_15070794(s32 arg0);
void func_150707C8(s32 arg0);
void func_150707F8(s32 arg0);
void func_15070830(s32 arg0);
void func_15070860(s32 arg0);
void func_15070C18(s32 arg0);
void func_15070CDC(s32 arg0);
void func_15070D00(s32 arg0);
void func_15071230(s32 arg0);
void func_15071254(s32 arg0);
void func_15071278(s32 arg0);
void func_15071434(s32 arg0);
void func_15071470(s32 arg0);
void func_150714AC(s32 arg0);
void func_150714E8(s32 arg0);
void func_15071544(s32 arg0);
void func_1507158C(s32 arg0);
void func_150715D4(s32 arg0);
void func_1507161C(s32 arg0);
void func_15071628(s32 arg0);
void func_15071668(s32 arg0);
void func_15071690(s32 arg0);
void func_150716EC(s32 arg0);
void func_15071764(s32 arg0);
void func_15071830(s32 arg0);
void func_15071860(s32 arg0);
void func_15071888(s32 arg0);
void func_15071998(s32 arg0);
void func_150719CC(s32 arg0);
void func_15071A00(s32 arg0);
void func_15071A34(s32 arg0);
void func_15071D08(s32 arg0);
void func_15071D38(void);
void func_15071D78(void);
void func_15071DC8(void);
void func_15071DF4(void);
void func_15071E20(void);
void func_15071E3C(void);
void func_15071E58(void);
void func_15071ED4(void);
void func_15071F14(void);
void func_15071F54(void);
void func_15071F80(void);
void func_15071FB0(void);
s32  func_150721E8(s32 arg0);
void func_1507233C(void);
void func_15072360(void);
void func_15072388(void);
void func_150723AC(void);
void func_150723E0(void);
void func_150727AC(void);
void func_15072918(void);
void func_15072940(void);
void func_15072968(void);
void func_150729B4(void);
void func_150729D0(void);
void func_15072A14(void);
void func_15072A40(void);
void func_15072A7C(void);
void func_15072AF8(void);
void func_15072DD8(void);
void func_15072E38(void);
void func_15072E7C(void);
void func_15072E98(void);
void func_15072EC0(void);
void func_15072EF4(void);
void func_1507304C(void);
void func_15073054(void);
void func_15073070(void);
void func_15073078(void);
void func_150730A4(void);
void func_150739A4(void);
void func_150739C0(void);
void func_15073A28(void);
void func_15073C28(void);
void func_15073C48(void);
void func_15073CB8(void);
void func_15073CF4(void);
void func_15073D34(void);
void func_15073D74(void);
void func_15073DA4(void);
void func_15073E2C(void);
void func_15073EA4(void);
void func_15073F1C(void);
void func_15073F54(void);
void func_15073F5C(void);
void func_15073F78(void);
void func_15074644(void);
void func_15074840(void);
void func_15074870(void);
void func_150748F4(void);
void func_15074A44(void);
void func_15074A6C(void);
void func_15074B7C(void);
void func_15074BD8(s32 arg0, s32 arg1, s32 arg2);
void func_15074BEC(s32 arg0, s32 arg1, s32 arg2);
void func_15074C00(s32 arg0, struct127 *arg1, s32 arg2);
void func_15074DEC(struct127 *arg0, s32 arg1, s32 arg2);
void func_15074E04(s32 arg0, s32 arg1, s32 arg2);
void func_15074E80(struct127 *arg0, struct127 *arg1, s32 arg2);
void func_15074EE8(struct127 *arg0, struct127 *arg1, s32 arg2);
void func_15074F30(struct127 *arg0, struct127 *arg1, s32 arg2);
void func_15074FD4(struct127 *arg0, struct127 *arg1, s32 arg2);
void func_15075050(struct127 *arg0, s32 arg1, s32 arg2);
void func_150750A4(struct127 *arg0, s32 arg1, s32 arg2);
void func_150750C4(struct127 *arg0, struct127 *arg1, u8 *arg2);

void func_15075498(void);
void func_15075A50(void);
void func_15075B60(void) ;

void func_1508F9C4(void);

void func_15093818(s32 arg0);
void func_15093878(void);
void func_1509BFB0(s32 num, s32, s32, ...);
void func_150AECCC(struct42 *arg0);
void func_150AED4C(struct114 *arg0);
s32  func_150C3D48(s32 arg0);
void func_150CEF10(struct108 *arg0);

void func_150DE310(s32 arg0);
void func_150DE32C(void); // dummy
void func_150DEC90(s32 arg0);
void func_150EB430(void *arg0, void *arg1);
void func_150FCA00(struct108 *arg0);

void func_15100330(s32 arg0);
void func_15103800(void);
void func_15103828(void);
void func_1510550C(struct102 *arg0, s32 arg1, u8 arg2);
void func_15105548(struct207 *arg0, s32 *arg1, u8 arg2);
void func_15105848(struct207 *arg0, s32 arg1, u8 arg2);
void func_1511FC20(s32 arg0);
s32  func_1511FC2C(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32  func_1511FC44(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_15122AE0(void);
void func_15124770(struct108 *arg0, s32 arg1);
void func_15123508(struct108 *arg0);
void func_15124AB4(struct108 *arg0);
void func_15125394(struct108 *arg0);
void func_15125594(struct108 *arg0);
void func_15125608(struct108 *arg0);
void func_15125690(struct108 *arg0, s32 arg1);
void func_15126138(struct108 *arg0);
void func_15127FEC(struct108 *arg0, s32 arg1, s32 arg2);
void func_15128680(s32 arg0);
void func_15128774(struct108 *arg0, struct127 *arg1);
void func_1512D380(s32 arg0);
struct210 *func_1513C4EC(s32 arg0, s32 arg1, u8 arg2, u8 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, u8 arg9, u8 argA, s32 argB, s32 argC, s32 argD, u8 argE, s32 argF);
struct210 *func_1513C5B0(s32 arg0, s32 arg1, u8 arg2, u8 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, u8 arg9, u8 argA, s32 argB, u8 argC, s32 argD);
struct210 *func_1513C650(s32 arg0, u8 arg1, u8 arg2, s32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, u8 arg9, u8 argA, s32 argB, s32 argC, s32 argD, u8 argE, s32 argF);
struct210 *func_1513C73C(s32 arg0, u8 arg1, u8 arg2, s32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, u8 arg9, u8 argA, s32 argB, u8 argC, s32 argD);
struct210 *func_1513C804(s32 arg0, s32 arg1, u8 arg2, u8 arg3, s32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9, u8 argA, u8 argB, s32 argC, u8 argD, s32 argE);
void func_1513C8D4(struct210 *arg0);
void func_1513C900(struct210 *arg0);
void func_1513C92C(struct210 *arg0);
void func_1513C9B0(struct210 *arg0);
void func_1513C9FC(struct210 *arg0);
void func_1513CA48(struct210 *arg0);
void func_1513CA6C(struct210 *arg0);
void func_1513CAA0(struct210 *arg0);
void func_1513CAD4(struct210 *arg0);
void func_1513CB58(struct210 *arg0);
void func_1513CBA4(struct210 *arg0);
void func_1513D4B8(s32 arg0, s32 arg1, u8 arg2, u8 arg3, u8 arg4, u8 arg5, u8 arg6, s32 arg7, u8 arg8, s32 arg9);
void func_1513D524(s32 arg0, u8 arg1, u8 arg2, u8 arg3, u8 arg4, u8 arg5, s32 arg6, u8 arg7, s32 arg8);
s32  func_1513D594(s32 arg0, s32 arg1, u8 arg2, u8 arg3, u8 arg4, u8 arg5, s16 arg6, f32 arg7, f32 arg8, s32 arg9, s32 argA, s32 argB, s32 argC, u8 argD, s32 argE, u8 argF, s32 arg10);
void func_1513D668(s32 arg0, s32 arg1, u8 arg2, u8 arg3, u8 arg4, u8 arg5, s16 arg6, f32 arg7, f32 arg8, s32 arg9, s32 argA, u8 argB, s32 argC, u8 argD, s32 argE);
void func_1513E070(s32 arg0, s32 arg1, s32 arg2);
void func_1513E084(struct210 *arg0, struct212 *arg1, u8 arg2);
void func_1513E134(void);
void func_1513E2A4(void);
void func_1513EDB4(s32 arg0, s16 arg1);
void func_1513EDE4(s32 arg0, s16 arg1);
void func_1513F4B0(struct210 *arg0, s16 arg1);
void func_151403A8(s32 arg0, u8 arg1);
void func_151403DC(s32 arg0, u8 arg1);
void func_151411A4(struct210 *arg0);
void func_151411C4(struct210 *arg0);
s32  func_15141818(s32 arg0, s32 arg1);
void func_15141970(struct37 *arg0);
void func_15141990(void *arg0);
void func_151419B0(void *arg0);
void func_15141DA4(void *arg0, s32 arg1, s32 arg2);
s32  func_151422C0(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32  func_151422DC(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32  func_151422F8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32  func_15143E08(struct127 *arg0);
s32  func_15144C2C(s16 arg0);
f32  func_15144C8C(f32 arg0, f32 arg1);
void func_151450B4(struct17 *arg0, struct17 *arg1, struct17 *arg2);
s32  func_151454BC(u8 arg0, f32 arg1, struct17 *arg2);
f32  func_15145A0C(f32 arg0, f32 arg1, f32 arg2);
void func_15145A50(struct127 *arg0);
void func_15146508(struct127 *arg0, struct127 *arg1);
void func_151467A4(f32 *arg0, f32 arg1, f32 *arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 *arg7);
void func_15165F70(void);
void func_1516972C(struct102 *arg0);
void func_1516979C(struct102 *arg0);
void func_15169804(struct102 *arg0);
void func_15169824(s32 arg0);
void func_1519EF70(s32 arg0, s32 arg1, s32 arg2);
void func_151DBBD4(struct17 *arg0, s32 arg1, u8 *arg2, u8 arg3, s32 arg4);

void func_16000000(void);
s32  func_16000028(void);
void func_16000058(void);
s32  func_16000224(void);
void func_16000304(void);
void func_1600030C(void);
void func_16000314(void);
s32  func_16000384(void);
void func_16000424(struct118 *arg0);
void func_160012B0(s32 arg0, u8 *arg1);
void func_16001338(u8 arg0, u8 arg1, u8 arg2);
s32  func_160016F4(s32 arg0);
s32  func_16001984();
s32  func_160019A8(s32 direction, void *dramAddr);
void func_16001A64(void);
s32  func_16001A6C(f32 arg0);
void func_16001AB0(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
u8*  func_16001AD0(u8 *arg0, u8 *arg1, u32 arg2);
s32  func_16001B8C(u8 *arg0, u8 *arg1, u32 arg2);


/* non-matching */

void func_10001194(s32 arg0);
void func_10001420(void);
void func_100014C4(s32 arg0);
//func_10001550
// s16  func_100019F0(s16 *arg0, struct05 *arg1);
//func_10001AA8
// s32  func_100020D0(s32 *arg0, s32 arg1, s32 *arg2, s32 arg3);
//func_10002718
// s32  func_10002DB0(s32 arg0, s32 arg1);
//func_10002E50
void func_100030A0(OSPri priority, OSMesgQueue *mesgQueue, OSMesg *arg2, s32 arg3);
struct00* func_10003220(struct00 *arg0);
void func_10003330(struct00 *arg0);
//func_100034E0
//func_10003658
// void func_100038C0(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
// void func_100038E0(void);
void func_10003920(void);
// void func_10003BD0(void);
//func_10003ACC
//func_10003C6C
//func_10004074
void func_100043B4(s32 *arg0, u32 arg1);
//func_100046E4
void func_1000480C(s32 devAddr, void *dramAddr, u32 size);
void func_100049E0(s32 arg0);
//func_10004DB0
void func_100050A0(OSMesgQueue *arg0);
void func_100052A0(s32 arg0);
//func_10005570
//func_100056A0
//func_100057E0
//func_10005948
//func_10005AB0
void func_10005B04(s32 arg0);
//func_10005BE0
//func_10005C2C
void func_1000709C(void);
//func_10007C74
//func_10007CC4
//func_10007D28
//func_10007DA0
//func_10007DAC
//func_10008120
//func_10008180
//func_10008B60
//func_10008BC0
//func_10008C04
void func_10008C6C(u8 arg0, u8 arg1);
//func_10008CE8
//func_10008F90
void func_10009400(s32 arg0);
//func_100095A0
s32 func_100097CC(u32 arg0, s32 arg1, s32 arg2);
//func_100099BC
void func_10009BE4(struct147 *arg0);
s32 func_10009CBC(void *arg0, s32 arg1);
s32  func_10009FFC(void);
//func_1000A03C
//func_1000A348
//func_1000A420
//func_1000A750
//func_1000B060
//func_1000B1FC
//func_1000B294
//func_1000B2F4
//func_1000B3D4
//func_1000B548
//func_1000B638
//func_1000B8B8
//func_1000BA18
//func_1000BAFC
//func_1000BCBC
//func_1000BF60
//func_1000C350
s32 func_1000C530(s32, u8, f32, f32, f32);
//func_1000C7E8
//func_1000C934
//func_1000CA18
//func_1000CAE4
//func_1000CBF0
//func_1000CC54
//func_1000CD40
//func_1000CDA0
//func_1000CEAC
//func_1000D2F8
void func_1000D758(f32 arg0, f32 arg1, s32 arg2);
//func_1000D96C
//func_1000DE1C
//func_1000DEC4
s16 func_1000DF68(s32 arg0, s32 arg1, s32 arg2);
//func_1000E134
//func_1000E17C
//func_1000E2F4
//func_1000E40C
s32 func_1000E46C(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_1000E588(s32 arg0, s32 arg1, s32 arg2);
//func_1000E654
//func_1000E7A0
//func_1000E8C4
//func_1000E8F0
//func_1000E934
//func_1000EC24
//func_1000ECCC
void func_1000EDA0(void *arg0, s32 arg1, s32 arg2, s32 arg3, void *arg6);
s32  func_1000EE70(void *arg0, s32 arg1, void *arg2, s32 arg3, s32 arg4, void *arg5);
//func_1000EFB4
//func_1000F1A8
//func_1000F248
//func_1000F44C
//func_1000F4D8
//func_1000F568
//func_1000F6B8
void func_1000F85C(u16 arg0, u16 arg1, s32 arg2);
void func_1000F91C(u16 arg0, u16 arg1, s16 arg2, u8 arg3, s32 arg4, s16 arg5, s16 arg6, s16 arg7, s16 arg8, s16 arg9);
u16  func_1000FA64(u16 arg0, s16 arg1, s16 arg2, s16 arg3, s32 arg4, u16 arg5, s16 arg6, s32 arg7, s32 arg8, s32 arg9, s32 argA, s32 argB);
//func_1000FC18
//func_1000FD38
//func_1000FDF4
//func_1000FE88
//func_1000FEF0
s32  func_1000FF90(s32 arg0, s32 arg1, s32 arg2);
//func_1001001C
//func_100100E0
u16 func_10010154(u16 arg0, void *arg1, u16 arg2, s16 arg3, u16 arg4);
u16 func_10010344(u16 arg0, void *arg1, s32 arg2, s16 arg3, u16 arg4);
//func_10010558
void func_10010630(u16, s32, s32, s32, s32);
//func_1001091C
u16  func_10010BE8(s32 arg0, s32 arg1, u16 arg2, u8 arg3, s16 arg4, u8 arg5, u8 arg6);
//func_10010E78
void func_10010F88(s32 arg0, u16 arg1, s16 arg2, u8 arg3, s32 arg4, s16 arg5, s16 arg6, s16 arg7, s16 arg8, s16 arg9);
//func_10010FFC
//func_10011310
void func_100114D0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, u32 *arg7, s32 arg8);
//func_10011624
//func_10011BB8
//func_10011EB8
//func_10012020
//func_1001263C
//func_100126E8
void func_10015464(struct18 *arg0, f32 arg1);
// void func_10017870(u8 arg0);
// void func_10018790(struct26 *arg0, s32 arg1, u32 arg2, u32 arg3);
void func_10019D98(struct26 *arg0, u8 arg1);
void func_1001A030(struct26 *arg0, s32 arg1, s32 arg2, u32 arg3);
void func_1001A508(struct26 *arg0, struct25 *arg1, s32 arg2, s32 arg3);
//func_1001AAE0
//func_1001ABA0
//func_1001ADA4
// void *func_1001AF28(struct26 *arg0, s32 arg1, s32 arg2, s32 arg3);
//func_1001AFEC
//func_1001B07C
//func_1001B200
// s32  func_1001B310(void *arg0, void *arg1);
// u8   func_1001B450(void *arg0, void *arg1);
void func_1001E530(s32 arg0, void *arg1, s32 arg2);
//func_1019EA88
//func_1019EAB0
//func_1019EAE0
//func_1019ECAC
//func_1019ED8C
//func_1019ED94
//func_1019ED9C
//func_1019EE0C
//func_1019EEAC
//func_1019F018
//func_1019F154
//func_1019F214
//func_1019F4E4
//func_1019F59C
//func_1019FA14
//func_1019FACC
//func_1019FD38
//func_1019FDC0
//func_1019FE18
//func_1019FF78
//func_101A0094
//func_101A0100
//func_101A017C
//func_101A0188
//func_101A02B8
//func_101A0344
//func_101A040C
//func_101A0430
//func_101A04EC
//func_101A04F4
//func_101A0538
void func_1001C224(void *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_1001CF38(struct139 *arg0, f32 arg1);
struct21 *func_10020ABC(struct42 *arg0, struct119 *arg1, s32 arg2, s32 arg3, struct21 *arg4);
s16  func_10020E18(f32 arg0, f32 arg1, s32 arg2, u16 *arg3);
struct21 *func_10022040(struct42 *arg0, struct119 *arg1, s32 arg2, struct21 *arg3);

s32  func_1501A490(s32 arg0, s16 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void func_150403C8(void *arg0, u32 arg1, s32 arg2);
f32  func_15047C00(f32 arg0);
f32  func_15047D60(f32 arg0);
f32  func_150484A0(f32 arg0, f32 arg1);
f32  func_150488C8(f32 arg0);
f32  func_15048C30(f32 arg0);
f32  func_15048FC8(struct17 *arg0);
void func_15049688(f32 *arg0, f32 arg1, f32 *arg2, f32 arg3, f32 arg4, f32 arg5);
void func_1505A184(u16 arg0, f32 arg1, f32 arg2, f32 *arg3, f32 *arg4, f32 *arg5);
s32  func_1505A630(f32, f32, s32);
f32  func_1505A6F8(struct127 *, s32);
f32  func_1505A72C(s32, s32);
void func_1505E650(struct127 *arg0, u16 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, s32 arg6);
void func_15060F28(void *arg0, s32 arg1);
void func_15062B1C(struct127 *arg0, f32 arg1);
void func_15062B50(struct127 *arg0, f32 arg1);
void func_1506C460(f32, f32, f32, f32, s32, s32, f32, f32, s32, s32, s32);
void func_1507BAD0(void);
void func_15083568(s32, s32, f32, s32);
s32  func_15083E0C(u8);
s32  func_150859AC(s16 arg0, s32 arg1); // a guess
void func_1508B20C(f32, f32, f32, f32);
void func_150A8050(s32 arg0, f32 arg1, f32 arg2, f32 arg3);
void func_150AD770(void);
f32  func_150AD900(f32 *arg0, f32 *arg1);
f32  func_150AD930(f32 *arg0);
u8   func_150ADA20(void);
f32  func_150ADA68(void);
void func_150E2EA4(s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, s32, s32, s32, f32, f32, s32, f32);
void func_150EA904(s32 arg0, s32 arg1);
void func_1510B32C(s32 arg0, f32 arg1, f32 arg2, f32 arg3);
void func_1510B958(s32 arg0);
s32  func_1510B9D0(s32 arg0, s16 arg1);
s32  func_1510FD20(s32 arg0, s32 arg1);
s32  func_15123934(struct108 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32  func_151239CC(struct108 *arg0, s32 arg1);
void func_15127EB8(struct108 *arg0);
struct210 *func_1513C350(struct210 *arg0, s32 arg1, u8 arg2, u8 arg3, u8 arg4, s32 arg5, s32 arg6, struct167 *arg7, s32 arg8, u8 arg9, s32 argA);
void *func_1513D2F0(void *arg0, s32 arg1, u8 arg2, u8 arg3, u8 arg4, u8 arg5, u8 arg6, s32 arg7, s32 arg8, s32 arg9, u8 argA, s32 argB);
s32  func_1513D6FC(struct211 *arg0, s16 arg1, f32 arg2, f32 arg3, s32 arg4, s32 arg5, u8 arg6);
void  func_1513E13C(struct210 *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, u8 arg6);
s32  func_1513E2AC(s32, s32, s32, f32, f32, f32, f32, f32, s32);
f32  func_151423D8(u8);
f32  func_15144598(struct134 *arg0);
f32  func_1514462C(s32 arg0);
f32  func_15144B68(f32 arg0);
void func_1514D3B0(s32, s16, u8, u8);
s32  func_1515D6D0(s32 arg0, s32 arg1);
void func_1516127C(s32 arg0, u8 arg1, u8 arg2);
void func_15161334(s32 arg0, u8 arg1, u8 arg2);
s32  func_151615F8(s32 arg0, u8 arg1, u8 arg2, u8 arg3, u8 arg4, u8 arg5);
void func_15169260(s32, s32, s32, u8);
void func_15177410(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, f32 arg5, s32 arg6, f32 arg7, s32 arg8, s32 arg9, s32 argA, s32 argB, s32 argC, s32 argD, s32 argE, s32 argF);
s32  func_1517EFAC(s32 arg0);
void func_15178E14(u8, s32);
s32  func_15187EC0(s32 arg0, f32 arg1, s32 arg2, s32 arg3, u8 arg4, u8 arg5, u8 arg6, u8 arg7);
void *func_15195AA8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void func_151B8DB0(s32 arg0, u8 arg1, u8 arg2, u8 arg3);
void func_151D5404(s32, f32, f32, f32, s32, s32, s32, s32);
void func_151D5714(s32, s32, s32, s32, f32, s32, s32);
void func_151D9B8C(u8 arg0, f32 arg1, u8 arg2, s32 arg3, struct17 *arg4, s16 arg5, u8 arg6, u8 arg7, u8 arg8, u8 arg9, s32 argA);
void func_151F3C4C(void);
// void func_15048F90(f32 *arg0, f32 *arg1, s32 arg2);
void func_151FA130(void);
void func_1019EA88(void);
#endif
