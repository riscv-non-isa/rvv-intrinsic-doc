/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vbool1_t test_vmsbf_m_b1_mu(vbool1_t mask, vbool1_t maskedoff, vbool1_t op1, size_t vl) {
  return __riscv_vmsbf_m_b1_mu(mask, maskedoff, op1, vl);
}

vbool2_t test_vmsbf_m_b2_mu(vbool2_t mask, vbool2_t maskedoff, vbool2_t op1, size_t vl) {
  return __riscv_vmsbf_m_b2_mu(mask, maskedoff, op1, vl);
}

vbool4_t test_vmsbf_m_b4_mu(vbool4_t mask, vbool4_t maskedoff, vbool4_t op1, size_t vl) {
  return __riscv_vmsbf_m_b4_mu(mask, maskedoff, op1, vl);
}

vbool8_t test_vmsbf_m_b8_mu(vbool8_t mask, vbool8_t maskedoff, vbool8_t op1, size_t vl) {
  return __riscv_vmsbf_m_b8_mu(mask, maskedoff, op1, vl);
}

vbool16_t test_vmsbf_m_b16_mu(vbool16_t mask, vbool16_t maskedoff, vbool16_t op1, size_t vl) {
  return __riscv_vmsbf_m_b16_mu(mask, maskedoff, op1, vl);
}

vbool32_t test_vmsbf_m_b32_mu(vbool32_t mask, vbool32_t maskedoff, vbool32_t op1, size_t vl) {
  return __riscv_vmsbf_m_b32_mu(mask, maskedoff, op1, vl);
}

vbool64_t test_vmsbf_m_b64_mu(vbool64_t mask, vbool64_t maskedoff, vbool64_t op1, size_t vl) {
  return __riscv_vmsbf_m_b64_mu(mask, maskedoff, op1, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*[a-x0-9]+,\s*e[0-9]+,\s*m[f]?[1248],\s*t[au],\s*m[au]\s+vmsbf\.[,\sa-x0-9()]+} 7 } } */
