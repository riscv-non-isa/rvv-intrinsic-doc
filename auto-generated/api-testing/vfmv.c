#include <riscv_vector.h>
#include <stdint.h>

vfloat32mf2_t test_vfmv_v_f_f32mf2(float rs1, size_t vl) {
  return __riscv_vfmv_v_f_f32mf2(rs1, vl);
}

vfloat32m1_t test_vfmv_v_f_f32m1(float rs1, size_t vl) {
  return __riscv_vfmv_v_f_f32m1(rs1, vl);
}

vfloat32m2_t test_vfmv_v_f_f32m2(float rs1, size_t vl) {
  return __riscv_vfmv_v_f_f32m2(rs1, vl);
}

vfloat32m4_t test_vfmv_v_f_f32m4(float rs1, size_t vl) {
  return __riscv_vfmv_v_f_f32m4(rs1, vl);
}

vfloat32m8_t test_vfmv_v_f_f32m8(float rs1, size_t vl) {
  return __riscv_vfmv_v_f_f32m8(rs1, vl);
}

vfloat64m1_t test_vfmv_v_f_f64m1(double rs1, size_t vl) {
  return __riscv_vfmv_v_f_f64m1(rs1, vl);
}

vfloat64m2_t test_vfmv_v_f_f64m2(double rs1, size_t vl) {
  return __riscv_vfmv_v_f_f64m2(rs1, vl);
}

vfloat64m4_t test_vfmv_v_f_f64m4(double rs1, size_t vl) {
  return __riscv_vfmv_v_f_f64m4(rs1, vl);
}

vfloat64m8_t test_vfmv_v_f_f64m8(double rs1, size_t vl) {
  return __riscv_vfmv_v_f_f64m8(rs1, vl);
}

float test_vfmv_f_s_f32mf2_f32(vfloat32mf2_t vs1) {
  return __riscv_vfmv_f_s_f32mf2_f32(vs1);
}

vfloat32mf2_t test_vfmv_s_f_f32mf2(float rs1, size_t vl) {
  return __riscv_vfmv_s_f_f32mf2(rs1, vl);
}

float test_vfmv_f_s_f32m1_f32(vfloat32m1_t vs1) {
  return __riscv_vfmv_f_s_f32m1_f32(vs1);
}

vfloat32m1_t test_vfmv_s_f_f32m1(float rs1, size_t vl) {
  return __riscv_vfmv_s_f_f32m1(rs1, vl);
}

float test_vfmv_f_s_f32m2_f32(vfloat32m2_t vs1) {
  return __riscv_vfmv_f_s_f32m2_f32(vs1);
}

vfloat32m2_t test_vfmv_s_f_f32m2(float rs1, size_t vl) {
  return __riscv_vfmv_s_f_f32m2(rs1, vl);
}

float test_vfmv_f_s_f32m4_f32(vfloat32m4_t vs1) {
  return __riscv_vfmv_f_s_f32m4_f32(vs1);
}

vfloat32m4_t test_vfmv_s_f_f32m4(float rs1, size_t vl) {
  return __riscv_vfmv_s_f_f32m4(rs1, vl);
}

float test_vfmv_f_s_f32m8_f32(vfloat32m8_t vs1) {
  return __riscv_vfmv_f_s_f32m8_f32(vs1);
}

vfloat32m8_t test_vfmv_s_f_f32m8(float rs1, size_t vl) {
  return __riscv_vfmv_s_f_f32m8(rs1, vl);
}

double test_vfmv_f_s_f64m1_f64(vfloat64m1_t vs1) {
  return __riscv_vfmv_f_s_f64m1_f64(vs1);
}

vfloat64m1_t test_vfmv_s_f_f64m1(double rs1, size_t vl) {
  return __riscv_vfmv_s_f_f64m1(rs1, vl);
}

double test_vfmv_f_s_f64m2_f64(vfloat64m2_t vs1) {
  return __riscv_vfmv_f_s_f64m2_f64(vs1);
}

vfloat64m2_t test_vfmv_s_f_f64m2(double rs1, size_t vl) {
  return __riscv_vfmv_s_f_f64m2(rs1, vl);
}

double test_vfmv_f_s_f64m4_f64(vfloat64m4_t vs1) {
  return __riscv_vfmv_f_s_f64m4_f64(vs1);
}

vfloat64m4_t test_vfmv_s_f_f64m4(double rs1, size_t vl) {
  return __riscv_vfmv_s_f_f64m4(rs1, vl);
}

double test_vfmv_f_s_f64m8_f64(vfloat64m8_t vs1) {
  return __riscv_vfmv_f_s_f64m8_f64(vs1);
}

vfloat64m8_t test_vfmv_s_f_f64m8(double rs1, size_t vl) {
  return __riscv_vfmv_s_f_f64m8(rs1, vl);
}
