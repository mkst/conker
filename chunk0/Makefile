

BUILD_DIR := build
ASM_DIRS := asm
DATA_DIRS := bin
SRC_DIRS := src

IRIX_ROOT := ../ido/ido7.1_compiler
QEMU_IRIX := $(shell which qemu-irix 2>/dev/null)


S_FILES := $(foreach dir,$(ASM_DIRS),$(wildcard $(dir)/*.s))
C_FILES := $(foreach dir,$(SRC_DIRS),$(wildcard $(dir)/*.c))
BIN_FILES := $(foreach dir,$(DATA_DIRS),$(wildcard $(dir)/*.bin))

O_FILES := $(foreach file,$(S_FILES),$(BUILD_DIR)/$(file:.s=.o)) \
           $(foreach file,$(C_FILES),$(BUILD_DIR)/$(file:.c=.o)) \
           $(foreach file,$(BIN_FILES),$(BUILD_DIR)/$(file:.bin=.o))

TARGET = $(BUILD_DIR)/chunk0.bin
LD_SCRIPT = chunk0.ld

##################### Compiler Options #######################

CC := $(QEMU_IRIX) -L $(IRIX_ROOT) $(IRIX_ROOT)/usr/bin/cc

CROSS = mips-linux-gnu-
AS = $(CROSS)as
LD = $(CROSS)ld
OBJDUMP = $(CROSS)objdump
OBJCOPY = $(CROSS)objcopy
PYTHON = python3

OPT_FLAGS := -g

INCLUDE_CFLAGS := -I include -I include/2.0L -I include/2.0L/PR

ASFLAGS = -EB -mtune=vr4300 -march=vr4300 -mabi=32 -I include

CFLAGS := -G 0 -Xfullwarn -Xcpluscomm -signed -g -nostdinc -non_shared -Wab,-r4300_mul
CFLAGS += -D_LANGUAGE_C
CFLAGS += $(INCLUDE_CFLAGS)

LDFLAGS =  -T undefined_funcs.txt -T $(LD_SCRIPT) -Map $(TARGET).map --no-check-sections
#-T undefined_syms.txt

######################## Targets #############################

$(foreach dir,$(SRC_DIRS) $(ASM_DIRS) $(DATA_DIRS) $(MP3_DIRS),$(shell mkdir -p build/$(dir)))

default: all

all: $(BUILD_DIR) $(TARGET)

clean:
	rm -rf asm
	rm -rf bin
	rm -rf build

decompress:
	@mkdir -p ../chunks
	@$(PYTHON) ../tools/gedecompess/decompress.py ../baserom.us.z64 ../chunks/chunk0.bin

extract:
	$(PYTHON) ../tools/n64splat/split.py ../chunks/chunk0.bin chunk0.yaml .

$(BUILD_DIR):
	mkdir $(BUILD_DIR)

$(TARGET): $(O_FILES) $(LD_SCRIPT)
		@$(LD) $(LDFLAGS) -o $@ $(O_FILES)

$(BUILD_DIR)/%.o: %.s
	$(AS) $(ASFLAGS) -o $@ $<

$(BUILD_DIR)/%.o: %.bin
	$(LD) -r -b binary -o $@ $<
