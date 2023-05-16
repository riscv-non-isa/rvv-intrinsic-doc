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
  TYPES,ITYPES,FTYPES,MTYPES,MLENS,REF_DOC_URL
from generator import CompatibleHeaderGenerator


def gen(g):
  if isinstance(g, CompatibleHeaderGenerator):
    decorators = LegacyIntrinsicDecorators(g.has_tail_policy)
  else:
    decorators = IntrinsicDecorators(g.has_tail_policy)

  g.start_group("Configuration-Setting and Utility Functions")

  g.function_group(setvl_template, "Set `vl` and `vtype` Functions",
                   REF_DOC_URL + "#set-vl-and-vtype-functions", ["setvl"], [],
                   SEWS, LMULS, [])

  g.function_group(setvl_template, "Set the vl to VLMAX with specific vtype",
                   REF_DOC_URL + "#set-vl-to-vlmax-with-specific-vtype",
                   ["setvlmax"], [], SEWS, LMULS, [])

  ####################################################################
  g.start_group("Vector Loads and Stores Functions")

  g.function_group(load_template, "Vector Unit-Stride Load Functions",
                   REF_DOC_URL + "#74-vector-unit-stride-operations", ["vle"],
                   TYPES, SEWS, LMULS, decorators.has_masking_maskedoff_policy)

  g.function_group(store_template, "Vector Unit-Stride Store Functions",
                   REF_DOC_URL + "#74-vector-unit-stride-operations", ["vse"],
                   TYPES, SEWS, LMULS, decorators.has_masking_no_maskedoff)

  g.function_group(load_template, "Vector Strided Load Functions",
                   REF_DOC_URL + "#75-vector-strided-loadstore-operations",
                   ["vlse"], TYPES, SEWS, LMULS,
                   decorators.has_masking_maskedoff_policy)

  g.function_group(store_template, "Vector Strided Store Functions",
                   REF_DOC_URL + "#75-vector-strided-loadstore-operations",
                   ["vsse"], TYPES, SEWS, LMULS,
                   decorators.has_masking_no_maskedoff)

  g.function_group(load_template, "Vector Indexed Load Functions",
                   REF_DOC_URL + "#76-vector-indexed-loadstore-operations",
                   ["vloxei", "vluxei"], TYPES, SEWS, LMULS,
                   decorators.has_masking_maskedoff_policy)

  g.function_group(store_template, "Vector Indexed Store Functions",
                   REF_DOC_URL + "#76-vector-indexed-loadstore-operations",
                   ["vsoxei", "vsuxei"], TYPES, SEWS, LMULS,
                   decorators.has_masking_no_maskedoff)

  g.function_group(
      load_template, "Unit-stride Fault-Only-First Loads Functions",
      REF_DOC_URL + "#77-unit-stride-fault-only-first-loads-operations",
      ["vleff"], TYPES, SEWS, LMULS, decorators.has_masking_maskedoff_policy)

  ####################################################################

  g.start_group("Vector Unit-Stride Segment Load/Store Instructions (Zvlsseg)")

  g.function_group(seg_load_template,
                   "Vector Unit-Stride Segment Load Functions", "",
                   ["vlseg", "vlsegff"], TYPES, SEWS, LMULS,
                   decorators.has_masking_maskedoff_policy)

  g.function_group(seg_store_template,
                   "Vector Unit-Stride Segment Store Functions", "", ["vsseg"],
                   TYPES, SEWS, LMULS, decorators.has_masking_no_maskedoff)

  ####################################################################

  g.start_group("Vector Stride Segment Load/Store Instructions (Zvlsseg)")

  g.function_group(seg_load_template, "Vector Strided Segment Load Functions",
                   "", ["vlsseg"], TYPES, SEWS, LMULS,
                   decorators.has_masking_maskedoff_policy)

  g.function_group(seg_store_template, "Vector Strided Segment Store Functions",
                   "", ["vssseg"], TYPES, SEWS, LMULS,
                   decorators.has_masking_no_maskedoff)

  ####################################################################

  g.start_group("Vector Indexed Segment Load/Store Instructions (Zvlsseg)")

  g.function_group(seg_load_template, "Vector Indexed Segment Load Functions",
                   "", ["vloxseg", "vluxseg"], TYPES, SEWS, LMULS,
                   decorators.has_masking_maskedoff_policy)

  g.function_group(seg_store_template, "Vector Indexed Segment Store Functions",
                   "", ["vsoxseg", "vsuxseg"], TYPES, SEWS, LMULS,
                   decorators.has_masking_no_maskedoff)

  ####################################################################

  g.start_group("Vector Integer Arithmetic Functions")

  g.function_group(
      binary_op_template,
      "Vector Single-Width Integer Add and Subtract Functions",
      REF_DOC_URL + "#121-vector-single-width-integer-add-and-subtract",
      ["add", "sub", "rsub", "neg"], ITYPES, SEWS, LMULS,
      decorators.has_masking_maskedoff_policy)

  g.function_group(
      binary_wop_template, "Vector Widening Integer Add/Subtract Functions",
      REF_DOC_URL + "#122-vector-widening-integer-addsubtract-operations",
      ["wadd", "wsub"], ITYPES, WSEWS, WLMULS,
      decorators.has_masking_maskedoff_policy)

  g.function_group(unary_op_template, "Vector Integer Extension Functions",
                   REF_DOC_URL + "#123-vector-integer-extension-operations",
                   ["zext", "sext"], ITYPES, SEWS, LMULS,
                   decorators.has_masking_maskedoff_policy)

  if g.has_tail_policy:
    g.function_group(
        binary_intcarry_template,
        "Vector Integer Add-with-Carry / Subtract-with-Borrow Functions",
        REF_DOC_URL +
        "#124-vector-integer-add-with-carry--subtract-with-borrow-operations",
        ["adc", "sbc"], ITYPES, SEWS, LMULS, decorators.has_no_masking_policy)

    g.function_group(
        binary_intcarry_template,
        "Vector Integer Add-with-Carry / Subtract-with-Borrow Functions",
        REF_DOC_URL +
        "#124-vector-integer-add-with-carry--subtract-with-borrow-operations",
        ["madc", "msbc"], ITYPES, SEWS, LMULS, decorators.has_no_masking)
  else:
    g.function_group(
        binary_intcarry_template,
        "Vector Integer Add-with-Carry / Subtract-with-Borrow Functions",
        REF_DOC_URL +
        "#124-vector-integer-add-with-carry--subtract-with-borrow-operations",
        ["adc", "sbc", "madc", "msbc"], ITYPES, SEWS, LMULS,
        decorators.has_no_masking)

  g.function_group(binary_op_template, "Vector Bitwise Logical Functions",
                   REF_DOC_URL + "#125-vector-bitwise-logical-operations",
                   ["and", "or", "xor"], ITYPES, SEWS, LMULS,
                   decorators.has_masking_maskedoff_policy)

  g.function_group(unary_op_template, "Vector Bitwise Logical Functions",
                   REF_DOC_URL + "#125-vector-bitwise-logical-operations",
                   ["not"], ITYPES, SEWS, LMULS,
                   decorators.has_masking_maskedoff_policy)

  g.function_group(
      binary_op_template, "Vector Single-Width Bit Shift Functions",
      REF_DOC_URL + "#126-vector-single-width-bit-shift-operations",
      ["sll", "srl", "sra"], ITYPES, SEWS, LMULS,
      decorators.has_masking_maskedoff_policy)

  g.function_group(
      binary_nop_template, "Vector Narrowing Integer Right Shift Functions",
      REF_DOC_URL + "#127-vector-narrowing-integer-right-shift-operations",
      ["nsrl", "nsra"], ITYPES, WSEWS, WLMULS,
      decorators.has_masking_maskedoff_policy)

  g.function_group(cmp_template, "Vector Integer Comparison Functions",
                   REF_DOC_URL + "#128-vector-integer-comparison-operations",
                   ["eq", "ne", "lt", "le", "gt", "ge"], ITYPES, SEWS, LMULS,
                   decorators.has_masking_maskedoff_policy_mu_ma)

  g.function_group(binary_op_template, "Vector Integer Min/Max Functions",
                   REF_DOC_URL + "#129-vector-integer-minmax-operations",
                   ["min", "max"], ITYPES, SEWS, LMULS,
                   decorators.has_masking_maskedoff_policy)

  g.function_group(
      binary_op_template, "Vector Single-Width Integer Multiply Functions",
      REF_DOC_URL + "#1210-vector-single-width-integer-multiply-operations",
      ["mul", "mulh", "mulhsu"], ITYPES, SEWS, LMULS,
      decorators.has_masking_maskedoff_policy)

  g.function_group(binary_op_template, "Vector Integer Divide Functions",
                   REF_DOC_URL + "#1211-vector-integer-divide-operations",
                   ["div", "rem"], ITYPES, SEWS, LMULS,
                   decorators.has_masking_maskedoff_policy)

  g.function_group(
      binary_wop_template, "Vector Widening Integer Multiply Functions",
      REF_DOC_URL + "#1212-vector-widening-integer-multiply-operations",
      ["wmul", "wmulsu"], ITYPES, WSEWS, WLMULS,
      decorators.has_masking_maskedoff_policy)

  g.function_group(
      mac_template, "Vector Single-Width Integer Multiply-Add Functions",
      REF_DOC_URL + "#1213-vector-single-width-integer-multiply-add-operations",
      ["macc", "nmsac", "madd", "nmsub"], ITYPES, SEWS, LMULS,
      decorators.has_masking_no_maskedoff_policy)

  g.function_group(
      mac_template, "Vector Widening Integer Multiply-Add Functions",
      REF_DOC_URL + "#1214-vector-widening-integer-multiply-add-operations",
      ["wmacc", "wmaccsu", "wmaccus"], ITYPES, WSEWS, WLMULS,
      decorators.has_masking_no_maskedoff_policy)

  g.function_group(unary_op_template, "Vector Integer Merge Functions",
                   REF_DOC_URL + "#1216-vector-integer-merge-operations",
                   ["merge"], ITYPES, SEWS, LMULS,
                   decorators.has_no_masking_policy)

  g.function_group(unary_op_template, "Vector Integer Move Functions",
                   REF_DOC_URL + "#1217-vector-integer-move-operations", ["mv"],
                   ITYPES, SEWS, LMULS, decorators.has_no_masking_policy)

  ####################################################################
  g.start_group("Vector Fixed-Point Arithmetic Functions")

  g.function_group(
      binary_op_template,
      "Vector Single-Width Saturating Add and Subtract Functions",
      REF_DOC_URL + "#131-vector-single-width-saturating-add-and-subtract",
      ["sadd", "ssub"], ITYPES, SEWS, LMULS,
      decorators.has_masking_maskedoff_policy_vxrm)

  g.function_group(
      binary_op_template,
      "Vector Single-Width Averaging Add and Subtract Functions",
      REF_DOC_URL + "#132-vector-single-width-averaging-add-and-subtract",
      ["aadd", "asub"], ITYPES, SEWS, LMULS,
      decorators.has_masking_maskedoff_policy_vxrm)

  g.function_group(
      binary_op_template,
      "Vector Single-Width Fractional Multiply with Rounding and Saturation" +
      " Functions", REF_DOC_URL +
      "#133-vector-single-width-fractional-multiply-with-rounding-and-" +
      "saturation", ["smul"], ["int"], SEWS, LMULS,
      decorators.has_masking_maskedoff_policy_vxrm)

  g.function_group(
      binary_op_template, "Vector Single-Width Scaling Shift Functions",
      REF_DOC_URL + "#134-vector-single-width-scaling-shift-operations",
      ["ssrl", "ssra"], ITYPES, SEWS, LMULS,
      decorators.has_masking_maskedoff_policy_vxrm)

  g.function_group(
      binary_nop_template, "Vector Narrowing Fixed-Point Clip Functions",
      REF_DOC_URL + "#135-vector-narrowing-fixed-point-clip-operations",
      ["nclip"], ITYPES, WSEWS, WLMULS,
      decorators.has_masking_maskedoff_policy_vxrm)

  ####################################################################
  g.start_group("Vector Floating-Point Functions")

  g.function_group(
      binary_op_template,
      "Vector Single-Width Floating-Point Add/Subtract Functions", REF_DOC_URL +
      "#142-vector-single-width-floating-point-addsubtract-operations",
      ["fadd", "fsub", "frsub", "fneg"], FTYPES, FSEWS, LMULS,
      decorators.has_masking_maskedoff_policy)

  g.function_group(
      binary_wop_template,
      "Vector Widening Floating-Point Add/Subtract Functions", REF_DOC_URL +
      "#143-vector-widening-floating-point-addsubtract-operations",
      ["fwadd", "fwsub"], FTYPES, WFSEWS, WLMULS,
      decorators.has_masking_maskedoff_policy)

  g.function_group(
      binary_op_template,
      "Vector Single-Width Floating-Point Multiply/Divide Functions",
      REF_DOC_URL +
      "#144-vector-single-width-floating-point-multiplydivide-operations",
      ["fmul", "fdiv", "frdiv"], FTYPES, FSEWS, LMULS,
      decorators.has_masking_maskedoff_policy)

  g.function_group(
      binary_wop_template, "Vector Widening Floating-Point Multiply Functions",
      REF_DOC_URL + "#145-vector-widening-floating-point-multiply-operations",
      ["fwmul"], FTYPES, WFSEWS, WLMULS,
      decorators.has_masking_maskedoff_policy)

  g.function_group(
      mac_template,
      "Vector Single-Width Floating-Point Fused Multiply-Add Functions",
      REF_DOC_URL +
      "#146-vector-single-width-floating-point-fused-multiply-add-operations",
      ["macc", "nmacc", "msac", "nmsac", "madd", "nmadd", "msub", "nmsub"],
      FTYPES, FSEWS, LMULS, decorators.has_masking_no_maskedoff_policy)

  g.function_group(
      mac_template,
      "Vector Widening Floating-Point Fused Multiply-Add Functions",
      REF_DOC_URL +
      "#147-vector-widening-floating-point-fused-multiply-add-operations",
      ["wmacc", "wnmacc", "wmsac", "wnmsac"], FTYPES, WFSEWS, WLMULS,
      decorators.has_masking_no_maskedoff_policy)

  g.function_group(
      unary_op_template, "Vector Floating-Point Square-Root Functions",
      REF_DOC_URL + "#148-vector-floating-point-square-root-operations",
      ["sqrt"], FTYPES, FSEWS, LMULS, decorators.has_masking_maskedoff_policy)

  g.function_group(
      unary_op_template,
      "Vector Floating-Point Reciprocal Square-Root Estimate Functions",
      REF_DOC_URL +
      "#149-vector-floating-point-reciprocal-square-root-estimate-operations",
      ["rsqrt7"], FTYPES, FSEWS, LMULS, decorators.has_masking_maskedoff_policy)

  g.function_group(
      unary_op_template, "Vector Floating-Point Reciprocal Estimate Functions",
      REF_DOC_URL +
      "#1410-vector-floating-point-reciprocal-estimate-operations", ["rec7"],
      FTYPES, FSEWS, LMULS, decorators.has_masking_maskedoff_policy)

  g.function_group(
      binary_op_template, "Vector Floating-Point MIN/MAX Functions",
      REF_DOC_URL + "#1411-vector-floating-point-minmax-operations",
      ["fmin", "fmax"], FTYPES, FSEWS, LMULS,
      decorators.has_masking_maskedoff_policy)

  g.function_group(
      binary_op_template, "Vector Floating-Point Sign-Injection Functions",
      REF_DOC_URL + "#1412-vector-floating-point-sign-injection-operations",
      ["fsgnj", "fsgnjn", "fsgnjx"], FTYPES, FSEWS, LMULS,
      decorators.has_masking_maskedoff_policy)

  g.function_group(
      unary_op_template, "Vector Floating-Point Absolute Value Functions",
      REF_DOC_URL + "#1412-vector-floating-point-sign-injection-operations",
      ["abs"], FTYPES, FSEWS, LMULS, decorators.has_masking_maskedoff_policy)

  g.function_group(
      cmp_template, "Vector Floating-Point Compare Functions",
      REF_DOC_URL + "#1413-vector-floating-point-compare-operations",
      ["eq", "ne", "lt", "le", "gt", "ge"], FTYPES, FSEWS, LMULS,
      decorators.has_masking_maskedoff_policy_mu_ma)

  g.function_group(
      unary_op_template, "Vector Floating-Point Classify Functions",
      REF_DOC_URL + "#1414-vector-floating-point-classify-operations",
      ["class"], FTYPES, FSEWS, LMULS, decorators.has_masking_maskedoff_policy)

  g.function_group(unary_op_template, "Vector Floating-Point Merge Functions",
                   REF_DOC_URL + "#1415-vector-floating-point-merge-operations",
                   ["merge"], FTYPES, FSEWS, LMULS,
                   decorators.has_no_masking_policy)

  g.function_group(unary_op_template, "Vector Floating-Point Move Functions",
                   REF_DOC_URL + "#1416-vector-floating-point-move-operations",
                   ["mv"], FTYPES, FSEWS, LMULS,
                   decorators.has_no_masking_policy)

  g.function_group(
      cvt_op_template,
      "Single-Width Floating-Point/Integer Type-Convert Functions",
      REF_DOC_URL +
      "#1417-single-width-floating-pointinteger-type-convert-operations",
      ["cvt"], "", SEWS, LMULS, decorators.has_masking_maskedoff_policy)

  g.function_group(
      cvt_op_template, "Widening Floating-Point/Integer Type-Convert Functions",
      REF_DOC_URL +
      "#1418-widening-floating-pointinteger-type-convert-operations", ["wcvt"],
      "", WSEWS, WLMULS, decorators.has_masking_maskedoff_policy)

  g.function_group(
      cvt_op_template,
      "Narrowing Floating-Point/Integer Type-Convert Functions", REF_DOC_URL +
      "#1419-narrowing-floating-pointinteger-type-convert-operations", ["ncvt"],
      "", NSEWS, NCVTLMULS, decorators.has_masking_maskedoff_policy)

  ####################################################################
  g.start_group("Vector Reduction Functions")

  g.function_group(
      reduction_template, "Vector Single-Width Integer Reduction Functions",
      REF_DOC_URL + "#151-vector-single-width-integer-reduction-operations",
      ["redsum", "redmax", "redmin", "redand", "redor", "redxor"], ITYPES, SEWS,
      LMULS, decorators.has_masking_no_maskedoff_reduction_policy)

  g.function_group(
      reduction_template, "Vector Widening Integer Reduction Functions",
      REF_DOC_URL + "##152-vector-widening-integer-reduction-operations",
      ["wredsum"], ITYPES, SEWS, LMULS,
      decorators.has_masking_no_maskedoff_reduction_policy)

  g.function_group(
      reduction_template,
      "Vector Single-Width Floating-Point Reduction Functions", REF_DOC_URL +
      "#153-vector-single-width-floating-point-reduction-operations",
      ["redosum", "redusum", "redmax", "redmin"], FTYPES, FSEWS, LMULS,
      decorators.has_masking_no_maskedoff_reduction_policy)

  g.function_group(
      reduction_template, "Vector Widening Floating-Point Reduction Functions",
      REF_DOC_URL + "#154-vector-widening-floating-point-reduction-operations",
      ["wredosum", "wredusum"], FTYPES, FSEWS, LMULS,
      decorators.has_masking_no_maskedoff_reduction_policy)

  ####################################################################
  g.start_group("Vector Mask Functions")

  g.function_group(mask_load_store_template, "Vector Mask Load/Store Functions",
                   REF_DOC_URL + "#74-vector-unit-stride-operations",
                   ["vlm", "vsm"], MTYPES, MLENS, [1],
                   decorators.has_no_masking)

  g.function_group(mask_template, "Vector Mask-Register Logical Functions",
                   REF_DOC_URL + "#161-vector-mask-register-logical-operations",
                   [
                       "and", "nand", "andn", "xor", "or", "nor", "orn", "xnor",
                       "mv", "clr", "set", "not"
                   ], MTYPES, MLENS, [1], decorators.has_no_masking)

  g.function_group(mask_template, "Vector count population in mask Functions",
                   REF_DOC_URL + "#162-vector-count-population-in-mask-vcpopm",
                   ["cpop"], MTYPES, MLENS, [1],
                   decorators.has_masking_no_maskedoff)

  g.function_group(mask_template, "Find-first-set mask bit Functions",
                   REF_DOC_URL + "#163-vfirst-find-first-set-mask-bit",
                   ["first"], MTYPES, MLENS, [1],
                   decorators.has_masking_no_maskedoff)

  g.function_group(mask_template, "Set-before-first mask bit Functions",
                   REF_DOC_URL + "#164-vmsbfm-set-before-first-mask-bit",
                   ["sbf"], MTYPES, MLENS, [1],
                   decorators.has_masking_maskedoff_policy_mu_ma)

  g.function_group(mask_template, "Set-including-first mask bit Functions",
                   REF_DOC_URL + "#165-vmsifm-set-including-first-mask-bit",
                   ["sif"], MTYPES, MLENS, [1],
                   decorators.has_masking_maskedoff_policy_mu_ma)

  g.function_group(mask_template, "Set-only-first mask bit Functions",
                   REF_DOC_URL + "#166-vmsofm-set-only-first-mask-bit", ["sof"],
                   MTYPES, MLENS, [1],
                   decorators.has_masking_maskedoff_policy_mu_ma)

  g.function_group(mask_template, "Vector Iota Functions",
                   REF_DOC_URL + "#168-vector-iota-operations", ["iota"],
                   MTYPES, SEWS, LMULS, decorators.has_masking_maskedoff_policy)

  g.function_group(mask_template, "Vector Element Index Functions",
                   REF_DOC_URL + "#169-vector-element-index-operations", ["id"],
                   MTYPES, SEWS, LMULS, decorators.has_masking_maskedoff_policy)

  ####################################################################
  g.start_group("Vector Permutation Functions")

  g.function_group(permute_template,
                   "Integer and Floating-Point Scalar Move Functions",
                   REF_DOC_URL + "#171-integer-scalar-move-operations", ["mv"],
                   TYPES, SEWS, LMULS, decorators.has_no_masking_policy)

  g.function_group(permute_template, "Vector Slideup Functions",
                   REF_DOC_URL + "#173-vector-slide-operations", ["slideup"],
                   TYPES, SEWS, LMULS,
                   decorators.has_masking_no_maskedoff_policy_vslide)

  g.function_group(permute_template, "Vector Slidedown Functions",
                   REF_DOC_URL + "#173-vector-slide-operations", ["slidedown"],
                   TYPES, SEWS, LMULS, decorators.has_masking_maskedoff_policy)

  g.function_group(
      permute_template, "Vector Slide1up and Slide1down Functions",
      REF_DOC_URL + "#173-vector-slide1up-and-slide1down-functions",
      ["slide1up", "slide1down"], TYPES, SEWS, LMULS,
      decorators.has_masking_maskedoff_policy)

  g.function_group(binary_op_template, "Vector Register Gather Functions",
                   REF_DOC_URL + "#174-vector-register-gather-operations",
                   ["rgather", "rgatherei16"], TYPES, SEWS, LMULS,
                   decorators.has_masking_maskedoff_policy)

  g.function_group(permute_template, "Vector Compress Functions",
                   REF_DOC_URL + "#175-vector-compress-operations",
                   ["compress"], TYPES, SEWS, LMULS,
                   decorators.has_no_masking_policy)

  ####################################################################
  g.start_group("Miscellaneous Vector Functions")

  g.function_group(reint_op_template, "Reinterpret Cast Conversion Functions",
                   REF_DOC_URL + "#reinterpret-cast-conversion-functions",
                   ["reinterpret"], "", SEWS, LMULS, decorators.has_no_masking)

  g.function_group(
      misc_op_template, "Vector LMUL Extension Functions",
      REF_DOC_URL + "vector-lmul-extension-and-truncation-functions",
      ["vlmul_ext_v"], TYPES, SEWS, LMULS, decorators.has_no_masking)

  g.function_group(
      misc_op_template, "Vector LMUL Truncation Functions",
      REF_DOC_URL + "vector-lmul-extension-and-truncation-functions",
      ["vlmul_trunc_v"], TYPES, SEWS, LMULS, decorators.has_no_masking)

  g.function_group(misc_op_template, "Vector Initialization Functions",
                   REF_DOC_URL + "#vector-initialization-functions",
                   ["vundefined"], TYPES, SEWS, LMULS,
                   decorators.has_no_masking)

  g.function_group(get_set_diff_lmul_op_template, "Vector Insertion Functions",
                   REF_DOC_URL + "#vector-insertion-functions", ["vset"], TYPES,
                   SEWS, LMULS, decorators.has_no_masking)

  g.function_group(get_set_diff_lmul_op_template, "Vector Extraction Functions",
                   REF_DOC_URL + "#vector-extraction-functions", ["vget"],
                   TYPES, SEWS, LMULS, decorators.has_no_masking)

  ####################################################################
  g.gen_prologue()
