# Config

This directory contains `yaml` files used by the `extract_compressed` Python script to extract the compressed chunks in the ROM that do not have an offsets table.

## Usage:

```sh
# create output folders
for d in 00 01 02 03 04 05 06; do mkdir -p textures/${d}; done
# dump textures
for d in 00 01 02 03 04 05 06; \
do \
    echo "extracting compressed${d}"; \
    python3 tools/extract_compressed.py config/compressed${d}.yaml \
      bin/compressed${d}.bin textures/${d}; \
done
```

## Assets

**Assets 1C**

Contains a bunch of text including:
 - Level names
 - Cheat codes (and swear words)
 - Credits

```sh
mkdir -p text/
python3 tools/extract_compressed.py config/assets1C.yaml rzip/assets1C/0000.bin text/
```

**Assets 13**

Contains a handful of compressed files.
```
24 0 0
2264 0 0
3072 0 128
56 268435456 16
368 268435456 16
680 268435456 16
992 268435456 16
1304 268435456 16
1616 268435456 16
1928 268435456 144
```

**Assets 08**

contains some compressed files:
```
0x48 268435456 16
0x80 268435456 16
0xe0 268435456 16
0x148 268435456 16
0x1a8 268435456 16
0x1f0 268435456 16
0x258 268435456 16
0x298 268435456 16
0x310 268435456 144
```
