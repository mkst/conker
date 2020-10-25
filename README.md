# Conker's Bad Fur Day Decompilation

A WIP decompilation of Conker's Bad Fur Day.

Note: To use this repository, you must already have a copy of the game.

# Building

Place the **US** Conker's Bad Fur Day ROM in the root of this repository, name it `baserom.us.z64`.

**Preamble**

The assumption is that you will be using [Docker](https://www.docker.com/products/docker-desktop) for the building process.
If this is not the case, check the `Dockerfile` for the expected prerequisites; the steps below work perfectly well in Ubuntu 20.04 running via WSL on Windows.

**Clone repository**

```sh
git clone https://github.com/mkst/conker.git --recursive
cd conker
```

**Build Docker image**

```sh
docker build . -t conker
```

**Apply patches**

```sh
git apply patches/n64splat.patch
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

This project it is in its infancy; there are multiple tasks being worked on:

  - Converting disassembly into (byte-perfect) C code
  - Determining structure and layout of the ROM
  - Extracting assets from the ROM and being able to successfully re-pack them

## Open issues

  - Identifying all compressed sections within the ROM
  - Decompressing each compressed section
  - Compressing extracted sections in a byte-perfect manner
  - Identifying and documenting Conker asset (model/texture) format

## ROM layout

The layout of the ROM is still a work-in-progress. There are a number of sections within the ROM that are compressed with [gzip](https://tools.ietf.org/html/rfc1952) but the standard header/trailer is stripped and instead there is a 4-byte header containing the uncompressed data length. These sections are dubbed 'rzip'.

```
[header]  0000 0000 > 0000 0040 ; suggests libultra 2.0G
[ boot ]  0000 0040 > 0000 1000
[ code ]  0000 1000 > 0002 26F0 ; initialisation code
[ code ]  0002 26F0 > 0004 2C50 ; libultra code
[ rzip ]  0004 2C50 > 0019 EA88 ; "chunk0", code + more
[ code ]  0019 EA88 > 001A 2190
[ ???? ]  001A 2190 > 0130 4F00
[ rzip ]  0130 4F00 > 0132 E691 ; "chunk1", unknown data
[ ???? ]  0132 E691 > 0133 12E8
[ mp3s ]  0133 12E8 > 029A FD38 ; some are somewhat scrambled
[ ???? ]  029A FD38 > 03EC C788
[ midi ]  03EC C788 > 03F7 38D0 ; some form of compression
[ ???? ]  03F7 38D0 > 0400 0000
```

### Compressed section(s)

The workflow will be to split all compressed chunks from the baserom via n64splat, then for each contiguous chunk:
  - Decompress all blocks within the chunk via [rareunzip](tools/rareunzip.py), taking care to keep track of any trailing padding
  - Combine decompressed blocks into a single file
  - Run n64splat on this combined file to extract all code and assets
  - *Translate assembly to c code*
  - Compile to generate a .bin
  - Split compiled .bin file into 4096 byte block
  - Compress each block via [rarezip](tools/rarezip.py)
  - Combine all compressed blocks along with original padding (padding appears to be garbage)

Then build the ROM with the new chunk(s) which should exactly match the original chunk(s) split out via n64splat.

**Note:**
This workflow is subject to change as the project matures. The decompression/combination steps may be added into n64splat so the concept of chunks may disappear.

### Chunk 0

Currently 1 chunk has been decompressed, `chunk0`.

If you wish to example this file, then you can run `make decompress` from within the `chunk0/` directory.

See the [README](chunk0/README.md) for more information. It is non-matching.

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
