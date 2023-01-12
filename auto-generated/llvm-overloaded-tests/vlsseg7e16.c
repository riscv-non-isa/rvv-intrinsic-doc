// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vlsseg7e16_v_f16mf4_m(vfloat16mf4_t *v0, vfloat16mf4_t *v1, vfloat16mf4_t *v2, vfloat16mf4_t *v3, vfloat16mf4_t *v4, vfloat16mf4_t *v5, vfloat16mf4_t *v6, vbool64_t mask, vfloat16mf4_t maskedoff0, vfloat16mf4_t maskedoff1, vfloat16mf4_t maskedoff2, vfloat16mf4_t maskedoff3, vfloat16mf4_t maskedoff4, vfloat16mf4_t maskedoff5, vfloat16mf4_t maskedoff6, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg7e16(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

void test_vlsseg7e16_v_f16mf2_m(vfloat16mf2_t *v0, vfloat16mf2_t *v1, vfloat16mf2_t *v2, vfloat16mf2_t *v3, vfloat16mf2_t *v4, vfloat16mf2_t *v5, vfloat16mf2_t *v6, vbool32_t mask, vfloat16mf2_t maskedoff0, vfloat16mf2_t maskedoff1, vfloat16mf2_t maskedoff2, vfloat16mf2_t maskedoff3, vfloat16mf2_t maskedoff4, vfloat16mf2_t maskedoff5, vfloat16mf2_t maskedoff6, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg7e16(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

void test_vlsseg7e16_v_f16m1_m(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t *v3, vfloat16m1_t *v4, vfloat16m1_t *v5, vfloat16m1_t *v6, vbool16_t mask, vfloat16m1_t maskedoff0, vfloat16m1_t maskedoff1, vfloat16m1_t maskedoff2, vfloat16m1_t maskedoff3, vfloat16m1_t maskedoff4, vfloat16m1_t maskedoff5, vfloat16m1_t maskedoff6, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg7e16(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

void test_vlsseg7e16_v_i16mf4_m(vint16mf4_t *v0, vint16mf4_t *v1, vint16mf4_t *v2, vint16mf4_t *v3, vint16mf4_t *v4, vint16mf4_t *v5, vint16mf4_t *v6, vbool64_t mask, vint16mf4_t maskedoff0, vint16mf4_t maskedoff1, vint16mf4_t maskedoff2, vint16mf4_t maskedoff3, vint16mf4_t maskedoff4, vint16mf4_t maskedoff5, vint16mf4_t maskedoff6, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg7e16(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

void test_vlsseg7e16_v_i16mf2_m(vint16mf2_t *v0, vint16mf2_t *v1, vint16mf2_t *v2, vint16mf2_t *v3, vint16mf2_t *v4, vint16mf2_t *v5, vint16mf2_t *v6, vbool32_t mask, vint16mf2_t maskedoff0, vint16mf2_t maskedoff1, vint16mf2_t maskedoff2, vint16mf2_t maskedoff3, vint16mf2_t maskedoff4, vint16mf2_t maskedoff5, vint16mf2_t maskedoff6, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg7e16(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

void test_vlsseg7e16_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vint16m1_t *v6, vbool16_t mask, vint16m1_t maskedoff0, vint16m1_t maskedoff1, vint16m1_t maskedoff2, vint16m1_t maskedoff3, vint16m1_t maskedoff4, vint16m1_t maskedoff5, vint16m1_t maskedoff6, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg7e16(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

void test_vlsseg7e16_v_u16mf4_m(vuint16mf4_t *v0, vuint16mf4_t *v1, vuint16mf4_t *v2, vuint16mf4_t *v3, vuint16mf4_t *v4, vuint16mf4_t *v5, vuint16mf4_t *v6, vbool64_t mask, vuint16mf4_t maskedoff0, vuint16mf4_t maskedoff1, vuint16mf4_t maskedoff2, vuint16mf4_t maskedoff3, vuint16mf4_t maskedoff4, vuint16mf4_t maskedoff5, vuint16mf4_t maskedoff6, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg7e16(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

void test_vlsseg7e16_v_u16mf2_m(vuint16mf2_t *v0, vuint16mf2_t *v1, vuint16mf2_t *v2, vuint16mf2_t *v3, vuint16mf2_t *v4, vuint16mf2_t *v5, vuint16mf2_t *v6, vbool32_t mask, vuint16mf2_t maskedoff0, vuint16mf2_t maskedoff1, vuint16mf2_t maskedoff2, vuint16mf2_t maskedoff3, vuint16mf2_t maskedoff4, vuint16mf2_t maskedoff5, vuint16mf2_t maskedoff6, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg7e16(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

void test_vlsseg7e16_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vuint16m1_t *v6, vbool16_t mask, vuint16m1_t maskedoff0, vuint16m1_t maskedoff1, vuint16m1_t maskedoff2, vuint16m1_t maskedoff3, vuint16m1_t maskedoff4, vuint16m1_t maskedoff5, vuint16m1_t maskedoff6, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg7e16(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

