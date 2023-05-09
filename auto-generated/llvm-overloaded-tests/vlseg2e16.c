// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vlseg2e16_v_f16mf4_m(vfloat16mf4_t *v0, vfloat16mf4_t *v1, vbool64_t mask, const _Float16 *base, size_t vl) {
  return __riscv_vlseg2e16(v0, v1, mask, base, vl);
}

void test_vlseg2e16_v_f16mf2_m(vfloat16mf2_t *v0, vfloat16mf2_t *v1, vbool32_t mask, const _Float16 *base, size_t vl) {
  return __riscv_vlseg2e16(v0, v1, mask, base, vl);
}

void test_vlseg2e16_v_f16m1_m(vfloat16m1_t *v0, vfloat16m1_t *v1, vbool16_t mask, const _Float16 *base, size_t vl) {
  return __riscv_vlseg2e16(v0, v1, mask, base, vl);
}

void test_vlseg2e16_v_f16m2_m(vfloat16m2_t *v0, vfloat16m2_t *v1, vbool8_t mask, const _Float16 *base, size_t vl) {
  return __riscv_vlseg2e16(v0, v1, mask, base, vl);
}

void test_vlseg2e16_v_f16m4_m(vfloat16m4_t *v0, vfloat16m4_t *v1, vbool4_t mask, const _Float16 *base, size_t vl) {
  return __riscv_vlseg2e16(v0, v1, mask, base, vl);
}

void test_vlseg2e16_v_i16mf4_m(vint16mf4_t *v0, vint16mf4_t *v1, vbool64_t mask, const int16_t *base, size_t vl) {
  return __riscv_vlseg2e16(v0, v1, mask, base, vl);
}

void test_vlseg2e16_v_i16mf2_m(vint16mf2_t *v0, vint16mf2_t *v1, vbool32_t mask, const int16_t *base, size_t vl) {
  return __riscv_vlseg2e16(v0, v1, mask, base, vl);
}

void test_vlseg2e16_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vbool16_t mask, const int16_t *base, size_t vl) {
  return __riscv_vlseg2e16(v0, v1, mask, base, vl);
}

void test_vlseg2e16_v_i16m2_m(vint16m2_t *v0, vint16m2_t *v1, vbool8_t mask, const int16_t *base, size_t vl) {
  return __riscv_vlseg2e16(v0, v1, mask, base, vl);
}

void test_vlseg2e16_v_i16m4_m(vint16m4_t *v0, vint16m4_t *v1, vbool4_t mask, const int16_t *base, size_t vl) {
  return __riscv_vlseg2e16(v0, v1, mask, base, vl);
}

void test_vlseg2e16_v_u16mf4_m(vuint16mf4_t *v0, vuint16mf4_t *v1, vbool64_t mask, const uint16_t *base, size_t vl) {
  return __riscv_vlseg2e16(v0, v1, mask, base, vl);
}

void test_vlseg2e16_v_u16mf2_m(vuint16mf2_t *v0, vuint16mf2_t *v1, vbool32_t mask, const uint16_t *base, size_t vl) {
  return __riscv_vlseg2e16(v0, v1, mask, base, vl);
}

void test_vlseg2e16_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vbool16_t mask, const uint16_t *base, size_t vl) {
  return __riscv_vlseg2e16(v0, v1, mask, base, vl);
}

void test_vlseg2e16_v_u16m2_m(vuint16m2_t *v0, vuint16m2_t *v1, vbool8_t mask, const uint16_t *base, size_t vl) {
  return __riscv_vlseg2e16(v0, v1, mask, base, vl);
}

void test_vlseg2e16_v_u16m4_m(vuint16m4_t *v0, vuint16m4_t *v1, vbool4_t mask, const uint16_t *base, size_t vl) {
  return __riscv_vlseg2e16(v0, v1, mask, base, vl);
}
