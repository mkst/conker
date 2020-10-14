
VERSION := us

BUILD_DIR = build
ASM_DIRS := asm
DATA_DIRS := bin
SRC_DIRS := src
MP3_DIRS := mp3

# IRIX_ROOT := ido/ido5.3_compiler
IRIX_ROOT := ido/ido7.1_compiler
QEMU_IRIX := $(shell which qemu-irix 2>/dev/null)

ifeq ($(QEMU_IRIX),)
  $(error ERROR: qemu-irix not found. Get it from https://github.com/n64decomp/sm64/releases.)
endif

S_FILES := $(foreach dir,$(ASM_DIRS),$(wildcard $(dir)/*.s))
C_FILES := $(foreach dir,$(SRC_DIRS),$(wildcard $(dir)/*.c))
BIN_FILES := $(foreach dir,$(DATA_DIRS),$(wildcard $(dir)/*.bin))
MP3_FILES := $(foreach dir,$(MP3_DIRS),$(wildcard $(dir)/*.mp3))

# Object files
O_FILES := $(foreach file,$(S_FILES),$(BUILD_DIR)/$(file:.s=.o)) \
					 $(foreach file,$(C_FILES),$(BUILD_DIR)/$(file:.c=.o)) \
           $(foreach file,$(BIN_FILES),$(BUILD_DIR)/$(file:.bin=.o)) \
					 $(foreach file,$(MP3_FILES),$(BUILD_DIR)/$(file:.mp3=.o))

TARGET = $(BUILD_DIR)/conker.$(VERSION)
LD_SCRIPT = conker.ld

##################### Compiler Options #######################
CROSS = mips-linux-gnu-
AS = $(CROSS)as
# CC = $(CROSS)gcc
# CC = tools/ido_recomp/linux/7.1/cc
# CC = tools/ido5.3_cc/usr/bin/cc
CC := $(QEMU_IRIX) -L $(IRIX_ROOT) $(IRIX_ROOT)/usr/bin/cc

LD = $(CROSS)ld
OBJDUMP = $(CROSS)objdump
OBJCOPY = $(CROSS)objcopy
PYTHON = python3

OPT_FLAGS :=

INCLUDE_CFLAGS := -I include -I include/2.0L -I include/2.0L/PR

ASFLAGS = -EB -mtune=vr4300 -march=vr4300 -mabi=32 -I include

CFLAGS := -G 0 -Xfullwarn -Xcpluscomm -signed -g -nostdinc -non_shared -Wab,-r4300_mul
CFLAGS += -D_LANGUAGE_C
CFLAGS += $(INCLUDE_CFLAGS)

LDFLAGS =  -T undefined_funcs.txt -T $(LD_SCRIPT) -T undefined_syms.txt -Map $(TARGET).map --no-check-sections
######################## Targets #############################

$(foreach dir,$(SRC_DIRS) $(ASM_DIRS) $(DATA_DIRS) $(MP3_DIRS),$(shell mkdir -p build/$(dir)))

default: all

all: check $(BUILD_DIR) $(TARGET).z64 verify

check:
	@echo "$$(cat conker.$(VERSION).sha1)  baserom.$(VERSION).z64" | sha1sum --check

clean:
	rm -rf asm
	rm -rf bin
	rm -rf build
	rm -rf mp3

extract:
	$(PYTHON) tools/n64splat/split.py baserom.$(VERSION).z64 conker.$(VERSION).yaml .

$(BUILD_DIR):
	mkdir $(BUILD_DIR)

$(TARGET).elf: $(O_FILES) $(LD_SCRIPT)
	@$(LD) $(LDFLAGS) -o $@ $(O_FILES)

# $(BUILD_DIR)/src/code%.o: OPT_FLAGS := -O2 -g3
$(BUILD_DIR)/src/code_39B0.o: OPT_FLAGS := -O2 -g3
$(BUILD_DIR)/src/code_1E480.o: OPT_FLAGS := -O2 -g3

$(BUILD_DIR)/%.o: %.c
	$(CC) -c $(CFLAGS) $(OPT_FLAGS) -o $@ $<

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

verify: $(TARGET).z64
	@echo "$$(cat conker.$(VERSION).sha1)  $(TARGET).z64" | sha1sum --check

.PHONY: all clean default
