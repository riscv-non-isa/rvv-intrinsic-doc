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

Generator classes that controls structures of the output.
"""
import os
import collections
import re


class Generator():
  """
  Base class for all generators.
  """
  has_tail_policy = False

  def __init__(self):
    self.generated_functions_set = set()
    pass

  def write(self, text):
    pass

  def write_title(self, text, link):
    pass

  def inst_group_prologue(self):
    return ""

  def inst_group_epilogue(self):
    return ""

  def func(self, inst_info, name, return_type, **kwargs):
    # pylint: disable=unused-argument
    # FIXME: inst_info is currently only used by RIFGenerator.
    self.generated_functions_set.add(name)
    args = ", ".join(map(lambda a: f"{a[1]} {a[0]}", kwargs.items()))
    # "T * name" to "T *name"
    args = args.replace("* ", "*")
    s = f"{return_type} {name} ({args});\n"
    return s

  def function_group(self, template, title, link, op_list, type_list, sew_list,
                     lmul_list, decorator_list):
    # pylint: disable=unused-argument
    # NOTE: 'title' and 'link' are only used in DocGenerator and
    # OverloadedDocGenerator. Probably need some decoupling here.
    template.render(
        G=self,
        op_list=op_list,
        type_list=type_list,
        sew_list=sew_list,
        lmul_list=lmul_list,
        decorator_list=decorator_list)

  def start_group(self, group_name):
    pass

  @staticmethod
  def func_name(name):
    name = name.replace("_uint", "_u")
    name = name.replace("_int", "_i")
    name = name.replace("_float", "_f")
    name = name.replace("_bool", "_b")
    # Follows the naming guideline under riscv-c-api-doc to add the `__riscv_`
    # suffix for all RVV intrinsics.
    name = "__riscv_" + name
    return name

  # Some instructions don't have an overloaded version intrinsics because the
  # reduced representation of the intrinsics is not expressable. Take vle8 as
  # an example. Both intrinsics below share the same type of parameters, hence
  # the LMUL is not derivable through the function parameters and has to be
  # specified.
  # vle8_v_i8m1 (const int8_t *base, size_t vl);
  # vle8_v_i8m2 (const int8_t *base, size_t vl);
  @staticmethod
  def is_support_overloaded(name, **kwargs):
    for p in ["tu", "tamu", "tumu", "tuma", "tam", "tum"]:
      if name.split("_")[-1] == p:
        return True
    if name.find("vmv_s_x") != -1 or name.find("vfmv_s_f") != -1:
      # Prototype for non-policy and ta intrinsics of vmv_s_x and vfmv_s_f
      # is not feasible for overloading.
      return name.split("_")[-1] == "tu"
    # vle/vse does not support overloading
    load_ops = [
        "vl(s)?ei?[0-9]+(ff)?_v_.*", "vl(s)?seg[0-9]ei?[0-9]+(ff)?_v_.*"
    ]
    for p in load_ops:
      if re.match(p, name) and name[-2:] != "_m":
        return False
    unsupported_op = [
        "setvl", "vundefined", "viota", "vmclr", "vmset_", "vid", "vmv_v_x",
        "vfmv_v_f", "vread_csr", "vwrite_csr", "vcreate", "vlm_v"
    ]
    if any(i in name for i in unsupported_op):
      if ("vid" in name) or ("viota" in name):
        return False
      if name[-2:] != "_m":
        return False

    if name.startswith("sf_vc"):
      any_vector_type = False
      for arg_type in kwargs.values():
        if arg_type.startswith("v"):
          any_vector_type = True

      if not any_vector_type:
        return False

    return True

  @staticmethod
  def get_overloaded_op_name(name):
    sn = name.split("_")
    if name.startswith("sf_"):
      if name.startswith("sf_vfwcvt") or name.startswith("sf_vfncvt"):
        overloaded_name = "_".join(sn[0:3])
      else:
        overloaded_name = "_".join(sn[0:-1])
    elif name in ["vread_csr", "vwrite_csr", "vlmul_trunc", "vlmul_ext"]:
      overloaded_name = name
    elif name.find("cvt") != -1:
      if name.find("cvt_rod") != -1 or name.find("cvt_rtz") != -1:
        overloaded_name = "_".join(sn[0:3])
      else:
        overloaded_name = "_".join(sn[0:2])
    elif any(op in name for op in ["reinterpret", "vget"]):
      overloaded_name = "_".join([sn[0], sn[-1]])
    elif any(op in name for op in ["vlmul_ext", "vlmul_trunc"]):
      overloaded_name = "_".join([sn[0], sn[1], sn[-1]])
    elif any(op in name for op in [
        "vzext", "vsext", "vwadd", "vwsub", "vfwadd", "vfwsub", "vwadd",
        "vwsub", "vfwadd", "vfwsub", "vmv", "vfmv"
    ]):
      # 2. compiler can not distinguish *.wx and *.vx, need encode them in
      #    suffix, for example:
      #    vuint32m1_t vwaddu (vuint32m1_t op1, uint16_t op2);  // vwaddu.wx
      #    vuint64m2_t vwaddu (vuint32m1_t op1, uint32_t op2);  // vwaddu.vx
      # 3. the signature of vmv series are similar, for example
      #    vmv_v_v_i8mf8    -> vint8mf8_t vmv(vint8mf8_t src, size_t vl)
      #    vmv_x_s_i8mf8_i8 -> int8_t     vmv(vint8mf8_t src)
      overloaded_name = "_".join(sn[0:2])
    else:
      overloaded_name = sn[0]
    # append policy suffix if need
    if sn[-1] in [
        "ta", "tu", "tama", "tuma", "tamu", "tumu", "ma", "mu", "tam", "tum"
    ]:
      overloaded_name += "_" + sn[-1]

    # Follows the naming guideline under riscv-c-api-doc to add the `__riscv_`
    # suffix for all RVV intrinsics.
    overloaded_name = Generator.func_name(overloaded_name)

    return overloaded_name

  # Report how many functions are generated by the generator
  def report_summary(self):
    print(f"Generator generated \x1b[1;31m{len(self.generated_functions_set)} \
      \x1b[0mfunctions")


class DocGenerator(Generator):
  """
  Derived generator for document that collects function definitions.
  """

  def __init__(self, f, is_all_in_one, has_tail_policy):
    super().__init__()
    self.is_all_in_one = is_all_in_one
    self.has_tail_policy = has_tail_policy
    if self.is_all_in_one:
      self.fd = f
    else:
      self.folder = f
      if not os.path.exists(self.folder):
        os.makedirs(self.folder)
      if not os.path.isdir(self.folder):
        raise Exception("%s not dir, but it must be a dir.")
      self.group_counter = 0
      self.fd = None

  def write(self, text):
    self.fd.write(text)

  def write_title(self, text, link):
    self.fd.write("\n### [" + text + "](" + link + "):\n")

  def inst_group_prologue(self):
    s = "\n**Prototypes:**\n``` C\n"
    self.write(s)
    return s

  def inst_group_epilogue(self):
    s = "```\n"
    self.write(s)
    return s

  def function_group(self, template, title, link, op_list, type_list, sew_list,
                     lmul_list, decorator_list):
    self.write_title(title, link)
    if self.has_tail_policy and len(decorator_list) == 0:
      s = "This operation don't have Policy Intrinsic Functions.\n"
      self.write(s)
      return
    super().function_group(template, title, link, op_list, type_list, sew_list,
                           lmul_list, decorator_list)

  def func(self, inst_info, name, return_type, **kwargs):
    name = Generator.func_name(name)
    s = super().func(inst_info, name, return_type, **kwargs)
    self.write(s)

  def start_group(self, group_name):
    # pylint: disable=consider-using-with
    # NOTE: If is_all_in_one is False, separate files of the grouped intrinsics
    # will be created, therefore we are allowing overriding the file descriptor
    # here.
    super().start_group(group_name)
    if not self.is_all_in_one:
      file_name = f"{self.group_counter:02d}_{group_name}.md"
      file_name = file_name.replace(" ", "_")
      file_name = file_name.replace("/", "_")
      file_name = file_name.replace("(", "")
      file_name = file_name.replace(")", "")
      file_name = file_name.lower()
      self.group_counter += 1

      if self.fd is not None:
        self.fd.close()
      self.fd = open(
          os.path.join(self.folder, file_name), "w", encoding="utf-8")
    self.write(f"\n## {group_name}:\n")


class OverloadedDocGenerator(DocGenerator):
  """
  Derived generator for documents that collects overloaded function definitions
  """

  def func(self, inst_info, name, return_type, **kwargs):
    func_name = Generator.func_name(name)
    if Generator.is_support_overloaded(name, **kwargs):
      func_name = Generator.get_overloaded_op_name(name)
    # Strip the `__riscv_` prefix here because it will be added back again in
    # Generator.func()
    func_name = func_name[8:]

    super().func(inst_info, func_name, return_type, **kwargs)


def vector_type_p(t):
  return t.startswith("vint") or \
      t.startswith("vuint") or \
      t.startswith("vfloat")


class APITestGenerator(Generator):
  """
  Derived generator for api unit tests.
  """

  def __init__(self, f, is_overloaded, is_llvm, has_tail_policy):
    super().__init__()
    self.is_overloaded = is_overloaded
    self.folder = f
    self.llvm = is_llvm
    self.has_tail_policy = has_tail_policy
    if not os.path.exists(self.folder):
      os.makedirs(self.folder)
    if not os.path.isdir(self.folder):
      raise Exception("%s not dir, but it must be a dir.")
    self.fd = None
    self.test_files = []
    # test file name candidates which are declared in inst.py, it could have
    # different op name
    self.test_file_names = []

  def write_file_header(self, has_float_type):
    #pylint: disable=line-too-long
    int_llvm_header = (r"""// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

