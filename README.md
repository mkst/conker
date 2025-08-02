# Conker's Bad Fur Day Decompilation

![Conker's Bad Fur Day (US) Progress](https://img.shields.io/badge/dynamic/json?url=https%3A%2F%2Fconker.deco.mp%2Flatest.json&color=critical&label=Conker's%20Bad%20Fur%20Day%20(US)&query=$.progress[0].sections[3].percent&suffix=%25) ![all Functions](https://img.shields.io/badge/funcs-1365%2F5916-blue) ![Build Status](https://github.com/mkst/conker/workflows/build/badge.svg)

| Progress                                                                                                                                           | Functions                                                |
|----------------------------------------------------------------------------------------------------------------------------------------------------|-----------------------------------------------------------|
| ![init Progress](https://img.shields.io/badge/dynamic/json?url=https%3A%2F%2Fconker.deco.mp%2Flatest.json&color=yellow&label=init&query=$.progress[0].sections[0].percent&suffix=%25)      | ![init Functions](https://img.shields.io/badge/funcs-231%2F536-blue)      |
| ![game Progress](https://img.shields.io/badge/dynamic/json?url=https%3A%2F%2Fconker.deco.mp%2Flatest.json&color=critical&label=game&query=$.progress[0].sections[1].percent&suffix=%25)     | ![game Functions](https://img.shields.io/badge/funcs-1114%2F5338-blue) |
| ![debugger Progress](https://img.shields.io/badge/dynamic/json?url=https%3A%2F%2Fconker.deco.mp%2Flatest.json&color=orange&label=debugger&query=$.progress[0].sections[2].percent&suffix=%25) | ![debugger Functions](https://img.shields.io/badge/funcs-20%2F42-blue) |

A WIP decompilation of Conker's Bad Fur Day.

Note: To use this repository, you must already have a copy of the game.

# Building

Place the **US** Conker's Bad Fur Day ROM in the root of this repository, name it `baserom.us.z64`.

**Preamble**

The assumption is that you will be using [Docker](https://www.docker.com/products/docker-desktop) for the building process.
If this is not the case, see the [Dockerfile](Dockerfile) for the prerequisites; the steps below work perfectly well in **Ubuntu 20.04** running via WSL on Windows.

See the [Quickstart](https://github.com/mkst/conker/wiki/Quickstart) for more information.

**Clone repository**

```sh
git clone https://github.com/mkst/conker.git --recursive
cd conker
```

**Build Docker image (optional)**

```sh
docker build . -t conker
```

**Spin up the image interactively (optional)**

```sh
docker run --rm -ti -v $(pwd):/conker conker bash
```

**Sanity check ROM checksum**

```sh
make check
```

**Extract ROM**

```sh
make extract
```

**Decompress code (optional)**

```sh
make -C conker extract
```

**Compile code (optional)**

```sh
make -C conker --jobs
```

**Replace compiled code (optional)**

```sh
make -C conker replace
```

**Compile ROM**

```sh
make --jobs
```

If everything matches, you will be greeted with an `OK`:

```
build/conker.us.z64: OK
```

# Progress

This project is in its infancy; there are multiple tasks being worked on:

  - Converting disassembly into (byte-perfect) C code
  - Extracting assets from the ROM and being able to successfully re-pack them
  - Identify and document all asset types used in the ROM
  - Tooling to support the above tasks

## Open issues

  - Identifying and documenting Conker asset (model/texture/sound) format

## ROM layout

The layout of the ROM is still a work-in-progress. There are a number of sections within the ROM that are compressed with [gzip](https://tools.ietf.org/html/rfc1952) but have the standard header/trailer stripped and, instead, replaced with a 4-byte header containing the uncompressed data length. These sections are dubbed `rzip`.

Overview of US ROM shown below:
```
[header]  0000 0000 > 0000 0040 ; suggests libultra 2.0G
[ boot ]  0000 0040 > 0000 1000 ;
[ code ]  0000 1000 > 0004 2C50 ; init + libultra .text
[ ???? ]  0002 90D0 > ???? ???? ;
[ data ]  0002 C750 > 0002 C7A0 ; init + libultra .data
[ ???? ]  0002 C7A0 > 0004 2C50 ; μcode
[ rzip ]  0004 2C50 > 0018 6B50 ; game .text (compressed)
[ rzip ]  0018 8328 > 0019 C7D8 ; game .data (compressed)
[ code ]  0019 EA88 > 001A 2190 ; debugger .text
[ data ]  001A 2190 > 001A 37E0 ; debugger .data
[ rzip ]  001A 37E0 > 00AB 1950 ; compressed section (textures?)
[ offs ]  00AB 1950 > 00AB 1A40 ; table of asset offsets
[ rzip ]  00AB 1A40 > 03F8 B800 ; assets 00 thru assets 1C
[ ffff ]  03F8 B800 > 0400 0000 ; 0xff padding
```

### Compressed section(s)

There are a number of compressed sections within the ROM. The decompression/compression method is understood and generates matching results.

## Building ROM

Due to the compressed code sections, all code segments within the ROM are cut from the ROM and combined together, creating a sub-project inside the `conker/` directory.

See the [README](conker/README.md) for more information.

# Tools

## Custom tools

 - `rarezip/rareunzip`; python script to compress/decompress the compression format used in the ROM.

NOTE: `gzip` is used for compression rather than `zlib`; use the binary in `tools/` in order to get matching compression.

## Existing tools

This repo makes use of the following open-source tools without which, there would be no decomp:

 - [asm-differ](https://github.com/simonlindholm/asm-differ); compare assembly against the original ROM
 - [asm-processor](https://github.com/simonlindholm/asm-processor); allow `GLOBAL_ASM` wrappers to include assembly within the c files
 - [n64splat](https://github.com/ethteck/n64splat); split up the rom & much more...
 - [ido-static-recomp](https://github.com/Emill/ido-static-recomp); IDO compiler
 - [gzip](https://github.com/mkst/gzip); gzip; specifically with the pre-1.5 `memzero` behaviour

# Contributing

The [wiki](https://github.com/mkst/conker/wiki) will eventually contain discoveries as they are made.

In the meantime, if you wish to contribute in any way, get stuck in and raise a PR or find me on Discord `mkst#4741`.
