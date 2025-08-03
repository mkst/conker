import sys
import zlib


def runzip_with_leftovers(data):
    d = zlib.decompressobj(wbits=-15) # raw deflate bytestream
    res = d.decompress(data[4:])      # drop 4 byte length header
    return (res, d.unused_data)

def runzip(data):
    res, leftovers = runzip_with_leftovers(data)
    return res

def main():
    with open(sys.argv[1], "rb") as f:
        with open(sys.argv[2], "wb") as o:
            o.write(runzip(f.read()))


if __name__ == '__main__':
    if len(sys.argv) < 3:
        print("usage %s infile outfile" % sys.argv[0])
    else:
        main()
