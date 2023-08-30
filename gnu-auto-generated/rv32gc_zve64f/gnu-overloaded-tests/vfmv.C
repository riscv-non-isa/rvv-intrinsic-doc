/* { dg-do compile } */
/* { dg-options "-march=rv32gc_zve64f -mabi=ilp32d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include "riscv_vector.h"

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
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

/* { dg-final { scan-assembler-times {vfmv\.[ivxfswum.]+\s+[,\sa-x0-9()]+} 5 } } */
