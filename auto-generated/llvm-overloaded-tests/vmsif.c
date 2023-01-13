// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vbool1_t test_vmsif_m_b1_m(vbool1_t mask, vbool1_t op1, size_t vl) {
  return vmsif(mask, op1, vl);
}

vbool2_t test_vmsif_m_b2_m(vbool2_t mask, vbool2_t op1, size_t vl) {
  return vmsif(mask, op1, vl);
}

vbool4_t test_vmsif_m_b4_m(vbool4_t mask, vbool4_t op1, size_t vl) {
  return vmsif(mask, op1, vl);
}

vbool8_t test_vmsif_m_b8_m(vbool8_t mask, vbool8_t op1, size_t vl) {
  return vmsif(mask, op1, vl);
}

vbool16_t test_vmsif_m_b16_m(vbool16_t mask, vbool16_t op1, size_t vl) {
  return vmsif(mask, op1, vl);
}

vbool32_t test_vmsif_m_b32_m(vbool32_t mask, vbool32_t op1, size_t vl) {
  return vmsif(mask, op1, vl);
}

vbool64_t test_vmsif_m_b64_m(vbool64_t mask, vbool64_t op1, size_t vl) {
  return vmsif(mask, op1, vl);
}

