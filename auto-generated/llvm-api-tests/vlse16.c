// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat16mf4_t test_vlse16_v_f16mf4(const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_f16mf4(base, bstride, vl);
}

vfloat16mf2_t test_vlse16_v_f16mf2(const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_f16mf2(base, bstride, vl);
}

vfloat16m1_t test_vlse16_v_f16m1(const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_f16m1(base, bstride, vl);
}

vfloat16m2_t test_vlse16_v_f16m2(const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_f16m2(base, bstride, vl);
}

vfloat16m4_t test_vlse16_v_f16m4(const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_f16m4(base, bstride, vl);
}

vfloat16m8_t test_vlse16_v_f16m8(const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_f16m8(base, bstride, vl);
}

vint16mf4_t test_vlse16_v_i16mf4(const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_i16mf4(base, bstride, vl);
}

vint16mf2_t test_vlse16_v_i16mf2(const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_i16mf2(base, bstride, vl);
}

vint16m1_t test_vlse16_v_i16m1(const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_i16m1(base, bstride, vl);
}

vint16m2_t test_vlse16_v_i16m2(const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_i16m2(base, bstride, vl);
}

vint16m4_t test_vlse16_v_i16m4(const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_i16m4(base, bstride, vl);
}

vint16m8_t test_vlse16_v_i16m8(const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_i16m8(base, bstride, vl);
}

vuint16mf4_t test_vlse16_v_u16mf4(const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_u16mf4(base, bstride, vl);
}

vuint16mf2_t test_vlse16_v_u16mf2(const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_u16mf2(base, bstride, vl);
}

vuint16m1_t test_vlse16_v_u16m1(const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_u16m1(base, bstride, vl);
}

vuint16m2_t test_vlse16_v_u16m2(const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_u16m2(base, bstride, vl);
}

vuint16m4_t test_vlse16_v_u16m4(const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_u16m4(base, bstride, vl);
}

vuint16m8_t test_vlse16_v_u16m8(const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_u16m8(base, bstride, vl);
}

vfloat16mf4_t test_vlse16_v_f16mf4_m(vbool64_t mask, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_f16mf4_m(mask, base, bstride, vl);
}

vfloat16mf2_t test_vlse16_v_f16mf2_m(vbool32_t mask, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_f16mf2_m(mask, base, bstride, vl);
}

vfloat16m1_t test_vlse16_v_f16m1_m(vbool16_t mask, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_f16m1_m(mask, base, bstride, vl);
}

vfloat16m2_t test_vlse16_v_f16m2_m(vbool8_t mask, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_f16m2_m(mask, base, bstride, vl);
}

vfloat16m4_t test_vlse16_v_f16m4_m(vbool4_t mask, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_f16m4_m(mask, base, bstride, vl);
}

vfloat16m8_t test_vlse16_v_f16m8_m(vbool2_t mask, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_f16m8_m(mask, base, bstride, vl);
}

vint16mf4_t test_vlse16_v_i16mf4_m(vbool64_t mask, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_i16mf4_m(mask, base, bstride, vl);
}

vint16mf2_t test_vlse16_v_i16mf2_m(vbool32_t mask, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_i16mf2_m(mask, base, bstride, vl);
}

vint16m1_t test_vlse16_v_i16m1_m(vbool16_t mask, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_i16m1_m(mask, base, bstride, vl);
}

vint16m2_t test_vlse16_v_i16m2_m(vbool8_t mask, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_i16m2_m(mask, base, bstride, vl);
}

vint16m4_t test_vlse16_v_i16m4_m(vbool4_t mask, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_i16m4_m(mask, base, bstride, vl);
}

vint16m8_t test_vlse16_v_i16m8_m(vbool2_t mask, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_i16m8_m(mask, base, bstride, vl);
}

vuint16mf4_t test_vlse16_v_u16mf4_m(vbool64_t mask, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_u16mf4_m(mask, base, bstride, vl);
}

vuint16mf2_t test_vlse16_v_u16mf2_m(vbool32_t mask, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_u16mf2_m(mask, base, bstride, vl);
}

vuint16m1_t test_vlse16_v_u16m1_m(vbool16_t mask, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_u16m1_m(mask, base, bstride, vl);
}

vuint16m2_t test_vlse16_v_u16m2_m(vbool8_t mask, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_u16m2_m(mask, base, bstride, vl);
}

vuint16m4_t test_vlse16_v_u16m4_m(vbool4_t mask, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_u16m4_m(mask, base, bstride, vl);
}

vuint16m8_t test_vlse16_v_u16m8_m(vbool2_t mask, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_u16m8_m(mask, base, bstride, vl);
}

