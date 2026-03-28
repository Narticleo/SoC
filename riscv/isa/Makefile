#=======================================================================
# Makefile for riscv-tests/isa
#-----------------------------------------------------------------------

XLEN ?= 64

src_dir := .

include $(src_dir)/rv32ui/Makefrag
include $(src_dir)/rv32um/Makefrag

default: all

#--------------------------------------------------------------------
# Build rules
#--------------------------------------------------------------------

RISCV_PREFIX ?= riscv$(XLEN)-unknown-elf-
RISCV_GCC ?= $(RISCV_PREFIX)gcc
RISCV_GCC_OPTS ?= -static -mcmodel=medany -fvisibility=hidden -nostdlib -nostartfiles
RISCV_OBJDUMP ?= $(RISCV_PREFIX)objdump --disassemble-all --disassemble-zeroes --section=.text --section=.text.startup --section=.text.init --section=.data
RISCV_OBJCOPY ?= $(RISCV_PREFIX)objcopy 

vpath %.S $(src_dir)

#------------------------------------------------------------
# 🔥 建立目錄規則
generated:
	mkdir -p generated

#------------------------------------------------------------
# Build assembly tests

%.dump: %
	$(RISCV_OBJDUMP) generated/$< > generated/$@
	$(RISCV_OBJCOPY) -O binary generated/$< generated/$<.bin

define compile_template

$$($(1)_p_tests): $(1)-p-%: $(1)/%.S | generated
	$$(RISCV_GCC) $(2) $$(RISCV_GCC_OPTS) -I./env/p -I./macros/scalar -T./env/p/link.ld $$< -o generated/$$@
$(1)_tests += $$($(1)_p_tests)

$(1)_tests_dump = $$(addsuffix .dump, $$($(1)_tests))

$(1): $$($(1)_tests_dump)

.PHONY: $(1)

tests += $$($(1)_tests)

endef

$(eval $(call compile_template,rv32ui,-march=rv32imzicsr -mabi=ilp32))
$(eval $(call compile_template,rv32um,-march=rv32imzicsr -mabi=ilp32))

tests_dump = $(addsuffix .dump, $(tests))

#------------------------------------------------------------
# 🔥 修改 `all` 目標，確保生成目錄存在
all: generated $(tests_dump)

#------------------------------------------------------------
# Clean up

clean:
	rm -rf generated/*
