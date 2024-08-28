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

Template for rendering mask instructions to their corresponding intrinsics.
"""

#pylint: disable=relative-beyond-top-level
from utils import prod
from utils import TypeHelper
from enums import InstInfo
from enums import InstType


def render(G,
           op_list,
           type_list,
           sew_list,
           lmul_list,
           decorator_list,
           description,
           required_ext_list=None):
  #pylint: disable=invalid-name
  # FIXME: Renaming 'G' to 'g' all in once later.
  G.emit_function_group_description(description)
  G.inst_group_prologue()
  for decorator in decorator_list:
    decorator.write_text_header(G)
    # treat sew_list as MLEN
    for args in prod(OP=op_list, TYPE=type_list, MLEN=sew_list):
      assert args["OP"] is not None
      op = args["OP"]
      if op not in ["cpop", "first"]:
        args["OP"] = "m" + args["OP"]
      type_helper = TypeHelper(**args)

      if op in ["iota", "id"]:
        continue

      args["OP"] = "v" + args["OP"]

      inst_info_mm = InstInfo.get(
          args, decorator, InstType.MMM, required_ext=required_ext_list)
      inst_info_m = InstInfo.get(
          args, decorator, InstType.MM, required_ext=required_ext_list)

      if op in ["mv", "not"]:  # unary operator
        G.func(
            inst_info_m,
            name="{OP}_m_b{MLEN}".format_map(args) + decorator.func_suffix,
            return_type=type_helper.m,
            vs=type_helper.m,
            vl=type_helper.size_t)
      elif op in ["clr", "set"]:  # nullary operator
        G.func(
            inst_info_m,
            name="{OP}_m_b{MLEN}".format_map(args) + decorator.func_suffix,
            return_type=type_helper.m,
            vl=type_helper.size_t)
      elif op in ["sbf", "sif", "sof"]:
        G.func(
            inst_info_m,
            name="{OP}_m_b{MLEN}".format_map(args) + decorator.func_suffix,
            return_type=type_helper.m,
            **decorator.mask_args(type_helper.m, type_helper.m),
            vs2=type_helper.m,
            vl=type_helper.size_t)
      elif op == "cpop":
        G.func(
            inst_info_m,
            name="{OP}_m_b{MLEN}".format_map(args) + decorator.func_suffix,
            return_type=type_helper.ulong,
            **decorator.mask_args(type_helper.m),
            vs2=type_helper.m,
            vl=type_helper.size_t)
      elif op == "first":
        G.func(
            inst_info_m,
            name="{OP}_m_b{MLEN}".format_map(args) + decorator.func_suffix,
            return_type=type_helper.long,
            **decorator.mask_args(type_helper.m),
            vs2=type_helper.m,
            vl=type_helper.size_t)
      else:  # binary operator
        G.func(
            inst_info_mm,
            name="{OP}_mm_b{MLEN}".format_map(args) + decorator.func_suffix,
            return_type=type_helper.m,
            **decorator.mask_args(type_helper.m),
            vs2=type_helper.m,
            vs1=type_helper.m,
            vl=type_helper.size_t)

    for args in prod(OP=op_list, TYPE=type_list, SEW=sew_list, LMUL=lmul_list):
      assert args["OP"] is not None
      op = args["OP"]
      type_helper = TypeHelper(**args)

      args["OP"] = "v" + args["OP"]

      if op == "iota":
        G.func(
            InstInfo.get(args, decorator, InstType.MM,
                         required_ext = required_ext_list),
            name=\
            "viota_m_u{SEW}m{LMUL}".format_map(args) + decorator.func_suffix,
            return_type=type_helper.uiv,
            **decorator.mask_args(type_helper.m, type_helper.uiv),
            **decorator.tu_dest_args(type_helper.uiv),
            vs2=type_helper.m,
            vl=type_helper.size_t)
      if op == "id":
        G.func(
            InstInfo.get(
                args, decorator, InstType.VM, required_ext=required_ext_list),
            name="vid_v_u{SEW}m{LMUL}".format_map(args) + decorator.func_suffix,
            return_type=type_helper.uiv,
            **decorator.mask_args(type_helper.m, type_helper.uiv),
            **decorator.tu_dest_args(type_helper.uiv),
            vl=type_helper.size_t)

  G.inst_group_epilogue()
