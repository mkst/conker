#include <PR/sched.h>

#include "functions.h"
#include "variables.h"


u64 D_8003B260; // bss

void func_100050A0(OSMesgQueue *queue) {
    D_8003B260 = 0x00000000FEFEFEFE;
    D_8003B234 = 0;
    D_8003B230 = queue;
    D_8003B238 = (u8)0xFF;
    D_8003B239 = (u8)0;
    D_8003B23A = (u8)0;
    osCreateMesgQueue(&D_8003B1E8, &D_8003B660, 3);
    osCreateMesgQueue(&D_8003B200, &D_8003B670, 1);
    osCreateMesgQueue(&D_8003B218, &D_8003B680, 8);
    func_100039C0();
    osViSetEvent(&D_8003B218, 0, 1);
    osSetEventMesg(OS_EVENT_DP, &D_8003B218, (OSMesg *) 1);
    osSetEventMesg(OS_EVENT_SP, &D_8003B218, (OSMesg *) 2);
    osCreateThread(&D_8003B6A0, 0x14, (void *) func_100049E0, 0, &D_8003B660, 13);
    osStartThread(&D_8003B6A0);
}

void func_100051C8(OSPfs *pfs, OSMesgQueue *queue) {
    pfs->queue = queue;
    pfs->status = (s32)D_8003B234;
    D_8003B234 = pfs;
}

void func_100051E8(void) {
    osSendMesg(D_8003B230, &D_8003B240, 0);
}

void func_10005218(void) {
    osCreateMesgQueue(&D_8003B9D0, &D_8003B9E8, 2);
    osSetEventMesg(OS_EVENT_PRENMI, &D_8003B9D0, (OSMesg *)5);
    osCreateThread(&D_8003B9F0, 0x15, (void *) func_100052A0, 0, &D_8003B9D0, OS_PRIORITY_RMON);
    osStartThread(&D_8003B9F0);
}

void func_10005298(void) {
}

#if 0
// problem with osMotorStop call
void func_100052A0(s32 arg0) {
    static u64 D_8003BC20; // boottime?
    s32 mesg;
    s32 i;

    mesg = 0;
    if (D_8002BD18 == 0) {
        osRecvMesg(&D_8003B9D0, &mesg, 1);
    }
    D_8002AC5C = 1;
    osStopThread(&D_80035910);
    osStopThread(&D_80031AE0);
    func_100093CC(); // stop thread D_8003E3A0 if D_8002AE40 not null
    D_8003BC20 = osGetTime();
    __osViInit();
    D_8002AAE0 = 1;
    osSetThreadPri(0, 11);

    if (D_8002AAE4 != 0) {
        if (D_80084064 == 0) {
            osRecvMesg(&D_800BE900, &D_800BE990, 1);
        }
        for (i = 0; i < 4; i++) { // 4 controllers?
            if (D_800BE944[i])
            {
                _MakeMotorData(&D_800BE900, &D_800BE760[i], i);
                osMotorStop(&D_800BE760[i]); // macro for __osMotorAccess
                D_800BE948[i] = 0;
            }
        }
    }

    while (osGetTime() < D_8003BC20 + 2272727) {};

    while (osGetTime() < D_8003BC20 + 7500000) {};

    osWritebackDCacheAll();

    while(1) {};
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/init_50A0/func_100052A0.s")
#endif
