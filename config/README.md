# config/

This directory contains `yaml` files used by the `extract_compressed` Python script to extract the compressed chunks in the ROM that do not (appear to?) have an offsets table.

# Compressed Sections

## Decompression

Use the `extract_compressed.py` script to decompress these compressed files.

The arguments are the config file, the file to be decompressed, and the output directory to extract to, e.g.:

```sh
mkdir -p tmp
python3 tools/extract_compressed.py config/compressed.us.yaml bin/compressed.bin tmp/
```
**NOTE:** Change `us` to `eu` if you are working with the `eu` ROM.

### Compression

The same script that is used to compress the `game` assets can be re-used to compressed these files. There is no 2-byte alignment within these files, so be sure to pass the `--no-padding` flag:

```sh
# create output folder
mkdir -p tmp2
# perform compression
python3 tools/compress_dir.py tmp tmp2 --no-padding
# combine compressed files into single blob
cat tmp2/*.gz > compressed.bin
```

In the ROM there is `0x0` padding added to the end of the compressed section to align to a 16 byte boundary.
