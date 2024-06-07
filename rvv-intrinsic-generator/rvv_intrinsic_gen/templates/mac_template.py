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

Template for rendering multiply-add instructions to their corresponding
intrinsics.
"""

#pylint: disable=relative-beyond-top-level
from utils import prod
from utils import TypeHelper
from enums import InstInfo
from enums import InstType
from enums import ExtraAttr


def render(G, op_list, type_list, sew_list, lmul_list, decorator_list,
           description):
  #pylint: disable=invalid-name
  # FIXME: Renaming 'G' to 'g' all in once later.
  G.emit_function_group_description(description)
  G.inst_group_prologue()
  for decorator in decorator_list:
    decorator.write_text_header(G)
    for args in prod(OP=op_list, TYPE=type_list, SEW=sew_list, LMUL=lmul_list):
      assert args["TYPE"] is not None
      data_type = args["TYPE"]
      op = args["OP"]

      # Integer intrinsics do not have frm variant.
      if "int" in data_type and decorator.flags & ExtraAttr.HAS_FRM:
        continue

      if "float" in data_type:
        args["S_TYPE"] = "f"
        args["OP"] = "f" + op
        inst_type = InstType.VVF
      else:
        args["S_TYPE"] = "x"
        inst_type = InstType.VVX

      if op in ["wmacc", "qmacc"] and data_type == "uint":
        args["OP"] = args["OP"] + "u"

      args["OP"] = "v" + args["OP"]

      inst_info_vs = InstInfo.get(
          args, decorator, inst_type, extra_attr=ExtraAttr.MAC)
      inst_info_vv = InstInfo.get(
          args, decorator, InstType.VVV, extra_attr=ExtraAttr.MAC)
      inst_info_vx = InstInfo.get(
          args, decorator, InstType.VVX, extra_attr=ExtraAttr.MAC)

      type_helper = TypeHelper(**args)
      if (("maccsu" in op) or ("maccus" in op)) and data_type == "uint":
        # maccsu and maccus only support int type
        continue
      elif (("w" in op) or ("q" in op)) and ("int" in data_type):
        if "q" in op:
          w_vtype = type_helper.qv
          args["SEW"] = args["QSEW"]
          args["LMUL"] = args["QLMUL"]
        else:
          w_vtype = type_helper.wv
          args["SEW"] = args["WSEW"]
          args["LMUL"] = args["WLMUL"]

        rt = w_vtype
        if "maccsu" in op:
          G.func(
              inst_info_vv,
              name="{OP}_vv_{TYPE}{SEW}m{LMUL}".format_map(args) +
              decorator.func_suffix,
              return_type=rt,
              **decorator.mask_args(type_helper.m, type_helper.v),
              vd=rt,
              vs1=type_helper.siv,
              vs2=type_helper.uiv,
              vl=type_helper.size_t)
          G.func(
              inst_info_vx,
              name="{OP}_vx_{TYPE}{SEW}m{LMUL}".format_map(args) +
              decorator.func_suffix,
              return_type=rt,
              **decorator.mask_args(type_helper.m, type_helper.v),
              vd=rt,
              rs1=type_helper.sis,
              vs2=type_helper.uiv,
              vl=type_helper.size_t)
        elif "maccus" in op:
          G.func(
              inst_info_vx,
              name="{OP}_vx_{TYPE}{SEW}m{LMUL}".format_map(args) +
              decorator.func_suffix,
              return_type=rt,
              **decorator.mask_args(type_helper.m, type_helper.v),
              vd=rt,
              rs1=type_helper.uis,
              vs2=type_helper.siv,
              vl=type_helper.size_t)
        elif "macc" in op:
          G.func(
              inst_info_vv,
              name="{OP}_vv_{TYPE}{SEW}m{LMUL}".format_map(args) +
              decorator.func_suffix,
              return_type=rt,
              **decorator.mask_args(type_helper.m, type_helper.v),
              vd=rt,
              vs1=type_helper.v,
              vs2=type_helper.v,
              vl=type_helper.size_t)
          G.func(
              inst_info_vs,
              name="{OP}_v{S_TYPE}_{TYPE}{SEW}m{LMUL}".format_map(args) +
              decorator.func_suffix,
              return_type=rt,
              **decorator.mask_args(type_helper.m, type_helper.v),
              vd=rt,
              rs1=type_helper.s,
              vs2=type_helper.v,
              vl=type_helper.size_t)
      elif "float" in data_type and "w" in op:
        # Vector BF16 widening multiply-accumulate computes into FP32 values
        if args["TYPE"] == "bfloat":
          args["TYPE"] = "float"
          dst_type_helper = TypeHelper(**args)
          dst_type = dst_type_helper.wv
        else:
          dst_type = type_helper.wv

        G.func(
            inst_info_vv,
            name="{OP}_vv_{TYPE}{WSEW}m{WLMUL}".format_map(args) +
            decorator.func_suffix,
            return_type=dst_type,
            **decorator.mask_args(type_helper.m, type_helper.v),
            vd=dst_type,
            vs1=type_helper.v,
            vs2=type_helper.v,
            **decorator.extra_csr_args(type_helper.uint),
            vl=type_helper.size_t)
        G.func(
            inst_info_vs,
            name="{OP}_v{S_TYPE}_{TYPE}{WSEW}m{WLMUL}".format_map(args) +
            decorator.func_suffix,
            return_type=dst_type,
            **decorator.mask_args(type_helper.m, type_helper.v),
            vd=dst_type,
            vs1=type_helper.s,
            vs2=type_helper.v,
            **decorator.extra_csr_args(type_helper.uint),
            vl=type_helper.size_t)
      else:
        G.func(
            inst_info_vv,
            name="{OP}_vv_{TYPE}{SEW}m{LMUL}".format_map(args) +
            decorator.func_suffix,
            return_type=type_helper.v,
            **decorator.mask_args(type_helper.m, type_helper.v),
            vd=type_helper.v,
            vs1=type_helper.v,
            vs2=type_helper.v,
            **decorator.extra_csr_args(type_helper.uint),
            vl=type_helper.size_t)
        G.func(
            inst_info_vs,
            name="{OP}_v{S_TYPE}_{TYPE}{SEW}m{LMUL}".format_map(args) +
            decorator.func_suffix,
            return_type=type_helper.v,
            **decorator.mask_args(type_helper.m, type_helper.v),
            vd=type_helper.v,
            rs1=type_helper.s,
            vs2=type_helper.v,
            **decorator.extra_csr_args(type_helper.uint),
            vl=type_helper.size_t)

  G.inst_group_epilogue()
