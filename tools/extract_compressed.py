import sys
import yaml

import rareunzip as ru

def main(config_file, infile, outdir):
    if not outdir.endswith("/"):
        outdir += "/"

    with open(config_file, "r") as f:
        config = yaml.safe_load(f.read())
        with open(infile, "rb") as b:
            data = b.read()
            for file in config["files"]:
                start = file["start"]
                end = start + file["compressed"]
                expected_length = file["uncompressed"]
                if end > len(data):
                    print("bad config!", file)
                    break
                filename = f"{outdir}{start:08X}.bin"
                chunk = data[start:end]
                try:
                    res = ru.runzip(chunk)
                except:
                    print("bad zip", file)
                    continue
                if len(res) != expected_length:
                    print("bad file!", file)
                    continue
                with open(filename, "wb") as o:
                    o.write(res)


if len(sys.argv) < 4:
    print("usage: python3 %s <config.yaml> <infile> <outdir>" % sys.argv[0])
else:
    main(sys.argv[1], sys.argv[2], sys.argv[3])
