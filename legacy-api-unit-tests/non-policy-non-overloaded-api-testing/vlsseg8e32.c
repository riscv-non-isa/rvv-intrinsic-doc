#include <stdint.h>
#include "rvv-v0p10-compatible-headers/non-policy.h"
#include "rvv-v0p10-compatible-headers/policy.h"
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vlsseg8e32_v_f32mf2(vfloat32mf2_t *v0, vfloat32mf2_t *v1, vfloat32mf2_t *v2, vfloat32mf2_t *v3, vfloat32mf2_t *v4, vfloat32mf2_t *v5, vfloat32mf2_t *v6, vfloat32mf2_t *v7, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg8e32_v_f32mf2(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, vl);
}

void test_vlsseg8e32_v_f32m1(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vfloat32m1_t *v4, vfloat32m1_t *v5, vfloat32m1_t *v6, vfloat32m1_t *v7, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg8e32_v_f32m1(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, vl);
}

void test_vlsseg8e32_v_i32mf2(vint32mf2_t *v0, vint32mf2_t *v1, vint32mf2_t *v2, vint32mf2_t *v3, vint32mf2_t *v4, vint32mf2_t *v5, vint32mf2_t *v6, vint32mf2_t *v7, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg8e32_v_i32mf2(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, vl);
}

void test_vlsseg8e32_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vint32m1_t *v6, vint32m1_t *v7, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg8e32_v_i32m1(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, vl);
}

void test_vlsseg8e32_v_u32mf2(vuint32mf2_t *v0, vuint32mf2_t *v1, vuint32mf2_t *v2, vuint32mf2_t *v3, vuint32mf2_t *v4, vuint32mf2_t *v5, vuint32mf2_t *v6, vuint32mf2_t *v7, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg8e32_v_u32mf2(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, vl);
}

void test_vlsseg8e32_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vuint32m1_t *v6, vuint32m1_t *v7, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg8e32_v_u32m1(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, vl);
}

void test_vlsseg8e32_v_f32mf2_m(vfloat32mf2_t *v0, vfloat32mf2_t *v1, vfloat32mf2_t *v2, vfloat32mf2_t *v3, vfloat32mf2_t *v4, vfloat32mf2_t *v5, vfloat32mf2_t *v6, vfloat32mf2_t *v7, vbool64_t mask, vfloat32mf2_t maskedoff0, vfloat32mf2_t maskedoff1, vfloat32mf2_t maskedoff2, vfloat32mf2_t maskedoff3, vfloat32mf2_t maskedoff4, vfloat32mf2_t maskedoff5, vfloat32mf2_t maskedoff6, vfloat32mf2_t maskedoff7, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg8e32_v_f32mf2_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bstride, vl);
}

void test_vlsseg8e32_v_f32m1_m(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vfloat32m1_t *v4, vfloat32m1_t *v5, vfloat32m1_t *v6, vfloat32m1_t *v7, vbool32_t mask, vfloat32m1_t maskedoff0, vfloat32m1_t maskedoff1, vfloat32m1_t maskedoff2, vfloat32m1_t maskedoff3, vfloat32m1_t maskedoff4, vfloat32m1_t maskedoff5, vfloat32m1_t maskedoff6, vfloat32m1_t maskedoff7, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg8e32_v_f32m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bstride, vl);
}

void test_vlsseg8e32_v_i32mf2_m(vint32mf2_t *v0, vint32mf2_t *v1, vint32mf2_t *v2, vint32mf2_t *v3, vint32mf2_t *v4, vint32mf2_t *v5, vint32mf2_t *v6, vint32mf2_t *v7, vbool64_t mask, vint32mf2_t maskedoff0, vint32mf2_t maskedoff1, vint32mf2_t maskedoff2, vint32mf2_t maskedoff3, vint32mf2_t maskedoff4, vint32mf2_t maskedoff5, vint32mf2_t maskedoff6, vint32mf2_t maskedoff7, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg8e32_v_i32mf2_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bstride, vl);
}

void test_vlsseg8e32_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vint32m1_t *v6, vint32m1_t *v7, vbool32_t mask, vint32m1_t maskedoff0, vint32m1_t maskedoff1, vint32m1_t maskedoff2, vint32m1_t maskedoff3, vint32m1_t maskedoff4, vint32m1_t maskedoff5, vint32m1_t maskedoff6, vint32m1_t maskedoff7, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg8e32_v_i32m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bstride, vl);
}

void test_vlsseg8e32_v_u32mf2_m(vuint32mf2_t *v0, vuint32mf2_t *v1, vuint32mf2_t *v2, vuint32mf2_t *v3, vuint32mf2_t *v4, vuint32mf2_t *v5, vuint32mf2_t *v6, vuint32mf2_t *v7, vbool64_t mask, vuint32mf2_t maskedoff0, vuint32mf2_t maskedoff1, vuint32mf2_t maskedoff2, vuint32mf2_t maskedoff3, vuint32mf2_t maskedoff4, vuint32mf2_t maskedoff5, vuint32mf2_t maskedoff6, vuint32mf2_t maskedoff7, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg8e32_v_u32mf2_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bstride, vl);
}

void test_vlsseg8e32_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vuint32m1_t *v6, vuint32m1_t *v7, vbool32_t mask, vuint32m1_t maskedoff0, vuint32m1_t maskedoff1, vuint32m1_t maskedoff2, vuint32m1_t maskedoff3, vuint32m1_t maskedoff4, vuint32m1_t maskedoff5, vuint32m1_t maskedoff6, vuint32m1_t maskedoff7, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg8e32_v_u32m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bstride, vl);
}

