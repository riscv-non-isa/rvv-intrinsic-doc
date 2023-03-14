/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vlseg3e16_v_f16mf4_tu(vfloat16mf4_t *v0, vfloat16mf4_t *v1, vfloat16mf4_t *v2, vfloat16mf4_t maskedoff0, vfloat16mf4_t maskedoff1, vfloat16mf4_t maskedoff2, const float16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_f16mf4_tu(v0, v1, v2, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e16_v_f16mf2_tu(vfloat16mf2_t *v0, vfloat16mf2_t *v1, vfloat16mf2_t *v2, vfloat16mf2_t maskedoff0, vfloat16mf2_t maskedoff1, vfloat16mf2_t maskedoff2, const float16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_f16mf2_tu(v0, v1, v2, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e16_v_f16m1_tu(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t maskedoff0, vfloat16m1_t maskedoff1, vfloat16m1_t maskedoff2, const float16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_f16m1_tu(v0, v1, v2, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e16_v_f16m2_tu(vfloat16m2_t *v0, vfloat16m2_t *v1, vfloat16m2_t *v2, vfloat16m2_t maskedoff0, vfloat16m2_t maskedoff1, vfloat16m2_t maskedoff2, const float16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_f16m2_tu(v0, v1, v2, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e16_v_i16mf4_tu(vint16mf4_t *v0, vint16mf4_t *v1, vint16mf4_t *v2, vint16mf4_t maskedoff0, vint16mf4_t maskedoff1, vint16mf4_t maskedoff2, const int16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_i16mf4_tu(v0, v1, v2, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e16_v_i16mf2_tu(vint16mf2_t *v0, vint16mf2_t *v1, vint16mf2_t *v2, vint16mf2_t maskedoff0, vint16mf2_t maskedoff1, vint16mf2_t maskedoff2, const int16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_i16mf2_tu(v0, v1, v2, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e16_v_i16m1_tu(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t maskedoff0, vint16m1_t maskedoff1, vint16m1_t maskedoff2, const int16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_i16m1_tu(v0, v1, v2, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e16_v_i16m2_tu(vint16m2_t *v0, vint16m2_t *v1, vint16m2_t *v2, vint16m2_t maskedoff0, vint16m2_t maskedoff1, vint16m2_t maskedoff2, const int16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_i16m2_tu(v0, v1, v2, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e16_v_u16mf4_tu(vuint16mf4_t *v0, vuint16mf4_t *v1, vuint16mf4_t *v2, vuint16mf4_t maskedoff0, vuint16mf4_t maskedoff1, vuint16mf4_t maskedoff2, const uint16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_u16mf4_tu(v0, v1, v2, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e16_v_u16mf2_tu(vuint16mf2_t *v0, vuint16mf2_t *v1, vuint16mf2_t *v2, vuint16mf2_t maskedoff0, vuint16mf2_t maskedoff1, vuint16mf2_t maskedoff2, const uint16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_u16mf2_tu(v0, v1, v2, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e16_v_u16m1_tu(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t maskedoff0, vuint16m1_t maskedoff1, vuint16m1_t maskedoff2, const uint16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_u16m1_tu(v0, v1, v2, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e16_v_u16m2_tu(vuint16m2_t *v0, vuint16m2_t *v1, vuint16m2_t *v2, vuint16m2_t maskedoff0, vuint16m2_t maskedoff1, vuint16m2_t maskedoff2, const uint16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_u16m2_tu(v0, v1, v2, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e16_v_f16mf4_tum(vfloat16mf4_t *v0, vfloat16mf4_t *v1, vfloat16mf4_t *v2, vbool64_t mask, vfloat16mf4_t maskedoff0, vfloat16mf4_t maskedoff1, vfloat16mf4_t maskedoff2, const float16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_f16mf4_tum(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e16_v_f16mf2_tum(vfloat16mf2_t *v0, vfloat16mf2_t *v1, vfloat16mf2_t *v2, vbool32_t mask, vfloat16mf2_t maskedoff0, vfloat16mf2_t maskedoff1, vfloat16mf2_t maskedoff2, const float16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_f16mf2_tum(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e16_v_f16m1_tum(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vbool16_t mask, vfloat16m1_t maskedoff0, vfloat16m1_t maskedoff1, vfloat16m1_t maskedoff2, const float16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_f16m1_tum(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e16_v_f16m2_tum(vfloat16m2_t *v0, vfloat16m2_t *v1, vfloat16m2_t *v2, vbool8_t mask, vfloat16m2_t maskedoff0, vfloat16m2_t maskedoff1, vfloat16m2_t maskedoff2, const float16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_f16m2_tum(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e16_v_i16mf4_tum(vint16mf4_t *v0, vint16mf4_t *v1, vint16mf4_t *v2, vbool64_t mask, vint16mf4_t maskedoff0, vint16mf4_t maskedoff1, vint16mf4_t maskedoff2, const int16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_i16mf4_tum(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e16_v_i16mf2_tum(vint16mf2_t *v0, vint16mf2_t *v1, vint16mf2_t *v2, vbool32_t mask, vint16mf2_t maskedoff0, vint16mf2_t maskedoff1, vint16mf2_t maskedoff2, const int16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_i16mf2_tum(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e16_v_i16m1_tum(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vbool16_t mask, vint16m1_t maskedoff0, vint16m1_t maskedoff1, vint16m1_t maskedoff2, const int16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_i16m1_tum(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e16_v_i16m2_tum(vint16m2_t *v0, vint16m2_t *v1, vint16m2_t *v2, vbool8_t mask, vint16m2_t maskedoff0, vint16m2_t maskedoff1, vint16m2_t maskedoff2, const int16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_i16m2_tum(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e16_v_u16mf4_tum(vuint16mf4_t *v0, vuint16mf4_t *v1, vuint16mf4_t *v2, vbool64_t mask, vuint16mf4_t maskedoff0, vuint16mf4_t maskedoff1, vuint16mf4_t maskedoff2, const uint16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_u16mf4_tum(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e16_v_u16mf2_tum(vuint16mf2_t *v0, vuint16mf2_t *v1, vuint16mf2_t *v2, vbool32_t mask, vuint16mf2_t maskedoff0, vuint16mf2_t maskedoff1, vuint16mf2_t maskedoff2, const uint16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_u16mf2_tum(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e16_v_u16m1_tum(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vbool16_t mask, vuint16m1_t maskedoff0, vuint16m1_t maskedoff1, vuint16m1_t maskedoff2, const uint16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_u16m1_tum(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e16_v_u16m2_tum(vuint16m2_t *v0, vuint16m2_t *v1, vuint16m2_t *v2, vbool8_t mask, vuint16m2_t maskedoff0, vuint16m2_t maskedoff1, vuint16m2_t maskedoff2, const uint16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_u16m2_tum(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e16_v_f16mf4_tumu(vfloat16mf4_t *v0, vfloat16mf4_t *v1, vfloat16mf4_t *v2, vbool64_t mask, vfloat16mf4_t maskedoff0, vfloat16mf4_t maskedoff1, vfloat16mf4_t maskedoff2, const float16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_f16mf4_tumu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e16_v_f16mf2_tumu(vfloat16mf2_t *v0, vfloat16mf2_t *v1, vfloat16mf2_t *v2, vbool32_t mask, vfloat16mf2_t maskedoff0, vfloat16mf2_t maskedoff1, vfloat16mf2_t maskedoff2, const float16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_f16mf2_tumu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e16_v_f16m1_tumu(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vbool16_t mask, vfloat16m1_t maskedoff0, vfloat16m1_t maskedoff1, vfloat16m1_t maskedoff2, const float16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_f16m1_tumu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e16_v_f16m2_tumu(vfloat16m2_t *v0, vfloat16m2_t *v1, vfloat16m2_t *v2, vbool8_t mask, vfloat16m2_t maskedoff0, vfloat16m2_t maskedoff1, vfloat16m2_t maskedoff2, const float16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_f16m2_tumu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e16_v_i16mf4_tumu(vint16mf4_t *v0, vint16mf4_t *v1, vint16mf4_t *v2, vbool64_t mask, vint16mf4_t maskedoff0, vint16mf4_t maskedoff1, vint16mf4_t maskedoff2, const int16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_i16mf4_tumu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e16_v_i16mf2_tumu(vint16mf2_t *v0, vint16mf2_t *v1, vint16mf2_t *v2, vbool32_t mask, vint16mf2_t maskedoff0, vint16mf2_t maskedoff1, vint16mf2_t maskedoff2, const int16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_i16mf2_tumu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e16_v_i16m1_tumu(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vbool16_t mask, vint16m1_t maskedoff0, vint16m1_t maskedoff1, vint16m1_t maskedoff2, const int16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_i16m1_tumu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e16_v_i16m2_tumu(vint16m2_t *v0, vint16m2_t *v1, vint16m2_t *v2, vbool8_t mask, vint16m2_t maskedoff0, vint16m2_t maskedoff1, vint16m2_t maskedoff2, const int16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_i16m2_tumu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e16_v_u16mf4_tumu(vuint16mf4_t *v0, vuint16mf4_t *v1, vuint16mf4_t *v2, vbool64_t mask, vuint16mf4_t maskedoff0, vuint16mf4_t maskedoff1, vuint16mf4_t maskedoff2, const uint16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_u16mf4_tumu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e16_v_u16mf2_tumu(vuint16mf2_t *v0, vuint16mf2_t *v1, vuint16mf2_t *v2, vbool32_t mask, vuint16mf2_t maskedoff0, vuint16mf2_t maskedoff1, vuint16mf2_t maskedoff2, const uint16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_u16mf2_tumu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e16_v_u16m1_tumu(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vbool16_t mask, vuint16m1_t maskedoff0, vuint16m1_t maskedoff1, vuint16m1_t maskedoff2, const uint16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_u16m1_tumu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e16_v_u16m2_tumu(vuint16m2_t *v0, vuint16m2_t *v1, vuint16m2_t *v2, vbool8_t mask, vuint16m2_t maskedoff0, vuint16m2_t maskedoff1, vuint16m2_t maskedoff2, const uint16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_u16m2_tumu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e16_v_f16mf4_mu(vfloat16mf4_t *v0, vfloat16mf4_t *v1, vfloat16mf4_t *v2, vbool64_t mask, vfloat16mf4_t maskedoff0, vfloat16mf4_t maskedoff1, vfloat16mf4_t maskedoff2, const float16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_f16mf4_mu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e16_v_f16mf2_mu(vfloat16mf2_t *v0, vfloat16mf2_t *v1, vfloat16mf2_t *v2, vbool32_t mask, vfloat16mf2_t maskedoff0, vfloat16mf2_t maskedoff1, vfloat16mf2_t maskedoff2, const float16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_f16mf2_mu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e16_v_f16m1_mu(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vbool16_t mask, vfloat16m1_t maskedoff0, vfloat16m1_t maskedoff1, vfloat16m1_t maskedoff2, const float16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_f16m1_mu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e16_v_f16m2_mu(vfloat16m2_t *v0, vfloat16m2_t *v1, vfloat16m2_t *v2, vbool8_t mask, vfloat16m2_t maskedoff0, vfloat16m2_t maskedoff1, vfloat16m2_t maskedoff2, const float16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_f16m2_mu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e16_v_i16mf4_mu(vint16mf4_t *v0, vint16mf4_t *v1, vint16mf4_t *v2, vbool64_t mask, vint16mf4_t maskedoff0, vint16mf4_t maskedoff1, vint16mf4_t maskedoff2, const int16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_i16mf4_mu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e16_v_i16mf2_mu(vint16mf2_t *v0, vint16mf2_t *v1, vint16mf2_t *v2, vbool32_t mask, vint16mf2_t maskedoff0, vint16mf2_t maskedoff1, vint16mf2_t maskedoff2, const int16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_i16mf2_mu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e16_v_i16m1_mu(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vbool16_t mask, vint16m1_t maskedoff0, vint16m1_t maskedoff1, vint16m1_t maskedoff2, const int16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_i16m1_mu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e16_v_i16m2_mu(vint16m2_t *v0, vint16m2_t *v1, vint16m2_t *v2, vbool8_t mask, vint16m2_t maskedoff0, vint16m2_t maskedoff1, vint16m2_t maskedoff2, const int16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_i16m2_mu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e16_v_u16mf4_mu(vuint16mf4_t *v0, vuint16mf4_t *v1, vuint16mf4_t *v2, vbool64_t mask, vuint16mf4_t maskedoff0, vuint16mf4_t maskedoff1, vuint16mf4_t maskedoff2, const uint16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_u16mf4_mu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e16_v_u16mf2_mu(vuint16mf2_t *v0, vuint16mf2_t *v1, vuint16mf2_t *v2, vbool32_t mask, vuint16mf2_t maskedoff0, vuint16mf2_t maskedoff1, vuint16mf2_t maskedoff2, const uint16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_u16mf2_mu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e16_v_u16m1_mu(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vbool16_t mask, vuint16m1_t maskedoff0, vuint16m1_t maskedoff1, vuint16m1_t maskedoff2, const uint16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_u16m1_mu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e16_v_u16m2_mu(vuint16m2_t *v0, vuint16m2_t *v1, vuint16m2_t *v2, vbool8_t mask, vuint16m2_t maskedoff0, vuint16m2_t maskedoff1, vuint16m2_t maskedoff2, const uint16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_u16m2_mu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*[a-x0-9]+,\s*e[0-9]+,\s*m[f]?[1248],\s*t[au],\s*m[au]\s+vlseg3e16\.[,\sa-x0-9()]+} 48 } } */
