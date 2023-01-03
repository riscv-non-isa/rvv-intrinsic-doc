// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat32mf2_t test_vle32ff_v_f32mf2_tu(vfloat32mf2_t maskedoff, const float *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_f32mf2_tu(maskedoff, base, new_vl, vl);
}

vfloat32m1_t test_vle32ff_v_f32m1_tu(vfloat32m1_t maskedoff, const float *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_f32m1_tu(maskedoff, base, new_vl, vl);
}

vfloat32m2_t test_vle32ff_v_f32m2_tu(vfloat32m2_t maskedoff, const float *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_f32m2_tu(maskedoff, base, new_vl, vl);
}

vfloat32m4_t test_vle32ff_v_f32m4_tu(vfloat32m4_t maskedoff, const float *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_f32m4_tu(maskedoff, base, new_vl, vl);
}

vfloat32m8_t test_vle32ff_v_f32m8_tu(vfloat32m8_t maskedoff, const float *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_f32m8_tu(maskedoff, base, new_vl, vl);
}

vint32mf2_t test_vle32ff_v_i32mf2_tu(vint32mf2_t maskedoff, const int32_t *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_i32mf2_tu(maskedoff, base, new_vl, vl);
}

vint32m1_t test_vle32ff_v_i32m1_tu(vint32m1_t maskedoff, const int32_t *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_i32m1_tu(maskedoff, base, new_vl, vl);
}

vint32m2_t test_vle32ff_v_i32m2_tu(vint32m2_t maskedoff, const int32_t *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_i32m2_tu(maskedoff, base, new_vl, vl);
}

vint32m4_t test_vle32ff_v_i32m4_tu(vint32m4_t maskedoff, const int32_t *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_i32m4_tu(maskedoff, base, new_vl, vl);
}

vint32m8_t test_vle32ff_v_i32m8_tu(vint32m8_t maskedoff, const int32_t *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_i32m8_tu(maskedoff, base, new_vl, vl);
}

vuint32mf2_t test_vle32ff_v_u32mf2_tu(vuint32mf2_t maskedoff, const uint32_t *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_u32mf2_tu(maskedoff, base, new_vl, vl);
}

vuint32m1_t test_vle32ff_v_u32m1_tu(vuint32m1_t maskedoff, const uint32_t *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_u32m1_tu(maskedoff, base, new_vl, vl);
}

vuint32m2_t test_vle32ff_v_u32m2_tu(vuint32m2_t maskedoff, const uint32_t *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_u32m2_tu(maskedoff, base, new_vl, vl);
}

vuint32m4_t test_vle32ff_v_u32m4_tu(vuint32m4_t maskedoff, const uint32_t *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_u32m4_tu(maskedoff, base, new_vl, vl);
}

vuint32m8_t test_vle32ff_v_u32m8_tu(vuint32m8_t maskedoff, const uint32_t *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_u32m8_tu(maskedoff, base, new_vl, vl);
}

vfloat32mf2_t test_vle32ff_v_f32mf2_ta(const float *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_f32mf2_ta(base, new_vl, vl);
}

vfloat32m1_t test_vle32ff_v_f32m1_ta(const float *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_f32m1_ta(base, new_vl, vl);
}

vfloat32m2_t test_vle32ff_v_f32m2_ta(const float *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_f32m2_ta(base, new_vl, vl);
}

vfloat32m4_t test_vle32ff_v_f32m4_ta(const float *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_f32m4_ta(base, new_vl, vl);
}

vfloat32m8_t test_vle32ff_v_f32m8_ta(const float *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_f32m8_ta(base, new_vl, vl);
}

vint32mf2_t test_vle32ff_v_i32mf2_ta(const int32_t *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_i32mf2_ta(base, new_vl, vl);
}

vint32m1_t test_vle32ff_v_i32m1_ta(const int32_t *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_i32m1_ta(base, new_vl, vl);
}

vint32m2_t test_vle32ff_v_i32m2_ta(const int32_t *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_i32m2_ta(base, new_vl, vl);
}

vint32m4_t test_vle32ff_v_i32m4_ta(const int32_t *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_i32m4_ta(base, new_vl, vl);
}

vint32m8_t test_vle32ff_v_i32m8_ta(const int32_t *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_i32m8_ta(base, new_vl, vl);
}

vuint32mf2_t test_vle32ff_v_u32mf2_ta(const uint32_t *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_u32mf2_ta(base, new_vl, vl);
}

