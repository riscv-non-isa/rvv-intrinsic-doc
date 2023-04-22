/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vlseg5e8ff_v_i8mf8_tu(vint8mf8_t *v0, vint8mf8_t *v1, vint8mf8_t *v2, vint8mf8_t *v3, vint8mf8_t *v4, vint8mf8_t maskedoff0, vint8mf8_t maskedoff1, vint8mf8_t maskedoff2, vint8mf8_t maskedoff3, vint8mf8_t maskedoff4, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e8ff_v_i8mf8_tu(v0, v1, v2, v3, v4, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, new_vl, vl);
}

void test_vlseg5e8ff_v_i8mf4_tu(vint8mf4_t *v0, vint8mf4_t *v1, vint8mf4_t *v2, vint8mf4_t *v3, vint8mf4_t *v4, vint8mf4_t maskedoff0, vint8mf4_t maskedoff1, vint8mf4_t maskedoff2, vint8mf4_t maskedoff3, vint8mf4_t maskedoff4, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e8ff_v_i8mf4_tu(v0, v1, v2, v3, v4, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, new_vl, vl);
}

void test_vlseg5e8ff_v_i8mf2_tu(vint8mf2_t *v0, vint8mf2_t *v1, vint8mf2_t *v2, vint8mf2_t *v3, vint8mf2_t *v4, vint8mf2_t maskedoff0, vint8mf2_t maskedoff1, vint8mf2_t maskedoff2, vint8mf2_t maskedoff3, vint8mf2_t maskedoff4, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e8ff_v_i8mf2_tu(v0, v1, v2, v3, v4, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, new_vl, vl);
}

void test_vlseg5e8ff_v_i8m1_tu(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t maskedoff0, vint8m1_t maskedoff1, vint8m1_t maskedoff2, vint8m1_t maskedoff3, vint8m1_t maskedoff4, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e8ff_v_i8m1_tu(v0, v1, v2, v3, v4, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, new_vl, vl);
}

void test_vlseg5e8ff_v_u8mf8_tu(vuint8mf8_t *v0, vuint8mf8_t *v1, vuint8mf8_t *v2, vuint8mf8_t *v3, vuint8mf8_t *v4, vuint8mf8_t maskedoff0, vuint8mf8_t maskedoff1, vuint8mf8_t maskedoff2, vuint8mf8_t maskedoff3, vuint8mf8_t maskedoff4, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e8ff_v_u8mf8_tu(v0, v1, v2, v3, v4, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, new_vl, vl);
}

void test_vlseg5e8ff_v_u8mf4_tu(vuint8mf4_t *v0, vuint8mf4_t *v1, vuint8mf4_t *v2, vuint8mf4_t *v3, vuint8mf4_t *v4, vuint8mf4_t maskedoff0, vuint8mf4_t maskedoff1, vuint8mf4_t maskedoff2, vuint8mf4_t maskedoff3, vuint8mf4_t maskedoff4, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e8ff_v_u8mf4_tu(v0, v1, v2, v3, v4, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, new_vl, vl);
}

void test_vlseg5e8ff_v_u8mf2_tu(vuint8mf2_t *v0, vuint8mf2_t *v1, vuint8mf2_t *v2, vuint8mf2_t *v3, vuint8mf2_t *v4, vuint8mf2_t maskedoff0, vuint8mf2_t maskedoff1, vuint8mf2_t maskedoff2, vuint8mf2_t maskedoff3, vuint8mf2_t maskedoff4, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e8ff_v_u8mf2_tu(v0, v1, v2, v3, v4, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, new_vl, vl);
}

void test_vlseg5e8ff_v_u8m1_tu(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t maskedoff0, vuint8m1_t maskedoff1, vuint8m1_t maskedoff2, vuint8m1_t maskedoff3, vuint8m1_t maskedoff4, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e8ff_v_u8m1_tu(v0, v1, v2, v3, v4, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, new_vl, vl);
}

void test_vlseg5e8ff_v_i8mf8_tum(vint8mf8_t *v0, vint8mf8_t *v1, vint8mf8_t *v2, vint8mf8_t *v3, vint8mf8_t *v4, vbool64_t mask, vint8mf8_t maskedoff0, vint8mf8_t maskedoff1, vint8mf8_t maskedoff2, vint8mf8_t maskedoff3, vint8mf8_t maskedoff4, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e8ff_v_i8mf8_tum(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, new_vl, vl);
}

void test_vlseg5e8ff_v_i8mf4_tum(vint8mf4_t *v0, vint8mf4_t *v1, vint8mf4_t *v2, vint8mf4_t *v3, vint8mf4_t *v4, vbool32_t mask, vint8mf4_t maskedoff0, vint8mf4_t maskedoff1, vint8mf4_t maskedoff2, vint8mf4_t maskedoff3, vint8mf4_t maskedoff4, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e8ff_v_i8mf4_tum(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, new_vl, vl);
}

