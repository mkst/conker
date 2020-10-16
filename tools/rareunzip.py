import sys
import gzip

# monkey patch to avoid crc32 check
gzip._GzipReader._read_eof = lambda x: None

def runzip(data):
    data = data[4:]                     # drop 4 byte length
    compressed = b'\x1f\x8b'            # gzip header
    compressed += b'\x08'               # CM = deflate
    compressed += b'\x00'               # no FLaGs
    compressed += b'\x00\x00\x00\x00'   # mtime
    compressed += b'\x02'               # XFL 2, maximum compression
    compressed += b'\x03'               # OS 3, unix
    compressed += data                  # add compressed chunk
    return gzip.decompress(compressed)


def main():
    with open(sys.argv[1], "rb") as f:
        with open(sys.argv[2], "wb") as o:
            o.write(runzip(f.read()))



if __name__ == '__main__':
    if len(sys.argv) < 3:
        print("usage %s infile outfile" % sys.argv[0])
    else:
        main()