vuint32m1_t test_vle32ff_v_u32m1_ta(const uint32_t *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_u32m1_ta(base, new_vl, vl);
}

vuint32m2_t test_vle32ff_v_u32m2_ta(const uint32_t *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_u32m2_ta(base, new_vl, vl);
}

vuint32m4_t test_vle32ff_v_u32m4_ta(const uint32_t *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_u32m4_ta(base, new_vl, vl);
}

vuint32m8_t test_vle32ff_v_u32m8_ta(const uint32_t *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_u32m8_ta(base, new_vl, vl);
}

vfloat32mf2_t test_vle32ff_v_f32mf2_tuma(vbool64_t mask, vfloat32mf2_t maskedoff, const float *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_f32mf2_tuma(mask, maskedoff, base, new_vl, vl);
}

vfloat32m1_t test_vle32ff_v_f32m1_tuma(vbool32_t mask, vfloat32m1_t maskedoff, const float *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_f32m1_tuma(mask, maskedoff, base, new_vl, vl);
}

vfloat32m2_t test_vle32ff_v_f32m2_tuma(vbool16_t mask, vfloat32m2_t maskedoff, const float *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_f32m2_tuma(mask, maskedoff, base, new_vl, vl);
}

vfloat32m4_t test_vle32ff_v_f32m4_tuma(vbool8_t mask, vfloat32m4_t maskedoff, const float *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_f32m4_tuma(mask, maskedoff, base, new_vl, vl);
}

vfloat32m8_t test_vle32ff_v_f32m8_tuma(vbool4_t mask, vfloat32m8_t maskedoff, const float *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_f32m8_tuma(mask, maskedoff, base, new_vl, vl);
}

vint32mf2_t test_vle32ff_v_i32mf2_tuma(vbool64_t mask, vint32mf2_t maskedoff, const int32_t *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_i32mf2_tuma(mask, maskedoff, base, new_vl, vl);
}

vint32m1_t test_vle32ff_v_i32m1_tuma(vbool32_t mask, vint32m1_t maskedoff, const int32_t *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_i32m1_tuma(mask, maskedoff, base, new_vl, vl);
}

vint32m2_t test_vle32ff_v_i32m2_tuma(vbool16_t mask, vint32m2_t maskedoff, const int32_t *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_i32m2_tuma(mask, maskedoff, base, new_vl, vl);
}

vint32m4_t test_vle32ff_v_i32m4_tuma(vbool8_t mask, vint32m4_t maskedoff, const int32_t *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_i32m4_tuma(mask, maskedoff, base, new_vl, vl);
}

vint32m8_t test_vle32ff_v_i32m8_tuma(vbool4_t mask, vint32m8_t maskedoff, const int32_t *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_i32m8_tuma(mask, maskedoff, base, new_vl, vl);
}

vuint32mf2_t test_vle32ff_v_u32mf2_tuma(vbool64_t mask, vuint32mf2_t maskedoff, const uint32_t *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_u32mf2_tuma(mask, maskedoff, base, new_vl, vl);
}

vuint32m1_t test_vle32ff_v_u32m1_tuma(vbool32_t mask, vuint32m1_t maskedoff, const uint32_t *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_u32m1_tuma(mask, maskedoff, base, new_vl, vl);
}

vuint32m2_t test_vle32ff_v_u32m2_tuma(vbool16_t mask, vuint32m2_t maskedoff, const uint32_t *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_u32m2_tuma(mask, maskedoff, base, new_vl, vl);
}

vuint32m4_t test_vle32ff_v_u32m4_tuma(vbool8_t mask, vuint32m4_t maskedoff, const uint32_t *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_u32m4_tuma(mask, maskedoff, base, new_vl, vl);
}

vuint32m8_t test_vle32ff_v_u32m8_tuma(vbool4_t mask, vuint32m8_t maskedoff, const uint32_t *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_u32m8_tuma(mask, maskedoff, base, new_vl, vl);
}

vfloat32mf2_t test_vle32ff_v_f32mf2_tumu(vbool64_t mask, vfloat32mf2_t maskedoff, const float *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_f32mf2_tumu(mask, maskedoff, base, new_vl, vl);
}

vfloat32m1_t test_vle32ff_v_f32m1_tumu(vbool32_t mask, vfloat32m1_t maskedoff, const float *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_f32m1_tumu(mask, maskedoff, base, new_vl, vl);
}

