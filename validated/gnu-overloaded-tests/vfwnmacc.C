/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat64m1_t test_vfwnmacc_vv_f64m1(vfloat64m1_t vd, vfloat32mf2_t vs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwnmacc(vd, vs1, vs2, vl);
}

vfloat64m1_t test_vfwnmacc_vf_f64m1(vfloat64m1_t vd, float32_t vs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwnmacc(vd, vs1, vs2, vl);
}

vfloat64m2_t test_vfwnmacc_vv_f64m2(vfloat64m2_t vd, vfloat32m1_t vs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwnmacc(vd, vs1, vs2, vl);
}

vfloat64m2_t test_vfwnmacc_vf_f64m2(vfloat64m2_t vd, float32_t vs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwnmacc(vd, vs1, vs2, vl);
}

vfloat64m4_t test_vfwnmacc_vv_f64m4(vfloat64m4_t vd, vfloat32m2_t vs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwnmacc(vd, vs1, vs2, vl);
}

vfloat64m4_t test_vfwnmacc_vf_f64m4(vfloat64m4_t vd, float32_t vs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwnmacc(vd, vs1, vs2, vl);
}

vfloat64m8_t test_vfwnmacc_vv_f64m8(vfloat64m8_t vd, vfloat32m4_t vs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwnmacc(vd, vs1, vs2, vl);
}

vfloat64m8_t test_vfwnmacc_vf_f64m8(vfloat64m8_t vd, float32_t vs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwnmacc(vd, vs1, vs2, vl);
}

vfloat64m1_t test_vfwnmacc_vv_f64m1_m(vbool64_t mask, vfloat64m1_t vd, vfloat32mf2_t vs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwnmacc(mask, vd, vs1, vs2, vl);
}

vfloat64m1_t test_vfwnmacc_vf_f64m1_m(vbool64_t mask, vfloat64m1_t vd, float32_t vs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwnmacc(mask, vd, vs1, vs2, vl);
}

vfloat64m2_t test_vfwnmacc_vv_f64m2_m(vbool32_t mask, vfloat64m2_t vd, vfloat32m1_t vs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwnmacc(mask, vd, vs1, vs2, vl);
}

vfloat64m2_t test_vfwnmacc_vf_f64m2_m(vbool32_t mask, vfloat64m2_t vd, float32_t vs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwnmacc(mask, vd, vs1, vs2, vl);
}

vfloat64m4_t test_vfwnmacc_vv_f64m4_m(vbool16_t mask, vfloat64m4_t vd, vfloat32m2_t vs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwnmacc(mask, vd, vs1, vs2, vl);
}

vfloat64m4_t test_vfwnmacc_vf_f64m4_m(vbool16_t mask, vfloat64m4_t vd, float32_t vs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwnmacc(mask, vd, vs1, vs2, vl);
}

vfloat64m8_t test_vfwnmacc_vv_f64m8_m(vbool8_t mask, vfloat64m8_t vd, vfloat32m4_t vs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwnmacc(mask, vd, vs1, vs2, vl);
}

vfloat64m8_t test_vfwnmacc_vf_f64m8_m(vbool8_t mask, vfloat64m8_t vd, float32_t vs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwnmacc(mask, vd, vs1, vs2, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vfwnmacc\.[ivxfswum.]+\s+} 16 } } */
