#!/bin/bash

# Clean and build the ROM.

set -e

rm -f .baserom.us.ok
rm -f conker.ld
rm -f conker/conker.ld
make really-clean
make -C conker really-clean

make check
make extract
make -C conker extract
make -C conker -j
make -C conker replace
make -j
