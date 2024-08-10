"""
--------------------------------------------------------------------------------
Copyright 2024 SiFive Inc

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
--------------------------------------------------------------------------------

Declares the Zvfhmin intrinsics and links to the templates for its
realization into function prototype. The documents are generated under the
sequence and grouping.
"""

from intrinsic_decorator import IntrinsicDecorators
from generator import CompatibleHeaderGenerator, APITestGenerator
from zvfhmin_utils import load_store_group, seg_load_store_group, misc_group, permutation_group, conversion_group

llvm_header = r"""// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +zvfhmin -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

"""

def gen(g):
  if isinstance(g, CompatibleHeaderGenerator):
    assert False, "Zvfhmin intrinsics is supported after v1.0"

  if isinstance(g, APITestGenerator):
    g.set_llvm_api_test_header(llvm_header)

  ####################################################################
  g.start_group("Float16 Vector Loads and Stores Intrinsics")

  load_store_group(g)

  ####################################################################
  g.start_group("Float16 Vector Loads and Stores Segment Intrinsics")

  seg_load_store_group(g)

  ####################################################################
  g.start_group("Float16 Miscellaneous Vector Utility Intrinsics")

  misc_group(g)

  ####################################################################
  g.start_group("Vector Permutation Intrinsics")

  permutation_group(g)

  ####################################################################
  g.start_group("Vector Float16 Intrinsics")

  conversion_group(g)

  ####################################################################
  g.gen_prologue()
