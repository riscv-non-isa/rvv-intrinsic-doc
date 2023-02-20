/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

vbool1_t test_vmclr_m_b1(size_t vl) {
  return __riscv_vmclr_m_b1(vl);
}

vbool2_t test_vmclr_m_b2(size_t vl) {
  return __riscv_vmclr_m_b2(vl);
}

vbool4_t test_vmclr_m_b4(size_t vl) {
  return __riscv_vmclr_m_b4(vl);
}

vbool8_t test_vmclr_m_b8(size_t vl) {
  return __riscv_vmclr_m_b8(vl);
}

vbool16_t test_vmclr_m_b16(size_t vl) {
  return __riscv_vmclr_m_b16(vl);
}

vbool32_t test_vmclr_m_b32(size_t vl) {
  return __riscv_vmclr_m_b32(vl);
}

vbool64_t test_vmclr_m_b64(size_t vl) {
  return __riscv_vmclr_m_b64(vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*[a-x0-9]+,\s*e[0-9]+,\s*m[f]?[1248],\s*t[au],\s*m[au]\s+vmclr\.[, a-x0-9()]+} 7 } } */
