/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat32mf2x4_t test_vlseg4e32ff_v_f32mf2x4_tu(vfloat32mf2x4_t maskedoff_tuple, const float32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e32ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vfloat32m1x4_t test_vlseg4e32ff_v_f32m1x4_tu(vfloat32m1x4_t maskedoff_tuple, const float32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e32ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vfloat32m2x4_t test_vlseg4e32ff_v_f32m2x4_tu(vfloat32m2x4_t maskedoff_tuple, const float32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e32ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vint32mf2x4_t test_vlseg4e32ff_v_i32mf2x4_tu(vint32mf2x4_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e32ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vint32m1x4_t test_vlseg4e32ff_v_i32m1x4_tu(vint32m1x4_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e32ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vint32m2x4_t test_vlseg4e32ff_v_i32m2x4_tu(vint32m2x4_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e32ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vuint32mf2x4_t test_vlseg4e32ff_v_u32mf2x4_tu(vuint32mf2x4_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e32ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vuint32m1x4_t test_vlseg4e32ff_v_u32m1x4_tu(vuint32m1x4_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e32ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vuint32m2x4_t test_vlseg4e32ff_v_u32m2x4_tu(vuint32m2x4_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e32ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vfloat32mf2x4_t test_vlseg4e32ff_v_f32mf2x4_tum(vbool64_t mask, vfloat32mf2x4_t maskedoff_tuple, const float32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e32ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vfloat32m1x4_t test_vlseg4e32ff_v_f32m1x4_tum(vbool32_t mask, vfloat32m1x4_t maskedoff_tuple, const float32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e32ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vfloat32m2x4_t test_vlseg4e32ff_v_f32m2x4_tum(vbool16_t mask, vfloat32m2x4_t maskedoff_tuple, const float32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e32ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vint32mf2x4_t test_vlseg4e32ff_v_i32mf2x4_tum(vbool64_t mask, vint32mf2x4_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e32ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vint32m1x4_t test_vlseg4e32ff_v_i32m1x4_tum(vbool32_t mask, vint32m1x4_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e32ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vint32m2x4_t test_vlseg4e32ff_v_i32m2x4_tum(vbool16_t mask, vint32m2x4_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e32ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint32mf2x4_t test_vlseg4e32ff_v_u32mf2x4_tum(vbool64_t mask, vuint32mf2x4_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e32ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint32m1x4_t test_vlseg4e32ff_v_u32m1x4_tum(vbool32_t mask, vuint32m1x4_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e32ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint32m2x4_t test_vlseg4e32ff_v_u32m2x4_tum(vbool16_t mask, vuint32m2x4_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e32ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vfloat32mf2x4_t test_vlseg4e32ff_v_f32mf2x4_tumu(vbool64_t mask, vfloat32mf2x4_t maskedoff_tuple, const float32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e32ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vfloat32m1x4_t test_vlseg4e32ff_v_f32m1x4_tumu(vbool32_t mask, vfloat32m1x4_t maskedoff_tuple, const float32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e32ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vfloat32m2x4_t test_vlseg4e32ff_v_f32m2x4_tumu(vbool16_t mask, vfloat32m2x4_t maskedoff_tuple, const float32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e32ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint32mf2x4_t test_vlseg4e32ff_v_i32mf2x4_tumu(vbool64_t mask, vint32mf2x4_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e32ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint32m1x4_t test_vlseg4e32ff_v_i32m1x4_tumu(vbool32_t mask, vint32m1x4_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e32ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint32m2x4_t test_vlseg4e32ff_v_i32m2x4_tumu(vbool16_t mask, vint32m2x4_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e32ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint32mf2x4_t test_vlseg4e32ff_v_u32mf2x4_tumu(vbool64_t mask, vuint32mf2x4_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e32ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint32m1x4_t test_vlseg4e32ff_v_u32m1x4_tumu(vbool32_t mask, vuint32m1x4_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e32ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint32m2x4_t test_vlseg4e32ff_v_u32m2x4_tumu(vbool16_t mask, vuint32m2x4_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e32ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vfloat32mf2x4_t test_vlseg4e32ff_v_f32mf2x4_mu(vbool64_t mask, vfloat32mf2x4_t maskedoff_tuple, const float32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e32ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vfloat32m1x4_t test_vlseg4e32ff_v_f32m1x4_mu(vbool32_t mask, vfloat32m1x4_t maskedoff_tuple, const float32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e32ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vfloat32m2x4_t test_vlseg4e32ff_v_f32m2x4_mu(vbool16_t mask, vfloat32m2x4_t maskedoff_tuple, const float32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e32ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint32mf2x4_t test_vlseg4e32ff_v_i32mf2x4_mu(vbool64_t mask, vint32mf2x4_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e32ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint32m1x4_t test_vlseg4e32ff_v_i32m1x4_mu(vbool32_t mask, vint32m1x4_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e32ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint32m2x4_t test_vlseg4e32ff_v_i32m2x4_mu(vbool16_t mask, vint32m2x4_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e32ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint32mf2x4_t test_vlseg4e32ff_v_u32mf2x4_mu(vbool64_t mask, vuint32mf2x4_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e32ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint32m1x4_t test_vlseg4e32ff_v_u32m1x4_mu(vbool32_t mask, vuint32m1x4_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e32ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint32m2x4_t test_vlseg4e32ff_v_u32m2x4_mu(vbool16_t mask, vuint32m2x4_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e32ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vlseg4e32ff\.[ivxfswum.]+\s+} 36 } } */
