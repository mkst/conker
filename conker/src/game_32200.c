#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_15004D50(void) { 
    s32 i; //s0
    struct222** s1;

    D_800C3FC0 = (struct222*) &D_80084300;
    for( i = 1;  i <= D_80082FA0; i++){
        (&D_800C3FC0)[i] = (struct222 *) malloc(0x50, 1, 2, 0); //malloc
        bcopy(D_800C3FC0, (&D_800C3FC0)[i], 0x50); //bcopy
    }
}
