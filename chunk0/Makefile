
BUILD_DIR := build
ASM_DIRS := asm
DATA_DIRS := bin
SRC_DIRS := src src/data src/done

SPLIT_DIR := $(BUILD_DIR)/split

ASM_PROCESSOR_DIR := ../tools/asm-processor

SPLIT := split -b 4096 -d --additional-suffix=.bin --suffix-length=4

S_FILES := $(foreach dir,$(ASM_DIRS),$(wildcard $(dir)/*.s))
C_FILES := $(foreach dir,$(SRC_DIRS),$(wildcard $(dir)/*.c))
BIN_FILES := $(foreach dir,$(DATA_DIRS),$(wildcard $(dir)/*.bin))

O_FILES := $(foreach file,$(S_FILES),$(BUILD_DIR)/$(file:.s=.o)) \
           $(foreach file,$(C_FILES),$(BUILD_DIR)/$(file:.c=.o)) \
           $(foreach file,$(BIN_FILES),$(BUILD_DIR)/$(file:.bin=.o))


# Files requiring pre/post-processing
GREP := grep -rl
GLOBAL_ASM_C_FILES := $(shell $(GREP) GLOBAL_ASM src/ </dev/null)
GLOBAL_ASM_O_FILES := $(foreach file,$(GLOBAL_ASM_C_FILES),$(BUILD_DIR)/$(file:.c=.o))

RZ_FILES := $(wildcard $(SPLIT_DIR)/*.gz)


TARGET = $(BUILD_DIR)/chunk0
LD_SCRIPT = chunk0.ld

##################### Compiler Options #######################

CC := ../ido/ido7.1_recomp/cc
CC_OLD := ../ido/ido5.3_recomp/cc


CROSS = mips-linux-gnu-
AS = $(CROSS)as
CPP = cpp
LD = $(CROSS)ld
OBJDUMP = $(CROSS)objdump
OBJCOPY = $(CROSS)objcopy
PYTHON = python3
TRUNCATE = truncate

OPT_FLAGS := -O2 -g3
MIPSBIT := -mips2

OBJCOPY_FLAGS  := --remove-section=.reginfo --remove-section=.MIPS.abiflags -O binary
INCLUDE_CFLAGS := -I include -I include/2.0L -I include/2.0L/PR

ASFLAGS = -EB -mtune=vr4300 -march=vr4300 -mabi=32 -I include

CFLAGS := -G 0 -Xfullwarn -Xcpluscomm -signed -g -nostdinc -non_shared -Wab,-r4300_mul
CFLAGS += -D_LANGUAGE_C
CFLAGS += $(INCLUDE_CFLAGS)

LDFLAGS = -T undefined_syms.txt -T undefined_funcs_auto.txt -T $(BUILD_DIR)/$(LD_SCRIPT) -Map $(TARGET).map --no-check-sections

####################### Overrides ############################

$(BUILD_DIR)/src/code_5A60.o: OPT_FLAGS := -O2 -g3
# $(BUILD_DIR)/src/code_89D0.o: OPT_FLAGS := -g
# $(BUILD_DIR)/src/code_8A10.o: OPT_FLAGS := -g
# $(BUILD_DIR)/src/code_91D0.o: OPT_FLAGS := -g

$(BUILD_DIR)/src/code_3120.o: LOOP_UNROLL := -Wo,-loopunroll,0

# CC
$(BUILD_DIR)/src/%.o: CC := $(CC_OLD)

# $(BUILD_DIR)/src/code_55E50.o: OPT_FLAGS := -O2 -g3

# $(BUILD_DIR)/src/code_103800.o: MIPSBIT := -mips2 -32bit

# OPT_FLAGS

######################## Targets #############################

$(foreach dir,$(SRC_DIRS) $(ASM_DIRS) $(DATA_DIRS) $(MP3_DIRS),$(shell mkdir -p build/$(dir)))


default: all

all: $(BUILD_DIR) $(TARGET).bin verify_o

check:
	@echo "$$(cat chunk0.sha1)  ../build/chunk0.bin" | sha1sum --check

clean:
	rm -rf asm
	rm -rf bin
	rm -rf build

extract: check
	$(PYTHON) ../tools/n64splat/split.py game.bin chunk0.yaml .

split: $(TARGET).code.bin
	mkdir -p $(SPLIT_DIR)
	$(SPLIT) $(TARGET).code.bin $(SPLIT_DIR)/

compress:
	$(PYTHON) ../tools/compress_chunk0.py build/split build/split

# TODO: once this matches, output result to ../rzip/chunk0.bin
combine: $(RZ_FILES)
	cat $(sort $(RZ_FILES)) > $(BUILD_DIR)/chunk0.gz.bin

verify_o: $(TARGET).bin
	@echo "$$(cat game.sha1)  build/chunk0.bin" | sha1sum --check

verify:
	@echo "$$(cat chunk0.gz.sha1)  build/chunk0.gz.bin" | sha1sum --check

$(BUILD_DIR)/$(LD_SCRIPT): $(LD_SCRIPT)
	$(CPP) -P -DBUILD_DIR=$(BUILD_DIR) -o $@ $<

$(TARGET).bin: $(TARGET).elf
	$(OBJCOPY) $(OBJCOPY_FLAGS) $< $@

$(TARGET).code.bin: $(TARGET).elf
	$(OBJCOPY) -O binary --only-section .code_code $< $@

$(TARGET).elf: $(O_FILES) $(BUILD_DIR)/$(LD_SCRIPT) $(GLOBAL_ASM_O_FILES)
	@$(LD) $(LDFLAGS) -o $@
# --just-symbols=../build/asm/libultra/os/createmesgqueue.o
# --just-symbols=../build/conker.us.elf

$(GLOBAL_ASM_O_FILES): $(BUILD_DIR)/%.o: %.c include/variables.h include/structs.h include/functions.h
	$(PYTHON) $(ASM_PROCESSOR_DIR)/asm_processor.py $(OPT_FLAGS) $< > $(BUILD_DIR)/$<
	$(CC) -c $(CFLAGS) $(OPT_FLAGS) $(LOOP_UNROLL) $(MIPSBIT) -o $@ $(BUILD_DIR)/$<
	$(PYTHON) $(ASM_PROCESSOR_DIR)/asm_processor.py $(OPT_FLAGS) $< --post-process $@ \
		--assembler "$(AS) $(ASFLAGS)" --asm-prelude $(ASM_PROCESSOR_DIR)/prelude.s

$(BUILD_DIR)/%.o: %.c include/variables.h include/structs.h include/functions.h
	$(CC) -c -32 $(CFLAGS) $(OPT_FLAGS) $(MIPSBIT) -o $@ $<

$(BUILD_DIR)/%.o: %.s
	$(AS) $(ASFLAGS) -o $@ $<

$(BUILD_DIR)/%.o: %.bin
	$(LD) -r -b binary -o $@ $<
