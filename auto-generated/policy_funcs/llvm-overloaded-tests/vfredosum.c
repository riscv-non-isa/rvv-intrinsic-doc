// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat16m1_t test_vfredosum_vs_f16mf4_f16m1_tu(vfloat16m1_t maskedoff, vfloat16mf4_t vector, vfloat16m1_t scalar, size_t vl) {
  return __riscv_vfredosum_tu(maskedoff, vector, scalar, vl);
}

vfloat16m1_t test_vfredosum_vs_f16mf2_f16m1_tu(vfloat16m1_t maskedoff, vfloat16mf2_t vector, vfloat16m1_t scalar, size_t vl) {
  return __riscv_vfredosum_tu(maskedoff, vector, scalar, vl);
}

vfloat16m1_t test_vfredosum_vs_f16m1_f16m1_tu(vfloat16m1_t maskedoff, vfloat16m1_t vector, vfloat16m1_t scalar, size_t vl) {
  return __riscv_vfredosum_tu(maskedoff, vector, scalar, vl);
}

vfloat16m1_t test_vfredosum_vs_f16m2_f16m1_tu(vfloat16m1_t maskedoff, vfloat16m2_t vector, vfloat16m1_t scalar, size_t vl) {
  return __riscv_vfredosum_tu(maskedoff, vector, scalar, vl);
}

vfloat16m1_t test_vfredosum_vs_f16m4_f16m1_tu(vfloat16m1_t maskedoff, vfloat16m4_t vector, vfloat16m1_t scalar, size_t vl) {
  return __riscv_vfredosum_tu(maskedoff, vector, scalar, vl);
}

vfloat16m1_t test_vfredosum_vs_f16m8_f16m1_tu(vfloat16m1_t maskedoff, vfloat16m8_t vector, vfloat16m1_t scalar, size_t vl) {
  return __riscv_vfredosum_tu(maskedoff, vector, scalar, vl);
}

vfloat32m1_t test_vfredosum_vs_f32mf2_f32m1_tu(vfloat32m1_t maskedoff, vfloat32mf2_t vector, vfloat32m1_t scalar, size_t vl) {
  return __riscv_vfredosum_tu(maskedoff, vector, scalar, vl);
}

vfloat32m1_t test_vfredosum_vs_f32m1_f32m1_tu(vfloat32m1_t maskedoff, vfloat32m1_t vector, vfloat32m1_t scalar, size_t vl) {
  return __riscv_vfredosum_tu(maskedoff, vector, scalar, vl);
}

vfloat32m1_t test_vfredosum_vs_f32m2_f32m1_tu(vfloat32m1_t maskedoff, vfloat32m2_t vector, vfloat32m1_t scalar, size_t vl) {
  return __riscv_vfredosum_tu(maskedoff, vector, scalar, vl);
}

vfloat32m1_t test_vfredosum_vs_f32m4_f32m1_tu(vfloat32m1_t maskedoff, vfloat32m4_t vector, vfloat32m1_t scalar, size_t vl) {
  return __riscv_vfredosum_tu(maskedoff, vector, scalar, vl);
}

vfloat32m1_t test_vfredosum_vs_f32m8_f32m1_tu(vfloat32m1_t maskedoff, vfloat32m8_t vector, vfloat32m1_t scalar, size_t vl) {
  return __riscv_vfredosum_tu(maskedoff, vector, scalar, vl);
}

vfloat64m1_t test_vfredosum_vs_f64m1_f64m1_tu(vfloat64m1_t maskedoff, vfloat64m1_t vector, vfloat64m1_t scalar, size_t vl) {
  return __riscv_vfredosum_tu(maskedoff, vector, scalar, vl);
}

vfloat64m1_t test_vfredosum_vs_f64m2_f64m1_tu(vfloat64m1_t maskedoff, vfloat64m2_t vector, vfloat64m1_t scalar, size_t vl) {
  return __riscv_vfredosum_tu(maskedoff, vector, scalar, vl);
}

vfloat64m1_t test_vfredosum_vs_f64m4_f64m1_tu(vfloat64m1_t maskedoff, vfloat64m4_t vector, vfloat64m1_t scalar, size_t vl) {
  return __riscv_vfredosum_tu(maskedoff, vector, scalar, vl);
}

vfloat64m1_t test_vfredosum_vs_f64m8_f64m1_tu(vfloat64m1_t maskedoff, vfloat64m8_t vector, vfloat64m1_t scalar, size_t vl) {
  return __riscv_vfredosum_tu(maskedoff, vector, scalar, vl);
}

