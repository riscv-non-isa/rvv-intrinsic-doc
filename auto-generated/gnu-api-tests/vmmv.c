/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

vbool1_t test_vmmv_m_b1(vbool1_t vs, size_t vl) {
  return __riscv_vmmv_m_b1(vs, vl);
}

vbool2_t test_vmmv_m_b2(vbool2_t vs, size_t vl) {
  return __riscv_vmmv_m_b2(vs, vl);
}

vbool4_t test_vmmv_m_b4(vbool4_t vs, size_t vl) {
  return __riscv_vmmv_m_b4(vs, vl);
}

vbool8_t test_vmmv_m_b8(vbool8_t vs, size_t vl) {
  return __riscv_vmmv_m_b8(vs, vl);
}

vbool16_t test_vmmv_m_b16(vbool16_t vs, size_t vl) {
  return __riscv_vmmv_m_b16(vs, vl);
}

vbool32_t test_vmmv_m_b32(vbool32_t vs, size_t vl) {
  return __riscv_vmmv_m_b32(vs, vl);
}

vbool64_t test_vmmv_m_b64(vbool64_t vs, size_t vl) {
  return __riscv_vmmv_m_b64(vs, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vmmv\.[ivxfswum.]+\s+} 7 } } */
