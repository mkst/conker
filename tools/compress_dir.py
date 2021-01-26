import argparse
import os
import sys
import struct
import subprocess

import rarezip as rz

def compress_files(files, indir, outdir, initial_offset, alignment, level):
    offsets = []
    offset = initial_offset
    output_buffer = bytearray(8192)
    for file in files:
        # slow, but will suffice until we have a python library that matches
        compressed = rz.compress_file(f"{indir}/{file}", level=level)
        if compressed is None:
            print("ERROR calling gzip", res)
            break

        compressed_length = len(compressed)
        # copy into buffer
        for i in range(compressed_length):
            output_buffer[i] = compressed[i]
        # write gzip file
        with open(f"{outdir}/{file}.gz", "wb") as o:
            if alignment > 1:
                compressed_length += compressed_length % alignment
            o.write(output_buffer[:compressed_length])

        offsets.append(offset)
        offset += compressed_length
        sys.stdout.write('.');sys.stdout.flush()
    offsets.append(offset)
    # flush ...
    print("")
    return offsets

def main(indir, outdir, offsets_file, num_offsets, total_size, alignment, level, xor_key):
    files = sorted(list(filter(lambda x: x.startswith('0') and x.endswith('.bin'), os.listdir(indir))))

    if offsets_file:
        if len(files) > num_offsets:
            old_num_offsets = num_offsets
            num_offsets = len(files) + 2
            print("WARN: --num-offsets (%i) too small for number of files found, setting to %i" % (old_num_offsets, num_offsets))
        initial_offset = num_offsets * 4 # sizeof(s32)
    else:
        initial_offset = 0

    offsets = compress_files(files, indir, outdir, initial_offset, alignment, level)

    if offsets_file:
        offsets_dump = [total_size]
        for offset in offsets:
            offsets_dump.append(offset ^ xor_key)

        if len(offsets_dump) < num_offsets:
            for i in range(num_offsets - len(offsets_dump)):
                offsets_dump.append(0)
        offsets_file.write(struct.pack(">" + num_offsets * "I", *offsets_dump))



if __name__ == '__main__':
    parser = argparse.ArgumentParser(description='Compress contents of directory using gzip',
                                     formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument('indir', type=str,
                        help="source directory")
    parser.add_argument('outdir', type=str,
                        help="destination directory")
    parser.add_argument('--offsets-file', type=argparse.FileType('wb'),
                        help='file to write offsets to')
    parser.add_argument('--num-offsets', type=int, default=512,
                        help='offsets length')
    parser.add_argument('--total-size', type=int, default=1335000,
                        help='.text section length')
    parser.add_argument('--alignment', type=int, default=2,
                        help='alignment (padding)')
    parser.add_argument('--level', type=int, default=9,
                        help='gzip level (1-9)')
    parser.add_argument('--xor-key', type=str, default='0x8039CCCA',
                        help='key to xor offsets with')
    args = parser.parse_args()

    xor_key = int(args.xor_key, 16)

    main(args.indir, args.outdir, args.offsets_file, args.num_offsets, args.total_size, args.alignment, args.level, xor_key)
