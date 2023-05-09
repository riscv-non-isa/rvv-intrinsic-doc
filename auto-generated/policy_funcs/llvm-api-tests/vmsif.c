// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vbool1_t test_vmsif_m_b1_mu(vbool1_t mask, vbool1_t maskedoff, vbool1_t op1, size_t vl) {
  return __riscv_vmsif_m_b1_mu(mask, maskedoff, op1, vl);
}

vbool2_t test_vmsif_m_b2_mu(vbool2_t mask, vbool2_t maskedoff, vbool2_t op1, size_t vl) {
  return __riscv_vmsif_m_b2_mu(mask, maskedoff, op1, vl);
}

vbool4_t test_vmsif_m_b4_mu(vbool4_t mask, vbool4_t maskedoff, vbool4_t op1, size_t vl) {
  return __riscv_vmsif_m_b4_mu(mask, maskedoff, op1, vl);
}

vbool8_t test_vmsif_m_b8_mu(vbool8_t mask, vbool8_t maskedoff, vbool8_t op1, size_t vl) {
  return __riscv_vmsif_m_b8_mu(mask, maskedoff, op1, vl);
}

vbool16_t test_vmsif_m_b16_mu(vbool16_t mask, vbool16_t maskedoff, vbool16_t op1, size_t vl) {
  return __riscv_vmsif_m_b16_mu(mask, maskedoff, op1, vl);
}

vbool32_t test_vmsif_m_b32_mu(vbool32_t mask, vbool32_t maskedoff, vbool32_t op1, size_t vl) {
  return __riscv_vmsif_m_b32_mu(mask, maskedoff, op1, vl);
}

vbool64_t test_vmsif_m_b64_mu(vbool64_t mask, vbool64_t maskedoff, vbool64_t op1, size_t vl) {
  return __riscv_vmsif_m_b64_mu(mask, maskedoff, op1, vl);
}
