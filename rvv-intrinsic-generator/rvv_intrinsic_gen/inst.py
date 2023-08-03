"""
--------------------------------------------------------------------------------
Copyright 2022 SiFive Inc

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

Declares the intrinsics and links to the templates for its realization into
function prototype. The documents are generated under the sequence and
grouping.
"""

from intrinsic_decorator import IntrinsicDecorators
from legacy_intrinsic_decorator import LegacyIntrinsicDecorators
from templates import setvl_template
from templates import load_template
from templates import seg_load_template
from templates import store_template
from templates import seg_store_template
from templates import binary_op_template
from templates import binary_wop_template
from templates import binary_nop_template
from templates import binary_intcarry_template
from templates import cmp_template
from templates import mac_template
from templates import unary_op_template
from templates import cvt_op_template
from templates import misc_op_template
from templates import reint_op_template
from templates import get_set_diff_lmul_op_template
from templates import reduction_template
from templates import mask_template
from templates import mask_load_store_template
from templates import permute_template
from constants import LMULS,WLMULS,NCVTLMULS,SEWS,WSEWS,FSEWS,WFSEWS,NSEWS,\
  TYPES,ITYPES,FTYPES,MTYPES,MLENS
from generator import CompatibleHeaderGenerator


def gen(g):
  if isinstance(g, CompatibleHeaderGenerator):
    decorators = LegacyIntrinsicDecorators(g.has_tail_policy)
  else:
    decorators = IntrinsicDecorators(g.has_tail_policy)

  g.start_group("Configuration-Setting and Utility Functions")

  g.function_group(setvl_template, "Set `vl` and `vtype` Functions",
                   "set-vl-and-vtype", ["setvl"], [], SEWS, LMULS, [])

  g.function_group(setvl_template, "Set the vl to VLMAX with specific vtype",
                   "set-vl-to-vlmax-with-specific-vtype", ["setvlmax"], [],
                   SEWS, LMULS, [])

  ####################################################################
  g.start_group("Vector Loads and Stores Functions")

  g.function_group(load_template, "Vector Unit-Stride Load Functions",
                   "vector-unit-stride-load", ["vle"], TYPES, SEWS, LMULS,
                   decorators.has_masking_maskedoff_policy)

  g.function_group(store_template, "Vector Unit-Stride Store Functions",
                   "vector-unit-stride-store", ["vse"], TYPES, SEWS, LMULS,
                   decorators.has_masking_no_maskedoff)

  g.function_group(load_template, "Vector Strided Load Functions",
                   "vector-strided-load", ["vlse"], TYPES, SEWS, LMULS,
                   decorators.has_masking_maskedoff_policy)

  g.function_group(store_template, "Vector Strided Store Functions",
                   "vector-strided-store", ["vsse"], TYPES, SEWS, LMULS,
                   decorators.has_masking_no_maskedoff)

  g.function_group(load_template, "Vector Indexed Load Functions",
                   "vector-indexed-load", ["vloxei", "vluxei"], TYPES, SEWS,
                   LMULS, decorators.has_masking_maskedoff_policy)

  g.function_group(store_template, "Vector Indexed Store Functions",
                   "vector-indexed-store", ["vsoxei", "vsuxei"], TYPES, SEWS,
                   LMULS, decorators.has_masking_no_maskedoff)

  g.function_group(load_template,
                   "Unit-stride Fault-Only-First Loads Functions",
                   "unit-stride-fault-only-first-loads", ["vleff"], TYPES, SEWS,
                   LMULS, decorators.has_masking_maskedoff_policy)

  ####################################################################

  g.start_group("Vector Unit-Stride Segment Load/Store Instructions (Zvlsseg)")

  g.function_group(seg_load_template,
                   "Vector Unit-Stride Segment Load Functions",
                   "vector-unit-stride-segment-load", ["vlseg", "vlsegff"],
                   TYPES, SEWS, LMULS, decorators.has_masking_maskedoff_policy)

  g.function_group(seg_store_template,
                   "Vector Unit-Stride Segment Store Functions",
                   "vecrtor-unit-stride-segment-store", ["vsseg"], TYPES, SEWS,
                   LMULS, decorators.has_masking_no_maskedoff)

  ####################################################################

  g.start_group("Vector Stride Segment Load/Store Instructions (Zvlsseg)")

  g.function_group(seg_load_template, "Vector Strided Segment Load Functions",
                   "vector-strided-segment-load", ["vlsseg"], TYPES, SEWS,
                   LMULS, decorators.has_masking_maskedoff_policy)

  g.function_group(seg_store_template, "Vector Strided Segment Store Functions",
                   "vector-strided-segment-store", ["vssseg"], TYPES, SEWS,
                   LMULS, decorators.has_masking_no_maskedoff)

  ####################################################################

  g.start_group("Vector Indexed Segment Load/Store Instructions (Zvlsseg)")

  g.function_group(seg_load_template, "Vector Indexed Segment Load Functions",
                   "vector-indexed-segment-load", ["vloxseg", "vluxseg"], TYPES,
                   SEWS, LMULS, decorators.has_masking_maskedoff_policy)

  g.function_group(seg_store_template, "Vector Indexed Segment Store Functions",
                   "vector-indexed-segment-store", ["vsoxseg", "vsuxseg"],
                   TYPES, SEWS, LMULS, decorators.has_masking_no_maskedoff)

  ####################################################################

  g.start_group("Vector Integer Arithmetic Functions")

  g.function_group(binary_op_template,
                   "Vector Single-Width Integer Add and Subtract Functions",
                   "vector-single-width-integer-add-and-subtract",
                   ["add", "sub", "rsub", "neg"], ITYPES, SEWS, LMULS,
                   decorators.has_masking_maskedoff_policy)

  g.function_group(binary_wop_template,
                   "Vector Widening Integer Add/Subtract Functions",
                   "vector-widening-integer-add-subtract", ["wadd", "wsub"],
                   ITYPES, WSEWS, WLMULS,
                   decorators.has_masking_maskedoff_policy)

  g.function_group(unary_op_template, "Vector Integer Extension Functions",
                   "vector-integer-extension", ["zext", "sext"], ITYPES, SEWS,
                   LMULS, decorators.has_masking_maskedoff_policy)

  if g.has_tail_policy:
    g.function_group(
        binary_intcarry_template,
        "Vector Integer Add-with-Carry / Subtract-with-Borrow Functions",
        "vector-integer-add-with-carry-subtract-with-borrow", ["adc", "sbc"],
        ITYPES, SEWS, LMULS, decorators.has_no_masking_policy)

    g.function_group(binary_intcarry_template,
                     "Vector Integer Carry-out / Borrow-out Functions ",
                     "vector-integer-carry-out-borrow-out", ["madc", "msbc"],
                     ITYPES, SEWS, LMULS, decorators.has_no_masking)
  else:
    g.function_group(
        binary_intcarry_template,
        "Vector Integer Add-with-Carry / Subtract-with-Borrow Functions",
        "vector-integer-add-with-carry-subtract-with-borrow",
        ["adc", "sbc", "madc", "msbc"], ITYPES, SEWS, LMULS,
        decorators.has_no_masking)

  g.function_group(binary_op_template,
                   "Vector Bitwise Binary Logical Functions",
                   "vector-bitwise-binary-logical", ["and", "or", "xor"],
                   ITYPES, SEWS, LMULS, decorators.has_masking_maskedoff_policy)

  g.function_group(unary_op_template, "Vector Bitwise Unary Logical Functions",
                   "vector-bitwise-unary-logical", ["not"], ITYPES, SEWS, LMULS,
                   decorators.has_masking_maskedoff_policy)

  g.function_group(binary_op_template,
                   "Vector Single-Width Bit Shift Functions",
                   "vector-single-width-bit-shift", ["sll", "srl", "sra"],
                   ITYPES, SEWS, LMULS, decorators.has_masking_maskedoff_policy)

  g.function_group(binary_nop_template,
                   "Vector Narrowing Integer Right Shift Functions",
                   "vector-narrowing-integer-right-shift", ["nsrl", "nsra"],
                   ITYPES, WSEWS, WLMULS,
                   decorators.has_masking_maskedoff_policy)

  g.function_group(cmp_template, "Vector Integer Comparison Functions",
                   "vector-integer-comparison",
                   ["eq", "ne", "lt", "le", "gt", "ge"], ITYPES, SEWS, LMULS,
                   decorators.has_masking_maskedoff_policy_mu_ma)

  g.function_group(binary_op_template, "Vector Integer Min/Max Functions",
                   "vector-integer-minmax", ["min", "max"], ITYPES, SEWS, LMULS,
                   decorators.has_masking_maskedoff_policy)

  g.function_group(binary_op_template,
                   "Vector Single-Width Integer Multiply Functions",
                   "vector-single-width-integer-multiply",
                   ["mul", "mulh", "mulhsu"], ITYPES, SEWS, LMULS,
                   decorators.has_masking_maskedoff_policy)

  g.function_group(binary_op_template, "Vector Integer Divide Functions",
                   "vector-integer-divide", ["div", "rem"], ITYPES, SEWS, LMULS,
                   decorators.has_masking_maskedoff_policy)

  g.function_group(binary_wop_template,
                   "Vector Widening Integer Multiply Functions",
                   "vector-widening-integer-multiply", ["wmul", "wmulsu"],
                   ITYPES, WSEWS, WLMULS,
                   decorators.has_masking_maskedoff_policy)

  g.function_group(mac_template,
                   "Vector Single-Width Integer Multiply-Add Functions",
                   "vector-single-width-integer-multiply-add",
                   ["macc", "nmsac", "madd", "nmsub"], ITYPES, SEWS, LMULS,
                   decorators.has_masking_no_maskedoff_policy)

  g.function_group(mac_template,
                   "Vector Widening Integer Multiply-Add Functions",
                   "vector-widening-integer-multiply-add",
                   ["wmacc", "wmaccsu", "wmaccus"], ITYPES, WSEWS, WLMULS,
                   decorators.has_masking_no_maskedoff_policy)

  g.function_group(unary_op_template, "Vector Integer Merge Functions",
                   "vector-integer-merge", ["merge"], ITYPES, SEWS, LMULS,
                   decorators.has_no_masking_policy)

  g.function_group(unary_op_template, "Vector Integer Move Functions",
                   "vector-integer-move", ["mv"], ITYPES, SEWS, LMULS,
                   decorators.has_no_masking_policy)

  ####################################################################
  g.start_group("Vector Fixed-Point Arithmetic Functions")

  g.function_group(binary_op_template,
                   "Vector Single-Width Saturating Add and Subtract Functions",
                   "vector-single-width-saturating-add-and-subtract",
                   ["sadd", "ssub"], ITYPES, SEWS, LMULS,
                   decorators.has_masking_maskedoff_policy)

  g.function_group(binary_op_template,
                   "Vector Single-Width Averaging Add and Subtract Functions",
                   "vector-single-width-averaging-add-and-subtract",
                   ["aadd", "asub"], ITYPES, SEWS, LMULS,
                   decorators.has_masking_maskedoff_policy_vxrm)

  g.function_group(
      binary_op_template,
      "Vector Single-Width Fractional Multiply with Rounding and Saturation" +
      " Functions",
      "vector-single-width-fractional-multiply-with-rounding-and-" +
      "saturation", ["smul"], ["int"], SEWS, LMULS,
      decorators.has_masking_maskedoff_policy_vxrm)

  g.function_group(binary_op_template,
                   "Vector Single-Width Scaling Shift Functions",
                   "vector-single-width-scaling-shift", ["ssrl", "ssra"],
                   ITYPES, SEWS, LMULS,
                   decorators.has_masking_maskedoff_policy_vxrm)

  g.function_group(binary_nop_template,
                   "Vector Narrowing Fixed-Point Clip Functions",
                   "vector-narrowing-fixed-point-clip", ["nclip"], ITYPES,
                   WSEWS, WLMULS, decorators.has_masking_maskedoff_policy_vxrm)

  ####################################################################
  g.start_group("Vector Floating-Point Functions")

  g.function_group(binary_op_template,
                   "Vector Single-Width Floating-Point Add/Subtract Functions",
                   "vector-single-width-floating-point-add-subtract",
                   ["fadd", "fsub", "frsub", "fneg"], FTYPES, FSEWS, LMULS,
                   decorators.has_masking_maskedoff_policy_frm)

  g.function_group(binary_wop_template,
                   "Vector Widening Floating-Point Add/Subtract Functions",
                   "vector-widening-floating-point-add-subtract",
                   ["fwadd", "fwsub"], FTYPES, WFSEWS, WLMULS,
                   decorators.has_masking_maskedoff_policy_frm)

  g.function_group(
      binary_op_template,
      "Vector Single-Width Floating-Point Multiply/Divide Functions",
      "vector-single-width-floating-point-multiply-divide",
      ["fmul", "fdiv", "frdiv"], FTYPES, FSEWS, LMULS,
      decorators.has_masking_maskedoff_policy_frm)

  g.function_group(binary_wop_template,
                   "Vector Widening Floating-Point Multiply Functions",
                   "vector-widening-floating-point-multiply", ["fwmul"], FTYPES,
                   WFSEWS, WLMULS, decorators.has_masking_maskedoff_policy_frm)

  g.function_group(
      mac_template,
      "Vector Single-Width Floating-Point Fused Multiply-Add Functions",
      "vector-single-width-floating-point-fused-multiply-add",
      ["macc", "nmacc", "msac", "nmsac", "madd", "nmadd", "msub", "nmsub"],
      FTYPES, FSEWS, LMULS, decorators.has_masking_no_maskedoff_policy_frm)

  g.function_group(
      mac_template,
      "Vector Widening Floating-Point Fused Multiply-Add Functions",
      "vector-widening-floating-point-fused-multiply-add",
      ["wmacc", "wnmacc", "wmsac", "wnmsac"], FTYPES, WFSEWS, WLMULS,
      decorators.has_masking_no_maskedoff_policy_frm)

  g.function_group(unary_op_template,
                   "Vector Floating-Point Square-Root Functions",
                   "vector-floating-point-square-root", ["sqrt"], FTYPES, FSEWS,
                   LMULS, decorators.has_masking_maskedoff_policy_frm)

  g.function_group(
      unary_op_template,
      "Vector Floating-Point Reciprocal Square-Root Estimate Functions",
      "vector-floating-point-reciprocal-square-root-estimate", ["rsqrt7"],
      FTYPES, FSEWS, LMULS, decorators.has_masking_maskedoff_policy)

  g.function_group(unary_op_template,
                   "Vector Floating-Point Reciprocal Estimate Functions",
                   "#1410-vector-floating-point-reciprocal-estimate", ["rec7"],
                   FTYPES, FSEWS, LMULS,
                   decorators.has_masking_maskedoff_policy_frm)

  g.function_group(binary_op_template,
                   "Vector Floating-Point MIN/MAX Functions",
                   "vector-floating-point-minmax", ["fmin", "fmax"], FTYPES,
                   FSEWS, LMULS, decorators.has_masking_maskedoff_policy)

  g.function_group(binary_op_template,
                   "Vector Floating-Point Sign-Injection Functions",
                   "vector-floating-point-sign-injection",
                   ["fsgnj", "fsgnjn", "fsgnjx"], FTYPES, FSEWS, LMULS,
                   decorators.has_masking_maskedoff_policy)

  g.function_group(unary_op_template,
                   "Vector Floating-Point Absolute Value Functions",
                   "vector-floating-point-absolute-value", ["abs"], FTYPES,
                   FSEWS, LMULS, decorators.has_masking_maskedoff_policy)

  g.function_group(cmp_template, "Vector Floating-Point Compare Functions",
                   "vector-floating-point-compare",
                   ["eq", "ne", "lt", "le", "gt", "ge"], FTYPES, FSEWS, LMULS,
                   decorators.has_masking_maskedoff_policy_mu_ma)

  g.function_group(unary_op_template,
                   "Vector Floating-Point Classify Functions",
                   "vector-floating-point-classify", ["class"], FTYPES, FSEWS,
                   LMULS, decorators.has_masking_maskedoff_policy)

  g.function_group(unary_op_template, "Vector Floating-Point Merge Functions",
                   "vector-floating-point-merge", ["merge"], FTYPES, FSEWS,
                   LMULS, decorators.has_no_masking_policy)

  g.function_group(unary_op_template, "Vector Floating-Point Move Functions",
                   "vector-floating-point-move", ["mv"], FTYPES, FSEWS, LMULS,
                   decorators.has_no_masking_policy)

  g.function_group(
      cvt_op_template,
      "Single-Width Floating-Point/Integer Type-Convert Functions",
      "single-width-floating-pointinteger-type-convert", ["cvt"], "", SEWS,
      LMULS, decorators.has_masking_maskedoff_policy_frm)

  g.function_group(cvt_op_template,
                   "Widening Floating-Point/Integer Type-Convert Functions",
                   "widening-floating-pointinteger-type-convert", ["wcvt"], "",
                   WSEWS, WLMULS, decorators.has_masking_maskedoff_policy_frm)

  g.function_group(cvt_op_template,
                   "Narrowing Floating-Point/Integer Type-Convert Functions",
                   "narrowing-floating-pointinteger-type-convert", ["ncvt"], "",
                   NSEWS, NCVTLMULS,
                   decorators.has_masking_maskedoff_policy_frm)

  ####################################################################
  g.start_group("Vector Reduction Functions")

  g.function_group(reduction_template,
                   "Vector Single-Width Integer Reduction Functions",
                   "vector-single-width-integer-reduction",
                   ["redsum", "redmax", "redmin", "redand", "redor", "redxor"],
                   ITYPES, SEWS, LMULS,
                   decorators.has_masking_no_maskedoff_reduction_policy)

  g.function_group(reduction_template,
                   "Vector Widening Integer Reduction Functions",
                   "vector-widening-integer-reduction", ["wredsum"], ITYPES,
                   SEWS, LMULS,
                   decorators.has_masking_no_maskedoff_reduction_policy)

  g.function_group(reduction_template,
                   "Vector Single-Width Floating-Point Reduction Functions",
                   "vector-single-width-floating-point-reduction",
                   ["redosum", "redusum", "redmax", "redmin"], FTYPES, FSEWS,
                   LMULS,
                   decorators.has_masking_no_maskedoff_reduction_policy_frm)

  g.function_group(reduction_template,
                   "Vector Widening Floating-Point Reduction Functions",
                   "vector-widening-floating-point-reduction",
                   ["wredosum", "wredusum"], FTYPES, FSEWS, LMULS,
                   decorators.has_masking_no_maskedoff_reduction_policy_frm)

  ####################################################################
  g.start_group("Vector Mask Functions")

  g.function_group(mask_load_store_template, "Vector Mask Load/Store Functions",
                   "vector-unit-stride", ["vlm", "vsm"], MTYPES, MLENS, [1],
                   decorators.has_no_masking)

  g.function_group(mask_template, "Vector Mask-Register Logical Functions",
                   "vector-mask-register-logical", [
                       "and", "nand", "andn", "xor", "or", "nor", "orn", "xnor",
                       "mv", "clr", "set", "not"
                   ], MTYPES, MLENS, [1], decorators.has_no_masking)

  g.function_group(mask_template, "Vector count population in mask Functions",
                   "vector-count-population-in-mask-vcpopm", ["cpop"], MTYPES,
                   MLENS, [1], decorators.has_masking_no_maskedoff)

  g.function_group(mask_template, "Find-first-set mask bit Functions",
                   "vfirst-find-first-set-mask-bit", ["first"], MTYPES, MLENS,
                   [1], decorators.has_masking_no_maskedoff)

  g.function_group(mask_template, "Set-before-first mask bit Functions",
                   "vmsbfm-set-before-first-mask-bit", ["sbf"], MTYPES, MLENS,
                   [1], decorators.has_masking_maskedoff_policy_mu_ma)

  g.function_group(mask_template, "Set-including-first mask bit Functions",
                   "vmsifm-set-including-first-mask-bit", ["sif"], MTYPES,
                   MLENS, [1], decorators.has_masking_maskedoff_policy_mu_ma)

  g.function_group(mask_template, "Set-only-first mask bit Functions",
                   "vmsofm-set-only-first-mask-bit", ["sof"], MTYPES, MLENS,
                   [1], decorators.has_masking_maskedoff_policy_mu_ma)

  g.function_group(mask_template, "Vector Iota Functions", "vector-iota",
                   ["iota"], MTYPES, SEWS, LMULS,
                   decorators.has_masking_maskedoff_policy)

  g.function_group(mask_template, "Vector Element Index Functions",
                   "vector-element-index", ["id"], MTYPES, SEWS, LMULS,
                   decorators.has_masking_maskedoff_policy)

  ####################################################################
  g.start_group("Vector Permutation Functions")

  g.function_group(permute_template,
                   "Integer and Floating-Point Scalar Move Functions",
                   "integer-scalar-move", ["mv"], TYPES, SEWS, LMULS,
                   decorators.has_no_masking_policy)

  g.function_group(permute_template, "Vector Slideup Functions",
                   "vector-slideup", ["slideup"], TYPES, SEWS, LMULS,
                   decorators.has_masking_no_maskedoff_policy_vslide)

  g.function_group(permute_template, "Vector Slidedown Functions",
                   "vector-slidedown", ["slidedown"], TYPES, SEWS, LMULS,
                   decorators.has_masking_maskedoff_policy)

  g.function_group(permute_template, "Vector Slide1up and Slide1down Functions",
                   "vector-slide1up-and-slide1down", ["slide1up", "slide1down"],
                   TYPES, SEWS, LMULS, decorators.has_masking_maskedoff_policy)

  g.function_group(binary_op_template, "Vector Register Gather Functions",
                   "vector-register-gather", ["rgather", "rgatherei16"], TYPES,
                   SEWS, LMULS, decorators.has_masking_maskedoff_policy)

  g.function_group(permute_template, "Vector Compress Functions",
                   "vector-compress", ["compress"], TYPES, SEWS, LMULS,
                   decorators.has_no_masking_policy)

  ####################################################################
  g.start_group("Miscellaneous Vector Functions")

  g.function_group(reint_op_template, "Reinterpret Cast Conversion Functions",
                   "reinterpret-cast-conversion", ["reinterpret"], "", SEWS,
                   LMULS, decorators.has_no_masking)

  g.function_group(misc_op_template, "Vector LMUL Extension Functions",
                   "vector-lmul-extensionn", ["vlmul_ext_v"], TYPES, SEWS,
                   LMULS, decorators.has_no_masking)

  g.function_group(misc_op_template, "Vector LMUL Truncation Functions",
                   "vector-lmul-truncation", ["vlmul_trunc_v"], TYPES, SEWS,
                   LMULS, decorators.has_no_masking)

  g.function_group(misc_op_template, "Vector Initialization Functions",
                   "#vector-initialization", ["vundefined"], TYPES, SEWS, LMULS,
                   decorators.has_no_masking)

  g.function_group(get_set_diff_lmul_op_template, "Vector Insertion Functions",
                   "vector-insertion", ["vset"], TYPES, SEWS, LMULS,
                   decorators.has_no_masking)

  g.function_group(get_set_diff_lmul_op_template, "Vector Extraction Functions",
                   "vector-extraction", ["vget"], TYPES, SEWS, LMULS,
                   decorators.has_no_masking)

  ####################################################################
  g.gen_prologue()
