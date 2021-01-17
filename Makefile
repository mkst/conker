BASENAME  := conker
VERSION   := us

BUILD_DIR  = build
TARGET     = $(BUILD_DIR)/$(BASENAME).$(VERSION)
GAME_DIR   = $(BASENAME)

BIN_DIR    = bin
BIN_FILES  = $(wildcard $(BIN_DIR)/*.bin)

RZIP_DIRS  = $(wildcard rzip/assets*)
RZIP_FILES = $(wildcard rzip/assets*/assets*.bin)

O_FILES    = $(foreach file,$(BIN_FILES) $(RZIP_FILES),$(BUILD_DIR)/$(file:.bin=.o))

ifeq ($(VERSION),ects)
$(error The ECTS ROM is not yet supported)
endif

CROSS   = mips-linux-gnu-
CPP     = cpp
LD      = $(CROSS)ld
OBJCOPY = $(CROSS)objcopy
PYTHON  = python3

LD_SCRIPT = $(BASENAME).ld
LDFLAGS   = -T $(BUILD_DIR)/$(LD_SCRIPT) -Map $(TARGET).map --no-check-sections

### Targets

default: all

all: dirs $(TARGET).z64 verify

dirs:
	$(foreach dir,$(BIN_DIR) $(RZIP_DIRS),$(shell mkdir -p $(BUILD_DIR)/$(dir)))

clean:
	rm -rf bin
	rm -rf build

really-clean: clean
	rm -rf rzip
	make -C $(GAME_DIR) really-clean

check: .baserom.$(VERSION).ok

extract: check $(GAME_DIR)/$(BASENAME).$(VERSION).bin

verify: $(TARGET).z64
	@echo "$$(cat $(BASENAME).$(VERSION).sha1)  $<" | sha1sum --check

### Recipes

$(BUILD_DIR)/$(LD_SCRIPT): $(LD_SCRIPT)
	$(CPP) -P -DBUILD_DIR=$(BUILD_DIR) -o $@ $<

$(TARGET).elf: $(O_FILES) $(BUILD_DIR)/$(LD_SCRIPT)
	@$(LD) $(LDFLAGS) -o $@

$(BUILD_DIR)/%.o: %.bin
	$(LD) -r -b binary -o $@ $<

$(TARGET).bin: $(TARGET).elf
	$(OBJCOPY) $(OBJCOPYFLAGS) -O binary $< $@

$(TARGET).z64: $(TARGET).bin
	@cp $< $@

# combine
$(GAME_DIR)/$(BASENAME).$(VERSION).bin: bin/game.$(VERSION).bin
	cat bin/header.$(VERSION).bin bin/boot.$(VERSION).bin bin/init.$(VERSION).bin bin/game.$(VERSION).bin bin/debugger.$(VERSION).bin > $@

bin/game.$(VERSION).bin: bin/game/rzip/data/0000.bin
	cat bin/game/rzip/code/0*.bin bin/game/rzip/data/0000.bin > $@

bin/game/rzip/data/0000.bin: bin/game.$(VERSION).rzip.bin
	$(PYTHON) tools/n64splat/split.py $< game.$(VERSION).rzip.yaml bin/game --modes bin rzip

bin/game.$(VERSION).rzip.bin: $(BASENAME).$(VERSION).yaml
	$(PYTHON) tools/n64splat/split.py baserom.$(VERSION).z64 $< .

.baserom.$(VERSION).ok: baserom.$(VERSION).z64
	@echo "$$(cat $(BASENAME).$(VERSION).sha1)  $<" | sha1sum --check
	@touch $@

# settings
.PHONY: all clean default
SHELL = /bin/bash -e -o pipefail
