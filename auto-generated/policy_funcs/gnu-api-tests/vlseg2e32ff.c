/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vlseg2e32ff_v_f32mf2_tu(vfloat32mf2_t *v0, vfloat32mf2_t *v1, vfloat32mf2_t maskedoff0, vfloat32mf2_t maskedoff1, const float32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_f32mf2_tu(v0, v1, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e32ff_v_f32m1_tu(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t maskedoff0, vfloat32m1_t maskedoff1, const float32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_f32m1_tu(v0, v1, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e32ff_v_f32m2_tu(vfloat32m2_t *v0, vfloat32m2_t *v1, vfloat32m2_t maskedoff0, vfloat32m2_t maskedoff1, const float32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_f32m2_tu(v0, v1, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e32ff_v_f32m4_tu(vfloat32m4_t *v0, vfloat32m4_t *v1, vfloat32m4_t maskedoff0, vfloat32m4_t maskedoff1, const float32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_f32m4_tu(v0, v1, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e32ff_v_i32mf2_tu(vint32mf2_t *v0, vint32mf2_t *v1, vint32mf2_t maskedoff0, vint32mf2_t maskedoff1, const int32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_i32mf2_tu(v0, v1, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e32ff_v_i32m1_tu(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t maskedoff0, vint32m1_t maskedoff1, const int32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_i32m1_tu(v0, v1, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e32ff_v_i32m2_tu(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t maskedoff0, vint32m2_t maskedoff1, const int32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_i32m2_tu(v0, v1, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e32ff_v_i32m4_tu(vint32m4_t *v0, vint32m4_t *v1, vint32m4_t maskedoff0, vint32m4_t maskedoff1, const int32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_i32m4_tu(v0, v1, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e32ff_v_u32mf2_tu(vuint32mf2_t *v0, vuint32mf2_t *v1, vuint32mf2_t maskedoff0, vuint32mf2_t maskedoff1, const uint32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_u32mf2_tu(v0, v1, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e32ff_v_u32m1_tu(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t maskedoff0, vuint32m1_t maskedoff1, const uint32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_u32m1_tu(v0, v1, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e32ff_v_u32m2_tu(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t maskedoff0, vuint32m2_t maskedoff1, const uint32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_u32m2_tu(v0, v1, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e32ff_v_u32m4_tu(vuint32m4_t *v0, vuint32m4_t *v1, vuint32m4_t maskedoff0, vuint32m4_t maskedoff1, const uint32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_u32m4_tu(v0, v1, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e32ff_v_f32mf2_tum(vfloat32mf2_t *v0, vfloat32mf2_t *v1, vbool64_t mask, vfloat32mf2_t maskedoff0, vfloat32mf2_t maskedoff1, const float32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_f32mf2_tum(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e32ff_v_f32m1_tum(vfloat32m1_t *v0, vfloat32m1_t *v1, vbool32_t mask, vfloat32m1_t maskedoff0, vfloat32m1_t maskedoff1, const float32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_f32m1_tum(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e32ff_v_f32m2_tum(vfloat32m2_t *v0, vfloat32m2_t *v1, vbool16_t mask, vfloat32m2_t maskedoff0, vfloat32m2_t maskedoff1, const float32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_f32m2_tum(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e32ff_v_f32m4_tum(vfloat32m4_t *v0, vfloat32m4_t *v1, vbool8_t mask, vfloat32m4_t maskedoff0, vfloat32m4_t maskedoff1, const float32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_f32m4_tum(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e32ff_v_i32mf2_tum(vint32mf2_t *v0, vint32mf2_t *v1, vbool64_t mask, vint32mf2_t maskedoff0, vint32mf2_t maskedoff1, const int32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_i32mf2_tum(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e32ff_v_i32m1_tum(vint32m1_t *v0, vint32m1_t *v1, vbool32_t mask, vint32m1_t maskedoff0, vint32m1_t maskedoff1, const int32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_i32m1_tum(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e32ff_v_i32m2_tum(vint32m2_t *v0, vint32m2_t *v1, vbool16_t mask, vint32m2_t maskedoff0, vint32m2_t maskedoff1, const int32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_i32m2_tum(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e32ff_v_i32m4_tum(vint32m4_t *v0, vint32m4_t *v1, vbool8_t mask, vint32m4_t maskedoff0, vint32m4_t maskedoff1, const int32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_i32m4_tum(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e32ff_v_u32mf2_tum(vuint32mf2_t *v0, vuint32mf2_t *v1, vbool64_t mask, vuint32mf2_t maskedoff0, vuint32mf2_t maskedoff1, const uint32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_u32mf2_tum(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e32ff_v_u32m1_tum(vuint32m1_t *v0, vuint32m1_t *v1, vbool32_t mask, vuint32m1_t maskedoff0, vuint32m1_t maskedoff1, const uint32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_u32m1_tum(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e32ff_v_u32m2_tum(vuint32m2_t *v0, vuint32m2_t *v1, vbool16_t mask, vuint32m2_t maskedoff0, vuint32m2_t maskedoff1, const uint32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_u32m2_tum(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e32ff_v_u32m4_tum(vuint32m4_t *v0, vuint32m4_t *v1, vbool8_t mask, vuint32m4_t maskedoff0, vuint32m4_t maskedoff1, const uint32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_u32m4_tum(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e32ff_v_f32mf2_tumu(vfloat32mf2_t *v0, vfloat32mf2_t *v1, vbool64_t mask, vfloat32mf2_t maskedoff0, vfloat32mf2_t maskedoff1, const float32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_f32mf2_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e32ff_v_f32m1_tumu(vfloat32m1_t *v0, vfloat32m1_t *v1, vbool32_t mask, vfloat32m1_t maskedoff0, vfloat32m1_t maskedoff1, const float32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_f32m1_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e32ff_v_f32m2_tumu(vfloat32m2_t *v0, vfloat32m2_t *v1, vbool16_t mask, vfloat32m2_t maskedoff0, vfloat32m2_t maskedoff1, const float32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_f32m2_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e32ff_v_f32m4_tumu(vfloat32m4_t *v0, vfloat32m4_t *v1, vbool8_t mask, vfloat32m4_t maskedoff0, vfloat32m4_t maskedoff1, const float32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_f32m4_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e32ff_v_i32mf2_tumu(vint32mf2_t *v0, vint32mf2_t *v1, vbool64_t mask, vint32mf2_t maskedoff0, vint32mf2_t maskedoff1, const int32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_i32mf2_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e32ff_v_i32m1_tumu(vint32m1_t *v0, vint32m1_t *v1, vbool32_t mask, vint32m1_t maskedoff0, vint32m1_t maskedoff1, const int32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_i32m1_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e32ff_v_i32m2_tumu(vint32m2_t *v0, vint32m2_t *v1, vbool16_t mask, vint32m2_t maskedoff0, vint32m2_t maskedoff1, const int32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_i32m2_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e32ff_v_i32m4_tumu(vint32m4_t *v0, vint32m4_t *v1, vbool8_t mask, vint32m4_t maskedoff0, vint32m4_t maskedoff1, const int32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_i32m4_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e32ff_v_u32mf2_tumu(vuint32mf2_t *v0, vuint32mf2_t *v1, vbool64_t mask, vuint32mf2_t maskedoff0, vuint32mf2_t maskedoff1, const uint32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_u32mf2_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e32ff_v_u32m1_tumu(vuint32m1_t *v0, vuint32m1_t *v1, vbool32_t mask, vuint32m1_t maskedoff0, vuint32m1_t maskedoff1, const uint32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_u32m1_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e32ff_v_u32m2_tumu(vuint32m2_t *v0, vuint32m2_t *v1, vbool16_t mask, vuint32m2_t maskedoff0, vuint32m2_t maskedoff1, const uint32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_u32m2_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e32ff_v_u32m4_tumu(vuint32m4_t *v0, vuint32m4_t *v1, vbool8_t mask, vuint32m4_t maskedoff0, vuint32m4_t maskedoff1, const uint32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_u32m4_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e32ff_v_f32mf2_mu(vfloat32mf2_t *v0, vfloat32mf2_t *v1, vbool64_t mask, vfloat32mf2_t maskedoff0, vfloat32mf2_t maskedoff1, const float32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_f32mf2_mu(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e32ff_v_f32m1_mu(vfloat32m1_t *v0, vfloat32m1_t *v1, vbool32_t mask, vfloat32m1_t maskedoff0, vfloat32m1_t maskedoff1, const float32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_f32m1_mu(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e32ff_v_f32m2_mu(vfloat32m2_t *v0, vfloat32m2_t *v1, vbool16_t mask, vfloat32m2_t maskedoff0, vfloat32m2_t maskedoff1, const float32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_f32m2_mu(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e32ff_v_f32m4_mu(vfloat32m4_t *v0, vfloat32m4_t *v1, vbool8_t mask, vfloat32m4_t maskedoff0, vfloat32m4_t maskedoff1, const float32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_f32m4_mu(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e32ff_v_i32mf2_mu(vint32mf2_t *v0, vint32mf2_t *v1, vbool64_t mask, vint32mf2_t maskedoff0, vint32mf2_t maskedoff1, const int32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_i32mf2_mu(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e32ff_v_i32m1_mu(vint32m1_t *v0, vint32m1_t *v1, vbool32_t mask, vint32m1_t maskedoff0, vint32m1_t maskedoff1, const int32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_i32m1_mu(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e32ff_v_i32m2_mu(vint32m2_t *v0, vint32m2_t *v1, vbool16_t mask, vint32m2_t maskedoff0, vint32m2_t maskedoff1, const int32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_i32m2_mu(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e32ff_v_i32m4_mu(vint32m4_t *v0, vint32m4_t *v1, vbool8_t mask, vint32m4_t maskedoff0, vint32m4_t maskedoff1, const int32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_i32m4_mu(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e32ff_v_u32mf2_mu(vuint32mf2_t *v0, vuint32mf2_t *v1, vbool64_t mask, vuint32mf2_t maskedoff0, vuint32mf2_t maskedoff1, const uint32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_u32mf2_mu(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e32ff_v_u32m1_mu(vuint32m1_t *v0, vuint32m1_t *v1, vbool32_t mask, vuint32m1_t maskedoff0, vuint32m1_t maskedoff1, const uint32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_u32m1_mu(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e32ff_v_u32m2_mu(vuint32m2_t *v0, vuint32m2_t *v1, vbool16_t mask, vuint32m2_t maskedoff0, vuint32m2_t maskedoff1, const uint32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_u32m2_mu(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e32ff_v_u32m4_mu(vuint32m4_t *v0, vuint32m4_t *v1, vbool8_t mask, vuint32m4_t maskedoff0, vuint32m4_t maskedoff1, const uint32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_u32m4_mu(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*[a-x0-9]+,\s*e[0-9]+,\s*m[f]?[1248],\s*t[au],\s*m[au]\s+vlseg2e32ff\.[,\sa-x0-9()]+} 48 } } */
