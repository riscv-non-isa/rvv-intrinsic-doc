#include <stdint.h>
#include "rvv-v0p10-compatible-headers/non-policy.h"
#include "rvv-v0p10-compatible-headers/policy.h"
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vsseg6e16_v_f16mf4(float16_t *base, vfloat16mf4_t v0, vfloat16mf4_t v1, vfloat16mf4_t v2, vfloat16mf4_t v3, vfloat16mf4_t v4, vfloat16mf4_t v5, size_t vl) {
  return vsseg6e16_v_f16mf4(base, v0, v1, v2, v3, v4, v5, vl);
}

void test_vsseg6e16_v_f16mf2(float16_t *base, vfloat16mf2_t v0, vfloat16mf2_t v1, vfloat16mf2_t v2, vfloat16mf2_t v3, vfloat16mf2_t v4, vfloat16mf2_t v5, size_t vl) {
  return vsseg6e16_v_f16mf2(base, v0, v1, v2, v3, v4, v5, vl);
}

void test_vsseg6e16_v_f16m1(float16_t *base, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, vfloat16m1_t v4, vfloat16m1_t v5, size_t vl) {
  return vsseg6e16_v_f16m1(base, v0, v1, v2, v3, v4, v5, vl);
}

void test_vsseg6e16_v_i16mf4(int16_t *base, vint16mf4_t v0, vint16mf4_t v1, vint16mf4_t v2, vint16mf4_t v3, vint16mf4_t v4, vint16mf4_t v5, size_t vl) {
  return vsseg6e16_v_i16mf4(base, v0, v1, v2, v3, v4, v5, vl);
}

void test_vsseg6e16_v_i16mf2(int16_t *base, vint16mf2_t v0, vint16mf2_t v1, vint16mf2_t v2, vint16mf2_t v3, vint16mf2_t v4, vint16mf2_t v5, size_t vl) {
  return vsseg6e16_v_i16mf2(base, v0, v1, v2, v3, v4, v5, vl);
}

void test_vsseg6e16_v_i16m1(int16_t *base, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, size_t vl) {
  return vsseg6e16_v_i16m1(base, v0, v1, v2, v3, v4, v5, vl);
}

void test_vsseg6e16_v_u16mf4(uint16_t *base, vuint16mf4_t v0, vuint16mf4_t v1, vuint16mf4_t v2, vuint16mf4_t v3, vuint16mf4_t v4, vuint16mf4_t v5, size_t vl) {
  return vsseg6e16_v_u16mf4(base, v0, v1, v2, v3, v4, v5, vl);
}

void test_vsseg6e16_v_u16mf2(uint16_t *base, vuint16mf2_t v0, vuint16mf2_t v1, vuint16mf2_t v2, vuint16mf2_t v3, vuint16mf2_t v4, vuint16mf2_t v5, size_t vl) {
  return vsseg6e16_v_u16mf2(base, v0, v1, v2, v3, v4, v5, vl);
}

void test_vsseg6e16_v_u16m1(uint16_t *base, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, size_t vl) {
  return vsseg6e16_v_u16m1(base, v0, v1, v2, v3, v4, v5, vl);
}

void test_vsseg6e16_v_f16mf4_m(vbool64_t mask, float16_t *base, vfloat16mf4_t v0, vfloat16mf4_t v1, vfloat16mf4_t v2, vfloat16mf4_t v3, vfloat16mf4_t v4, vfloat16mf4_t v5, size_t vl) {
  return vsseg6e16_v_f16mf4_m(mask, base, v0, v1, v2, v3, v4, v5, vl);
}

void test_vsseg6e16_v_f16mf2_m(vbool32_t mask, float16_t *base, vfloat16mf2_t v0, vfloat16mf2_t v1, vfloat16mf2_t v2, vfloat16mf2_t v3, vfloat16mf2_t v4, vfloat16mf2_t v5, size_t vl) {
  return vsseg6e16_v_f16mf2_m(mask, base, v0, v1, v2, v3, v4, v5, vl);
}

void test_vsseg6e16_v_f16m1_m(vbool16_t mask, float16_t *base, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, vfloat16m1_t v4, vfloat16m1_t v5, size_t vl) {
  return vsseg6e16_v_f16m1_m(mask, base, v0, v1, v2, v3, v4, v5, vl);
}

void test_vsseg6e16_v_i16mf4_m(vbool64_t mask, int16_t *base, vint16mf4_t v0, vint16mf4_t v1, vint16mf4_t v2, vint16mf4_t v3, vint16mf4_t v4, vint16mf4_t v5, size_t vl) {
  return vsseg6e16_v_i16mf4_m(mask, base, v0, v1, v2, v3, v4, v5, vl);
}

void test_vsseg6e16_v_i16mf2_m(vbool32_t mask, int16_t *base, vint16mf2_t v0, vint16mf2_t v1, vint16mf2_t v2, vint16mf2_t v3, vint16mf2_t v4, vint16mf2_t v5, size_t vl) {
  return vsseg6e16_v_i16mf2_m(mask, base, v0, v1, v2, v3, v4, v5, vl);
}

void test_vsseg6e16_v_i16m1_m(vbool16_t mask, int16_t *base, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, size_t vl) {
  return vsseg6e16_v_i16m1_m(mask, base, v0, v1, v2, v3, v4, v5, vl);
}

void test_vsseg6e16_v_u16mf4_m(vbool64_t mask, uint16_t *base, vuint16mf4_t v0, vuint16mf4_t v1, vuint16mf4_t v2, vuint16mf4_t v3, vuint16mf4_t v4, vuint16mf4_t v5, size_t vl) {
  return vsseg6e16_v_u16mf4_m(mask, base, v0, v1, v2, v3, v4, v5, vl);
}

void test_vsseg6e16_v_u16mf2_m(vbool32_t mask, uint16_t *base, vuint16mf2_t v0, vuint16mf2_t v1, vuint16mf2_t v2, vuint16mf2_t v3, vuint16mf2_t v4, vuint16mf2_t v5, size_t vl) {
  return vsseg6e16_v_u16mf2_m(mask, base, v0, v1, v2, v3, v4, v5, vl);
}

void test_vsseg6e16_v_u16m1_m(vbool16_t mask, uint16_t *base, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, size_t vl) {
  return vsseg6e16_v_u16m1_m(mask, base, v0, v1, v2, v3, v4, v5, vl);
}

