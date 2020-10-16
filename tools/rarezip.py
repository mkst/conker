import gzip
import struct
import sys


def rzip(data):
    compressed = gzip.compress(data)
    compressed = compressed[10:]                            # drop header
    compressed = compressed[:-8]                            # drop trailer
    compressed = struct.pack('>I', len(data)) + compressed  # add uncompressed size
    return compressed


def main():
    with open(sys.argv[1], "rb") as f:
        with open(sys.argv[2], "wb") as o:
            o.write(rzip(f.read()))


if __name__ == '__main__':
    if len(sys.argv) < 3:
        print("usage %s infile outfile" % sys.argv[0])
    else:
        main()
