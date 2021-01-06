# config/

This directory contains `yaml` files used by the `extract_compressed` Python script to extract the compressed chunks in the ROM that do not (appear to?) have an offsets table.

# Compressed Sections

## Decompression

Use the `extract_compressed.py` script to decompress these compressed files.

The arguments are the config file, the file to be decompressed, and the output directory to extract to, e.g.:

```sh
python3 tools/extract_compressed.py config/compressed06.us.yaml bin/compressed06.bin tmp/
```

You can also iterate over all 6 compressed sections with something like this:

```sh
# create output folders
for d in 00 01 02 03 04 05 06; do mkdir -p textures/${d}; done
# dump textures
for d in 00 01 02 03 04 05 06; \
do \
    echo "extracting compressed${d}"; \
    python3 tools/extract_compressed.py config/compressed${d}.us.yaml \
      bin/compressed${d}.bin textures/${d}; \
done
```

**NOTE:** Change `us` to `eu` if you are working with the `eu` ROM.

### Compression

The same script that is used to compress the `chunk0` assets can be re-used to compressed these files. There is no 2-byte alignment within these files, so be sure to pass the `--no-padding` flag:

```sh
# create output folder
mkdir -p tmp2
# perform compression
python3 tools/compress_dir.py tmp tmp2 --no-padding
# combine compressed files into single blob
cat tmp2/*.gz > compressed.bin
```
