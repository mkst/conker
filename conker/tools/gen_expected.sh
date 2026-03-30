#!/bin/bash
# Generate expected .o files from nonmatchings assembly for objdiff comparison.
# Usage: ./tools/gen_expected.sh <source_basename>
# Example: ./tools/gen_expected.sh game_161520
#
# This creates build/expected/<source_basename>.o by assembling all original
# asm functions from asm/nonmatchings/<source_basename>/ into a single .o file.

set -euo pipefail

if [ $# -lt 1 ]; then
    echo "Usage: $0 <source_basename>"
    echo "Example: $0 game_161520"
    exit 1
fi

BASENAME="$1"
ASM_DIR="asm/nonmatchings/${BASENAME}"
EXPECTED_DIR="build/expected"
COMBINED_ASM="${EXPECTED_DIR}/${BASENAME}.s"
OUTPUT_O="${EXPECTED_DIR}/${BASENAME}.o"

AS="${CROSS:-mips-linux-gnu-}as"
ASFLAGS="-EB -mtune=vr4300 -march=vr4300 -mabi=32 -Iinclude"

if [ ! -d "${ASM_DIR}" ]; then
    echo "Error: Assembly directory ${ASM_DIR} not found"
    exit 1
fi

mkdir -p "${EXPECTED_DIR}"

# Create combined assembly file
{
    echo ".include \"include/macro.inc\""
    echo ".set noat"
    echo ".set noreorder"
    echo ".set gp=64"
    echo ""
    echo ".section .text"
    echo ""
    # Include all function asm files in sorted order (by address)
    for f in $(ls "${ASM_DIR}"/*.s | sort); do
        echo "/* $(basename "$f") */"
        cat "$f"
        echo ""
    done
} > "${COMBINED_ASM}"

# Assemble
${AS} ${ASFLAGS} -o "${OUTPUT_O}" "${COMBINED_ASM}"

echo "Generated ${OUTPUT_O}"
