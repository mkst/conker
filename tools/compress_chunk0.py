import sys

import rarezip as rz

if len(sys.argv) != 3:
    print("usage: python3 %s indir outdir")
    sys.exit(1)

output_buffer = bytearray(4096)
# offsets = [2048]
indir = sys.argv[1]
outdir = sys.argv[2]

for file in range(507): # thats simply how many chunks there are
    with open (f"{indir}/{file:04}.bin", "rb") as f:
        compressed = rz.rzip(f.read())
        compressed_length = len(compressed)
        # copy into buffer
        for i in range(compressed_length):
            output_buffer[i] = compressed[i]
        with open(f"{outdir}/{file:04}.gz", "wb") as o:
            # 2 byte alignment
            compressed_length += compressed_length % 2
            o.write(output_buffer[:compressed_length])
        # offsets.append(offsets[-1] + compressed_length)

# TODO: write out offsets block
