/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

vfloat16m1_t test_vfredmin_vs_f16mf4_f16m1(vfloat16mf4_t vector, vfloat16m1_t scalar, size_t vl) {
  return __riscv_vfredmin_vs_f16mf4_f16m1(vector, scalar, vl);
}

vfloat16m1_t test_vfredmin_vs_f16mf2_f16m1(vfloat16mf2_t vector, vfloat16m1_t scalar, size_t vl) {
  return __riscv_vfredmin_vs_f16mf2_f16m1(vector, scalar, vl);
}

vfloat16m1_t test_vfredmin_vs_f16m1_f16m1(vfloat16m1_t vector, vfloat16m1_t scalar, size_t vl) {
  return __riscv_vfredmin_vs_f16m1_f16m1(vector, scalar, vl);
}

vfloat16m1_t test_vfredmin_vs_f16m2_f16m1(vfloat16m2_t vector, vfloat16m1_t scalar, size_t vl) {
  return __riscv_vfredmin_vs_f16m2_f16m1(vector, scalar, vl);
}

vfloat16m1_t test_vfredmin_vs_f16m4_f16m1(vfloat16m4_t vector, vfloat16m1_t scalar, size_t vl) {
  return __riscv_vfredmin_vs_f16m4_f16m1(vector, scalar, vl);
}

vfloat16m1_t test_vfredmin_vs_f16m8_f16m1(vfloat16m8_t vector, vfloat16m1_t scalar, size_t vl) {
  return __riscv_vfredmin_vs_f16m8_f16m1(vector, scalar, vl);
}

vfloat32m1_t test_vfredmin_vs_f32mf2_f32m1(vfloat32mf2_t vector, vfloat32m1_t scalar, size_t vl) {
  return __riscv_vfredmin_vs_f32mf2_f32m1(vector, scalar, vl);
}

vfloat32m1_t test_vfredmin_vs_f32m1_f32m1(vfloat32m1_t vector, vfloat32m1_t scalar, size_t vl) {
  return __riscv_vfredmin_vs_f32m1_f32m1(vector, scalar, vl);
}

vfloat32m1_t test_vfredmin_vs_f32m2_f32m1(vfloat32m2_t vector, vfloat32m1_t scalar, size_t vl) {
  return __riscv_vfredmin_vs_f32m2_f32m1(vector, scalar, vl);
}

vfloat32m1_t test_vfredmin_vs_f32m4_f32m1(vfloat32m4_t vector, vfloat32m1_t scalar, size_t vl) {
  return __riscv_vfredmin_vs_f32m4_f32m1(vector, scalar, vl);
}

vfloat32m1_t test_vfredmin_vs_f32m8_f32m1(vfloat32m8_t vector, vfloat32m1_t scalar, size_t vl) {
  return __riscv_vfredmin_vs_f32m8_f32m1(vector, scalar, vl);
}

vfloat64m1_t test_vfredmin_vs_f64m1_f64m1(vfloat64m1_t vector, vfloat64m1_t scalar, size_t vl) {
  return __riscv_vfredmin_vs_f64m1_f64m1(vector, scalar, vl);
}

vfloat64m1_t test_vfredmin_vs_f64m2_f64m1(vfloat64m2_t vector, vfloat64m1_t scalar, size_t vl) {
  return __riscv_vfredmin_vs_f64m2_f64m1(vector, scalar, vl);
}

vfloat64m1_t test_vfredmin_vs_f64m4_f64m1(vfloat64m4_t vector, vfloat64m1_t scalar, size_t vl) {
  return __riscv_vfredmin_vs_f64m4_f64m1(vector, scalar, vl);
}

vfloat64m1_t test_vfredmin_vs_f64m8_f64m1(vfloat64m8_t vector, vfloat64m1_t scalar, size_t vl) {
  return __riscv_vfredmin_vs_f64m8_f64m1(vector, scalar, vl);
}

vfloat16m1_t test_vfredmin_vs_f16mf4_f16m1_m(vbool64_t mask, vfloat16mf4_t vector, vfloat16m1_t scalar, size_t vl) {
  return __riscv_vfredmin_vs_f16mf4_f16m1_m(mask, vector, scalar, vl);
}

