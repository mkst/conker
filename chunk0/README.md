# chunk0

First chunk of contiguous data extracted from the ROM. It is dumped out as `build/chunk0.bin`.

The address of the first compress block is `0x42c50`, the final block starts at `0x186550`.

Each compressed block is extracted via n64splat and then combined via `cat` to create the `chunk0.bin`.

Current working theory is that the code in this chunk is translated to `0x85000000` offset.

# Building

The following commands are used to extract, compile, recompress and recombine it.

**Note:**
Does **not** currently generate a matching `chunk0.o`, but the C code *does* match original assembly:

```sh
Binary files joined/0013.gz and ../rzip/chunk0/0013.gz differ
Binary files joined/0018.gz and ../rzip/chunk0/0018.gz differ
Binary files joined/0040.gz and ../rzip/chunk0/0040.gz differ
Binary files joined/0063.gz and ../rzip/chunk0/0063.gz differ
Binary files joined/0066.gz and ../rzip/chunk0/0066.gz differ
Binary files joined/0168.gz and ../rzip/chunk0/0168.gz differ
Binary files joined/0181.gz and ../rzip/chunk0/0181.gz differ
Binary files joined/0236.gz and ../rzip/chunk0/0236.gz differ
Binary files joined/0240.gz and ../rzip/chunk0/0240.gz differ
Binary files joined/0255.gz and ../rzip/chunk0/0255.gz differ
Binary files joined/0261.gz and ../rzip/chunk0/0261.gz differ
Binary files joined/0267.gz and ../rzip/chunk0/0267.gz differ
Binary files joined/0354.gz and ../rzip/chunk0/0354.gz differ
Binary files joined/0358.gz and ../rzip/chunk0/0358.gz differ
Binary files joined/0363.gz and ../rzip/chunk0/0363.gz differ
Binary files joined/0449.gz and ../rzip/chunk0/0449.gz differ
Binary files joined/0474.gz and ../rzip/chunk0/0474.gz differ
```

## extract from ../build/chunk0.bin
```sh
make extract
```

## compile
```sh
# there is a sanity check that this matches the original chunk0.bin
make
```

## split into 4096-byte chunks
```sh
make split
```

## compress each chunk
```sh
# there are 500+ it is not stuck in a loop!
make compress
```

## recombine with padding
```sh
make combine
```

## verify chunk0 matches
```sh
make verify
```
