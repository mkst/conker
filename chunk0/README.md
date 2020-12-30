# chunk0

First chunk of contiguous data extracted from the ROM; it contains the core game logic, it is TLB'd to `0x15000000`.

To extract, first run `make decompress` in the base of the repo, then `make extract` from inside the `chunk0` directory.

## Overview

The section starts at `0x42450` and is `1427000` bytes long. It is comprised of:

 - Compressed section offsets list (2048 bytes)
 - `.text` section (compressed)
 - `0x00` padding (to 1,335,000 bytes),
 - `.data` section (compressed)
 - `0x00` padding (to 92,000 bytes).

As part of the n64splat configuration, this chunk is pulled out 'whole' such that the game functionality can be modified and injected back into the ROM.

NOTE: Injecting modified code back into the ROM is still on the TODO list, but the groundwork is mostly done - all that's left is dynamically adjusting padding.

## Decompression

### .text (code)

The addresses of each compressed block can be found at `0x42450`, the values in this table should be xor'd with `0x8039CCCA`.

The first compressed block is found at `0x42C50`, the final block begins at `0x186550`.

Each compressed block is extracted via `n64splat` and then combined with the data section via `cat` to create the `chunk0/game.bin`.

### .data (data)

The data chunk is a single block, there is no fancy splitting.

## Compression

Each compressed file is padded to align to a 2-byte boundary. Initially the padding byte seemed to be random garbage - however after testing, it appears that the output buffer was recycled when compressing each block, therefore the padding is actually the previously compressed block. See the [compress_chunk0.py](../tools/compress_chunk0.py) script for more info.

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

## split into 4096-byte chunks
```sh
make split
```

## compress each chunk (automagically applies padding)
```sh
make compress
```

## recombine
```sh
make combine
```

## verify chunk0 code and data matches after being compressed
```sh
make verify_gz
```

## replace original game.bin with newly built version
```sh
make replace
```
