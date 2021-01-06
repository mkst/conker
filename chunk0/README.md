# chunk0

First chunk of contiguous data extracted from the ROM; it contains the core game logic, it is TLB'd to `0x15000000`.

To extract, first run `make decompress` in the base of the repo, then `make extract` from inside the `chunk0` directory.

## Overview

The section starts at `0x42450` in the ROM and is `1427000` bytes long. It is comprised of:

 - `.text` section offsets list (2048 bytes)
 - `.text` section itself (compressed)
 - `0x00` padding (to 1,335,000 bytes),
 - `.data` section (compressed)
 - `0x00` padding (to 92,000 bytes).

As part of the n64splat configuration, this chunk is pulled out 'whole' such that the game functionality can be modified and injected back into the ROM.

This chunk is then split out via the `game.REGION.yaml` and the `.text` and `.data` sections are concatenated to create the `game.bin`.

**NOTE:** Above numbers/offsets stated here are for the `us` rom.

## Decompression

### .text (code)

The addresses of each compressed block can be found at `0x42450`, the values in this table should be xor'd with `0x8039CCCA`.

The first compressed block is found at `0x42C50`, the final block begins at `0x186550`.

### .data (data)

The data chunk is a single block, there is no fancy splitting.

## Compression

Each compressed file is padded to align to a 2-byte boundary. Initially the padding byte seemed to be random garbage - however after testing, it appears that the output buffer was recycled when compressing each block, therefore the padding is actually whatever is left in the buffer after compressing the previous block(s). See the [compress_chunk0.py](../tools/compress_chunk0.py) script for more info.

The exception is the final few padding bytes; these appear to be the last compressed bytes, repeated - however more investigation is needed.

# Building

The following commands are used to extract, compile, recompress and recombine it.

## extract .text and .data from game.bin
```sh
make extract
```

## compile
```sh
# there is a sanity check that the compiled code matches the uncompressed game.bin
make --jobs
```

## split, compress, combine and replace original ../bin/game.bin
```sh
make replace
```

# Non-Matching Changes

It is possible to build the `chunk0` segment with modified code, and then compile a non-matching ROM.

In order to do this add `NON_MATCHING=1` when building both chunk0 and the main ROM:

**Extract baserom:**
```sh
make extract
```
**Decompress chunk0:**
```sh
make decompress
```
**Navigate into chunk0 directory:**
```sh
cd chunk0
```
**Extract chunk0:**
```sh
make extract
```
**Compile chunk0:**
```sh
make --jobs replace NON_MATCHING=1
```
**Navigate back to base of repo:**
```sh
cd ..
```
**Compile and build ROM:**
```sh
make --jobs NON_MATCHING=1
```
