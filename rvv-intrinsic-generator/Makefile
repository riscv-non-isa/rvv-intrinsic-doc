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
# macOS uses BSD sed
ifeq ($(shell uname), Darwin)
	SED_CMD = sed -i ''
else
	SED_CMD = sed -i
endif

replace_float = \
		$(SED_CMD) 's/float16_t/_Float16/g' $(1)/*; \
		$(SED_CMD) 's/float32_t/float/g' $(1)/*; \
		$(SED_CMD) 's/float64_t/double/g' $(1)/*

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
# Script to clang-format the auto-generated adoc files
CLANG_FORMAT_ADOC = clang_format_autogen
# Extra flags specified when calling rvv_intrinsic_gen.main
EXTRA_FLAG :=
# Main output directory is default to auto-generated
OUTPUT_DIR := ../auto-generated
# Types of intrinsics
TYPES = default bf16 vector-crypto
# Derives output directory for each set of intrinsics
# Output directory for non-policy intrinsics
DIR := $(abspath $(OUTPUT_DIR))
DIR_default = $(DIR)
# Output directory for policy intrinsics
POLICY_DIR_default = $(DIR)/policy_funcs
# Output directory for bfloat16 non-policy intrinsics
DIR_bf16 = $(DIR)/bfloat16
# Output directory for bfloat16 policy intrinsics
POLICY_DIR_bf16 = $(DIR_bf16)/policy_funcs
# Output directory for vector-crypto non-policy intrinsics
DIR_vector-crypto = $(DIR)/vector-crypto
# Output directory for vector-crypto policy intrinsics
POLICY_DIR_vector-crypto = $(DIR_vector-crypto)/policy_funcs
# Directory that stores the v0.10 unit tests
LEGACY_API_TESTS_DIR := $(abspath ../legacy-api-unit-tests)
# Derived variable to trigger option --vendor-inst
ifdef VENDOR_INST
TRIGGER_VENDOR_INST := --vendor-inst $(VENDOR_INST)
else
TRIGGER_VENDOR_INST :=
endif
# Derived variable to trigger option --skip-default-inst
ifeq ($(SKIP_DEFAULT_INST), ON)
TRIGGER_SKIP_DEFAULT_INST := --skip-default-inst
else
TRIGGER_SKIP_DEFAULT_INST :=
endif
# Directory that stores the gnu toolchain
GNU_TOOLCHAIN_DIR :=
# Directory that stores the gcc cases
GCC_CASES_DIR := $(GNU_TOOLCHAIN_DIR)/gcc/gcc/testsuite/gcc.target/riscv/rvv/gcc-auto-generated
# Directory that stores the g++ cases
G++_CASES_DIR := $(GNU_TOOLCHAIN_DIR)/gcc/gcc/testsuite/g++.target/riscv/rvv/g++-auto-generated
# Flags for different variants
FLAGS_default =
FLAGS_bf16 = --skip-default-inst --vendor-inst $(RVV_INTRINSIC_GEN_PATH)/bfloat16_inst.py
FLAGS_vector-crypto = --gen-vector-crypto
# Commit header
COMMIT_MSG_PREFIX = [Auto-gen]

###############################################################################
# Functions
###############################################################################
# Generate file $(2) under $(1). The files contains all RVV intrinsic
# function prototypes, all in one file.
# $(1): Output path (relative)
# $(2): Output file name
# $(3): Generator mode
# $(4): Additional flags
define gen_doc
	mkdir -p $(1)
	rm -rf $(1)/$(2)
	$(PY3) -m $(MAIN) --gen $(3) \
		--out $(1)/$(2) $(4) \
		$(TRIGGER_VENDOR_INST) $(TRIGGER_SKIP_DEFAULT_INST)
endef

# Generate grouped files under $(1). Each file contains a group of RVV
# intrinsic prototypes.
# $(1): Output path (relative)
# $(2): Output folder name
# $(3): Generator mode
# $(4): Additional flags
define gen_docs
	mkdir -p $(1)
	rm -rf $(1)/$(2)
	mkdir -p $(1)/$(2)
	$(PY3) -m $(MAIN) --gen $(3) \
		--out $(1)/$(2) $(4) \
		$(TRIGGER_VENDOR_INST) $(TRIGGER_SKIP_DEFAULT_INST)
endef

define gen_doc_rule
$(call gen_doc,$(1),$(2),$(patsubst bf16-%,%,$(patsubst vector-crypto-%,%,$@)),$(3) $(EXTRA_FLAG))
$(call gen_doc,$(4),$(2),$(patsubst bf16-%,%,$(patsubst vector-crypto-%,%,$@)),--has-policy $(3) $(EXTRA_FLAG))
$(call clang_format_adoc, --file, $(1)/$(2))
$(call clang_format_adoc, --file, $(4)/$(2))
endef

define gen_docs_rule
$(call gen_docs,$(1),$(2),$(patsubst bf16-%,%,$(patsubst vector-crypto-%,%,$@)),$(3) $(EXTRA_FLAG))
$(call gen_docs,$(4),$(2),$(patsubst bf16-%,%,$(patsubst vector-crypto-%,%,$@)),--has-policy $(3) $(EXTRA_FLAG))
$(call clang_format_adoc, --folder, $(1)/$(2))
$(call clang_format_adoc, --folder, $(4)/$(2))
endef

define gen_tests
	rm -f $(1)/*.c
	$(PY3) -m $(MAIN) --gen $(2) \
		--out $(1) $(3) \
		$(TRIGGER_VENDOR_INST) $(TRIGGER_SKIP_DEFAULT_INST)
endef

define gen_test_rule
	$(call gen_tests,$(1),$(2),$(3) $(EXTRA_FLAG))
	$(call gen_tests,$(4),$(2),--has-policy $(3) $(EXTRA_FLAG))
	$(if $(findstring --toolchain-type=gnu,$(3)),\
		@echo "Skipping clang-format for GNU toolchain",\
		@echo "Running clang-format for non-GNU toolchain" && clang-format -i $(1)/* $(4)/*)
endef

# Compile all *.c under $(1) with $(2), then pretty-print with testing-report
# $(1): Path to testing folder, containing .c files
# $(2): Path to compiler
define run_tests
	make run-test \
		API_DIR=$(1) \
		API_MAKEFILE=$(abspath ${CURDIR}/Makefile.api) \
		TESTING_REPORT_SCRIPT=$(abspath ${CURDIR}/rvv_intrinsic_gen/testing-report)
		COMPILER=${2}
endef

define clang_format_adoc
	$(PY3) -m $(CLANG_FORMAT_ADOC) $(1) $(2)
endef
###############################################################################
# Basic Targets
###############################################################################
# If VENDOR_GENERATOR_SCRIPT is defined, also trigger it in all.
# NOTE: A possible enhancement to this is allow multiple targets be added here
ifdef VENDOR_GENERATOR_SCRIPT
all: gen-document gen-test gen-compatible-header bf16-all vector-crypto-all vendor-generator
else
all: gen-document gen-test gen-compatible-header bf16-all vector-crypto-all
endif

default-all: gen-document gen-test
bf16-all: gen-bf16-document gen-bf16-test
vector-crypto-all: gen-vector-crypto-document gen-vector-crypto-test

# Document generation targets
gen-document: non-overloaded-doc non-overloaded-docs overloaded-doc overloaded-docs
gen-bf16-document: bf16-non-overloaded-doc bf16-non-overloaded-docs bf16-overloaded-doc bf16-overloaded-docs
gen-vector-crypto-document: vector-crypto-non-overloaded-doc vector-crypto-non-overloaded-docs vector-crypto-overloaded-doc vector-crypto-overloaded-docs

# Test generation targets
gen-test: non-overloaded-test overloaded-test gen-llvm-test gen-gnu-test
gen-bf16-test: bf16-non-overloaded-test bf16-overloaded-test gen-bf16-llvm-test
gen-vector-crypto-test: vector-crypto-non-overloaded-test vector-crypto-overloaded-test gen-vector-crypto-llvm-test

# Toolchain-specific test targets
gen-llvm-test: llvm-non-overloaded-test llvm-overloaded-test
gen-bf16-llvm-test: bf16-llvm-non-overloaded-test bf16-llvm-overloaded-test
gen-vector-crypto-llvm-test: vector-crypto-llvm-non-overloaded-test vector-crypto-llvm-overloaded-test
gen-gnu-test: gnu-overloaded-test gnu-non-overloaded-test

# Generate compatible headers
gen-compatible-header: non-policy-compatible-header policy-compatible-header non-policy-overloaded-compatible-header policy-overloaded-compatible-header

# Document generation rules - default variant
non-overloaded-doc:
	$(call gen_doc_rule,$(DIR_default),intrinsic_funcs.adoc,$(FLAGS_default),$(POLICY_DIR_default))

non-overloaded-docs:
	$(call gen_docs_rule,$(DIR_default),intrinsic_funcs,$(FLAGS_default),$(POLICY_DIR_default))

overloaded-doc:
	$(call gen_doc_rule,$(DIR_default),overloaded_intrinsic_funcs.adoc,$(FLAGS_default),$(POLICY_DIR_default))

overloaded-docs:
	$(call gen_docs_rule,$(DIR_default),overloaded_intrinsic_funcs,$(FLAGS_default),$(POLICY_DIR_default))

# Document generation rules - bf16 variant
bf16-non-overloaded-doc:
	$(call gen_doc_rule,$(DIR_bf16),intrinsic_funcs.adoc,$(FLAGS_bf16),$(POLICY_DIR_bf16))

bf16-non-overloaded-docs:
	$(call gen_docs_rule,$(DIR_bf16),intrinsic_funcs,$(FLAGS_bf16),$(POLICY_DIR_bf16))

bf16-overloaded-doc:
	$(call gen_doc_rule,$(DIR_bf16),overloaded_intrinsic_funcs.adoc,$(FLAGS_bf16),$(POLICY_DIR_bf16))

bf16-overloaded-docs:
	$(call gen_docs_rule,$(DIR_bf16),overloaded_intrinsic_funcs,$(FLAGS_bf16),$(POLICY_DIR_bf16))

# Document generation rules - vector-crypto variant
vector-crypto-non-overloaded-doc:
	$(call gen_doc_rule,$(DIR_vector-crypto),intrinsic_funcs.adoc,$(FLAGS_vector-crypto),$(POLICY_DIR_vector-crypto))

vector-crypto-non-overloaded-docs:
	$(call gen_docs_rule,$(DIR_vector-crypto),intrinsic_funcs,$(FLAGS_vector-crypto),$(POLICY_DIR_vector-crypto))

vector-crypto-overloaded-doc:
	$(call gen_doc_rule,$(DIR_vector-crypto),overloaded_intrinsic_funcs.adoc,$(FLAGS_vector-crypto),$(POLICY_DIR_vector-crypto))

vector-crypto-overloaded-docs:
	$(call gen_docs_rule,$(DIR_vector-crypto),overloaded_intrinsic_funcs,$(FLAGS_vector-crypto),$(POLICY_DIR_vector-crypto))

# Test generation rules - default variant with different toolchains
non-overloaded-test:
	$(call gen_test_rule,$(DIR_default)/api-testing,non-overloaded-test,--toolchain-type=unknown $(FLAGS_default),$(POLICY_DIR_default)/api-testing)

overloaded-test:
	$(call gen_test_rule,$(DIR_default)/overloaded-api-testing,overloaded-test,--toolchain-type=unknown $(FLAGS_default),$(POLICY_DIR_default)/overloaded-api-testing)

llvm-non-overloaded-test:
	$(call gen_test_rule,$(DIR_default)/llvm-api-tests,non-overloaded-test,--toolchain-type=llvm $(FLAGS_default),$(POLICY_DIR_default)/llvm-api-tests)

llvm-overloaded-test:
	$(call gen_test_rule,$(DIR_default)/llvm-overloaded-tests,overloaded-test,--toolchain-type=llvm $(FLAGS_default),$(POLICY_DIR_default)/llvm-overloaded-tests)

gnu-non-overloaded-test:
	$(call gen_test_rule,$(DIR_default)/gnu-api-tests,non-overloaded-test,--toolchain-type=gnu $(FLAGS_default),$(POLICY_DIR_default)/gnu-api-tests)

gnu-overloaded-test:
	$(call gen_test_rule,$(DIR_default)/gnu-overloaded-tests,overloaded-test,--toolchain-type=gnu $(FLAGS_default),$(POLICY_DIR_default)/gnu-overloaded-tests)

# Test generation rules - bf16 variant with different toolchains
bf16-non-overloaded-test:
	$(call gen_test_rule,$(DIR_bf16)/api-testing,non-overloaded-test,--toolchain-type=unknown $(FLAGS_bf16),$(POLICY_DIR_bf16)/api-testing)

bf16-overloaded-test:
	$(call gen_test_rule,$(DIR_bf16)/overloaded-api-testing,overloaded-test,--toolchain-type=unknown $(FLAGS_bf16),$(POLICY_DIR_bf16)/overloaded-api-testing)

bf16-llvm-non-overloaded-test:
	$(call gen_test_rule,$(DIR_bf16)/llvm-api-tests,non-overloaded-test,--toolchain-type=llvm $(FLAGS_bf16),$(POLICY_DIR_bf16)/llvm-api-tests)

bf16-llvm-overloaded-test:
	$(call gen_test_rule,$(DIR_bf16)/llvm-overloaded-tests,overloaded-test,--toolchain-type=llvm $(FLAGS_bf16),$(POLICY_DIR_bf16)/llvm-overloaded-tests)

# Test generation rules - vector-crypto variant with different toolchains
vector-crypto-non-overloaded-test:
	$(call gen_test_rule,$(DIR_vector-crypto)/api-testing,non-overloaded-test,--toolchain-type=unknown $(FLAGS_vector-crypto),$(POLICY_DIR_vector-crypto)/api-testing)

vector-crypto-overloaded-test:
	$(call gen_test_rule,$(DIR_vector-crypto)/overloaded-api-testing,overloaded-test,--toolchain-type=unknown $(FLAGS_vector-crypto),$(POLICY_DIR_vector-crypto)/overloaded-api-testing)

vector-crypto-llvm-non-overloaded-test:
	$(call gen_test_rule,$(DIR_vector-crypto)/llvm-api-tests,non-overloaded-test,--toolchain-type=llvm $(FLAGS_vector-crypto),$(POLICY_DIR_vector-crypto)/llvm-api-tests)

vector-crypto-llvm-overloaded-test:
	$(call gen_test_rule,$(DIR_vector-crypto)/llvm-overloaded-tests,overloaded-test,--toolchain-type=llvm $(FLAGS_vector-crypto),$(POLICY_DIR_vector-crypto)/llvm-overloaded-tests)

###############################################################################

# Generate the adaptor header for v0.10
non-policy-compatible-header:
	$(call gen_doc,$(DIR)/rvv-v0p10-compatible-headers,non-policy.h,non-overloaded-compatible-header,$(EXTRA_FLAG))
	clang-format -i $(DIR)/rvv-v0p10-compatible-headers/non-policy.h

policy-compatible-header:
	$(call gen_doc,$(DIR)/rvv-v0p10-compatible-headers,policy.h,non-overloaded-compatible-header,--has-policy $(EXTRA_FLAG))
	clang-format -i $(DIR)/rvv-v0p10-compatible-headers/policy.h

non-policy-overloaded-compatible-header:
	$(call gen_doc,$(DIR)/rvv-v0p10-compatible-headers,overloaded-non-policy.h,overloaded-compatible-header,$(EXTRA_FLAG))
	clang-format -i $(DIR)/rvv-v0p10-compatible-headers/overloaded-non-policy.h

policy-overloaded-compatible-header:
	$(call gen_doc,$(DIR)/rvv-v0p10-compatible-headers,overloaded-policy.h,overloaded-compatible-header,--has-policy $(EXTRA_FLAG))
	clang-format -i $(DIR)/rvv-v0p10-compatible-headers/overloaded-policy.h

###############################################################################
# Auto-generated Document / Test Targets
###############################################################################
# This is essentially the same with 'make all' as ${OUTPUT_DIR} is default to
# auto-generated/, removes it first.
gen-all:
	rm -rf ${DIR}
	make all OUTPUT_DIR=${OUTPUT_DIR}

###############################################################################
# Auto-commit re-generated Document / Test Targets
###############################################################################
git-commit-all: git-commit-default-all
git-commit-autogen-doc: git-commit-autogen-default-doc
git-commit-autogen-test: git-commit-autogen-default-test

# Generic update and commit target for docs
git-commit-autogen-%-doc:
	$(eval TYPE=$(patsubst git-commit-autogen-%-doc,%,$@))
	$(eval DIR_VAR=$(if $(filter default,$(TYPE)),DIR,DIR_$(TYPE)))
	$(eval GEN_CMD=$(if $(filter default,$(TYPE)),gen-document,gen-$(TYPE)-document))
	$(eval TYPE_DESC=$(if $(filter default,$(TYPE)),,$(TYPE) ))
	make $(GEN_CMD) OUTPUT_DIR=${OUTPUT_DIR}
	git add ${$(DIR_VAR)}/*
	git commit -m "$(COMMIT_MSG_PREFIX) Update $(TYPE_DESC)documents under ${OUTPUT_DIR}. (make $@)"

# Generic update and commit target for tests
git-commit-autogen-%-test:
	$(eval TYPE=$(patsubst git-commit-autogen-%-test,%,$@))
	$(eval DIR_VAR=$(if $(filter default,$(TYPE)),DIR,DIR_$(TYPE)))
	$(eval GEN_CMD=$(if $(filter default,$(TYPE)),gen-test,gen-$(TYPE)-test))
	$(eval TYPE_DESC=$(if $(filter default,$(TYPE)),,$(TYPE) ))
	make $(GEN_CMD)
	git add ${$(DIR_VAR)}/*
	git commit -m "$(COMMIT_MSG_PREFIX) Update $(TYPE_DESC)tests under ${OUTPUT_DIR}. (make $@)"

# Update and commit both docs and tests for each type
git-commit-%-all:
	$(eval TYPE=$(patsubst git-commit-%-all,%,$@))
	$(eval TYPE_PREFIX=$(if $(filter default,$(TYPE)),,$(TYPE)-))
	make git-commit-autogen-$(TYPE_PREFIX)doc OUTPUT_DIR=${OUTPUT_DIR}
	make git-commit-autogen-$(TYPE_PREFIX)test OUTPUT_DIR=${OUTPUT_DIR}

# Update and commit compatible headers
git-commit-autogen-compatible-header:
	make gen-compatible-header
	git add $(DIR)/*
	git commit -m "$(COMMIT_MSG_PREFIX) Update compatible header under ${OUTPUT_DIR}. (make $@)"

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
	$(call check_defined, COMPILER, compiler (clang/gcc))
	$(call run_tests,${DIR}/api-testing,${COMPILER})

# Test auto-generated/overloaded-api-testing with testing-report
run-overloaded-api-testing:
	$(call check_defined, COMPILER, compiler (clang/gcc))
	$(call run_tests,${DIR}/overloaded-api-testing,${COMPILER})

# Test auto-generated/api-testing with testing-report
run-policy-api-testing:
	$(call check_defined, COMPILER, compiler (clang/gcc))
	$(call run_tests,${DIR}/policy_funcs/api-testing,${COMPILER})

# Test auto-generated/overloaded-api-testing with testing-report
run-policy-overloaded-api-testing:
	$(call check_defined, COMPILER, compiler (clang/gcc))
	$(call run_tests,${DIR}/policy_funcs/overloaded-api-testing,${COMPILER})

# Test compatible header with the v0.10 unit tests for the non-policy intrinsics
run-non-policy-compatible-api-testing:
	$(call check_defined, COMPILER, compiler (clang/gcc))
	cp -r $(DIR)/rvv-v0p10-compatible-headers \
		$(LEGACY_API_TESTS_DIR)/non-policy-non-overloaded-api-testing
	$(call run_tests,$(LEGACY_API_TESTS_DIR)/non-policy-non-overloaded-api-testing,${COMPILER})

run-policy-compatible-api-testing:
	$(call check_defined, COMPILER, compiler (clang/gcc))
	cp -r $(DIR)/rvv-v0p10-compatible-headers \
		$(LEGACY_API_TESTS_DIR)/policy-non-overloaded-api-testing
	$(call run_tests,$(LEGACY_API_TESTS_DIR)/policy-non-overloaded-api-testing,${COMPILER})

run-non-policy-overloaded-compatible-api-testing:
	$(call check_defined, COMPILER, compiler (clang/gcc))
	cp -r $(DIR)/rvv-v0p10-compatible-headers \
		$(LEGACY_API_TESTS_DIR)/non-policy-overloaded-api-testing
	$(call run_tests,$(LEGACY_API_TESTS_DIR)/non-policy-overloaded-api-testing,${COMPILER})

run-policy-overloaded-compatible-api-testing:
	$(call check_defined, COMPILER, compiler (clang/gcc))
	cp -r $(DIR)/rvv-v0p10-compatible-headers \
		$(LEGACY_API_TESTS_DIR)/policy-overloaded-api-testing
	$(call run_tests,$(LEGACY_API_TESTS_DIR)/policy-overloaded-api-testing,${COMPILER})

run-bfloat16-api-testing:
	$(call check_defined, COMPILER, compiler (clang/gcc))
	$(call run_tests,${DIR}/bfloat16/api-testing,${COMPILER})

run-bfloat16-overloaded-api-testing:
	$(call check_defined, COMPILER, compiler (clang/gcc))
	$(call run_tests,${DIR}/bfloat16/overloaded-api-testing,${COMPILER})

run-bfloat16-policy-api-testing:
	$(call check_defined, COMPILER, compiler (clang/gcc))
	$(call run_tests,${DIR}/bfloat16/policy_funcs/api-testing,${COMPILER})

run-bfloat16-policy-overloaded-api-testing:
	$(call check_defined, COMPILER, compiler (clang/gcc))
	$(call run_tests,${DIR}/bfloat16/policy_funcs/overloaded-api-testing,${COMPILER})

run-vector-crypto-api-testing:
	$(call check_defined, COMPILER, compiler (clang/gcc))
	$(call run_tests,${DIR}/vector-crypto/api-testing,${COMPILER})

run-vector-crypto-overloaded-api-testing:
	$(call check_defined, COMPILER, compiler (clang/gcc))
	$(call run_tests,${DIR}/vector-crypto/overloaded-api-testing,${COMPILER})

run-vector-crypto-policy-api-testing:
	$(call check_defined, COMPILER, compiler (clang/gcc))
	$(call run_tests,${DIR}/vector-crypto/policy_funcs/api-testing,${COMPILER})

run-vector-crypto-policy-overloaded-api-testing:
	$(call check_defined, COMPILER, compiler (clang/gcc))
	$(call run_tests,${DIR}/vector-crypto/policy_funcs/overloaded-api-testing,${COMPILER})

# A parameterized target to run testing through testing-report.
# Makes target 'test' of ${API_MAKEFILE} with ${TESTING_REPORT_SCRIPT} under
# ${API_DIR}. Requires ${API_DIR}, ${API_MAKEFILE}, ${TESTING_REPORT_SCRIPT}
# to be provided.
run-test:
	$(call check_defined, API_DIR, directory containing the C source file tests)
	$(call check_defined, API_MAKEFILE, makefile for testing the files in API_DIR)
	$(call check_defined, TESTING_REPORT_SCRIPT, script to generate testing report)
	$(call check_defined, COMPILER, compiler (clang/gcc))

	if [ ! -d "${API_DIR}" ]; then \
		echo "Directory '${API_DIR}' does not exist"; \
	fi
	if [ ! -f "${API_MAKEFILE}" ]; then \
		echo "File '${API_MAKEFILE}' does not exist"; \
	fi
	if [ ! -f "${TESTING_REPORT_SCRIPT}" ]; then \
		echo "File '${TESTING_REPORT_SCRIPT}' does not exist"; \
	fi
	make clean -C ${API_DIR} \
		-f ${API_MAKEFILE}
	make -C ${API_DIR} \
		BASE_DIR=${API_DIR} \
		TESTING_REPORT_SCRIPT=${TESTING_REPORT_SCRIPT} \
		CC=${COMPILER} \
		-f ${API_MAKEFILE} -j${nproc}

# Test gnu auto generaged overloaded-api-testing with testing-report
report-gnu:
	cd ${GNU_TOOLCHAIN_DIR} && ./configure --prefix="${GNU_TOOLCHAIN_DIR}/install" \
						--with-arch=rv64gcv \
						--with-abi=lp64d \
						--with-isa-spec=20191213 \
						--with-sim=qemu
	cd ${GNU_TOOLCHAIN_DIR} && make distclean
	cd ${GNU_TOOLCHAIN_DIR} && make -j 8
	mkdir -p $(GCC_CASES_DIR)/gnu-api-tests
	mkdir -p $(GCC_CASES_DIR)/policy_funcs/gnu-api-tests
	mkdir -p $(GCC_CASES_DIR)/gnu-overloaded-tests
	mkdir -p $(GCC_CASES_DIR)/policy_funcs/gnu-overloaded-tests
	cp $(DIR)/../gcc-auto-generated.exp $(GCC_CASES_DIR)/auto-generated.exp
	cp -r $(DIR)/gnu-api-tests/* $(GCC_CASES_DIR)/gnu-api-tests/
	cp -r $(DIR)/policy_funcs/gnu-api-tests/* $(GCC_CASES_DIR)/policy_funcs/gnu-api-tests/
	cp -r $(DIR)/gnu-overloaded-tests/* $(GCC_CASES_DIR)/gnu-overloaded-tests/
	cp -r $(DIR)/policy_funcs/gnu-overloaded-tests/* $(GCC_CASES_DIR)/policy_funcs/gnu-overloaded-tests/
	mkdir -p $(G++_CASES_DIR)/gnu-api-tests
	mkdir -p $(G++_CASES_DIR)/policy_funcs/gnu-api-tests
	mkdir -p $(G++_CASES_DIR)/gnu-overloaded-tests
	mkdir -p $(G++_CASES_DIR)/policy_funcs/gnu-overloaded-tests
	cp $(DIR)/../g++-auto-generated.exp $(G++_CASES_DIR)/auto-generated.exp
	cp -r $(DIR)/gnu-api-tests/* $(G++_CASES_DIR)/gnu-api-tests/
	cp -r $(DIR)/policy_funcs/gnu-api-tests/* $(G++_CASES_DIR)/policy_funcs/gnu-api-tests/
	cp -r $(DIR)/gnu-overloaded-tests/* $(G++_CASES_DIR)/gnu-overloaded-tests/
	cp -r $(DIR)/policy_funcs/gnu-overloaded-tests/* $(G++_CASES_DIR)/policy_funcs/gnu-overloaded-tests/
	cd ${GNU_TOOLCHAIN_DIR} && make report -j 8 RUNTESTFLAGS="auto-generated.exp"

###############################################################################
# Custom Vendor Generator Target
###############################################################################
VENDOR_GENERATOR_OUTPUT ?=
vendor-generator:
	mkdir -p $(DIR)
	rm -rf $(DIR)/$(VENDOR_GENERATOR_OUTPUT)
	$(PY3) -m $(MAIN) --out $(DIR)/$(VENDOR_GENERATOR_OUTPUT) \
	$(TRIGGER_VENDOR_INST) $(TRIGGER_SKIP_DEFAULT_INST) \
	--vendor-generator-script $(VENDOR_GENERATOR_SCRIPT) \
	--vendor-generator-name $(VENDOR_GENERATOR_NAME)

###############################################################################
# Formatting Targets
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

###############################################################################
# Update test case targets
###############################################################################
# Update LLVM clang/test for the RVV intrinsics
update-clang-test:
	$(call check_defined, CLANG_TEST_DIR, path to llvm-project/clang/test)
	mkdir -p $(CLANG_TEST_DIR)/CodeGen/RISCV/rvv-intrinsics-autogenerated/non-policy/non-overloaded
	mkdir -p $(CLANG_TEST_DIR)/CodeGen/RISCV/rvv-intrinsics-autogenerated/non-policy/overloaded
	mkdir -p $(CLANG_TEST_DIR)/CodeGen/RISCV/rvv-intrinsics-autogenerated/policy/non-overloaded
	mkdir -p $(CLANG_TEST_DIR)/CodeGen/RISCV/rvv-intrinsics-autogenerated/policy/overloaded

	rm -rf $(CLANG_TEST_DIR)/CodeGen/RISCV/rvv-intrinsics-autogenerated/non-policy/non-overloaded/*.c
	rm -rf $(CLANG_TEST_DIR)/CodeGen/RISCV/rvv-intrinsics-autogenerated/non-policy/overloaded/*.c
	rm -rf $(CLANG_TEST_DIR)/CodeGen/RISCV/rvv-intrinsics-autogenerated/policy/non-overloaded/*.c
	rm -rf $(CLANG_TEST_DIR)/CodeGen/RISCV/rvv-intrinsics-autogenerated/policy/overloaded/*.c

	cp $(OUTPUT_DIR)/llvm-api-tests/*.c $(CLANG_TEST_DIR)/CodeGen/RISCV/rvv-intrinsics-autogenerated/non-policy/non-overloaded/
	cp $(OUTPUT_DIR)/llvm-overloaded-tests/*.c $(CLANG_TEST_DIR)/CodeGen/RISCV/rvv-intrinsics-autogenerated/non-policy/overloaded/
	cp $(OUTPUT_DIR)/policy_funcs/llvm-api-tests/*.c $(CLANG_TEST_DIR)/CodeGen/RISCV/rvv-intrinsics-autogenerated/policy/non-overloaded/
	cp $(OUTPUT_DIR)/policy_funcs/llvm-overloaded-tests/*.c $(CLANG_TEST_DIR)/CodeGen/RISCV/rvv-intrinsics-autogenerated/policy/overloaded/

	cp $(OUTPUT_DIR)/bfloat16/llvm-api-tests/*.c $(CLANG_TEST_DIR)/CodeGen/RISCV/rvv-intrinsics-autogenerated/non-policy/non-overloaded/bfloat16/
	cp $(OUTPUT_DIR)/bfloat16/llvm-overloaded-tests/*.c $(CLANG_TEST_DIR)/CodeGen/RISCV/rvv-intrinsics-autogenerated/non-policy/overloaded/bfloat16/
	cp $(OUTPUT_DIR)/bfloat16/policy_funcs/llvm-api-tests/*.c $(CLANG_TEST_DIR)/CodeGen/RISCV/rvv-intrinsics-autogenerated/policy/non-overloaded/bfloat16/
	cp $(OUTPUT_DIR)/bfloat16/policy_funcs/llvm-overloaded-tests/*.c $(CLANG_TEST_DIR)/CodeGen/RISCV/rvv-intrinsics-autogenerated/policy/overloaded/bfloat16/

	cp $(OUTPUT_DIR)/vector-crypto/llvm-api-tests/*.c $(CLANG_TEST_DIR)/CodeGen/RISCV/rvv-intrinsics-autogenerated/non-policy/non-overloaded/
	cp $(OUTPUT_DIR)/vector-crypto/llvm-overloaded-tests/*.c $(CLANG_TEST_DIR)/CodeGen/RISCV/rvv-intrinsics-autogenerated/non-policy/overloaded/
	cp $(OUTPUT_DIR)/vector-crypto/policy_funcs/llvm-api-tests/*.c $(CLANG_TEST_DIR)/CodeGen/RISCV/rvv-intrinsics-autogenerated/policy/non-overloaded/
	cp $(OUTPUT_DIR)/vector-crypto/policy_funcs/llvm-overloaded-tests/*.c $(CLANG_TEST_DIR)/CodeGen/RISCV/rvv-intrinsics-autogenerated/policy/overloaded/
