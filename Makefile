BUILD_DIR = build
VERSION := us

ASM_DIRS := asm \
					  asm/libultra asm/libultra/gu asm/libultra/io asm/libultra/libc asm/libultra/os
DATA_DIRS := bin
SRC_DIRS := src src/libultra src/libultra/io src/libultra/os
MP3_DIRS := mp3 mp3/hungover mp3/windy mp3/barn_boys \
            mp3/bats_tower mp3/sloprano mp3/uga_buga mp3/spooky \
            mp3/its_war mp3/the_heist mp3/intro mp3/other
RZIP_DIRS := rzip/chunk0 rzip/chunk1

S_FILES := $(foreach dir,$(ASM_DIRS),$(wildcard $(dir)/*.s))
C_FILES := $(foreach dir,$(SRC_DIRS),$(wildcard $(dir)/*.c))
H_FILES := $(foreach dir,$(SRC_DIRS),$(wildcard $(dir)/*.h))
BIN_FILES := $(foreach dir,$(DATA_DIRS),$(wildcard $(dir)/*.bin))
MP3_FILES := $(foreach dir,$(MP3_DIRS),$(wildcard $(dir)/*.mp3))

# Object files
O_FILES := $(foreach file,$(S_FILES),$(BUILD_DIR)/$(file:.s=.o)) \
           $(foreach file,$(C_FILES),$(BUILD_DIR)/$(file:.c=.o)) \
           $(foreach file,$(BIN_FILES),$(BUILD_DIR)/$(file:.bin=.o)) \
           $(foreach file,$(MP3_FILES),$(BUILD_DIR)/$(file:.mp3=.o)) \
           $(BUILD_DIR)/rzip/chunk0/chunk0.o \
           $(BUILD_DIR)/rzip/chunk1/chunk1.o

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

OPT_FLAGS := -O2 -g3
MIPSBIT := -mips2

INCLUDE_CFLAGS := -I include -I include/2.0L -I include/2.0L/PR -I include/libc

ASFLAGS = -EB -mtune=vr4300 -march=vr4300 -mabi=32 -I include

CFLAGS := -G 0 -Xfullwarn -Xcpluscomm -signed -g -nostdinc -non_shared -Wab,-r4300_mul
CFLAGS += -D_LANGUAGE_C
CFLAGS += $(INCLUDE_CFLAGS)

LDFLAGS =  -T undefined_funcs.txt -T $(BUILD_DIR)/$(LD_SCRIPT) -T undefined_syms.txt -Map $(TARGET).map --no-check-sections
######################## Targets #############################

$(foreach dir,$(SRC_DIRS) $(ASM_DIRS) $(DATA_DIRS) $(MP3_DIRS) $(RZIP_DIRS),$(shell mkdir -p build/$(dir)))

default: all

all: check $(BUILD_DIR) $(TARGET).z64 verify

check:
	@echo "$$(cat conker.$(VERSION).sha1)  baserom.$(VERSION).z64" | sha1sum --check

clean:
	rm -rf asm
	rm -rf bin
	rm -rf build
	rm -rf rzip
	rm -rf mp3

extract:
	$(PYTHON) tools/n64splat/split.py baserom.$(VERSION).z64 conker.$(VERSION).yaml .

CHUNK_0_RZIP_FILES :=	$(wildcard rzip/chunk0/*.gz)
CHUNK_1_RZIP_FILES :=	$(wildcard rzip/chunk1/*.gz)
CHUNK_0_RUNZIP_FILES := $(foreach file,$(CHUNK_0_RZIP_FILES),$(BUILD_DIR)/$(file:.gz=.bin))
CHUNK_1_RUNZIP_FILES := $(foreach file,$(CHUNK_1_RZIP_FILES),$(BUILD_DIR)/$(file:.gz=.bin))

# move this to chunk0?
decompress: $(BUILD_DIR)/chunk0.bin $(BUILD_DIR)/chunk1.bin

# file-specific compile flags
# $(BUILD_DIR)/src/code_11FA0.o: OPT_FLAGS := -g
$(BUILD_DIR)/src/code_12820.o: OPT_FLAGS := -g
$(BUILD_DIR)/src/code_128D0.o: OPT_FLAGS := -g
$(BUILD_DIR)/src/code_13320.o: OPT_FLAGS := -g
$(BUILD_DIR)/src/code_15550.o: OPT_FLAGS := -g
$(BUILD_DIR)/src/code_1AAE0.o: OPT_FLAGS := -g
$(BUILD_DIR)/src/code_17870.o: OPT_FLAGS := -g
$(BUILD_DIR)/src/code_17AA0.o: OPT_FLAGS := -g
$(BUILD_DIR)/src/code_17A80.o: OPT_FLAGS := -g
$(BUILD_DIR)/src/code_17AF0.o: OPT_FLAGS := -g
$(BUILD_DIR)/src/code_17DF0.o: OPT_FLAGS := -g
$(BUILD_DIR)/src/code_17F10.o: OPT_FLAGS := -g
$(BUILD_DIR)/src/code_18C60.o: OPT_FLAGS := -g
$(BUILD_DIR)/src/code_18CB0.o: OPT_FLAGS := -g
$(BUILD_DIR)/src/code_18DA0.o: OPT_FLAGS := -g
$(BUILD_DIR)/src/code_18E60.o: OPT_FLAGS := -g
$(BUILD_DIR)/src/code_19AB0.o: OPT_FLAGS := -g
$(BUILD_DIR)/src/code_19B50.o: OPT_FLAGS := -g
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
$(BUILD_DIR)/src/code_22040.o: OPT_FLAGS := -g
$(BUILD_DIR)/src/code_214F0.o: OPT_FLAGS := -g

# compilers
$(BUILD_DIR)/src/code_19AB0.o: CC := $(CC_OLD)

# mips
$(BUILD_DIR)/src/code_19AB0.o: MIPSBIT := -mips2

# loop unrolling
# $(BUILD_DIR)/src/code_1050.o: LOOP_UNROLL := -Wo,-loopunroll,0

# libultra
$(BUILD_DIR)/src/libultra/%.o: OPT_FLAGS := -O2 -g3
# $(BUILD_DIR)/src/libultra/libultra_27620.o: CC := $(CC_OLD)
# $(BUILD_DIR)/src/libultra/libultra_23390.o: OPT_FLAGS := -O1


# dependencies
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

$(TARGET).bin: $(TARGET).elf
	$(OBJCOPY) $< $@ -O binary

$(TARGET).z64: $(TARGET).bin
	@cp $< $@

$(BUILD_DIR)/chunk0.bin: $(CHUNK_0_RUNZIP_FILES)
	cat $(sort $(CHUNK_0_RUNZIP_FILES)) > $@

$(BUILD_DIR)/chunk1.bin: $(CHUNK_1_RUNZIP_FILES)
	cat $(sort $(CHUNK_1_RUNZIP_FILES)) > $@

# currently n64splat does not write them to build/rzip, so move them there
$(BUILD_DIR)/%.bin: %.bin
	mv $< $@

verify: $(TARGET).z64
	@echo "$$(cat conker.$(VERSION).sha1)  $(TARGET).z64" | sha1sum --check

.PHONY: all clean default
