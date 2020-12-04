# Conker's Bad Fur Day Decompilation

A WIP decompilation of Conker's Bad Fur Day.

Note: To use this repository, you must already have a copy of the game.

# Building

Place the **US** Conker's Bad Fur Day ROM in the root of this repository, name it `baserom.us.z64`.

**Preamble**

The assumption is that you will be using [Docker](https://www.docker.com/products/docker-desktop) for the building process.
If this is not the case, check the `Dockerfile` for the prerequisites; the steps below work perfectly well in Ubuntu 20.04 running via WSL on Windows.

**Clone repository**

```sh
git clone https://github.com/mkst/conker.git --recursive
cd conker
```

**Build Docker image**

```sh
docker build . -t conker
```

**Spin up the image interactively**

```sh
docker run --rm -ti -v $(pwd):/conker conker bash
```

**Sanity check ROM checksum**

```sh
make check
```

**Extract assets from ROM**

```sh
make extract
```

**Decompress chunk0 (optional)**

```sh
make decompress
```

**Compile**

```sh
make -- jobs
```

# Progress

This project is in its infancy; there are multiple tasks being worked on:

  - Converting disassembly into (byte-perfect) C code
  - Extracting assets from the ROM and being able to successfully re-pack them
  - Identify and document all asset types used in the ROM
  - Tooling to support the above tasks

## Open issues

  - Compressing extracted sections in a byte-perfect manner
  - Identifying and documenting Conker asset (model/texture/sound) format

## ROM layout

The layout of the ROM is still a work-in-progress. There are a number of sections within the ROM that are compressed with [gzip](https://tools.ietf.org/html/rfc1952) but have the standard header/trailer stripped and, instead, replaced with a 4-byte header containing the uncompressed data length. These sections are dubbed `rzip`.

```
[header]  0000 0000 > 0000 0040 ; suggests libultra 2.0G
[ boot ]  0000 0040 > 0000 1000 ;
[ code ]  0000 1000 > 0004 2C50 ; code (init + libultra)
[ ???? ]  0002 90D0 > ???? ???? ;
[ data ]  0002 C750 > 0002 C7A0 ; rodata section
[ ???? ]  0002 C7A0 > 0004 2C50 ; μcode
[ rzip ]  0004 2C50 > 0018 6B50 ; chunk0 (compressed code)
[ ???? ]  0018 6B50 > 0018 8328 ;
[ rzip ]  0018 8328 > 0019 C7D8 ; chunk0 rodata
[ code ]  0019 C7D8 > 001A 2190 ; code (debugger?)
[ data ]  001A 2190 > 001A 37E0 ; rodata section (?)
[ rzip ]  001A 37E0 > 00AB 1950 ; compressed assets
[ offs ]  00AB 1950 > 00AB 1A40 ; table of asset offsets
[ rzip ]  00AB 1A40 > 03F8 B800 ; assets 00 thru assets 1C
[ ffff ]  03F8 B800 > 0400 0000 ; 0xff padding
```

### Compressed section(s)

There a number of compressed sections within the ROM. The goal is to be able to:

  1. Extract all files within each compressed section
  2. Decompile and/or document them
  3. Compress and reassemble to create a byte-perfect match.

### Chunk 0

The first compressed chunk within the ROM is named `chunk0`. It is preceded by a 512 byte header containing offsets for each compressed block. The values in the headers are `xor`'d with a key of `0x8039CCCA`, so need to be `xor`'d with this key in order to get the true values.

Once decompressed, these blocks form a contiguous chunk of code.

The steps for decompiling `chunk0` are as follows:
  - Decompress all blocks within the chunk via [rareunzip](tools/rareunzip.py)
  - Combine decompressed blocks into a single file
  - Run n64splat on this combined file to extract all code and assets
  - *Translate assembly to c code*
  - Compile to generate a .bin
  - Split compiled .bin file into 4096 byte blocks
  - Compress each block via [rarezip](tools/rarezip.py), padding to 2-byte alignment
  - Combine all compressed blocks

If you wish to examine this file, you can run `make decompress` after you have done the initial `make extract`.

See the [README](chunk0/README.md) for more information.

**NOTE:** Compression is currently not 100%-matching; approximately 3% of chunk0 blocks do not match.

# Tools

## Custom tools

 - rarezip/rareunzip; python scripts to compress/decompress the compression format used in the ROM.

## Existing tools

This repo makes use of the following open-source tools without which, there would be no decomp:

 - [asm-differ](https://github.com/simonlindholm/asm-differ); compare assembly against the original ROM
 - [asm-processor](https://github.com/simonlindholm/asm-processor); allow `GLOBAL_ASM` wrappers to include assembly within the c files
 - [n64splat](https://github.com/ethteck/n64splat); split up the rom & much more...
 - [ido-static-recomp](https://github.com/Emill/ido-static-recomp); IDO compiler

# Contributing

The [wiki](https://github.com/mkst/conker/wiki) will eventually contain discoveries as they are made.

In the meantime, if you wish to contribute in any way, just get stuck in and raise a PR!
