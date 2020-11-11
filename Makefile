BUILD_DIR = build
VERSION := us

ASM_DIRS := asm \
            asm/libultra asm/libultra/gu asm/libultra/io asm/libultra/libc asm/libultra/os
BIN_DIRS := bin
RODATA_DIRS := rodata
SRC_DIRS := src src/libultra src/libultra/io src/libultra/os
MP3_DIRS := mp3 mp3/hungover mp3/windy mp3/barn_boys \
            mp3/bats_tower mp3/sloprano mp3/uga_buga mp3/spooky \
            mp3/its_war mp3/the_heist mp3/intro mp3/other
RZIP_DIRS := rzip/chunk0 rzip/chunk1 rzip/assets00 rzip/assets01 \
             rzip/assets02 rzip/assets03 rzip/assets04 rzip/assets05 \
             rzip/assets06 rzip/assets07 rzip/assets08 rzip/assets09 \
             rzip/assets0A rzip/assets0B rzip/assets0C rzip/assets0D \
             rzip/assets0E rzip/assets0F rzip/assets10 rzip/assets11 \
             rzip/assets12 rzip/assets13 rzip/assets14 rzip/assets15 \
             rzip/assets16 rzip/assets17 rzip/assets18 rzip/assets19 \
             rzip/assets1A rzip/assets1B rzip/assets1C

