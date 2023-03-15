#include <stdint.h>
#include "rvv-v0p10-compatible-headers/overloaded-non-policy.h"
#include "rvv-v0p10-compatible-headers/overloaded-policy.h"
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vlseg2e32ff_v_f32mf2_m(vfloat32mf2_t *v0, vfloat32mf2_t *v1, vbool64_t mask, vfloat32mf2_t maskedoff0, vfloat32mf2_t maskedoff1, const float32_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e32ff(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e32ff_v_f32m1_m(vfloat32m1_t *v0, vfloat32m1_t *v1, vbool32_t mask, vfloat32m1_t maskedoff0, vfloat32m1_t maskedoff1, const float32_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e32ff(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e32ff_v_f32m2_m(vfloat32m2_t *v0, vfloat32m2_t *v1, vbool16_t mask, vfloat32m2_t maskedoff0, vfloat32m2_t maskedoff1, const float32_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e32ff(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e32ff_v_f32m4_m(vfloat32m4_t *v0, vfloat32m4_t *v1, vbool8_t mask, vfloat32m4_t maskedoff0, vfloat32m4_t maskedoff1, const float32_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e32ff(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e32ff_v_i32mf2_m(vint32mf2_t *v0, vint32mf2_t *v1, vbool64_t mask, vint32mf2_t maskedoff0, vint32mf2_t maskedoff1, const int32_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e32ff(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e32ff_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vbool32_t mask, vint32m1_t maskedoff0, vint32m1_t maskedoff1, const int32_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e32ff(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e32ff_v_i32m2_m(vint32m2_t *v0, vint32m2_t *v1, vbool16_t mask, vint32m2_t maskedoff0, vint32m2_t maskedoff1, const int32_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e32ff(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e32ff_v_i32m4_m(vint32m4_t *v0, vint32m4_t *v1, vbool8_t mask, vint32m4_t maskedoff0, vint32m4_t maskedoff1, const int32_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e32ff(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e32ff_v_u32mf2_m(vuint32mf2_t *v0, vuint32mf2_t *v1, vbool64_t mask, vuint32mf2_t maskedoff0, vuint32mf2_t maskedoff1, const uint32_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e32ff(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e32ff_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vbool32_t mask, vuint32m1_t maskedoff0, vuint32m1_t maskedoff1, const uint32_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e32ff(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e32ff_v_u32m2_m(vuint32m2_t *v0, vuint32m2_t *v1, vbool16_t mask, vuint32m2_t maskedoff0, vuint32m2_t maskedoff1, const uint32_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e32ff(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e32ff_v_u32m4_m(vuint32m4_t *v0, vuint32m4_t *v1, vbool8_t mask, vuint32m4_t maskedoff0, vuint32m4_t maskedoff1, const uint32_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e32ff(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

