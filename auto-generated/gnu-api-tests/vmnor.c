/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

vbool1_t test_vmnor_mm_b1(vbool1_t op1, vbool1_t op2, size_t vl) {
  return __riscv_vmnor_mm_b1(op1, op2, vl);
}

vbool2_t test_vmnor_mm_b2(vbool2_t op1, vbool2_t op2, size_t vl) {
  return __riscv_vmnor_mm_b2(op1, op2, vl);
}

vbool4_t test_vmnor_mm_b4(vbool4_t op1, vbool4_t op2, size_t vl) {
  return __riscv_vmnor_mm_b4(op1, op2, vl);
}

vbool8_t test_vmnor_mm_b8(vbool8_t op1, vbool8_t op2, size_t vl) {
  return __riscv_vmnor_mm_b8(op1, op2, vl);
}

vbool16_t test_vmnor_mm_b16(vbool16_t op1, vbool16_t op2, size_t vl) {
  return __riscv_vmnor_mm_b16(op1, op2, vl);
}

vbool32_t test_vmnor_mm_b32(vbool32_t op1, vbool32_t op2, size_t vl) {
  return __riscv_vmnor_mm_b32(op1, op2, vl);
}

vbool64_t test_vmnor_mm_b64(vbool64_t op1, vbool64_t op2, size_t vl) {
  return __riscv_vmnor_mm_b64(op1, op2, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*[a-x0-9]+,\s*e[0-9]+,\s*m[f]?[1248],\s*t[au],\s*m[au]\s+vmnor\.[, a-x0-9()]+} 7 } } */
