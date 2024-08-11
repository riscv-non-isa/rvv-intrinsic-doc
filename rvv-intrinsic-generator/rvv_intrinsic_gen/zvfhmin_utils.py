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
from templates import binary_op_template
from templates import load_template
from templates import seg_load_template
from templates import store_template
from templates import seg_store_template
from templates import reint_op_template
from templates import get_set_diff_lmul_op_template
from templates import misc_op_template
from templates import permute_template
from templates import cvt_op_template
from constants import LMULS, WLMULS, NCVTLMULS, FTYPES

SEWS = [16]
NSEWS = [16, 32]
WSEWS = [8, 16]

def load_store_group(g):
  decorators = IntrinsicDecorators(g.has_tail_policy)

  g.function_group(load_template, "Vector Unit-Stride Load Intrinsics",
                   "vector-unit-stride-load", ["vle"], FTYPES, SEWS, LMULS,
                   decorators.has_masking_maskedoff_policy)

  g.function_group(store_template, "Vector Unit-Stride Store Intrinsics",
                   "vector-unit-stride-store", ["vse"], FTYPES, SEWS, LMULS,
                   decorators.has_masking_no_maskedoff)

  g.function_group(load_template, "Vector Strided Load Intrinsics",
                   "vector-strided-load", ["vlse"], FTYPES, SEWS, LMULS,
                   decorators.has_masking_maskedoff_policy)

  g.function_group(store_template, "Vector Strided Store Intrinsics",
                   "vector-strided-store", ["vsse"], FTYPES, SEWS, LMULS,
                   decorators.has_masking_no_maskedoff)

  g.function_group(load_template, "Vector Indexed Load Intrinsics",
                   "vector-indexed-load", ["vloxei", "vluxei"], FTYPES, SEWS,
                   LMULS, decorators.has_masking_maskedoff_policy)

  g.function_group(store_template, "Vector Indexed Store Intrinsics",
                   "vector-indexed-store", ["vsoxei", "vsuxei"], FTYPES, SEWS,
                   LMULS, decorators.has_masking_no_maskedoff)

  g.function_group(load_template,
                   "Unit-stride Fault-Only-First Loads Intrinsics",
                   "unit-stride-fault-only-first-loads", ["vleff"], FTYPES, SEWS,
                   LMULS, decorators.has_masking_maskedoff_policy)

def seg_load_store_group(g):
  decorators = IntrinsicDecorators(g.has_tail_policy)

  g.function_group(seg_load_template,
                   "Vector Unit-Stride Segment Load Intrinsics",
                   "vector-unit-stride-segment-load", ["vlseg", "vlsegff"],
                   FTYPES, SEWS, LMULS, decorators.has_masking_maskedoff_policy)

  g.function_group(seg_store_template,
                   "Vector Unit-Stride Segment Store Intrinsics",
                   "vecrtor-unit-stride-segment-store", ["vsseg"], FTYPES, SEWS,
                   LMULS, decorators.has_masking_no_maskedoff)

  g.function_group(seg_load_template, "Vector Strided Segment Load Intrinsics",
                   "vector-strided-segment-load", ["vlsseg"], FTYPES, SEWS,
                   LMULS, decorators.has_masking_maskedoff_policy)

  g.function_group(seg_store_template,
                   "Vector Strided Segment Store Intrinsics",
                   "vector-strided-segment-store", ["vssseg"], FTYPES, SEWS,
                   LMULS, decorators.has_masking_no_maskedoff)

  g.function_group(seg_load_template, "Vector Indexed Segment Load Intrinsics",
                   "vector-indexed-segment-load", ["vloxseg", "vluxseg"], FTYPES,
                   SEWS, LMULS, decorators.has_masking_maskedoff_policy)

  g.function_group(seg_store_template,
                   "Vector Indexed Segment Store Intrinsics",
                   "vector-indexed-segment-store", ["vsoxseg", "vsuxseg"],
                   FTYPES, SEWS, LMULS, decorators.has_masking_no_maskedoff)

def misc_group(g):
  decorators = IntrinsicDecorators(g.has_tail_policy)

  g.function_group(reint_op_template, "Reinterpret Cast Conversion Intrinsics",
                   "reinterpret-cast-conversion", ["vreinterpret"], "float16_zvfhmin",
                   SEWS, LMULS, decorators.has_no_masking)

  g.function_group(misc_op_template, "Vector LMUL Extension Intrinsics",
                   "vector-lmul-extensionn", ["vlmul_ext_v"], FTYPES, SEWS,
                   LMULS, decorators.has_no_masking)

  g.function_group(misc_op_template, "Vector LMUL Truncation Intrinsics",
                   "vector-lmul-truncation", ["vlmul_trunc_v"], FTYPES, SEWS,
                   LMULS, decorators.has_no_masking)

  g.function_group(misc_op_template, "Vector Initialization Intrinsics",
                   "vector-initialization", ["vundefined"], FTYPES, SEWS, LMULS,
                   decorators.has_no_masking)

  g.function_group(get_set_diff_lmul_op_template, "Vector Insertion Intrinsics",
                   "vector-insertion", ["vset"], FTYPES, SEWS, LMULS,
                   decorators.has_no_masking)

  g.function_group(get_set_diff_lmul_op_template,
                   "Vector Extraction Intrinsics", "vector-extraction",
                   ["vget"], FTYPES, SEWS, LMULS, decorators.has_no_masking)

  g.function_group(misc_op_template, "Vector Creation Intrinsics",
                   "vector-creation", ["vcreate"], FTYPES, SEWS, LMULS,
                   decorators.has_no_masking)

def permutation_group(g):
  decorators = IntrinsicDecorators(g.has_tail_policy)

  g.function_group(binary_op_template, "Vector Register Gather Intrinsics",
                   "vector-register-gather", ["rgather"], FTYPES,
                   SEWS, LMULS, decorators.has_masking_maskedoff_policy)

  g.function_group(permute_template, "Vector Compress Intrinsics",
                   "vector-compress", ["compress"], FTYPES, SEWS, LMULS,
                   decorators.has_no_masking_policy)

def conversion_group(g):
  decorators = IntrinsicDecorators(g.has_tail_policy)

  g.function_group(cvt_op_template,
                   "Widening Floating-Point/Integer Type-Convert Intrinsics",
                   "widening-floating-pointinteger-type-convert", ["wcvt"], "float16_zvfhmin",
                   WSEWS, WLMULS, decorators.has_masking_maskedoff_policy_frm)

  g.function_group(cvt_op_template,
                   "Narrowing Floating-Point/Integer Type-Convert Intrinsics",
                   "narrowing-floating-pointinteger-type-convert", ["ncvt"], "float16_zvfhmin",
                   NSEWS, NCVTLMULS,
                   decorators.has_masking_maskedoff_policy_frm)
