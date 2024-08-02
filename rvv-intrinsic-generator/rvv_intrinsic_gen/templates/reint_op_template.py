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

Template for rendering reinterpret cast conversion functions to their
corresponding intrinsics.
"""

#pylint: disable=relative-beyond-top-level
from utils import prod
from utils import TypeHelper
from enums import InstInfo
from enums import InstType
from generator import CompatibleHeaderGenerator


def render(G, op_list, type_list, sew_list, lmul_list, decorator_list,
           description):
  #pylint: disable=invalid-name, unused-argument
  # FIXME: Renaming 'G' to 'g' all in once later.
  G.emit_function_group_description(description)
  G.inst_group_prologue()
  for decorator in decorator_list:
    decorator.write_text_header(G)

    G.write("// Reinterpret between different type under the same SEW/LMUL\n")
    # Variable in list means
    # [dst type, dst short type, src type, src short type]
    if type_list == "bfloat16":
      convert_set = [["bfloat", "bf", "int",
                      "i"], ["bfloat", "bf", "uint", "u"],
                     ["int", "i", "bfloat", "bf"],
                     ["uint", "u", "bfloat", "bf"]]
    else:
      convert_set = [["float", "f", "int", "i"], ["float", "f", "uint", "u"],
                     ["uint", "u", "int", "i"], ["int", "i", "uint", "u"],
                     ["int", "i", "float", "f"], ["uint", "u", "float", "f"]]

    for args in prod(
        OP=op_list, SEW=sew_list, TYPES=convert_set, LMUL=lmul_list):
      sew = args["SEW"]
      assert args["TYPES"] is not None

      type_helper = TypeHelper(**args)
      args["TYPES0"] = args["TYPES"][0]
      args["TYPES1"] = args["TYPES"][1]
      args["TYPES2"] = args["TYPES"][2]
      args["TYPES3"] = args["TYPES"][3]

      if (args["TYPES1"] == "f" or args["TYPES3"] == "f") and sew == 8:
        continue

      if (args["TYPES1"] == "bf" or args["TYPES3"] == "bf") and sew != 16:
        continue

      rt = "v{TYPES0}{SEW}m{LMUL}_t".format_map(args)
      if not type_helper.valid_vtype(rt):
        continue

      func_name =\
        "{OP}_v_{TYPES3}{SEW}m{LMUL}_{TYPES1}{SEW}m{LMUL}".format_map(args)
      src_type = "v{TYPES2}{SEW}m{LMUL}_t".format_map(args)
      G.func(
          InstInfo.get(args, decorator, InstType.REINT),
          name=func_name + decorator.func_suffix,
          return_type=rt,
          **decorator.mask_args(type_helper.m, rt),
          src=src_type)

    # Bfloat16 reinterpretations do not have variants below
    if type_list == "bfloat16":
      continue

    G.write("// Reinterpret between different SEW under the same LMUL\n")
    # Variable in list means
    # [dst type, dst short type, src type, src short type]
    convert_set = [["int", "i", "int", "i"], ["uint", "u", "uint", "u"]]

    for args in prod(
        OP=op_list,
        SEW=sew_list,
        DST_SEW=sew_list,
        TYPES=convert_set,
        LMUL=lmul_list):
      sew = args["SEW"]
      dst_sew = args["DST_SEW"]
      if sew == dst_sew:
        continue

      type_helper = TypeHelper(**args)
      args["TYPES0"] = args["TYPES"][0]
      args["TYPES1"] = args["TYPES"][1]
      args["TYPES2"] = args["TYPES"][2]
      args["TYPES3"] = args["TYPES"][3]

      rt = "v{TYPES0}{DST_SEW}m{LMUL}_t".format_map(args)
      if not type_helper.valid_vtype(rt):
        continue

      func_name =\
        "{OP}_v_{TYPES3}{SEW}m{LMUL}_{TYPES1}{DST_SEW}m{LMUL}".format_map(args)
      src_type = "v{TYPES2}{SEW}m{LMUL}_t".format_map(args)
      G.func(
          InstInfo.get(args, decorator, InstType.REINT),
          name=func_name + decorator.func_suffix,
          return_type=rt,
          **decorator.mask_args(type_helper.m, rt),
          src=src_type)

    # This reinterpret is only available in v1.0 or newer. The current
    # compatible header targets v0.10 to v0.11 so we don't include this
    # when the generator is for compatible header.
    if isinstance(G, CompatibleHeaderGenerator):
      continue
    G.write("// Reinterpret between vector boolean types and LMUL=1 (m1)")
    G.write(" vector integer types\n")
    # [integer type, integer short type]
    convert_set = [["int", "i"], ["uint", "u"]]
    for args in prod(
        OP=op_list, SEW=sew_list, TYPES=convert_set, LMUL=lmul_list):
      assert args["TYPES"] is not None

      type_helper = TypeHelper(**args)
      args["TYPES0"] = args["TYPES"][0]
      args["TYPES1"] = args["TYPES"][1]

      args["MLEN"] = type_helper.mlen

      mask_type = "vbool{MLEN}_t".format_map(args)
      int_type = "v{TYPES0}{SEW}m1_t".format_map(args)

      func_name =\
        "{OP}_v_{TYPES1}{SEW}m1_b{MLEN}".format_map(args)
      G.func(
          InstInfo.get(args, decorator, InstType.REINT),
          name=func_name + decorator.func_suffix,
          return_type=mask_type,
          src=int_type)

      func_name =\
        "{OP}_v_b{MLEN}_{TYPES1}{SEW}m1".format_map(args)
      G.func(
          InstInfo.get(args, decorator, InstType.REINT),
          name=func_name + decorator.func_suffix,
          return_type=int_type,
          src=mask_type)

  G.inst_group_epilogue()
