// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vsseg2e16_v_f16mf4x2(_Float16 *base, vfloat16mf4x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e16(base, v_tuple, vl);
}

void test_vsseg2e16_v_f16mf2x2(_Float16 *base, vfloat16mf2x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e16(base, v_tuple, vl);
}

void test_vsseg2e16_v_f16m1x2(_Float16 *base, vfloat16m1x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e16(base, v_tuple, vl);
}

void test_vsseg2e16_v_f16m2x2(_Float16 *base, vfloat16m2x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e16(base, v_tuple, vl);
}

void test_vsseg2e16_v_f16m4x2(_Float16 *base, vfloat16m4x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e16(base, v_tuple, vl);
}

void test_vsseg2e16_v_i16mf4x2(int16_t *base, vint16mf4x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e16(base, v_tuple, vl);
}

void test_vsseg2e16_v_i16mf2x2(int16_t *base, vint16mf2x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e16(base, v_tuple, vl);
}

void test_vsseg2e16_v_i16m1x2(int16_t *base, vint16m1x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e16(base, v_tuple, vl);
}

void test_vsseg2e16_v_i16m2x2(int16_t *base, vint16m2x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e16(base, v_tuple, vl);
}

void test_vsseg2e16_v_i16m4x2(int16_t *base, vint16m4x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e16(base, v_tuple, vl);
}

void test_vsseg2e16_v_u16mf4x2(uint16_t *base, vuint16mf4x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e16(base, v_tuple, vl);
}

void test_vsseg2e16_v_u16mf2x2(uint16_t *base, vuint16mf2x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e16(base, v_tuple, vl);
}

void test_vsseg2e16_v_u16m1x2(uint16_t *base, vuint16m1x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e16(base, v_tuple, vl);
}

void test_vsseg2e16_v_u16m2x2(uint16_t *base, vuint16m2x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e16(base, v_tuple, vl);
}

void test_vsseg2e16_v_u16m4x2(uint16_t *base, vuint16m4x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e16(base, v_tuple, vl);
}

void test_vsseg2e16_v_f16mf4x2_m(vbool64_t mask, _Float16 *base, vfloat16mf4x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e16(mask, base, v_tuple, vl);
}

void test_vsseg2e16_v_f16mf2x2_m(vbool32_t mask, _Float16 *base, vfloat16mf2x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e16(mask, base, v_tuple, vl);
}

void test_vsseg2e16_v_f16m1x2_m(vbool16_t mask, _Float16 *base, vfloat16m1x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e16(mask, base, v_tuple, vl);
}

void test_vsseg2e16_v_f16m2x2_m(vbool8_t mask, _Float16 *base, vfloat16m2x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e16(mask, base, v_tuple, vl);
}

void test_vsseg2e16_v_f16m4x2_m(vbool4_t mask, _Float16 *base, vfloat16m4x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e16(mask, base, v_tuple, vl);
}

void test_vsseg2e16_v_i16mf4x2_m(vbool64_t mask, int16_t *base, vint16mf4x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e16(mask, base, v_tuple, vl);
}

void test_vsseg2e16_v_i16mf2x2_m(vbool32_t mask, int16_t *base, vint16mf2x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e16(mask, base, v_tuple, vl);
}

void test_vsseg2e16_v_i16m1x2_m(vbool16_t mask, int16_t *base, vint16m1x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e16(mask, base, v_tuple, vl);
}

void test_vsseg2e16_v_i16m2x2_m(vbool8_t mask, int16_t *base, vint16m2x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e16(mask, base, v_tuple, vl);
}

void test_vsseg2e16_v_i16m4x2_m(vbool4_t mask, int16_t *base, vint16m4x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e16(mask, base, v_tuple, vl);
}

void test_vsseg2e16_v_u16mf4x2_m(vbool64_t mask, uint16_t *base, vuint16mf4x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e16(mask, base, v_tuple, vl);
}

void test_vsseg2e16_v_u16mf2x2_m(vbool32_t mask, uint16_t *base, vuint16mf2x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e16(mask, base, v_tuple, vl);
}

void test_vsseg2e16_v_u16m1x2_m(vbool16_t mask, uint16_t *base, vuint16m1x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e16(mask, base, v_tuple, vl);
}

void test_vsseg2e16_v_u16m2x2_m(vbool8_t mask, uint16_t *base, vuint16m2x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e16(mask, base, v_tuple, vl);
}

void test_vsseg2e16_v_u16m4x2_m(vbool4_t mask, uint16_t *base, vuint16m4x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e16(mask, base, v_tuple, vl);
}

