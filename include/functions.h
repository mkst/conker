#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <ultra64.h>

#include "structs.h"

void func_80001050(void);
void func_800010F8(s32 arg0);
void func_80001194(s32 arg0);
void func_80001420(void);
void func_80001444(void);
void func_800014A0(void);
void func_800014C4(s32 arg0);
s16  func_800019F0(s16 *arg0, struct5 *arg1);
s32  func_80002070(s32 arg0, s32 arg1, s32 arg2);
s32  func_800020D0(s32 *arg0, s32 arg1, s32 *arg2, s32 arg3);
s32  func_80002DB0(s32 arg0, s32 arg1);

void func_800030A0(OSPri priority, OSMesgQueue *mesgQueue, OSMesg *arg2, s32 arg3);
// s32 func_80003220(struct0 *arg0);
void func_8000349C(s32 arg0);
void func_800038E0(void);
s32  func_8000390C(void);
void func_80003920(void);
// u32  func_80003930(void);
void func_80003BD0(void);
void func_800039B0(void);

void func_800039C0(void);
s32  func_80003C40(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_80004470(void);
void func_80004674(void);
void func_80004FE0(void);
void func_800050A0(OSMesgQueue *arg0);
// void *func_800051C8(void *arg0, OSMesgQueue *arg1);
void func_80005B04(s32 arg0);
void func_800051E8(void);
void func_80005218(void);
void func_80005298(void);
void func_800052A0(s32 arg0);

void func_8000709C(void);
void func_80008A94(u8 arg0, s32 arg1, s32 arg2);
void func_800084D8(u8 arg0);
void func_8000853C(u8 arg0);
void func_80008570(u8 arg0, s32 arg1);
void func_800085A4(s32 arg0, s32 arg1, s32 arg2);
void func_800085F8(u8 arg0, s32 arg1);
void func_8000862C(u8 arg0, s32 arg1);
void func_80008B2C(u8 arg0);
void func_80008F24(u8 arg0);
void func_80008F58(u8 arg0);

s32 *func_8000B1B0(s32 arg0);
s32  func_8000BBE8(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32  func_8000E704(s32 arg0, s32 arg1, s32 arg2);
void func_8000E75C(s32 arg0);
s32  func_8000E770(s32 *arg0, s32 *arg1);
u16  func_8000EA94(s32 arg0);
void func_80011E88(s32 arg0);
void func_80011E94(s32 arg0);

void func_80011FA0(s32 *arg0);

void func_800128D0(struct8 *arg0, s32 arg1);
void func_80012934(void *arg0, s32 arg1, s32 arg2);
// void func_80012B84(struct11 *arg0, s32 arg1);
void func_80012BD0(void *arg0, s32 arg1);
void func_80012C5C(struct9 *arg0, s32 arg1, s32 arg2);
void func_80012CFC(struct12 *arg0, s32 arg1, s32 arg2);
// f32 func_80012D80(s32 arg0);
s32 func_80012E04(void *arg0, void *arg1, u8 arg2, u8 arg3, u8 arg4, u8 arg5);
s32 func_80012F94(void *arg0, void *arg1);
void func_800131D8(s32 *arg0);


s32  func_80017A80(s32 arg0);
void func_80017AA0(s32 arg0);
void func_80017AF0(s32 arg0, s32 arg1);
void func_80017BB8(s32 arg0, s32 arg1);
void func_80017C00(s32 arg0, s32 arg1);
void func_80017EC0(s32 arg0);
void func_80018C60(s32 arg0);
void func_80018D50(s32 arg0);

void func_8001E480(void);
void func_8001E494(void);

#endif
