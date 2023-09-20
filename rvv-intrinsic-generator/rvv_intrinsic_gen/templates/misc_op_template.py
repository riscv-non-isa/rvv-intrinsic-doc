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

Template for rendering LMUL extension, LMUL truncation, and intitialization
function to their corresponding intrinsics.
"""

#pylint: disable=relative-beyond-top-level
from utils import prod
from utils import seg_constraint
from utils import TypeHelper
from utils import get_float_lmul
import collections
from enums import InstInfo
from enums import InstType
from generator import CompatibleHeaderGenerator


def render(G, op_list, type_list, sew_list, lmul_list, decorator_list):
  #pylint: disable=invalid-name
  # FIXME: Renaming 'G' to 'g' all in once later.
  G.inst_group_prologue()
  for decorator in decorator_list:
    if "vlmul_ext_v" in op_list or "vlmul_trunc_v" in op_list:
      break
    decorator.write_text_header(G)

    for args in prod(OP=op_list, TYPE=type_list, SEW=sew_list, LMUL=lmul_list):
      type_helper = TypeHelper(**args)
      if args["OP"] not in ["vundefined"]:
        break
      if args["TYPE"] == "float" and args["SEW"] == 8:
        continue
      if args["OP"] == "vundefined":
        inst_type = InstType.VUNDEF
      G.func(
          InstInfo.get(args, decorator, inst_type),
          name="{OP}_{TYPE}{SEW}m{LMUL}".format_map(args) +
          decorator.func_suffix,
          return_type=type_helper.v)

  for decorator in decorator_list:
    if not ("vlmul_ext_v" in op_list or "vlmul_trunc_v" in op_list):
      break
    for args in prod(
        OP=op_list,
        TYPE=type_list,
        SEW=sew_list,
        LMUL=lmul_list,
        DST_LMUL=lmul_list):
      op = args["OP"]
      src_lmul = args["LMUL"]
      dst_lmul = args["DST_LMUL"]
      if op == "vlmul_trunc_v":
        inst_type = InstType.LMUL_TRUNC
        if get_float_lmul(src_lmul) <= get_float_lmul(dst_lmul):
          continue
      if op == "vlmul_ext_v":
        inst_type = InstType.LMUL_EXT
        if get_float_lmul(src_lmul) >= get_float_lmul(dst_lmul):
          continue
      type_helper = TypeHelper(**args)
      dst_type = "v{TYPE}{SEW}m{DST_LMUL}_t".format_map(args)
      if not type_helper.valid_vtype(dst_type):
        continue
      args["TYPE1"] = args["TYPE"][0]
      func_name = "{OP}_{TYPE1}{SEW}m{LMUL}_{TYPE1}{SEW}m{DST_LMUL}".format_map(
          args)
      G.func(
          InstInfo.get(args, decorator, inst_type),
          name=func_name + decorator.func_suffix,
          return_type=dst_type,
          value=type_helper.v)

  nf_list = range(2, 9)
  for decorator in decorator_list:
    if not "vcreate" in op_list:
      break
    for args in prod(
        constraint=seg_constraint,
        OP=op_list,
        TYPE=type_list,
        SEW=sew_list,
        LMUL=lmul_list,
        NF=nf_list):
      type_helper = TypeHelper(**args)

      # This intrinsic appears after v0.12
      if isinstance(G, CompatibleHeaderGenerator):
        continue

      args_for_vcreate = collections.OrderedDict()
      for i in range(args["NF"]):
        arg_name = "v" + str(i)
        args_for_vcreate[arg_name] = type_helper.v

      G.func(
          InstInfo.get(args, decorator, InstType.VCREATE),
          name="{OP}_v_{TYPE}{SEW}m{LMUL}x{NF}".format_map(args),
          return_type=type_helper.tuple_v,
          **args_for_vcreate)

  G.inst_group_epilogue()
