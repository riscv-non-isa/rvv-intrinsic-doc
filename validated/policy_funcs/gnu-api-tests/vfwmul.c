/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat64m1_t test_vfwmul_vv_f64m1_tu(vfloat64m1_t maskedoff, vfloat32mf2_t op1, vfloat32mf2_t op2, size_t vl) {
  return __riscv_vfwmul_vv_f64m1_tu(maskedoff, op1, op2, vl);
}

vfloat64m1_t test_vfwmul_vf_f64m1_tu(vfloat64m1_t maskedoff, vfloat32mf2_t op1, float32_t op2, size_t vl) {
  return __riscv_vfwmul_vf_f64m1_tu(maskedoff, op1, op2, vl);
}

vfloat64m2_t test_vfwmul_vv_f64m2_tu(vfloat64m2_t maskedoff, vfloat32m1_t op1, vfloat32m1_t op2, size_t vl) {
  return __riscv_vfwmul_vv_f64m2_tu(maskedoff, op1, op2, vl);
}

vfloat64m2_t test_vfwmul_vf_f64m2_tu(vfloat64m2_t maskedoff, vfloat32m1_t op1, float32_t op2, size_t vl) {
  return __riscv_vfwmul_vf_f64m2_tu(maskedoff, op1, op2, vl);
}

vfloat64m4_t test_vfwmul_vv_f64m4_tu(vfloat64m4_t maskedoff, vfloat32m2_t op1, vfloat32m2_t op2, size_t vl) {
  return __riscv_vfwmul_vv_f64m4_tu(maskedoff, op1, op2, vl);
}

vfloat64m4_t test_vfwmul_vf_f64m4_tu(vfloat64m4_t maskedoff, vfloat32m2_t op1, float32_t op2, size_t vl) {
  return __riscv_vfwmul_vf_f64m4_tu(maskedoff, op1, op2, vl);
}

vfloat64m8_t test_vfwmul_vv_f64m8_tu(vfloat64m8_t maskedoff, vfloat32m4_t op1, vfloat32m4_t op2, size_t vl) {
  return __riscv_vfwmul_vv_f64m8_tu(maskedoff, op1, op2, vl);
}

vfloat64m8_t test_vfwmul_vf_f64m8_tu(vfloat64m8_t maskedoff, vfloat32m4_t op1, float32_t op2, size_t vl) {
  return __riscv_vfwmul_vf_f64m8_tu(maskedoff, op1, op2, vl);
}

vfloat64m1_t test_vfwmul_vv_f64m1_tum(vbool64_t mask, vfloat64m1_t maskedoff, vfloat32mf2_t op1, vfloat32mf2_t op2, size_t vl) {
  return __riscv_vfwmul_vv_f64m1_tum(mask, maskedoff, op1, op2, vl);
}

vfloat64m1_t test_vfwmul_vf_f64m1_tum(vbool64_t mask, vfloat64m1_t maskedoff, vfloat32mf2_t op1, float32_t op2, size_t vl) {
  return __riscv_vfwmul_vf_f64m1_tum(mask, maskedoff, op1, op2, vl);
}

vfloat64m2_t test_vfwmul_vv_f64m2_tum(vbool32_t mask, vfloat64m2_t maskedoff, vfloat32m1_t op1, vfloat32m1_t op2, size_t vl) {
  return __riscv_vfwmul_vv_f64m2_tum(mask, maskedoff, op1, op2, vl);
}

vfloat64m2_t test_vfwmul_vf_f64m2_tum(vbool32_t mask, vfloat64m2_t maskedoff, vfloat32m1_t op1, float32_t op2, size_t vl) {
  return __riscv_vfwmul_vf_f64m2_tum(mask, maskedoff, op1, op2, vl);
}

vfloat64m4_t test_vfwmul_vv_f64m4_tum(vbool16_t mask, vfloat64m4_t maskedoff, vfloat32m2_t op1, vfloat32m2_t op2, size_t vl) {
  return __riscv_vfwmul_vv_f64m4_tum(mask, maskedoff, op1, op2, vl);
}

vfloat64m4_t test_vfwmul_vf_f64m4_tum(vbool16_t mask, vfloat64m4_t maskedoff, vfloat32m2_t op1, float32_t op2, size_t vl) {
  return __riscv_vfwmul_vf_f64m4_tum(mask, maskedoff, op1, op2, vl);
}

vfloat64m8_t test_vfwmul_vv_f64m8_tum(vbool8_t mask, vfloat64m8_t maskedoff, vfloat32m4_t op1, vfloat32m4_t op2, size_t vl) {
  return __riscv_vfwmul_vv_f64m8_tum(mask, maskedoff, op1, op2, vl);
}

