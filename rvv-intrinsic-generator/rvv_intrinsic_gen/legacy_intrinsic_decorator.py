"""
--------------------------------------------------------------------------------
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

File for LegacyInstructionDecorator and lists of objects of different Instances
of them.

The purpose for this module (legacy_intrinsic_decorator.py) is for exclusive use
for the generation of the adaptor header for RVV C intrinsics v0.10 to v0.11.

In v0.11, the intrinsics are simplified into a single set with a reduction of
25% of the out-going intrinsics. The simplification breaks compatibility, hence
we need a header of such to map legacy api-s to the existing ones.

Take `vadd` as an example, the header will include something like the following:

// v0.10 -> v0.11
#define vadd_vv_i32m1(...)      __riscv_vadd_vv_i32m1(...)
#define vadd_vv_i32m1_m(...)    __riscv_vadd_vv_i32m1_mu(...)
#define vadd_vv_i32m1_ta(...)   __riscv_vadd_vv_i32m1(...)
#define vadd_vv_i32m1_tu(...)   __riscv_vadd_vv_i32m1_tu(...)
#define vadd_vv_i32m1_tama(...) __riscv_vadd_vv_i32m1_m(...)
#define vadd_vv_i32m1_tamu(...) __riscv_vadd_vv_i32m1_mu(...)
#define vadd_vv_i32m1_tuma(...) __riscv_vadd_vv_i32m1_tum(...)
#define vadd_vv_i32m1_tumu(...) __riscv_vadd_vv_i32m1_tumu(...)
"""

import collections
from enums import ExtraAttr


class LegacyIntrinsicDecorator():
  """
  Helper for intrinsics. Provides mask, maskedoff, destination arguments when
  needed. Also helps decorate the intrinsics with appropriate suffix (masked or
  policy suffix), depending on the provided attributes.

  This intrinsic decorator was used for the v0.10 intrinsic, which was now
  not avaiable due to the update that happened in v0.11. This decorator is for
  the `AdaptorHeaderGenerator` (see generator.py and brief in this file) to
  generator an adaptor header for v0.10 users to v0.11 or higher.
  """
  is_mask = False
  has_maskedoff_name = False

  def __init__(self, flags=ExtraAttr.NO_ATTR):
    self.is_mask = (flags & ExtraAttr.IS_MASK) != 0
    self.need_maskedoff = (flags & ExtraAttr.NEED_MASKOFF) != 0
    self.has_maskedoff_name = (flags & ExtraAttr.NEED_MERGE) != 0
    self.flags = flags
    if flags & ExtraAttr.IS_TA:
      self.func_suffix = "_ta"
    elif flags & ExtraAttr.IS_TU:
      self.func_suffix = "_tu"
    elif flags & ExtraAttr.IS_MA:
      self.func_suffix = "_ma"
    elif flags & ExtraAttr.IS_MU:
      self.func_suffix = "_mu"
    elif flags & ExtraAttr.IS_TAMA:
      self.func_suffix = "_tama"
    elif flags & ExtraAttr.IS_TAMU:
      self.func_suffix = "_tamu"
    elif flags & ExtraAttr.IS_TUMA:
      self.func_suffix = "_tuma"
    elif flags & ExtraAttr.IS_TUMU:
      self.func_suffix = "_tumu"
    elif self.is_mask and flags & ExtraAttr.IS_RED_TUMA:
      self.func_suffix = "_tum"
    elif self.is_mask and flags & ExtraAttr.IS_RED_TAMA:
      self.func_suffix = "_tam"
    elif self.is_mask:
      self.func_suffix = "_m"
    else:
      self.func_suffix = ""

  def write_text_header(self, g):
    if self.is_mask:
      g.write("// masked functions\n")

  def mask_args(self, mask_type, maskoff_type=None, nf=None):
    if self.is_mask and self.need_maskedoff:
      assert maskoff_type is not None
      d = collections.OrderedDict()
      d["vm"] = mask_type
      if nf is None:
        d["vd"] = maskoff_type
      else:
        for i in range(nf):
          d[f"vd_{i}"] = maskoff_type
      return d
    elif self.is_mask:
      return {"vm": mask_type}

    return {}

  # The legacy intrinsics (v0.10) does not have any csr arugments. This method
  # here appears for compatibility as callers of under templates may be a
  # IntrinsicDecorator or a LegacyIntrinsicDecorator
  def extra_csr_args(self, csr_type):
    # pylint: disable=unused-argument
    return {}

  def dest_args(self, dest_type):
    if self.func_suffix in ["_ta", "_tama"] and self.has_maskedoff_name:
      return {"vd": dest_type}
    if self.func_suffix in ["_ta", "_tama", "_tam"]:
      return {}
    elif self.has_maskedoff_name is True and not self.need_maskedoff:
      return {"vd": dest_type}
    elif self.is_mask and self.need_maskedoff:
      # Don't repeatedly assign maskedoff/dest parameter
      return {}
    return {"vd": dest_type}

  def tu_dest_args(self, dest_type, nf=None):
    if self.has_maskedoff_name and not self.need_maskedoff:
      assert dest_type is not None
      d = collections.OrderedDict()
      if nf is None:
        d["vd"] = dest_type
      else:
        for i in range(nf):
          d[f"vd_{i}"] = dest_type
      return d
    return {}


