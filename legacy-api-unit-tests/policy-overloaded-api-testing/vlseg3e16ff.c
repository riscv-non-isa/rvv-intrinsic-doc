#include <stdint.h>
#include "rvv-v0p10-compatible-headers/overloaded-non-policy.h"
#include "rvv-v0p10-compatible-headers/overloaded-policy.h"
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vlseg3e16ff_v_f16mf4_tu(vfloat16mf4_t *v0, vfloat16mf4_t *v1, vfloat16mf4_t *v2, vfloat16mf4_t maskedoff0, vfloat16mf4_t maskedoff1, vfloat16mf4_t maskedoff2, const float16_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e16ff_tu(v0, v1, v2, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e16ff_v_f16mf2_tu(vfloat16mf2_t *v0, vfloat16mf2_t *v1, vfloat16mf2_t *v2, vfloat16mf2_t maskedoff0, vfloat16mf2_t maskedoff1, vfloat16mf2_t maskedoff2, const float16_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e16ff_tu(v0, v1, v2, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e16ff_v_f16m1_tu(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t maskedoff0, vfloat16m1_t maskedoff1, vfloat16m1_t maskedoff2, const float16_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e16ff_tu(v0, v1, v2, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e16ff_v_f16m2_tu(vfloat16m2_t *v0, vfloat16m2_t *v1, vfloat16m2_t *v2, vfloat16m2_t maskedoff0, vfloat16m2_t maskedoff1, vfloat16m2_t maskedoff2, const float16_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e16ff_tu(v0, v1, v2, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e16ff_v_i16mf4_tu(vint16mf4_t *v0, vint16mf4_t *v1, vint16mf4_t *v2, vint16mf4_t maskedoff0, vint16mf4_t maskedoff1, vint16mf4_t maskedoff2, const int16_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e16ff_tu(v0, v1, v2, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e16ff_v_i16mf2_tu(vint16mf2_t *v0, vint16mf2_t *v1, vint16mf2_t *v2, vint16mf2_t maskedoff0, vint16mf2_t maskedoff1, vint16mf2_t maskedoff2, const int16_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e16ff_tu(v0, v1, v2, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e16ff_v_i16m1_tu(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t maskedoff0, vint16m1_t maskedoff1, vint16m1_t maskedoff2, const int16_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e16ff_tu(v0, v1, v2, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e16ff_v_i16m2_tu(vint16m2_t *v0, vint16m2_t *v1, vint16m2_t *v2, vint16m2_t maskedoff0, vint16m2_t maskedoff1, vint16m2_t maskedoff2, const int16_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e16ff_tu(v0, v1, v2, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e16ff_v_u16mf4_tu(vuint16mf4_t *v0, vuint16mf4_t *v1, vuint16mf4_t *v2, vuint16mf4_t maskedoff0, vuint16mf4_t maskedoff1, vuint16mf4_t maskedoff2, const uint16_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e16ff_tu(v0, v1, v2, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e16ff_v_u16mf2_tu(vuint16mf2_t *v0, vuint16mf2_t *v1, vuint16mf2_t *v2, vuint16mf2_t maskedoff0, vuint16mf2_t maskedoff1, vuint16mf2_t maskedoff2, const uint16_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e16ff_tu(v0, v1, v2, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e16ff_v_u16m1_tu(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t maskedoff0, vuint16m1_t maskedoff1, vuint16m1_t maskedoff2, const uint16_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e16ff_tu(v0, v1, v2, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e16ff_v_u16m2_tu(vuint16m2_t *v0, vuint16m2_t *v1, vuint16m2_t *v2, vuint16m2_t maskedoff0, vuint16m2_t maskedoff1, vuint16m2_t maskedoff2, const uint16_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e16ff_tu(v0, v1, v2, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e16ff_v_f16mf4_tuma(vfloat16mf4_t *v0, vfloat16mf4_t *v1, vfloat16mf4_t *v2, vbool64_t mask, vfloat16mf4_t maskedoff0, vfloat16mf4_t maskedoff1, vfloat16mf4_t maskedoff2, const float16_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e16ff_tuma(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e16ff_v_f16mf2_tuma(vfloat16mf2_t *v0, vfloat16mf2_t *v1, vfloat16mf2_t *v2, vbool32_t mask, vfloat16mf2_t maskedoff0, vfloat16mf2_t maskedoff1, vfloat16mf2_t maskedoff2, const float16_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e16ff_tuma(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e16ff_v_f16m1_tuma(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vbool16_t mask, vfloat16m1_t maskedoff0, vfloat16m1_t maskedoff1, vfloat16m1_t maskedoff2, const float16_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e16ff_tuma(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e16ff_v_f16m2_tuma(vfloat16m2_t *v0, vfloat16m2_t *v1, vfloat16m2_t *v2, vbool8_t mask, vfloat16m2_t maskedoff0, vfloat16m2_t maskedoff1, vfloat16m2_t maskedoff2, const float16_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e16ff_tuma(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e16ff_v_i16mf4_tuma(vint16mf4_t *v0, vint16mf4_t *v1, vint16mf4_t *v2, vbool64_t mask, vint16mf4_t maskedoff0, vint16mf4_t maskedoff1, vint16mf4_t maskedoff2, const int16_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e16ff_tuma(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e16ff_v_i16mf2_tuma(vint16mf2_t *v0, vint16mf2_t *v1, vint16mf2_t *v2, vbool32_t mask, vint16mf2_t maskedoff0, vint16mf2_t maskedoff1, vint16mf2_t maskedoff2, const int16_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e16ff_tuma(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e16ff_v_i16m1_tuma(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vbool16_t mask, vint16m1_t maskedoff0, vint16m1_t maskedoff1, vint16m1_t maskedoff2, const int16_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e16ff_tuma(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e16ff_v_i16m2_tuma(vint16m2_t *v0, vint16m2_t *v1, vint16m2_t *v2, vbool8_t mask, vint16m2_t maskedoff0, vint16m2_t maskedoff1, vint16m2_t maskedoff2, const int16_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e16ff_tuma(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e16ff_v_u16mf4_tuma(vuint16mf4_t *v0, vuint16mf4_t *v1, vuint16mf4_t *v2, vbool64_t mask, vuint16mf4_t maskedoff0, vuint16mf4_t maskedoff1, vuint16mf4_t maskedoff2, const uint16_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e16ff_tuma(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e16ff_v_u16mf2_tuma(vuint16mf2_t *v0, vuint16mf2_t *v1, vuint16mf2_t *v2, vbool32_t mask, vuint16mf2_t maskedoff0, vuint16mf2_t maskedoff1, vuint16mf2_t maskedoff2, const uint16_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e16ff_tuma(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e16ff_v_u16m1_tuma(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vbool16_t mask, vuint16m1_t maskedoff0, vuint16m1_t maskedoff1, vuint16m1_t maskedoff2, const uint16_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e16ff_tuma(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e16ff_v_u16m2_tuma(vuint16m2_t *v0, vuint16m2_t *v1, vuint16m2_t *v2, vbool8_t mask, vuint16m2_t maskedoff0, vuint16m2_t maskedoff1, vuint16m2_t maskedoff2, const uint16_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e16ff_tuma(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e16ff_v_f16mf4_tumu(vfloat16mf4_t *v0, vfloat16mf4_t *v1, vfloat16mf4_t *v2, vbool64_t mask, vfloat16mf4_t maskedoff0, vfloat16mf4_t maskedoff1, vfloat16mf4_t maskedoff2, const float16_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e16ff_tumu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e16ff_v_f16mf2_tumu(vfloat16mf2_t *v0, vfloat16mf2_t *v1, vfloat16mf2_t *v2, vbool32_t mask, vfloat16mf2_t maskedoff0, vfloat16mf2_t maskedoff1, vfloat16mf2_t maskedoff2, const float16_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e16ff_tumu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e16ff_v_f16m1_tumu(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vbool16_t mask, vfloat16m1_t maskedoff0, vfloat16m1_t maskedoff1, vfloat16m1_t maskedoff2, const float16_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e16ff_tumu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e16ff_v_f16m2_tumu(vfloat16m2_t *v0, vfloat16m2_t *v1, vfloat16m2_t *v2, vbool8_t mask, vfloat16m2_t maskedoff0, vfloat16m2_t maskedoff1, vfloat16m2_t maskedoff2, const float16_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e16ff_tumu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e16ff_v_i16mf4_tumu(vint16mf4_t *v0, vint16mf4_t *v1, vint16mf4_t *v2, vbool64_t mask, vint16mf4_t maskedoff0, vint16mf4_t maskedoff1, vint16mf4_t maskedoff2, const int16_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e16ff_tumu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e16ff_v_i16mf2_tumu(vint16mf2_t *v0, vint16mf2_t *v1, vint16mf2_t *v2, vbool32_t mask, vint16mf2_t maskedoff0, vint16mf2_t maskedoff1, vint16mf2_t maskedoff2, const int16_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e16ff_tumu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e16ff_v_i16m1_tumu(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vbool16_t mask, vint16m1_t maskedoff0, vint16m1_t maskedoff1, vint16m1_t maskedoff2, const int16_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e16ff_tumu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e16ff_v_i16m2_tumu(vint16m2_t *v0, vint16m2_t *v1, vint16m2_t *v2, vbool8_t mask, vint16m2_t maskedoff0, vint16m2_t maskedoff1, vint16m2_t maskedoff2, const int16_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e16ff_tumu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e16ff_v_u16mf4_tumu(vuint16mf4_t *v0, vuint16mf4_t *v1, vuint16mf4_t *v2, vbool64_t mask, vuint16mf4_t maskedoff0, vuint16mf4_t maskedoff1, vuint16mf4_t maskedoff2, const uint16_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e16ff_tumu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e16ff_v_u16mf2_tumu(vuint16mf2_t *v0, vuint16mf2_t *v1, vuint16mf2_t *v2, vbool32_t mask, vuint16mf2_t maskedoff0, vuint16mf2_t maskedoff1, vuint16mf2_t maskedoff2, const uint16_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e16ff_tumu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e16ff_v_u16m1_tumu(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vbool16_t mask, vuint16m1_t maskedoff0, vuint16m1_t maskedoff1, vuint16m1_t maskedoff2, const uint16_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e16ff_tumu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e16ff_v_u16m2_tumu(vuint16m2_t *v0, vuint16m2_t *v1, vuint16m2_t *v2, vbool8_t mask, vuint16m2_t maskedoff0, vuint16m2_t maskedoff1, vuint16m2_t maskedoff2, const uint16_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e16ff_tumu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e16ff_v_f16mf4_tamu(vfloat16mf4_t *v0, vfloat16mf4_t *v1, vfloat16mf4_t *v2, vbool64_t mask, vfloat16mf4_t maskedoff0, vfloat16mf4_t maskedoff1, vfloat16mf4_t maskedoff2, const float16_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e16ff_tamu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e16ff_v_f16mf2_tamu(vfloat16mf2_t *v0, vfloat16mf2_t *v1, vfloat16mf2_t *v2, vbool32_t mask, vfloat16mf2_t maskedoff0, vfloat16mf2_t maskedoff1, vfloat16mf2_t maskedoff2, const float16_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e16ff_tamu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e16ff_v_f16m1_tamu(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vbool16_t mask, vfloat16m1_t maskedoff0, vfloat16m1_t maskedoff1, vfloat16m1_t maskedoff2, const float16_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e16ff_tamu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e16ff_v_f16m2_tamu(vfloat16m2_t *v0, vfloat16m2_t *v1, vfloat16m2_t *v2, vbool8_t mask, vfloat16m2_t maskedoff0, vfloat16m2_t maskedoff1, vfloat16m2_t maskedoff2, const float16_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e16ff_tamu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e16ff_v_i16mf4_tamu(vint16mf4_t *v0, vint16mf4_t *v1, vint16mf4_t *v2, vbool64_t mask, vint16mf4_t maskedoff0, vint16mf4_t maskedoff1, vint16mf4_t maskedoff2, const int16_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e16ff_tamu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e16ff_v_i16mf2_tamu(vint16mf2_t *v0, vint16mf2_t *v1, vint16mf2_t *v2, vbool32_t mask, vint16mf2_t maskedoff0, vint16mf2_t maskedoff1, vint16mf2_t maskedoff2, const int16_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e16ff_tamu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e16ff_v_i16m1_tamu(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vbool16_t mask, vint16m1_t maskedoff0, vint16m1_t maskedoff1, vint16m1_t maskedoff2, const int16_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e16ff_tamu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e16ff_v_i16m2_tamu(vint16m2_t *v0, vint16m2_t *v1, vint16m2_t *v2, vbool8_t mask, vint16m2_t maskedoff0, vint16m2_t maskedoff1, vint16m2_t maskedoff2, const int16_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e16ff_tamu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e16ff_v_u16mf4_tamu(vuint16mf4_t *v0, vuint16mf4_t *v1, vuint16mf4_t *v2, vbool64_t mask, vuint16mf4_t maskedoff0, vuint16mf4_t maskedoff1, vuint16mf4_t maskedoff2, const uint16_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e16ff_tamu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e16ff_v_u16mf2_tamu(vuint16mf2_t *v0, vuint16mf2_t *v1, vuint16mf2_t *v2, vbool32_t mask, vuint16mf2_t maskedoff0, vuint16mf2_t maskedoff1, vuint16mf2_t maskedoff2, const uint16_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e16ff_tamu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e16ff_v_u16m1_tamu(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vbool16_t mask, vuint16m1_t maskedoff0, vuint16m1_t maskedoff1, vuint16m1_t maskedoff2, const uint16_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e16ff_tamu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e16ff_v_u16m2_tamu(vuint16m2_t *v0, vuint16m2_t *v1, vuint16m2_t *v2, vbool8_t mask, vuint16m2_t maskedoff0, vuint16m2_t maskedoff1, vuint16m2_t maskedoff2, const uint16_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e16ff_tamu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

