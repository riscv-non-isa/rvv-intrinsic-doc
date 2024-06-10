// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

unsigned long test_vcpop_m_b1(vbool1_t vs2, size_t vl) {
  return __riscv_vcpop(vs2, vl);
}

unsigned long test_vcpop_m_b2(vbool2_t vs2, size_t vl) {
  return __riscv_vcpop(vs2, vl);
}

unsigned long test_vcpop_m_b4(vbool4_t vs2, size_t vl) {
  return __riscv_vcpop(vs2, vl);
}

unsigned long test_vcpop_m_b8(vbool8_t vs2, size_t vl) {
  return __riscv_vcpop(vs2, vl);
}

unsigned long test_vcpop_m_b16(vbool16_t vs2, size_t vl) {
  return __riscv_vcpop(vs2, vl);
}

unsigned long test_vcpop_m_b32(vbool32_t vs2, size_t vl) {
  return __riscv_vcpop(vs2, vl);
}

unsigned long test_vcpop_m_b64(vbool64_t vs2, size_t vl) {
  return __riscv_vcpop(vs2, vl);
}

unsigned long test_vcpop_m_b1_m(vbool1_t vm, vbool1_t vs2, size_t vl) {
  return __riscv_vcpop(vm, vs2, vl);
}

unsigned long test_vcpop_m_b2_m(vbool2_t vm, vbool2_t vs2, size_t vl) {
  return __riscv_vcpop(vm, vs2, vl);
}

unsigned long test_vcpop_m_b4_m(vbool4_t vm, vbool4_t vs2, size_t vl) {
  return __riscv_vcpop(vm, vs2, vl);
}

unsigned long test_vcpop_m_b8_m(vbool8_t vm, vbool8_t vs2, size_t vl) {
  return __riscv_vcpop(vm, vs2, vl);
}

unsigned long test_vcpop_m_b16_m(vbool16_t vm, vbool16_t vs2, size_t vl) {
  return __riscv_vcpop(vm, vs2, vl);
}

unsigned long test_vcpop_m_b32_m(vbool32_t vm, vbool32_t vs2, size_t vl) {
  return __riscv_vcpop(vm, vs2, vl);
}

unsigned long test_vcpop_m_b64_m(vbool64_t vm, vbool64_t vs2, size_t vl) {
  return __riscv_vcpop(vm, vs2, vl);
}
