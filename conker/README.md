# Conker's Bad Fur Day (code) decompilation

**TL;DR** - Read the [wiki](https://github.com/mkst/conker/wiki) for the most up-to-date information.

There are three code sections within the ROM:
 - initialisation code + libultra; this is referred to as `init` and is translated to address `0x10000000`
 - core game code; this is referred to as `game` and is translated to address `0x15000000`
 - debugger code; referred to as `debugger` and translated to address `0x16000000`

In the `us`, `eu` and `debug` ROMs this `game` code is compressed; in the earlier `ects` ROM it is not.

These sections are pulled out of the ROM and combined in order to have a standard way of compiling the code across the different versions.

## Building

The following assumes you are within the `conker/` directory of the repo,

**Extract the `game.VERSION.bin`**

```sh
make extract
```

**Compile**

```sh
make --jobs
```

**Replace sections of original ROM split with newly compiled**

```sh
make replace
```

**Rebuild ROM**
```sh
make -C ..
```