vfloat16m1_t test_vfredmin_vs_f16mf2_f16m1_m(vbool32_t mask, vfloat16mf2_t vector, vfloat16m1_t scalar, size_t vl) {
  return __riscv_vfredmin_vs_f16mf2_f16m1_m(mask, vector, scalar, vl);
}

vfloat16m1_t test_vfredmin_vs_f16m1_f16m1_m(vbool16_t mask, vfloat16m1_t vector, vfloat16m1_t scalar, size_t vl) {
  return __riscv_vfredmin_vs_f16m1_f16m1_m(mask, vector, scalar, vl);
}

vfloat16m1_t test_vfredmin_vs_f16m2_f16m1_m(vbool8_t mask, vfloat16m2_t vector, vfloat16m1_t scalar, size_t vl) {
  return __riscv_vfredmin_vs_f16m2_f16m1_m(mask, vector, scalar, vl);
}

vfloat16m1_t test_vfredmin_vs_f16m4_f16m1_m(vbool4_t mask, vfloat16m4_t vector, vfloat16m1_t scalar, size_t vl) {
  return __riscv_vfredmin_vs_f16m4_f16m1_m(mask, vector, scalar, vl);
}

vfloat16m1_t test_vfredmin_vs_f16m8_f16m1_m(vbool2_t mask, vfloat16m8_t vector, vfloat16m1_t scalar, size_t vl) {
  return __riscv_vfredmin_vs_f16m8_f16m1_m(mask, vector, scalar, vl);
}

vfloat32m1_t test_vfredmin_vs_f32mf2_f32m1_m(vbool64_t mask, vfloat32mf2_t vector, vfloat32m1_t scalar, size_t vl) {
  return __riscv_vfredmin_vs_f32mf2_f32m1_m(mask, vector, scalar, vl);
}

vfloat32m1_t test_vfredmin_vs_f32m1_f32m1_m(vbool32_t mask, vfloat32m1_t vector, vfloat32m1_t scalar, size_t vl) {
  return __riscv_vfredmin_vs_f32m1_f32m1_m(mask, vector, scalar, vl);
}

vfloat32m1_t test_vfredmin_vs_f32m2_f32m1_m(vbool16_t mask, vfloat32m2_t vector, vfloat32m1_t scalar, size_t vl) {
  return __riscv_vfredmin_vs_f32m2_f32m1_m(mask, vector, scalar, vl);
}

vfloat32m1_t test_vfredmin_vs_f32m4_f32m1_m(vbool8_t mask, vfloat32m4_t vector, vfloat32m1_t scalar, size_t vl) {
  return __riscv_vfredmin_vs_f32m4_f32m1_m(mask, vector, scalar, vl);
}

vfloat32m1_t test_vfredmin_vs_f32m8_f32m1_m(vbool4_t mask, vfloat32m8_t vector, vfloat32m1_t scalar, size_t vl) {
  return __riscv_vfredmin_vs_f32m8_f32m1_m(mask, vector, scalar, vl);
}

vfloat64m1_t test_vfredmin_vs_f64m1_f64m1_m(vbool64_t mask, vfloat64m1_t vector, vfloat64m1_t scalar, size_t vl) {
  return __riscv_vfredmin_vs_f64m1_f64m1_m(mask, vector, scalar, vl);
}

vfloat64m1_t test_vfredmin_vs_f64m2_f64m1_m(vbool32_t mask, vfloat64m2_t vector, vfloat64m1_t scalar, size_t vl) {
  return __riscv_vfredmin_vs_f64m2_f64m1_m(mask, vector, scalar, vl);
}

vfloat64m1_t test_vfredmin_vs_f64m4_f64m1_m(vbool16_t mask, vfloat64m4_t vector, vfloat64m1_t scalar, size_t vl) {
  return __riscv_vfredmin_vs_f64m4_f64m1_m(mask, vector, scalar, vl);
}

vfloat64m1_t test_vfredmin_vs_f64m8_f64m1_m(vbool8_t mask, vfloat64m8_t vector, vfloat64m1_t scalar, size_t vl) {
  return __riscv_vfredmin_vs_f64m8_f64m1_m(mask, vector, scalar, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*[a-x0-9]+,\s*e[0-9]+,\s*m[f]?[1248],\s*t[au],\s*m[au]\s+vfredmin\.[, a-x0-9()]+} 30 } } */
