#include <stdint.h>
#include "rvv-v0p10-compatible-headers/overloaded-non-policy.h"
#include "rvv-v0p10-compatible-headers/overloaded-policy.h"
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vsseg8e32_v_f32mf2(float32_t *base, vfloat32mf2_t v0, vfloat32mf2_t v1, vfloat32mf2_t v2, vfloat32mf2_t v3, vfloat32mf2_t v4, vfloat32mf2_t v5, vfloat32mf2_t v6, vfloat32mf2_t v7, size_t vl) {
  return vsseg8e32(base, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

void test_vsseg8e32_v_f32m1(float32_t *base, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4, vfloat32m1_t v5, vfloat32m1_t v6, vfloat32m1_t v7, size_t vl) {
  return vsseg8e32(base, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

void test_vsseg8e32_v_i32mf2(int32_t *base, vint32mf2_t v0, vint32mf2_t v1, vint32mf2_t v2, vint32mf2_t v3, vint32mf2_t v4, vint32mf2_t v5, vint32mf2_t v6, vint32mf2_t v7, size_t vl) {
  return vsseg8e32(base, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

void test_vsseg8e32_v_i32m1(int32_t *base, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, vint32m1_t v6, vint32m1_t v7, size_t vl) {
  return vsseg8e32(base, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

void test_vsseg8e32_v_u32mf2(uint32_t *base, vuint32mf2_t v0, vuint32mf2_t v1, vuint32mf2_t v2, vuint32mf2_t v3, vuint32mf2_t v4, vuint32mf2_t v5, vuint32mf2_t v6, vuint32mf2_t v7, size_t vl) {
  return vsseg8e32(base, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

void test_vsseg8e32_v_u32m1(uint32_t *base, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, vuint32m1_t v6, vuint32m1_t v7, size_t vl) {
  return vsseg8e32(base, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

void test_vsseg8e32_v_f32mf2_m(vbool64_t mask, float32_t *base, vfloat32mf2_t v0, vfloat32mf2_t v1, vfloat32mf2_t v2, vfloat32mf2_t v3, vfloat32mf2_t v4, vfloat32mf2_t v5, vfloat32mf2_t v6, vfloat32mf2_t v7, size_t vl) {
  return vsseg8e32(mask, base, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

void test_vsseg8e32_v_f32m1_m(vbool32_t mask, float32_t *base, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4, vfloat32m1_t v5, vfloat32m1_t v6, vfloat32m1_t v7, size_t vl) {
  return vsseg8e32(mask, base, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

void test_vsseg8e32_v_i32mf2_m(vbool64_t mask, int32_t *base, vint32mf2_t v0, vint32mf2_t v1, vint32mf2_t v2, vint32mf2_t v3, vint32mf2_t v4, vint32mf2_t v5, vint32mf2_t v6, vint32mf2_t v7, size_t vl) {
  return vsseg8e32(mask, base, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

void test_vsseg8e32_v_i32m1_m(vbool32_t mask, int32_t *base, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, vint32m1_t v6, vint32m1_t v7, size_t vl) {
  return vsseg8e32(mask, base, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

void test_vsseg8e32_v_u32mf2_m(vbool64_t mask, uint32_t *base, vuint32mf2_t v0, vuint32mf2_t v1, vuint32mf2_t v2, vuint32mf2_t v3, vuint32mf2_t v4, vuint32mf2_t v5, vuint32mf2_t v6, vuint32mf2_t v7, size_t vl) {
  return vsseg8e32(mask, base, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

void test_vsseg8e32_v_u32m1_m(vbool32_t mask, uint32_t *base, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, vuint32m1_t v6, vuint32m1_t v7, size_t vl) {
  return vsseg8e32(mask, base, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

