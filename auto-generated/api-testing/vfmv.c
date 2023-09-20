#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat16mf4_t test_vfmv_v_f_f16mf4(float16_t rs1, size_t vl) {
  return __riscv_vfmv_v_f_f16mf4(rs1, vl);
}

vfloat16mf2_t test_vfmv_v_f_f16mf2(float16_t rs1, size_t vl) {
  return __riscv_vfmv_v_f_f16mf2(rs1, vl);
}

vfloat16m1_t test_vfmv_v_f_f16m1(float16_t rs1, size_t vl) {
  return __riscv_vfmv_v_f_f16m1(rs1, vl);
}

vfloat16m2_t test_vfmv_v_f_f16m2(float16_t rs1, size_t vl) {
  return __riscv_vfmv_v_f_f16m2(rs1, vl);
}

vfloat16m4_t test_vfmv_v_f_f16m4(float16_t rs1, size_t vl) {
  return __riscv_vfmv_v_f_f16m4(rs1, vl);
}

vfloat16m8_t test_vfmv_v_f_f16m8(float16_t rs1, size_t vl) {
  return __riscv_vfmv_v_f_f16m8(rs1, vl);
}

vfloat32mf2_t test_vfmv_v_f_f32mf2(float32_t rs1, size_t vl) {
  return __riscv_vfmv_v_f_f32mf2(rs1, vl);
}

vfloat32m1_t test_vfmv_v_f_f32m1(float32_t rs1, size_t vl) {
  return __riscv_vfmv_v_f_f32m1(rs1, vl);
}

vfloat32m2_t test_vfmv_v_f_f32m2(float32_t rs1, size_t vl) {
  return __riscv_vfmv_v_f_f32m2(rs1, vl);
}

vfloat32m4_t test_vfmv_v_f_f32m4(float32_t rs1, size_t vl) {
  return __riscv_vfmv_v_f_f32m4(rs1, vl);
}

vfloat32m8_t test_vfmv_v_f_f32m8(float32_t rs1, size_t vl) {
  return __riscv_vfmv_v_f_f32m8(rs1, vl);
}

vfloat64m1_t test_vfmv_v_f_f64m1(float64_t rs1, size_t vl) {
  return __riscv_vfmv_v_f_f64m1(rs1, vl);
}

vfloat64m2_t test_vfmv_v_f_f64m2(float64_t rs1, size_t vl) {
  return __riscv_vfmv_v_f_f64m2(rs1, vl);
}

vfloat64m4_t test_vfmv_v_f_f64m4(float64_t rs1, size_t vl) {
  return __riscv_vfmv_v_f_f64m4(rs1, vl);
}

vfloat64m8_t test_vfmv_v_f_f64m8(float64_t rs1, size_t vl) {
  return __riscv_vfmv_v_f_f64m8(rs1, vl);
}

float16_t test_vfmv_f_s_f16mf4_f16(vfloat16mf4_t vs1) {
  return __riscv_vfmv_f_s_f16mf4_f16(vs1);
}

vfloat16mf4_t test_vfmv_s_f_f16mf4(float16_t rs1, size_t vl) {
  return __riscv_vfmv_s_f_f16mf4(rs1, vl);
}

float16_t test_vfmv_f_s_f16mf2_f16(vfloat16mf2_t vs1) {
  return __riscv_vfmv_f_s_f16mf2_f16(vs1);
}

vfloat16mf2_t test_vfmv_s_f_f16mf2(float16_t rs1, size_t vl) {
  return __riscv_vfmv_s_f_f16mf2(rs1, vl);
}

float16_t test_vfmv_f_s_f16m1_f16(vfloat16m1_t vs1) {
  return __riscv_vfmv_f_s_f16m1_f16(vs1);
}

vfloat16m1_t test_vfmv_s_f_f16m1(float16_t rs1, size_t vl) {
  return __riscv_vfmv_s_f_f16m1(rs1, vl);
}

float16_t test_vfmv_f_s_f16m2_f16(vfloat16m2_t vs1) {
  return __riscv_vfmv_f_s_f16m2_f16(vs1);
}

