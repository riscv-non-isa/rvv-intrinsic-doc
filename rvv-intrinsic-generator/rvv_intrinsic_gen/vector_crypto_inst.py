"""
Declares the vector crypto intrinsics through the vector crypto template.
"""

from intrinsic_decorator import IntrinsicDecorators
from templates import vector_crypto_template
from constants import LMULS, WLMULS, SEWS, WSEWS, UITYPE


def gen(g):
  decorators = IntrinsicDecorators(g.has_tail_policy)

  g.start_group("Zvbb - Vector Bit-manipulation used in Cryptography")

  g.function_group(
      vector_crypto_template,
      "Vector Bit-manipulation used in Cryptography - Bitwise And-Not",
      "",  # FIXME: We probably have a separate document for vector-crypto
      ["vandn"],
      UITYPE,
      SEWS,
      LMULS,
      decorators.has_masking_maskedoff_policy)

  g.function_group(
      vector_crypto_template,
      "Vector Bit-manipulation used in Cryptography - Reverse Bits",
      "",  # FIXME: We probably have a separate document for vector-crypto
      ["vbrev", "vbrev8", "vrev8"],
      UITYPE,
      SEWS,
      LMULS,
      decorators.has_masking_maskedoff_policy)

  g.function_group(
      vector_crypto_template,
      "Vector Bit-manipulation used in Cryptography - Count Bits",
      "",  # FIXME: We probably have a separate document for vector-crypto
      ["vclz", "vctz"],
      UITYPE,
      SEWS,
      LMULS,
      decorators.has_masking_no_maskedoff)

  g.function_group(
      vector_crypto_template,
      "Vector Bit-manipulation used in Cryptography - Rotate",
      "",  # FIXME: We probably have a separate document for vector-crypto
      ["vrol", "vror"],
      UITYPE,
      SEWS,
      LMULS,
      decorators.has_masking_maskedoff_policy)

  g.function_group(
      vector_crypto_template,
      "Vector Bit-manipulation used in Cryptography - Shift",
      "",  # FIXME: We probably have a separate document for vector-crypto
      ["vwsll"],
      UITYPE,
      WSEWS,
      WLMULS,
      decorators.has_masking_maskedoff_policy)

  ####################################################################

  g.start_group("Zvbc - Vector Carryless Multiplication")

  g.function_group(
      vector_crypto_template,
      "Vector Carryless Multiplication",
      "",  # FIXME: We probably have a separate document for vector-crypto
      ["vclmul", "vclmulh"],
      UITYPE,
      [64],
      LMULS,
      decorators.has_masking_maskedoff_policy)

  ####################################################################

  g.start_group("Zvkg - Vector GCM/GMAC")

  g.function_group(
      vector_crypto_template,
      "Vector GCM/GMAC",
      "",  # FIXME: We probably have a separate document for vector-crypto
      ["vghsh", "vgmul"],
      UITYPE,
      [32],
      LMULS,
      decorators.has_no_masking_policy)

  ####################################################################

  g.start_group("Zvkned - NIST Suite: Vector AES Block Cipher")

  g.function_group(
      vector_crypto_template,
      "Vector AES Encryption",
      "",  # FIXME: We probably have a separate document for vector-crypto
      ["vaesef", "vaesem"],
      UITYPE,
      [32],
      LMULS,
      decorators.has_no_masking_policy)

  g.function_group(
      vector_crypto_template,
      "Vector AES Decryption",
      "",  # FIXME: We probably have a separate document for vector-crypto
      ["vaesdf", "vaesdm"],
      UITYPE,
      [32],
      LMULS,
      decorators.has_no_masking_policy)

  g.function_group(
      vector_crypto_template,
      "Vector AES-128 Forward KeySchedule generation",
      "",  # FIXME: We probably have a separate document for vector-crypto
      ["vaeskf1", "vaeskf2"],
      UITYPE,
      [32],
      LMULS,
      decorators.has_no_masking_policy)

  g.function_group(
      vector_crypto_template,
      "Vector AES round zero",
      "",  # FIXME: We probably have a separate document for vector-crypto
      ["vaesz"],
      UITYPE,
      [32],
      LMULS,
      decorators.has_no_masking_policy)

  ####################################################################
