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

Template for rendering vsetvl to their corresponding intrinsics.
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
  # FIXME: Argument 'type_list', 'decorator_list' is unused but required for
  # interface consistency. We can prune it in the future.
  G.emit_function_group_description(description)
  G.inst_group_prologue()
  for args in prod(OP=op_list, SEW=sew_list, LMUL=lmul_list):
    type_helper = TypeHelper(**args)

    if args["OP"] == "vsetvlmax":
      G.func(
          InstInfo.get(args, None, InstType.SETVLMAX),
          name="{OP}_e{SEW}m{LMUL}".format_map(args),
          return_type=type_helper.size_t)
    else:  #vsetvl
      G.func(
          InstInfo.get(args, None, InstType.SETVL),
          name="{OP}_e{SEW}m{LMUL}".format_map(args),
          return_type=type_helper.size_t,
          avl=type_helper.size_t)

  G.inst_group_epilogue()