vfloat16m2_t test_vfmv_s_f_f16m2(float16_t rs1, size_t vl) {
  return __riscv_vfmv_s_f_f16m2(rs1, vl);
}

float16_t test_vfmv_f_s_f16m4_f16(vfloat16m4_t vs1) {
  return __riscv_vfmv_f_s_f16m4_f16(vs1);
}

vfloat16m4_t test_vfmv_s_f_f16m4(float16_t rs1, size_t vl) {
  return __riscv_vfmv_s_f_f16m4(rs1, vl);
}

float16_t test_vfmv_f_s_f16m8_f16(vfloat16m8_t vs1) {
  return __riscv_vfmv_f_s_f16m8_f16(vs1);
}

vfloat16m8_t test_vfmv_s_f_f16m8(float16_t rs1, size_t vl) {
  return __riscv_vfmv_s_f_f16m8(rs1, vl);
}

float32_t test_vfmv_f_s_f32mf2_f32(vfloat32mf2_t vs1) {
  return __riscv_vfmv_f_s_f32mf2_f32(vs1);
}

vfloat32mf2_t test_vfmv_s_f_f32mf2(float32_t rs1, size_t vl) {
  return __riscv_vfmv_s_f_f32mf2(rs1, vl);
}

float32_t test_vfmv_f_s_f32m1_f32(vfloat32m1_t vs1) {
  return __riscv_vfmv_f_s_f32m1_f32(vs1);
}

vfloat32m1_t test_vfmv_s_f_f32m1(float32_t rs1, size_t vl) {
  return __riscv_vfmv_s_f_f32m1(rs1, vl);
}

float32_t test_vfmv_f_s_f32m2_f32(vfloat32m2_t vs1) {
  return __riscv_vfmv_f_s_f32m2_f32(vs1);
}

vfloat32m2_t test_vfmv_s_f_f32m2(float32_t rs1, size_t vl) {
  return __riscv_vfmv_s_f_f32m2(rs1, vl);
}

float32_t test_vfmv_f_s_f32m4_f32(vfloat32m4_t vs1) {
  return __riscv_vfmv_f_s_f32m4_f32(vs1);
}

vfloat32m4_t test_vfmv_s_f_f32m4(float32_t rs1, size_t vl) {
  return __riscv_vfmv_s_f_f32m4(rs1, vl);
}

float32_t test_vfmv_f_s_f32m8_f32(vfloat32m8_t vs1) {
  return __riscv_vfmv_f_s_f32m8_f32(vs1);
}

vfloat32m8_t test_vfmv_s_f_f32m8(float32_t rs1, size_t vl) {
  return __riscv_vfmv_s_f_f32m8(rs1, vl);
}

float64_t test_vfmv_f_s_f64m1_f64(vfloat64m1_t vs1) {
  return __riscv_vfmv_f_s_f64m1_f64(vs1);
}

vfloat64m1_t test_vfmv_s_f_f64m1(float64_t rs1, size_t vl) {
  return __riscv_vfmv_s_f_f64m1(rs1, vl);
}

float64_t test_vfmv_f_s_f64m2_f64(vfloat64m2_t vs1) {
  return __riscv_vfmv_f_s_f64m2_f64(vs1);
}

vfloat64m2_t test_vfmv_s_f_f64m2(float64_t rs1, size_t vl) {
  return __riscv_vfmv_s_f_f64m2(rs1, vl);
}

float64_t test_vfmv_f_s_f64m4_f64(vfloat64m4_t vs1) {
  return __riscv_vfmv_f_s_f64m4_f64(vs1);
}

vfloat64m4_t test_vfmv_s_f_f64m4(float64_t rs1, size_t vl) {
  return __riscv_vfmv_s_f_f64m4(rs1, vl);
}

float64_t test_vfmv_f_s_f64m8_f64(vfloat64m8_t vs1) {
  return __riscv_vfmv_f_s_f64m8_f64(vs1);
}

vfloat64m8_t test_vfmv_s_f_f64m8(float64_t rs1, size_t vl) {
  return __riscv_vfmv_s_f_f64m8(rs1, vl);
}
