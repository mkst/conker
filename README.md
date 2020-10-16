# Conker's Bad Fur Day Decompilation

A WIP decompilation of Conker's Bad Fur Day.

Note: To use this repository, you must already have a copy of the game.

# Building

Place the **US** Conker's Bad Fur Day ROM in the root of this repository, name it `baserom.us.z64`.

## Preamble

The assumption is that you will be using [Docker](https://www.docker.com/products/docker-desktop) for the building process.
If this is not the case, check the `Dockerfile` for the expected prerequisites; the steps below work perfectly well in Ubuntu 20.04 running via WSL on Windows.

## Clone repository

```sh
git clone https://github.com/mkst/conker.git --recursive
cd conker
```

## Install prerequisites

```sh
# decomp appears to use ido 7.1
wget https://github.com/n64decomp/oot/releases/download/0.1/ido7.1_compiler.zip
unzip -d ido ido7.1_compiler.zip
```

## Build Docker image

```sh
docker build . -t conker
```

## Apply patches

```sh
git apply patches/n64splat.patch
```

## Sanity check ROM checksum

```sh
docker run --rm -v $(pwd):/conker conker make check
```

## Extract assets from ROM

```sh
docker run --rm -v $(pwd):/conker conker make extract
```

## Decompress chunk0

```sh
docker run --rm -v $(pwd):/conker conker make decompress
```

## Compile

```sh
docker run --rm -v $(pwd):/conker conker make
```

**Note:**
You may find it easier to jump into the container and run the `make` commands from there, in that case you want to run:

```sh
docker run --rm -ti -v $(pwd):/conker conker bash
```
# ROM layout

The layout of the ROM is still being determined. There are a number of sections within the ROM that are compressed with [gzip](https://tools.ietf.org/html/rfc1952) but the standard header/trailer is stripped and instead there is a 4-byte header containing the uncompressed data length.

The workflow will be to split all compressed chunks from the baserom via n64splat, then for each contiguous chunk:
  - Decompress all blocks within the chunk via [rareunzip](tools/rareunzip.py), taking care to keep track of any trailing padding
  - Combine decompressed blocks into a single file
  - Run n64splat on this combined file to extract all code and assets
  - *Translate assembly to c code*
  - Compile to generate a .bin
  - Split compiled .bin file into 4096 byte block
  - Compress each block via [rarezip](tools/rarezip.py)
  - Combine all compressed blocks along with original padding (TBD: is pad calculated, e.g. length modulo 256?)

Then build the ROM with the new chunk(s) which should exactly match the original chunk(s) split out via n64splat.

**Note:**
This workflow is subject to change as the project matures. The decompression/combination steps may be added into n64splat so the concept of chunks may disappear.

## Chunk 0

Currently 1 chunk has been decompressed, `chunk0`.

If you wish to example this file, then you can run `make decompress` from within the `chunk0/` directory. See the [README](chunk0/README.md) for more information.

# Contributing

The [wiki](https://github.com/mkst/conker/wiki) will eventually contain discoveries as they are made.

In the meantime, if you wish to contribute in any way, just get stuck in and raise a PR!

# Tools

This repo makes use of the following open-source tools without which, there would be no decomp:

 - [asm-differ](https://github.com/simonlindholm/asm-differ); compare assembly against the original ROM
 - [asm-processor](https://github.com/simonlindholm/asm-processor); allow GLOBAL_ASM wrappers
 - [n64splat](https://github.com/ethteck/n64splat); split up the rom & much more...
