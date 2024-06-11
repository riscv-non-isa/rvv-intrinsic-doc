"""
Template for rendering vector crypto intrinsics.
Current version is for v20230531.
https://github.com/riscv/riscv-crypto/blob/v20230531/doc/vector/riscv-crypto-spec-vector.adoc
"""

from utils import prod
from utils import TypeHelper
from enums import InstInfo
from enums import InstType
from enums import ExtraAttr

operand_mnemonic_dict = {}
# Zvbb: Vector Bit-manipulation used in Cryptography
operand_mnemonic_dict["vandn"] = ["vv", "vx"]
operand_mnemonic_dict["vbrev"] = ["v"]
operand_mnemonic_dict["vbrev8"] = ["v"]
operand_mnemonic_dict["vrev8"] = ["v"]
operand_mnemonic_dict["vclz"] = ["v"]
operand_mnemonic_dict["vctz"] = ["v"]
operand_mnemonic_dict["vcpop"] = ["v"]
operand_mnemonic_dict["vrol"] = ["vv", "vx"]
operand_mnemonic_dict["vror"] = ["vv", "vx"]  # saving the `vi` variant
operand_mnemonic_dict["vwsll"] = ["vv", "vx"]  # saving the `vi` variant
# Zvbc: Vector Carryless Multiplication
operand_mnemonic_dict["vclmul"] = ["vv", "vx"]
operand_mnemonic_dict["vclmulh"] = ["vv", "vx"]
# Zvkg: Vector GCM/GMAC
operand_mnemonic_dict["vghsh"] = ["vv"]
operand_mnemonic_dict["vgmul"] = ["vv"]
# Zvkned: NIST Suite: Vector AES Block Cipher
operand_mnemonic_dict["vaesef"] = ["vv", "vs"]
operand_mnemonic_dict["vaesem"] = ["vv", "vs"]
operand_mnemonic_dict["vaesdf"] = ["vv", "vs"]
operand_mnemonic_dict["vaesdm"] = ["vv", "vs"]
operand_mnemonic_dict["vaeskf1"] = ["vi"]
operand_mnemonic_dict["vaeskf2"] = ["vi"]
operand_mnemonic_dict["vaesz"] = ["vs"]
# Zvkned: NIST Suite: Vector AES Block Cipher
operand_mnemonic_dict["vsha2ms"] = ["vv"]
operand_mnemonic_dict["vsha2ch"] = ["vv"]
operand_mnemonic_dict["vsha2cl"] = ["vv"]
# Zvkned: NIST Suite: Vector AES Block Cipher
operand_mnemonic_dict["vsm4k"] = ["vi"]
operand_mnemonic_dict["vsm4r"] = ["vv", "vs"]
# Zvksh: ShangMi Suite: SM3 Secure Hash
operand_mnemonic_dict["vsm3me"] = ["vv"]
operand_mnemonic_dict["vsm3c"] = ["vi"]


def has_vd_input(name):
  has_vd_input_inst_set = {
      "vghsh", "vgmul", "vaesef", "vaesem", "vaesdf", "vaesdm", "vaesz",
      "vsha2ms", "vsha2ch", "vsha2cl", "vsm4r", "vsm3c"
  }

  return name in has_vd_input_inst_set


def has_vs1_input(name):
  has_vs1_input_inst_set = {
      "vandn", "vrol", "vror", "vwsll", "vclmul", "vclmulh", "vghsh", "vsha2ms",
      "vsha2ch", "vsha2cl", "vsm3me"
  }

  return name in has_vs1_input_inst_set


def has_rs1_input(name):
  has_rs1_input_inst_set = {
      "vandn", "vrol", "vror", "vwsll", "vclmul", "vclmulh"
  }

  return name in has_rs1_input_inst_set


def render(G, op_list, type_list, sew_list, lmul_list, decorator_list):
  #pylint: disable=invalid-name
  # FIXME: Renaming 'G' to 'g' all in once later.
  G.inst_group_prologue()

  for decorator in decorator_list:
    decorator.write_text_header(G)
    for args in prod(OP=op_list, TYPE=type_list, SEW=sew_list, LMUL=lmul_list):
      op = args["OP"]
      for operand_mnemonic in operand_mnemonic_dict[op]:
        if operand_mnemonic in ("vv", "vs"):
          if op == "vwsll":
            inst_info = InstInfo.get(args, decorator, InstType.WVV,
                                     ExtraAttr.NO_ATTR)
          else:
            inst_info = InstInfo.get(args, decorator, InstType.VV,
                                     ExtraAttr.NO_ATTR)
        elif operand_mnemonic == "vx":
          if op == "vwsll":
            inst_info = InstInfo.get(args, decorator, InstType.WVX,
                                     ExtraAttr.NO_ATTR)
          else:
            inst_info = InstInfo.get(args, decorator, InstType.VX,
                                     ExtraAttr.NO_ATTR)
        elif operand_mnemonic == "vi":
          inst_info = InstInfo.get(args, decorator, InstType.VI,
                                   ExtraAttr.NO_ATTR)
        elif operand_mnemonic == "v":
          inst_info = InstInfo.get(args, decorator, InstType.V,
                                   ExtraAttr.NO_ATTR)
        else:
          assert False, "Unreachable, unrecognized mnemonic"

        args["MNEMONIC"] = operand_mnemonic
        type_helper = TypeHelper(**args)
        kwargs = {}
        if op == "vwsll":
          kwargs["return_type"] = type_helper.wv
        else:
          kwargs["return_type"] = type_helper.v
        kwargs = {**kwargs, **decorator.mask_args(type_helper.m, type_helper.v)}
        # If vd is already in the input parameter, we don't need to emit another
        # parameter when tail policy is TU.
        if has_vd_input(op):
          kwargs["vd"] = type_helper.v
        else:
          if op == "vwsll":
            kwargs = {**kwargs, **decorator.tu_dest_args(type_helper.wv)}
          else:
            kwargs = {**kwargs, **decorator.tu_dest_args(type_helper.v)}

        kwargs["vs2"] = type_helper.v

        if operand_mnemonic == "vv" and has_vs1_input(op):
          kwargs["vs1"] = type_helper.v
        if operand_mnemonic == "vx" and has_rs1_input(op):
          if op in ["vwsll", "vrol", "vror"]:
            kwargs["rs1"] = type_helper.size_t
          else:
            kwargs["rs1"] = type_helper.s
        if "vi" in operand_mnemonic_dict[op]:
          kwargs["uimm"] = type_helper.size_t

        kwargs["vl"] = type_helper.size_t

        if op == "vwsll":
          args["SEW"] = args["WSEW"]
          args["LMUL"] = args["WLMUL"]

        G.func(
            inst_info,
            name="{OP}_{MNEMONIC}_{TYPE}{SEW}m{LMUL}".format_map(args) +
            decorator.func_suffix,
            **kwargs)

  G.inst_group_epilogue()
