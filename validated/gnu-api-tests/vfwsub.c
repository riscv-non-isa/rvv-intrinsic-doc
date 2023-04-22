/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat64m1_t test_vfwsub_vv_f64m1(vfloat32mf2_t op1, vfloat32mf2_t op2, size_t vl) {
  return __riscv_vfwsub_vv_f64m1(op1, op2, vl);
}

vfloat64m1_t test_vfwsub_vf_f64m1(vfloat32mf2_t op1, float32_t op2, size_t vl) {
  return __riscv_vfwsub_vf_f64m1(op1, op2, vl);
}

vfloat64m1_t test_vfwsub_wv_f64m1(vfloat64m1_t op1, vfloat32mf2_t op2, size_t vl) {
  return __riscv_vfwsub_wv_f64m1(op1, op2, vl);
}

vfloat64m1_t test_vfwsub_wf_f64m1(vfloat64m1_t op1, float32_t op2, size_t vl) {
  return __riscv_vfwsub_wf_f64m1(op1, op2, vl);
}

vfloat64m2_t test_vfwsub_vv_f64m2(vfloat32m1_t op1, vfloat32m1_t op2, size_t vl) {
  return __riscv_vfwsub_vv_f64m2(op1, op2, vl);
}

vfloat64m2_t test_vfwsub_vf_f64m2(vfloat32m1_t op1, float32_t op2, size_t vl) {
  return __riscv_vfwsub_vf_f64m2(op1, op2, vl);
}

vfloat64m2_t test_vfwsub_wv_f64m2(vfloat64m2_t op1, vfloat32m1_t op2, size_t vl) {
  return __riscv_vfwsub_wv_f64m2(op1, op2, vl);
}

vfloat64m2_t test_vfwsub_wf_f64m2(vfloat64m2_t op1, float32_t op2, size_t vl) {
  return __riscv_vfwsub_wf_f64m2(op1, op2, vl);
}

vfloat64m4_t test_vfwsub_vv_f64m4(vfloat32m2_t op1, vfloat32m2_t op2, size_t vl) {
  return __riscv_vfwsub_vv_f64m4(op1, op2, vl);
}

vfloat64m4_t test_vfwsub_vf_f64m4(vfloat32m2_t op1, float32_t op2, size_t vl) {
  return __riscv_vfwsub_vf_f64m4(op1, op2, vl);
}

vfloat64m4_t test_vfwsub_wv_f64m4(vfloat64m4_t op1, vfloat32m2_t op2, size_t vl) {
  return __riscv_vfwsub_wv_f64m4(op1, op2, vl);
}

vfloat64m4_t test_vfwsub_wf_f64m4(vfloat64m4_t op1, float32_t op2, size_t vl) {
  return __riscv_vfwsub_wf_f64m4(op1, op2, vl);
}

vfloat64m8_t test_vfwsub_vv_f64m8(vfloat32m4_t op1, vfloat32m4_t op2, size_t vl) {
  return __riscv_vfwsub_vv_f64m8(op1, op2, vl);
}

vfloat64m8_t test_vfwsub_vf_f64m8(vfloat32m4_t op1, float32_t op2, size_t vl) {
  return __riscv_vfwsub_vf_f64m8(op1, op2, vl);
}

vfloat64m8_t test_vfwsub_wv_f64m8(vfloat64m8_t op1, vfloat32m4_t op2, size_t vl) {
  return __riscv_vfwsub_wv_f64m8(op1, op2, vl);
}

vfloat64m8_t test_vfwsub_wf_f64m8(vfloat64m8_t op1, float32_t op2, size_t vl) {
  return __riscv_vfwsub_wf_f64m8(op1, op2, vl);
}

vfloat64m1_t test_vfwsub_vv_f64m1_m(vbool64_t mask, vfloat32mf2_t op1, vfloat32mf2_t op2, size_t vl) {
  return __riscv_vfwsub_vv_f64m1_m(mask, op1, op2, vl);
}

