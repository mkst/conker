import os
import sys
import struct

import rarezip as rz

NUM_OFFSETS = 512
NUM_FILES = 507
XOR_KEY = 0x8039CCCA

def main(indir, outdir, print_c_file):
    output_buffer = bytearray(4096)

    output_offsets = NUM_OFFSETS * [0]
    output_offsets[0] = 1335000
    idx = 1

    initial_offset = NUM_OFFSETS * 4 # each offset is an u32 (4 bytes)
    offset = initial_offset
    for file in range(NUM_FILES):
        # slow, but will suffice until we have a python library that matches
        os.system(f"gzip --best --keep --no-name --force {indir}/{file:04}.bin")
        with open(f"{indir}/{file:04}.bin.gz", "rb") as f:
            gzip_compressed = f.read()
        uncompressed_length = struct.unpack("<i", gzip_compressed[-4:])[0]
        compressed = struct.pack(">i", uncompressed_length) + gzip_compressed[10:-8]
        compressed_length = len(compressed)
        # copy into buffer
        for i in range(compressed_length):
            output_buffer[i] = compressed[i]
        # overwrite gzip file
        with open(f"{outdir}/{file:04}.bin.gz", "wb") as o:
            # 2 byte alignment
            compressed_length += compressed_length % 2
            o.write(output_buffer[:compressed_length])

        xored = offset ^ XOR_KEY
        output_offsets[idx] = xored
        offset += compressed_length
        idx += 1
    xored = offset ^ XOR_KEY
    output_offsets[idx] = xored
    with open(f"{outdir}/offsets.bin", "wb") as o:
        o.write(struct.pack(">" + NUM_OFFSETS * "I", *output_offsets))

if __name__ == '__main__':
    if len(sys.argv) != 3:
        print("usage: python3 %s indir outdir")
    else:
        indir = sys.argv[1]
        outdir = sys.argv[2]
        main(indir, outdir, False)