void test_vlseg5e8ff_v_i8mf2_tum(vint8mf2_t *v0, vint8mf2_t *v1, vint8mf2_t *v2, vint8mf2_t *v3, vint8mf2_t *v4, vbool16_t mask, vint8mf2_t maskedoff0, vint8mf2_t maskedoff1, vint8mf2_t maskedoff2, vint8mf2_t maskedoff3, vint8mf2_t maskedoff4, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e8ff_v_i8mf2_tum(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, new_vl, vl);
}

void test_vlseg5e8ff_v_i8m1_tum(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vbool8_t mask, vint8m1_t maskedoff0, vint8m1_t maskedoff1, vint8m1_t maskedoff2, vint8m1_t maskedoff3, vint8m1_t maskedoff4, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e8ff_v_i8m1_tum(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, new_vl, vl);
}

void test_vlseg5e8ff_v_u8mf8_tum(vuint8mf8_t *v0, vuint8mf8_t *v1, vuint8mf8_t *v2, vuint8mf8_t *v3, vuint8mf8_t *v4, vbool64_t mask, vuint8mf8_t maskedoff0, vuint8mf8_t maskedoff1, vuint8mf8_t maskedoff2, vuint8mf8_t maskedoff3, vuint8mf8_t maskedoff4, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e8ff_v_u8mf8_tum(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, new_vl, vl);
}

void test_vlseg5e8ff_v_u8mf4_tum(vuint8mf4_t *v0, vuint8mf4_t *v1, vuint8mf4_t *v2, vuint8mf4_t *v3, vuint8mf4_t *v4, vbool32_t mask, vuint8mf4_t maskedoff0, vuint8mf4_t maskedoff1, vuint8mf4_t maskedoff2, vuint8mf4_t maskedoff3, vuint8mf4_t maskedoff4, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e8ff_v_u8mf4_tum(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, new_vl, vl);
}

void test_vlseg5e8ff_v_u8mf2_tum(vuint8mf2_t *v0, vuint8mf2_t *v1, vuint8mf2_t *v2, vuint8mf2_t *v3, vuint8mf2_t *v4, vbool16_t mask, vuint8mf2_t maskedoff0, vuint8mf2_t maskedoff1, vuint8mf2_t maskedoff2, vuint8mf2_t maskedoff3, vuint8mf2_t maskedoff4, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e8ff_v_u8mf2_tum(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, new_vl, vl);
}

void test_vlseg5e8ff_v_u8m1_tum(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vbool8_t mask, vuint8m1_t maskedoff0, vuint8m1_t maskedoff1, vuint8m1_t maskedoff2, vuint8m1_t maskedoff3, vuint8m1_t maskedoff4, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e8ff_v_u8m1_tum(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, new_vl, vl);
}

void test_vlseg5e8ff_v_i8mf8_tumu(vint8mf8_t *v0, vint8mf8_t *v1, vint8mf8_t *v2, vint8mf8_t *v3, vint8mf8_t *v4, vbool64_t mask, vint8mf8_t maskedoff0, vint8mf8_t maskedoff1, vint8mf8_t maskedoff2, vint8mf8_t maskedoff3, vint8mf8_t maskedoff4, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e8ff_v_i8mf8_tumu(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, new_vl, vl);
}

void test_vlseg5e8ff_v_i8mf4_tumu(vint8mf4_t *v0, vint8mf4_t *v1, vint8mf4_t *v2, vint8mf4_t *v3, vint8mf4_t *v4, vbool32_t mask, vint8mf4_t maskedoff0, vint8mf4_t maskedoff1, vint8mf4_t maskedoff2, vint8mf4_t maskedoff3, vint8mf4_t maskedoff4, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e8ff_v_i8mf4_tumu(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, new_vl, vl);
}

void test_vlseg5e8ff_v_i8mf2_tumu(vint8mf2_t *v0, vint8mf2_t *v1, vint8mf2_t *v2, vint8mf2_t *v3, vint8mf2_t *v4, vbool16_t mask, vint8mf2_t maskedoff0, vint8mf2_t maskedoff1, vint8mf2_t maskedoff2, vint8mf2_t maskedoff3, vint8mf2_t maskedoff4, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e8ff_v_i8mf2_tumu(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, new_vl, vl);
}

void test_vlseg5e8ff_v_i8m1_tumu(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vbool8_t mask, vint8m1_t maskedoff0, vint8m1_t maskedoff1, vint8m1_t maskedoff2, vint8m1_t maskedoff3, vint8m1_t maskedoff4, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e8ff_v_i8m1_tumu(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, new_vl, vl);
}

void test_vlseg5e8ff_v_u8mf8_tumu(vuint8mf8_t *v0, vuint8mf8_t *v1, vuint8mf8_t *v2, vuint8mf8_t *v3, vuint8mf8_t *v4, vbool64_t mask, vuint8mf8_t maskedoff0, vuint8mf8_t maskedoff1, vuint8mf8_t maskedoff2, vuint8mf8_t maskedoff3, vuint8mf8_t maskedoff4, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e8ff_v_u8mf8_tumu(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, new_vl, vl);
}

