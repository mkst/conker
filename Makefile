
VERSION := us

BUILD_DIR = build
ASM_DIRS := asm asm/libultra
DATA_DIRS := bin
SRC_DIRS := src src/libultra
MP3_DIRS := mp3
RZIP_DIRS := rzip/chunk0 rzip/chunk1


S_FILES := $(foreach dir,$(ASM_DIRS),$(wildcard $(dir)/*.s))
C_FILES := $(foreach dir,$(SRC_DIRS),$(wildcard $(dir)/*.c))
H_FILES := $(foreach dir,$(SRC_DIRS),$(wildcard $(dir)/*.h))
BIN_FILES := $(foreach dir,$(DATA_DIRS),$(wildcard $(dir)/*.bin))
MP3_FILES := $(foreach dir,$(MP3_DIRS),$(wildcard $(dir)/*.mp3))

CHUNK0 := $(BUILD_DIR)/chunk0

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
LD = $(CROSS)ld
OBJDUMP = $(CROSS)objdump
OBJCOPY = $(CROSS)objcopy
PYTHON = python3

OPT_FLAGS := -O2 -g3
MIPSBIT :=

INCLUDE_CFLAGS := -I include -I include/2.0L -I include/2.0L/PR

ASFLAGS = -EB -mtune=vr4300 -march=vr4300 -mabi=32 -I include

CFLAGS := -G 0 -Xfullwarn -Xcpluscomm -signed -g -nostdinc -non_shared -Wab,-r4300_mul
CFLAGS += -D_LANGUAGE_C
CFLAGS += $(INCLUDE_CFLAGS)

LDFLAGS =  -T undefined_funcs.txt -T $(LD_SCRIPT) -T undefined_syms.txt -Map $(TARGET).map --no-check-sections
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

RZIP_FILES :=	$(foreach dir,$(RZIP_DIRS),$(wildcard $(dir)/*.gz))
RUNZIP_FILES := $(foreach file,$(RZIP_FILES),$(BUILD_DIR)/$(file:.gz=.bin))

# move this to chunk0?
decompress: $(BUILD_DIR)/chunk0.bin

# file-specific compile flags
$(BUILD_DIR)/src/code_17AA0.o: OPT_FLAGS := -g
$(BUILD_DIR)/src/code_18C60.o: OPT_FLAGS := -g
# loop unrolling
# $(BUILD_DIR)/src/code_1050.o: LOOP_UNROLL := -Wo,-loopunroll,0

# libultra
$(BUILD_DIR)/src/libultra/%.o: OPT_FLAGS := -O2 -g3

# dependencies
$(BUILD_DIR):
	mkdir $(BUILD_DIR)

$(TARGET).elf: $(O_FILES) $(LD_SCRIPT) $(GLOBAL_ASM_O_FILES)
	@$(LD) $(LDFLAGS) -o $@ $(O_FILES)

$(GLOBAL_ASM_O_FILES): $(BUILD_DIR)/%.o: %.c include/variables.h
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

$(BUILD_DIR)/chunk0.bin: $(RUNZIP_FILES)
	@cat $(sort $(RUNZIP_FILES)) > $@

# currently n64splat does not write them to build/rzip, so move them there
$(BUILD_DIR)/%.bin: %.bin
	mv $< $@

verify: $(TARGET).z64
	@echo "$$(cat conker.$(VERSION).sha1)  $(TARGET).z64" | sha1sum --check

.PHONY: all clean default
