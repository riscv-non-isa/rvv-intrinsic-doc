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

Utility on handling RVV types
"""

import itertools
import re

# default ELEN = 64
ELEN = 64

HAS_FLOAT_TYPE = True

HAS_HALF_FLOAT_TYPE = True

HAS_DOUBLE_FLOAT_TYPE = True

IS_RV32 = False
IS_RV64GCV = False
IS_RV32F = False

IS_GNU_TOOLCHIAN = False

def set_elen_float(elen, has_float_type, has_half_float_type, has_double_float_type):
  global ELEN
  global HAS_FLOAT_TYPE
  global HAS_HALF_FLOAT_TYPE
  global HAS_DOUBLE_FLOAT_TYPE
  ELEN = elen
  HAS_FLOAT_TYPE = has_float_type
  HAS_HALF_FLOAT_TYPE = has_half_float_type
  HAS_DOUBLE_FLOAT_TYPE = has_double_float_type

def set_rv32(rv32):
  global IS_RV32
  IS_RV32 = rv32

def set_toolchain_type(gnu):
  global IS_GNU_TOOLCHIAN
  IS_GNU_TOOLCHIAN = gnu

def set_rv64gcv(rv64gcv):
  global IS_RV64GCV
  IS_RV64GCV = rv64gcv

def set_rv32f(rv32f):
  global IS_RV32F
  IS_RV32F = rv32f

# ex. f8 -> 0.125
def get_float_lmul(num):
  if isinstance(num, str) and num[0] == "f":
    return float(1 / float(num[1:]))
  else:
    return float(num)


# ex. 0.125 -> f8
def get_string_lmul(num, factor):
  result = get_float_lmul(num) * factor
  if result < 1.0:
    return f"f{int(1 / result)}"
  else:
    return int(result)


class TypeHelper:
  """
  The 'TypeHelper' class provides appropriate types for function parameters and
  return type.
  """
  size_t = "size_t"
  void = "void"
  intptr_t = "intptr_t"
  ptrdiff_t = "ptrdiff_t"
  ulong = "unsigned long"
  uint = "unsigned int"
  long = "long"
  boolean = "uint8_t"
  const_int = "const int"
  int = "int"

  def __init__(self, **kargs):
    self.args = kargs

  @property
  def get_float_lmul(self):
    lmul = self.args["LMUL"]
    return get_float_lmul(lmul)

  def get_elmul(self, eew, sew):
    elmul = (eew / sew) * get_float_lmul(self.args["LMUL"])
    if elmul > 8.0 or elmul < (1 / 8):
      return 0
    return elmul

  @property
  def mlen(self):
    if "MLEN" in self.args:
      return self.args["MLEN"]
    else:
      return int(self.args["SEW"] / self.get_float_lmul)

  @property
  def m(self):
    if "MLEN" in self.args:
      return f"vbool{self.args['MLEN']}_t"
    else:
      return f"vbool{int(self.args['SEW'] / self.get_float_lmul)}_t"

  def valid_vtype(self, vtype):
    p = "v(bool|int|uint|float|bfloat)(?P<SEW>[0-9]+)m(?P<LMUL>f?[0-9])_t"
    i = re.match(p, vtype)
    if i is None:
      return False
    sew = i.group("SEW")
    lmul = i.group("LMUL")

    if vtype[:6] == "vfloat":
      if not HAS_FLOAT_TYPE:
        return False
      elif HAS_HALF_FLOAT_TYPE:
        if HAS_DOUBLE_FLOAT_TYPE:
          if sew not in ["16", "32", "64"]:
            return False
        else:
          if sew not in ["16", "32"]:
            return False
      else:
        if HAS_DOUBLE_FLOAT_TYPE:
          if sew not in ["32", "64"]:
            return False
        else:
          if sew not in ["32"]:
            return False

    elif vtype[:7] == "vbfloat":
      if sew not in ["16"]:
        return False
    else:
      if sew not in ["8", "16", "32", "64"]:
        return False
    if lmul not in ["f8", "f4", "f2", "1", "2", "4", "8"]:
      return False
    if int(sew) > ELEN or get_float_lmul(lmul) < int(sew) / ELEN:
      return False
    return True

  @property
  def v(self):
    return "v{TYPE}{SEW}m{LMUL}_t".format_map(self.args)

  @property
  def tuple_v(self):
    return "v{TYPE}{SEW}m{LMUL}x{NF}_t".format_map(self.args)

  @property
  def vm1(self):
    return "v{TYPE}{SEW}m1_t".format_map(self.args)

  @property
  def uiv(self):
    return "vuint{SEW}m{LMUL}_t".format_map(self.args)

  @property
  def siv(self):
    return "vint{SEW}m{LMUL}_t".format_map(self.args)

  @property
  def s(self):
    return "{TYPE}{SEW}_t".format_map(self.args)

  @property
  def uis(self):
    return "uint{SEW}_t".format_map(self.args)

  @property
  def sis(self):
    return "int{SEW}_t".format_map(self.args)

  @property
  def wv(self):
    return "v{TYPE}{WSEW}m{WLMUL}_t".format_map(self.args)

  @property
  def wvm1(self):
    return "v{TYPE}{WSEW}m1_t".format_map(self.args)

  @property
  def ws(self):
    return "{TYPE}{WSEW}_t".format_map(self.args)

  @property
  def qv(self):
    return "v{TYPE}{QSEW}m{QLMUL}_t".format_map(self.args)

  @property
  def ov(self):
    return "v{TYPE}{OSEW}m{OLMUL}_t".format_map(self.args)


def seg_constraint(**kargs):
  return ((get_float_lmul(kargs["LMUL"]) * kargs["NF"])
          <= 8) and basic_constraint(**kargs)


def seg_arg(v, nf, ptr_t=False, is_seg_load_store_tuple_type=False):
  args = {}
  if is_seg_load_store_tuple_type:
    if ptr_t:
      args["v_tuple"] = f"{v.split('_')[0]}x{nf}_t *"
    else:
      args["v_tuple"] = f"{v.split('_')[0]}x{nf}_t"
  else:
    for i in range(nf):
      if ptr_t:
        vt = f"{v} *"
      else:
        vt = v
      args[f"v{i}"] = vt
  return args


def basic_constraint(**kargs):
  if "MLEN" in kargs and ELEN == 32 and kargs["MLEN"] == 64:
    return False
  if "EEW" in kargs and kargs["OP"] in ["vloxei", "vluxei", "vsoxei", \
      "vsuxei", "vloxseg", "vluxseg", "vsoxseg", "vsuxseg"] \
      and IS_RV32 and kargs["EEW"] == 64:
    return False
  if IS_GNU_TOOLCHIAN and not IS_RV64GCV and kargs["OP"] in ["mulh", \
     "mulhu", "mulhsu", "smul"] and kargs["SEW"] == 64:
    return False
  if ELEN == 32 and "WSEW" in kargs and kargs["OP"] in ["wsubu", \
      "wsub", "wmulu", "wmul", "wmulsu", "wmaccus", "wmaccu", \
      "wmaccsu", "wmacc", "waddu", "wadd", "nsrl", "nsra", \
      "nclip"] and kargs["WSEW"] == 64:
    return False
  if ELEN == 64 and "SEW" in kargs and kargs["SEW"] == 64 \
    and IS_RV32 and kargs["OP"] == "rsub":
    return False
  if "TYPES" in kargs and kargs["OP"] == "reinterpret" and \
    "float" in kargs["TYPES"] and ((kargs["SEW"] == 16 and \
    not HAS_HALF_FLOAT_TYPE) or (kargs["SEW"] == 32 and \
    not HAS_FLOAT_TYPE) or (kargs["SEW"] == 64 and \
    not HAS_DOUBLE_FLOAT_TYPE)):
    return False
  if "TYPE" in kargs:
    if kargs["TYPE"] == "float" and kargs["SEW"] == 8:
      return False
  if IS_GNU_TOOLCHIAN and "TYPE" in kargs:
    if kargs["TYPE"] == "float" and kargs["SEW"] == 16 \
       and kargs["OP"] in ["rgatherei16"] and HAS_HALF_FLOAT_TYPE:
      return False
  if "TYPE" in kargs:
    if kargs["TYPE"] == "float" and kargs["WSEW"] == 64 \
      and kargs["OP"] in ["wmacc", "wnmacc", "wmsac", \
      "wnmsac","fwadd", "fwsub", "fwmul"] and IS_RV32F:
      return False
  if "SEW" in kargs and "LMUL" in kargs and kargs["SEW"] is not None and kargs[
      "LMUL"] is not None:
    if "TYPE" not in kargs:
      kargs["TYPE"] = "int"
    type_helper = TypeHelper(**kargs)
    if not type_helper.valid_vtype(type_helper.v):
      return False
  return True


# Return list of dict
# prod(a=[1,2], b=[4,5])
# return [{a:"1", b : "4"}, {a:"1", b : "5"},
#         {a:"2", b : "4"}, {a:"2", b : "5"}]
def prod(constraint=basic_constraint, **kargs):
  for k, v in kargs.items():
    if len(v) == 0:
      kargs[k] = [None]
  result = []
  for i in itertools.product(*kargs.values()):
    temp = dict(zip(kargs.keys(), i))
    for k in ["LMUL", "SEW"]:
      if k in temp and temp[k]:
        temp["W" + k] = get_string_lmul(temp[k], 2)
        temp["Q" + k] = get_string_lmul(temp[k], 4)
        temp["O" + k] = get_string_lmul(temp[k], 8)
        temp["N" + k] = get_string_lmul(temp[k], 0.5)
    if constraint(**temp):
      result.append(temp)

  # Put float in front of int
  if len(result) != 0 and "TYPE" in result[0]:
    result = sorted(result, key=lambda d: d["TYPE"])

  return result
