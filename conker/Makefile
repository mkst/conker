BASENAME := conker

BUILD_DIR = build
VERSION   := us

### Split configuration

OFFSETS_LENGTH      := 2048
TEXT_SECTION_LENGTH := 1335000
DATA_SECTION_LENGTH := 92000

### Version differences

ifeq ($(VERSION),us)
SRC_DIR  := src
else
ifeq ($(VERSION),eu)
SRC_DIR := src_eu
else
SRC_DIR := src_debug
OFFSETS_LENGTH      := 2112
TEXT_SECTION_LENGTH := 1380000
COMPRESS_DIR_ARGS   := --num-offsets 528 --total-size 1380000
endif
endif

### Directories

ASM_DIRS  = asm \
            asm/libultra asm/libultra/audio asm/libultra/gu asm/libultra/io asm/libultra/libc asm/libultra/os
BIN_DIRS  = bin

SPLIT_DIR := $(BUILD_DIR)/split

DEBUGGER_SRC_DIRS := $(SRC_DIR)/debugger $(SRC_DIR)/debugger/data
INIT_SRC_DIRS     := $(SRC_DIR)/init $(SRC_DIR)/init/data
GAME_SRC_DIRS     := $(SRC_DIR)/game $(SRC_DIR)/game/data $(SRC_DIR)/game/done
LIBULTRA_SRC_DIRS := $(SRC_DIR)/libultra $(SRC_DIR)/libultra/audio $(SRC_DIR)/libultra/gu \
            				 $(SRC_DIR)/libultra/io $(SRC_DIR)/libultra/libc $(SRC_DIR)/libultra/os

SRC_DIRS := $(SRC_DIR) \
						$(DEBUGGER_SRC_DIRS) \
						$(INIT_SRC_DIRS) \
						$(GAME_SRC_DIRS) \
						$(LIBULTRA_SRC_DIRS)


