# Conkers Bad Fur Day Decompilation

A WIP decompilation of Conker's Bad Fur Day.

Note: To use this repository, you must already have a copy of the game.

# Building

Place the US Conker's Bad Fur Day ROM in the root of this repository, name it `baserom.us.z64`.

## Preamble

The assumption is that you will be using [Docker](https://www.docker.com/products/docker-desktop) for the building process.
If this is not the case, check the `Dockerfile` for the expected prerequisites.

## Install prerequisites

```sh
# decomp uses ido 7.1
wget https://github.com/n64decomp/oot/releases/download/0.1/ido7.1_compiler.zip
unzip -d ido ido7.1_compiler.zip
```

## Build Docker image

```sh
docker build . -t conker
```

## Apply patches

```sh
# adjust cpp_args as headers are in include/2.0L
patch -p1 -i patches/n64splat.patch
```

## Sanity check ROM checksum

```sh
docker run --rm -v $(pwd):/conker conker make check
```

## Extract assets from ROM

```sh
docker run --rm -v $(pwd):/conker conker make extract
```

## Compile

```sh
docker run --rm -v $(pwd):/conker conker make
```

# Contributing

TBD.

# Tools

This repo makes use of the following tools:

 - [asm-differ](https://github.com/simonlindholm/asm-differ)
 - [n64splat](https://github.com/ethteck/n64splat)
