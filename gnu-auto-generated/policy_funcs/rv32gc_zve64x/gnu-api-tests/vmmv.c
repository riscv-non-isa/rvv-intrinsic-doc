/* { dg-do compile } */
/* { dg-options "-march=rv32gc_zve64x -mabi=ilp32d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include "riscv_vector.h"

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vbool1_t test_vmmv_m_b1(vbool1_t op1, size_t vl) {
  return __riscv_vmmv_m_b1(op1, vl);
}

vbool2_t test_vmmv_m_b2(vbool2_t op1, size_t vl) {
  return __riscv_vmmv_m_b2(op1, vl);
}

vbool4_t test_vmmv_m_b4(vbool4_t op1, size_t vl) {
  return __riscv_vmmv_m_b4(op1, vl);
}

vbool8_t test_vmmv_m_b8(vbool8_t op1, size_t vl) {
  return __riscv_vmmv_m_b8(op1, vl);
}

vbool16_t test_vmmv_m_b16(vbool16_t op1, size_t vl) {
  return __riscv_vmmv_m_b16(op1, vl);
}

vbool32_t test_vmmv_m_b32(vbool32_t op1, size_t vl) {
  return __riscv_vmmv_m_b32(op1, vl);
}

vbool64_t test_vmmv_m_b64(vbool64_t op1, size_t vl) {
  return __riscv_vmmv_m_b64(op1, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vmmv\.[ivxfswum.]+\s+} 7 } } */
