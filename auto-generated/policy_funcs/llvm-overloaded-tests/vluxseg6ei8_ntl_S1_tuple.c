// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

vfloat16mf4x6_t test_vluxseg6ei8_v_f16mf4x6_tu_ntl_S1(vfloat16mf4x6_t maskedoff_tuple, const _Float16 *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16mf2x6_t test_vluxseg6ei8_v_f16mf2x6_tu_ntl_S1(vfloat16mf2x6_t maskedoff_tuple, const _Float16 *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16m1x6_t test_vluxseg6ei8_v_f16m1x6_tu_ntl_S1(vfloat16m1x6_t maskedoff_tuple, const _Float16 *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32mf2x6_t test_vluxseg6ei8_v_f32mf2x6_tu_ntl_S1(vfloat32mf2x6_t maskedoff_tuple, const float *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32m1x6_t test_vluxseg6ei8_v_f32m1x6_tu_ntl_S1(vfloat32m1x6_t maskedoff_tuple, const float *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat64m1x6_t test_vluxseg6ei8_v_f64m1x6_tu_ntl_S1(vfloat64m1x6_t maskedoff_tuple, const double *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf8x6_t test_vluxseg6ei8_v_i8mf8x6_tu_ntl_S1(vint8mf8x6_t maskedoff_tuple, const int8_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf4x6_t test_vluxseg6ei8_v_i8mf4x6_tu_ntl_S1(vint8mf4x6_t maskedoff_tuple, const int8_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf2x6_t test_vluxseg6ei8_v_i8mf2x6_tu_ntl_S1(vint8mf2x6_t maskedoff_tuple, const int8_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8m1x6_t test_vluxseg6ei8_v_i8m1x6_tu_ntl_S1(vint8m1x6_t maskedoff_tuple, const int8_t *base, vuint8m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16mf4x6_t test_vluxseg6ei8_v_i16mf4x6_tu_ntl_S1(vint16mf4x6_t maskedoff_tuple, const int16_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16mf2x6_t test_vluxseg6ei8_v_i16mf2x6_tu_ntl_S1(vint16mf2x6_t maskedoff_tuple, const int16_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16m1x6_t test_vluxseg6ei8_v_i16m1x6_tu_ntl_S1(vint16m1x6_t maskedoff_tuple, const int16_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32mf2x6_t test_vluxseg6ei8_v_i32mf2x6_tu_ntl_S1(vint32mf2x6_t maskedoff_tuple, const int32_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32m1x6_t test_vluxseg6ei8_v_i32m1x6_tu_ntl_S1(vint32m1x6_t maskedoff_tuple, const int32_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint64m1x6_t test_vluxseg6ei8_v_i64m1x6_tu_ntl_S1(vint64m1x6_t maskedoff_tuple, const int64_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf8x6_t test_vluxseg6ei8_v_u8mf8x6_tu_ntl_S1(vuint8mf8x6_t maskedoff_tuple, const uint8_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf4x6_t test_vluxseg6ei8_v_u8mf4x6_tu_ntl_S1(vuint8mf4x6_t maskedoff_tuple, const uint8_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf2x6_t test_vluxseg6ei8_v_u8mf2x6_tu_ntl_S1(vuint8mf2x6_t maskedoff_tuple, const uint8_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8m1x6_t test_vluxseg6ei8_v_u8m1x6_tu_ntl_S1(vuint8m1x6_t maskedoff_tuple, const uint8_t *base, vuint8m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16mf4x6_t test_vluxseg6ei8_v_u16mf4x6_tu_ntl_S1(vuint16mf4x6_t maskedoff_tuple, const uint16_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16mf2x6_t test_vluxseg6ei8_v_u16mf2x6_tu_ntl_S1(vuint16mf2x6_t maskedoff_tuple, const uint16_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16m1x6_t test_vluxseg6ei8_v_u16m1x6_tu_ntl_S1(vuint16m1x6_t maskedoff_tuple, const uint16_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32mf2x6_t test_vluxseg6ei8_v_u32mf2x6_tu_ntl_S1(vuint32mf2x6_t maskedoff_tuple, const uint32_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32m1x6_t test_vluxseg6ei8_v_u32m1x6_tu_ntl_S1(vuint32m1x6_t maskedoff_tuple, const uint32_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint64m1x6_t test_vluxseg6ei8_v_u64m1x6_tu_ntl_S1(vuint64m1x6_t maskedoff_tuple, const uint64_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16mf4x6_t test_vluxseg6ei8_v_f16mf4x6_tum_ntl_S1(vbool64_t mask, vfloat16mf4x6_t maskedoff_tuple, const _Float16 *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16mf2x6_t test_vluxseg6ei8_v_f16mf2x6_tum_ntl_S1(vbool32_t mask, vfloat16mf2x6_t maskedoff_tuple, const _Float16 *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16m1x6_t test_vluxseg6ei8_v_f16m1x6_tum_ntl_S1(vbool16_t mask, vfloat16m1x6_t maskedoff_tuple, const _Float16 *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32mf2x6_t test_vluxseg6ei8_v_f32mf2x6_tum_ntl_S1(vbool64_t mask, vfloat32mf2x6_t maskedoff_tuple, const float *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32m1x6_t test_vluxseg6ei8_v_f32m1x6_tum_ntl_S1(vbool32_t mask, vfloat32m1x6_t maskedoff_tuple, const float *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat64m1x6_t test_vluxseg6ei8_v_f64m1x6_tum_ntl_S1(vbool64_t mask, vfloat64m1x6_t maskedoff_tuple, const double *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf8x6_t test_vluxseg6ei8_v_i8mf8x6_tum_ntl_S1(vbool64_t mask, vint8mf8x6_t maskedoff_tuple, const int8_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf4x6_t test_vluxseg6ei8_v_i8mf4x6_tum_ntl_S1(vbool32_t mask, vint8mf4x6_t maskedoff_tuple, const int8_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf2x6_t test_vluxseg6ei8_v_i8mf2x6_tum_ntl_S1(vbool16_t mask, vint8mf2x6_t maskedoff_tuple, const int8_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8m1x6_t test_vluxseg6ei8_v_i8m1x6_tum_ntl_S1(vbool8_t mask, vint8m1x6_t maskedoff_tuple, const int8_t *base, vuint8m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16mf4x6_t test_vluxseg6ei8_v_i16mf4x6_tum_ntl_S1(vbool64_t mask, vint16mf4x6_t maskedoff_tuple, const int16_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16mf2x6_t test_vluxseg6ei8_v_i16mf2x6_tum_ntl_S1(vbool32_t mask, vint16mf2x6_t maskedoff_tuple, const int16_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16m1x6_t test_vluxseg6ei8_v_i16m1x6_tum_ntl_S1(vbool16_t mask, vint16m1x6_t maskedoff_tuple, const int16_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32mf2x6_t test_vluxseg6ei8_v_i32mf2x6_tum_ntl_S1(vbool64_t mask, vint32mf2x6_t maskedoff_tuple, const int32_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32m1x6_t test_vluxseg6ei8_v_i32m1x6_tum_ntl_S1(vbool32_t mask, vint32m1x6_t maskedoff_tuple, const int32_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint64m1x6_t test_vluxseg6ei8_v_i64m1x6_tum_ntl_S1(vbool64_t mask, vint64m1x6_t maskedoff_tuple, const int64_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf8x6_t test_vluxseg6ei8_v_u8mf8x6_tum_ntl_S1(vbool64_t mask, vuint8mf8x6_t maskedoff_tuple, const uint8_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf4x6_t test_vluxseg6ei8_v_u8mf4x6_tum_ntl_S1(vbool32_t mask, vuint8mf4x6_t maskedoff_tuple, const uint8_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf2x6_t test_vluxseg6ei8_v_u8mf2x6_tum_ntl_S1(vbool16_t mask, vuint8mf2x6_t maskedoff_tuple, const uint8_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8m1x6_t test_vluxseg6ei8_v_u8m1x6_tum_ntl_S1(vbool8_t mask, vuint8m1x6_t maskedoff_tuple, const uint8_t *base, vuint8m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16mf4x6_t test_vluxseg6ei8_v_u16mf4x6_tum_ntl_S1(vbool64_t mask, vuint16mf4x6_t maskedoff_tuple, const uint16_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16mf2x6_t test_vluxseg6ei8_v_u16mf2x6_tum_ntl_S1(vbool32_t mask, vuint16mf2x6_t maskedoff_tuple, const uint16_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16m1x6_t test_vluxseg6ei8_v_u16m1x6_tum_ntl_S1(vbool16_t mask, vuint16m1x6_t maskedoff_tuple, const uint16_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32mf2x6_t test_vluxseg6ei8_v_u32mf2x6_tum_ntl_S1(vbool64_t mask, vuint32mf2x6_t maskedoff_tuple, const uint32_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32m1x6_t test_vluxseg6ei8_v_u32m1x6_tum_ntl_S1(vbool32_t mask, vuint32m1x6_t maskedoff_tuple, const uint32_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint64m1x6_t test_vluxseg6ei8_v_u64m1x6_tum_ntl_S1(vbool64_t mask, vuint64m1x6_t maskedoff_tuple, const uint64_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16mf4x6_t test_vluxseg6ei8_v_f16mf4x6_tumu_ntl_S1(vbool64_t mask, vfloat16mf4x6_t maskedoff_tuple, const _Float16 *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16mf2x6_t test_vluxseg6ei8_v_f16mf2x6_tumu_ntl_S1(vbool32_t mask, vfloat16mf2x6_t maskedoff_tuple, const _Float16 *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16m1x6_t test_vluxseg6ei8_v_f16m1x6_tumu_ntl_S1(vbool16_t mask, vfloat16m1x6_t maskedoff_tuple, const _Float16 *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32mf2x6_t test_vluxseg6ei8_v_f32mf2x6_tumu_ntl_S1(vbool64_t mask, vfloat32mf2x6_t maskedoff_tuple, const float *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32m1x6_t test_vluxseg6ei8_v_f32m1x6_tumu_ntl_S1(vbool32_t mask, vfloat32m1x6_t maskedoff_tuple, const float *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat64m1x6_t test_vluxseg6ei8_v_f64m1x6_tumu_ntl_S1(vbool64_t mask, vfloat64m1x6_t maskedoff_tuple, const double *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf8x6_t test_vluxseg6ei8_v_i8mf8x6_tumu_ntl_S1(vbool64_t mask, vint8mf8x6_t maskedoff_tuple, const int8_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf4x6_t test_vluxseg6ei8_v_i8mf4x6_tumu_ntl_S1(vbool32_t mask, vint8mf4x6_t maskedoff_tuple, const int8_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf2x6_t test_vluxseg6ei8_v_i8mf2x6_tumu_ntl_S1(vbool16_t mask, vint8mf2x6_t maskedoff_tuple, const int8_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8m1x6_t test_vluxseg6ei8_v_i8m1x6_tumu_ntl_S1(vbool8_t mask, vint8m1x6_t maskedoff_tuple, const int8_t *base, vuint8m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16mf4x6_t test_vluxseg6ei8_v_i16mf4x6_tumu_ntl_S1(vbool64_t mask, vint16mf4x6_t maskedoff_tuple, const int16_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16mf2x6_t test_vluxseg6ei8_v_i16mf2x6_tumu_ntl_S1(vbool32_t mask, vint16mf2x6_t maskedoff_tuple, const int16_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16m1x6_t test_vluxseg6ei8_v_i16m1x6_tumu_ntl_S1(vbool16_t mask, vint16m1x6_t maskedoff_tuple, const int16_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32mf2x6_t test_vluxseg6ei8_v_i32mf2x6_tumu_ntl_S1(vbool64_t mask, vint32mf2x6_t maskedoff_tuple, const int32_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32m1x6_t test_vluxseg6ei8_v_i32m1x6_tumu_ntl_S1(vbool32_t mask, vint32m1x6_t maskedoff_tuple, const int32_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint64m1x6_t test_vluxseg6ei8_v_i64m1x6_tumu_ntl_S1(vbool64_t mask, vint64m1x6_t maskedoff_tuple, const int64_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf8x6_t test_vluxseg6ei8_v_u8mf8x6_tumu_ntl_S1(vbool64_t mask, vuint8mf8x6_t maskedoff_tuple, const uint8_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf4x6_t test_vluxseg6ei8_v_u8mf4x6_tumu_ntl_S1(vbool32_t mask, vuint8mf4x6_t maskedoff_tuple, const uint8_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf2x6_t test_vluxseg6ei8_v_u8mf2x6_tumu_ntl_S1(vbool16_t mask, vuint8mf2x6_t maskedoff_tuple, const uint8_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8m1x6_t test_vluxseg6ei8_v_u8m1x6_tumu_ntl_S1(vbool8_t mask, vuint8m1x6_t maskedoff_tuple, const uint8_t *base, vuint8m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16mf4x6_t test_vluxseg6ei8_v_u16mf4x6_tumu_ntl_S1(vbool64_t mask, vuint16mf4x6_t maskedoff_tuple, const uint16_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16mf2x6_t test_vluxseg6ei8_v_u16mf2x6_tumu_ntl_S1(vbool32_t mask, vuint16mf2x6_t maskedoff_tuple, const uint16_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16m1x6_t test_vluxseg6ei8_v_u16m1x6_tumu_ntl_S1(vbool16_t mask, vuint16m1x6_t maskedoff_tuple, const uint16_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32mf2x6_t test_vluxseg6ei8_v_u32mf2x6_tumu_ntl_S1(vbool64_t mask, vuint32mf2x6_t maskedoff_tuple, const uint32_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32m1x6_t test_vluxseg6ei8_v_u32m1x6_tumu_ntl_S1(vbool32_t mask, vuint32m1x6_t maskedoff_tuple, const uint32_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint64m1x6_t test_vluxseg6ei8_v_u64m1x6_tumu_ntl_S1(vbool64_t mask, vuint64m1x6_t maskedoff_tuple, const uint64_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16mf4x6_t test_vluxseg6ei8_v_f16mf4x6_mu_ntl_S1(vbool64_t mask, vfloat16mf4x6_t maskedoff_tuple, const _Float16 *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16mf2x6_t test_vluxseg6ei8_v_f16mf2x6_mu_ntl_S1(vbool32_t mask, vfloat16mf2x6_t maskedoff_tuple, const _Float16 *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16m1x6_t test_vluxseg6ei8_v_f16m1x6_mu_ntl_S1(vbool16_t mask, vfloat16m1x6_t maskedoff_tuple, const _Float16 *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32mf2x6_t test_vluxseg6ei8_v_f32mf2x6_mu_ntl_S1(vbool64_t mask, vfloat32mf2x6_t maskedoff_tuple, const float *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32m1x6_t test_vluxseg6ei8_v_f32m1x6_mu_ntl_S1(vbool32_t mask, vfloat32m1x6_t maskedoff_tuple, const float *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat64m1x6_t test_vluxseg6ei8_v_f64m1x6_mu_ntl_S1(vbool64_t mask, vfloat64m1x6_t maskedoff_tuple, const double *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf8x6_t test_vluxseg6ei8_v_i8mf8x6_mu_ntl_S1(vbool64_t mask, vint8mf8x6_t maskedoff_tuple, const int8_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf4x6_t test_vluxseg6ei8_v_i8mf4x6_mu_ntl_S1(vbool32_t mask, vint8mf4x6_t maskedoff_tuple, const int8_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf2x6_t test_vluxseg6ei8_v_i8mf2x6_mu_ntl_S1(vbool16_t mask, vint8mf2x6_t maskedoff_tuple, const int8_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8m1x6_t test_vluxseg6ei8_v_i8m1x6_mu_ntl_S1(vbool8_t mask, vint8m1x6_t maskedoff_tuple, const int8_t *base, vuint8m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16mf4x6_t test_vluxseg6ei8_v_i16mf4x6_mu_ntl_S1(vbool64_t mask, vint16mf4x6_t maskedoff_tuple, const int16_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16mf2x6_t test_vluxseg6ei8_v_i16mf2x6_mu_ntl_S1(vbool32_t mask, vint16mf2x6_t maskedoff_tuple, const int16_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16m1x6_t test_vluxseg6ei8_v_i16m1x6_mu_ntl_S1(vbool16_t mask, vint16m1x6_t maskedoff_tuple, const int16_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32mf2x6_t test_vluxseg6ei8_v_i32mf2x6_mu_ntl_S1(vbool64_t mask, vint32mf2x6_t maskedoff_tuple, const int32_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32m1x6_t test_vluxseg6ei8_v_i32m1x6_mu_ntl_S1(vbool32_t mask, vint32m1x6_t maskedoff_tuple, const int32_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint64m1x6_t test_vluxseg6ei8_v_i64m1x6_mu_ntl_S1(vbool64_t mask, vint64m1x6_t maskedoff_tuple, const int64_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf8x6_t test_vluxseg6ei8_v_u8mf8x6_mu_ntl_S1(vbool64_t mask, vuint8mf8x6_t maskedoff_tuple, const uint8_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf4x6_t test_vluxseg6ei8_v_u8mf4x6_mu_ntl_S1(vbool32_t mask, vuint8mf4x6_t maskedoff_tuple, const uint8_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf2x6_t test_vluxseg6ei8_v_u8mf2x6_mu_ntl_S1(vbool16_t mask, vuint8mf2x6_t maskedoff_tuple, const uint8_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8m1x6_t test_vluxseg6ei8_v_u8m1x6_mu_ntl_S1(vbool8_t mask, vuint8m1x6_t maskedoff_tuple, const uint8_t *base, vuint8m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16mf4x6_t test_vluxseg6ei8_v_u16mf4x6_mu_ntl_S1(vbool64_t mask, vuint16mf4x6_t maskedoff_tuple, const uint16_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16mf2x6_t test_vluxseg6ei8_v_u16mf2x6_mu_ntl_S1(vbool32_t mask, vuint16mf2x6_t maskedoff_tuple, const uint16_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16m1x6_t test_vluxseg6ei8_v_u16m1x6_mu_ntl_S1(vbool16_t mask, vuint16m1x6_t maskedoff_tuple, const uint16_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32mf2x6_t test_vluxseg6ei8_v_u32mf2x6_mu_ntl_S1(vbool64_t mask, vuint32mf2x6_t maskedoff_tuple, const uint32_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32m1x6_t test_vluxseg6ei8_v_u32m1x6_mu_ntl_S1(vbool32_t mask, vuint32m1x6_t maskedoff_tuple, const uint32_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint64m1x6_t test_vluxseg6ei8_v_u64m1x6_mu_ntl_S1(vbool64_t mask, vuint64m1x6_t maskedoff_tuple, const uint64_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg6ei8_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

