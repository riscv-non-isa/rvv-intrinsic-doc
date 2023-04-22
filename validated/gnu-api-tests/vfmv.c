/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat32mf2_t test_vfmv_v_f_f32mf2(float32_t src, size_t vl) {
  return __riscv_vfmv_v_f_f32mf2(src, vl);
}

vfloat32m1_t test_vfmv_v_f_f32m1(float32_t src, size_t vl) {
  return __riscv_vfmv_v_f_f32m1(src, vl);
}

vfloat32m2_t test_vfmv_v_f_f32m2(float32_t src, size_t vl) {
  return __riscv_vfmv_v_f_f32m2(src, vl);
}

vfloat32m4_t test_vfmv_v_f_f32m4(float32_t src, size_t vl) {
  return __riscv_vfmv_v_f_f32m4(src, vl);
}

vfloat32m8_t test_vfmv_v_f_f32m8(float32_t src, size_t vl) {
  return __riscv_vfmv_v_f_f32m8(src, vl);
}

vfloat64m1_t test_vfmv_v_f_f64m1(float64_t src, size_t vl) {
  return __riscv_vfmv_v_f_f64m1(src, vl);
}

vfloat64m2_t test_vfmv_v_f_f64m2(float64_t src, size_t vl) {
  return __riscv_vfmv_v_f_f64m2(src, vl);
}

vfloat64m4_t test_vfmv_v_f_f64m4(float64_t src, size_t vl) {
  return __riscv_vfmv_v_f_f64m4(src, vl);
}

vfloat64m8_t test_vfmv_v_f_f64m8(float64_t src, size_t vl) {
  return __riscv_vfmv_v_f_f64m8(src, vl);
}

float32_t test_vfmv_f_s_f32mf2_f32(vfloat32mf2_t src) {
  return __riscv_vfmv_f_s_f32mf2_f32(src);
}

vfloat32mf2_t test_vfmv_s_f_f32mf2(float32_t src, size_t vl) {
  return __riscv_vfmv_s_f_f32mf2(src, vl);
}

float32_t test_vfmv_f_s_f32m1_f32(vfloat32m1_t src) {
  return __riscv_vfmv_f_s_f32m1_f32(src);
}

vfloat32m1_t test_vfmv_s_f_f32m1(float32_t src, size_t vl) {
  return __riscv_vfmv_s_f_f32m1(src, vl);
}

float32_t test_vfmv_f_s_f32m2_f32(vfloat32m2_t src) {
  return __riscv_vfmv_f_s_f32m2_f32(src);
}

vfloat32m2_t test_vfmv_s_f_f32m2(float32_t src, size_t vl) {
  return __riscv_vfmv_s_f_f32m2(src, vl);
}

float32_t test_vfmv_f_s_f32m4_f32(vfloat32m4_t src) {
  return __riscv_vfmv_f_s_f32m4_f32(src);
}

vfloat32m4_t test_vfmv_s_f_f32m4(float32_t src, size_t vl) {
  return __riscv_vfmv_s_f_f32m4(src, vl);
}

float32_t test_vfmv_f_s_f32m8_f32(vfloat32m8_t src) {
  return __riscv_vfmv_f_s_f32m8_f32(src);
}

vfloat32m8_t test_vfmv_s_f_f32m8(float32_t src, size_t vl) {
  return __riscv_vfmv_s_f_f32m8(src, vl);
}

float64_t test_vfmv_f_s_f64m1_f64(vfloat64m1_t src) {
  return __riscv_vfmv_f_s_f64m1_f64(src);
}

vfloat64m1_t test_vfmv_s_f_f64m1(float64_t src, size_t vl) {
  return __riscv_vfmv_s_f_f64m1(src, vl);
}

float64_t test_vfmv_f_s_f64m2_f64(vfloat64m2_t src) {
  return __riscv_vfmv_f_s_f64m2_f64(src);
}

vfloat64m2_t test_vfmv_s_f_f64m2(float64_t src, size_t vl) {
  return __riscv_vfmv_s_f_f64m2(src, vl);
}

float64_t test_vfmv_f_s_f64m4_f64(vfloat64m4_t src) {
  return __riscv_vfmv_f_s_f64m4_f64(src);
}

vfloat64m4_t test_vfmv_s_f_f64m4(float64_t src, size_t vl) {
  return __riscv_vfmv_s_f_f64m4(src, vl);
}

float64_t test_vfmv_f_s_f64m8_f64(vfloat64m8_t src) {
  return __riscv_vfmv_f_s_f64m8_f64(src);
}

vfloat64m8_t test_vfmv_s_f_f64m8(float64_t src, size_t vl) {
  return __riscv_vfmv_s_f_f64m8(src, vl);
}

/* { dg-final { scan-assembler-times {vfmv\.[ivxfswum.]+\s+[,\sa-x0-9()]+} 27 } } */
