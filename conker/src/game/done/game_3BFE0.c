#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_1500EB30(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    struct04 *temp_v0 = (struct04 *)func_151491F4((s16) ((func_150ADA20() & 0x7F) + 0xA), 1, -1, 1, 0, 0xA, 0xFF, 0);
    if (temp_v0 != 0) {
        temp_v0->unk28 = arg0;
        temp_v0->unk2A = arg1;
        temp_v0->unk2C = arg2;
        temp_v0->unk2E = arg3;
        temp_v0->unk30 = arg4;
    }
}

void func_1500EBC4(void) {
    func_1500EB30(386,  571,  -1576,  422, 0);
    func_1500EB30(-23,  797,  -2235, -145, 0);
    func_1500EB30(113,  745,  -2246, -190, 0);
    func_1500EB30(388,  1124, -1741,  481, 0);
    func_1500EB30(388,  1124, -1560,  643, 0);
    func_1500EB30(388,  1124, -1104,  916, 0);
    func_1500EB30(1464, 1095, -2654, -492, 1);
    func_1500EB30(1448, 1095, -2431,  502, 0);
    func_1500EB30(1409, 1116, -1993, -379, 0);
    func_1500EB30(1403, 1120, -569,  -404, 0);
    func_1500EB30(1540, 1371, -1265, -525, 0);
    func_1500EB30(892,  2181, -1759, 1736, 0);
    func_1500EB30(763,  2181, -1225, 1654, 0);
    func_1500EB30(1209, 2181, -899,  1376, 0);
    func_1500EB30(1719, 2181, -781,  -565, 0);
    func_1500EB30(1162, 2181, -644,  1437, 0);
    func_1500EB30(1932, 2181, -1266, -623, 1);
}
