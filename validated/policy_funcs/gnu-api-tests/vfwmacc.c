/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat64m1_t test_vfwmacc_vv_f64m1_tu(vfloat64m1_t vd, vfloat32mf2_t vs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwmacc_vv_f64m1_tu(vd, vs1, vs2, vl);
}

vfloat64m1_t test_vfwmacc_vf_f64m1_tu(vfloat64m1_t vd, float32_t vs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwmacc_vf_f64m1_tu(vd, vs1, vs2, vl);
}

vfloat64m2_t test_vfwmacc_vv_f64m2_tu(vfloat64m2_t vd, vfloat32m1_t vs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwmacc_vv_f64m2_tu(vd, vs1, vs2, vl);
}

vfloat64m2_t test_vfwmacc_vf_f64m2_tu(vfloat64m2_t vd, float32_t vs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwmacc_vf_f64m2_tu(vd, vs1, vs2, vl);
}

vfloat64m4_t test_vfwmacc_vv_f64m4_tu(vfloat64m4_t vd, vfloat32m2_t vs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwmacc_vv_f64m4_tu(vd, vs1, vs2, vl);
}

vfloat64m4_t test_vfwmacc_vf_f64m4_tu(vfloat64m4_t vd, float32_t vs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwmacc_vf_f64m4_tu(vd, vs1, vs2, vl);
}

vfloat64m8_t test_vfwmacc_vv_f64m8_tu(vfloat64m8_t vd, vfloat32m4_t vs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwmacc_vv_f64m8_tu(vd, vs1, vs2, vl);
}

vfloat64m8_t test_vfwmacc_vf_f64m8_tu(vfloat64m8_t vd, float32_t vs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwmacc_vf_f64m8_tu(vd, vs1, vs2, vl);
}

vfloat64m1_t test_vfwmacc_vv_f64m1_tum(vbool64_t mask, vfloat64m1_t vd, vfloat32mf2_t vs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwmacc_vv_f64m1_tum(mask, vd, vs1, vs2, vl);
}

vfloat64m1_t test_vfwmacc_vf_f64m1_tum(vbool64_t mask, vfloat64m1_t vd, float32_t vs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwmacc_vf_f64m1_tum(mask, vd, vs1, vs2, vl);
}

vfloat64m2_t test_vfwmacc_vv_f64m2_tum(vbool32_t mask, vfloat64m2_t vd, vfloat32m1_t vs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwmacc_vv_f64m2_tum(mask, vd, vs1, vs2, vl);
}

vfloat64m2_t test_vfwmacc_vf_f64m2_tum(vbool32_t mask, vfloat64m2_t vd, float32_t vs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwmacc_vf_f64m2_tum(mask, vd, vs1, vs2, vl);
}

vfloat64m4_t test_vfwmacc_vv_f64m4_tum(vbool16_t mask, vfloat64m4_t vd, vfloat32m2_t vs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwmacc_vv_f64m4_tum(mask, vd, vs1, vs2, vl);
}

vfloat64m4_t test_vfwmacc_vf_f64m4_tum(vbool16_t mask, vfloat64m4_t vd, float32_t vs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwmacc_vf_f64m4_tum(mask, vd, vs1, vs2, vl);
}

vfloat64m8_t test_vfwmacc_vv_f64m8_tum(vbool8_t mask, vfloat64m8_t vd, vfloat32m4_t vs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwmacc_vv_f64m8_tum(mask, vd, vs1, vs2, vl);
}

vfloat64m8_t test_vfwmacc_vf_f64m8_tum(vbool8_t mask, vfloat64m8_t vd, float32_t vs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwmacc_vf_f64m8_tum(mask, vd, vs1, vs2, vl);
}

vfloat64m1_t test_vfwmacc_vv_f64m1_tumu(vbool64_t mask, vfloat64m1_t vd, vfloat32mf2_t vs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwmacc_vv_f64m1_tumu(mask, vd, vs1, vs2, vl);
}

vfloat64m1_t test_vfwmacc_vf_f64m1_tumu(vbool64_t mask, vfloat64m1_t vd, float32_t vs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwmacc_vf_f64m1_tumu(mask, vd, vs1, vs2, vl);
}

vfloat64m2_t test_vfwmacc_vv_f64m2_tumu(vbool32_t mask, vfloat64m2_t vd, vfloat32m1_t vs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwmacc_vv_f64m2_tumu(mask, vd, vs1, vs2, vl);
}

vfloat64m2_t test_vfwmacc_vf_f64m2_tumu(vbool32_t mask, vfloat64m2_t vd, float32_t vs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwmacc_vf_f64m2_tumu(mask, vd, vs1, vs2, vl);
}

vfloat64m4_t test_vfwmacc_vv_f64m4_tumu(vbool16_t mask, vfloat64m4_t vd, vfloat32m2_t vs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwmacc_vv_f64m4_tumu(mask, vd, vs1, vs2, vl);
}

vfloat64m4_t test_vfwmacc_vf_f64m4_tumu(vbool16_t mask, vfloat64m4_t vd, float32_t vs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwmacc_vf_f64m4_tumu(mask, vd, vs1, vs2, vl);
}

vfloat64m8_t test_vfwmacc_vv_f64m8_tumu(vbool8_t mask, vfloat64m8_t vd, vfloat32m4_t vs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwmacc_vv_f64m8_tumu(mask, vd, vs1, vs2, vl);
}

vfloat64m8_t test_vfwmacc_vf_f64m8_tumu(vbool8_t mask, vfloat64m8_t vd, float32_t vs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwmacc_vf_f64m8_tumu(mask, vd, vs1, vs2, vl);
}

vfloat64m1_t test_vfwmacc_vv_f64m1_mu(vbool64_t mask, vfloat64m1_t vd, vfloat32mf2_t vs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwmacc_vv_f64m1_mu(mask, vd, vs1, vs2, vl);
}

vfloat64m1_t test_vfwmacc_vf_f64m1_mu(vbool64_t mask, vfloat64m1_t vd, float32_t vs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwmacc_vf_f64m1_mu(mask, vd, vs1, vs2, vl);
}

vfloat64m2_t test_vfwmacc_vv_f64m2_mu(vbool32_t mask, vfloat64m2_t vd, vfloat32m1_t vs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwmacc_vv_f64m2_mu(mask, vd, vs1, vs2, vl);
}

vfloat64m2_t test_vfwmacc_vf_f64m2_mu(vbool32_t mask, vfloat64m2_t vd, float32_t vs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwmacc_vf_f64m2_mu(mask, vd, vs1, vs2, vl);
}

vfloat64m4_t test_vfwmacc_vv_f64m4_mu(vbool16_t mask, vfloat64m4_t vd, vfloat32m2_t vs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwmacc_vv_f64m4_mu(mask, vd, vs1, vs2, vl);
}

vfloat64m4_t test_vfwmacc_vf_f64m4_mu(vbool16_t mask, vfloat64m4_t vd, float32_t vs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwmacc_vf_f64m4_mu(mask, vd, vs1, vs2, vl);
}

vfloat64m8_t test_vfwmacc_vv_f64m8_mu(vbool8_t mask, vfloat64m8_t vd, vfloat32m4_t vs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwmacc_vv_f64m8_mu(mask, vd, vs1, vs2, vl);
}

vfloat64m8_t test_vfwmacc_vf_f64m8_mu(vbool8_t mask, vfloat64m8_t vd, float32_t vs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwmacc_vf_f64m8_mu(mask, vd, vs1, vs2, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vfwmacc\.[ivxfswum.]+\s+} 32 } } */