class LegacyIntrinsicDecorators():
  """
  Collection of lists of LegacyIntrinsicDecorator instances. The instances are
  used to help intrinsic rendering.
  """

  def __init__(self, has_tail_policy):
    # pylint: disable=unused-variable
    # NOTE: The variables here are all used under inst.py, disabling the warning
    self.has_no_masking = [LegacyIntrinsicDecorator()]
    self.has_masking_maskedoff = [
        LegacyIntrinsicDecorator(),
        LegacyIntrinsicDecorator(ExtraAttr.IS_MASK | ExtraAttr.NEED_MASKOFF)
    ]
    self.has_masking_no_maskedoff = [
        LegacyIntrinsicDecorator(),
        LegacyIntrinsicDecorator(ExtraAttr.IS_MASK)
    ]
    if has_tail_policy:
      self.has_no_masking_policy = [
          LegacyIntrinsicDecorator(ExtraAttr.NEED_MERGE | ExtraAttr.IS_TU),
          LegacyIntrinsicDecorator(ExtraAttr.IS_TA)
      ]
      self.has_masking_maskedoff_policy = [
          LegacyIntrinsicDecorator(ExtraAttr.NEED_MERGE | ExtraAttr.IS_TU),
          LegacyIntrinsicDecorator(ExtraAttr.IS_TA),
          LegacyIntrinsicDecorator(ExtraAttr.IS_MASK | ExtraAttr.NEED_MERGE
                                   | ExtraAttr.NEED_MASKOFF
                                   | ExtraAttr.IS_TUMA),
          LegacyIntrinsicDecorator(ExtraAttr.IS_MASK | ExtraAttr.NEED_MERGE
                                   | ExtraAttr.NEED_MASKOFF
                                   | ExtraAttr.IS_TUMU),
          LegacyIntrinsicDecorator(ExtraAttr.IS_MASK | ExtraAttr.IS_TAMA),
          LegacyIntrinsicDecorator(ExtraAttr.IS_MASK | ExtraAttr.NEED_MERGE
                                   | ExtraAttr.NEED_MASKOFF | ExtraAttr.IS_TAMU)
      ]
      self.has_masking_maskedoff_policy_mu_ma = [
          LegacyIntrinsicDecorator(ExtraAttr.IS_MASK | ExtraAttr.IS_MA),
          LegacyIntrinsicDecorator(ExtraAttr.IS_MASK | ExtraAttr.NEED_MERGE
                                   | ExtraAttr.NEED_MASKOFF | ExtraAttr.IS_MU)
      ]
      self.has_masking_no_maskedoff_policy = [
          LegacyIntrinsicDecorator(ExtraAttr.IS_TU | ExtraAttr.NEED_MERGE),
          LegacyIntrinsicDecorator(ExtraAttr.IS_TA),
          LegacyIntrinsicDecorator(ExtraAttr.IS_MASK | ExtraAttr.NEED_MERGE
                                   | ExtraAttr.IS_TUMA),
          LegacyIntrinsicDecorator(ExtraAttr.IS_MASK | ExtraAttr.NEED_MERGE
                                   | ExtraAttr.IS_TUMU),
          LegacyIntrinsicDecorator(ExtraAttr.IS_MASK | ExtraAttr.IS_TAMA),
          LegacyIntrinsicDecorator(ExtraAttr.IS_MASK | ExtraAttr.NEED_MERGE
                                   | ExtraAttr.IS_TAMU),
      ]
      self.has_masking_no_maskedoff_policy_vslide = [
          LegacyIntrinsicDecorator(ExtraAttr.IS_TU | ExtraAttr.NEED_MERGE),
          LegacyIntrinsicDecorator(ExtraAttr.IS_TA | ExtraAttr.NEED_MERGE),
          LegacyIntrinsicDecorator(ExtraAttr.IS_MASK | ExtraAttr.NEED_MERGE
                                   | ExtraAttr.IS_TUMA),
          LegacyIntrinsicDecorator(ExtraAttr.IS_MASK | ExtraAttr.NEED_MERGE
                                   | ExtraAttr.IS_TUMU),
          LegacyIntrinsicDecorator(ExtraAttr.IS_MASK | ExtraAttr.NEED_MERGE
                                   | ExtraAttr.IS_TAMA),
          LegacyIntrinsicDecorator(ExtraAttr.IS_MASK | ExtraAttr.NEED_MERGE
                                   | ExtraAttr.IS_TAMU),
      ]
      self.has_masking_no_maskedoff_reduction_policy = [
          LegacyIntrinsicDecorator(ExtraAttr.IS_TU | ExtraAttr.NEED_MERGE),
          LegacyIntrinsicDecorator(ExtraAttr.IS_TA),
          LegacyIntrinsicDecorator(ExtraAttr.IS_MASK | ExtraAttr.NEED_MERGE
                                   | ExtraAttr.IS_RED_TUMA),
          LegacyIntrinsicDecorator(ExtraAttr.IS_MASK | ExtraAttr.IS_RED_TAMA),
      ]
      self.has_no_masking = []
      self.has_masking_maskedoff = []
      self.has_masking_no_maskedoff = []
    else:
      # no tail policy use the same decorator
      self.has_no_masking_policy = self.has_no_masking

      self.has_masking_maskedoff_policy = self.has_masking_maskedoff
      self.has_masking_maskedoff_policy_mu_ma = self.has_masking_maskedoff

      self.has_masking_no_maskedoff_policy = self.has_masking_no_maskedoff
      self.has_masking_no_maskedoff_policy_vslide =\
        self.has_masking_no_maskedoff
      self.has_masking_no_maskedoff_reduction_policy =\
        self.has_masking_no_maskedoff

    # Rounding mode intrinsics are not supported before v1.0
    self.has_masking_maskedoff_policy_vxrm = self.has_masking_maskedoff_policy

    # Rounding mode intrinsics are not supported before v1.0.
    self.has_no_masking_policy_frm = self.has_no_masking_policy
    self.has_masking_maskedoff_policy_frm = self.has_masking_maskedoff_policy
    self.has_masking_maskedoff_policy_mu_ma_frm =\
      self.has_masking_maskedoff_policy_mu_ma
    self.has_masking_no_maskedoff_policy_frm =\
      self.has_masking_no_maskedoff_policy
    self.has_masking_no_maskedoff_reduction_policy_frm =\
      self.has_masking_no_maskedoff_reduction_policy
