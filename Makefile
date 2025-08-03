BASENAME  := conker
VERSION   := us

BUILD_DIR  = build
TARGET     = $(BUILD_DIR)/$(BASENAME).$(VERSION)
GAME_DIR   = $(BASENAME)

BIN_DIR    = assets

ifeq ($(VERSION),ects)
BIN_FILES  = $(wildcard $(BIN_DIR)/*.bin)
else
# don't compile game.$(VERSION).bin
BIN_FILES  = $(filter-out $(BIN_DIR)/game.$(VERSION).bin, $(wildcard $(BIN_DIR)/*.bin))
endif

EXTRACT_DIR = extracted

RZIP_DIRS  = $(wildcard $(BIN_DIR)/rzip/assets*)
RZIP_FILES = $(wildcard $(BIN_DIR)/rzip/assets*/assets*.bin)

O_FILES    = $(foreach file,$(BIN_FILES) $(RZIP_FILES),$(BUILD_DIR)/$(file:.bin=.bin.o))

### Tools

# System tools
MKDIR := mkdir
CP := cp
RM := rm
CAT := cat
DIFF := diff

# Build tools
CROSS   = mips-linux-gnu-
CPP     = cpp
LD      = $(CROSS)ld
OBJCOPY = $(CROSS)objcopy
PYTHON  = python3
PRINT   := printf

LD_SCRIPT = $(BASENAME).ld
LDFLAGS   = -T $(BUILD_DIR)/$(LD_SCRIPT) -Map $(TARGET).map --no-check-sections

N64SPLAT_SPLIT := $(PYTHON) tools/n64splat/split.py

ifeq ($(NON_MATCHING),1)
VERIFY :=
else
VERIFY := verify
endif

### Functions

# Whether to colorize build messages
COLOR ?= 1

# Colorful text printing
ifeq ($(COLOR),1)
NO_COL  := \033[0m
RED     := \033[0;31m
GREEN   := \033[0;32m
BLUE    := \033[0;34m
YELLOW  := \033[0;33m
ORANGE  := \033[38;5;208m
BLINK   := \033[33;5m
BOLD    := \033[1m
endif

# Print message with zero arguments (i.e. message)
define print0
  @$(PRINT) "$(GREEN)$(1)$(NO_COL)\n"
endef

# Print message with one argument (i.e. message arg)
define print1
  @$(PRINT) "$(GREEN)$(1) $(BLUE)$(2)$(NO_COL)\n"
endef

# Print message with two arguments (i.e. message arg1 -> arg2)
define print2
  @$(PRINT) "$(GREEN)$(1) $(YELLOW)$(2)$(GREEN) -> $(BLUE)$(3)$(NO_COL)\n"
endef

### Targets

default: all

all: dirs $(TARGET).z64 $(VERIFY)

dirs:
	$(foreach dir,$(BIN_DIR) $(RZIP_DIRS),$(shell mkdir -p $(BUILD_DIR)/$(dir)))

clean:
	$(call print0,Cleaning build artifacts)
	$(RM) -rf build

really-clean: clean
	$(call print0,REALLY cleaning build artifacts)
	$(RM) -rf assets
	$(RM) -rf rzip
	make -C $(GAME_DIR) really-clean

check: .baserom.$(VERSION).ok

extract: check $(GAME_DIR)/$(BASENAME).$(VERSION).bin

decompress: $(EXTRACT_DIR)/00000000.bin

verify: $(TARGET).z64
	@echo "$$($(CAT) $(BASENAME).$(VERSION).sha1)  $<" | sha1sum --check > /dev/null && \
	$(PRINT) "$(ORANGE)$(BOLD)CONKER'S BAD FUR DAY\n$(BLUE)$(TARGET).z64: $(NO_COL)$(GREEN)OK$(NO_COL)\n" || \
	$(PRINT) "$(BLUE)$(BASENAME).$(VERSION).sha1 $(RED)differs$(NO_COL)\n"

### Recipes

# .ld -> .ld with preprocessor
$(BUILD_DIR)/$(LD_SCRIPT): $(LD_SCRIPT)
	$(call print2,Preprocessing linker script:,$<,$@)
	$(CPP) -P -DBUILD_DIR=$(BUILD_DIR) -o $@ $<

# .o -> .elf
$(TARGET).elf: $(O_FILES) $(BUILD_DIR)/$(LD_SCRIPT)
	$(call print1,Linking elf:,$@)
	@$(LD) $(LDFLAGS) -o $@

# .bin -> .o
$(BUILD_DIR)/%.bin.o: %.bin
	$(call print2,Converting bin to obj:,$<,$@)
	@$(LD) -r -b binary -o $@ $<

# .elf -> .bin
$(TARGET).bin: $(TARGET).elf
	$(call print1,Creating bin (z64):,$@)
	$(OBJCOPY) $(OBJCOPYFLAGS) -O binary $< $@

$(TARGET).z64: $(TARGET).bin
	$(call print1,Creating z64:,$@)
	@$(CP) $< $@

# combine
$(GAME_DIR)/$(BASENAME).$(VERSION).bin: $(BIN_DIR)/game.$(VERSION).bin
	$(call print1,Combining .bin files:,$@)
	$(CAT) $(BIN_DIR)/header.$(VERSION).bin $(BIN_DIR)/boot.$(VERSION).bin $(BIN_DIR)/init.$(VERSION).bin $(BIN_DIR)/game.$(VERSION).bin $(BIN_DIR)/debugger.$(VERSION).bin > $@

# game code is not compressed in ECTS ROM
ifeq ($(VERSION),ects)
$(BIN_DIR)/game.$(VERSION).bin: $(BASENAME).$(VERSION).yaml
	$(N64SPLAT_SPLIT) $<
else
$(BIN_DIR)/game.$(VERSION).bin: $(BIN_DIR)/game/rzip/data/0000.bin
	$(CAT) $(BIN_DIR)/game/rzip/code/0*.bin $(BIN_DIR)/game/rzip/data/0000.bin > $@

$(BIN_DIR)/game/rzip/data/0000.bin: $(BIN_DIR)/game.$(VERSION).rzip.bin
	$(N64SPLAT_SPLIT) game.$(VERSION).rzip.yaml --modes bin rzip

$(BIN_DIR)/game.$(VERSION).rzip.bin: $(BASENAME).$(VERSION).yaml
	$(call print1,Splitting rom:,$<)
	$(N64SPLAT_SPLIT) $<
endif

.baserom.$(VERSION).ok: baserom.$(VERSION).z64
	@echo "$$(cat $(BASENAME).$(VERSION).sha1)  $<" | sha1sum --check
	@touch $@

$(EXTRACT_DIR)/00000000.bin:
	@$(MKDIR) -p $(EXTRACT_DIR)
	$(PYTHON) tools/extract_compressed.py config/compressed.$(VERSION).yaml $(BIN_DIR)/compressed.bin $(EXTRACT_DIR)

# settings
.PHONY: all clean default
SHELL = /bin/bash -e -o pipefail