vfloat32m2_t test_vle32ff_v_f32m2_tumu(vbool16_t mask, vfloat32m2_t maskedoff, const float *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_f32m2_tumu(mask, maskedoff, base, new_vl, vl);
}

vfloat32m4_t test_vle32ff_v_f32m4_tumu(vbool8_t mask, vfloat32m4_t maskedoff, const float *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_f32m4_tumu(mask, maskedoff, base, new_vl, vl);
}

vfloat32m8_t test_vle32ff_v_f32m8_tumu(vbool4_t mask, vfloat32m8_t maskedoff, const float *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_f32m8_tumu(mask, maskedoff, base, new_vl, vl);
}

vint32mf2_t test_vle32ff_v_i32mf2_tumu(vbool64_t mask, vint32mf2_t maskedoff, const int32_t *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_i32mf2_tumu(mask, maskedoff, base, new_vl, vl);
}

vint32m1_t test_vle32ff_v_i32m1_tumu(vbool32_t mask, vint32m1_t maskedoff, const int32_t *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_i32m1_tumu(mask, maskedoff, base, new_vl, vl);
}

vint32m2_t test_vle32ff_v_i32m2_tumu(vbool16_t mask, vint32m2_t maskedoff, const int32_t *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_i32m2_tumu(mask, maskedoff, base, new_vl, vl);
}

vint32m4_t test_vle32ff_v_i32m4_tumu(vbool8_t mask, vint32m4_t maskedoff, const int32_t *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_i32m4_tumu(mask, maskedoff, base, new_vl, vl);
}

vint32m8_t test_vle32ff_v_i32m8_tumu(vbool4_t mask, vint32m8_t maskedoff, const int32_t *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_i32m8_tumu(mask, maskedoff, base, new_vl, vl);
}

vuint32mf2_t test_vle32ff_v_u32mf2_tumu(vbool64_t mask, vuint32mf2_t maskedoff, const uint32_t *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_u32mf2_tumu(mask, maskedoff, base, new_vl, vl);
}

vuint32m1_t test_vle32ff_v_u32m1_tumu(vbool32_t mask, vuint32m1_t maskedoff, const uint32_t *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_u32m1_tumu(mask, maskedoff, base, new_vl, vl);
}

vuint32m2_t test_vle32ff_v_u32m2_tumu(vbool16_t mask, vuint32m2_t maskedoff, const uint32_t *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_u32m2_tumu(mask, maskedoff, base, new_vl, vl);
}

vuint32m4_t test_vle32ff_v_u32m4_tumu(vbool8_t mask, vuint32m4_t maskedoff, const uint32_t *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_u32m4_tumu(mask, maskedoff, base, new_vl, vl);
}

vuint32m8_t test_vle32ff_v_u32m8_tumu(vbool4_t mask, vuint32m8_t maskedoff, const uint32_t *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_u32m8_tumu(mask, maskedoff, base, new_vl, vl);
}

vfloat32mf2_t test_vle32ff_v_f32mf2_tama(vbool64_t mask, const float *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_f32mf2_tama(mask, base, new_vl, vl);
}

vfloat32m1_t test_vle32ff_v_f32m1_tama(vbool32_t mask, const float *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_f32m1_tama(mask, base, new_vl, vl);
}

vfloat32m2_t test_vle32ff_v_f32m2_tama(vbool16_t mask, const float *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_f32m2_tama(mask, base, new_vl, vl);
}

vfloat32m4_t test_vle32ff_v_f32m4_tama(vbool8_t mask, const float *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_f32m4_tama(mask, base, new_vl, vl);
}

vfloat32m8_t test_vle32ff_v_f32m8_tama(vbool4_t mask, const float *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_f32m8_tama(mask, base, new_vl, vl);
}

vint32mf2_t test_vle32ff_v_i32mf2_tama(vbool64_t mask, const int32_t *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_i32mf2_tama(mask, base, new_vl, vl);
}

vint32m1_t test_vle32ff_v_i32m1_tama(vbool32_t mask, const int32_t *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_i32m1_tama(mask, base, new_vl, vl);
}

vint32m2_t test_vle32ff_v_i32m2_tama(vbool16_t mask, const int32_t *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_i32m2_tama(mask, base, new_vl, vl);
}

vint32m4_t test_vle32ff_v_i32m4_tama(vbool8_t mask, const int32_t *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_i32m4_tama(mask, base, new_vl, vl);
}

