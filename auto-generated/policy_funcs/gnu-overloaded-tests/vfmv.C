/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat16mf4_t test_vfmv_v_f_f16mf4_tu(vfloat16mf4_t maskedoff, float16_t src, size_t vl) {
  return __riscv_vfmv_v_tu(maskedoff, src, vl);
}

vfloat16mf2_t test_vfmv_v_f_f16mf2_tu(vfloat16mf2_t maskedoff, float16_t src, size_t vl) {
  return __riscv_vfmv_v_tu(maskedoff, src, vl);
}

vfloat16m1_t test_vfmv_v_f_f16m1_tu(vfloat16m1_t maskedoff, float16_t src, size_t vl) {
  return __riscv_vfmv_v_tu(maskedoff, src, vl);
}

vfloat16m2_t test_vfmv_v_f_f16m2_tu(vfloat16m2_t maskedoff, float16_t src, size_t vl) {
  return __riscv_vfmv_v_tu(maskedoff, src, vl);
}

vfloat16m4_t test_vfmv_v_f_f16m4_tu(vfloat16m4_t maskedoff, float16_t src, size_t vl) {
  return __riscv_vfmv_v_tu(maskedoff, src, vl);
}

vfloat16m8_t test_vfmv_v_f_f16m8_tu(vfloat16m8_t maskedoff, float16_t src, size_t vl) {
  return __riscv_vfmv_v_tu(maskedoff, src, vl);
}

vfloat32mf2_t test_vfmv_v_f_f32mf2_tu(vfloat32mf2_t maskedoff, float32_t src, size_t vl) {
  return __riscv_vfmv_v_tu(maskedoff, src, vl);
}

vfloat32m1_t test_vfmv_v_f_f32m1_tu(vfloat32m1_t maskedoff, float32_t src, size_t vl) {
  return __riscv_vfmv_v_tu(maskedoff, src, vl);
}

vfloat32m2_t test_vfmv_v_f_f32m2_tu(vfloat32m2_t maskedoff, float32_t src, size_t vl) {
  return __riscv_vfmv_v_tu(maskedoff, src, vl);
}

vfloat32m4_t test_vfmv_v_f_f32m4_tu(vfloat32m4_t maskedoff, float32_t src, size_t vl) {
  return __riscv_vfmv_v_tu(maskedoff, src, vl);
}

vfloat32m8_t test_vfmv_v_f_f32m8_tu(vfloat32m8_t maskedoff, float32_t src, size_t vl) {
  return __riscv_vfmv_v_tu(maskedoff, src, vl);
}

vfloat64m1_t test_vfmv_v_f_f64m1_tu(vfloat64m1_t maskedoff, float64_t src, size_t vl) {
  return __riscv_vfmv_v_tu(maskedoff, src, vl);
}

vfloat64m2_t test_vfmv_v_f_f64m2_tu(vfloat64m2_t maskedoff, float64_t src, size_t vl) {
  return __riscv_vfmv_v_tu(maskedoff, src, vl);
}

vfloat64m4_t test_vfmv_v_f_f64m4_tu(vfloat64m4_t maskedoff, float64_t src, size_t vl) {
  return __riscv_vfmv_v_tu(maskedoff, src, vl);
}

vfloat64m8_t test_vfmv_v_f_f64m8_tu(vfloat64m8_t maskedoff, float64_t src, size_t vl) {
  return __riscv_vfmv_v_tu(maskedoff, src, vl);
}

vfloat16mf4_t test_vfmv_s_f_f16mf4_tu(vfloat16mf4_t maskedoff, float16_t src, size_t vl) {
  return __riscv_vfmv_s_tu(maskedoff, src, vl);
}

vfloat16mf2_t test_vfmv_s_f_f16mf2_tu(vfloat16mf2_t maskedoff, float16_t src, size_t vl) {
  return __riscv_vfmv_s_tu(maskedoff, src, vl);
}

vfloat16m1_t test_vfmv_s_f_f16m1_tu(vfloat16m1_t maskedoff, float16_t src, size_t vl) {
  return __riscv_vfmv_s_tu(maskedoff, src, vl);
}

vfloat16m2_t test_vfmv_s_f_f16m2_tu(vfloat16m2_t maskedoff, float16_t src, size_t vl) {
  return __riscv_vfmv_s_tu(maskedoff, src, vl);
}

vfloat16m4_t test_vfmv_s_f_f16m4_tu(vfloat16m4_t maskedoff, float16_t src, size_t vl) {
  return __riscv_vfmv_s_tu(maskedoff, src, vl);
}

vfloat16m8_t test_vfmv_s_f_f16m8_tu(vfloat16m8_t maskedoff, float16_t src, size_t vl) {
  return __riscv_vfmv_s_tu(maskedoff, src, vl);
}

vfloat32mf2_t test_vfmv_s_f_f32mf2_tu(vfloat32mf2_t maskedoff, float32_t src, size_t vl) {
  return __riscv_vfmv_s_tu(maskedoff, src, vl);
}

vfloat32m1_t test_vfmv_s_f_f32m1_tu(vfloat32m1_t maskedoff, float32_t src, size_t vl) {
  return __riscv_vfmv_s_tu(maskedoff, src, vl);
}

vfloat32m2_t test_vfmv_s_f_f32m2_tu(vfloat32m2_t maskedoff, float32_t src, size_t vl) {
  return __riscv_vfmv_s_tu(maskedoff, src, vl);
}

vfloat32m4_t test_vfmv_s_f_f32m4_tu(vfloat32m4_t maskedoff, float32_t src, size_t vl) {
  return __riscv_vfmv_s_tu(maskedoff, src, vl);
}

vfloat32m8_t test_vfmv_s_f_f32m8_tu(vfloat32m8_t maskedoff, float32_t src, size_t vl) {
  return __riscv_vfmv_s_tu(maskedoff, src, vl);
}

vfloat64m1_t test_vfmv_s_f_f64m1_tu(vfloat64m1_t maskedoff, float64_t src, size_t vl) {
  return __riscv_vfmv_s_tu(maskedoff, src, vl);
}

vfloat64m2_t test_vfmv_s_f_f64m2_tu(vfloat64m2_t maskedoff, float64_t src, size_t vl) {
  return __riscv_vfmv_s_tu(maskedoff, src, vl);
}

vfloat64m4_t test_vfmv_s_f_f64m4_tu(vfloat64m4_t maskedoff, float64_t src, size_t vl) {
  return __riscv_vfmv_s_tu(maskedoff, src, vl);
}

vfloat64m8_t test_vfmv_s_f_f64m8_tu(vfloat64m8_t maskedoff, float64_t src, size_t vl) {
  return __riscv_vfmv_s_tu(maskedoff, src, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*[a-x0-9]+,\s*e[0-9]+,\s*m[f]?[1248],\s*t[au],\s*m[au]\s+vfmv\.[,\sa-x0-9()]+} 30 } } */
