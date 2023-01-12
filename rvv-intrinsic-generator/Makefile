###############################################################################
# Copyright 2022 SiFive Inc
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
###############################################################################

###############################################################################
# Utilities
###############################################################################
# Check that given variables are set and all have non-empty values,
# die with an error otherwise.
#
# Params:
# 1. Variable name(s) to test.
# 2. (optional) Error message to print.
check_defined = \
		$(strip $(foreach 1,$1, \
				$(call __check_defined,$1,$(strip $(value 2)))))
__check_defined = \
		$(if $(value $1),, \
			$(error Undefined $1$(if $2, ($2))))

# Replace softfloat float-point types with LLVM compatible floating-point types
replace_float = \
		sed -i 's/float16_t/_Float16/g' $(1)/*; \
		sed -i 's/float32_t/float/g' $(1)/*; \
		sed -i 's/float64_t/double/g' $(1)/*

###############################################################################
# Variables
###############################################################################
# Path to the rvv_intrinsic_gen folder
RVV_INTRINSIC_GEN_PATH := $(CURDIR)/rvv_intrinsic_gen
# Vendor specific folder
VENDOR_PATH ?=
# Absolute vendor path
ABS_VENDOR_PATH := $(abspath $(VENDOR_PATH))
# Python paths for module import
PYTHONPATHS = $(RVV_INTRINSIC_GEN_PATH):$(ABS_VENDOR_PATH)
# Requires Python3.6 or higher
PY3 := PYTHONPATH=$$PYTHONPATH:$(PYTHONPATHS) python3
# Main entry script of the generator
MAIN := rvv_intrinsic_gen.main
# Main output directory is default to auto-generated
OUTPUT_DIR := ../auto-generated
# Derives output directory for each set of intrinsics
# Output directory for non-policy intrinsics
DIR := $(abspath $(OUTPUT_DIR))
# Output directory for policy intrinsics
POLICY_DIR := $(DIR)/policy_funcs
# Derived variable to trigger option --vendor-inst
ifdef VENDOR_INST
TRIGGER_VENDOR_INST := --vendor-inst $(VENDOR_INST)
else
TRIGGER_VENDOR_INST :=
endif

###############################################################################
# Functions
###############################################################################
# Generate file $(2).md under $(1). The files contains all RVV intrinsic
# function prototypes, all in one file.
# $(1): Output path (relative)
# $(2): Output file name
# $(3): Generator mode
# $(4): Additional flags
define gen_doc
	mkdir -p $(1)
	rm -rf $(1)/$(2).md
	$(PY3) -m $(MAIN) --gen $(3) --out $(1)/$(2).md $(4) $(TRIGGER_VENDOR_INST)
endef

# Generate grouped files under $(1). Each file contains a group of RVV
# intrinsic prototypes.
# $(1): Output path (relative)
# $(2): Output folder name
# $(3): Generator mode
# $(4): Additional flags
define gen_docs
	mkdir -p $(1)
	rm $(1)/$(2) -rf
	mkdir -p $(1)/$(2)
	$(PY3) -m $(MAIN) --gen $(3) --out $(1)/$(2) $(4) $(TRIGGER_VENDOR_INST)
endef

define gen_tests
	rm $(1)/*.c -f
	$(PY3) -m $(MAIN) --gen $(2) --out $(1) $(3) $(TRIGGER_VENDOR_INST)
endef

###############################################################################
# Basic Targets
###############################################################################
# If VENDOR_GENERATOR_SCRIPT is defined, also trigger it in all.
# NOTE: A possible enhancement to this is allow multiple targets be added here
ifdef VENDOR_GENERATOR_SCRIPT
all: gen-document gen-test vendor-generator
else
all: gen-document gen-test
endif

gen-document: non-overloaded-doc non-overloaded-docs overloaded-doc overloaded-docs
gen-test: non-overloaded-test overloaded-test llvm-non-overloaded-test llvm-overloaded-test

# Generate all-in-one document for non-overloaded intrinsics
non-overloaded-doc:
	$(call gen_doc,$(DIR),intrinsic_funcs,$@,)
	$(call gen_doc,$(POLICY_DIR),intrinsic_funcs,$@,--has-policy)

# Generate grouped documents for non-overloaded intrinsics
non-overloaded-docs:
	$(call gen_docs,$(DIR),intrinsic_funcs,$@,)
	$(call gen_docs,$(POLICY_DIR),intrinsic_funcs,$@,--has-policy)

# Generate all-in-one document for overloaded intrinsics
overloaded-doc:
	$(call gen_doc,$(DIR),overloaded_intrinsic_funcs,$@,)
	$(call gen_doc,$(POLICY_DIR),overloaded_intrinsic_funcs,$@,--has-policy)

# Generate grouped documents for overloaded intrinsics
overloaded-docs:
	$(call gen_docs,$(DIR),overloaded_intrinsic_funcs,$@,)
	$(call gen_docs,$(POLICY_DIR),overloaded_intrinsic_funcs,$@,--has-policy)

# Generate non-overloaded intrinsic testing C source files
non-overloaded-test:
	$(call gen_tests,$(DIR)/api-testing,non-overloaded-test,)

# Generate overloaded intrinsic testing C source files
overloaded-test:
	$(call gen_tests,$(DIR)/overloaded-api-testing,overloaded-test,)

# Generate non-overloaded intrinsic testing C source files
llvm-non-overloaded-test:
	$(call gen_tests,$(DIR)/llvm-api-tests,non-overloaded-test,--llvm)
	$(call gen_tests,$(POLICY_DIR)/llvm-api-tests,non-overloaded-test,--llvm --has-policy)
	$(call replace_float, $(DIR)/llvm-api-tests)
	$(call replace_float, $(POLICY_DIR)/llvm-api-tests)

# Generate overloaded intrinsic testing C source files
llvm-overloaded-test:
	$(call gen_tests,$(DIR)/llvm-overloaded-tests,overloaded-test,--llvm)
	$(call gen_tests,$(POLICY_DIR)/llvm-overloaded-tests,overloaded-test,--llvm --has-policy)
	$(call replace_float, $(DIR)/llvm-overloaded-tests)
	$(call replace_float, $(POLICY_DIR)/llvm-overloaded-tests)

###############################################################################
# Auto-generated Document / Test Targets
###############################################################################
# This is essentially the same with 'make all' as ${OUTPUT_DIR} is default to
# auto-generated/, removes it first.
gen-all:
	rm -rf ${DIR}
	make all OUTPUT_DIR=${OUTPUT_DIR}

# Update and commit all files under auto-generated
git-commit-all:
	make git-commit-autogen-doc OUTPUT_DIR=${OUTPUT_DIR}
	make git-commit-autogen-test OUTPUT_DIR=${OUTPUT_DIR}

# Update and commit all documents under auto-generated
git-commit-autogen-doc:
	make gen-document OUTPUT_DIR=${OUTPUT_DIR}
	git add ${DIR}/*
	git commit -m "[Auto-gen] Update documents under ${OUTPUT_DIR}. (make git-commit-autogen-doc)"

# Update and commit all testing C source files under auto-generated
git-commit-autogen-test:
	make gen-test
	git add ${DIR}/*
	git commit -m "[Auto-gen] Update tests under ${OUTPUT_DIR}. (make git-commit-autogen-test)"

# Runs diff with auto-generated, requires ${TEST_DIR} to be provided.
GOLDEN_DIR = ${DIR}
TEST_DIR = .tmp
diff-autogen:
	$(call check_defined, TEST_DIR, output directory for documents/tests generation)
	rm -rf ${abspath ${TEST_DIR}}
	make OUTPUT_DIR=${TEST_DIR}
	diff -qr ${TEST_DIR} ${GOLDEN_DIR}

###############################################################################
# Testing Targets
###############################################################################
# Test auto-generated/api-testing with testing-report
run-api-testing:
	make run-test \
		API_DIR=${DIR}/api-testing \
		API_MAKEFILE=Makefile.api \
		TESTING_REPORT_SCRIPT=testing-report

# Test auto-generated/overloaded-api-testing with testing-report
run-overloaded-api-testing:
	make run-test \
		API_DIR=${DIR}/overloaded-api-testing \
		API_MAKEFILE=Makefile.api \
		TESTING_REPORT_SCRIPT=testing-report

# A parameterized target to run testing through testing-report.
# Makes target 'test' of ${API_MAKEFILE} with ${TESTING_REPORT_SCRIPT} under
# ${API_DIR}. Requires ${API_DIR}, ${API_MAKEFILE}, ${TESTING_REPORT_SCRIPT}
# to be provided.
run-test:
	$(call check_defined, API_DIR, directory containing the C source file tests)
	$(call check_defined, API_MAKEFILE, makefile for testing the files in API_DIR)
	$(call check_defined, TESTING_REPORT_SCRIPT, script to generate testing report)

	if [ ! -d "${CURDIR}/${API_DIR}" ]; then \
		echo "Directory '${CURDIR}/${API_DIR}' does not exist"; \
	fi
	if [ ! -f "${CURDIR}/${API_MAKEFILE}" ]; then \
		echo "File '${CURDIR}/${API_MAKEFILE}' does not exist"; \
	fi
	if [ ! -f "${CURDIR}/${TESTING_REPORT_SCRIPT}" ]; then \
		echo "File '${CURDIR}/${TESTING_REPORT_SCRIPT}' does not exist"; \
	fi
	make -C ${CURDIR}/${API_DIR} clean -f ${CURDIR}/${API_MAKEFILE}
	make -C ${CURDIR}/${API_DIR} \
		BASE_DIR=${CURDIR}/${API_DIR} \
		TESTING_REPORT_SCRIPT=${CURDIR}/${TESTING_REPORT_SCRIPT} \
		CC=/sifive/tools/riscv-tools/riscv64-unknown-elf-toolsuite-13.0.0-2022.04.2-x86_64-linux-redhat8/bin/riscv64-unknown-elf-clang \
		-f ${CURDIR}/${API_MAKEFILE}

###############################################################################
# Custom Vendor Generator Target
###############################################################################
VENDOR_GENERATOR_OUTPUT ?=
vendor-generator:
	$(PY3) -m $(MAIN) --out $(DIR)/$(VENDOR_GENERATOR_OUTPUT) \
	$(TRIGGER_VENDOR_INST) \
	--vendor-generator-script $(VENDOR_GENERATOR_SCRIPT) \
	--vendor-generator-name $(VENDOR_GENERATOR_NAME)

###############################################################################
# Formating Targets
###############################################################################
# Run pylint for all Python scripts
lint:
	pylint --rcfile .pylintrc --recursive yes rvv_intrinsic_gen/*.py
	pylint --rcfile .pylintrc --recursive yes rvv_intrinsic_gen/*/*.py

# Run yapf for all Python scripts
yapf-format:
	yapf --in-place --recursive rvv_intrinsic_gen/*.py
	yapf --in-place --recursive rvv_intrinsic_gen/*/*.py

yapf-check:
	yapf --quiet --recursive rvv_intrinsic_gen/*.py
	yapf --quiet --recursive rvv_intrinsic_gen/*/*.py

# Run pytype for all Python scripts
type-check:
	pytype . --pythonpath $(PYTHONPATHS)
