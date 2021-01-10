import os
import struct
import sys
import subprocess

def compress_file(filepath, level=9):
    # force use of the gzip that sits along this file
    gzip = os.path.join(os.path.dirname(os.path.realpath(__file__)), "gzip")
    args = [gzip, f"-{level}", "--no-name", "-c", filepath]
    res = subprocess.run(args, capture_output=True)
    if res.returncode != 0:
        return None
    gzip_compressed = res.stdout
    uncompressed_length = struct.unpack("<i", gzip_compressed[-4:])[0]
    return struct.pack(">i", uncompressed_length) + gzip_compressed[10:-8]

# def rzip(data, level=9):
#     compressed = zlib.compress(data, level=level)
#     compressed = compressed[2:]                             # drop header
#     compressed = compressed[:-4]                            # drop crc32
#     compressed = struct.pack('>I', len(data)) + compressed  # prepend uncompressed size
#     return compressed

def main(infile, outfile, level):
    with open(outfile, "wb") as o:
        o.write(compress_file(infile, level=level))


if __name__ == '__main__':
    if len(sys.argv) < 3:
        print("usage %s infile outfile" % sys.argv[0])
    else:
        main(sys.argv[1], sys.argv[2], 9 if len(sys.argv) < 4 else int(sys.argv[3]))