vint32m8_t test_vle32ff_v_i32m8_tama(vbool4_t mask, const int32_t *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_i32m8_tama(mask, base, new_vl, vl);
}

vuint32mf2_t test_vle32ff_v_u32mf2_tama(vbool64_t mask, const uint32_t *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_u32mf2_tama(mask, base, new_vl, vl);
}

vuint32m1_t test_vle32ff_v_u32m1_tama(vbool32_t mask, const uint32_t *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_u32m1_tama(mask, base, new_vl, vl);
}

vuint32m2_t test_vle32ff_v_u32m2_tama(vbool16_t mask, const uint32_t *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_u32m2_tama(mask, base, new_vl, vl);
}

vuint32m4_t test_vle32ff_v_u32m4_tama(vbool8_t mask, const uint32_t *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_u32m4_tama(mask, base, new_vl, vl);
}

vuint32m8_t test_vle32ff_v_u32m8_tama(vbool4_t mask, const uint32_t *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_u32m8_tama(mask, base, new_vl, vl);
}

vfloat32mf2_t test_vle32ff_v_f32mf2_tamu(vbool64_t mask, vfloat32mf2_t maskedoff, const float *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_f32mf2_tamu(mask, maskedoff, base, new_vl, vl);
}

vfloat32m1_t test_vle32ff_v_f32m1_tamu(vbool32_t mask, vfloat32m1_t maskedoff, const float *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_f32m1_tamu(mask, maskedoff, base, new_vl, vl);
}

vfloat32m2_t test_vle32ff_v_f32m2_tamu(vbool16_t mask, vfloat32m2_t maskedoff, const float *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_f32m2_tamu(mask, maskedoff, base, new_vl, vl);
}

vfloat32m4_t test_vle32ff_v_f32m4_tamu(vbool8_t mask, vfloat32m4_t maskedoff, const float *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_f32m4_tamu(mask, maskedoff, base, new_vl, vl);
}

vfloat32m8_t test_vle32ff_v_f32m8_tamu(vbool4_t mask, vfloat32m8_t maskedoff, const float *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_f32m8_tamu(mask, maskedoff, base, new_vl, vl);
}

vint32mf2_t test_vle32ff_v_i32mf2_tamu(vbool64_t mask, vint32mf2_t maskedoff, const int32_t *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_i32mf2_tamu(mask, maskedoff, base, new_vl, vl);
}

vint32m1_t test_vle32ff_v_i32m1_tamu(vbool32_t mask, vint32m1_t maskedoff, const int32_t *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_i32m1_tamu(mask, maskedoff, base, new_vl, vl);
}

vint32m2_t test_vle32ff_v_i32m2_tamu(vbool16_t mask, vint32m2_t maskedoff, const int32_t *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_i32m2_tamu(mask, maskedoff, base, new_vl, vl);
}

vint32m4_t test_vle32ff_v_i32m4_tamu(vbool8_t mask, vint32m4_t maskedoff, const int32_t *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_i32m4_tamu(mask, maskedoff, base, new_vl, vl);
}

vint32m8_t test_vle32ff_v_i32m8_tamu(vbool4_t mask, vint32m8_t maskedoff, const int32_t *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_i32m8_tamu(mask, maskedoff, base, new_vl, vl);
}

vuint32mf2_t test_vle32ff_v_u32mf2_tamu(vbool64_t mask, vuint32mf2_t maskedoff, const uint32_t *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_u32mf2_tamu(mask, maskedoff, base, new_vl, vl);
}

vuint32m1_t test_vle32ff_v_u32m1_tamu(vbool32_t mask, vuint32m1_t maskedoff, const uint32_t *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_u32m1_tamu(mask, maskedoff, base, new_vl, vl);
}

vuint32m2_t test_vle32ff_v_u32m2_tamu(vbool16_t mask, vuint32m2_t maskedoff, const uint32_t *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_u32m2_tamu(mask, maskedoff, base, new_vl, vl);
}

vuint32m4_t test_vle32ff_v_u32m4_tamu(vbool8_t mask, vuint32m4_t maskedoff, const uint32_t *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_u32m4_tamu(mask, maskedoff, base, new_vl, vl);
}

vuint32m8_t test_vle32ff_v_u32m8_tamu(vbool4_t mask, vuint32m8_t maskedoff, const uint32_t *base, size_t *new_vl, size_t vl) {
  return vle32ff_v_u32m8_tamu(mask, maskedoff, base, new_vl, vl);
}

