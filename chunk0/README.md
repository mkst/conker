# chunk0

First chunk of data extracted from the ROM. It is dumped out as `build/chunk0.bin`.

The following commands are used to extract, compile, recompress and recombine it.

**Note:**
Does not currently generate a matching chunk0.o

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
