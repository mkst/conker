VERSION   := us
BUILD_DIR := build

NON_MATCHING := 0
VERIFY_GZ    := verify_gz
VERIFY_O     := verify_o
VERIFY       := verify
ifeq ($(NON_MATCHING),1)
VERIFY_GZ    :=
VERIFY_O     :=
VERIFY       :=
endif

ASM_DIRS  := asm
DATA_DIRS := bin

OFFSETS_LENGTH      := 2048
TEXT_SECTION_LENGTH := 1335000
DATA_SECTION_LENGTH := 92000

ifeq ($(VERSION),us)
SRC_DIR  := src
else
ifeq ($(VERSION),eu)
SRC_DIR := src_eu
else
SRC_DIR := src_debug
OFFSETS_LENGTH      := 2112
TEXT_SECTION_LENGTH := 1380000
COMPRESS_DIR_ARGS := --num-offsets 528 --total-size 1380000
endif
endif

SRC_DIRS  := $(SRC_DIR) $(SRC_DIR)/data $(SRC_DIR)/done

SPLIT_DIR := $(BUILD_DIR)/split

ASM_PROCESSOR_DIR := ../tools/asm-processor

S_FILES := $(foreach dir,$(ASM_DIRS),$(wildcard $(dir)/*.s))
C_FILES := $(foreach dir,$(SRC_DIRS),$(wildcard $(dir)/*.c))
BIN_FILES := $(foreach dir,$(DATA_DIRS),$(wildcard $(dir)/*.bin))

O_FILES := $(foreach file,$(S_FILES),$(BUILD_DIR)/$(file:.s=.o)) \
           $(foreach file,$(C_FILES),$(BUILD_DIR)/$(file:.c=.o)) \
           $(foreach file,$(BIN_FILES),$(BUILD_DIR)/$(file:.bin=.o))

# Files requiring pre/post-processing
GREP := grep -rl
GLOBAL_ASM_C_FILES := $(shell $(GREP) GLOBAL_ASM $(SRC_DIR) </dev/null)
GLOBAL_ASM_O_FILES := $(foreach file,$(GLOBAL_ASM_C_FILES),$(BUILD_DIR)/$(file:.c=.o))


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

GZIPLEVEL := --best --no-name --force -c
GZIP = ../tools/gzip $(GZIPLEVEL)
SPLIT := split -b 4096 -d --additional-suffix=.bin --suffix-length=4

OPT_FLAGS := -O2 -g3
MIPSBIT := -mips2

OBJCOPY_FLAGS  := --remove-section=.reginfo --remove-section=.MIPS.abiflags -O binary
INCLUDE_CFLAGS := -I include -I include/2.0L -I include/2.0L/PR

ASFLAGS = -EB -mtune=vr4300 -march=vr4300 -mabi=32 -I include
# -mabi=o64 $(MIPSBIT)

CFLAGS := -G 0 -Xfullwarn -Xcpluscomm -signed -g -nostdinc -non_shared -Wab,-r4300_mul
CFLAGS += -D_LANGUAGE_C
CFLAGS += $(INCLUDE_CFLAGS)

LDFLAGS = -T undefined_funcs_auto.txt -T $(BUILD_DIR)/$(LD_SCRIPT) -T ../undefined_syms.$(VERSION).txt -Map $(TARGET).map --no-check-sections
####################### Overrides ############################

# custom OPT_FLAGS
# $(BUILD_DIR)/src/code_5A60.o: OPT_FLAGS := -O2 -g3
# $(BUILD_DIR)/src/code_89D0.o: OPT_FLAGS := -g
# $(BUILD_DIR)/src/code_8A10.o: OPT_FLAGS := -g
# $(BUILD_DIR)/src/code_91D0.o: OPT_FLAGS := -g

# $(BUILD_DIR)/src/code_3120.o: LOOP_UNROLL := -Wo,-loopunroll,0

# CC
$(BUILD_DIR)/src/%.o: CC := $(CC_OLD)

# $(BUILD_DIR)/src/code_55E50.o: OPT_FLAGS := -O2 -g3
# $(BUILD_DIR)/src/code_122AE0.o: MIPSBIT := -mips3

######################## Targets #############################

$(foreach dir,$(SRC_DIRS) $(ASM_DIRS) $(DATA_DIRS),$(shell mkdir -p build/$(dir)))


default: verify_o

all: $(BUILD_DIR) verify_o replace

check: game.$(VERSION).bin
	@echo "$$(cat game.$(VERSION).sha1)  game.$(VERSION).bin" | sha1sum --check

clean:
	rm -rf asm
	rm -rf bin
	rm -rf build

extract: check $(BUILD_DIR)/splat

replace: verify_o $(TARGET).gz.bin $(VERIFY_GZ)
	cp $(TARGET).gz.bin ../bin/game.$(VERSION).bin

verify_o: $(TARGET).bin
	@echo "$$(cat game.$(VERSION).sha1)  $(TARGET).bin" | sha1sum --check

verify:
	@echo "$$(cat game.$(VERSION).code.gz.sha1)  $(TARGET).code.gz.bin" | sha1sum --check
	@echo "$$(cat game.$(VERSION).data.gz.sha1)  $(TARGET).data.gz.bin" | sha1sum --check

verify_gz: $(TARGET).gz.bin
	@echo "$$(cat game.$(VERSION).gz.sha1)  $(TARGET).gz.bin" | sha1sum --check

progress: ../html/progress.csv

### Recipes

$(BUILD_DIR)/$(LD_SCRIPT): $(LD_SCRIPT)
	$(CPP) -P -DBUILD_DIR=$(BUILD_DIR) -o $@ $<

$(TARGET).bin: $(TARGET).elf
	$(OBJCOPY) $(OBJCOPY_FLAGS) $< $@

$(TARGET).code.bin: $(TARGET).elf
	$(OBJCOPY) -O binary --only-section .code_code $< $@

$(TARGET).data.bin: $(TARGET).elf
	$(OBJCOPY) -O binary --only-section .code_data $< $@

$(TARGET).elf: $(O_FILES) $(BUILD_DIR)/$(LD_SCRIPT) $(GLOBAL_ASM_O_FILES)
	@$(LD) $(LDFLAGS) -o $@
# --just-symbols=../build/asm/libultra/os/createmesgqueue.o
# --just-symbols=../build/conker.us.elf

$(GLOBAL_ASM_O_FILES): $(BUILD_DIR)/%.o: %.c include/variables.h include/structs.h include/functions.h
	$(PYTHON) $(ASM_PROCESSOR_DIR)/asm_processor.py $(OPT_FLAGS) $< > $(BUILD_DIR)/$<
	$(CC) -c -32 $(CFLAGS) $(OPT_FLAGS) $(LOOP_UNROLL) $(MIPSBIT) -o $@ $(BUILD_DIR)/$<
	$(PYTHON) $(ASM_PROCESSOR_DIR)/asm_processor.py $(OPT_FLAGS) $< --post-process $@ \
		--assembler "$(AS) $(ASFLAGS)" --asm-prelude $(ASM_PROCESSOR_DIR)/prelude.s

$(BUILD_DIR)/%.o: %.c include/variables.h include/structs.h include/functions.h
	$(CC) -c -32 $(CFLAGS) $(OPT_FLAGS) $(MIPSBIT) -o $@ $<

$(BUILD_DIR)/%.o: %.s
	$(AS) $(ASFLAGS) -o $@ $<

$(BUILD_DIR)/%.o: %.bin
	printf ".section .data\n\n.incbin \"$<\"\n" | $(AS) $(ASFLAGS) -o $@

$(SPLIT_DIR)/0000.bin: $(TARGET).code.bin
	mkdir -p $(SPLIT_DIR)
	$(SPLIT) $(TARGET).code.bin $(SPLIT_DIR)/

$(SPLIT_DIR)/offsets.bin: $(SPLIT_DIR)/0000.bin
	$(PYTHON) ../tools/compress_dir.py $(SPLIT_DIR) $(SPLIT_DIR) --offsets-file $(SPLIT_DIR)/offsets.bin $(COMPRESS_DIR_ARGS)

$(TARGET).code.gz.bin: $(TARGET).code.bin $(SPLIT_DIR)/offsets.bin
	cat $(SPLIT_DIR)/*.gz > $(TARGET).code.gz.bin

$(TARGET).data.gz.bin: $(TARGET).data.bin
	$(GZIP) $(TARGET).data.bin > $(TARGET).data.bin.gz
	$(PYTHON) ../tools/fixup_gzip.py $(TARGET).data.bin.gz $(TARGET).data.gz.bin

$(TARGET).gz.bin: $(TARGET).code.gz.bin $(TARGET).data.gz.bin $(TARGET).code.pad $(TARGET).data.pad
	cat $(SPLIT_DIR)/offsets.bin $(TARGET).code.gz.bin $(TARGET).code.pad $(TARGET).data.gz.bin $(TARGET).data.pad > $(TARGET).gz.bin

$(BUILD_DIR)/splat: chunk0.$(VERSION).yaml
	$(PYTHON) ../tools/n64splat/split.py game.$(VERSION).bin chunk0.$(VERSION).yaml .
	@touch $(BUILD_DIR)/splat

ifeq ($(NON_MATCHING),1)
$(TARGET).code.pad: $(TARGET).code.gz.bin
	dd if=/dev/zero of=$@ bs=1 count=$$(($(TEXT_SECTION_LENGTH)-$(OFFSETS_LENGTH)-$$(wc -c <$(TARGET).code.gz.bin)))
else
$(TARGET).code.pad:
	cp ../game/bin/code_padding.bin $@
endif

$(TARGET).data.pad: $(TARGET).data.gz.bin
	dd if=/dev/zero of=$@ bs=1 count=$$(($(DATA_SECTION_LENGTH)-$$(wc -c <$(TARGET).data.gz.bin)))


../html/progress.csv: verify_o
	mkdir -p ../html
	$(PYTHON) ../tools/progress.py $(BUILD_DIR)/chunk0.map . .code_code > $@