""")
    float_llvm_header = (r"""// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

""")
    if self.llvm:
      if has_float_type:
        self.fd.write(float_llvm_header)
      else:
        self.fd.write(int_llvm_header)
    else:
      self.fd.write("#include <stdint.h>\n")
    self.fd.write("#include <riscv_vector.h>\n\n")
    if not self.llvm:
      self.fd.write("typedef _Float16 float16_t;\n")
      self.fd.write("typedef float float32_t;\n")
      self.fd.write("typedef double float64_t;\n")

  def func(self, inst_info, name, return_type, **kwargs):
    if self.is_overloaded and not Generator.is_support_overloaded(
        name, **kwargs):
      return

    non_overloaded_func_name = Generator.func_name(name)
    overloaded_func_name = Generator.get_overloaded_op_name(name)
    test_file_name = f"{overloaded_func_name.split('_')[3]}.c"

    if self.is_overloaded:
      func_name = overloaded_func_name
    else:
      func_name = non_overloaded_func_name

    if test_file_name not in self.test_files:
      mode = "w"
      header = True
    else:
      mode = "a"
      header = False
    if self.fd is not None:
      self.fd.close()

    self.test_files.append(test_file_name)
    # pylint: disable=consider-using-with
    # NOTE(FIXME): For APITestGenerator, every function will own an individual
    # C source file. Overriding here is acceptable but shows the problem that
    # the long-living file descriptor is not useful in every generator.
    self.fd = open(
        os.path.join(self.folder, test_file_name), mode, encoding="utf-8")

    stripped_prefix_non_overloaded_func_name = non_overloaded_func_name[8:]
    func_decl = super().func(inst_info,
                             "test_" + stripped_prefix_non_overloaded_func_name,
                             return_type, **kwargs)
    func_decl = func_decl.replace(" (", "(")

    # NOTE(FIXME): This logic is dependent to `TYPES` under constant.py.
    # Hardcoded that if an an intrinsic has a floating-point type variant, the
    # variant will be enumerated before the integer type variant. To fix this
    # righteously, there should be a function to determine if an intrinsic
    # has a floating-point variant and have the header emission depend on it.
    has_float_type = func_decl.find("vfloat") != -1
    # NOTE(FIXME): This is logic as a hard fix to test case header emission.
    has_float_type_variant_inst = [
        "macc", "nmacc", "msac", "nmsac", "madd", "nmadd", "msub", "nmsub",
        "wmacc", "wnmacc", "wmsac", "wnmsac", "eq", "ne", "lt", "le", "gt",
        "ge", "merge", "mv", "reinterpret"
    ]

    for i in has_float_type_variant_inst:
      if i in func_decl:
        has_float_type = True

    if header:
      self.write_file_header(has_float_type)

    def output_call_arg(arg_name, type_name):
      if ((name.startswith("vget") or name.startswith("vset")) \
          and ((arg_name == "index" and type_name == "size_t"))) \
         or arg_name.startswith("bit_field") or arg_name.startswith("simm"):
        return "0"
      return arg_name

    # Write test func body.
    # Write test func. func_decl has end of ";" and "\n"
    self.fd.write(func_decl[:-2])
    self.fd.write(" {\n")

    self.fd.write(f"  return {func_name}(")
    call_args = ", ".join(
        map(lambda a: output_call_arg(a[0], a[1]), kwargs.items()))
    self.fd.write(call_args)
    self.fd.write(");\n")
    self.fd.write("}\n\n")

  def function_group(self, template, title, link, op_list, type_list, sew_list,
                     lmul_list, decorator_list):
    self.test_file_names = op_list
    template.render(
        G=self,
        op_list=op_list,
        type_list=type_list,
        sew_list=sew_list,
        lmul_list=lmul_list,
        decorator_list=decorator_list)


class Grouper(Generator):
  """
  Derived generator for structured grouping in testing-report (testing script)
  """

  op_list = []

  def __init__(self):
    super().__init__()
    self.func_group = {}  # Func_name -> (group, sub-group).
    self.groups = collections.OrderedDict()  # Set of group name.
    self.current_group = None
    self.current_sub_group = None

  def start_group(self, group_name):
    self.current_group = group_name
    if group_name not in self.groups:
      self.groups[group_name] = []

  def func(self, inst_info, name, return_type, **kwargs):

    func_name = Generator.func_name(name)
    overloaded_func_name = Generator.get_overloaded_op_name(name)
    test_file_name = overloaded_func_name.split("_")[3]

    grp_info = (self.current_group, self.current_sub_group)

    self.func_group[test_file_name] = grp_info
    self.func_group[func_name] = grp_info
    self.func_group[overloaded_func_name] = grp_info

  def query_group_desc(self, func_name):
    return self.func_group[func_name]

  def function_group(self, template, title, link, op_list, type_list, sew_list,
                     lmul_list, decorator_list):
    self.op_list = op_list
    self.groups[self.current_group].append(title)
    self.current_sub_group = title
    template.render(
        G=self,
        op_list=op_list,
        type_list=type_list,
        sew_list=sew_list,
        lmul_list=lmul_list,
        decorator_list=decorator_list)
