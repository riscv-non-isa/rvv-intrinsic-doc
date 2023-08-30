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

This file stores enum classes and InstInfo that collects them.
"""
import enum

from enum import unique


# First letter of InstType is return type.
class InstType(enum.Enum):
  """
  Enum of instruction mnemonics.
  """
  V = 0
  X = 1
  F = 2
  I = 3

  VV = 11
  VX = 12
  VF = 13
  VM = 14
  XV = 15
  FV = 16
  VI = 17

  VVV = 21
  VVX = 22
  VVF = 23
  VXX = 24
  VVI = 25

  VVVM = 31
  VVXM = 32
  VVFM = 33

  WVV = 41
  WVX = 42
  WVF = 43
  WVI = 44
  WWV = 45
  WWX = 46
  WWF = 47

  WV = 51
  QV = 52
  OV = 53

  VWV = 61
  VWX = 62
  VWF = 63

  MM = 71
  MMM = 72

  V1VV1 = 81
  W1VW1 = 82

  SETVL = 100
  SETVLMAX = 101
  REINT = 102
  VUNDEF = 103
  LMUL_EXT = 104
  LMUL_TRUNC = 105
  VGET = 106
  VSET = 107

  UNKNOWN = -1


class MemType(enum.Enum):
  """
  Enum of memory instruction type.
  """
  NO_MEM = 0
  LOAD = 1
  STORE = 2
  AMO = 3


@unique
class ToolChainType(enum.Enum):
  """
  Enum of the target toolchain of the intrinsic test files.
  """
  UNKNOWN = "unknown"
  LLVM = "llvm"
  GNU = "gnu"

@unique
class MarchAbi(enum.Enum):
  """
  Enum of the march and mabi of the intrinsic test files.
  """
  UNKNOWN = "unknown"
  RV32GC_ZVE32X = "rv32gc_zve32x"
  RV32GC_ZVE32F = "rv32gc_zve32f"
  RV32GC_ZVE64X = "rv32gc_zve64x"
  RV32GC_ZVE64F = "rv32gc_zve64f"
  RV32GC_ZVE64D = "rv32gc_zve64d"
  RV64GC_ZVE64D = "rv64gc_zve64d"
  RV64GCV_ZVFH   = "rv64gcv_zvfh"
  RV64GCV       = "rv64gcv"

class ExtraAttr:
  """
  Enum of extra attributes of the intrinsic.
  """
  NO_ATTR = 0
  MAC = 1 << 0
  REDUCE = 1 << 1
  MERGE = 1 << 2
  CONVERT = 1 << 3
  INT_EXTENSION = 1 << 4
  FIRST_FAULT = 1 << 5
  IS_MASK = 1 << 6
  NEED_MASKOFF = 1 << 7
  NEED_MERGE = 1 << 8
  IS_TA = 1 << 9  # for 0.10 (LegacyIntrinsicDecorator)
  IS_TU = 1 << 10
  IS_TAMA = 1 << 11  # for 0.10 (LegacyIntrinsicDecorator)
  IS_TAMU = 1 << 12
  IS_TUMA = 1 << 13
  IS_TUMU = 1 << 14
  IS_MA = 1 << 15
  IS_MU = 1 << 16
  IS_RED_TUMA = 1 << 17
  IS_RED_TAMA = 1 << 18  # for 0.10 (LegacyIntrinsicDecorator)
  HAS_VXRM = 1 << 19
  HAS_FRM = 1 << 20


class InstInfo:
  """
  Structure that stores the information of the intrinsic.
  """

  def __init__(self,
               SEW,
               LMUL,
               OP,
               inst_type=InstType.UNKNOWN,
               mem_type=MemType.NO_MEM,
               extra_attr=ExtraAttr.NO_ATTR,
               NF=1):
    #pylint: disable=invalid-name
    self.SEW = SEW
    self.LMUL = LMUL
    self.OP = OP
    self.inst_type = inst_type
    self.mem_type = mem_type
    self.extra_attr = extra_attr
    self.NF = NF

  def load_p(self):
    return self.mem_type == MemType.LOAD

  def store_p(self):
    return self.mem_type == MemType.STORE

  def mem_p(self):
    return self.load_p() or self.store_p()

  @staticmethod
  def get(args,
          decorator,
          inst_type,
          mem_type=MemType.NO_MEM,
          extra_attr=ExtraAttr.NO_ATTR):
    if decorator is None:
      # vsetvl and vsetvlmax
      return InstInfo(args["SEW"], args["LMUL"], args["OP"], inst_type,
                      mem_type, extra_attr)
    elif "SEW" in args:
      if "NF" in args:
        return InstInfo(args["SEW"], args["LMUL"], args["OP"], inst_type,
                        mem_type, extra_attr | decorator.flags, args["NF"])
      else:
        return InstInfo(args["SEW"], args["LMUL"], args["OP"], inst_type,
                        mem_type, extra_attr | decorator.flags)
    else:
      # For mask operation
      return InstInfo(0, 0, args["OP"], inst_type, mem_type,
                      extra_attr | decorator.flags)
