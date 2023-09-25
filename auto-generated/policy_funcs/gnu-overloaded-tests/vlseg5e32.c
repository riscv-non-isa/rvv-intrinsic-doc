/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat32mf2x5_t test_vlseg5e32_v_f32mf2x5_tu(vfloat32mf2x5_t maskedoff_tuple, const float32_t *base, size_t vl) {
  return __riscv_vlseg5e32_tu(maskedoff_tuple, base, vl);
}

vfloat32m1x5_t test_vlseg5e32_v_f32m1x5_tu(vfloat32m1x5_t maskedoff_tuple, const float32_t *base, size_t vl) {
  return __riscv_vlseg5e32_tu(maskedoff_tuple, base, vl);
}

vint32mf2x5_t test_vlseg5e32_v_i32mf2x5_tu(vint32mf2x5_t maskedoff_tuple, const int32_t *base, size_t vl) {
  return __riscv_vlseg5e32_tu(maskedoff_tuple, base, vl);
}

vint32m1x5_t test_vlseg5e32_v_i32m1x5_tu(vint32m1x5_t maskedoff_tuple, const int32_t *base, size_t vl) {
  return __riscv_vlseg5e32_tu(maskedoff_tuple, base, vl);
}

vuint32mf2x5_t test_vlseg5e32_v_u32mf2x5_tu(vuint32mf2x5_t maskedoff_tuple, const uint32_t *base, size_t vl) {
  return __riscv_vlseg5e32_tu(maskedoff_tuple, base, vl);
}

vuint32m1x5_t test_vlseg5e32_v_u32m1x5_tu(vuint32m1x5_t maskedoff_tuple, const uint32_t *base, size_t vl) {
  return __riscv_vlseg5e32_tu(maskedoff_tuple, base, vl);
}

vfloat32mf2x5_t test_vlseg5e32_v_f32mf2x5_tum(vbool64_t mask, vfloat32mf2x5_t maskedoff_tuple, const float32_t *base, size_t vl) {
  return __riscv_vlseg5e32_tum(mask, maskedoff_tuple, base, vl);
}

vfloat32m1x5_t test_vlseg5e32_v_f32m1x5_tum(vbool32_t mask, vfloat32m1x5_t maskedoff_tuple, const float32_t *base, size_t vl) {
  return __riscv_vlseg5e32_tum(mask, maskedoff_tuple, base, vl);
}

vint32mf2x5_t test_vlseg5e32_v_i32mf2x5_tum(vbool64_t mask, vint32mf2x5_t maskedoff_tuple, const int32_t *base, size_t vl) {
  return __riscv_vlseg5e32_tum(mask, maskedoff_tuple, base, vl);
}

vint32m1x5_t test_vlseg5e32_v_i32m1x5_tum(vbool32_t mask, vint32m1x5_t maskedoff_tuple, const int32_t *base, size_t vl) {
  return __riscv_vlseg5e32_tum(mask, maskedoff_tuple, base, vl);
}

vuint32mf2x5_t test_vlseg5e32_v_u32mf2x5_tum(vbool64_t mask, vuint32mf2x5_t maskedoff_tuple, const uint32_t *base, size_t vl) {
  return __riscv_vlseg5e32_tum(mask, maskedoff_tuple, base, vl);
}

vuint32m1x5_t test_vlseg5e32_v_u32m1x5_tum(vbool32_t mask, vuint32m1x5_t maskedoff_tuple, const uint32_t *base, size_t vl) {
  return __riscv_vlseg5e32_tum(mask, maskedoff_tuple, base, vl);
}

vfloat32mf2x5_t test_vlseg5e32_v_f32mf2x5_tumu(vbool64_t mask, vfloat32mf2x5_t maskedoff_tuple, const float32_t *base, size_t vl) {
  return __riscv_vlseg5e32_tumu(mask, maskedoff_tuple, base, vl);
}

vfloat32m1x5_t test_vlseg5e32_v_f32m1x5_tumu(vbool32_t mask, vfloat32m1x5_t maskedoff_tuple, const float32_t *base, size_t vl) {
  return __riscv_vlseg5e32_tumu(mask, maskedoff_tuple, base, vl);
}

vint32mf2x5_t test_vlseg5e32_v_i32mf2x5_tumu(vbool64_t mask, vint32mf2x5_t maskedoff_tuple, const int32_t *base, size_t vl) {
  return __riscv_vlseg5e32_tumu(mask, maskedoff_tuple, base, vl);
}

vint32m1x5_t test_vlseg5e32_v_i32m1x5_tumu(vbool32_t mask, vint32m1x5_t maskedoff_tuple, const int32_t *base, size_t vl) {
  return __riscv_vlseg5e32_tumu(mask, maskedoff_tuple, base, vl);
}

vuint32mf2x5_t test_vlseg5e32_v_u32mf2x5_tumu(vbool64_t mask, vuint32mf2x5_t maskedoff_tuple, const uint32_t *base, size_t vl) {
  return __riscv_vlseg5e32_tumu(mask, maskedoff_tuple, base, vl);
}

vuint32m1x5_t test_vlseg5e32_v_u32m1x5_tumu(vbool32_t mask, vuint32m1x5_t maskedoff_tuple, const uint32_t *base, size_t vl) {
  return __riscv_vlseg5e32_tumu(mask, maskedoff_tuple, base, vl);
}

vfloat32mf2x5_t test_vlseg5e32_v_f32mf2x5_mu(vbool64_t mask, vfloat32mf2x5_t maskedoff_tuple, const float32_t *base, size_t vl) {
  return __riscv_vlseg5e32_mu(mask, maskedoff_tuple, base, vl);
}

vfloat32m1x5_t test_vlseg5e32_v_f32m1x5_mu(vbool32_t mask, vfloat32m1x5_t maskedoff_tuple, const float32_t *base, size_t vl) {
  return __riscv_vlseg5e32_mu(mask, maskedoff_tuple, base, vl);
}

vint32mf2x5_t test_vlseg5e32_v_i32mf2x5_mu(vbool64_t mask, vint32mf2x5_t maskedoff_tuple, const int32_t *base, size_t vl) {
  return __riscv_vlseg5e32_mu(mask, maskedoff_tuple, base, vl);
}

vint32m1x5_t test_vlseg5e32_v_i32m1x5_mu(vbool32_t mask, vint32m1x5_t maskedoff_tuple, const int32_t *base, size_t vl) {
  return __riscv_vlseg5e32_mu(mask, maskedoff_tuple, base, vl);
}

vuint32mf2x5_t test_vlseg5e32_v_u32mf2x5_mu(vbool64_t mask, vuint32mf2x5_t maskedoff_tuple, const uint32_t *base, size_t vl) {
  return __riscv_vlseg5e32_mu(mask, maskedoff_tuple, base, vl);
}

vuint32m1x5_t test_vlseg5e32_v_u32m1x5_mu(vbool32_t mask, vuint32m1x5_t maskedoff_tuple, const uint32_t *base, size_t vl) {
  return __riscv_vlseg5e32_mu(mask, maskedoff_tuple, base, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vlseg5e32\.[ivxfswum.]+\s+} 24 } } */
