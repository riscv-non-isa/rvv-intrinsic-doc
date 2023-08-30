/* { dg-do compile } */
/* { dg-options "-march=rv32gc_zve64x -mabi=ilp32d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include "riscv_vector.h"

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vsseg2e32_v_i32mf2x2(int32_t *base, vint32mf2x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e32_v_i32mf2x2(base, v_tuple, vl);
}

void test_vsseg2e32_v_i32m1x2(int32_t *base, vint32m1x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e32_v_i32m1x2(base, v_tuple, vl);
}

void test_vsseg2e32_v_i32m2x2(int32_t *base, vint32m2x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e32_v_i32m2x2(base, v_tuple, vl);
}

void test_vsseg2e32_v_i32m4x2(int32_t *base, vint32m4x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e32_v_i32m4x2(base, v_tuple, vl);
}

void test_vsseg2e32_v_u32mf2x2(uint32_t *base, vuint32mf2x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e32_v_u32mf2x2(base, v_tuple, vl);
}

void test_vsseg2e32_v_u32m1x2(uint32_t *base, vuint32m1x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e32_v_u32m1x2(base, v_tuple, vl);
}

void test_vsseg2e32_v_u32m2x2(uint32_t *base, vuint32m2x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e32_v_u32m2x2(base, v_tuple, vl);
}

void test_vsseg2e32_v_u32m4x2(uint32_t *base, vuint32m4x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e32_v_u32m4x2(base, v_tuple, vl);
}

void test_vsseg2e32_v_i32mf2x2_m(vbool64_t mask, int32_t *base, vint32mf2x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e32_v_i32mf2x2_m(mask, base, v_tuple, vl);
}

void test_vsseg2e32_v_i32m1x2_m(vbool32_t mask, int32_t *base, vint32m1x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e32_v_i32m1x2_m(mask, base, v_tuple, vl);
}

void test_vsseg2e32_v_i32m2x2_m(vbool16_t mask, int32_t *base, vint32m2x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e32_v_i32m2x2_m(mask, base, v_tuple, vl);
}

void test_vsseg2e32_v_i32m4x2_m(vbool8_t mask, int32_t *base, vint32m4x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e32_v_i32m4x2_m(mask, base, v_tuple, vl);
}

void test_vsseg2e32_v_u32mf2x2_m(vbool64_t mask, uint32_t *base, vuint32mf2x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e32_v_u32mf2x2_m(mask, base, v_tuple, vl);
}

void test_vsseg2e32_v_u32m1x2_m(vbool32_t mask, uint32_t *base, vuint32m1x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e32_v_u32m1x2_m(mask, base, v_tuple, vl);
}

void test_vsseg2e32_v_u32m2x2_m(vbool16_t mask, uint32_t *base, vuint32m2x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e32_v_u32m2x2_m(mask, base, v_tuple, vl);
}

void test_vsseg2e32_v_u32m4x2_m(vbool8_t mask, uint32_t *base, vuint32m4x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e32_v_u32m4x2_m(mask, base, v_tuple, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vsseg2e32\.[ivxfswum.]+\s+} 16 } } */
