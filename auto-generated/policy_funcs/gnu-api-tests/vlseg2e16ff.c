/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat16mf4x2_t test_vlseg2e16ff_v_f16mf4x2_tu(vfloat16mf4x2_t maskedoff_tuple, const float16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_f16mf4x2_tu(maskedoff_tuple, base, new_vl, vl);
}

vfloat16mf2x2_t test_vlseg2e16ff_v_f16mf2x2_tu(vfloat16mf2x2_t maskedoff_tuple, const float16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_f16mf2x2_tu(maskedoff_tuple, base, new_vl, vl);
}

vfloat16m1x2_t test_vlseg2e16ff_v_f16m1x2_tu(vfloat16m1x2_t maskedoff_tuple, const float16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_f16m1x2_tu(maskedoff_tuple, base, new_vl, vl);
}

vfloat16m2x2_t test_vlseg2e16ff_v_f16m2x2_tu(vfloat16m2x2_t maskedoff_tuple, const float16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_f16m2x2_tu(maskedoff_tuple, base, new_vl, vl);
}

vfloat16m4x2_t test_vlseg2e16ff_v_f16m4x2_tu(vfloat16m4x2_t maskedoff_tuple, const float16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_f16m4x2_tu(maskedoff_tuple, base, new_vl, vl);
}

vint16mf4x2_t test_vlseg2e16ff_v_i16mf4x2_tu(vint16mf4x2_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_i16mf4x2_tu(maskedoff_tuple, base, new_vl, vl);
}

vint16mf2x2_t test_vlseg2e16ff_v_i16mf2x2_tu(vint16mf2x2_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_i16mf2x2_tu(maskedoff_tuple, base, new_vl, vl);
}

vint16m1x2_t test_vlseg2e16ff_v_i16m1x2_tu(vint16m1x2_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_i16m1x2_tu(maskedoff_tuple, base, new_vl, vl);
}

vint16m2x2_t test_vlseg2e16ff_v_i16m2x2_tu(vint16m2x2_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_i16m2x2_tu(maskedoff_tuple, base, new_vl, vl);
}

vint16m4x2_t test_vlseg2e16ff_v_i16m4x2_tu(vint16m4x2_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_i16m4x2_tu(maskedoff_tuple, base, new_vl, vl);
}

vuint16mf4x2_t test_vlseg2e16ff_v_u16mf4x2_tu(vuint16mf4x2_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_u16mf4x2_tu(maskedoff_tuple, base, new_vl, vl);
}

vuint16mf2x2_t test_vlseg2e16ff_v_u16mf2x2_tu(vuint16mf2x2_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_u16mf2x2_tu(maskedoff_tuple, base, new_vl, vl);
}

vuint16m1x2_t test_vlseg2e16ff_v_u16m1x2_tu(vuint16m1x2_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_u16m1x2_tu(maskedoff_tuple, base, new_vl, vl);
}

vuint16m2x2_t test_vlseg2e16ff_v_u16m2x2_tu(vuint16m2x2_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_u16m2x2_tu(maskedoff_tuple, base, new_vl, vl);
}

vuint16m4x2_t test_vlseg2e16ff_v_u16m4x2_tu(vuint16m4x2_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_u16m4x2_tu(maskedoff_tuple, base, new_vl, vl);
}

