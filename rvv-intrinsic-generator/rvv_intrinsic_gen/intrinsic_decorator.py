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

File for InstructionDecorator and lists of objects of different Instances of
them.
"""
import collections
from enums import ExtraAttr


class IntrinsicDecorator():
  """
  Helper for intrinsics. Provides mask, maskedoff, destination arguments when
  needed. Also helps decorate the intrinsics with appropriate suffix (masked or
  policy suffix), depending on the provided attributes.
  """
  is_mask = False
  has_maskedoff_name = False

  def __init__(self, flags=ExtraAttr.NO_ATTR):
    self.is_mask = (flags & ExtraAttr.IS_MASK) != 0
    self.need_maskedoff = (flags & ExtraAttr.NEED_MASKOFF) != 0
    self.has_maskedoff_name = (flags & ExtraAttr.NEED_MERGE) != 0
    self.flags = flags

    self.func_suffix = ""

    if flags & ExtraAttr.HAS_FRM:
      self.func_suffix += "_rm"

    if flags & ExtraAttr.IS_TU:
      self.func_suffix += "_tu"
    elif flags & ExtraAttr.IS_MU:
      self.func_suffix += "_mu"
    elif flags & ExtraAttr.IS_TAMU:
      self.func_suffix += "_mu"
    elif flags & ExtraAttr.IS_TUMA:
      self.func_suffix += "_tum"
    elif flags & ExtraAttr.IS_TUMU:
      self.func_suffix += "_tumu"
    elif self.is_mask and flags & ExtraAttr.IS_RED_TUMA:
      self.func_suffix += "_tum"
    elif self.is_mask:
      self.func_suffix += "_m"

  def write_text_header(self, g):
    if self.is_mask:
      g.write("// masked functions\n")

  def mask_args(self,
                mask_type,
                maskoff_type=None,
                nf=None,
                is_seg_load_store_tuple_type=False):
    if self.is_mask and self.need_maskedoff:
      assert maskoff_type is not None
      d = collections.OrderedDict()
      d["mask"] = mask_type
      if nf is None:
        d["maskedoff"] = maskoff_type
      else:
        if is_seg_load_store_tuple_type:
          d["maskedoff_tuple"] = f"{maskoff_type.split('_')[0]}x{nf}_t"
        else:
          for i in range(nf):
            d[f"maskedoff{i}"] = maskoff_type
      return d
    elif self.is_mask:
      return {"mask": mask_type}

    return {}

  def dest_args(self, dest_type):
    if self.func_suffix in ["_ta", "_tama"] and self.has_maskedoff_name:
      return {"dest": dest_type}
    if self.func_suffix in ["_ta", "_tama", "_tam"]:
      return {}
    elif self.has_maskedoff_name is True and not self.need_maskedoff:
      return {"maskedoff": dest_type}
    else:  # Implicit functions without NEED_MERGE and NEED_MASKED_OFF
      return {}

  def tu_dest_args(self,
                   dest_type,
                   nf=None,
                   is_seg_load_store_tuple_type=False):
    if self.has_maskedoff_name and not self.need_maskedoff:
      assert dest_type is not None
      d = collections.OrderedDict()
      if nf is None:
        d["maskedoff"] = dest_type
      else:
        if is_seg_load_store_tuple_type:
          d["maskedoff_tuple"] = f"{dest_type.split('_')[0]}x{nf}_t"
        else:
          for i in range(nf):
            d[f"maskedoff{i}"] = dest_type
      return d
    return {}

  def extra_csr_args(self, csr_type):
    d = collections.OrderedDict()

    if self.flags & ExtraAttr.HAS_VXRM:
      d["vxrm"] = csr_type

    if self.flags & ExtraAttr.HAS_FRM:
      d["frm"] = csr_type

    return d


class IntrinsicDecorators():
  """
  Collection of lists of InstructionDecorator instances. The instances are used
  to help intrinsic rendering.
  """

  def __init__(self, has_tail_policy):
    # pylint: disable=unused-variable
    # NOTE: The variables here are all used under inst.py, disabling the warning
    if has_tail_policy:  # Intrinsics with a policy suffix
      self.has_no_masking_policy = [
          IntrinsicDecorator(ExtraAttr.NEED_MERGE | ExtraAttr.IS_TU),
      ]
      self.has_masking_maskedoff_policy = [
          IntrinsicDecorator(ExtraAttr.NEED_MERGE | ExtraAttr.IS_TU),
          IntrinsicDecorator(ExtraAttr.IS_MASK | ExtraAttr.NEED_MERGE
                             | ExtraAttr.NEED_MASKOFF | ExtraAttr.IS_TUMA),
          IntrinsicDecorator(ExtraAttr.IS_MASK | ExtraAttr.NEED_MERGE
                             | ExtraAttr.NEED_MASKOFF | ExtraAttr.IS_TUMU),
          IntrinsicDecorator(ExtraAttr.IS_MASK | ExtraAttr.NEED_MERGE
                             | ExtraAttr.NEED_MASKOFF | ExtraAttr.IS_TAMU)
      ]
      self.has_masking_maskedoff_policy_mu_ma = [
          IntrinsicDecorator(ExtraAttr.IS_MASK | ExtraAttr.NEED_MERGE
                             | ExtraAttr.NEED_MASKOFF | ExtraAttr.IS_MU)
      ]
      self.has_masking_no_maskedoff_policy = [
          IntrinsicDecorator(ExtraAttr.IS_TU | ExtraAttr.NEED_MERGE),
          IntrinsicDecorator(ExtraAttr.IS_MASK | ExtraAttr.NEED_MERGE
                             | ExtraAttr.IS_TUMA),
          IntrinsicDecorator(ExtraAttr.IS_MASK | ExtraAttr.NEED_MERGE
                             | ExtraAttr.IS_TUMU),
          IntrinsicDecorator(ExtraAttr.IS_MASK | ExtraAttr.NEED_MERGE
                             | ExtraAttr.IS_TAMU),
      ]
      self.has_masking_no_maskedoff_policy_vslide = [
          IntrinsicDecorator(ExtraAttr.IS_TU | ExtraAttr.NEED_MERGE),
          IntrinsicDecorator(ExtraAttr.IS_MASK | ExtraAttr.NEED_MERGE
                             | ExtraAttr.IS_TUMA),
          IntrinsicDecorator(ExtraAttr.IS_MASK | ExtraAttr.NEED_MERGE
                             | ExtraAttr.IS_TUMU),
          IntrinsicDecorator(ExtraAttr.IS_MASK | ExtraAttr.NEED_MERGE
                             | ExtraAttr.IS_TAMU),
      ]
      self.has_masking_no_maskedoff_reduction_policy = [
          IntrinsicDecorator(ExtraAttr.IS_TU | ExtraAttr.NEED_MERGE),
          IntrinsicDecorator(ExtraAttr.IS_MASK | ExtraAttr.NEED_MERGE
                             | ExtraAttr.IS_RED_TUMA),
      ]

      self.has_no_masking = []
      self.has_masking_maskedoff = []
      self.has_masking_no_maskedoff = []
    else:  # Intrinsics without a policy suffix
      # Intrinsics that is always unmasked
      self.has_no_masking_policy = [IntrinsicDecorator()]
      # Intrinsics that can be masked or unmasked
      self.has_masking_maskedoff_policy = [
          IntrinsicDecorator(),
          IntrinsicDecorator(ExtraAttr.IS_MASK)
      ]
      # Intrinsics that are always tail agnostic, and can be masked or unmasked
      self.has_masking_maskedoff_policy_mu_ma = [
          IntrinsicDecorator(),
          IntrinsicDecorator(ExtraAttr.IS_MASK)
      ]
      # Intrinsics that can be masked or unmasked, and always doesn't have a
      # maskedoff operand
      self.has_masking_no_maskedoff_policy = [
          IntrinsicDecorator(),
          IntrinsicDecorator(ExtraAttr.IS_MASK)
      ]
      # vslideup intrinsics
      self.has_masking_no_maskedoff_policy_vslide = [
          IntrinsicDecorator(ExtraAttr.NEED_MERGE),
          IntrinsicDecorator(ExtraAttr.IS_MASK | ExtraAttr.NEED_MERGE)
      ]
      # Reduction intrinsics
      self.has_masking_no_maskedoff_reduction_policy = [
          IntrinsicDecorator(),
          IntrinsicDecorator(ExtraAttr.IS_MASK)
      ]

      self.has_no_masking = self.has_no_masking_policy
      self.has_masking_maskedoff = self.has_masking_maskedoff_policy
      self.has_masking_no_maskedoff = self.has_masking_no_maskedoff_policy

    # Append rounding mode (vxrm) operand for the decorators
    self.has_masking_maskedoff_policy_vxrm = []
    for decorator in self.has_masking_maskedoff_policy:
      self.has_masking_maskedoff_policy_vxrm.append(
          IntrinsicDecorator(decorator.flags | ExtraAttr.HAS_VXRM))

    # Appending the frm attribute to existing decorator collections to add
    # extra set of floating-point intrinsic that models rounding mode control.
    # The extra set of intrinsics consists of an additional parameter to
    # specify the rounding mode.
    self.has_no_masking_policy_frm = self.has_no_masking_policy.copy()
    self.has_masking_maskedoff_policy_frm =\
      self.has_masking_maskedoff_policy.copy()
    self.has_masking_maskedoff_policy_mu_ma_frm =\
      self.has_masking_maskedoff_policy_mu_ma.copy()
    self.has_masking_no_maskedoff_policy_frm =\
      self.has_masking_no_maskedoff_policy.copy()
    self.has_masking_no_maskedoff_reduction_policy_frm =\
      self.has_masking_no_maskedoff_reduction_policy.copy()
    for decorator in self.has_no_masking_policy:
      self.has_no_masking_policy_frm.append(
          IntrinsicDecorator(decorator.flags | ExtraAttr.HAS_FRM))
    for decorator in self.has_masking_maskedoff_policy:
      self.has_masking_maskedoff_policy_frm.append(
          IntrinsicDecorator(decorator.flags | ExtraAttr.HAS_FRM))
    for decorator in self.has_masking_maskedoff_policy_mu_ma:
      self.has_masking_maskedoff_policy_mu_ma_frm.append(
          IntrinsicDecorator(decorator.flags | ExtraAttr.HAS_FRM))
    for decorator in self.has_masking_no_maskedoff_policy:
      self.has_masking_no_maskedoff_policy_frm.append(
          IntrinsicDecorator(decorator.flags | ExtraAttr.HAS_FRM))
    for decorator in self.has_masking_no_maskedoff_reduction_policy:
      self.has_masking_no_maskedoff_reduction_policy_frm.append(
          IntrinsicDecorator(decorator.flags | ExtraAttr.HAS_FRM))
