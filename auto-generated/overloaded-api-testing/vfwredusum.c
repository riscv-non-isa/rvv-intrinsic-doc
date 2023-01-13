#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat32m1_t test_vfwredusum_vs_f16mf4_f32m1(vfloat16mf4_t vector, vfloat32m1_t scalar, size_t vl) {
  return vfwredusum(vector, scalar, vl);
}

vfloat32m1_t test_vfwredusum_vs_f16mf2_f32m1(vfloat16mf2_t vector, vfloat32m1_t scalar, size_t vl) {
  return vfwredusum(vector, scalar, vl);
}

vfloat32m1_t test_vfwredusum_vs_f16m1_f32m1(vfloat16m1_t vector, vfloat32m1_t scalar, size_t vl) {
  return vfwredusum(vector, scalar, vl);
}

vfloat32m1_t test_vfwredusum_vs_f16m2_f32m1(vfloat16m2_t vector, vfloat32m1_t scalar, size_t vl) {
  return vfwredusum(vector, scalar, vl);
}

vfloat32m1_t test_vfwredusum_vs_f16m4_f32m1(vfloat16m4_t vector, vfloat32m1_t scalar, size_t vl) {
  return vfwredusum(vector, scalar, vl);
}

vfloat32m1_t test_vfwredusum_vs_f16m8_f32m1(vfloat16m8_t vector, vfloat32m1_t scalar, size_t vl) {
  return vfwredusum(vector, scalar, vl);
}

vfloat64m1_t test_vfwredusum_vs_f32mf2_f64m1(vfloat32mf2_t vector, vfloat64m1_t scalar, size_t vl) {
  return vfwredusum(vector, scalar, vl);
}

vfloat64m1_t test_vfwredusum_vs_f32m1_f64m1(vfloat32m1_t vector, vfloat64m1_t scalar, size_t vl) {
  return vfwredusum(vector, scalar, vl);
}

vfloat64m1_t test_vfwredusum_vs_f32m2_f64m1(vfloat32m2_t vector, vfloat64m1_t scalar, size_t vl) {
  return vfwredusum(vector, scalar, vl);
}

vfloat64m1_t test_vfwredusum_vs_f32m4_f64m1(vfloat32m4_t vector, vfloat64m1_t scalar, size_t vl) {
  return vfwredusum(vector, scalar, vl);
}

vfloat64m1_t test_vfwredusum_vs_f32m8_f64m1(vfloat32m8_t vector, vfloat64m1_t scalar, size_t vl) {
  return vfwredusum(vector, scalar, vl);
}

vfloat32m1_t test_vfwredusum_vs_f16mf4_f32m1_m(vbool64_t mask, vfloat16mf4_t vector, vfloat32m1_t scalar, size_t vl) {
  return vfwredusum(mask, vector, scalar, vl);
}

vfloat32m1_t test_vfwredusum_vs_f16mf2_f32m1_m(vbool32_t mask, vfloat16mf2_t vector, vfloat32m1_t scalar, size_t vl) {
  return vfwredusum(mask, vector, scalar, vl);
}

vfloat32m1_t test_vfwredusum_vs_f16m1_f32m1_m(vbool16_t mask, vfloat16m1_t vector, vfloat32m1_t scalar, size_t vl) {
  return vfwredusum(mask, vector, scalar, vl);
}

vfloat32m1_t test_vfwredusum_vs_f16m2_f32m1_m(vbool8_t mask, vfloat16m2_t vector, vfloat32m1_t scalar, size_t vl) {
  return vfwredusum(mask, vector, scalar, vl);
}

vfloat32m1_t test_vfwredusum_vs_f16m4_f32m1_m(vbool4_t mask, vfloat16m4_t vector, vfloat32m1_t scalar, size_t vl) {
  return vfwredusum(mask, vector, scalar, vl);
}

vfloat32m1_t test_vfwredusum_vs_f16m8_f32m1_m(vbool2_t mask, vfloat16m8_t vector, vfloat32m1_t scalar, size_t vl) {
  return vfwredusum(mask, vector, scalar, vl);
}

vfloat64m1_t test_vfwredusum_vs_f32mf2_f64m1_m(vbool64_t mask, vfloat32mf2_t vector, vfloat64m1_t scalar, size_t vl) {
  return vfwredusum(mask, vector, scalar, vl);
}

vfloat64m1_t test_vfwredusum_vs_f32m1_f64m1_m(vbool32_t mask, vfloat32m1_t vector, vfloat64m1_t scalar, size_t vl) {
  return vfwredusum(mask, vector, scalar, vl);
}

vfloat64m1_t test_vfwredusum_vs_f32m2_f64m1_m(vbool16_t mask, vfloat32m2_t vector, vfloat64m1_t scalar, size_t vl) {
  return vfwredusum(mask, vector, scalar, vl);
}

vfloat64m1_t test_vfwredusum_vs_f32m4_f64m1_m(vbool8_t mask, vfloat32m4_t vector, vfloat64m1_t scalar, size_t vl) {
  return vfwredusum(mask, vector, scalar, vl);
}

vfloat64m1_t test_vfwredusum_vs_f32m8_f64m1_m(vbool4_t mask, vfloat32m8_t vector, vfloat64m1_t scalar, size_t vl) {
  return vfwredusum(mask, vector, scalar, vl);
}

