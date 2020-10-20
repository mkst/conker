import sys

import gedecompress as gd

with open("baserom.us.z64", "rb") as rom:
    dc = gd.GeDecompressor()
    data = rom.read()
    for i in range(len(data) - 4096):
        header = data[i:i+4]
        if header == b'\x00\x00\x10\x00':
            try:
                length, decomp = dc.Decompress(data[i:i+4096])
                if decomp and len(decomp) == 4096:
                    print(str(hex(i)))
            except Exception as e:
                print("no!", e)
