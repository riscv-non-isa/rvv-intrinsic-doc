"""
--------------------------------------------------------------------------------
Copyright 2023 SiFive Inc

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

Declares the BFloat16 intrinsics and links to the templates for its
realization into function prototype. The documents are generated under the
sequence and grouping.
"""

from intrinsic_decorator import IntrinsicDecorators
from generator import CompatibleHeaderGenerator
from templates import load_template
from templates import seg_load_template
from templates import store_template
from templates import seg_store_template
from templates import reint_op_template
from templates import get_set_diff_lmul_op_template
from templates import misc_op_template
from templates import unary_op_template
from templates import cvt_op_template
from templates import mac_template
from constants import LMULS, WLMULS, NCVTLMULS, BFTYPES

SEWS = [16]
NSEWS = [32]


def gen(g):
  if isinstance(g, CompatibleHeaderGenerator):
    assert False, "BFloat16 intrinsics is supported after v1.0"
  decorators = IntrinsicDecorators(g.has_tail_policy)

  ####################################################################
  g.start_group("BFloat16 Vector Loads and Stores Intrinsics")

  g.function_group(load_template, "Vector Unit-Stride Load Intrinsics",
                   "bf16-vector-unit-stride-load", ["vle"], BFTYPES, SEWS,
                   LMULS, decorators.has_masking_maskedoff_policy)

  g.function_group(store_template, "Vector Unit-Stride Store Intrinsics",
                   "bf16-vector-unit-stride-store", ["vse"], BFTYPES, SEWS,
                   LMULS, decorators.has_masking_no_maskedoff)

  g.function_group(load_template, "Vector Strided Load Intrinsics",
                   "vector-strided-load", ["vlse"], BFTYPES, SEWS, LMULS,
                   decorators.has_masking_maskedoff_policy)

  g.function_group(store_template, "Vector Strided Store Intrinsics",
                   "vector-strided-store", ["vsse"], BFTYPES, SEWS, LMULS,
                   decorators.has_masking_no_maskedoff)

  g.function_group(load_template, "Vector Indexed Load Intrinsics",
                   "vector-indexed-load", ["vloxei", "vluxei"], BFTYPES, SEWS,
                   LMULS, decorators.has_masking_maskedoff_policy)

  g.function_group(store_template, "Vector Indexed Store Intrinsics",
                   "vector-indexed-store", ["vsoxei", "vsuxei"], BFTYPES, SEWS,
                   LMULS, decorators.has_masking_no_maskedoff)

  g.function_group(load_template,
                   "Unit-stride Fault-Only-First Loads Intrinsics",
                   "unit-stride-fault-only-first-loads", ["vleff"], BFTYPES,
                   SEWS, LMULS, decorators.has_masking_maskedoff_policy)

  ####################################################################
  g.start_group("BFloat16 Vector Loads and Stores Segment Intrinsics")

  g.function_group(seg_load_template,
                   "Vector Unit-Stride Segment Load Intrinsics",
                   "vector-unit-stride-segment-load", ["vlseg", "vlsegff"],
                   BFTYPES, SEWS, LMULS,
                   decorators.has_masking_maskedoff_policy)

  g.function_group(seg_store_template,
                   "Vector Unit-Stride Segment Store Intrinsics",
                   "vecrtor-unit-stride-segment-store", ["vsseg"], BFTYPES,
                   SEWS, LMULS, decorators.has_masking_no_maskedoff)

  g.function_group(seg_load_template, "Vector Strided Segment Load Intrinsics",
                   "vector-strided-segment-load", ["vlsseg"], BFTYPES, SEWS,
                   LMULS, decorators.has_masking_maskedoff_policy)

  g.function_group(seg_store_template,
                   "Vector Strided Segment Store Intrinsics",
                   "vector-strided-segment-store", ["vssseg"], BFTYPES, SEWS,
                   LMULS, decorators.has_masking_no_maskedoff)

  g.function_group(seg_load_template, "Vector Indexed Segment Load Intrinsics",
                   "vector-indexed-segment-load", ["vloxseg", "vluxseg"],
                   BFTYPES, SEWS, LMULS,
                   decorators.has_masking_maskedoff_policy)

  g.function_group(seg_store_template,
                   "Vector Indexed Segment Store Intrinsics",
                   "vector-indexed-segment-store", ["vsoxseg", "vsuxseg"],
                   BFTYPES, SEWS, LMULS, decorators.has_masking_no_maskedoff)

  ####################################################################
  g.start_group("BFloat16 Convert Intrinsics")

  g.function_group(cvt_op_template, "Vector Narrowing Convert Intrinsics",
                   "bf16-vector-narrow-convert", ["ncvtbf16"], "bfloat16",
                   NSEWS, NCVTLMULS,
                   decorators.has_masking_maskedoff_policy_frm)

  g.function_group(cvt_op_template, "Vector Widening Convert Intrinsics",
                   "bf16-vector-widening-convert", ["wcvtbf16"], "bfloat16",
                   SEWS, WLMULS, decorators.has_masking_maskedoff_policy)

  ####################################################################
  g.start_group("BFloat16 Arithmetic Intrinsics")

  g.function_group(mac_template,
                   "Vector Widening Multiply-Accumulate Intrinsics",
                   "bf16-widening-multiply-accumulate", ["wmaccbf16"], BFTYPES,
                   SEWS, WLMULS, decorators.has_masking_no_maskedoff_policy_frm)
  g.function_group(unary_op_template, "Vector BFloat16 Move Intrinsics",
                   "vector-bf16-move", ["mv"], BFTYPES, SEWS, LMULS,
                   decorators.has_no_masking_policy)

  g.function_group(unary_op_template, "Vector BFloat16 Merge Intrinsics",
                   "vector-bf16-merge", ["merge"], BFTYPES, SEWS, LMULS,
                   decorators.has_no_masking_policy)

  ####################################################################
  g.start_group("BFloat16 Miscellaneous Vector Utility Intrinsics")

  g.function_group(reint_op_template, "Reinterpret Cast Conversion Intrinsics",
                   "reinterpret-cast-conversion", ["vreinterpret"], "bfloat16",
                   SEWS, LMULS, decorators.has_no_masking)

  g.function_group(misc_op_template, "Vector LMUL Extension Intrinsics",
                   "vector-lmul-extensionn", ["vlmul_ext_v"], BFTYPES, SEWS,
                   LMULS, decorators.has_no_masking)

  g.function_group(misc_op_template, "Vector LMUL Truncation Intrinsics",
                   "vector-lmul-truncation", ["vlmul_trunc_v"], BFTYPES, SEWS,
                   LMULS, decorators.has_no_masking)

  g.function_group(misc_op_template, "Vector Initialization Intrinsics",
                   "vector-initialization", ["vundefined"], BFTYPES, SEWS,
                   LMULS, decorators.has_no_masking)

  g.function_group(get_set_diff_lmul_op_template, "Vector Insertion Intrinsics",
                   "vector-insertion", ["vset"], BFTYPES, SEWS, LMULS,
                   decorators.has_no_masking)

  g.function_group(get_set_diff_lmul_op_template,
                   "Vector Extraction Intrinsics", "vector-extraction",
                   ["vget"], BFTYPES, SEWS, LMULS, decorators.has_no_masking)

  g.function_group(misc_op_template, "Vector Creation Intrinsics",
                   "vector-creation", ["vcreate"], BFTYPES, SEWS, LMULS,
                   decorators.has_no_masking)

  ####################################################################
  g.gen_prologue()
