#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

vfloat16mf4_t test_vfmerge_vfm_f16mf4(vfloat16mf4_t op1, float16_t op2, vbool64_t mask, size_t vl) {
  return __riscv_vfmerge(op1, op2, mask, vl);
}

vfloat16mf2_t test_vfmerge_vfm_f16mf2(vfloat16mf2_t op1, float16_t op2, vbool32_t mask, size_t vl) {
  return __riscv_vfmerge(op1, op2, mask, vl);
}

vfloat16m1_t test_vfmerge_vfm_f16m1(vfloat16m1_t op1, float16_t op2, vbool16_t mask, size_t vl) {
  return __riscv_vfmerge(op1, op2, mask, vl);
}

vfloat16m2_t test_vfmerge_vfm_f16m2(vfloat16m2_t op1, float16_t op2, vbool8_t mask, size_t vl) {
  return __riscv_vfmerge(op1, op2, mask, vl);
}

vfloat16m4_t test_vfmerge_vfm_f16m4(vfloat16m4_t op1, float16_t op2, vbool4_t mask, size_t vl) {
  return __riscv_vfmerge(op1, op2, mask, vl);
}

vfloat16m8_t test_vfmerge_vfm_f16m8(vfloat16m8_t op1, float16_t op2, vbool2_t mask, size_t vl) {
  return __riscv_vfmerge(op1, op2, mask, vl);
}

vfloat32mf2_t test_vfmerge_vfm_f32mf2(vfloat32mf2_t op1, float32_t op2, vbool64_t mask, size_t vl) {
  return __riscv_vfmerge(op1, op2, mask, vl);
}

vfloat32m1_t test_vfmerge_vfm_f32m1(vfloat32m1_t op1, float32_t op2, vbool32_t mask, size_t vl) {
  return __riscv_vfmerge(op1, op2, mask, vl);
}

vfloat32m2_t test_vfmerge_vfm_f32m2(vfloat32m2_t op1, float32_t op2, vbool16_t mask, size_t vl) {
  return __riscv_vfmerge(op1, op2, mask, vl);
}

vfloat32m4_t test_vfmerge_vfm_f32m4(vfloat32m4_t op1, float32_t op2, vbool8_t mask, size_t vl) {
  return __riscv_vfmerge(op1, op2, mask, vl);
}

vfloat32m8_t test_vfmerge_vfm_f32m8(vfloat32m8_t op1, float32_t op2, vbool4_t mask, size_t vl) {
  return __riscv_vfmerge(op1, op2, mask, vl);
}

vfloat64m1_t test_vfmerge_vfm_f64m1(vfloat64m1_t op1, float64_t op2, vbool64_t mask, size_t vl) {
  return __riscv_vfmerge(op1, op2, mask, vl);
}

vfloat64m2_t test_vfmerge_vfm_f64m2(vfloat64m2_t op1, float64_t op2, vbool32_t mask, size_t vl) {
  return __riscv_vfmerge(op1, op2, mask, vl);
}

vfloat64m4_t test_vfmerge_vfm_f64m4(vfloat64m4_t op1, float64_t op2, vbool16_t mask, size_t vl) {
  return __riscv_vfmerge(op1, op2, mask, vl);
}

vfloat64m8_t test_vfmerge_vfm_f64m8(vfloat64m8_t op1, float64_t op2, vbool8_t mask, size_t vl) {
  return __riscv_vfmerge(op1, op2, mask, vl);
}
