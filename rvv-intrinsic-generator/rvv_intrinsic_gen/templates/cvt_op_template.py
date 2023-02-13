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


def render(G, op_list, type_list, sew_list, lmul_list, decorator_list):
  #pylint: disable=invalid-name, unused-argument
  # FIXME: Renaming 'G' to 'g' all in once later.
  # FIXME: Argument 'type_list' is unused but required for interface
  # consistency. We can prune it in the future.
  G.inst_group_prologue()
  for decorator in decorator_list:
    decorator.write_text_header(G)
    # Variable in list means
    # [dst_type, dst_type_short, src_type, src_type_short]
    convert_set = [["int", "x", "float", "f"], ["int", "x", "int", "x"],
                   ["uint", "x", "uint", "x"], ["uint", "xu", "float", "f"],
                   ["float", "f", "int", "x"], ["float", "f", "uint", "xu"],
                   ["float", "f", "float", "f"]]
    for args in prod(
        OP=op_list, SEW=sew_list, TYPES=convert_set, LMUL=lmul_list):
      op = args["OP"]

      type_helper = TypeHelper(**args)
      args["TYPES0"] = args["TYPES"][0]
      args["TYPES1"] = args["TYPES"][1]
      args["TYPES2"] = args["TYPES"][2]
      args["TYPES3"] = args["TYPES"][3]

      if (op == "cvt" and args["TYPES1"] == args["TYPES3"]):
        continue

      args["MIDDLE"] = "v"
      factor = ""
      if op == "wcvt":
        factor = "W"
      if op == "ncvt":
        factor = "N"
        args["MIDDLE"] = "w"

      args["LLMUL"] = args[factor + "LMUL"]
      args["LSEW"] = args[factor + "SEW"]

      if args["TYPES1"] == "f" or args["TYPES3"] == "f":
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
          args, decorator, InstType.VV, extra_attr=extra_attr)

      src_type = "v{TYPES2}{SEW}m{LMUL}_t".format_map(args)
      rt = "v{TYPES0}{LSEW}m{LLMUL}_t".format_map(args)
      if not type_helper.valid_vtype(rt) or\
         not type_helper.valid_vtype(src_type):
        continue
      func_name = \
        "{OP}_{TYPES1}_{TYPES3}_{MIDDLE}_{D_TYPE}{LSEW}m{LLMUL}".format_map\
        (args)
      G.func(
          inst_info,
          name=func_name + decorator.func_suffix,
          return_type=rt,
          **decorator.mask_args(type_helper.m, rt),
          **decorator.tu_dest_args(rt),
          src=src_type,
          vl=type_helper.size_t)
      if args["TYPES1"] != args["TYPES3"] and args["TYPES3"] == "f":
        args["OP"] = args["OP"] + "_rtz"
        inst_info = InstInfo.get(
            args, decorator, InstType.VV, extra_attr=extra_attr)
        func_name =\
          "{OP}_{TYPES1}_{TYPES3}_{MIDDLE}_{D_TYPE}{LSEW}m{LLMUL}".format_map\
          (args)
        G.func(
            inst_info,
            name=func_name + decorator.func_suffix,
            return_type=rt,
            **decorator.mask_args(type_helper.m, rt),
            **decorator.tu_dest_args(rt),
            src=src_type,
            vl=type_helper.size_t)

      if op == "ncvt" and args["TYPES1"] == "f" and args["TYPES3"] == "f":
        args["OP"] = args["OP"] + "_rod"
        inst_info = \
          InstInfo.get(args, decorator, InstType.VV, extra_attr=extra_attr)
        func_name = \
          "{OP}_{TYPES1}_{TYPES3}_{MIDDLE}_{D_TYPE}{LSEW}m{LLMUL}".format_map\
          (args)
        G.func(
            inst_info,
            name=func_name + decorator.func_suffix,
            return_type=rt,
            **decorator.mask_args(type_helper.m, rt),
            **decorator.tu_dest_args(rt),
            src=src_type,
            vl=type_helper.size_t)

  G.inst_group_epilogue()
