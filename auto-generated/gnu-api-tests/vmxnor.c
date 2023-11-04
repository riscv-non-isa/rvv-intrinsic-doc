/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

vbool1_t test_vmxnor_mm_b1(vbool1_t vs2, vbool1_t vs1, size_t vl) {
  return __riscv_vmxnor_mm_b1(vs2, vs1, vl);
}

vbool2_t test_vmxnor_mm_b2(vbool2_t vs2, vbool2_t vs1, size_t vl) {
  return __riscv_vmxnor_mm_b2(vs2, vs1, vl);
}

vbool4_t test_vmxnor_mm_b4(vbool4_t vs2, vbool4_t vs1, size_t vl) {
  return __riscv_vmxnor_mm_b4(vs2, vs1, vl);
}

vbool8_t test_vmxnor_mm_b8(vbool8_t vs2, vbool8_t vs1, size_t vl) {
  return __riscv_vmxnor_mm_b8(vs2, vs1, vl);
}

vbool16_t test_vmxnor_mm_b16(vbool16_t vs2, vbool16_t vs1, size_t vl) {
  return __riscv_vmxnor_mm_b16(vs2, vs1, vl);
}

vbool32_t test_vmxnor_mm_b32(vbool32_t vs2, vbool32_t vs1, size_t vl) {
  return __riscv_vmxnor_mm_b32(vs2, vs1, vl);
}

vbool64_t test_vmxnor_mm_b64(vbool64_t vs2, vbool64_t vs1, size_t vl) {
  return __riscv_vmxnor_mm_b64(vs2, vs1, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vmxnor\.[ivxfswum.]+\s+} 7 } } */