vfloat64m8_t test_vfwmul_vf_f64m8_tum(vbool8_t mask, vfloat64m8_t maskedoff, vfloat32m4_t op1, float32_t op2, size_t vl) {
  return __riscv_vfwmul_vf_f64m8_tum(mask, maskedoff, op1, op2, vl);
}

vfloat64m1_t test_vfwmul_vv_f64m1_tumu(vbool64_t mask, vfloat64m1_t maskedoff, vfloat32mf2_t op1, vfloat32mf2_t op2, size_t vl) {
  return __riscv_vfwmul_vv_f64m1_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat64m1_t test_vfwmul_vf_f64m1_tumu(vbool64_t mask, vfloat64m1_t maskedoff, vfloat32mf2_t op1, float32_t op2, size_t vl) {
  return __riscv_vfwmul_vf_f64m1_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat64m2_t test_vfwmul_vv_f64m2_tumu(vbool32_t mask, vfloat64m2_t maskedoff, vfloat32m1_t op1, vfloat32m1_t op2, size_t vl) {
  return __riscv_vfwmul_vv_f64m2_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat64m2_t test_vfwmul_vf_f64m2_tumu(vbool32_t mask, vfloat64m2_t maskedoff, vfloat32m1_t op1, float32_t op2, size_t vl) {
  return __riscv_vfwmul_vf_f64m2_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat64m4_t test_vfwmul_vv_f64m4_tumu(vbool16_t mask, vfloat64m4_t maskedoff, vfloat32m2_t op1, vfloat32m2_t op2, size_t vl) {
  return __riscv_vfwmul_vv_f64m4_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat64m4_t test_vfwmul_vf_f64m4_tumu(vbool16_t mask, vfloat64m4_t maskedoff, vfloat32m2_t op1, float32_t op2, size_t vl) {
  return __riscv_vfwmul_vf_f64m4_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat64m8_t test_vfwmul_vv_f64m8_tumu(vbool8_t mask, vfloat64m8_t maskedoff, vfloat32m4_t op1, vfloat32m4_t op2, size_t vl) {
  return __riscv_vfwmul_vv_f64m8_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat64m8_t test_vfwmul_vf_f64m8_tumu(vbool8_t mask, vfloat64m8_t maskedoff, vfloat32m4_t op1, float32_t op2, size_t vl) {
  return __riscv_vfwmul_vf_f64m8_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat64m1_t test_vfwmul_vv_f64m1_mu(vbool64_t mask, vfloat64m1_t maskedoff, vfloat32mf2_t op1, vfloat32mf2_t op2, size_t vl) {
  return __riscv_vfwmul_vv_f64m1_mu(mask, maskedoff, op1, op2, vl);
}

vfloat64m1_t test_vfwmul_vf_f64m1_mu(vbool64_t mask, vfloat64m1_t maskedoff, vfloat32mf2_t op1, float32_t op2, size_t vl) {
  return __riscv_vfwmul_vf_f64m1_mu(mask, maskedoff, op1, op2, vl);
}

vfloat64m2_t test_vfwmul_vv_f64m2_mu(vbool32_t mask, vfloat64m2_t maskedoff, vfloat32m1_t op1, vfloat32m1_t op2, size_t vl) {
  return __riscv_vfwmul_vv_f64m2_mu(mask, maskedoff, op1, op2, vl);
}

vfloat64m2_t test_vfwmul_vf_f64m2_mu(vbool32_t mask, vfloat64m2_t maskedoff, vfloat32m1_t op1, float32_t op2, size_t vl) {
  return __riscv_vfwmul_vf_f64m2_mu(mask, maskedoff, op1, op2, vl);
}

vfloat64m4_t test_vfwmul_vv_f64m4_mu(vbool16_t mask, vfloat64m4_t maskedoff, vfloat32m2_t op1, vfloat32m2_t op2, size_t vl) {
  return __riscv_vfwmul_vv_f64m4_mu(mask, maskedoff, op1, op2, vl);
}

vfloat64m4_t test_vfwmul_vf_f64m4_mu(vbool16_t mask, vfloat64m4_t maskedoff, vfloat32m2_t op1, float32_t op2, size_t vl) {
  return __riscv_vfwmul_vf_f64m4_mu(mask, maskedoff, op1, op2, vl);
}

vfloat64m8_t test_vfwmul_vv_f64m8_mu(vbool8_t mask, vfloat64m8_t maskedoff, vfloat32m4_t op1, vfloat32m4_t op2, size_t vl) {
  return __riscv_vfwmul_vv_f64m8_mu(mask, maskedoff, op1, op2, vl);
}

vfloat64m8_t test_vfwmul_vf_f64m8_mu(vbool8_t mask, vfloat64m8_t maskedoff, vfloat32m4_t op1, float32_t op2, size_t vl) {
  return __riscv_vfwmul_vf_f64m8_mu(mask, maskedoff, op1, op2, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vfwmul\.[ivxfswum.]+\s+} 32 } } */
