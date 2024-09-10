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

Template for rendering type-convert instructions to their corresponding
intrinsics.
"""

#pylint: disable=relative-beyond-top-level
from utils import prod
from utils import TypeHelper
from enums import InstInfo
from enums import InstType
from enums import ExtraAttr
from constants import ITYPES


def render(G,
           op_list,
           type_list,
           sew_list,
           lmul_list,
           decorator_list,
           description,
           required_ext_list=None):
  #pylint: disable=invalid-name, unused-argument
  # FIXME: Renaming 'G' to 'g' all in once later.
  # FIXME: Argument 'type_list' is unused but required for interface
  # consistency. We can prune it in the future.
  G.emit_function_group_description(description)
  G.inst_group_prologue()
  for decorator in decorator_list:
    decorator.write_text_header(G)
    # Variable in list means
    # [dst_type, dst_type_short, src_type, src_type_short]
    if type_list == ITYPES:
      convert_set = [["int", "x", "int", "x"], ["uint", "x", "uint", "x"]]
    elif type_list == "bfloat16":
      if "ncvtbf16" in op_list:
        convert_set = [["bfloat", "bf", "float", "f"]]
      elif "wcvtbf16" in op_list:
        convert_set = [["float", "f", "bfloat", "bf"]]
      else:
        assert False, "Unhandled instruction with type_list = 'bfloat16'"
    else:
      convert_set = [["int", "x", "float", "f"], ["uint", "xu", "float", "f"],
                     ["float", "f", "int", "x"], ["float", "f", "uint", "xu"],
                     ["float", "f", "float", "f"]]
    for args in prod(
        OP=op_list, SEW=sew_list, TYPES=convert_set, LMUL=lmul_list):
      assert args["TYPES"] is not None
      op = args["OP"]

      type_helper = TypeHelper(**args)
      args["TYPES0"] = args["TYPES"][0]
      args["TYPES1"] = args["TYPES"][1]
      args["TYPES2"] = args["TYPES"][2]
      args["TYPES3"] = args["TYPES"][3]

      if (op == "cvt" and args["TYPES1"] == args["TYPES3"]):
        continue

      # By the v-spec:
      # A double-width IEEE floating-point value can always represent a
      # single-width integer exactly.
      # A double-width IEEE floating-point value can always represent a
      # single-width IEEE floating-point value exactly.
      # So we don't need frm variant for vfwcvt.f.f, and vfwcvt.f.x(u) here
      if "wcvt" in op and decorator.flags & ExtraAttr.HAS_FRM and\
         (args["TYPES0"] == args["TYPES2"] or\
          ("float" in args["TYPES0"] and "int" in args["TYPES2"])):
        continue

      # Int to int conversions do not need a frm variant.
      if "int" in args["TYPES0"] and\
         "int" in args["TYPES2"] and decorator.flags & ExtraAttr.HAS_FRM:
        continue

      args["MIDDLE"] = "v"
      factor = ""
      if "wcvt" in op:
        factor = "W"
      if "ncvt" in op:
        factor = "N"
        args["MIDDLE"] = "w"

      args["LLMUL"] = args[factor + "LMUL"]
      args["LSEW"] = args[factor + "SEW"]

      if "f" in args["TYPES1"] or "f" in args["TYPES3"]:
        args["OP"] = "f" + args["OP"]

      if args["TYPES0"] == "uint":
        args["D_TYPE"] = "u"
      elif args["TYPES1"] == "x":
        args["D_TYPE"] = "i"
      else:
        args["D_TYPE"] = "f"

      if op == "wcvt" and \
         (args["TYPES0"] == "uint" and args["TYPES2"] == "uint"):
        args["OP"] += "u"

      args["OP"] = "v" + args["OP"]

      extra_attr = ExtraAttr.CONVERT
      inst_info = InstInfo.get(
          args,
          decorator,
          InstType.VV,
          extra_attr=extra_attr,
          required_ext=required_ext_list)

      args["TYPE"] = args["TYPES2"]
      src_type_helper = TypeHelper(**args)
      args["TYPE"] = args["TYPES0"]  # destination type
      args["SEW"] = args["LSEW"]  # destination sew
      args["LMUL"] = args["LLMUL"]  # destination lmul
      dst_type_helper = TypeHelper(**args)
      src_type = src_type_helper.v
      dst_type = dst_type_helper.v
      if not type_helper.valid_vtype(dst_type) or\
         not type_helper.valid_vtype(src_type):
        continue
      if type_list == "bfloat16":
        if "ncvt" in args["OP"]:
          func_name = "{OP}_f_f_w_bf{LSEW}m{LLMUL}".format_map(args)
        elif "wcvt" in args["OP"]:
          func_name = "{OP}_f_f_v_f{LSEW}m{LLMUL}".format_map(args)
        else:
          assert False, "Unhandled instruction for bfloat16 type"
      else:
        func_name = \
          "{OP}_{TYPES1}_{TYPES3}_{MIDDLE}_{D_TYPE}{LSEW}m{LLMUL}".format_map\
          (args)
      G.func(
          inst_info,
          name=func_name + decorator.func_suffix,
          return_type=dst_type,
          **decorator.mask_args(type_helper.m, dst_type),
          **decorator.tu_dest_args(dst_type),
          vs2=src_type,
          **decorator.extra_csr_args(type_helper.uint),
          vl=type_helper.size_t)

      # The following if-statements has a rounding mode specified within the
      # instruction, and not affected by the dynamic rounding mode.
      # Skip generation for decorator that has a rounding mode attribute.
      if decorator.flags & ExtraAttr.HAS_FRM:
        continue

      # BFloat16 converts do not have `_rod`/`_rtz` instructions
      if type_list == "bfloat16":
        continue

      if args["TYPES1"] != args["TYPES3"] and args["TYPES3"] == "f":
        args["OP"] = args["OP"] + "_rtz"
        inst_info = InstInfo.get(
            args,
            decorator,
            InstType.VV,
            extra_attr=extra_attr,
            required_ext=required_ext_list)
        func_name =\
          "{OP}_{TYPES1}_{TYPES3}_{MIDDLE}_{D_TYPE}{LSEW}m{LLMUL}".format_map\
          (args)
        G.func(
            inst_info,
            name=func_name + decorator.func_suffix,
            return_type=dst_type,
            **decorator.mask_args(type_helper.m, dst_type),
            **decorator.tu_dest_args(dst_type),
            vs2=src_type,
            vl=type_helper.size_t)

      if op == "ncvt" and args["TYPES1"] == "f" and args["TYPES3"] == "f":
        args["OP"] = args["OP"] + "_rod"
        inst_info = \
          InstInfo.get(args, decorator, InstType.VV, extra_attr=extra_attr,
                       required_ext = required_ext_list)
        func_name = \
          "{OP}_{TYPES1}_{TYPES3}_{MIDDLE}_{D_TYPE}{LSEW}m{LLMUL}".format_map\
          (args)
        G.func(
            inst_info,
            name=func_name + decorator.func_suffix,
            return_type=dst_type,
            **decorator.mask_args(type_helper.m, dst_type),
            **decorator.tu_dest_args(dst_type),
            vs2=src_type,
            vl=type_helper.size_t)

  G.inst_group_epilogue()
