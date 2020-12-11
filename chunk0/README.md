# chunk0

First chunk of contiguous data extracted from the ROM. It is dumped out as `build/chunk0.bin` following a `make decompress` in the base of the repo.

The address of the first compressed block is `0x42C50`, the final block starts at `0x186550`.

Each compressed block is extracted via n64splat and then combined via `cat` to create the `chunk0.bin`.

Current working theory is that the code in this chunk is TLB'd to `0x85000000` offset.

Each compressed file is padded to align to a 2-byte boundary. Initially the padding byte seemed to be random garbage - however after testing, it appears that the output buffer was recycled when compressing each block, therefore the padding is actually the previously compressed block. See the [compress_chunk0.py](../tools/compress_chunk0.py) script for more info.

# Building

The following commands are used to extract, compile, recompress and recombine it.

**Note:**
Does **not** currently generate a matching `chunk0.o`, but the C code *does* match original assembly.

## extract from ../build/chunk0.bin
```sh
make extract
```

## compile
```sh
# there is a sanity check that the compiled code matches the original chunk0.bin
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

## verify chunk0 matches
```sh
make verify
```
