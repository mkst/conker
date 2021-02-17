#include <os_internal.h>
#include <rcp.h>
#include "../os/osint.h"

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/io/aisetnextbuf/osAiSetNextBuffer.s")
// NON-MATCHING: matches won't OK until .bss is figured out (i think?)
// s32 osAiSetNextBuffer(void *bufPtr, u32 size)
// {
//     static u8 hdwrBugFlag = 0;
//   	char *bptr = bufPtr;
//   	if (hdwrBugFlag != 0)
//   		  bptr = (u32)bufPtr - 0x2000;
//
//   	if ((((s32)bufPtr + size) & 0x3fff) == 0x2000)
//   		  hdwrBugFlag = 1;
//   	else
//   		  hdwrBugFlag = 0;
//
//   	if (__osAiDeviceBusy())
//   		return -1;
//
//   	IO_WRITE(AI_DRAM_ADDR_REG, osVirtualToPhysical(bptr));
//   	IO_WRITE(AI_LEN_REG, size);
//   	return 0;
// }
