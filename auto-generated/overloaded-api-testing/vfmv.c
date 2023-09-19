#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
float16_t test_vfmv_f_s_f16mf4_f16(vfloat16mf4_t src) {
  return __riscv_vfmv_f(src);
}

float16_t test_vfmv_f_s_f16mf2_f16(vfloat16mf2_t src) {
  return __riscv_vfmv_f(src);
}

float16_t test_vfmv_f_s_f16m1_f16(vfloat16m1_t src) {
  return __riscv_vfmv_f(src);
}

float16_t test_vfmv_f_s_f16m2_f16(vfloat16m2_t src) {
  return __riscv_vfmv_f(src);
}

float16_t test_vfmv_f_s_f16m4_f16(vfloat16m4_t src) {
  return __riscv_vfmv_f(src);
}

float16_t test_vfmv_f_s_f16m8_f16(vfloat16m8_t src) {
  return __riscv_vfmv_f(src);
}

float32_t test_vfmv_f_s_f32mf2_f32(vfloat32mf2_t src) {
  return __riscv_vfmv_f(src);
}

float32_t test_vfmv_f_s_f32m1_f32(vfloat32m1_t src) {
  return __riscv_vfmv_f(src);
}

float32_t test_vfmv_f_s_f32m2_f32(vfloat32m2_t src) {
  return __riscv_vfmv_f(src);
}

float32_t test_vfmv_f_s_f32m4_f32(vfloat32m4_t src) {
  return __riscv_vfmv_f(src);
}

float32_t test_vfmv_f_s_f32m8_f32(vfloat32m8_t src) {
  return __riscv_vfmv_f(src);
}

float64_t test_vfmv_f_s_f64m1_f64(vfloat64m1_t src) {
  return __riscv_vfmv_f(src);
}

float64_t test_vfmv_f_s_f64m2_f64(vfloat64m2_t src) {
  return __riscv_vfmv_f(src);
}

float64_t test_vfmv_f_s_f64m4_f64(vfloat64m4_t src) {
  return __riscv_vfmv_f(src);
}

float64_t test_vfmv_f_s_f64m8_f64(vfloat64m8_t src) {
  return __riscv_vfmv_f(src);
}