S_FILES := $(foreach dir,$(ASM_DIRS),$(wildcard $(dir)/*.s))
C_FILES := $(foreach dir,$(SRC_DIRS),$(wildcard $(dir)/*.c))
H_FILES := $(foreach dir,$(SRC_DIRS),$(wildcard $(dir)/*.h))
BIN_FILES := $(foreach dir,$(BIN_DIRS),$(wildcard $(dir)/*.bin))
MP3_FILES := $(foreach dir,$(MP3_DIRS),$(wildcard $(dir)/*.mp3))
RODATA_FILES := $(foreach dir,$(RODATA_DIRS),$(wildcard $(dir)/*.rodata))

CHUNK_0_RZIP_FILES := $(wildcard rzip/chunk0/*.gz)
CHUNK_0_RUNZIP_FILES := $(foreach file,$(CHUNK_0_RZIP_FILES),$(BUILD_DIR)/$(file:.gz=.bin))

# Object files
O_FILES := $(foreach file,$(S_FILES),$(BUILD_DIR)/$(file:.s=.o)) \
           $(foreach file,$(C_FILES),$(BUILD_DIR)/$(file:.c=.o)) \
           $(foreach file,$(BIN_FILES),$(BUILD_DIR)/$(file:.bin=.o)) \
           $(foreach file,$(MP3_FILES),$(BUILD_DIR)/$(file:.mp3=.o)) \
           $(foreach file,$(RODATA_FILES),$(BUILD_DIR)/$(file:.rodata=.o)) \
           $(BUILD_DIR)/rzip/chunk0/chunk0.o $(BUILD_DIR)/rzip/chunk1/chunk1.o \

ASSETS := $(BUILD_DIR)/rzip/assets00/assets00.o \
          $(BUILD_DIR)/rzip/assets01/assets01.o \
          $(BUILD_DIR)/rzip/assets02/assets02.o \
          $(BUILD_DIR)/rzip/assets03/assets03.o \
          $(BUILD_DIR)/rzip/assets04/assets04.o \
          $(BUILD_DIR)/rzip/assets05/assets05.o \
          $(BUILD_DIR)/rzip/assets06/assets06.o \
          $(BUILD_DIR)/rzip/assets07/assets07.o \
          $(BUILD_DIR)/rzip/assets08/assets08.o \
          $(BUILD_DIR)/rzip/assets09/assets09.o \
          $(BUILD_DIR)/rzip/assets0A/assets0A.o \
          $(BUILD_DIR)/rzip/assets0B/assets0B.o \
          $(BUILD_DIR)/rzip/assets0C/assets0C.o \
          $(BUILD_DIR)/rzip/assets0D/assets0D.o \
          $(BUILD_DIR)/rzip/assets0E/assets0E.o \
          $(BUILD_DIR)/rzip/assets0F/assets0F.o \
          $(BUILD_DIR)/rzip/assets10/assets10.o \
          $(BUILD_DIR)/rzip/assets11/assets11.o \
          $(BUILD_DIR)/rzip/assets12/assets12.o \
          $(BUILD_DIR)/rzip/assets13/assets13.o \
          $(BUILD_DIR)/rzip/assets14/assets14.o \
          $(BUILD_DIR)/rzip/assets15/assets15.o \
          $(BUILD_DIR)/rzip/assets16/assets16.o \
          $(BUILD_DIR)/rzip/assets17/assets17.o \
          $(BUILD_DIR)/rzip/assets18/assets18.o \
          $(BUILD_DIR)/rzip/assets19/assets19.o \
          $(BUILD_DIR)/rzip/assets1A/assets1A.o \
          $(BUILD_DIR)/rzip/assets1B/assets1B.o \
          $(BUILD_DIR)/rzip/assets1C/assets1C.o

O_FILES += $(ASSETS)

# Files requiring pre/post-processing
GREP := grep -l
GLOBAL_ASM_C_FILES := $(shell $(GREP) GLOBAL_ASM $(C_FILES))
GLOBAL_ASM_O_FILES := $(foreach file,$(GLOBAL_ASM_C_FILES),$(BUILD_DIR)/$(file:.c=.o))

TARGET = $(BUILD_DIR)/conker.$(VERSION)
LD_SCRIPT = conker.ld

##################### Compiler Options #######################

CC := ido/ido7.1_recomp/cc
CC_OLD := ido/ido5.3_recomp/cc

CROSS = mips-linux-gnu-
AS = $(CROSS)as
CPP = $(CROSS)cpp
LD = $(CROSS)ld
OBJDUMP = $(CROSS)objdump
OBJCOPY = $(CROSS)objcopy
PYTHON = python3
XXD = xxd

OPT_FLAGS := -O2 -g3
MIPSBIT := -mips2

INCLUDE_CFLAGS := -I . -I include -I include/2.0L -I include/2.0L/PR -I include/libc

ASFLAGS = -EB -mtune=vr4300 -march=vr4300 -mabi=32 -I include

CFLAGS := -G 0 -Xfullwarn -Xcpluscomm -signed -g -nostdinc -non_shared -Wab,-r4300_mul
CFLAGS += -D_LANGUAGE_C
CFLAGS += $(INCLUDE_CFLAGS)

LDFLAGS =  -T undefined_funcs.txt -T $(BUILD_DIR)/$(LD_SCRIPT) -T undefined_syms.txt -Map $(TARGET).map --no-check-sections

### file-specific compile flags

# $(BUILD_DIR)/src/code_11FA0.o: OPT_FLAGS := -g
$(BUILD_DIR)/src/code_12820.o: OPT_FLAGS := -g
$(BUILD_DIR)/src/code_128D0.o: OPT_FLAGS := -g
$(BUILD_DIR)/src/code_13320.o: OPT_FLAGS := -g
$(BUILD_DIR)/src/code_15550.o: OPT_FLAGS := -g
$(BUILD_DIR)/src/code_17870.o: OPT_FLAGS := -g
$(BUILD_DIR)/src/code_17880.o: OPT_FLAGS := -g
$(BUILD_DIR)/src/code_17A80.o: OPT_FLAGS := -g
$(BUILD_DIR)/src/code_17AA0.o: OPT_FLAGS := -g
$(BUILD_DIR)/src/code_17AF0.o: OPT_FLAGS := -g
$(BUILD_DIR)/src/code_17C00.o: OPT_FLAGS := -g
$(BUILD_DIR)/src/code_17D80.o: OPT_FLAGS := -g
$(BUILD_DIR)/src/code_17DF0.o: OPT_FLAGS := -g
$(BUILD_DIR)/src/code_17EC0.o: OPT_FLAGS := -g
$(BUILD_DIR)/src/code_17F10.o: OPT_FLAGS := -g
$(BUILD_DIR)/src/code_18C60.o: OPT_FLAGS := -g
$(BUILD_DIR)/src/code_18CB0.o: OPT_FLAGS := -g
$(BUILD_DIR)/src/code_18DA0.o: OPT_FLAGS := -g
$(BUILD_DIR)/src/code_18E60.o: OPT_FLAGS := -g
$(BUILD_DIR)/src/code_19AB0.o: OPT_FLAGS := -g
$(BUILD_DIR)/src/code_19B50.o: OPT_FLAGS := -g
$(BUILD_DIR)/src/code_1AAE0.o: OPT_FLAGS := -g
$(BUILD_DIR)/src/code_1C690.o: OPT_FLAGS := -g
$(BUILD_DIR)/src/code_1C9E0.o: OPT_FLAGS := -g
$(BUILD_DIR)/src/code_1D900.o: OPT_FLAGS := -g
$(BUILD_DIR)/src/code_1DBA0.o: OPT_FLAGS := -g
$(BUILD_DIR)/src/code_1DC80.o: OPT_FLAGS := -g
$(BUILD_DIR)/src/code_1E170.o: OPT_FLAGS := -g
$(BUILD_DIR)/src/code_1E2A0.o: OPT_FLAGS := -g
$(BUILD_DIR)/src/code_1E4A0.o: OPT_FLAGS := -g
$(BUILD_DIR)/src/code_1E530.o: OPT_FLAGS := -g
$(BUILD_DIR)/src/code_20000.o: OPT_FLAGS := -g
$(BUILD_DIR)/src/code_214F0.o: OPT_FLAGS := -g
$(BUILD_DIR)/src/code_22040.o: OPT_FLAGS := -g

# compiler version
$(BUILD_DIR)/src/code_1050.o: CC := $(CC_OLD)
$(BUILD_DIR)/src/code_39C0.o: CC := $(CC_OLD)
$(BUILD_DIR)/src/code_50A0.o: CC := $(CC_OLD)
$(BUILD_DIR)/src/code_EB00.o: CC := $(CC_OLD)
$(BUILD_DIR)/src/code_128D0.o: CC := $(CC_OLD)
$(BUILD_DIR)/src/code_17AF0.o: CC := $(CC_OLD)
$(BUILD_DIR)/src/code_17C00.o: CC := $(CC_OLD)
$(BUILD_DIR)/src/code_19AB0.o: CC := $(CC_OLD)

# libultra specifics
$(BUILD_DIR)/src/libultra/io/aisetfreq.o: OPT_FLAGS := -g
# $(BUILD_DIR)/src/libultra/io/ai.o: OPT_FLAGS := -O2 -g
# $(BUILD_DIR)/src/libultra/io/aisetfreq.o: MIPSBIT := -mips1

# mips version
# $(BUILD_DIR)/src/code_19AB0.o: MIPSBIT := -mips2
$(BUILD_DIR)/src/code_EB00.o: MIPSBIT := -mips2 -32


# loop unrolling
# $(BUILD_DIR)/src/code_1050.o: LOOP_UNROLL := -Wo,-loopunroll,0

######################## Targets #############################

default: all

all: check dirs $(TARGET).z64 verify

check:
	@echo "$$(cat conker.$(VERSION).sha1)  baserom.$(VERSION).z64" | sha1sum --check

dirs:
	$(foreach dir,$(SRC_DIRS) $(ASM_DIRS) $(BIN_DIRS) $(MP3_DIRS) $(RODATA_DIRS) $(RZIP_DIRS),$(shell mkdir -p build/$(dir)))

clean:
	rm -rf asm
	rm -rf bin
	rm -rf build
	rm -rf rodata
	rm -rf rzip
	rm -rf mp3

extract:
	$(PYTHON) tools/n64splat/split.py baserom.$(VERSION).z64 conker.$(VERSION).yaml .

# move this to chunk0?
decompress: dirs $(BUILD_DIR)/chunk0.bin

verify: $(TARGET).z64
	@echo "$$(cat conker.$(VERSION).sha1)  $(TARGET).z64" | sha1sum --check

######################## Recipes #############################

$(BUILD_DIR)/$(LD_SCRIPT): $(LD_SCRIPT)
	$(CPP) -P -DBUILD_DIR=$(BUILD_DIR) -o $@ $<

$(TARGET).elf: $(O_FILES) $(BUILD_DIR)/$(LD_SCRIPT) $(GLOBAL_ASM_O_FILES)
	@$(LD) $(LDFLAGS) -o $@ $(O_FILES)

$(GLOBAL_ASM_O_FILES): $(BUILD_DIR)/%.o: %.c include/variables.h include/functions.h include/structs.h
	$(PYTHON) tools/asm-processor/asm_processor.py $(OPT_FLAGS) $< > $(BUILD_DIR)/$<
	$(CC) -c $(CFLAGS) $(OPT_FLAGS) $(LOOP_UNROLL) $(MIPSBIT) -o $@ $(BUILD_DIR)/$<
	$(PYTHON) tools/asm-processor/asm_processor.py $(OPT_FLAGS) $< --post-process $@ \
		--assembler "$(AS) $(ASFLAGS)" --asm-prelude tools/asm-processor/prelude.s

$(BUILD_DIR)/%.o: %.c
	$(CC) -c $(CFLAGS) $(OPT_FLAGS) $(MIPSBIT) -o $@ $<

$(BUILD_DIR)/%.o: %.s
	$(AS) $(ASFLAGS) -o $@ $<

$(BUILD_DIR)/%.o: %.bin
	$(LD) -r -b binary -o $@ $<

$(BUILD_DIR)/%.o: %.mp3
	$(LD) -r -b binary -o $@ $<

$(BUILD_DIR)/%.o: %.rodata
	$(AS) $(ASFLAGS) -o $@ $<

$(TARGET).bin: $(TARGET).elf
	$(OBJCOPY) $< $@ -O binary

$(TARGET).z64: $(TARGET).bin
	@cp $< $@

$(BUILD_DIR)/chunk0.bin: $(CHUNK_0_RUNZIP_FILES)
	cat $(sort $(CHUNK_0_RUNZIP_FILES)) > $@

# currently n64splat does not write them to build/rzip, so move them there
$(BUILD_DIR)/%.bin: %.bin
	mv $< $@


# settings
.PHONY: all clean default
SHELL = /bin/bash -e -o pipefail
