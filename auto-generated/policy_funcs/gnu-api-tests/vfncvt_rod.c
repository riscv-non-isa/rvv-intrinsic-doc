/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat16mf4_t test_vfncvt_rod_f_f_w_f16mf4_tu(vfloat16mf4_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f16mf4_tu(maskedoff, src, vl);
}

vfloat16mf2_t test_vfncvt_rod_f_f_w_f16mf2_tu(vfloat16mf2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f16mf2_tu(maskedoff, src, vl);
}

vfloat16m1_t test_vfncvt_rod_f_f_w_f16m1_tu(vfloat16m1_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f16m1_tu(maskedoff, src, vl);
}

vfloat16m2_t test_vfncvt_rod_f_f_w_f16m2_tu(vfloat16m2_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f16m2_tu(maskedoff, src, vl);
}

vfloat16m4_t test_vfncvt_rod_f_f_w_f16m4_tu(vfloat16m4_t maskedoff, vfloat32m8_t src, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f16m4_tu(maskedoff, src, vl);
}

vfloat32mf2_t test_vfncvt_rod_f_f_w_f32mf2_tu(vfloat32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f32mf2_tu(maskedoff, src, vl);
}

vfloat32m1_t test_vfncvt_rod_f_f_w_f32m1_tu(vfloat32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f32m1_tu(maskedoff, src, vl);
}

vfloat32m2_t test_vfncvt_rod_f_f_w_f32m2_tu(vfloat32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f32m2_tu(maskedoff, src, vl);
}

vfloat32m4_t test_vfncvt_rod_f_f_w_f32m4_tu(vfloat32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f32m4_tu(maskedoff, src, vl);
}

vfloat16mf4_t test_vfncvt_rod_f_f_w_f16mf4_tum(vbool64_t mask, vfloat16mf4_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f16mf4_tum(mask, maskedoff, src, vl);
}

vfloat16mf2_t test_vfncvt_rod_f_f_w_f16mf2_tum(vbool32_t mask, vfloat16mf2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f16mf2_tum(mask, maskedoff, src, vl);
}

vfloat16m1_t test_vfncvt_rod_f_f_w_f16m1_tum(vbool16_t mask, vfloat16m1_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f16m1_tum(mask, maskedoff, src, vl);
}

vfloat16m2_t test_vfncvt_rod_f_f_w_f16m2_tum(vbool8_t mask, vfloat16m2_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f16m2_tum(mask, maskedoff, src, vl);
}

vfloat16m4_t test_vfncvt_rod_f_f_w_f16m4_tum(vbool4_t mask, vfloat16m4_t maskedoff, vfloat32m8_t src, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f16m4_tum(mask, maskedoff, src, vl);
}

vfloat32mf2_t test_vfncvt_rod_f_f_w_f32mf2_tum(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f32mf2_tum(mask, maskedoff, src, vl);
}

vfloat32m1_t test_vfncvt_rod_f_f_w_f32m1_tum(vbool32_t mask, vfloat32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f32m1_tum(mask, maskedoff, src, vl);
}

vfloat32m2_t test_vfncvt_rod_f_f_w_f32m2_tum(vbool16_t mask, vfloat32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f32m2_tum(mask, maskedoff, src, vl);
}

vfloat32m4_t test_vfncvt_rod_f_f_w_f32m4_tum(vbool8_t mask, vfloat32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f32m4_tum(mask, maskedoff, src, vl);
}

vfloat16mf4_t test_vfncvt_rod_f_f_w_f16mf4_tumu(vbool64_t mask, vfloat16mf4_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f16mf4_tumu(mask, maskedoff, src, vl);
}

vfloat16mf2_t test_vfncvt_rod_f_f_w_f16mf2_tumu(vbool32_t mask, vfloat16mf2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f16mf2_tumu(mask, maskedoff, src, vl);
}

vfloat16m1_t test_vfncvt_rod_f_f_w_f16m1_tumu(vbool16_t mask, vfloat16m1_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f16m1_tumu(mask, maskedoff, src, vl);
}

vfloat16m2_t test_vfncvt_rod_f_f_w_f16m2_tumu(vbool8_t mask, vfloat16m2_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f16m2_tumu(mask, maskedoff, src, vl);
}

vfloat16m4_t test_vfncvt_rod_f_f_w_f16m4_tumu(vbool4_t mask, vfloat16m4_t maskedoff, vfloat32m8_t src, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f16m4_tumu(mask, maskedoff, src, vl);
}

vfloat32mf2_t test_vfncvt_rod_f_f_w_f32mf2_tumu(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f32mf2_tumu(mask, maskedoff, src, vl);
}

vfloat32m1_t test_vfncvt_rod_f_f_w_f32m1_tumu(vbool32_t mask, vfloat32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f32m1_tumu(mask, maskedoff, src, vl);
}

vfloat32m2_t test_vfncvt_rod_f_f_w_f32m2_tumu(vbool16_t mask, vfloat32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f32m2_tumu(mask, maskedoff, src, vl);
}

vfloat32m4_t test_vfncvt_rod_f_f_w_f32m4_tumu(vbool8_t mask, vfloat32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f32m4_tumu(mask, maskedoff, src, vl);
}

vfloat16mf4_t test_vfncvt_rod_f_f_w_f16mf4_mu(vbool64_t mask, vfloat16mf4_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f16mf4_mu(mask, maskedoff, src, vl);
}

vfloat16mf2_t test_vfncvt_rod_f_f_w_f16mf2_mu(vbool32_t mask, vfloat16mf2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f16mf2_mu(mask, maskedoff, src, vl);
}

vfloat16m1_t test_vfncvt_rod_f_f_w_f16m1_mu(vbool16_t mask, vfloat16m1_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f16m1_mu(mask, maskedoff, src, vl);
}

vfloat16m2_t test_vfncvt_rod_f_f_w_f16m2_mu(vbool8_t mask, vfloat16m2_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f16m2_mu(mask, maskedoff, src, vl);
}

vfloat16m4_t test_vfncvt_rod_f_f_w_f16m4_mu(vbool4_t mask, vfloat16m4_t maskedoff, vfloat32m8_t src, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f16m4_mu(mask, maskedoff, src, vl);
}

vfloat32mf2_t test_vfncvt_rod_f_f_w_f32mf2_mu(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f32mf2_mu(mask, maskedoff, src, vl);
}

vfloat32m1_t test_vfncvt_rod_f_f_w_f32m1_mu(vbool32_t mask, vfloat32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f32m1_mu(mask, maskedoff, src, vl);
}

vfloat32m2_t test_vfncvt_rod_f_f_w_f32m2_mu(vbool16_t mask, vfloat32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f32m2_mu(mask, maskedoff, src, vl);
}

vfloat32m4_t test_vfncvt_rod_f_f_w_f32m4_mu(vbool8_t mask, vfloat32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f32m4_mu(mask, maskedoff, src, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*[a-x0-9]+,\s*e[0-9]+,\s*m[f]?[1248],\s*t[au],\s*m[au]\s+vfncvt\.rod[,\sa-x0-9()]+} 36 } } */
