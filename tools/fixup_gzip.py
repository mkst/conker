import sys
import struct

# python's gzip library is based on zlib...
def main(infile, outfile):
    with open(infile, "rb") as f:
        data = f.read()
    if data[:2] != b'\x1f\x8b':
        print("ERROR: %s does not appear to be a valid gzip file" % infile)
        return
    # final 4 bytes are little-endian length (platform independent)
    uncompressed_length = struct.unpack("<i", data[-4:])[0]
    # trim header
    data = data[10:]
    # trim trailer
    data = data[:-8]
    # rarezip has uncompressed length as header
    data = struct.pack(">i", uncompressed_length) + data
    # align to 2 byte boundary
    if len(data) % 2:
        data = data + bytearray([0x00])
    with open(outfile, "wb") as o:
        o.write(data)

if __name__ == '__main__':
    if len(sys.argv) < 3:
        print("usage %s infile outfile" % sys.argv[0])
    else:
        main(sys.argv[1], sys.argv[2])
