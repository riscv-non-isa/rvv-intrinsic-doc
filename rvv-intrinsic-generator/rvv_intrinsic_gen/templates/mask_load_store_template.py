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

Template for rendering load/store instructions of mask registers to their
corresponding intrinsics.
"""

#pylint: disable=relative-beyond-top-level
from utils import prod
from utils import TypeHelper
from enums import InstInfo
from enums import InstType


def render(G, op_list, type_list, sew_list, lmul_list, decorator_list,
           description):
  #pylint: disable=invalid-name, unused-argument
  # FIXME: Renaming 'G' to 'g' all in once later.
  # FIXME: Argument 'lmul_list' is unused but required for interface
  # consistency. We can prune it in the future.
  G.emit_function_group_description(description)
  G.inst_group_prologue()
  for decorator in decorator_list:
    decorator.write_text_header(G)
    # treat sew_list as MLEN
    for args in prod(OP=op_list, TYPE=type_list, MLEN=sew_list):
      op = args["OP"]
      type_helper = TypeHelper(**args)

      load_p = op == "vlm"

      inst_info = InstInfo.get(args, decorator, InstType.V)

      if load_p:
        base_type = "const uint8_t *"
        G.func(
            inst_info,
            name="vlm_v_b{MLEN}".format_map(args) + decorator.func_suffix,
            return_type=type_helper.m,
            rs1=base_type,
            vl=type_helper.size_t)
      else:
        base_type = "uint8_t *"
        G.func(
            inst_info,
            name="vsm_v_b{MLEN}".format_map(args) + decorator.func_suffix,
            return_type=type_helper.void,
            rs1=base_type,
            vs3=type_helper.m,
            vl=type_helper.size_t)

  G.inst_group_epilogue()
