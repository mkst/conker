# chunk0

First chunk of contiguous data extracted from the ROM. It is dumped out as `build/chunk0.bin`.

The address of the first compress block is `0x42c50`, the final block starts at `0x186550`.

Each compressed block is extracted via n64splat and then combined via `cat` to create the `chunk0.bin`.

# Building

The following commands are used to extract, compile, recompress and recombine it.

**Note:**
Does **not** currently generate a matching chunk0.o:

```sh
$ diff chunk0/build/split/ rzip/ | grep Bin
Binary files chunk0/build/split/0013.gz and rzip/0013.gz differ
Binary files chunk0/build/split/0018.gz and rzip/0018.gz differ
Binary files chunk0/build/split/0040.gz and rzip/0040.gz differ
Binary files chunk0/build/split/0063.gz and rzip/0063.gz differ
Binary files chunk0/build/split/0066.gz and rzip/0066.gz differ
Binary files chunk0/build/split/0168.gz and rzip/0168.gz differ
Binary files chunk0/build/split/0181.gz and rzip/0181.gz differ
Binary files chunk0/build/split/0236.gz and rzip/0236.gz differ
Binary files chunk0/build/split/0240.gz and rzip/0240.gz differ
Binary files chunk0/build/split/0255.gz and rzip/0255.gz differ
Binary files chunk0/build/split/0261.gz and rzip/0261.gz differ
Binary files chunk0/build/split/0267.gz and rzip/0267.gz differ
Binary files chunk0/build/split/0354.gz and rzip/0354.gz differ
Binary files chunk0/build/split/0358.gz and rzip/0358.gz differ
Binary files chunk0/build/split/0363.gz and rzip/0363.gz differ
Binary files chunk0/build/split/0449.gz and rzip/0449.gz differ
Binary files chunk0/build/split/0474.gz and rzip/0474.gz differ
```

## extract from ../build/chunk0.bin
```sh
make extract
```

## compile
```sh
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
