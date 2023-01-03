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

Template for rendering all possible vector types in RVV intrinsics.
"""

#pylint: disable=relative-beyond-top-level
from utils import prod


def render(G, type_list, sew_list, lmul_list):
  #pylint: disable=invalid-name
  # FIXME: Renaming 'G' to 'g' all in once later.
  G.inst_group_prologue()
  for args in prod(TYPE=type_list, SEW=sew_list, LMUL=lmul_list):
    G.write("v{TYPE}{SEW}m{LMUL}_t\n".format_map(args))
  G.inst_group_epilogue()
