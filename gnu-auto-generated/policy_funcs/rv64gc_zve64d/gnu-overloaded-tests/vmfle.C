/* { dg-do compile } */
/* { dg-options "-march=rv64gc_zve64d -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include "riscv_vector.h"

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vbool64_t test_vmfle_vv_f32mf2_b64(vfloat32mf2_t op1, vfloat32mf2_t op2, size_t vl) {
  return __riscv_vmfle(op1, op2, vl);
}

vbool64_t test_vmfle_vf_f32mf2_b64(vfloat32mf2_t op1, float32_t op2, size_t vl) {
  return __riscv_vmfle(op1, op2, vl);
}

vbool32_t test_vmfle_vv_f32m1_b32(vfloat32m1_t op1, vfloat32m1_t op2, size_t vl) {
  return __riscv_vmfle(op1, op2, vl);
}

vbool32_t test_vmfle_vf_f32m1_b32(vfloat32m1_t op1, float32_t op2, size_t vl) {
  return __riscv_vmfle(op1, op2, vl);
}

vbool16_t test_vmfle_vv_f32m2_b16(vfloat32m2_t op1, vfloat32m2_t op2, size_t vl) {
  return __riscv_vmfle(op1, op2, vl);
}

vbool16_t test_vmfle_vf_f32m2_b16(vfloat32m2_t op1, float32_t op2, size_t vl) {
  return __riscv_vmfle(op1, op2, vl);
}

vbool8_t test_vmfle_vv_f32m4_b8(vfloat32m4_t op1, vfloat32m4_t op2, size_t vl) {
  return __riscv_vmfle(op1, op2, vl);
}

vbool8_t test_vmfle_vf_f32m4_b8(vfloat32m4_t op1, float32_t op2, size_t vl) {
  return __riscv_vmfle(op1, op2, vl);
}

vbool4_t test_vmfle_vv_f32m8_b4(vfloat32m8_t op1, vfloat32m8_t op2, size_t vl) {
  return __riscv_vmfle(op1, op2, vl);
}

vbool4_t test_vmfle_vf_f32m8_b4(vfloat32m8_t op1, float32_t op2, size_t vl) {
  return __riscv_vmfle(op1, op2, vl);
}

vbool64_t test_vmfle_vv_f64m1_b64(vfloat64m1_t op1, vfloat64m1_t op2, size_t vl) {
  return __riscv_vmfle(op1, op2, vl);
}

vbool64_t test_vmfle_vf_f64m1_b64(vfloat64m1_t op1, float64_t op2, size_t vl) {
  return __riscv_vmfle(op1, op2, vl);
}

vbool32_t test_vmfle_vv_f64m2_b32(vfloat64m2_t op1, vfloat64m2_t op2, size_t vl) {
  return __riscv_vmfle(op1, op2, vl);
}

vbool32_t test_vmfle_vf_f64m2_b32(vfloat64m2_t op1, float64_t op2, size_t vl) {
  return __riscv_vmfle(op1, op2, vl);
}

vbool16_t test_vmfle_vv_f64m4_b16(vfloat64m4_t op1, vfloat64m4_t op2, size_t vl) {
  return __riscv_vmfle(op1, op2, vl);
}

vbool16_t test_vmfle_vf_f64m4_b16(vfloat64m4_t op1, float64_t op2, size_t vl) {
  return __riscv_vmfle(op1, op2, vl);
}

vbool8_t test_vmfle_vv_f64m8_b8(vfloat64m8_t op1, vfloat64m8_t op2, size_t vl) {
  return __riscv_vmfle(op1, op2, vl);
}

vbool8_t test_vmfle_vf_f64m8_b8(vfloat64m8_t op1, float64_t op2, size_t vl) {
  return __riscv_vmfle(op1, op2, vl);
}

vbool64_t test_vmfle_vv_f32mf2_b64_m(vbool64_t mask, vfloat32mf2_t op1, vfloat32mf2_t op2, size_t vl) {
  return __riscv_vmfle(mask, op1, op2, vl);
}

vbool64_t test_vmfle_vf_f32mf2_b64_m(vbool64_t mask, vfloat32mf2_t op1, float32_t op2, size_t vl) {
  return __riscv_vmfle(mask, op1, op2, vl);
}

vbool32_t test_vmfle_vv_f32m1_b32_m(vbool32_t mask, vfloat32m1_t op1, vfloat32m1_t op2, size_t vl) {
  return __riscv_vmfle(mask, op1, op2, vl);
}

vbool32_t test_vmfle_vf_f32m1_b32_m(vbool32_t mask, vfloat32m1_t op1, float32_t op2, size_t vl) {
  return __riscv_vmfle(mask, op1, op2, vl);
}

vbool16_t test_vmfle_vv_f32m2_b16_m(vbool16_t mask, vfloat32m2_t op1, vfloat32m2_t op2, size_t vl) {
  return __riscv_vmfle(mask, op1, op2, vl);
}

vbool16_t test_vmfle_vf_f32m2_b16_m(vbool16_t mask, vfloat32m2_t op1, float32_t op2, size_t vl) {
  return __riscv_vmfle(mask, op1, op2, vl);
}

vbool8_t test_vmfle_vv_f32m4_b8_m(vbool8_t mask, vfloat32m4_t op1, vfloat32m4_t op2, size_t vl) {
  return __riscv_vmfle(mask, op1, op2, vl);
}

vbool8_t test_vmfle_vf_f32m4_b8_m(vbool8_t mask, vfloat32m4_t op1, float32_t op2, size_t vl) {
  return __riscv_vmfle(mask, op1, op2, vl);
}

vbool4_t test_vmfle_vv_f32m8_b4_m(vbool4_t mask, vfloat32m8_t op1, vfloat32m8_t op2, size_t vl) {
  return __riscv_vmfle(mask, op1, op2, vl);
}

vbool4_t test_vmfle_vf_f32m8_b4_m(vbool4_t mask, vfloat32m8_t op1, float32_t op2, size_t vl) {
  return __riscv_vmfle(mask, op1, op2, vl);
}

vbool64_t test_vmfle_vv_f64m1_b64_m(vbool64_t mask, vfloat64m1_t op1, vfloat64m1_t op2, size_t vl) {
  return __riscv_vmfle(mask, op1, op2, vl);
}

vbool64_t test_vmfle_vf_f64m1_b64_m(vbool64_t mask, vfloat64m1_t op1, float64_t op2, size_t vl) {
  return __riscv_vmfle(mask, op1, op2, vl);
}

vbool32_t test_vmfle_vv_f64m2_b32_m(vbool32_t mask, vfloat64m2_t op1, vfloat64m2_t op2, size_t vl) {
  return __riscv_vmfle(mask, op1, op2, vl);
}

vbool32_t test_vmfle_vf_f64m2_b32_m(vbool32_t mask, vfloat64m2_t op1, float64_t op2, size_t vl) {
  return __riscv_vmfle(mask, op1, op2, vl);
}

vbool16_t test_vmfle_vv_f64m4_b16_m(vbool16_t mask, vfloat64m4_t op1, vfloat64m4_t op2, size_t vl) {
  return __riscv_vmfle(mask, op1, op2, vl);
}

vbool16_t test_vmfle_vf_f64m4_b16_m(vbool16_t mask, vfloat64m4_t op1, float64_t op2, size_t vl) {
  return __riscv_vmfle(mask, op1, op2, vl);
}

vbool8_t test_vmfle_vv_f64m8_b8_m(vbool8_t mask, vfloat64m8_t op1, vfloat64m8_t op2, size_t vl) {
  return __riscv_vmfle(mask, op1, op2, vl);
}

vbool8_t test_vmfle_vf_f64m8_b8_m(vbool8_t mask, vfloat64m8_t op1, float64_t op2, size_t vl) {
  return __riscv_vmfle(mask, op1, op2, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vmfle\.[ivxfswum.]+\s+} 36 } } */
