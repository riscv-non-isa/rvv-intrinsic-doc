# Makefile for RISC-V Doc Template
#
# This work is licensed under the Creative Commons Attribution-ShareAlike 4.0
# International License. To view a copy of this license, visit
# http://creativecommons.org/licenses/by-sa/4.0/ or send a letter to
# Creative Commons, PO Box 1866, Mountain View, CA 94042, USA.
#
# SPDX-License-Identifier: CC-BY-SA-4.0
#
# Description:
# 
# This Makefile is designed to automate the process of building and packaging 
# the Doc Template for RISC-V Extensions.

DATE ?= $(shell date +%Y-%m-%d)
VERSION ?= v0.0.0
REVMARK ?= Draft
DOCKER_RUN := docker run --rm -v ${PWD}:/build -w /build \
riscvintl/riscv-docs-base-container-image:latest

HEADER_SOURCE := header.adoc
PDF_RESULT := v-intrinsic-spec.pdf

ASCIIDOCTOR_PDF := asciidoctor-pdf
OPTIONS := --trace \
           -a compress \
           -a mathematical-format=svg \
           -a revnumber=${VERSION} \
           -a revremark=${REVMARK} \
           -a revdate=${DATE} \
           -a pdf-fontsdir=docs-resources/fonts \
           -a pdf-style=docs-resources/themes/riscv-pdf.yml \
           --failure-level=ERROR
REQUIRES :=

.PHONY: all build clean

all: build

build: 
	@echo "Starting build..."
	$(ASCIIDOCTOR_PDF) $(OPTIONS) $(REQUIRES) --out-file=$(PDF_RESULT) $(HEADER_SOURCE)
	@echo "Build completed successfully."

clean:
	@echo "Cleaning up generated files..."
	rm -f $(PDF_RESULT)
	@echo "Cleanup completed."