vfloat16mf4x2_t test_vlseg2e16ff_v_f16mf4x2_tum(vbool64_t mask, vfloat16mf4x2_t maskedoff_tuple, const float16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_f16mf4x2_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vfloat16mf2x2_t test_vlseg2e16ff_v_f16mf2x2_tum(vbool32_t mask, vfloat16mf2x2_t maskedoff_tuple, const float16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_f16mf2x2_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vfloat16m1x2_t test_vlseg2e16ff_v_f16m1x2_tum(vbool16_t mask, vfloat16m1x2_t maskedoff_tuple, const float16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_f16m1x2_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vfloat16m2x2_t test_vlseg2e16ff_v_f16m2x2_tum(vbool8_t mask, vfloat16m2x2_t maskedoff_tuple, const float16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_f16m2x2_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vfloat16m4x2_t test_vlseg2e16ff_v_f16m4x2_tum(vbool4_t mask, vfloat16m4x2_t maskedoff_tuple, const float16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_f16m4x2_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vint16mf4x2_t test_vlseg2e16ff_v_i16mf4x2_tum(vbool64_t mask, vint16mf4x2_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_i16mf4x2_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vint16mf2x2_t test_vlseg2e16ff_v_i16mf2x2_tum(vbool32_t mask, vint16mf2x2_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_i16mf2x2_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vint16m1x2_t test_vlseg2e16ff_v_i16m1x2_tum(vbool16_t mask, vint16m1x2_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_i16m1x2_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vint16m2x2_t test_vlseg2e16ff_v_i16m2x2_tum(vbool8_t mask, vint16m2x2_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_i16m2x2_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vint16m4x2_t test_vlseg2e16ff_v_i16m4x2_tum(vbool4_t mask, vint16m4x2_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_i16m4x2_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint16mf4x2_t test_vlseg2e16ff_v_u16mf4x2_tum(vbool64_t mask, vuint16mf4x2_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_u16mf4x2_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint16mf2x2_t test_vlseg2e16ff_v_u16mf2x2_tum(vbool32_t mask, vuint16mf2x2_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_u16mf2x2_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint16m1x2_t test_vlseg2e16ff_v_u16m1x2_tum(vbool16_t mask, vuint16m1x2_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_u16m1x2_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint16m2x2_t test_vlseg2e16ff_v_u16m2x2_tum(vbool8_t mask, vuint16m2x2_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_u16m2x2_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint16m4x2_t test_vlseg2e16ff_v_u16m4x2_tum(vbool4_t mask, vuint16m4x2_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_u16m4x2_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vfloat16mf4x2_t test_vlseg2e16ff_v_f16mf4x2_tumu(vbool64_t mask, vfloat16mf4x2_t maskedoff_tuple, const float16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_f16mf4x2_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vfloat16mf2x2_t test_vlseg2e16ff_v_f16mf2x2_tumu(vbool32_t mask, vfloat16mf2x2_t maskedoff_tuple, const float16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_f16mf2x2_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vfloat16m1x2_t test_vlseg2e16ff_v_f16m1x2_tumu(vbool16_t mask, vfloat16m1x2_t maskedoff_tuple, const float16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_f16m1x2_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vfloat16m2x2_t test_vlseg2e16ff_v_f16m2x2_tumu(vbool8_t mask, vfloat16m2x2_t maskedoff_tuple, const float16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_f16m2x2_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vfloat16m4x2_t test_vlseg2e16ff_v_f16m4x2_tumu(vbool4_t mask, vfloat16m4x2_t maskedoff_tuple, const float16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_f16m4x2_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint16mf4x2_t test_vlseg2e16ff_v_i16mf4x2_tumu(vbool64_t mask, vint16mf4x2_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_i16mf4x2_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint16mf2x2_t test_vlseg2e16ff_v_i16mf2x2_tumu(vbool32_t mask, vint16mf2x2_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_i16mf2x2_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint16m1x2_t test_vlseg2e16ff_v_i16m1x2_tumu(vbool16_t mask, vint16m1x2_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_i16m1x2_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint16m2x2_t test_vlseg2e16ff_v_i16m2x2_tumu(vbool8_t mask, vint16m2x2_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_i16m2x2_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint16m4x2_t test_vlseg2e16ff_v_i16m4x2_tumu(vbool4_t mask, vint16m4x2_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_i16m4x2_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint16mf4x2_t test_vlseg2e16ff_v_u16mf4x2_tumu(vbool64_t mask, vuint16mf4x2_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_u16mf4x2_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint16mf2x2_t test_vlseg2e16ff_v_u16mf2x2_tumu(vbool32_t mask, vuint16mf2x2_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_u16mf2x2_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint16m1x2_t test_vlseg2e16ff_v_u16m1x2_tumu(vbool16_t mask, vuint16m1x2_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_u16m1x2_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint16m2x2_t test_vlseg2e16ff_v_u16m2x2_tumu(vbool8_t mask, vuint16m2x2_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_u16m2x2_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint16m4x2_t test_vlseg2e16ff_v_u16m4x2_tumu(vbool4_t mask, vuint16m4x2_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_u16m4x2_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vfloat16mf4x2_t test_vlseg2e16ff_v_f16mf4x2_mu(vbool64_t mask, vfloat16mf4x2_t maskedoff_tuple, const float16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_f16mf4x2_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vfloat16mf2x2_t test_vlseg2e16ff_v_f16mf2x2_mu(vbool32_t mask, vfloat16mf2x2_t maskedoff_tuple, const float16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_f16mf2x2_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vfloat16m1x2_t test_vlseg2e16ff_v_f16m1x2_mu(vbool16_t mask, vfloat16m1x2_t maskedoff_tuple, const float16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_f16m1x2_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vfloat16m2x2_t test_vlseg2e16ff_v_f16m2x2_mu(vbool8_t mask, vfloat16m2x2_t maskedoff_tuple, const float16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_f16m2x2_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vfloat16m4x2_t test_vlseg2e16ff_v_f16m4x2_mu(vbool4_t mask, vfloat16m4x2_t maskedoff_tuple, const float16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_f16m4x2_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint16mf4x2_t test_vlseg2e16ff_v_i16mf4x2_mu(vbool64_t mask, vint16mf4x2_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_i16mf4x2_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint16mf2x2_t test_vlseg2e16ff_v_i16mf2x2_mu(vbool32_t mask, vint16mf2x2_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_i16mf2x2_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint16m1x2_t test_vlseg2e16ff_v_i16m1x2_mu(vbool16_t mask, vint16m1x2_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_i16m1x2_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint16m2x2_t test_vlseg2e16ff_v_i16m2x2_mu(vbool8_t mask, vint16m2x2_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_i16m2x2_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint16m4x2_t test_vlseg2e16ff_v_i16m4x2_mu(vbool4_t mask, vint16m4x2_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_i16m4x2_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint16mf4x2_t test_vlseg2e16ff_v_u16mf4x2_mu(vbool64_t mask, vuint16mf4x2_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_u16mf4x2_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint16mf2x2_t test_vlseg2e16ff_v_u16mf2x2_mu(vbool32_t mask, vuint16mf2x2_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_u16mf2x2_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint16m1x2_t test_vlseg2e16ff_v_u16m1x2_mu(vbool16_t mask, vuint16m1x2_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_u16m1x2_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint16m2x2_t test_vlseg2e16ff_v_u16m2x2_mu(vbool8_t mask, vuint16m2x2_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_u16m2x2_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint16m4x2_t test_vlseg2e16ff_v_u16m4x2_mu(vbool4_t mask, vuint16m4x2_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_u16m4x2_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vlseg2e16ff\.[ivxfswum.]+\s+} 60 } } */