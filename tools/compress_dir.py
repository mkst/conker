import argparse
import os
import sys
import struct

import rarezip as rz

# XOR_KEY = 0x8039CCCA

def compress_files(files, indir, outdir, offsets, no_padding, xor_key=0x8039CCCA):
    output_buffer = bytearray(8192)

    idx = 1
    if offsets:
        initial_offset = len(offsets) * 4 # each offset is an u32 (4 bytes)
    else:
        initial_offset = 0
    offset = initial_offset
    for file in files:
        # slow, but will suffice until we have a python library that matches
        os.system(f"gzip --best --keep --no-name --force {indir}/{file}")
        with open(f"{indir}/{file}.gz", "rb") as f:
            gzip_compressed = f.read()
        uncompressed_length = struct.unpack("<i", gzip_compressed[-4:])[0]
        compressed = struct.pack(">i", uncompressed_length) + gzip_compressed[10:-8]
        compressed_length = len(compressed)
        # copy into buffer
        for i in range(compressed_length):
            output_buffer[i] = compressed[i]
        # overwrite gzip file
        with open(f"{outdir}/{file}.gz", "wb") as o:
            if not no_padding: # slightly awkward logic
                # 2 byte alignment
                compressed_length += compressed_length % 2
            o.write(output_buffer[:compressed_length])

        if offsets:
            offsets[idx] = offset ^ xor_key
            idx += 1
        offset += compressed_length
        sys.stdout.write('.');sys.stdout.flush()
    if offsets:
        offsets[idx] = offset ^ xor_key
    return offsets

def main(indir, outdir, offsets_file, num_offsets, total_size, no_padding):
    files = sorted(list(filter(lambda x: x.startswith('0') and x.endswith('.bin'), os.listdir(indir))))

    if offsets_file:
        if len(files) > num_offsets:
            old_num_offsets = num_offsets
            num_offsets = len(files) + 2
            print("WARN: --num-offsets (%i) too small for number of files found, setting to %i" % (old_num_offsets, num_offsets))
        offsets = num_offsets * [0]
        offsets[0] = total_size
    else:
        offsets = None

    offsets = compress_files(files, indir, outdir, offsets, no_padding)

    if offsets_file:
            offsets_file.write(struct.pack(">" + num_offsets * "I", *offsets))
    # clear stdout buffer
    print("")


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
    parser.add_argument('--no-padding', action='store_true',
                        help='disables 2-byte alignment')
    args = parser.parse_args()

    main(args.indir, args.outdir, args.offsets_file, args.num_offsets, args.total_size, args.no_padding)