void test_vlseg5e8ff_v_u8mf4_tumu(vuint8mf4_t *v0, vuint8mf4_t *v1, vuint8mf4_t *v2, vuint8mf4_t *v3, vuint8mf4_t *v4, vbool32_t mask, vuint8mf4_t maskedoff0, vuint8mf4_t maskedoff1, vuint8mf4_t maskedoff2, vuint8mf4_t maskedoff3, vuint8mf4_t maskedoff4, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e8ff_v_u8mf4_tumu(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, new_vl, vl);
}

void test_vlseg5e8ff_v_u8mf2_tumu(vuint8mf2_t *v0, vuint8mf2_t *v1, vuint8mf2_t *v2, vuint8mf2_t *v3, vuint8mf2_t *v4, vbool16_t mask, vuint8mf2_t maskedoff0, vuint8mf2_t maskedoff1, vuint8mf2_t maskedoff2, vuint8mf2_t maskedoff3, vuint8mf2_t maskedoff4, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e8ff_v_u8mf2_tumu(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, new_vl, vl);
}

void test_vlseg5e8ff_v_u8m1_tumu(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vbool8_t mask, vuint8m1_t maskedoff0, vuint8m1_t maskedoff1, vuint8m1_t maskedoff2, vuint8m1_t maskedoff3, vuint8m1_t maskedoff4, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e8ff_v_u8m1_tumu(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, new_vl, vl);
}

void test_vlseg5e8ff_v_i8mf8_mu(vint8mf8_t *v0, vint8mf8_t *v1, vint8mf8_t *v2, vint8mf8_t *v3, vint8mf8_t *v4, vbool64_t mask, vint8mf8_t maskedoff0, vint8mf8_t maskedoff1, vint8mf8_t maskedoff2, vint8mf8_t maskedoff3, vint8mf8_t maskedoff4, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e8ff_v_i8mf8_mu(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, new_vl, vl);
}

void test_vlseg5e8ff_v_i8mf4_mu(vint8mf4_t *v0, vint8mf4_t *v1, vint8mf4_t *v2, vint8mf4_t *v3, vint8mf4_t *v4, vbool32_t mask, vint8mf4_t maskedoff0, vint8mf4_t maskedoff1, vint8mf4_t maskedoff2, vint8mf4_t maskedoff3, vint8mf4_t maskedoff4, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e8ff_v_i8mf4_mu(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, new_vl, vl);
}

void test_vlseg5e8ff_v_i8mf2_mu(vint8mf2_t *v0, vint8mf2_t *v1, vint8mf2_t *v2, vint8mf2_t *v3, vint8mf2_t *v4, vbool16_t mask, vint8mf2_t maskedoff0, vint8mf2_t maskedoff1, vint8mf2_t maskedoff2, vint8mf2_t maskedoff3, vint8mf2_t maskedoff4, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e8ff_v_i8mf2_mu(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, new_vl, vl);
}

void test_vlseg5e8ff_v_i8m1_mu(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vbool8_t mask, vint8m1_t maskedoff0, vint8m1_t maskedoff1, vint8m1_t maskedoff2, vint8m1_t maskedoff3, vint8m1_t maskedoff4, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e8ff_v_i8m1_mu(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, new_vl, vl);
}

void test_vlseg5e8ff_v_u8mf8_mu(vuint8mf8_t *v0, vuint8mf8_t *v1, vuint8mf8_t *v2, vuint8mf8_t *v3, vuint8mf8_t *v4, vbool64_t mask, vuint8mf8_t maskedoff0, vuint8mf8_t maskedoff1, vuint8mf8_t maskedoff2, vuint8mf8_t maskedoff3, vuint8mf8_t maskedoff4, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e8ff_v_u8mf8_mu(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, new_vl, vl);
}

void test_vlseg5e8ff_v_u8mf4_mu(vuint8mf4_t *v0, vuint8mf4_t *v1, vuint8mf4_t *v2, vuint8mf4_t *v3, vuint8mf4_t *v4, vbool32_t mask, vuint8mf4_t maskedoff0, vuint8mf4_t maskedoff1, vuint8mf4_t maskedoff2, vuint8mf4_t maskedoff3, vuint8mf4_t maskedoff4, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e8ff_v_u8mf4_mu(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, new_vl, vl);
}

void test_vlseg5e8ff_v_u8mf2_mu(vuint8mf2_t *v0, vuint8mf2_t *v1, vuint8mf2_t *v2, vuint8mf2_t *v3, vuint8mf2_t *v4, vbool16_t mask, vuint8mf2_t maskedoff0, vuint8mf2_t maskedoff1, vuint8mf2_t maskedoff2, vuint8mf2_t maskedoff3, vuint8mf2_t maskedoff4, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e8ff_v_u8mf2_mu(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, new_vl, vl);
}

void test_vlseg5e8ff_v_u8m1_mu(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vbool8_t mask, vuint8m1_t maskedoff0, vuint8m1_t maskedoff1, vuint8m1_t maskedoff2, vuint8m1_t maskedoff3, vuint8m1_t maskedoff4, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e8ff_v_u8m1_mu(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, new_vl, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vlseg5e8ff\.[ivxfswum.]+\s+} 32 } } */