vfloat16m1_t test_vfredosum_vs_f16mf4_f16m1_tum(vbool64_t mask, vfloat16m1_t maskedoff, vfloat16mf4_t vector, vfloat16m1_t scalar, size_t vl) {
  return __riscv_vfredosum_tum(mask, maskedoff, vector, scalar, vl);
}

vfloat16m1_t test_vfredosum_vs_f16mf2_f16m1_tum(vbool32_t mask, vfloat16m1_t maskedoff, vfloat16mf2_t vector, vfloat16m1_t scalar, size_t vl) {
  return __riscv_vfredosum_tum(mask, maskedoff, vector, scalar, vl);
}

vfloat16m1_t test_vfredosum_vs_f16m1_f16m1_tum(vbool16_t mask, vfloat16m1_t maskedoff, vfloat16m1_t vector, vfloat16m1_t scalar, size_t vl) {
  return __riscv_vfredosum_tum(mask, maskedoff, vector, scalar, vl);
}

vfloat16m1_t test_vfredosum_vs_f16m2_f16m1_tum(vbool8_t mask, vfloat16m1_t maskedoff, vfloat16m2_t vector, vfloat16m1_t scalar, size_t vl) {
  return __riscv_vfredosum_tum(mask, maskedoff, vector, scalar, vl);
}

vfloat16m1_t test_vfredosum_vs_f16m4_f16m1_tum(vbool4_t mask, vfloat16m1_t maskedoff, vfloat16m4_t vector, vfloat16m1_t scalar, size_t vl) {
  return __riscv_vfredosum_tum(mask, maskedoff, vector, scalar, vl);
}

vfloat16m1_t test_vfredosum_vs_f16m8_f16m1_tum(vbool2_t mask, vfloat16m1_t maskedoff, vfloat16m8_t vector, vfloat16m1_t scalar, size_t vl) {
  return __riscv_vfredosum_tum(mask, maskedoff, vector, scalar, vl);
}

vfloat32m1_t test_vfredosum_vs_f32mf2_f32m1_tum(vbool64_t mask, vfloat32m1_t maskedoff, vfloat32mf2_t vector, vfloat32m1_t scalar, size_t vl) {
  return __riscv_vfredosum_tum(mask, maskedoff, vector, scalar, vl);
}

vfloat32m1_t test_vfredosum_vs_f32m1_f32m1_tum(vbool32_t mask, vfloat32m1_t maskedoff, vfloat32m1_t vector, vfloat32m1_t scalar, size_t vl) {
  return __riscv_vfredosum_tum(mask, maskedoff, vector, scalar, vl);
}

vfloat32m1_t test_vfredosum_vs_f32m2_f32m1_tum(vbool16_t mask, vfloat32m1_t maskedoff, vfloat32m2_t vector, vfloat32m1_t scalar, size_t vl) {
  return __riscv_vfredosum_tum(mask, maskedoff, vector, scalar, vl);
}

vfloat32m1_t test_vfredosum_vs_f32m4_f32m1_tum(vbool8_t mask, vfloat32m1_t maskedoff, vfloat32m4_t vector, vfloat32m1_t scalar, size_t vl) {
  return __riscv_vfredosum_tum(mask, maskedoff, vector, scalar, vl);
}

vfloat32m1_t test_vfredosum_vs_f32m8_f32m1_tum(vbool4_t mask, vfloat32m1_t maskedoff, vfloat32m8_t vector, vfloat32m1_t scalar, size_t vl) {
  return __riscv_vfredosum_tum(mask, maskedoff, vector, scalar, vl);
}

vfloat64m1_t test_vfredosum_vs_f64m1_f64m1_tum(vbool64_t mask, vfloat64m1_t maskedoff, vfloat64m1_t vector, vfloat64m1_t scalar, size_t vl) {
  return __riscv_vfredosum_tum(mask, maskedoff, vector, scalar, vl);
}

vfloat64m1_t test_vfredosum_vs_f64m2_f64m1_tum(vbool32_t mask, vfloat64m1_t maskedoff, vfloat64m2_t vector, vfloat64m1_t scalar, size_t vl) {
  return __riscv_vfredosum_tum(mask, maskedoff, vector, scalar, vl);
}

vfloat64m1_t test_vfredosum_vs_f64m4_f64m1_tum(vbool16_t mask, vfloat64m1_t maskedoff, vfloat64m4_t vector, vfloat64m1_t scalar, size_t vl) {
  return __riscv_vfredosum_tum(mask, maskedoff, vector, scalar, vl);
}

vfloat64m1_t test_vfredosum_vs_f64m8_f64m1_tum(vbool8_t mask, vfloat64m1_t maskedoff, vfloat64m8_t vector, vfloat64m1_t scalar, size_t vl) {
  return __riscv_vfredosum_tum(mask, maskedoff, vector, scalar, vl);
}