vfloat64m1_t test_vfwsub_vf_f64m1_m(vbool64_t mask, vfloat32mf2_t op1, float32_t op2, size_t vl) {
  return __riscv_vfwsub_vf_f64m1_m(mask, op1, op2, vl);
}

vfloat64m1_t test_vfwsub_wv_f64m1_m(vbool64_t mask, vfloat64m1_t op1, vfloat32mf2_t op2, size_t vl) {
  return __riscv_vfwsub_wv_f64m1_m(mask, op1, op2, vl);
}

vfloat64m1_t test_vfwsub_wf_f64m1_m(vbool64_t mask, vfloat64m1_t op1, float32_t op2, size_t vl) {
  return __riscv_vfwsub_wf_f64m1_m(mask, op1, op2, vl);
}

vfloat64m2_t test_vfwsub_vv_f64m2_m(vbool32_t mask, vfloat32m1_t op1, vfloat32m1_t op2, size_t vl) {
  return __riscv_vfwsub_vv_f64m2_m(mask, op1, op2, vl);
}

vfloat64m2_t test_vfwsub_vf_f64m2_m(vbool32_t mask, vfloat32m1_t op1, float32_t op2, size_t vl) {
  return __riscv_vfwsub_vf_f64m2_m(mask, op1, op2, vl);
}

vfloat64m2_t test_vfwsub_wv_f64m2_m(vbool32_t mask, vfloat64m2_t op1, vfloat32m1_t op2, size_t vl) {
  return __riscv_vfwsub_wv_f64m2_m(mask, op1, op2, vl);
}

vfloat64m2_t test_vfwsub_wf_f64m2_m(vbool32_t mask, vfloat64m2_t op1, float32_t op2, size_t vl) {
  return __riscv_vfwsub_wf_f64m2_m(mask, op1, op2, vl);
}

vfloat64m4_t test_vfwsub_vv_f64m4_m(vbool16_t mask, vfloat32m2_t op1, vfloat32m2_t op2, size_t vl) {
  return __riscv_vfwsub_vv_f64m4_m(mask, op1, op2, vl);
}

vfloat64m4_t test_vfwsub_vf_f64m4_m(vbool16_t mask, vfloat32m2_t op1, float32_t op2, size_t vl) {
  return __riscv_vfwsub_vf_f64m4_m(mask, op1, op2, vl);
}

vfloat64m4_t test_vfwsub_wv_f64m4_m(vbool16_t mask, vfloat64m4_t op1, vfloat32m2_t op2, size_t vl) {
  return __riscv_vfwsub_wv_f64m4_m(mask, op1, op2, vl);
}

vfloat64m4_t test_vfwsub_wf_f64m4_m(vbool16_t mask, vfloat64m4_t op1, float32_t op2, size_t vl) {
  return __riscv_vfwsub_wf_f64m4_m(mask, op1, op2, vl);
}

vfloat64m8_t test_vfwsub_vv_f64m8_m(vbool8_t mask, vfloat32m4_t op1, vfloat32m4_t op2, size_t vl) {
  return __riscv_vfwsub_vv_f64m8_m(mask, op1, op2, vl);
}

vfloat64m8_t test_vfwsub_vf_f64m8_m(vbool8_t mask, vfloat32m4_t op1, float32_t op2, size_t vl) {
  return __riscv_vfwsub_vf_f64m8_m(mask, op1, op2, vl);
}

vfloat64m8_t test_vfwsub_wv_f64m8_m(vbool8_t mask, vfloat64m8_t op1, vfloat32m4_t op2, size_t vl) {
  return __riscv_vfwsub_wv_f64m8_m(mask, op1, op2, vl);
}

vfloat64m8_t test_vfwsub_wf_f64m8_m(vbool8_t mask, vfloat64m8_t op1, float32_t op2, size_t vl) {
  return __riscv_vfwsub_wf_f64m8_m(mask, op1, op2, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vfwsub\.[ivxfswum.]+\s+} 32 } } */
