/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

void test_vsm_v_b1(uint8_t *rs1, vbool1_t vs3, size_t vl) {
  return __riscv_vsm(rs1, vs3, vl);
}

void test_vsm_v_b2(uint8_t *rs1, vbool2_t vs3, size_t vl) {
  return __riscv_vsm(rs1, vs3, vl);
}

void test_vsm_v_b4(uint8_t *rs1, vbool4_t vs3, size_t vl) {
  return __riscv_vsm(rs1, vs3, vl);
}

void test_vsm_v_b8(uint8_t *rs1, vbool8_t vs3, size_t vl) {
  return __riscv_vsm(rs1, vs3, vl);
}

void test_vsm_v_b16(uint8_t *rs1, vbool16_t vs3, size_t vl) {
  return __riscv_vsm(rs1, vs3, vl);
}

void test_vsm_v_b32(uint8_t *rs1, vbool32_t vs3, size_t vl) {
  return __riscv_vsm(rs1, vs3, vl);
}

void test_vsm_v_b64(uint8_t *rs1, vbool64_t vs3, size_t vl) {
  return __riscv_vsm(rs1, vs3, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vsm\.[ivxfswum.]+\s+} 7 } } */
