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