S_FILES   = $(foreach dir,$(ASM_DIRS),$(wildcard $(dir)/*.s))
C_FILES   = $(foreach dir,$(SRC_DIRS),$(wildcard $(dir)/*.c))
H_FILES   = $(foreach dir,$(SRC_DIRS),$(wildcard $(dir)/*.h))
BIN_FILES = $(foreach dir,$(BIN_DIRS),$(wildcard $(dir)/*.bin))

O_FILES := $(foreach file,$(S_FILES),$(BUILD_DIR)/$(file:.s=.o)) \
           $(foreach file,$(C_FILES),$(BUILD_DIR)/$(file:.c=.o)) \
           $(foreach file,$(BIN_FILES),$(BUILD_DIR)/$(file:.bin=.o))

TARGET = $(BUILD_DIR)/$(BASENAME).$(VERSION)

LD_SCRIPT = $(BASENAME).ld

CC     := ../ido/ido5.3_recomp/cc
CC_NEW := ../ido/ido7.1_recomp/cc

CROSS   = mips-linux-gnu-
AS      = $(CROSS)as
CPP     = cpp
LD      = $(CROSS)ld
OBJDUMP = $(CROSS)objdump
OBJCOPY = $(CROSS)objcopy
PYTHON  = python3

RZIP    := $(PYTHON) ../tools/rarezip.py
RZIPDIR := $(PYTHON) ../tools/compress_dir.py
SPLIT := split -b 4096 -d --additional-suffix=.bin --suffix-length=4

OPT_FLAGS := -O2 -g3
MIPSBIT := -mips2 -o32

ASM_PROCESSOR_DIR := ../tools/asm-processor

# Target version differences

ifeq ($(VERSION),ects)
TARGET_GAME_BIN = $(TARGET).game.bin
else
TARGET_GAME_BIN = $(TARGET).game.rzip.bin
endif

# Files requiring pre/post-processing
GREP := grep -rl
GLOBAL_ASM_C_FILES := $(shell $(GREP) GLOBAL_ASM $(SRC_DIR) </dev/null)
GLOBAL_ASM_O_FILES := $(foreach file,$(GLOBAL_ASM_C_FILES),$(BUILD_DIR)/$(file:.c=.o))

INCLUDE_CFLAGS := -I . -I include -I include/2.0L -I include/2.0L/PR -I include/libc -I src/libultra/os -I src/libultra/audio

ASFLAGS = -EB -mtune=vr4300 -march=vr4300 -mabi=32 -I include

CFLAGS := -G 0 -Xfullwarn -Xcpluscomm -signed -g -nostdinc -non_shared -Wab,-r4300_mul
CFLAGS += -D_LANGUAGE_C -D_FINALROM -DF3DEX_GBI
# ignore compiler warnings about anonymous structs
CFLAGS += -woff 649,838
CFLAGS += $(INCLUDE_CFLAGS)

LDFLAGS = -T $(BUILD_DIR)/$(LD_SCRIPT) -Map $(TARGET).map -T undefined_syms.$(VERSION).txt -T undefined_funcs.$(VERSION).txt -T symbol_addrs.$(VERSION).txt -T undefined_syms_auto.txt -T undefined_funcs_auto.txt  --no-check-sections

### Overrides

$(BUILD_DIR)/$(SRC_DIR)/libultra/audio/%.o: OPT_FLAGS := -g

# TODO: blindly move all of this into libultra/audio
$(BUILD_DIR)/$(SRC_DIR)/init_12820.o: OPT_FLAGS := -g
$(BUILD_DIR)/$(SRC_DIR)/init_128D0.o: OPT_FLAGS := -g
$(BUILD_DIR)/$(SRC_DIR)/init_13320.o: OPT_FLAGS := -g
$(BUILD_DIR)/$(SRC_DIR)/init_15550.o: OPT_FLAGS := -g
$(BUILD_DIR)/$(SRC_DIR)/init_17870.o: OPT_FLAGS := -g
$(BUILD_DIR)/$(SRC_DIR)/init_17880.o: OPT_FLAGS := -g
$(BUILD_DIR)/$(SRC_DIR)/init_17A80.o: OPT_FLAGS := -g
$(BUILD_DIR)/$(SRC_DIR)/init_17AA0.o: OPT_FLAGS := -g
$(BUILD_DIR)/$(SRC_DIR)/init_17AF0.o: OPT_FLAGS := -g
$(BUILD_DIR)/$(SRC_DIR)/init_17C00.o: OPT_FLAGS := -g
$(BUILD_DIR)/$(SRC_DIR)/init_17D80.o: OPT_FLAGS := -g
$(BUILD_DIR)/$(SRC_DIR)/init_17DF0.o: OPT_FLAGS := -g
$(BUILD_DIR)/$(SRC_DIR)/init_17EC0.o: OPT_FLAGS := -g
$(BUILD_DIR)/$(SRC_DIR)/init_17F10.o: OPT_FLAGS := -g
$(BUILD_DIR)/$(SRC_DIR)/init_18C60.o: OPT_FLAGS := -g
$(BUILD_DIR)/$(SRC_DIR)/init_18CB0.o: OPT_FLAGS := -g
$(BUILD_DIR)/$(SRC_DIR)/init_18DA0.o: OPT_FLAGS := -g
$(BUILD_DIR)/$(SRC_DIR)/init_18E60.o: OPT_FLAGS := -g
$(BUILD_DIR)/$(SRC_DIR)/init_19AB0.o: OPT_FLAGS := -g
$(BUILD_DIR)/$(SRC_DIR)/init_19B50.o: OPT_FLAGS := -g
$(BUILD_DIR)/$(SRC_DIR)/init_1AAE0.o: OPT_FLAGS := -g
$(BUILD_DIR)/$(SRC_DIR)/init_1C690.o: OPT_FLAGS := -g
$(BUILD_DIR)/$(SRC_DIR)/init_1C9E0.o: OPT_FLAGS := -g
$(BUILD_DIR)/$(SRC_DIR)/init_1D900.o: OPT_FLAGS := -g
$(BUILD_DIR)/$(SRC_DIR)/init_1DBA0.o: OPT_FLAGS := -g
$(BUILD_DIR)/$(SRC_DIR)/init_1DC80.o: OPT_FLAGS := -g
$(BUILD_DIR)/$(SRC_DIR)/init_1E170.o: OPT_FLAGS := -g
$(BUILD_DIR)/$(SRC_DIR)/init_1E2A0.o: OPT_FLAGS := -g
$(BUILD_DIR)/$(SRC_DIR)/init_1E4A0.o: OPT_FLAGS := -g
$(BUILD_DIR)/$(SRC_DIR)/init_1E530.o: OPT_FLAGS := -g
$(BUILD_DIR)/$(SRC_DIR)/init_1FB40.o: OPT_FLAGS := -g
$(BUILD_DIR)/$(SRC_DIR)/init_20000.o: OPT_FLAGS := -g
$(BUILD_DIR)/$(SRC_DIR)/init_214F0.o: OPT_FLAGS := -g
$(BUILD_DIR)/$(SRC_DIR)/init_22040.o: OPT_FLAGS := -g
$(BUILD_DIR)/$(SRC_DIR)/init_22460.o: OPT_FLAGS := -g

### Targets

default: all

all: dirs $(TARGET).bin verify

dirs:
	$(foreach dir,$(SRC_DIRS) $(ASM_DIRS) $(BIN_DIRS) ,$(shell mkdir -p build/$(dir)))

clean:
	rm -rf asm
	rm -rf bin
	rm -rf build
	rm -rf $(BASENAME).*.ok

really-clean: clean
	rm -rf conker.us.bin conker.eu.bin conker.ects.bin conker.debug.bin

extract: $(BUILD_DIR)/splat

# sanity check base bin
check: $(BASENAME).$(VERSION).ok

# check built bin
verify: $(TARGET).ok

progress: verify progress.csv

# replace original binaries
replace: verify $(TARGET).header.bin $(TARGET).boot.bin $(TARGET).init.bin $(TARGET_GAME_BIN) $(TARGET).debugger.bin
	cp $(TARGET).header.bin ../bin
	cp $(TARGET).boot.bin ../bin
	cp $(TARGET).init.bin ../bin
	cp $(TARGET_GAME_BIN) ../bin
	cp $(TARGET).debugger.bin ../bin

### Recipes

$(BUILD_DIR)/$(LD_SCRIPT): $(LD_SCRIPT)
	$(CPP) -P -DBUILD_DIR=$(BUILD_DIR) -o $@ $<

$(TARGET).elf: $(O_FILES) $(BUILD_DIR)/$(LD_SCRIPT) $(GLOBAL_ASM_O_FILES)
	@$(LD) $(LDFLAGS) -o $@

ifndef PERMUTER
$(GLOBAL_ASM_O_FILES): $(BUILD_DIR)/%.o: %.c include/variables.h include/structs.h include/functions.h
	$(PYTHON) $(ASM_PROCESSOR_DIR)/asm_processor.py $(OPT_FLAGS) $< > $(BUILD_DIR)/$<
	$(CC) -c -32 $(CFLAGS) $(OPT_FLAGS) $(LOOP_UNROLL) $(MIPSBIT) -o $@ $(BUILD_DIR)/$<
	$(PYTHON) $(ASM_PROCESSOR_DIR)/asm_processor.py $(OPT_FLAGS) $< --post-process $@ \
		--assembler "$(AS) $(ASFLAGS)" --asm-prelude $(ASM_PROCESSOR_DIR)/prelude.s
endif

$(BUILD_DIR)/%.o: %.c
	$(CC) -c -32 $(CFLAGS) $(OPT_FLAGS) $(MIPSBIT) -o $@ $<

$(BUILD_DIR)/%.o: %.s
	$(AS) $(ASFLAGS) -o $@ $<

$(BUILD_DIR)/%.o: %.bin
	$(LD) -r -b binary -o $@ $<

$(TARGET).bin: $(TARGET).elf
	$(OBJCOPY) $(OBJCOPYFLAGS) -O binary $< $@

# extract
$(BUILD_DIR)/splat: check $(BASENAME).$(VERSION).yaml
	$(PYTHON) ../tools/n64splat/split.py conker.$(VERSION).bin $(BASENAME).$(VERSION).yaml .

%.ok: %.bin
	@echo "$$(cat $(BASENAME).$(VERSION).sha1)  $<" | sha1sum --check
	@touch $@

conker.$(VERSION).bin:
	make extract -C ..

# dump sections
$(TARGET).header.bin: $(TARGET).elf
	$(OBJCOPY) -O binary --only-section .header $< $@

$(TARGET).boot.bin: $(TARGET).elf
	$(OBJCOPY) -O binary --only-section .data_40 $< $@

$(TARGET).init.bin: $(TARGET).init.code.bin $(TARGET).init.data.bin
	cat $^ > $@

$(TARGET).init.code.bin: $(TARGET).elf
	$(OBJCOPY) -O binary --only-section .code_init $< $@

$(TARGET).init.data.bin: $(TARGET).elf
	$(OBJCOPY) -O binary --only-section .code_init_data $< $@

#ects only
$(TARGET).game.bin: $(TARGET).game.code.bin $(TARGET).game.data.bin
	cat $^ > $@

$(TARGET).game.code.bin: $(TARGET).elf
	$(OBJCOPY) -O binary --only-section .code_game $< $@

$(TARGET).game.data.bin: $(TARGET).elf
	$(OBJCOPY) -O binary --only-section .code_game_data $< $@

$(TARGET).debugger.bin: $(TARGET).debugger.code.bin $(TARGET).debugger.data.bin
	cat $^ > $@

$(TARGET).debugger.code.bin: $(TARGET).elf
	$(OBJCOPY) -O binary --only-section .code_debugger $< $@

$(TARGET).debugger.data.bin: $(TARGET).elf
	$(OBJCOPY) -O binary --only-section .code_debugger_data $< $@

# split code section
$(SPLIT_DIR)/0000.bin: $(TARGET).game.code.bin
	mkdir -p $(SPLIT_DIR)
	$(SPLIT) $< $(SPLIT_DIR)/

# create offsets file
$(SPLIT_DIR)/offsets.bin: $(SPLIT_DIR)/0000.bin
	$(RZIPDIR) $(SPLIT_DIR) $(SPLIT_DIR) --offsets-file $@ $(COMPRESS_DIR_ARGS)

# concatenate compressed code blocks
$(TARGET).game.code.rzip.bin: $(TARGET).game.code.bin $(SPLIT_DIR)/offsets.bin
	cat $(SPLIT_DIR)/*.gz > $@

# compressed data section
$(TARGET).game.data.rzip.bin: $(TARGET).game.data.bin
	$(RZIP) $< $@

# create padding
$(TARGET).game.code.padding.bin:
	cp ../bin/game/bin/code_padding.bin $@

$(TARGET).game.data.padding.bin: $(TARGET).game.data.rzip.bin
	dd if=/dev/zero of=$@ bs=1 count=$$(($(DATA_SECTION_LENGTH)-$$(wc -c <$<)))

$(TARGET).game.rzip.bin: $(SPLIT_DIR)/offsets.bin $(TARGET).game.code.rzip.bin $(TARGET).game.code.padding.bin $(TARGET).game.data.rzip.bin $(TARGET).game.data.padding.bin
	cat $^ > $@

progress.csv: progress.init.csv progress.game.csv progress.debugger.csv
	cat $^ > $@

progress.init.csv: $(TARGET).elf
	$(PYTHON) ../tools/progress.py . $(TARGET).map .code_init --version $(VERSION) > $@
progress.game.csv: $(TARGET).elf
	$(PYTHON) ../tools/progress.py . $(TARGET).map .code_game --version $(VERSION) > $@
progress.debugger.csv: $(TARGET).elf
	$(PYTHON) ../tools/progress.py . $(TARGET).map .code_debugger --version $(VERSION) > $@


# settings
.PHONY: all clean default
SHELL = /bin/bash -e -o pipefail
