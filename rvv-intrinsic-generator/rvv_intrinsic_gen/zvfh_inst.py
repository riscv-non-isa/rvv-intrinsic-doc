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

Declares the Zvfh intrinsics and links to the templates for its
realization into function prototype. The documents are generated under the
sequence and grouping.
"""

from intrinsic_decorator import IntrinsicDecorators
from legacy_intrinsic_decorator import LegacyIntrinsicDecorators
from templates import binary_op_template
from templates import binary_wop_template
from templates import cmp_template
from templates import mac_template
from templates import unary_op_template
from templates import cvt_op_template
from templates import reduction_template
from templates import permute_template
from constants import LMULS, WLMULS, NCVTLMULS, FTYPES
from generator import CompatibleHeaderGenerator, APITestGenerator
from zvfhmin_utils import load_store_group, seg_load_store_group, misc_group, permutation_group, conversion_group

SEWS = [16]
NSEWS = [16, 32]
WSEWS = [8, 16]

llvm_header = r"""// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +zvfh -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

"""

def gen(g):
  if isinstance(g, CompatibleHeaderGenerator):
    assert False, "Zvfhmin intrinsics is supported after v1.0"

  if isinstance(g, APITestGenerator):
    g.set_llvm_api_test_header(llvm_header)

  decorators = IntrinsicDecorators(g.has_tail_policy)

  ####################################################################
  g.start_group("Vector Loads and Stores Intrinsics")

  load_store_group(g)

  ####################################################################

  g.start_group("Vector Loads and Stores Segment Intrinsics")

  seg_load_store_group(g)

  ####################################################################
  g.start_group("Vector Floating-Point Intrinsics")

  g.function_group(
      binary_op_template,
      "Vector Single-Width Floating-Point Add/Subtract Intrinsics",
      "vector-single-width-floating-point-add-subtract",
      ["fadd", "fsub", "frsub", "fneg"], FTYPES, SEWS, LMULS,
      decorators.has_masking_maskedoff_policy_frm)

  g.function_group(binary_wop_template,
                   "Vector Widening Floating-Point Add/Subtract Intrinsics",
                   "vector-widening-floating-point-add-subtract",
                   ["fwadd", "fwsub"], FTYPES, SEWS, WLMULS,
                   decorators.has_masking_maskedoff_policy_frm)

  g.function_group(
      binary_op_template,
      "Vector Single-Width Floating-Point Multiply/Divide Intrinsics",
      "vector-single-width-floating-point-multiply-divide",
      ["fmul", "fdiv", "frdiv"], FTYPES, SEWS, LMULS,
      decorators.has_masking_maskedoff_policy_frm)

  g.function_group(binary_wop_template,
                   "Vector Widening Floating-Point Multiply Intrinsics",
                   "vector-widening-floating-point-multiply", ["fwmul"], FTYPES,
                   SEWS, WLMULS, decorators.has_masking_maskedoff_policy_frm)

  g.function_group(
      mac_template,
      "Vector Single-Width Floating-Point Fused Multiply-Add Intrinsics",
      "vector-single-width-floating-point-fused-multiply-add",
      ["macc", "nmacc", "msac", "nmsac", "madd", "nmadd", "msub", "nmsub"],
      FTYPES, SEWS, LMULS, decorators.has_masking_no_maskedoff_policy_frm)

  g.function_group(
      mac_template,
      "Vector Widening Floating-Point Fused Multiply-Add Intrinsics",
      "vector-widening-floating-point-fused-multiply-add",
      ["wmacc", "wnmacc", "wmsac", "wnmsac"], FTYPES, SEWS, WLMULS,
      decorators.has_masking_no_maskedoff_policy_frm)

  g.function_group(unary_op_template,
                   "Vector Floating-Point Square-Root Intrinsics",
                   "vector-floating-point-square-root", ["sqrt"], FTYPES, SEWS,
                   LMULS, decorators.has_masking_maskedoff_policy_frm)

  g.function_group(
      unary_op_template,
      "Vector Floating-Point Reciprocal Square-Root Estimate Intrinsics",
      "vector-floating-point-reciprocal-square-root-estimate", ["rsqrt7"],
      FTYPES, SEWS, LMULS, decorators.has_masking_maskedoff_policy)

  g.function_group(unary_op_template,
                   "Vector Floating-Point Reciprocal Estimate Intrinsics",
                   "#1410-vector-floating-point-reciprocal-estimate", ["rec7"],
                   FTYPES, SEWS, LMULS,
                   decorators.has_masking_maskedoff_policy_frm)

  g.function_group(binary_op_template,
                   "Vector Floating-Point MIN/MAX Intrinsics",
                   "vector-floating-point-minmax", ["fmin", "fmax"], FTYPES,
                   SEWS, LMULS, decorators.has_masking_maskedoff_policy)

  g.function_group(binary_op_template,
                   "Vector Floating-Point Sign-Injection Intrinsics",
                   "vector-floating-point-sign-injection",
                   ["fsgnj", "fsgnjn", "fsgnjx"], FTYPES, SEWS, LMULS,
                   decorators.has_masking_maskedoff_policy)

  g.function_group(unary_op_template,
                   "Vector Floating-Point Absolute Value Intrinsics",
                   "vector-floating-point-absolute-value", ["abs"], FTYPES,
                   SEWS, LMULS, decorators.has_masking_maskedoff_policy)

  g.function_group(cmp_template, "Vector Floating-Point Compare Intrinsics",
                   "vector-floating-point-compare",
                   ["eq", "ne", "lt", "le", "gt", "ge"], FTYPES, SEWS, LMULS,
                   decorators.has_masking_maskedoff_policy_mu_ma)

  g.function_group(unary_op_template,
                   "Vector Floating-Point Classify Intrinsics",
                   "vector-floating-point-classify", ["class"], FTYPES, SEWS,
                   LMULS, decorators.has_masking_maskedoff_policy)

  g.function_group(unary_op_template, "Vector Floating-Point Merge Intrinsics",
                   "vector-floating-point-merge", ["merge"], FTYPES, SEWS,
                   LMULS, decorators.has_no_masking_policy)

  g.function_group(unary_op_template, "Vector Floating-Point Move Intrinsics",
                   "vector-floating-point-move", ["mv"], FTYPES, SEWS, LMULS,
                   decorators.has_no_masking_policy)

  g.function_group(
      cvt_op_template,
      "Single-Width Floating-Point/Integer Type-Convert Intrinsics",
      "single-width-floating-pointinteger-type-convert", ["cvt"], "", SEWS,
      LMULS, decorators.has_masking_maskedoff_policy_frm)

  g.function_group(cvt_op_template,
                   "Widening Floating-Point/Integer Type-Convert Intrinsics",
                   "widening-floating-pointinteger-type-convert", ["wcvt"], "float16",
                   WSEWS, WLMULS, decorators.has_masking_maskedoff_policy_frm)

  g.function_group(cvt_op_template,
                   "Narrowing Floating-Point/Integer Type-Convert Intrinsics",
                   "narrowing-floating-pointinteger-type-convert", ["ncvt"], "float16",
                   NSEWS, NCVTLMULS,
                   decorators.has_masking_maskedoff_policy_frm)

  conversion_group(g)

  ####################################################################
  g.start_group("Vector Reduction Operations")

  g.function_group(reduction_template,
                   "Vector Single-Width Floating-Point Reduction Intrinsics",
                   "vector-single-width-floating-point-reduction",
                   ["redosum", "redusum", "redmax", "redmin"], FTYPES, SEWS,
                   LMULS,
                   decorators.has_masking_no_maskedoff_reduction_policy_frm)

  g.function_group(reduction_template,
                   "Vector Widening Floating-Point Reduction Intrinsics",
                   "vector-widening-floating-point-reduction",
                   ["wredosum", "wredusum"], FTYPES, SEWS, LMULS,
                   decorators.has_masking_no_maskedoff_reduction_policy_frm)

  ####################################################################
  g.start_group("Vector Permutation Intrinsics")

  g.function_group(permute_template,
                   "Integer and Floating-Point Scalar Move Intrinsics",
                   "scalar-move", ["mv"], FTYPES, SEWS, LMULS,
                   decorators.has_no_masking_policy)

  g.function_group(permute_template, "Vector Slideup Intrinsics",
                   "vector-slideup", ["slideup"], FTYPES, SEWS, LMULS,
                   decorators.has_masking_no_maskedoff_policy_vslide)

  g.function_group(permute_template, "Vector Slidedown Intrinsics",
                   "vector-slidedown", ["slidedown"], FTYPES, SEWS, LMULS,
                   decorators.has_masking_maskedoff_policy)

  g.function_group(permute_template,
                   "Vector Slide1up and Slide1down Intrinsics",
                   "vector-slide1up-and-slide1down", ["slide1up", "slide1down"],
                   FTYPES, SEWS, LMULS, decorators.has_masking_maskedoff_policy)

  permutation_group(g)

  ####################################################################
  g.start_group("Miscellaneous Vector Utility Intrinsics")

  misc_group(g)

  ####################################################################
  g.gen_prologue()
