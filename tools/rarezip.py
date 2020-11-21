import zlib
import struct
import sys


def rzip(data, level=9):
    compressed = zlib.compress(data, level=level)
    compressed = compressed[2:]                             # drop header
    compressed = compressed[:-4]                            # drop crc32
    compressed = struct.pack('>I', len(data)) + compressed  # prepend uncompressed size
    return compressed

def main():
    with open(sys.argv[1], "rb") as f:
        with open(sys.argv[2], "wb") as o:
            if len(sys.argv) == 4:
                level = int(sys.argv[3])
            else:
                level = 9
            o.write(rzip(f.read(), level=level))


if __name__ == '__main__':
    if len(sys.argv) < 3:
        print("usage %s infile outfile" % sys.argv[0])
    else:
        main()
