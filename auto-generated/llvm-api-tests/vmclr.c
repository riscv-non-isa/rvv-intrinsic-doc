// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vbool1_t test_vmclr_m_b1(size_t vl) {
  return __riscv_vmclr_m_b1(vl);
}

vbool2_t test_vmclr_m_b2(size_t vl) {
  return __riscv_vmclr_m_b2(vl);
}

vbool4_t test_vmclr_m_b4(size_t vl) {
  return __riscv_vmclr_m_b4(vl);
}

vbool8_t test_vmclr_m_b8(size_t vl) {
  return __riscv_vmclr_m_b8(vl);
}

vbool16_t test_vmclr_m_b16(size_t vl) {
  return __riscv_vmclr_m_b16(vl);
}

vbool32_t test_vmclr_m_b32(size_t vl) {
  return __riscv_vmclr_m_b32(vl);
}

vbool64_t test_vmclr_m_b64(size_t vl) {
  return __riscv_vmclr_m_b64(vl);
}
