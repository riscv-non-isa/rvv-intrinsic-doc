#include <stdint.h>
#include "rvv-v0p10-compatible-headers/overloaded-non-policy.h"
#include "rvv-v0p10-compatible-headers/overloaded-policy.h"
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint16mf4_t test_vfcvt_x_f_v_i16mf4_tu(vint16mf4_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return vfcvt_x_tu(maskedoff, src, vl);
}

vint16mf4_t test_vfcvt_rtz_x_f_v_i16mf4_tu(vint16mf4_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return vfcvt_rtz_x_tu(maskedoff, src, vl);
}

vint16mf2_t test_vfcvt_x_f_v_i16mf2_tu(vint16mf2_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return vfcvt_x_tu(maskedoff, src, vl);
}

vint16mf2_t test_vfcvt_rtz_x_f_v_i16mf2_tu(vint16mf2_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return vfcvt_rtz_x_tu(maskedoff, src, vl);
}

vint16m1_t test_vfcvt_x_f_v_i16m1_tu(vint16m1_t maskedoff, vfloat16m1_t src, size_t vl) {
  return vfcvt_x_tu(maskedoff, src, vl);
}

vint16m1_t test_vfcvt_rtz_x_f_v_i16m1_tu(vint16m1_t maskedoff, vfloat16m1_t src, size_t vl) {
  return vfcvt_rtz_x_tu(maskedoff, src, vl);
}

vint16m2_t test_vfcvt_x_f_v_i16m2_tu(vint16m2_t maskedoff, vfloat16m2_t src, size_t vl) {
  return vfcvt_x_tu(maskedoff, src, vl);
}

vint16m2_t test_vfcvt_rtz_x_f_v_i16m2_tu(vint16m2_t maskedoff, vfloat16m2_t src, size_t vl) {
  return vfcvt_rtz_x_tu(maskedoff, src, vl);
}

vint16m4_t test_vfcvt_x_f_v_i16m4_tu(vint16m4_t maskedoff, vfloat16m4_t src, size_t vl) {
  return vfcvt_x_tu(maskedoff, src, vl);
}

vint16m4_t test_vfcvt_rtz_x_f_v_i16m4_tu(vint16m4_t maskedoff, vfloat16m4_t src, size_t vl) {
  return vfcvt_rtz_x_tu(maskedoff, src, vl);
}

vint16m8_t test_vfcvt_x_f_v_i16m8_tu(vint16m8_t maskedoff, vfloat16m8_t src, size_t vl) {
  return vfcvt_x_tu(maskedoff, src, vl);
}

vint16m8_t test_vfcvt_rtz_x_f_v_i16m8_tu(vint16m8_t maskedoff, vfloat16m8_t src, size_t vl) {
  return vfcvt_rtz_x_tu(maskedoff, src, vl);
}

vuint16mf4_t test_vfcvt_xu_f_v_u16mf4_tu(vuint16mf4_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return vfcvt_xu_tu(maskedoff, src, vl);
}

vuint16mf4_t test_vfcvt_rtz_xu_f_v_u16mf4_tu(vuint16mf4_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return vfcvt_rtz_xu_tu(maskedoff, src, vl);
}

vuint16mf2_t test_vfcvt_xu_f_v_u16mf2_tu(vuint16mf2_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return vfcvt_xu_tu(maskedoff, src, vl);
}

vuint16mf2_t test_vfcvt_rtz_xu_f_v_u16mf2_tu(vuint16mf2_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return vfcvt_rtz_xu_tu(maskedoff, src, vl);
}

vuint16m1_t test_vfcvt_xu_f_v_u16m1_tu(vuint16m1_t maskedoff, vfloat16m1_t src, size_t vl) {
  return vfcvt_xu_tu(maskedoff, src, vl);
}

vuint16m1_t test_vfcvt_rtz_xu_f_v_u16m1_tu(vuint16m1_t maskedoff, vfloat16m1_t src, size_t vl) {
  return vfcvt_rtz_xu_tu(maskedoff, src, vl);
}

vuint16m2_t test_vfcvt_xu_f_v_u16m2_tu(vuint16m2_t maskedoff, vfloat16m2_t src, size_t vl) {
  return vfcvt_xu_tu(maskedoff, src, vl);
}

vuint16m2_t test_vfcvt_rtz_xu_f_v_u16m2_tu(vuint16m2_t maskedoff, vfloat16m2_t src, size_t vl) {
  return vfcvt_rtz_xu_tu(maskedoff, src, vl);
}

vuint16m4_t test_vfcvt_xu_f_v_u16m4_tu(vuint16m4_t maskedoff, vfloat16m4_t src, size_t vl) {
  return vfcvt_xu_tu(maskedoff, src, vl);
}

vuint16m4_t test_vfcvt_rtz_xu_f_v_u16m4_tu(vuint16m4_t maskedoff, vfloat16m4_t src, size_t vl) {
  return vfcvt_rtz_xu_tu(maskedoff, src, vl);
}

vuint16m8_t test_vfcvt_xu_f_v_u16m8_tu(vuint16m8_t maskedoff, vfloat16m8_t src, size_t vl) {
  return vfcvt_xu_tu(maskedoff, src, vl);
}

vuint16m8_t test_vfcvt_rtz_xu_f_v_u16m8_tu(vuint16m8_t maskedoff, vfloat16m8_t src, size_t vl) {
  return vfcvt_rtz_xu_tu(maskedoff, src, vl);
}

vfloat16mf4_t test_vfcvt_f_x_v_f16mf4_tu(vfloat16mf4_t maskedoff, vint16mf4_t src, size_t vl) {
  return vfcvt_f_tu(maskedoff, src, vl);
}

vfloat16mf2_t test_vfcvt_f_x_v_f16mf2_tu(vfloat16mf2_t maskedoff, vint16mf2_t src, size_t vl) {
  return vfcvt_f_tu(maskedoff, src, vl);
}

vfloat16m1_t test_vfcvt_f_x_v_f16m1_tu(vfloat16m1_t maskedoff, vint16m1_t src, size_t vl) {
  return vfcvt_f_tu(maskedoff, src, vl);
}

vfloat16m2_t test_vfcvt_f_x_v_f16m2_tu(vfloat16m2_t maskedoff, vint16m2_t src, size_t vl) {
  return vfcvt_f_tu(maskedoff, src, vl);
}

vfloat16m4_t test_vfcvt_f_x_v_f16m4_tu(vfloat16m4_t maskedoff, vint16m4_t src, size_t vl) {
  return vfcvt_f_tu(maskedoff, src, vl);
}

vfloat16m8_t test_vfcvt_f_x_v_f16m8_tu(vfloat16m8_t maskedoff, vint16m8_t src, size_t vl) {
  return vfcvt_f_tu(maskedoff, src, vl);
}

vfloat16mf4_t test_vfcvt_f_xu_v_f16mf4_tu(vfloat16mf4_t maskedoff, vuint16mf4_t src, size_t vl) {
  return vfcvt_f_tu(maskedoff, src, vl);
}

vfloat16mf2_t test_vfcvt_f_xu_v_f16mf2_tu(vfloat16mf2_t maskedoff, vuint16mf2_t src, size_t vl) {
  return vfcvt_f_tu(maskedoff, src, vl);
}

vfloat16m1_t test_vfcvt_f_xu_v_f16m1_tu(vfloat16m1_t maskedoff, vuint16m1_t src, size_t vl) {
  return vfcvt_f_tu(maskedoff, src, vl);
}

vfloat16m2_t test_vfcvt_f_xu_v_f16m2_tu(vfloat16m2_t maskedoff, vuint16m2_t src, size_t vl) {
  return vfcvt_f_tu(maskedoff, src, vl);
}

vfloat16m4_t test_vfcvt_f_xu_v_f16m4_tu(vfloat16m4_t maskedoff, vuint16m4_t src, size_t vl) {
  return vfcvt_f_tu(maskedoff, src, vl);
}

vfloat16m8_t test_vfcvt_f_xu_v_f16m8_tu(vfloat16m8_t maskedoff, vuint16m8_t src, size_t vl) {
  return vfcvt_f_tu(maskedoff, src, vl);
}

vint32mf2_t test_vfcvt_x_f_v_i32mf2_tu(vint32mf2_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return vfcvt_x_tu(maskedoff, src, vl);
}

vint32mf2_t test_vfcvt_rtz_x_f_v_i32mf2_tu(vint32mf2_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return vfcvt_rtz_x_tu(maskedoff, src, vl);
}

vint32m1_t test_vfcvt_x_f_v_i32m1_tu(vint32m1_t maskedoff, vfloat32m1_t src, size_t vl) {
  return vfcvt_x_tu(maskedoff, src, vl);
}

vint32m1_t test_vfcvt_rtz_x_f_v_i32m1_tu(vint32m1_t maskedoff, vfloat32m1_t src, size_t vl) {
  return vfcvt_rtz_x_tu(maskedoff, src, vl);
}

vint32m2_t test_vfcvt_x_f_v_i32m2_tu(vint32m2_t maskedoff, vfloat32m2_t src, size_t vl) {
  return vfcvt_x_tu(maskedoff, src, vl);
}

vint32m2_t test_vfcvt_rtz_x_f_v_i32m2_tu(vint32m2_t maskedoff, vfloat32m2_t src, size_t vl) {
  return vfcvt_rtz_x_tu(maskedoff, src, vl);
}

vint32m4_t test_vfcvt_x_f_v_i32m4_tu(vint32m4_t maskedoff, vfloat32m4_t src, size_t vl) {
  return vfcvt_x_tu(maskedoff, src, vl);
}

vint32m4_t test_vfcvt_rtz_x_f_v_i32m4_tu(vint32m4_t maskedoff, vfloat32m4_t src, size_t vl) {
  return vfcvt_rtz_x_tu(maskedoff, src, vl);
}

vint32m8_t test_vfcvt_x_f_v_i32m8_tu(vint32m8_t maskedoff, vfloat32m8_t src, size_t vl) {
  return vfcvt_x_tu(maskedoff, src, vl);
}

vint32m8_t test_vfcvt_rtz_x_f_v_i32m8_tu(vint32m8_t maskedoff, vfloat32m8_t src, size_t vl) {
  return vfcvt_rtz_x_tu(maskedoff, src, vl);
}

vuint32mf2_t test_vfcvt_xu_f_v_u32mf2_tu(vuint32mf2_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return vfcvt_xu_tu(maskedoff, src, vl);
}

vuint32mf2_t test_vfcvt_rtz_xu_f_v_u32mf2_tu(vuint32mf2_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return vfcvt_rtz_xu_tu(maskedoff, src, vl);
}

vuint32m1_t test_vfcvt_xu_f_v_u32m1_tu(vuint32m1_t maskedoff, vfloat32m1_t src, size_t vl) {
  return vfcvt_xu_tu(maskedoff, src, vl);
}

vuint32m1_t test_vfcvt_rtz_xu_f_v_u32m1_tu(vuint32m1_t maskedoff, vfloat32m1_t src, size_t vl) {
  return vfcvt_rtz_xu_tu(maskedoff, src, vl);
}

vuint32m2_t test_vfcvt_xu_f_v_u32m2_tu(vuint32m2_t maskedoff, vfloat32m2_t src, size_t vl) {
  return vfcvt_xu_tu(maskedoff, src, vl);
}

vuint32m2_t test_vfcvt_rtz_xu_f_v_u32m2_tu(vuint32m2_t maskedoff, vfloat32m2_t src, size_t vl) {
  return vfcvt_rtz_xu_tu(maskedoff, src, vl);
}

vuint32m4_t test_vfcvt_xu_f_v_u32m4_tu(vuint32m4_t maskedoff, vfloat32m4_t src, size_t vl) {
  return vfcvt_xu_tu(maskedoff, src, vl);
}

vuint32m4_t test_vfcvt_rtz_xu_f_v_u32m4_tu(vuint32m4_t maskedoff, vfloat32m4_t src, size_t vl) {
  return vfcvt_rtz_xu_tu(maskedoff, src, vl);
}

vuint32m8_t test_vfcvt_xu_f_v_u32m8_tu(vuint32m8_t maskedoff, vfloat32m8_t src, size_t vl) {
  return vfcvt_xu_tu(maskedoff, src, vl);
}

vuint32m8_t test_vfcvt_rtz_xu_f_v_u32m8_tu(vuint32m8_t maskedoff, vfloat32m8_t src, size_t vl) {
  return vfcvt_rtz_xu_tu(maskedoff, src, vl);
}

vfloat32mf2_t test_vfcvt_f_x_v_f32mf2_tu(vfloat32mf2_t maskedoff, vint32mf2_t src, size_t vl) {
  return vfcvt_f_tu(maskedoff, src, vl);
}

vfloat32m1_t test_vfcvt_f_x_v_f32m1_tu(vfloat32m1_t maskedoff, vint32m1_t src, size_t vl) {
  return vfcvt_f_tu(maskedoff, src, vl);
}

vfloat32m2_t test_vfcvt_f_x_v_f32m2_tu(vfloat32m2_t maskedoff, vint32m2_t src, size_t vl) {
  return vfcvt_f_tu(maskedoff, src, vl);
}

vfloat32m4_t test_vfcvt_f_x_v_f32m4_tu(vfloat32m4_t maskedoff, vint32m4_t src, size_t vl) {
  return vfcvt_f_tu(maskedoff, src, vl);
}

vfloat32m8_t test_vfcvt_f_x_v_f32m8_tu(vfloat32m8_t maskedoff, vint32m8_t src, size_t vl) {
  return vfcvt_f_tu(maskedoff, src, vl);
}

vfloat32mf2_t test_vfcvt_f_xu_v_f32mf2_tu(vfloat32mf2_t maskedoff, vuint32mf2_t src, size_t vl) {
  return vfcvt_f_tu(maskedoff, src, vl);
}

vfloat32m1_t test_vfcvt_f_xu_v_f32m1_tu(vfloat32m1_t maskedoff, vuint32m1_t src, size_t vl) {
  return vfcvt_f_tu(maskedoff, src, vl);
}

vfloat32m2_t test_vfcvt_f_xu_v_f32m2_tu(vfloat32m2_t maskedoff, vuint32m2_t src, size_t vl) {
  return vfcvt_f_tu(maskedoff, src, vl);
}

vfloat32m4_t test_vfcvt_f_xu_v_f32m4_tu(vfloat32m4_t maskedoff, vuint32m4_t src, size_t vl) {
  return vfcvt_f_tu(maskedoff, src, vl);
}

vfloat32m8_t test_vfcvt_f_xu_v_f32m8_tu(vfloat32m8_t maskedoff, vuint32m8_t src, size_t vl) {
  return vfcvt_f_tu(maskedoff, src, vl);
}

vint64m1_t test_vfcvt_x_f_v_i64m1_tu(vint64m1_t maskedoff, vfloat64m1_t src, size_t vl) {
  return vfcvt_x_tu(maskedoff, src, vl);
}

vint64m1_t test_vfcvt_rtz_x_f_v_i64m1_tu(vint64m1_t maskedoff, vfloat64m1_t src, size_t vl) {
  return vfcvt_rtz_x_tu(maskedoff, src, vl);
}

vint64m2_t test_vfcvt_x_f_v_i64m2_tu(vint64m2_t maskedoff, vfloat64m2_t src, size_t vl) {
  return vfcvt_x_tu(maskedoff, src, vl);
}

vint64m2_t test_vfcvt_rtz_x_f_v_i64m2_tu(vint64m2_t maskedoff, vfloat64m2_t src, size_t vl) {
  return vfcvt_rtz_x_tu(maskedoff, src, vl);
}

vint64m4_t test_vfcvt_x_f_v_i64m4_tu(vint64m4_t maskedoff, vfloat64m4_t src, size_t vl) {
  return vfcvt_x_tu(maskedoff, src, vl);
}

vint64m4_t test_vfcvt_rtz_x_f_v_i64m4_tu(vint64m4_t maskedoff, vfloat64m4_t src, size_t vl) {
  return vfcvt_rtz_x_tu(maskedoff, src, vl);
}

vint64m8_t test_vfcvt_x_f_v_i64m8_tu(vint64m8_t maskedoff, vfloat64m8_t src, size_t vl) {
  return vfcvt_x_tu(maskedoff, src, vl);
}

vint64m8_t test_vfcvt_rtz_x_f_v_i64m8_tu(vint64m8_t maskedoff, vfloat64m8_t src, size_t vl) {
  return vfcvt_rtz_x_tu(maskedoff, src, vl);
}

vuint64m1_t test_vfcvt_xu_f_v_u64m1_tu(vuint64m1_t maskedoff, vfloat64m1_t src, size_t vl) {
  return vfcvt_xu_tu(maskedoff, src, vl);
}

vuint64m1_t test_vfcvt_rtz_xu_f_v_u64m1_tu(vuint64m1_t maskedoff, vfloat64m1_t src, size_t vl) {
  return vfcvt_rtz_xu_tu(maskedoff, src, vl);
}

vuint64m2_t test_vfcvt_xu_f_v_u64m2_tu(vuint64m2_t maskedoff, vfloat64m2_t src, size_t vl) {
  return vfcvt_xu_tu(maskedoff, src, vl);
}

vuint64m2_t test_vfcvt_rtz_xu_f_v_u64m2_tu(vuint64m2_t maskedoff, vfloat64m2_t src, size_t vl) {
  return vfcvt_rtz_xu_tu(maskedoff, src, vl);
}

vuint64m4_t test_vfcvt_xu_f_v_u64m4_tu(vuint64m4_t maskedoff, vfloat64m4_t src, size_t vl) {
  return vfcvt_xu_tu(maskedoff, src, vl);
}

vuint64m4_t test_vfcvt_rtz_xu_f_v_u64m4_tu(vuint64m4_t maskedoff, vfloat64m4_t src, size_t vl) {
  return vfcvt_rtz_xu_tu(maskedoff, src, vl);
}

vuint64m8_t test_vfcvt_xu_f_v_u64m8_tu(vuint64m8_t maskedoff, vfloat64m8_t src, size_t vl) {
  return vfcvt_xu_tu(maskedoff, src, vl);
}

vuint64m8_t test_vfcvt_rtz_xu_f_v_u64m8_tu(vuint64m8_t maskedoff, vfloat64m8_t src, size_t vl) {
  return vfcvt_rtz_xu_tu(maskedoff, src, vl);
}

vfloat64m1_t test_vfcvt_f_x_v_f64m1_tu(vfloat64m1_t maskedoff, vint64m1_t src, size_t vl) {
  return vfcvt_f_tu(maskedoff, src, vl);
}

vfloat64m2_t test_vfcvt_f_x_v_f64m2_tu(vfloat64m2_t maskedoff, vint64m2_t src, size_t vl) {
  return vfcvt_f_tu(maskedoff, src, vl);
}

vfloat64m4_t test_vfcvt_f_x_v_f64m4_tu(vfloat64m4_t maskedoff, vint64m4_t src, size_t vl) {
  return vfcvt_f_tu(maskedoff, src, vl);
}

vfloat64m8_t test_vfcvt_f_x_v_f64m8_tu(vfloat64m8_t maskedoff, vint64m8_t src, size_t vl) {
  return vfcvt_f_tu(maskedoff, src, vl);
}

vfloat64m1_t test_vfcvt_f_xu_v_f64m1_tu(vfloat64m1_t maskedoff, vuint64m1_t src, size_t vl) {
  return vfcvt_f_tu(maskedoff, src, vl);
}

vfloat64m2_t test_vfcvt_f_xu_v_f64m2_tu(vfloat64m2_t maskedoff, vuint64m2_t src, size_t vl) {
  return vfcvt_f_tu(maskedoff, src, vl);
}

vfloat64m4_t test_vfcvt_f_xu_v_f64m4_tu(vfloat64m4_t maskedoff, vuint64m4_t src, size_t vl) {
  return vfcvt_f_tu(maskedoff, src, vl);
}

vfloat64m8_t test_vfcvt_f_xu_v_f64m8_tu(vfloat64m8_t maskedoff, vuint64m8_t src, size_t vl) {
  return vfcvt_f_tu(maskedoff, src, vl);
}

vint16mf4_t test_vfcvt_x_f_v_i16mf4_ta(vfloat16mf4_t src, size_t vl) {
  return vfcvt_x_ta(src, vl);
}

vint16mf4_t test_vfcvt_rtz_x_f_v_i16mf4_ta(vfloat16mf4_t src, size_t vl) {
  return vfcvt_rtz_x_ta(src, vl);
}

vint16mf2_t test_vfcvt_x_f_v_i16mf2_ta(vfloat16mf2_t src, size_t vl) {
  return vfcvt_x_ta(src, vl);
}

vint16mf2_t test_vfcvt_rtz_x_f_v_i16mf2_ta(vfloat16mf2_t src, size_t vl) {
  return vfcvt_rtz_x_ta(src, vl);
}

vint16m1_t test_vfcvt_x_f_v_i16m1_ta(vfloat16m1_t src, size_t vl) {
  return vfcvt_x_ta(src, vl);
}

vint16m1_t test_vfcvt_rtz_x_f_v_i16m1_ta(vfloat16m1_t src, size_t vl) {
  return vfcvt_rtz_x_ta(src, vl);
}

vint16m2_t test_vfcvt_x_f_v_i16m2_ta(vfloat16m2_t src, size_t vl) {
  return vfcvt_x_ta(src, vl);
}

vint16m2_t test_vfcvt_rtz_x_f_v_i16m2_ta(vfloat16m2_t src, size_t vl) {
  return vfcvt_rtz_x_ta(src, vl);
}

vint16m4_t test_vfcvt_x_f_v_i16m4_ta(vfloat16m4_t src, size_t vl) {
  return vfcvt_x_ta(src, vl);
}

vint16m4_t test_vfcvt_rtz_x_f_v_i16m4_ta(vfloat16m4_t src, size_t vl) {
  return vfcvt_rtz_x_ta(src, vl);
}

vint16m8_t test_vfcvt_x_f_v_i16m8_ta(vfloat16m8_t src, size_t vl) {
  return vfcvt_x_ta(src, vl);
}

vint16m8_t test_vfcvt_rtz_x_f_v_i16m8_ta(vfloat16m8_t src, size_t vl) {
  return vfcvt_rtz_x_ta(src, vl);
}

vuint16mf4_t test_vfcvt_xu_f_v_u16mf4_ta(vfloat16mf4_t src, size_t vl) {
  return vfcvt_xu_ta(src, vl);
}

vuint16mf4_t test_vfcvt_rtz_xu_f_v_u16mf4_ta(vfloat16mf4_t src, size_t vl) {
  return vfcvt_rtz_xu_ta(src, vl);
}

vuint16mf2_t test_vfcvt_xu_f_v_u16mf2_ta(vfloat16mf2_t src, size_t vl) {
  return vfcvt_xu_ta(src, vl);
}

vuint16mf2_t test_vfcvt_rtz_xu_f_v_u16mf2_ta(vfloat16mf2_t src, size_t vl) {
  return vfcvt_rtz_xu_ta(src, vl);
}

vuint16m1_t test_vfcvt_xu_f_v_u16m1_ta(vfloat16m1_t src, size_t vl) {
  return vfcvt_xu_ta(src, vl);
}

vuint16m1_t test_vfcvt_rtz_xu_f_v_u16m1_ta(vfloat16m1_t src, size_t vl) {
  return vfcvt_rtz_xu_ta(src, vl);
}

vuint16m2_t test_vfcvt_xu_f_v_u16m2_ta(vfloat16m2_t src, size_t vl) {
  return vfcvt_xu_ta(src, vl);
}

vuint16m2_t test_vfcvt_rtz_xu_f_v_u16m2_ta(vfloat16m2_t src, size_t vl) {
  return vfcvt_rtz_xu_ta(src, vl);
}

vuint16m4_t test_vfcvt_xu_f_v_u16m4_ta(vfloat16m4_t src, size_t vl) {
  return vfcvt_xu_ta(src, vl);
}

vuint16m4_t test_vfcvt_rtz_xu_f_v_u16m4_ta(vfloat16m4_t src, size_t vl) {
  return vfcvt_rtz_xu_ta(src, vl);
}

vuint16m8_t test_vfcvt_xu_f_v_u16m8_ta(vfloat16m8_t src, size_t vl) {
  return vfcvt_xu_ta(src, vl);
}

vuint16m8_t test_vfcvt_rtz_xu_f_v_u16m8_ta(vfloat16m8_t src, size_t vl) {
  return vfcvt_rtz_xu_ta(src, vl);
}

vfloat16mf4_t test_vfcvt_f_x_v_f16mf4_ta(vint16mf4_t src, size_t vl) {
  return vfcvt_f_ta(src, vl);
}

vfloat16mf2_t test_vfcvt_f_x_v_f16mf2_ta(vint16mf2_t src, size_t vl) {
  return vfcvt_f_ta(src, vl);
}

vfloat16m1_t test_vfcvt_f_x_v_f16m1_ta(vint16m1_t src, size_t vl) {
  return vfcvt_f_ta(src, vl);
}

vfloat16m2_t test_vfcvt_f_x_v_f16m2_ta(vint16m2_t src, size_t vl) {
  return vfcvt_f_ta(src, vl);
}

vfloat16m4_t test_vfcvt_f_x_v_f16m4_ta(vint16m4_t src, size_t vl) {
  return vfcvt_f_ta(src, vl);
}

vfloat16m8_t test_vfcvt_f_x_v_f16m8_ta(vint16m8_t src, size_t vl) {
  return vfcvt_f_ta(src, vl);
}

vfloat16mf4_t test_vfcvt_f_xu_v_f16mf4_ta(vuint16mf4_t src, size_t vl) {
  return vfcvt_f_ta(src, vl);
}

vfloat16mf2_t test_vfcvt_f_xu_v_f16mf2_ta(vuint16mf2_t src, size_t vl) {
  return vfcvt_f_ta(src, vl);
}

vfloat16m1_t test_vfcvt_f_xu_v_f16m1_ta(vuint16m1_t src, size_t vl) {
  return vfcvt_f_ta(src, vl);
}

vfloat16m2_t test_vfcvt_f_xu_v_f16m2_ta(vuint16m2_t src, size_t vl) {
  return vfcvt_f_ta(src, vl);
}

vfloat16m4_t test_vfcvt_f_xu_v_f16m4_ta(vuint16m4_t src, size_t vl) {
  return vfcvt_f_ta(src, vl);
}

vfloat16m8_t test_vfcvt_f_xu_v_f16m8_ta(vuint16m8_t src, size_t vl) {
  return vfcvt_f_ta(src, vl);
}

vint32mf2_t test_vfcvt_x_f_v_i32mf2_ta(vfloat32mf2_t src, size_t vl) {
  return vfcvt_x_ta(src, vl);
}

vint32mf2_t test_vfcvt_rtz_x_f_v_i32mf2_ta(vfloat32mf2_t src, size_t vl) {
  return vfcvt_rtz_x_ta(src, vl);
}

vint32m1_t test_vfcvt_x_f_v_i32m1_ta(vfloat32m1_t src, size_t vl) {
  return vfcvt_x_ta(src, vl);
}

vint32m1_t test_vfcvt_rtz_x_f_v_i32m1_ta(vfloat32m1_t src, size_t vl) {
  return vfcvt_rtz_x_ta(src, vl);
}

vint32m2_t test_vfcvt_x_f_v_i32m2_ta(vfloat32m2_t src, size_t vl) {
  return vfcvt_x_ta(src, vl);
}

vint32m2_t test_vfcvt_rtz_x_f_v_i32m2_ta(vfloat32m2_t src, size_t vl) {
  return vfcvt_rtz_x_ta(src, vl);
}

vint32m4_t test_vfcvt_x_f_v_i32m4_ta(vfloat32m4_t src, size_t vl) {
  return vfcvt_x_ta(src, vl);
}

vint32m4_t test_vfcvt_rtz_x_f_v_i32m4_ta(vfloat32m4_t src, size_t vl) {
  return vfcvt_rtz_x_ta(src, vl);
}

vint32m8_t test_vfcvt_x_f_v_i32m8_ta(vfloat32m8_t src, size_t vl) {
  return vfcvt_x_ta(src, vl);
}

vint32m8_t test_vfcvt_rtz_x_f_v_i32m8_ta(vfloat32m8_t src, size_t vl) {
  return vfcvt_rtz_x_ta(src, vl);
}

vuint32mf2_t test_vfcvt_xu_f_v_u32mf2_ta(vfloat32mf2_t src, size_t vl) {
  return vfcvt_xu_ta(src, vl);
}

vuint32mf2_t test_vfcvt_rtz_xu_f_v_u32mf2_ta(vfloat32mf2_t src, size_t vl) {
  return vfcvt_rtz_xu_ta(src, vl);
}

vuint32m1_t test_vfcvt_xu_f_v_u32m1_ta(vfloat32m1_t src, size_t vl) {
  return vfcvt_xu_ta(src, vl);
}

vuint32m1_t test_vfcvt_rtz_xu_f_v_u32m1_ta(vfloat32m1_t src, size_t vl) {
  return vfcvt_rtz_xu_ta(src, vl);
}

vuint32m2_t test_vfcvt_xu_f_v_u32m2_ta(vfloat32m2_t src, size_t vl) {
  return vfcvt_xu_ta(src, vl);
}

vuint32m2_t test_vfcvt_rtz_xu_f_v_u32m2_ta(vfloat32m2_t src, size_t vl) {
  return vfcvt_rtz_xu_ta(src, vl);
}

vuint32m4_t test_vfcvt_xu_f_v_u32m4_ta(vfloat32m4_t src, size_t vl) {
  return vfcvt_xu_ta(src, vl);
}

vuint32m4_t test_vfcvt_rtz_xu_f_v_u32m4_ta(vfloat32m4_t src, size_t vl) {
  return vfcvt_rtz_xu_ta(src, vl);
}

vuint32m8_t test_vfcvt_xu_f_v_u32m8_ta(vfloat32m8_t src, size_t vl) {
  return vfcvt_xu_ta(src, vl);
}

vuint32m8_t test_vfcvt_rtz_xu_f_v_u32m8_ta(vfloat32m8_t src, size_t vl) {
  return vfcvt_rtz_xu_ta(src, vl);
}

vfloat32mf2_t test_vfcvt_f_x_v_f32mf2_ta(vint32mf2_t src, size_t vl) {
  return vfcvt_f_ta(src, vl);
}

vfloat32m1_t test_vfcvt_f_x_v_f32m1_ta(vint32m1_t src, size_t vl) {
  return vfcvt_f_ta(src, vl);
}

vfloat32m2_t test_vfcvt_f_x_v_f32m2_ta(vint32m2_t src, size_t vl) {
  return vfcvt_f_ta(src, vl);
}

vfloat32m4_t test_vfcvt_f_x_v_f32m4_ta(vint32m4_t src, size_t vl) {
  return vfcvt_f_ta(src, vl);
}

vfloat32m8_t test_vfcvt_f_x_v_f32m8_ta(vint32m8_t src, size_t vl) {
  return vfcvt_f_ta(src, vl);
}

vfloat32mf2_t test_vfcvt_f_xu_v_f32mf2_ta(vuint32mf2_t src, size_t vl) {
  return vfcvt_f_ta(src, vl);
}

vfloat32m1_t test_vfcvt_f_xu_v_f32m1_ta(vuint32m1_t src, size_t vl) {
  return vfcvt_f_ta(src, vl);
}

vfloat32m2_t test_vfcvt_f_xu_v_f32m2_ta(vuint32m2_t src, size_t vl) {
  return vfcvt_f_ta(src, vl);
}

vfloat32m4_t test_vfcvt_f_xu_v_f32m4_ta(vuint32m4_t src, size_t vl) {
  return vfcvt_f_ta(src, vl);
}

vfloat32m8_t test_vfcvt_f_xu_v_f32m8_ta(vuint32m8_t src, size_t vl) {
  return vfcvt_f_ta(src, vl);
}

vint64m1_t test_vfcvt_x_f_v_i64m1_ta(vfloat64m1_t src, size_t vl) {
  return vfcvt_x_ta(src, vl);
}

vint64m1_t test_vfcvt_rtz_x_f_v_i64m1_ta(vfloat64m1_t src, size_t vl) {
  return vfcvt_rtz_x_ta(src, vl);
}

vint64m2_t test_vfcvt_x_f_v_i64m2_ta(vfloat64m2_t src, size_t vl) {
  return vfcvt_x_ta(src, vl);
}

vint64m2_t test_vfcvt_rtz_x_f_v_i64m2_ta(vfloat64m2_t src, size_t vl) {
  return vfcvt_rtz_x_ta(src, vl);
}

vint64m4_t test_vfcvt_x_f_v_i64m4_ta(vfloat64m4_t src, size_t vl) {
  return vfcvt_x_ta(src, vl);
}

vint64m4_t test_vfcvt_rtz_x_f_v_i64m4_ta(vfloat64m4_t src, size_t vl) {
  return vfcvt_rtz_x_ta(src, vl);
}

vint64m8_t test_vfcvt_x_f_v_i64m8_ta(vfloat64m8_t src, size_t vl) {
  return vfcvt_x_ta(src, vl);
}

vint64m8_t test_vfcvt_rtz_x_f_v_i64m8_ta(vfloat64m8_t src, size_t vl) {
  return vfcvt_rtz_x_ta(src, vl);
}

vuint64m1_t test_vfcvt_xu_f_v_u64m1_ta(vfloat64m1_t src, size_t vl) {
  return vfcvt_xu_ta(src, vl);
}

vuint64m1_t test_vfcvt_rtz_xu_f_v_u64m1_ta(vfloat64m1_t src, size_t vl) {
  return vfcvt_rtz_xu_ta(src, vl);
}

vuint64m2_t test_vfcvt_xu_f_v_u64m2_ta(vfloat64m2_t src, size_t vl) {
  return vfcvt_xu_ta(src, vl);
}

vuint64m2_t test_vfcvt_rtz_xu_f_v_u64m2_ta(vfloat64m2_t src, size_t vl) {
  return vfcvt_rtz_xu_ta(src, vl);
}

vuint64m4_t test_vfcvt_xu_f_v_u64m4_ta(vfloat64m4_t src, size_t vl) {
  return vfcvt_xu_ta(src, vl);
}

vuint64m4_t test_vfcvt_rtz_xu_f_v_u64m4_ta(vfloat64m4_t src, size_t vl) {
  return vfcvt_rtz_xu_ta(src, vl);
}

vuint64m8_t test_vfcvt_xu_f_v_u64m8_ta(vfloat64m8_t src, size_t vl) {
  return vfcvt_xu_ta(src, vl);
}

vuint64m8_t test_vfcvt_rtz_xu_f_v_u64m8_ta(vfloat64m8_t src, size_t vl) {
  return vfcvt_rtz_xu_ta(src, vl);
}

vfloat64m1_t test_vfcvt_f_x_v_f64m1_ta(vint64m1_t src, size_t vl) {
  return vfcvt_f_ta(src, vl);
}

vfloat64m2_t test_vfcvt_f_x_v_f64m2_ta(vint64m2_t src, size_t vl) {
  return vfcvt_f_ta(src, vl);
}

vfloat64m4_t test_vfcvt_f_x_v_f64m4_ta(vint64m4_t src, size_t vl) {
  return vfcvt_f_ta(src, vl);
}

vfloat64m8_t test_vfcvt_f_x_v_f64m8_ta(vint64m8_t src, size_t vl) {
  return vfcvt_f_ta(src, vl);
}

vfloat64m1_t test_vfcvt_f_xu_v_f64m1_ta(vuint64m1_t src, size_t vl) {
  return vfcvt_f_ta(src, vl);
}

vfloat64m2_t test_vfcvt_f_xu_v_f64m2_ta(vuint64m2_t src, size_t vl) {
  return vfcvt_f_ta(src, vl);
}

vfloat64m4_t test_vfcvt_f_xu_v_f64m4_ta(vuint64m4_t src, size_t vl) {
  return vfcvt_f_ta(src, vl);
}

vfloat64m8_t test_vfcvt_f_xu_v_f64m8_ta(vuint64m8_t src, size_t vl) {
  return vfcvt_f_ta(src, vl);
}

vint16mf4_t test_vfcvt_x_f_v_i16mf4_tuma(vbool64_t mask, vint16mf4_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return vfcvt_x_tuma(mask, maskedoff, src, vl);
}

vint16mf4_t test_vfcvt_rtz_x_f_v_i16mf4_tuma(vbool64_t mask, vint16mf4_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return vfcvt_rtz_x_tuma(mask, maskedoff, src, vl);
}

vint16mf2_t test_vfcvt_x_f_v_i16mf2_tuma(vbool32_t mask, vint16mf2_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return vfcvt_x_tuma(mask, maskedoff, src, vl);
}

vint16mf2_t test_vfcvt_rtz_x_f_v_i16mf2_tuma(vbool32_t mask, vint16mf2_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return vfcvt_rtz_x_tuma(mask, maskedoff, src, vl);
}

vint16m1_t test_vfcvt_x_f_v_i16m1_tuma(vbool16_t mask, vint16m1_t maskedoff, vfloat16m1_t src, size_t vl) {
  return vfcvt_x_tuma(mask, maskedoff, src, vl);
}

vint16m1_t test_vfcvt_rtz_x_f_v_i16m1_tuma(vbool16_t mask, vint16m1_t maskedoff, vfloat16m1_t src, size_t vl) {
  return vfcvt_rtz_x_tuma(mask, maskedoff, src, vl);
}

vint16m2_t test_vfcvt_x_f_v_i16m2_tuma(vbool8_t mask, vint16m2_t maskedoff, vfloat16m2_t src, size_t vl) {
  return vfcvt_x_tuma(mask, maskedoff, src, vl);
}

vint16m2_t test_vfcvt_rtz_x_f_v_i16m2_tuma(vbool8_t mask, vint16m2_t maskedoff, vfloat16m2_t src, size_t vl) {
  return vfcvt_rtz_x_tuma(mask, maskedoff, src, vl);
}

vint16m4_t test_vfcvt_x_f_v_i16m4_tuma(vbool4_t mask, vint16m4_t maskedoff, vfloat16m4_t src, size_t vl) {
  return vfcvt_x_tuma(mask, maskedoff, src, vl);
}

vint16m4_t test_vfcvt_rtz_x_f_v_i16m4_tuma(vbool4_t mask, vint16m4_t maskedoff, vfloat16m4_t src, size_t vl) {
  return vfcvt_rtz_x_tuma(mask, maskedoff, src, vl);
}

vint16m8_t test_vfcvt_x_f_v_i16m8_tuma(vbool2_t mask, vint16m8_t maskedoff, vfloat16m8_t src, size_t vl) {
  return vfcvt_x_tuma(mask, maskedoff, src, vl);
}

vint16m8_t test_vfcvt_rtz_x_f_v_i16m8_tuma(vbool2_t mask, vint16m8_t maskedoff, vfloat16m8_t src, size_t vl) {
  return vfcvt_rtz_x_tuma(mask, maskedoff, src, vl);
}

vuint16mf4_t test_vfcvt_xu_f_v_u16mf4_tuma(vbool64_t mask, vuint16mf4_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return vfcvt_xu_tuma(mask, maskedoff, src, vl);
}

vuint16mf4_t test_vfcvt_rtz_xu_f_v_u16mf4_tuma(vbool64_t mask, vuint16mf4_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return vfcvt_rtz_xu_tuma(mask, maskedoff, src, vl);
}

vuint16mf2_t test_vfcvt_xu_f_v_u16mf2_tuma(vbool32_t mask, vuint16mf2_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return vfcvt_xu_tuma(mask, maskedoff, src, vl);
}

vuint16mf2_t test_vfcvt_rtz_xu_f_v_u16mf2_tuma(vbool32_t mask, vuint16mf2_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return vfcvt_rtz_xu_tuma(mask, maskedoff, src, vl);
}

vuint16m1_t test_vfcvt_xu_f_v_u16m1_tuma(vbool16_t mask, vuint16m1_t maskedoff, vfloat16m1_t src, size_t vl) {
  return vfcvt_xu_tuma(mask, maskedoff, src, vl);
}

vuint16m1_t test_vfcvt_rtz_xu_f_v_u16m1_tuma(vbool16_t mask, vuint16m1_t maskedoff, vfloat16m1_t src, size_t vl) {
  return vfcvt_rtz_xu_tuma(mask, maskedoff, src, vl);
}

vuint16m2_t test_vfcvt_xu_f_v_u16m2_tuma(vbool8_t mask, vuint16m2_t maskedoff, vfloat16m2_t src, size_t vl) {
  return vfcvt_xu_tuma(mask, maskedoff, src, vl);
}

vuint16m2_t test_vfcvt_rtz_xu_f_v_u16m2_tuma(vbool8_t mask, vuint16m2_t maskedoff, vfloat16m2_t src, size_t vl) {
  return vfcvt_rtz_xu_tuma(mask, maskedoff, src, vl);
}

vuint16m4_t test_vfcvt_xu_f_v_u16m4_tuma(vbool4_t mask, vuint16m4_t maskedoff, vfloat16m4_t src, size_t vl) {
  return vfcvt_xu_tuma(mask, maskedoff, src, vl);
}

vuint16m4_t test_vfcvt_rtz_xu_f_v_u16m4_tuma(vbool4_t mask, vuint16m4_t maskedoff, vfloat16m4_t src, size_t vl) {
  return vfcvt_rtz_xu_tuma(mask, maskedoff, src, vl);
}

vuint16m8_t test_vfcvt_xu_f_v_u16m8_tuma(vbool2_t mask, vuint16m8_t maskedoff, vfloat16m8_t src, size_t vl) {
  return vfcvt_xu_tuma(mask, maskedoff, src, vl);
}

vuint16m8_t test_vfcvt_rtz_xu_f_v_u16m8_tuma(vbool2_t mask, vuint16m8_t maskedoff, vfloat16m8_t src, size_t vl) {
  return vfcvt_rtz_xu_tuma(mask, maskedoff, src, vl);
}

vfloat16mf4_t test_vfcvt_f_x_v_f16mf4_tuma(vbool64_t mask, vfloat16mf4_t maskedoff, vint16mf4_t src, size_t vl) {
  return vfcvt_f_tuma(mask, maskedoff, src, vl);
}

vfloat16mf2_t test_vfcvt_f_x_v_f16mf2_tuma(vbool32_t mask, vfloat16mf2_t maskedoff, vint16mf2_t src, size_t vl) {
  return vfcvt_f_tuma(mask, maskedoff, src, vl);
}

vfloat16m1_t test_vfcvt_f_x_v_f16m1_tuma(vbool16_t mask, vfloat16m1_t maskedoff, vint16m1_t src, size_t vl) {
  return vfcvt_f_tuma(mask, maskedoff, src, vl);
}

vfloat16m2_t test_vfcvt_f_x_v_f16m2_tuma(vbool8_t mask, vfloat16m2_t maskedoff, vint16m2_t src, size_t vl) {
  return vfcvt_f_tuma(mask, maskedoff, src, vl);
}

vfloat16m4_t test_vfcvt_f_x_v_f16m4_tuma(vbool4_t mask, vfloat16m4_t maskedoff, vint16m4_t src, size_t vl) {
  return vfcvt_f_tuma(mask, maskedoff, src, vl);
}

vfloat16m8_t test_vfcvt_f_x_v_f16m8_tuma(vbool2_t mask, vfloat16m8_t maskedoff, vint16m8_t src, size_t vl) {
  return vfcvt_f_tuma(mask, maskedoff, src, vl);
}

vfloat16mf4_t test_vfcvt_f_xu_v_f16mf4_tuma(vbool64_t mask, vfloat16mf4_t maskedoff, vuint16mf4_t src, size_t vl) {
  return vfcvt_f_tuma(mask, maskedoff, src, vl);
}

vfloat16mf2_t test_vfcvt_f_xu_v_f16mf2_tuma(vbool32_t mask, vfloat16mf2_t maskedoff, vuint16mf2_t src, size_t vl) {
  return vfcvt_f_tuma(mask, maskedoff, src, vl);
}

vfloat16m1_t test_vfcvt_f_xu_v_f16m1_tuma(vbool16_t mask, vfloat16m1_t maskedoff, vuint16m1_t src, size_t vl) {
  return vfcvt_f_tuma(mask, maskedoff, src, vl);
}

vfloat16m2_t test_vfcvt_f_xu_v_f16m2_tuma(vbool8_t mask, vfloat16m2_t maskedoff, vuint16m2_t src, size_t vl) {
  return vfcvt_f_tuma(mask, maskedoff, src, vl);
}

vfloat16m4_t test_vfcvt_f_xu_v_f16m4_tuma(vbool4_t mask, vfloat16m4_t maskedoff, vuint16m4_t src, size_t vl) {
  return vfcvt_f_tuma(mask, maskedoff, src, vl);
}

vfloat16m8_t test_vfcvt_f_xu_v_f16m8_tuma(vbool2_t mask, vfloat16m8_t maskedoff, vuint16m8_t src, size_t vl) {
  return vfcvt_f_tuma(mask, maskedoff, src, vl);
}

vint32mf2_t test_vfcvt_x_f_v_i32mf2_tuma(vbool64_t mask, vint32mf2_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return vfcvt_x_tuma(mask, maskedoff, src, vl);
}

vint32mf2_t test_vfcvt_rtz_x_f_v_i32mf2_tuma(vbool64_t mask, vint32mf2_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return vfcvt_rtz_x_tuma(mask, maskedoff, src, vl);
}

vint32m1_t test_vfcvt_x_f_v_i32m1_tuma(vbool32_t mask, vint32m1_t maskedoff, vfloat32m1_t src, size_t vl) {
  return vfcvt_x_tuma(mask, maskedoff, src, vl);
}

vint32m1_t test_vfcvt_rtz_x_f_v_i32m1_tuma(vbool32_t mask, vint32m1_t maskedoff, vfloat32m1_t src, size_t vl) {
  return vfcvt_rtz_x_tuma(mask, maskedoff, src, vl);
}

vint32m2_t test_vfcvt_x_f_v_i32m2_tuma(vbool16_t mask, vint32m2_t maskedoff, vfloat32m2_t src, size_t vl) {
  return vfcvt_x_tuma(mask, maskedoff, src, vl);
}

vint32m2_t test_vfcvt_rtz_x_f_v_i32m2_tuma(vbool16_t mask, vint32m2_t maskedoff, vfloat32m2_t src, size_t vl) {
  return vfcvt_rtz_x_tuma(mask, maskedoff, src, vl);
}

vint32m4_t test_vfcvt_x_f_v_i32m4_tuma(vbool8_t mask, vint32m4_t maskedoff, vfloat32m4_t src, size_t vl) {
  return vfcvt_x_tuma(mask, maskedoff, src, vl);
}

vint32m4_t test_vfcvt_rtz_x_f_v_i32m4_tuma(vbool8_t mask, vint32m4_t maskedoff, vfloat32m4_t src, size_t vl) {
  return vfcvt_rtz_x_tuma(mask, maskedoff, src, vl);
}

vint32m8_t test_vfcvt_x_f_v_i32m8_tuma(vbool4_t mask, vint32m8_t maskedoff, vfloat32m8_t src, size_t vl) {
  return vfcvt_x_tuma(mask, maskedoff, src, vl);
}

vint32m8_t test_vfcvt_rtz_x_f_v_i32m8_tuma(vbool4_t mask, vint32m8_t maskedoff, vfloat32m8_t src, size_t vl) {
  return vfcvt_rtz_x_tuma(mask, maskedoff, src, vl);
}

vuint32mf2_t test_vfcvt_xu_f_v_u32mf2_tuma(vbool64_t mask, vuint32mf2_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return vfcvt_xu_tuma(mask, maskedoff, src, vl);
}

vuint32mf2_t test_vfcvt_rtz_xu_f_v_u32mf2_tuma(vbool64_t mask, vuint32mf2_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return vfcvt_rtz_xu_tuma(mask, maskedoff, src, vl);
}

vuint32m1_t test_vfcvt_xu_f_v_u32m1_tuma(vbool32_t mask, vuint32m1_t maskedoff, vfloat32m1_t src, size_t vl) {
  return vfcvt_xu_tuma(mask, maskedoff, src, vl);
}

vuint32m1_t test_vfcvt_rtz_xu_f_v_u32m1_tuma(vbool32_t mask, vuint32m1_t maskedoff, vfloat32m1_t src, size_t vl) {
  return vfcvt_rtz_xu_tuma(mask, maskedoff, src, vl);
}

vuint32m2_t test_vfcvt_xu_f_v_u32m2_tuma(vbool16_t mask, vuint32m2_t maskedoff, vfloat32m2_t src, size_t vl) {
  return vfcvt_xu_tuma(mask, maskedoff, src, vl);
}

vuint32m2_t test_vfcvt_rtz_xu_f_v_u32m2_tuma(vbool16_t mask, vuint32m2_t maskedoff, vfloat32m2_t src, size_t vl) {
  return vfcvt_rtz_xu_tuma(mask, maskedoff, src, vl);
}

vuint32m4_t test_vfcvt_xu_f_v_u32m4_tuma(vbool8_t mask, vuint32m4_t maskedoff, vfloat32m4_t src, size_t vl) {
  return vfcvt_xu_tuma(mask, maskedoff, src, vl);
}

vuint32m4_t test_vfcvt_rtz_xu_f_v_u32m4_tuma(vbool8_t mask, vuint32m4_t maskedoff, vfloat32m4_t src, size_t vl) {
  return vfcvt_rtz_xu_tuma(mask, maskedoff, src, vl);
}

vuint32m8_t test_vfcvt_xu_f_v_u32m8_tuma(vbool4_t mask, vuint32m8_t maskedoff, vfloat32m8_t src, size_t vl) {
  return vfcvt_xu_tuma(mask, maskedoff, src, vl);
}

vuint32m8_t test_vfcvt_rtz_xu_f_v_u32m8_tuma(vbool4_t mask, vuint32m8_t maskedoff, vfloat32m8_t src, size_t vl) {
  return vfcvt_rtz_xu_tuma(mask, maskedoff, src, vl);
}

vfloat32mf2_t test_vfcvt_f_x_v_f32mf2_tuma(vbool64_t mask, vfloat32mf2_t maskedoff, vint32mf2_t src, size_t vl) {
  return vfcvt_f_tuma(mask, maskedoff, src, vl);
}

vfloat32m1_t test_vfcvt_f_x_v_f32m1_tuma(vbool32_t mask, vfloat32m1_t maskedoff, vint32m1_t src, size_t vl) {
  return vfcvt_f_tuma(mask, maskedoff, src, vl);
}

vfloat32m2_t test_vfcvt_f_x_v_f32m2_tuma(vbool16_t mask, vfloat32m2_t maskedoff, vint32m2_t src, size_t vl) {
  return vfcvt_f_tuma(mask, maskedoff, src, vl);
}

vfloat32m4_t test_vfcvt_f_x_v_f32m4_tuma(vbool8_t mask, vfloat32m4_t maskedoff, vint32m4_t src, size_t vl) {
  return vfcvt_f_tuma(mask, maskedoff, src, vl);
}

vfloat32m8_t test_vfcvt_f_x_v_f32m8_tuma(vbool4_t mask, vfloat32m8_t maskedoff, vint32m8_t src, size_t vl) {
  return vfcvt_f_tuma(mask, maskedoff, src, vl);
}

vfloat32mf2_t test_vfcvt_f_xu_v_f32mf2_tuma(vbool64_t mask, vfloat32mf2_t maskedoff, vuint32mf2_t src, size_t vl) {
  return vfcvt_f_tuma(mask, maskedoff, src, vl);
}

vfloat32m1_t test_vfcvt_f_xu_v_f32m1_tuma(vbool32_t mask, vfloat32m1_t maskedoff, vuint32m1_t src, size_t vl) {
  return vfcvt_f_tuma(mask, maskedoff, src, vl);
}

vfloat32m2_t test_vfcvt_f_xu_v_f32m2_tuma(vbool16_t mask, vfloat32m2_t maskedoff, vuint32m2_t src, size_t vl) {
  return vfcvt_f_tuma(mask, maskedoff, src, vl);
}

vfloat32m4_t test_vfcvt_f_xu_v_f32m4_tuma(vbool8_t mask, vfloat32m4_t maskedoff, vuint32m4_t src, size_t vl) {
  return vfcvt_f_tuma(mask, maskedoff, src, vl);
}

vfloat32m8_t test_vfcvt_f_xu_v_f32m8_tuma(vbool4_t mask, vfloat32m8_t maskedoff, vuint32m8_t src, size_t vl) {
  return vfcvt_f_tuma(mask, maskedoff, src, vl);
}

vint64m1_t test_vfcvt_x_f_v_i64m1_tuma(vbool64_t mask, vint64m1_t maskedoff, vfloat64m1_t src, size_t vl) {
  return vfcvt_x_tuma(mask, maskedoff, src, vl);
}

vint64m1_t test_vfcvt_rtz_x_f_v_i64m1_tuma(vbool64_t mask, vint64m1_t maskedoff, vfloat64m1_t src, size_t vl) {
  return vfcvt_rtz_x_tuma(mask, maskedoff, src, vl);
}

vint64m2_t test_vfcvt_x_f_v_i64m2_tuma(vbool32_t mask, vint64m2_t maskedoff, vfloat64m2_t src, size_t vl) {
  return vfcvt_x_tuma(mask, maskedoff, src, vl);
}

vint64m2_t test_vfcvt_rtz_x_f_v_i64m2_tuma(vbool32_t mask, vint64m2_t maskedoff, vfloat64m2_t src, size_t vl) {
  return vfcvt_rtz_x_tuma(mask, maskedoff, src, vl);
}

vint64m4_t test_vfcvt_x_f_v_i64m4_tuma(vbool16_t mask, vint64m4_t maskedoff, vfloat64m4_t src, size_t vl) {
  return vfcvt_x_tuma(mask, maskedoff, src, vl);
}

vint64m4_t test_vfcvt_rtz_x_f_v_i64m4_tuma(vbool16_t mask, vint64m4_t maskedoff, vfloat64m4_t src, size_t vl) {
  return vfcvt_rtz_x_tuma(mask, maskedoff, src, vl);
}

vint64m8_t test_vfcvt_x_f_v_i64m8_tuma(vbool8_t mask, vint64m8_t maskedoff, vfloat64m8_t src, size_t vl) {
  return vfcvt_x_tuma(mask, maskedoff, src, vl);
}

vint64m8_t test_vfcvt_rtz_x_f_v_i64m8_tuma(vbool8_t mask, vint64m8_t maskedoff, vfloat64m8_t src, size_t vl) {
  return vfcvt_rtz_x_tuma(mask, maskedoff, src, vl);
}

vuint64m1_t test_vfcvt_xu_f_v_u64m1_tuma(vbool64_t mask, vuint64m1_t maskedoff, vfloat64m1_t src, size_t vl) {
  return vfcvt_xu_tuma(mask, maskedoff, src, vl);
}

vuint64m1_t test_vfcvt_rtz_xu_f_v_u64m1_tuma(vbool64_t mask, vuint64m1_t maskedoff, vfloat64m1_t src, size_t vl) {
  return vfcvt_rtz_xu_tuma(mask, maskedoff, src, vl);
}

vuint64m2_t test_vfcvt_xu_f_v_u64m2_tuma(vbool32_t mask, vuint64m2_t maskedoff, vfloat64m2_t src, size_t vl) {
  return vfcvt_xu_tuma(mask, maskedoff, src, vl);
}

vuint64m2_t test_vfcvt_rtz_xu_f_v_u64m2_tuma(vbool32_t mask, vuint64m2_t maskedoff, vfloat64m2_t src, size_t vl) {
  return vfcvt_rtz_xu_tuma(mask, maskedoff, src, vl);
}

vuint64m4_t test_vfcvt_xu_f_v_u64m4_tuma(vbool16_t mask, vuint64m4_t maskedoff, vfloat64m4_t src, size_t vl) {
  return vfcvt_xu_tuma(mask, maskedoff, src, vl);
}

vuint64m4_t test_vfcvt_rtz_xu_f_v_u64m4_tuma(vbool16_t mask, vuint64m4_t maskedoff, vfloat64m4_t src, size_t vl) {
  return vfcvt_rtz_xu_tuma(mask, maskedoff, src, vl);
}

vuint64m8_t test_vfcvt_xu_f_v_u64m8_tuma(vbool8_t mask, vuint64m8_t maskedoff, vfloat64m8_t src, size_t vl) {
  return vfcvt_xu_tuma(mask, maskedoff, src, vl);
}

vuint64m8_t test_vfcvt_rtz_xu_f_v_u64m8_tuma(vbool8_t mask, vuint64m8_t maskedoff, vfloat64m8_t src, size_t vl) {
  return vfcvt_rtz_xu_tuma(mask, maskedoff, src, vl);
}

vfloat64m1_t test_vfcvt_f_x_v_f64m1_tuma(vbool64_t mask, vfloat64m1_t maskedoff, vint64m1_t src, size_t vl) {
  return vfcvt_f_tuma(mask, maskedoff, src, vl);
}

vfloat64m2_t test_vfcvt_f_x_v_f64m2_tuma(vbool32_t mask, vfloat64m2_t maskedoff, vint64m2_t src, size_t vl) {
  return vfcvt_f_tuma(mask, maskedoff, src, vl);
}

vfloat64m4_t test_vfcvt_f_x_v_f64m4_tuma(vbool16_t mask, vfloat64m4_t maskedoff, vint64m4_t src, size_t vl) {
  return vfcvt_f_tuma(mask, maskedoff, src, vl);
}

vfloat64m8_t test_vfcvt_f_x_v_f64m8_tuma(vbool8_t mask, vfloat64m8_t maskedoff, vint64m8_t src, size_t vl) {
  return vfcvt_f_tuma(mask, maskedoff, src, vl);
}

vfloat64m1_t test_vfcvt_f_xu_v_f64m1_tuma(vbool64_t mask, vfloat64m1_t maskedoff, vuint64m1_t src, size_t vl) {
  return vfcvt_f_tuma(mask, maskedoff, src, vl);
}

vfloat64m2_t test_vfcvt_f_xu_v_f64m2_tuma(vbool32_t mask, vfloat64m2_t maskedoff, vuint64m2_t src, size_t vl) {
  return vfcvt_f_tuma(mask, maskedoff, src, vl);
}

vfloat64m4_t test_vfcvt_f_xu_v_f64m4_tuma(vbool16_t mask, vfloat64m4_t maskedoff, vuint64m4_t src, size_t vl) {
  return vfcvt_f_tuma(mask, maskedoff, src, vl);
}

vfloat64m8_t test_vfcvt_f_xu_v_f64m8_tuma(vbool8_t mask, vfloat64m8_t maskedoff, vuint64m8_t src, size_t vl) {
  return vfcvt_f_tuma(mask, maskedoff, src, vl);
}

vint16mf4_t test_vfcvt_x_f_v_i16mf4_tumu(vbool64_t mask, vint16mf4_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return vfcvt_x_tumu(mask, maskedoff, src, vl);
}

vint16mf4_t test_vfcvt_rtz_x_f_v_i16mf4_tumu(vbool64_t mask, vint16mf4_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return vfcvt_rtz_x_tumu(mask, maskedoff, src, vl);
}

vint16mf2_t test_vfcvt_x_f_v_i16mf2_tumu(vbool32_t mask, vint16mf2_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return vfcvt_x_tumu(mask, maskedoff, src, vl);
}

vint16mf2_t test_vfcvt_rtz_x_f_v_i16mf2_tumu(vbool32_t mask, vint16mf2_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return vfcvt_rtz_x_tumu(mask, maskedoff, src, vl);
}

vint16m1_t test_vfcvt_x_f_v_i16m1_tumu(vbool16_t mask, vint16m1_t maskedoff, vfloat16m1_t src, size_t vl) {
  return vfcvt_x_tumu(mask, maskedoff, src, vl);
}

vint16m1_t test_vfcvt_rtz_x_f_v_i16m1_tumu(vbool16_t mask, vint16m1_t maskedoff, vfloat16m1_t src, size_t vl) {
  return vfcvt_rtz_x_tumu(mask, maskedoff, src, vl);
}

vint16m2_t test_vfcvt_x_f_v_i16m2_tumu(vbool8_t mask, vint16m2_t maskedoff, vfloat16m2_t src, size_t vl) {
  return vfcvt_x_tumu(mask, maskedoff, src, vl);
}

vint16m2_t test_vfcvt_rtz_x_f_v_i16m2_tumu(vbool8_t mask, vint16m2_t maskedoff, vfloat16m2_t src, size_t vl) {
  return vfcvt_rtz_x_tumu(mask, maskedoff, src, vl);
}

vint16m4_t test_vfcvt_x_f_v_i16m4_tumu(vbool4_t mask, vint16m4_t maskedoff, vfloat16m4_t src, size_t vl) {
  return vfcvt_x_tumu(mask, maskedoff, src, vl);
}

vint16m4_t test_vfcvt_rtz_x_f_v_i16m4_tumu(vbool4_t mask, vint16m4_t maskedoff, vfloat16m4_t src, size_t vl) {
  return vfcvt_rtz_x_tumu(mask, maskedoff, src, vl);
}

vint16m8_t test_vfcvt_x_f_v_i16m8_tumu(vbool2_t mask, vint16m8_t maskedoff, vfloat16m8_t src, size_t vl) {
  return vfcvt_x_tumu(mask, maskedoff, src, vl);
}

vint16m8_t test_vfcvt_rtz_x_f_v_i16m8_tumu(vbool2_t mask, vint16m8_t maskedoff, vfloat16m8_t src, size_t vl) {
  return vfcvt_rtz_x_tumu(mask, maskedoff, src, vl);
}

vuint16mf4_t test_vfcvt_xu_f_v_u16mf4_tumu(vbool64_t mask, vuint16mf4_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return vfcvt_xu_tumu(mask, maskedoff, src, vl);
}

vuint16mf4_t test_vfcvt_rtz_xu_f_v_u16mf4_tumu(vbool64_t mask, vuint16mf4_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return vfcvt_rtz_xu_tumu(mask, maskedoff, src, vl);
}

vuint16mf2_t test_vfcvt_xu_f_v_u16mf2_tumu(vbool32_t mask, vuint16mf2_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return vfcvt_xu_tumu(mask, maskedoff, src, vl);
}

vuint16mf2_t test_vfcvt_rtz_xu_f_v_u16mf2_tumu(vbool32_t mask, vuint16mf2_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return vfcvt_rtz_xu_tumu(mask, maskedoff, src, vl);
}

vuint16m1_t test_vfcvt_xu_f_v_u16m1_tumu(vbool16_t mask, vuint16m1_t maskedoff, vfloat16m1_t src, size_t vl) {
  return vfcvt_xu_tumu(mask, maskedoff, src, vl);
}

vuint16m1_t test_vfcvt_rtz_xu_f_v_u16m1_tumu(vbool16_t mask, vuint16m1_t maskedoff, vfloat16m1_t src, size_t vl) {
  return vfcvt_rtz_xu_tumu(mask, maskedoff, src, vl);
}

vuint16m2_t test_vfcvt_xu_f_v_u16m2_tumu(vbool8_t mask, vuint16m2_t maskedoff, vfloat16m2_t src, size_t vl) {
  return vfcvt_xu_tumu(mask, maskedoff, src, vl);
}

vuint16m2_t test_vfcvt_rtz_xu_f_v_u16m2_tumu(vbool8_t mask, vuint16m2_t maskedoff, vfloat16m2_t src, size_t vl) {
  return vfcvt_rtz_xu_tumu(mask, maskedoff, src, vl);
}

vuint16m4_t test_vfcvt_xu_f_v_u16m4_tumu(vbool4_t mask, vuint16m4_t maskedoff, vfloat16m4_t src, size_t vl) {
  return vfcvt_xu_tumu(mask, maskedoff, src, vl);
}

vuint16m4_t test_vfcvt_rtz_xu_f_v_u16m4_tumu(vbool4_t mask, vuint16m4_t maskedoff, vfloat16m4_t src, size_t vl) {
  return vfcvt_rtz_xu_tumu(mask, maskedoff, src, vl);
}

vuint16m8_t test_vfcvt_xu_f_v_u16m8_tumu(vbool2_t mask, vuint16m8_t maskedoff, vfloat16m8_t src, size_t vl) {
  return vfcvt_xu_tumu(mask, maskedoff, src, vl);
}

vuint16m8_t test_vfcvt_rtz_xu_f_v_u16m8_tumu(vbool2_t mask, vuint16m8_t maskedoff, vfloat16m8_t src, size_t vl) {
  return vfcvt_rtz_xu_tumu(mask, maskedoff, src, vl);
}

vfloat16mf4_t test_vfcvt_f_x_v_f16mf4_tumu(vbool64_t mask, vfloat16mf4_t maskedoff, vint16mf4_t src, size_t vl) {
  return vfcvt_f_tumu(mask, maskedoff, src, vl);
}

vfloat16mf2_t test_vfcvt_f_x_v_f16mf2_tumu(vbool32_t mask, vfloat16mf2_t maskedoff, vint16mf2_t src, size_t vl) {
  return vfcvt_f_tumu(mask, maskedoff, src, vl);
}

vfloat16m1_t test_vfcvt_f_x_v_f16m1_tumu(vbool16_t mask, vfloat16m1_t maskedoff, vint16m1_t src, size_t vl) {
  return vfcvt_f_tumu(mask, maskedoff, src, vl);
}

vfloat16m2_t test_vfcvt_f_x_v_f16m2_tumu(vbool8_t mask, vfloat16m2_t maskedoff, vint16m2_t src, size_t vl) {
  return vfcvt_f_tumu(mask, maskedoff, src, vl);
}

vfloat16m4_t test_vfcvt_f_x_v_f16m4_tumu(vbool4_t mask, vfloat16m4_t maskedoff, vint16m4_t src, size_t vl) {
  return vfcvt_f_tumu(mask, maskedoff, src, vl);
}

vfloat16m8_t test_vfcvt_f_x_v_f16m8_tumu(vbool2_t mask, vfloat16m8_t maskedoff, vint16m8_t src, size_t vl) {
  return vfcvt_f_tumu(mask, maskedoff, src, vl);
}

vfloat16mf4_t test_vfcvt_f_xu_v_f16mf4_tumu(vbool64_t mask, vfloat16mf4_t maskedoff, vuint16mf4_t src, size_t vl) {
  return vfcvt_f_tumu(mask, maskedoff, src, vl);
}

vfloat16mf2_t test_vfcvt_f_xu_v_f16mf2_tumu(vbool32_t mask, vfloat16mf2_t maskedoff, vuint16mf2_t src, size_t vl) {
  return vfcvt_f_tumu(mask, maskedoff, src, vl);
}

vfloat16m1_t test_vfcvt_f_xu_v_f16m1_tumu(vbool16_t mask, vfloat16m1_t maskedoff, vuint16m1_t src, size_t vl) {
  return vfcvt_f_tumu(mask, maskedoff, src, vl);
}

vfloat16m2_t test_vfcvt_f_xu_v_f16m2_tumu(vbool8_t mask, vfloat16m2_t maskedoff, vuint16m2_t src, size_t vl) {
  return vfcvt_f_tumu(mask, maskedoff, src, vl);
}

vfloat16m4_t test_vfcvt_f_xu_v_f16m4_tumu(vbool4_t mask, vfloat16m4_t maskedoff, vuint16m4_t src, size_t vl) {
  return vfcvt_f_tumu(mask, maskedoff, src, vl);
}

vfloat16m8_t test_vfcvt_f_xu_v_f16m8_tumu(vbool2_t mask, vfloat16m8_t maskedoff, vuint16m8_t src, size_t vl) {
  return vfcvt_f_tumu(mask, maskedoff, src, vl);
}

vint32mf2_t test_vfcvt_x_f_v_i32mf2_tumu(vbool64_t mask, vint32mf2_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return vfcvt_x_tumu(mask, maskedoff, src, vl);
}

vint32mf2_t test_vfcvt_rtz_x_f_v_i32mf2_tumu(vbool64_t mask, vint32mf2_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return vfcvt_rtz_x_tumu(mask, maskedoff, src, vl);
}

vint32m1_t test_vfcvt_x_f_v_i32m1_tumu(vbool32_t mask, vint32m1_t maskedoff, vfloat32m1_t src, size_t vl) {
  return vfcvt_x_tumu(mask, maskedoff, src, vl);
}

vint32m1_t test_vfcvt_rtz_x_f_v_i32m1_tumu(vbool32_t mask, vint32m1_t maskedoff, vfloat32m1_t src, size_t vl) {
  return vfcvt_rtz_x_tumu(mask, maskedoff, src, vl);
}

vint32m2_t test_vfcvt_x_f_v_i32m2_tumu(vbool16_t mask, vint32m2_t maskedoff, vfloat32m2_t src, size_t vl) {
  return vfcvt_x_tumu(mask, maskedoff, src, vl);
}

vint32m2_t test_vfcvt_rtz_x_f_v_i32m2_tumu(vbool16_t mask, vint32m2_t maskedoff, vfloat32m2_t src, size_t vl) {
  return vfcvt_rtz_x_tumu(mask, maskedoff, src, vl);
}

vint32m4_t test_vfcvt_x_f_v_i32m4_tumu(vbool8_t mask, vint32m4_t maskedoff, vfloat32m4_t src, size_t vl) {
  return vfcvt_x_tumu(mask, maskedoff, src, vl);
}

vint32m4_t test_vfcvt_rtz_x_f_v_i32m4_tumu(vbool8_t mask, vint32m4_t maskedoff, vfloat32m4_t src, size_t vl) {
  return vfcvt_rtz_x_tumu(mask, maskedoff, src, vl);
}

vint32m8_t test_vfcvt_x_f_v_i32m8_tumu(vbool4_t mask, vint32m8_t maskedoff, vfloat32m8_t src, size_t vl) {
  return vfcvt_x_tumu(mask, maskedoff, src, vl);
}

vint32m8_t test_vfcvt_rtz_x_f_v_i32m8_tumu(vbool4_t mask, vint32m8_t maskedoff, vfloat32m8_t src, size_t vl) {
  return vfcvt_rtz_x_tumu(mask, maskedoff, src, vl);
}

vuint32mf2_t test_vfcvt_xu_f_v_u32mf2_tumu(vbool64_t mask, vuint32mf2_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return vfcvt_xu_tumu(mask, maskedoff, src, vl);
}

vuint32mf2_t test_vfcvt_rtz_xu_f_v_u32mf2_tumu(vbool64_t mask, vuint32mf2_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return vfcvt_rtz_xu_tumu(mask, maskedoff, src, vl);
}

vuint32m1_t test_vfcvt_xu_f_v_u32m1_tumu(vbool32_t mask, vuint32m1_t maskedoff, vfloat32m1_t src, size_t vl) {
  return vfcvt_xu_tumu(mask, maskedoff, src, vl);
}

vuint32m1_t test_vfcvt_rtz_xu_f_v_u32m1_tumu(vbool32_t mask, vuint32m1_t maskedoff, vfloat32m1_t src, size_t vl) {
  return vfcvt_rtz_xu_tumu(mask, maskedoff, src, vl);
}

vuint32m2_t test_vfcvt_xu_f_v_u32m2_tumu(vbool16_t mask, vuint32m2_t maskedoff, vfloat32m2_t src, size_t vl) {
  return vfcvt_xu_tumu(mask, maskedoff, src, vl);
}

vuint32m2_t test_vfcvt_rtz_xu_f_v_u32m2_tumu(vbool16_t mask, vuint32m2_t maskedoff, vfloat32m2_t src, size_t vl) {
  return vfcvt_rtz_xu_tumu(mask, maskedoff, src, vl);
}

vuint32m4_t test_vfcvt_xu_f_v_u32m4_tumu(vbool8_t mask, vuint32m4_t maskedoff, vfloat32m4_t src, size_t vl) {
  return vfcvt_xu_tumu(mask, maskedoff, src, vl);
}

vuint32m4_t test_vfcvt_rtz_xu_f_v_u32m4_tumu(vbool8_t mask, vuint32m4_t maskedoff, vfloat32m4_t src, size_t vl) {
  return vfcvt_rtz_xu_tumu(mask, maskedoff, src, vl);
}

vuint32m8_t test_vfcvt_xu_f_v_u32m8_tumu(vbool4_t mask, vuint32m8_t maskedoff, vfloat32m8_t src, size_t vl) {
  return vfcvt_xu_tumu(mask, maskedoff, src, vl);
}

vuint32m8_t test_vfcvt_rtz_xu_f_v_u32m8_tumu(vbool4_t mask, vuint32m8_t maskedoff, vfloat32m8_t src, size_t vl) {
  return vfcvt_rtz_xu_tumu(mask, maskedoff, src, vl);
}

vfloat32mf2_t test_vfcvt_f_x_v_f32mf2_tumu(vbool64_t mask, vfloat32mf2_t maskedoff, vint32mf2_t src, size_t vl) {
  return vfcvt_f_tumu(mask, maskedoff, src, vl);
}

vfloat32m1_t test_vfcvt_f_x_v_f32m1_tumu(vbool32_t mask, vfloat32m1_t maskedoff, vint32m1_t src, size_t vl) {
  return vfcvt_f_tumu(mask, maskedoff, src, vl);
}

vfloat32m2_t test_vfcvt_f_x_v_f32m2_tumu(vbool16_t mask, vfloat32m2_t maskedoff, vint32m2_t src, size_t vl) {
  return vfcvt_f_tumu(mask, maskedoff, src, vl);
}

vfloat32m4_t test_vfcvt_f_x_v_f32m4_tumu(vbool8_t mask, vfloat32m4_t maskedoff, vint32m4_t src, size_t vl) {
  return vfcvt_f_tumu(mask, maskedoff, src, vl);
}

vfloat32m8_t test_vfcvt_f_x_v_f32m8_tumu(vbool4_t mask, vfloat32m8_t maskedoff, vint32m8_t src, size_t vl) {
  return vfcvt_f_tumu(mask, maskedoff, src, vl);
}

vfloat32mf2_t test_vfcvt_f_xu_v_f32mf2_tumu(vbool64_t mask, vfloat32mf2_t maskedoff, vuint32mf2_t src, size_t vl) {
  return vfcvt_f_tumu(mask, maskedoff, src, vl);
}

vfloat32m1_t test_vfcvt_f_xu_v_f32m1_tumu(vbool32_t mask, vfloat32m1_t maskedoff, vuint32m1_t src, size_t vl) {
  return vfcvt_f_tumu(mask, maskedoff, src, vl);
}

vfloat32m2_t test_vfcvt_f_xu_v_f32m2_tumu(vbool16_t mask, vfloat32m2_t maskedoff, vuint32m2_t src, size_t vl) {
  return vfcvt_f_tumu(mask, maskedoff, src, vl);
}

vfloat32m4_t test_vfcvt_f_xu_v_f32m4_tumu(vbool8_t mask, vfloat32m4_t maskedoff, vuint32m4_t src, size_t vl) {
  return vfcvt_f_tumu(mask, maskedoff, src, vl);
}

vfloat32m8_t test_vfcvt_f_xu_v_f32m8_tumu(vbool4_t mask, vfloat32m8_t maskedoff, vuint32m8_t src, size_t vl) {
  return vfcvt_f_tumu(mask, maskedoff, src, vl);
}

vint64m1_t test_vfcvt_x_f_v_i64m1_tumu(vbool64_t mask, vint64m1_t maskedoff, vfloat64m1_t src, size_t vl) {
  return vfcvt_x_tumu(mask, maskedoff, src, vl);
}

vint64m1_t test_vfcvt_rtz_x_f_v_i64m1_tumu(vbool64_t mask, vint64m1_t maskedoff, vfloat64m1_t src, size_t vl) {
  return vfcvt_rtz_x_tumu(mask, maskedoff, src, vl);
}

vint64m2_t test_vfcvt_x_f_v_i64m2_tumu(vbool32_t mask, vint64m2_t maskedoff, vfloat64m2_t src, size_t vl) {
  return vfcvt_x_tumu(mask, maskedoff, src, vl);
}

vint64m2_t test_vfcvt_rtz_x_f_v_i64m2_tumu(vbool32_t mask, vint64m2_t maskedoff, vfloat64m2_t src, size_t vl) {
  return vfcvt_rtz_x_tumu(mask, maskedoff, src, vl);
}

vint64m4_t test_vfcvt_x_f_v_i64m4_tumu(vbool16_t mask, vint64m4_t maskedoff, vfloat64m4_t src, size_t vl) {
  return vfcvt_x_tumu(mask, maskedoff, src, vl);
}

vint64m4_t test_vfcvt_rtz_x_f_v_i64m4_tumu(vbool16_t mask, vint64m4_t maskedoff, vfloat64m4_t src, size_t vl) {
  return vfcvt_rtz_x_tumu(mask, maskedoff, src, vl);
}

vint64m8_t test_vfcvt_x_f_v_i64m8_tumu(vbool8_t mask, vint64m8_t maskedoff, vfloat64m8_t src, size_t vl) {
  return vfcvt_x_tumu(mask, maskedoff, src, vl);
}

vint64m8_t test_vfcvt_rtz_x_f_v_i64m8_tumu(vbool8_t mask, vint64m8_t maskedoff, vfloat64m8_t src, size_t vl) {
  return vfcvt_rtz_x_tumu(mask, maskedoff, src, vl);
}

vuint64m1_t test_vfcvt_xu_f_v_u64m1_tumu(vbool64_t mask, vuint64m1_t maskedoff, vfloat64m1_t src, size_t vl) {
  return vfcvt_xu_tumu(mask, maskedoff, src, vl);
}

vuint64m1_t test_vfcvt_rtz_xu_f_v_u64m1_tumu(vbool64_t mask, vuint64m1_t maskedoff, vfloat64m1_t src, size_t vl) {
  return vfcvt_rtz_xu_tumu(mask, maskedoff, src, vl);
}

vuint64m2_t test_vfcvt_xu_f_v_u64m2_tumu(vbool32_t mask, vuint64m2_t maskedoff, vfloat64m2_t src, size_t vl) {
  return vfcvt_xu_tumu(mask, maskedoff, src, vl);
}

vuint64m2_t test_vfcvt_rtz_xu_f_v_u64m2_tumu(vbool32_t mask, vuint64m2_t maskedoff, vfloat64m2_t src, size_t vl) {
  return vfcvt_rtz_xu_tumu(mask, maskedoff, src, vl);
}

vuint64m4_t test_vfcvt_xu_f_v_u64m4_tumu(vbool16_t mask, vuint64m4_t maskedoff, vfloat64m4_t src, size_t vl) {
  return vfcvt_xu_tumu(mask, maskedoff, src, vl);
}

vuint64m4_t test_vfcvt_rtz_xu_f_v_u64m4_tumu(vbool16_t mask, vuint64m4_t maskedoff, vfloat64m4_t src, size_t vl) {
  return vfcvt_rtz_xu_tumu(mask, maskedoff, src, vl);
}

vuint64m8_t test_vfcvt_xu_f_v_u64m8_tumu(vbool8_t mask, vuint64m8_t maskedoff, vfloat64m8_t src, size_t vl) {
  return vfcvt_xu_tumu(mask, maskedoff, src, vl);
}

vuint64m8_t test_vfcvt_rtz_xu_f_v_u64m8_tumu(vbool8_t mask, vuint64m8_t maskedoff, vfloat64m8_t src, size_t vl) {
  return vfcvt_rtz_xu_tumu(mask, maskedoff, src, vl);
}

vfloat64m1_t test_vfcvt_f_x_v_f64m1_tumu(vbool64_t mask, vfloat64m1_t maskedoff, vint64m1_t src, size_t vl) {
  return vfcvt_f_tumu(mask, maskedoff, src, vl);
}

vfloat64m2_t test_vfcvt_f_x_v_f64m2_tumu(vbool32_t mask, vfloat64m2_t maskedoff, vint64m2_t src, size_t vl) {
  return vfcvt_f_tumu(mask, maskedoff, src, vl);
}

vfloat64m4_t test_vfcvt_f_x_v_f64m4_tumu(vbool16_t mask, vfloat64m4_t maskedoff, vint64m4_t src, size_t vl) {
  return vfcvt_f_tumu(mask, maskedoff, src, vl);
}

vfloat64m8_t test_vfcvt_f_x_v_f64m8_tumu(vbool8_t mask, vfloat64m8_t maskedoff, vint64m8_t src, size_t vl) {
  return vfcvt_f_tumu(mask, maskedoff, src, vl);
}

vfloat64m1_t test_vfcvt_f_xu_v_f64m1_tumu(vbool64_t mask, vfloat64m1_t maskedoff, vuint64m1_t src, size_t vl) {
  return vfcvt_f_tumu(mask, maskedoff, src, vl);
}

vfloat64m2_t test_vfcvt_f_xu_v_f64m2_tumu(vbool32_t mask, vfloat64m2_t maskedoff, vuint64m2_t src, size_t vl) {
  return vfcvt_f_tumu(mask, maskedoff, src, vl);
}

vfloat64m4_t test_vfcvt_f_xu_v_f64m4_tumu(vbool16_t mask, vfloat64m4_t maskedoff, vuint64m4_t src, size_t vl) {
  return vfcvt_f_tumu(mask, maskedoff, src, vl);
}

vfloat64m8_t test_vfcvt_f_xu_v_f64m8_tumu(vbool8_t mask, vfloat64m8_t maskedoff, vuint64m8_t src, size_t vl) {
  return vfcvt_f_tumu(mask, maskedoff, src, vl);
}

vint16mf4_t test_vfcvt_x_f_v_i16mf4_tama(vbool64_t mask, vfloat16mf4_t src, size_t vl) {
  return vfcvt_x_tama(mask, src, vl);
}

vint16mf4_t test_vfcvt_rtz_x_f_v_i16mf4_tama(vbool64_t mask, vfloat16mf4_t src, size_t vl) {
  return vfcvt_rtz_x_tama(mask, src, vl);
}

vint16mf2_t test_vfcvt_x_f_v_i16mf2_tama(vbool32_t mask, vfloat16mf2_t src, size_t vl) {
  return vfcvt_x_tama(mask, src, vl);
}

vint16mf2_t test_vfcvt_rtz_x_f_v_i16mf2_tama(vbool32_t mask, vfloat16mf2_t src, size_t vl) {
  return vfcvt_rtz_x_tama(mask, src, vl);
}

vint16m1_t test_vfcvt_x_f_v_i16m1_tama(vbool16_t mask, vfloat16m1_t src, size_t vl) {
  return vfcvt_x_tama(mask, src, vl);
}

vint16m1_t test_vfcvt_rtz_x_f_v_i16m1_tama(vbool16_t mask, vfloat16m1_t src, size_t vl) {
  return vfcvt_rtz_x_tama(mask, src, vl);
}

vint16m2_t test_vfcvt_x_f_v_i16m2_tama(vbool8_t mask, vfloat16m2_t src, size_t vl) {
  return vfcvt_x_tama(mask, src, vl);
}

vint16m2_t test_vfcvt_rtz_x_f_v_i16m2_tama(vbool8_t mask, vfloat16m2_t src, size_t vl) {
  return vfcvt_rtz_x_tama(mask, src, vl);
}

vint16m4_t test_vfcvt_x_f_v_i16m4_tama(vbool4_t mask, vfloat16m4_t src, size_t vl) {
  return vfcvt_x_tama(mask, src, vl);
}

vint16m4_t test_vfcvt_rtz_x_f_v_i16m4_tama(vbool4_t mask, vfloat16m4_t src, size_t vl) {
  return vfcvt_rtz_x_tama(mask, src, vl);
}

vint16m8_t test_vfcvt_x_f_v_i16m8_tama(vbool2_t mask, vfloat16m8_t src, size_t vl) {
  return vfcvt_x_tama(mask, src, vl);
}

vint16m8_t test_vfcvt_rtz_x_f_v_i16m8_tama(vbool2_t mask, vfloat16m8_t src, size_t vl) {
  return vfcvt_rtz_x_tama(mask, src, vl);
}

vuint16mf4_t test_vfcvt_xu_f_v_u16mf4_tama(vbool64_t mask, vfloat16mf4_t src, size_t vl) {
  return vfcvt_xu_tama(mask, src, vl);
}

vuint16mf4_t test_vfcvt_rtz_xu_f_v_u16mf4_tama(vbool64_t mask, vfloat16mf4_t src, size_t vl) {
  return vfcvt_rtz_xu_tama(mask, src, vl);
}

vuint16mf2_t test_vfcvt_xu_f_v_u16mf2_tama(vbool32_t mask, vfloat16mf2_t src, size_t vl) {
  return vfcvt_xu_tama(mask, src, vl);
}

vuint16mf2_t test_vfcvt_rtz_xu_f_v_u16mf2_tama(vbool32_t mask, vfloat16mf2_t src, size_t vl) {
  return vfcvt_rtz_xu_tama(mask, src, vl);
}

vuint16m1_t test_vfcvt_xu_f_v_u16m1_tama(vbool16_t mask, vfloat16m1_t src, size_t vl) {
  return vfcvt_xu_tama(mask, src, vl);
}

vuint16m1_t test_vfcvt_rtz_xu_f_v_u16m1_tama(vbool16_t mask, vfloat16m1_t src, size_t vl) {
  return vfcvt_rtz_xu_tama(mask, src, vl);
}

vuint16m2_t test_vfcvt_xu_f_v_u16m2_tama(vbool8_t mask, vfloat16m2_t src, size_t vl) {
  return vfcvt_xu_tama(mask, src, vl);
}

vuint16m2_t test_vfcvt_rtz_xu_f_v_u16m2_tama(vbool8_t mask, vfloat16m2_t src, size_t vl) {
  return vfcvt_rtz_xu_tama(mask, src, vl);
}

vuint16m4_t test_vfcvt_xu_f_v_u16m4_tama(vbool4_t mask, vfloat16m4_t src, size_t vl) {
  return vfcvt_xu_tama(mask, src, vl);
}

vuint16m4_t test_vfcvt_rtz_xu_f_v_u16m4_tama(vbool4_t mask, vfloat16m4_t src, size_t vl) {
  return vfcvt_rtz_xu_tama(mask, src, vl);
}

vuint16m8_t test_vfcvt_xu_f_v_u16m8_tama(vbool2_t mask, vfloat16m8_t src, size_t vl) {
  return vfcvt_xu_tama(mask, src, vl);
}

vuint16m8_t test_vfcvt_rtz_xu_f_v_u16m8_tama(vbool2_t mask, vfloat16m8_t src, size_t vl) {
  return vfcvt_rtz_xu_tama(mask, src, vl);
}

vfloat16mf4_t test_vfcvt_f_x_v_f16mf4_tama(vbool64_t mask, vint16mf4_t src, size_t vl) {
  return vfcvt_f_tama(mask, src, vl);
}

vfloat16mf2_t test_vfcvt_f_x_v_f16mf2_tama(vbool32_t mask, vint16mf2_t src, size_t vl) {
  return vfcvt_f_tama(mask, src, vl);
}

vfloat16m1_t test_vfcvt_f_x_v_f16m1_tama(vbool16_t mask, vint16m1_t src, size_t vl) {
  return vfcvt_f_tama(mask, src, vl);
}

vfloat16m2_t test_vfcvt_f_x_v_f16m2_tama(vbool8_t mask, vint16m2_t src, size_t vl) {
  return vfcvt_f_tama(mask, src, vl);
}

vfloat16m4_t test_vfcvt_f_x_v_f16m4_tama(vbool4_t mask, vint16m4_t src, size_t vl) {
  return vfcvt_f_tama(mask, src, vl);
}

vfloat16m8_t test_vfcvt_f_x_v_f16m8_tama(vbool2_t mask, vint16m8_t src, size_t vl) {
  return vfcvt_f_tama(mask, src, vl);
}

vfloat16mf4_t test_vfcvt_f_xu_v_f16mf4_tama(vbool64_t mask, vuint16mf4_t src, size_t vl) {
  return vfcvt_f_tama(mask, src, vl);
}

vfloat16mf2_t test_vfcvt_f_xu_v_f16mf2_tama(vbool32_t mask, vuint16mf2_t src, size_t vl) {
  return vfcvt_f_tama(mask, src, vl);
}

vfloat16m1_t test_vfcvt_f_xu_v_f16m1_tama(vbool16_t mask, vuint16m1_t src, size_t vl) {
  return vfcvt_f_tama(mask, src, vl);
}

vfloat16m2_t test_vfcvt_f_xu_v_f16m2_tama(vbool8_t mask, vuint16m2_t src, size_t vl) {
  return vfcvt_f_tama(mask, src, vl);
}

vfloat16m4_t test_vfcvt_f_xu_v_f16m4_tama(vbool4_t mask, vuint16m4_t src, size_t vl) {
  return vfcvt_f_tama(mask, src, vl);
}

vfloat16m8_t test_vfcvt_f_xu_v_f16m8_tama(vbool2_t mask, vuint16m8_t src, size_t vl) {
  return vfcvt_f_tama(mask, src, vl);
}

vint32mf2_t test_vfcvt_x_f_v_i32mf2_tama(vbool64_t mask, vfloat32mf2_t src, size_t vl) {
  return vfcvt_x_tama(mask, src, vl);
}

vint32mf2_t test_vfcvt_rtz_x_f_v_i32mf2_tama(vbool64_t mask, vfloat32mf2_t src, size_t vl) {
  return vfcvt_rtz_x_tama(mask, src, vl);
}

vint32m1_t test_vfcvt_x_f_v_i32m1_tama(vbool32_t mask, vfloat32m1_t src, size_t vl) {
  return vfcvt_x_tama(mask, src, vl);
}

vint32m1_t test_vfcvt_rtz_x_f_v_i32m1_tama(vbool32_t mask, vfloat32m1_t src, size_t vl) {
  return vfcvt_rtz_x_tama(mask, src, vl);
}

vint32m2_t test_vfcvt_x_f_v_i32m2_tama(vbool16_t mask, vfloat32m2_t src, size_t vl) {
  return vfcvt_x_tama(mask, src, vl);
}

vint32m2_t test_vfcvt_rtz_x_f_v_i32m2_tama(vbool16_t mask, vfloat32m2_t src, size_t vl) {
  return vfcvt_rtz_x_tama(mask, src, vl);
}

vint32m4_t test_vfcvt_x_f_v_i32m4_tama(vbool8_t mask, vfloat32m4_t src, size_t vl) {
  return vfcvt_x_tama(mask, src, vl);
}

vint32m4_t test_vfcvt_rtz_x_f_v_i32m4_tama(vbool8_t mask, vfloat32m4_t src, size_t vl) {
  return vfcvt_rtz_x_tama(mask, src, vl);
}

vint32m8_t test_vfcvt_x_f_v_i32m8_tama(vbool4_t mask, vfloat32m8_t src, size_t vl) {
  return vfcvt_x_tama(mask, src, vl);
}

vint32m8_t test_vfcvt_rtz_x_f_v_i32m8_tama(vbool4_t mask, vfloat32m8_t src, size_t vl) {
  return vfcvt_rtz_x_tama(mask, src, vl);
}

vuint32mf2_t test_vfcvt_xu_f_v_u32mf2_tama(vbool64_t mask, vfloat32mf2_t src, size_t vl) {
  return vfcvt_xu_tama(mask, src, vl);
}

vuint32mf2_t test_vfcvt_rtz_xu_f_v_u32mf2_tama(vbool64_t mask, vfloat32mf2_t src, size_t vl) {
  return vfcvt_rtz_xu_tama(mask, src, vl);
}

vuint32m1_t test_vfcvt_xu_f_v_u32m1_tama(vbool32_t mask, vfloat32m1_t src, size_t vl) {
  return vfcvt_xu_tama(mask, src, vl);
}

vuint32m1_t test_vfcvt_rtz_xu_f_v_u32m1_tama(vbool32_t mask, vfloat32m1_t src, size_t vl) {
  return vfcvt_rtz_xu_tama(mask, src, vl);
}

vuint32m2_t test_vfcvt_xu_f_v_u32m2_tama(vbool16_t mask, vfloat32m2_t src, size_t vl) {
  return vfcvt_xu_tama(mask, src, vl);
}

vuint32m2_t test_vfcvt_rtz_xu_f_v_u32m2_tama(vbool16_t mask, vfloat32m2_t src, size_t vl) {
  return vfcvt_rtz_xu_tama(mask, src, vl);
}

vuint32m4_t test_vfcvt_xu_f_v_u32m4_tama(vbool8_t mask, vfloat32m4_t src, size_t vl) {
  return vfcvt_xu_tama(mask, src, vl);
}

vuint32m4_t test_vfcvt_rtz_xu_f_v_u32m4_tama(vbool8_t mask, vfloat32m4_t src, size_t vl) {
  return vfcvt_rtz_xu_tama(mask, src, vl);
}

vuint32m8_t test_vfcvt_xu_f_v_u32m8_tama(vbool4_t mask, vfloat32m8_t src, size_t vl) {
  return vfcvt_xu_tama(mask, src, vl);
}

vuint32m8_t test_vfcvt_rtz_xu_f_v_u32m8_tama(vbool4_t mask, vfloat32m8_t src, size_t vl) {
  return vfcvt_rtz_xu_tama(mask, src, vl);
}

vfloat32mf2_t test_vfcvt_f_x_v_f32mf2_tama(vbool64_t mask, vint32mf2_t src, size_t vl) {
  return vfcvt_f_tama(mask, src, vl);
}

vfloat32m1_t test_vfcvt_f_x_v_f32m1_tama(vbool32_t mask, vint32m1_t src, size_t vl) {
  return vfcvt_f_tama(mask, src, vl);
}

vfloat32m2_t test_vfcvt_f_x_v_f32m2_tama(vbool16_t mask, vint32m2_t src, size_t vl) {
  return vfcvt_f_tama(mask, src, vl);
}

vfloat32m4_t test_vfcvt_f_x_v_f32m4_tama(vbool8_t mask, vint32m4_t src, size_t vl) {
  return vfcvt_f_tama(mask, src, vl);
}

vfloat32m8_t test_vfcvt_f_x_v_f32m8_tama(vbool4_t mask, vint32m8_t src, size_t vl) {
  return vfcvt_f_tama(mask, src, vl);
}

vfloat32mf2_t test_vfcvt_f_xu_v_f32mf2_tama(vbool64_t mask, vuint32mf2_t src, size_t vl) {
  return vfcvt_f_tama(mask, src, vl);
}

vfloat32m1_t test_vfcvt_f_xu_v_f32m1_tama(vbool32_t mask, vuint32m1_t src, size_t vl) {
  return vfcvt_f_tama(mask, src, vl);
}

vfloat32m2_t test_vfcvt_f_xu_v_f32m2_tama(vbool16_t mask, vuint32m2_t src, size_t vl) {
  return vfcvt_f_tama(mask, src, vl);
}

vfloat32m4_t test_vfcvt_f_xu_v_f32m4_tama(vbool8_t mask, vuint32m4_t src, size_t vl) {
  return vfcvt_f_tama(mask, src, vl);
}

vfloat32m8_t test_vfcvt_f_xu_v_f32m8_tama(vbool4_t mask, vuint32m8_t src, size_t vl) {
  return vfcvt_f_tama(mask, src, vl);
}

vint64m1_t test_vfcvt_x_f_v_i64m1_tama(vbool64_t mask, vfloat64m1_t src, size_t vl) {
  return vfcvt_x_tama(mask, src, vl);
}

vint64m1_t test_vfcvt_rtz_x_f_v_i64m1_tama(vbool64_t mask, vfloat64m1_t src, size_t vl) {
  return vfcvt_rtz_x_tama(mask, src, vl);
}

vint64m2_t test_vfcvt_x_f_v_i64m2_tama(vbool32_t mask, vfloat64m2_t src, size_t vl) {
  return vfcvt_x_tama(mask, src, vl);
}

vint64m2_t test_vfcvt_rtz_x_f_v_i64m2_tama(vbool32_t mask, vfloat64m2_t src, size_t vl) {
  return vfcvt_rtz_x_tama(mask, src, vl);
}

vint64m4_t test_vfcvt_x_f_v_i64m4_tama(vbool16_t mask, vfloat64m4_t src, size_t vl) {
  return vfcvt_x_tama(mask, src, vl);
}

vint64m4_t test_vfcvt_rtz_x_f_v_i64m4_tama(vbool16_t mask, vfloat64m4_t src, size_t vl) {
  return vfcvt_rtz_x_tama(mask, src, vl);
}

vint64m8_t test_vfcvt_x_f_v_i64m8_tama(vbool8_t mask, vfloat64m8_t src, size_t vl) {
  return vfcvt_x_tama(mask, src, vl);
}

vint64m8_t test_vfcvt_rtz_x_f_v_i64m8_tama(vbool8_t mask, vfloat64m8_t src, size_t vl) {
  return vfcvt_rtz_x_tama(mask, src, vl);
}

vuint64m1_t test_vfcvt_xu_f_v_u64m1_tama(vbool64_t mask, vfloat64m1_t src, size_t vl) {
  return vfcvt_xu_tama(mask, src, vl);
}

vuint64m1_t test_vfcvt_rtz_xu_f_v_u64m1_tama(vbool64_t mask, vfloat64m1_t src, size_t vl) {
  return vfcvt_rtz_xu_tama(mask, src, vl);
}

vuint64m2_t test_vfcvt_xu_f_v_u64m2_tama(vbool32_t mask, vfloat64m2_t src, size_t vl) {
  return vfcvt_xu_tama(mask, src, vl);
}

vuint64m2_t test_vfcvt_rtz_xu_f_v_u64m2_tama(vbool32_t mask, vfloat64m2_t src, size_t vl) {
  return vfcvt_rtz_xu_tama(mask, src, vl);
}

vuint64m4_t test_vfcvt_xu_f_v_u64m4_tama(vbool16_t mask, vfloat64m4_t src, size_t vl) {
  return vfcvt_xu_tama(mask, src, vl);
}

vuint64m4_t test_vfcvt_rtz_xu_f_v_u64m4_tama(vbool16_t mask, vfloat64m4_t src, size_t vl) {
  return vfcvt_rtz_xu_tama(mask, src, vl);
}

vuint64m8_t test_vfcvt_xu_f_v_u64m8_tama(vbool8_t mask, vfloat64m8_t src, size_t vl) {
  return vfcvt_xu_tama(mask, src, vl);
}

vuint64m8_t test_vfcvt_rtz_xu_f_v_u64m8_tama(vbool8_t mask, vfloat64m8_t src, size_t vl) {
  return vfcvt_rtz_xu_tama(mask, src, vl);
}

vfloat64m1_t test_vfcvt_f_x_v_f64m1_tama(vbool64_t mask, vint64m1_t src, size_t vl) {
  return vfcvt_f_tama(mask, src, vl);
}

vfloat64m2_t test_vfcvt_f_x_v_f64m2_tama(vbool32_t mask, vint64m2_t src, size_t vl) {
  return vfcvt_f_tama(mask, src, vl);
}

vfloat64m4_t test_vfcvt_f_x_v_f64m4_tama(vbool16_t mask, vint64m4_t src, size_t vl) {
  return vfcvt_f_tama(mask, src, vl);
}

vfloat64m8_t test_vfcvt_f_x_v_f64m8_tama(vbool8_t mask, vint64m8_t src, size_t vl) {
  return vfcvt_f_tama(mask, src, vl);
}

vfloat64m1_t test_vfcvt_f_xu_v_f64m1_tama(vbool64_t mask, vuint64m1_t src, size_t vl) {
  return vfcvt_f_tama(mask, src, vl);
}

vfloat64m2_t test_vfcvt_f_xu_v_f64m2_tama(vbool32_t mask, vuint64m2_t src, size_t vl) {
  return vfcvt_f_tama(mask, src, vl);
}

vfloat64m4_t test_vfcvt_f_xu_v_f64m4_tama(vbool16_t mask, vuint64m4_t src, size_t vl) {
  return vfcvt_f_tama(mask, src, vl);
}

vfloat64m8_t test_vfcvt_f_xu_v_f64m8_tama(vbool8_t mask, vuint64m8_t src, size_t vl) {
  return vfcvt_f_tama(mask, src, vl);
}

vint16mf4_t test_vfcvt_x_f_v_i16mf4_tamu(vbool64_t mask, vint16mf4_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return vfcvt_x_tamu(mask, maskedoff, src, vl);
}

vint16mf4_t test_vfcvt_rtz_x_f_v_i16mf4_tamu(vbool64_t mask, vint16mf4_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return vfcvt_rtz_x_tamu(mask, maskedoff, src, vl);
}

vint16mf2_t test_vfcvt_x_f_v_i16mf2_tamu(vbool32_t mask, vint16mf2_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return vfcvt_x_tamu(mask, maskedoff, src, vl);
}

vint16mf2_t test_vfcvt_rtz_x_f_v_i16mf2_tamu(vbool32_t mask, vint16mf2_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return vfcvt_rtz_x_tamu(mask, maskedoff, src, vl);
}

vint16m1_t test_vfcvt_x_f_v_i16m1_tamu(vbool16_t mask, vint16m1_t maskedoff, vfloat16m1_t src, size_t vl) {
  return vfcvt_x_tamu(mask, maskedoff, src, vl);
}

vint16m1_t test_vfcvt_rtz_x_f_v_i16m1_tamu(vbool16_t mask, vint16m1_t maskedoff, vfloat16m1_t src, size_t vl) {
  return vfcvt_rtz_x_tamu(mask, maskedoff, src, vl);
}

vint16m2_t test_vfcvt_x_f_v_i16m2_tamu(vbool8_t mask, vint16m2_t maskedoff, vfloat16m2_t src, size_t vl) {
  return vfcvt_x_tamu(mask, maskedoff, src, vl);
}

vint16m2_t test_vfcvt_rtz_x_f_v_i16m2_tamu(vbool8_t mask, vint16m2_t maskedoff, vfloat16m2_t src, size_t vl) {
  return vfcvt_rtz_x_tamu(mask, maskedoff, src, vl);
}

vint16m4_t test_vfcvt_x_f_v_i16m4_tamu(vbool4_t mask, vint16m4_t maskedoff, vfloat16m4_t src, size_t vl) {
  return vfcvt_x_tamu(mask, maskedoff, src, vl);
}

vint16m4_t test_vfcvt_rtz_x_f_v_i16m4_tamu(vbool4_t mask, vint16m4_t maskedoff, vfloat16m4_t src, size_t vl) {
  return vfcvt_rtz_x_tamu(mask, maskedoff, src, vl);
}

vint16m8_t test_vfcvt_x_f_v_i16m8_tamu(vbool2_t mask, vint16m8_t maskedoff, vfloat16m8_t src, size_t vl) {
  return vfcvt_x_tamu(mask, maskedoff, src, vl);
}

vint16m8_t test_vfcvt_rtz_x_f_v_i16m8_tamu(vbool2_t mask, vint16m8_t maskedoff, vfloat16m8_t src, size_t vl) {
  return vfcvt_rtz_x_tamu(mask, maskedoff, src, vl);
}

vuint16mf4_t test_vfcvt_xu_f_v_u16mf4_tamu(vbool64_t mask, vuint16mf4_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return vfcvt_xu_tamu(mask, maskedoff, src, vl);
}

vuint16mf4_t test_vfcvt_rtz_xu_f_v_u16mf4_tamu(vbool64_t mask, vuint16mf4_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return vfcvt_rtz_xu_tamu(mask, maskedoff, src, vl);
}

vuint16mf2_t test_vfcvt_xu_f_v_u16mf2_tamu(vbool32_t mask, vuint16mf2_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return vfcvt_xu_tamu(mask, maskedoff, src, vl);
}

vuint16mf2_t test_vfcvt_rtz_xu_f_v_u16mf2_tamu(vbool32_t mask, vuint16mf2_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return vfcvt_rtz_xu_tamu(mask, maskedoff, src, vl);
}

vuint16m1_t test_vfcvt_xu_f_v_u16m1_tamu(vbool16_t mask, vuint16m1_t maskedoff, vfloat16m1_t src, size_t vl) {
  return vfcvt_xu_tamu(mask, maskedoff, src, vl);
}

vuint16m1_t test_vfcvt_rtz_xu_f_v_u16m1_tamu(vbool16_t mask, vuint16m1_t maskedoff, vfloat16m1_t src, size_t vl) {
  return vfcvt_rtz_xu_tamu(mask, maskedoff, src, vl);
}

vuint16m2_t test_vfcvt_xu_f_v_u16m2_tamu(vbool8_t mask, vuint16m2_t maskedoff, vfloat16m2_t src, size_t vl) {
  return vfcvt_xu_tamu(mask, maskedoff, src, vl);
}

vuint16m2_t test_vfcvt_rtz_xu_f_v_u16m2_tamu(vbool8_t mask, vuint16m2_t maskedoff, vfloat16m2_t src, size_t vl) {
  return vfcvt_rtz_xu_tamu(mask, maskedoff, src, vl);
}

vuint16m4_t test_vfcvt_xu_f_v_u16m4_tamu(vbool4_t mask, vuint16m4_t maskedoff, vfloat16m4_t src, size_t vl) {
  return vfcvt_xu_tamu(mask, maskedoff, src, vl);
}

vuint16m4_t test_vfcvt_rtz_xu_f_v_u16m4_tamu(vbool4_t mask, vuint16m4_t maskedoff, vfloat16m4_t src, size_t vl) {
  return vfcvt_rtz_xu_tamu(mask, maskedoff, src, vl);
}

vuint16m8_t test_vfcvt_xu_f_v_u16m8_tamu(vbool2_t mask, vuint16m8_t maskedoff, vfloat16m8_t src, size_t vl) {
  return vfcvt_xu_tamu(mask, maskedoff, src, vl);
}

vuint16m8_t test_vfcvt_rtz_xu_f_v_u16m8_tamu(vbool2_t mask, vuint16m8_t maskedoff, vfloat16m8_t src, size_t vl) {
  return vfcvt_rtz_xu_tamu(mask, maskedoff, src, vl);
}

vfloat16mf4_t test_vfcvt_f_x_v_f16mf4_tamu(vbool64_t mask, vfloat16mf4_t maskedoff, vint16mf4_t src, size_t vl) {
  return vfcvt_f_tamu(mask, maskedoff, src, vl);
}

vfloat16mf2_t test_vfcvt_f_x_v_f16mf2_tamu(vbool32_t mask, vfloat16mf2_t maskedoff, vint16mf2_t src, size_t vl) {
  return vfcvt_f_tamu(mask, maskedoff, src, vl);
}

vfloat16m1_t test_vfcvt_f_x_v_f16m1_tamu(vbool16_t mask, vfloat16m1_t maskedoff, vint16m1_t src, size_t vl) {
  return vfcvt_f_tamu(mask, maskedoff, src, vl);
}

vfloat16m2_t test_vfcvt_f_x_v_f16m2_tamu(vbool8_t mask, vfloat16m2_t maskedoff, vint16m2_t src, size_t vl) {
  return vfcvt_f_tamu(mask, maskedoff, src, vl);
}

vfloat16m4_t test_vfcvt_f_x_v_f16m4_tamu(vbool4_t mask, vfloat16m4_t maskedoff, vint16m4_t src, size_t vl) {
  return vfcvt_f_tamu(mask, maskedoff, src, vl);
}

vfloat16m8_t test_vfcvt_f_x_v_f16m8_tamu(vbool2_t mask, vfloat16m8_t maskedoff, vint16m8_t src, size_t vl) {
  return vfcvt_f_tamu(mask, maskedoff, src, vl);
}

vfloat16mf4_t test_vfcvt_f_xu_v_f16mf4_tamu(vbool64_t mask, vfloat16mf4_t maskedoff, vuint16mf4_t src, size_t vl) {
  return vfcvt_f_tamu(mask, maskedoff, src, vl);
}

vfloat16mf2_t test_vfcvt_f_xu_v_f16mf2_tamu(vbool32_t mask, vfloat16mf2_t maskedoff, vuint16mf2_t src, size_t vl) {
  return vfcvt_f_tamu(mask, maskedoff, src, vl);
}

vfloat16m1_t test_vfcvt_f_xu_v_f16m1_tamu(vbool16_t mask, vfloat16m1_t maskedoff, vuint16m1_t src, size_t vl) {
  return vfcvt_f_tamu(mask, maskedoff, src, vl);
}

vfloat16m2_t test_vfcvt_f_xu_v_f16m2_tamu(vbool8_t mask, vfloat16m2_t maskedoff, vuint16m2_t src, size_t vl) {
  return vfcvt_f_tamu(mask, maskedoff, src, vl);
}

vfloat16m4_t test_vfcvt_f_xu_v_f16m4_tamu(vbool4_t mask, vfloat16m4_t maskedoff, vuint16m4_t src, size_t vl) {
  return vfcvt_f_tamu(mask, maskedoff, src, vl);
}

vfloat16m8_t test_vfcvt_f_xu_v_f16m8_tamu(vbool2_t mask, vfloat16m8_t maskedoff, vuint16m8_t src, size_t vl) {
  return vfcvt_f_tamu(mask, maskedoff, src, vl);
}

vint32mf2_t test_vfcvt_x_f_v_i32mf2_tamu(vbool64_t mask, vint32mf2_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return vfcvt_x_tamu(mask, maskedoff, src, vl);
}

vint32mf2_t test_vfcvt_rtz_x_f_v_i32mf2_tamu(vbool64_t mask, vint32mf2_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return vfcvt_rtz_x_tamu(mask, maskedoff, src, vl);
}

vint32m1_t test_vfcvt_x_f_v_i32m1_tamu(vbool32_t mask, vint32m1_t maskedoff, vfloat32m1_t src, size_t vl) {
  return vfcvt_x_tamu(mask, maskedoff, src, vl);
}

vint32m1_t test_vfcvt_rtz_x_f_v_i32m1_tamu(vbool32_t mask, vint32m1_t maskedoff, vfloat32m1_t src, size_t vl) {
  return vfcvt_rtz_x_tamu(mask, maskedoff, src, vl);
}

vint32m2_t test_vfcvt_x_f_v_i32m2_tamu(vbool16_t mask, vint32m2_t maskedoff, vfloat32m2_t src, size_t vl) {
  return vfcvt_x_tamu(mask, maskedoff, src, vl);
}

vint32m2_t test_vfcvt_rtz_x_f_v_i32m2_tamu(vbool16_t mask, vint32m2_t maskedoff, vfloat32m2_t src, size_t vl) {
  return vfcvt_rtz_x_tamu(mask, maskedoff, src, vl);
}

vint32m4_t test_vfcvt_x_f_v_i32m4_tamu(vbool8_t mask, vint32m4_t maskedoff, vfloat32m4_t src, size_t vl) {
  return vfcvt_x_tamu(mask, maskedoff, src, vl);
}

vint32m4_t test_vfcvt_rtz_x_f_v_i32m4_tamu(vbool8_t mask, vint32m4_t maskedoff, vfloat32m4_t src, size_t vl) {
  return vfcvt_rtz_x_tamu(mask, maskedoff, src, vl);
}

vint32m8_t test_vfcvt_x_f_v_i32m8_tamu(vbool4_t mask, vint32m8_t maskedoff, vfloat32m8_t src, size_t vl) {
  return vfcvt_x_tamu(mask, maskedoff, src, vl);
}

vint32m8_t test_vfcvt_rtz_x_f_v_i32m8_tamu(vbool4_t mask, vint32m8_t maskedoff, vfloat32m8_t src, size_t vl) {
  return vfcvt_rtz_x_tamu(mask, maskedoff, src, vl);
}

vuint32mf2_t test_vfcvt_xu_f_v_u32mf2_tamu(vbool64_t mask, vuint32mf2_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return vfcvt_xu_tamu(mask, maskedoff, src, vl);
}

vuint32mf2_t test_vfcvt_rtz_xu_f_v_u32mf2_tamu(vbool64_t mask, vuint32mf2_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return vfcvt_rtz_xu_tamu(mask, maskedoff, src, vl);
}

vuint32m1_t test_vfcvt_xu_f_v_u32m1_tamu(vbool32_t mask, vuint32m1_t maskedoff, vfloat32m1_t src, size_t vl) {
  return vfcvt_xu_tamu(mask, maskedoff, src, vl);
}

vuint32m1_t test_vfcvt_rtz_xu_f_v_u32m1_tamu(vbool32_t mask, vuint32m1_t maskedoff, vfloat32m1_t src, size_t vl) {
  return vfcvt_rtz_xu_tamu(mask, maskedoff, src, vl);
}

vuint32m2_t test_vfcvt_xu_f_v_u32m2_tamu(vbool16_t mask, vuint32m2_t maskedoff, vfloat32m2_t src, size_t vl) {
  return vfcvt_xu_tamu(mask, maskedoff, src, vl);
}

vuint32m2_t test_vfcvt_rtz_xu_f_v_u32m2_tamu(vbool16_t mask, vuint32m2_t maskedoff, vfloat32m2_t src, size_t vl) {
  return vfcvt_rtz_xu_tamu(mask, maskedoff, src, vl);
}

vuint32m4_t test_vfcvt_xu_f_v_u32m4_tamu(vbool8_t mask, vuint32m4_t maskedoff, vfloat32m4_t src, size_t vl) {
  return vfcvt_xu_tamu(mask, maskedoff, src, vl);
}

vuint32m4_t test_vfcvt_rtz_xu_f_v_u32m4_tamu(vbool8_t mask, vuint32m4_t maskedoff, vfloat32m4_t src, size_t vl) {
  return vfcvt_rtz_xu_tamu(mask, maskedoff, src, vl);
}

vuint32m8_t test_vfcvt_xu_f_v_u32m8_tamu(vbool4_t mask, vuint32m8_t maskedoff, vfloat32m8_t src, size_t vl) {
  return vfcvt_xu_tamu(mask, maskedoff, src, vl);
}

vuint32m8_t test_vfcvt_rtz_xu_f_v_u32m8_tamu(vbool4_t mask, vuint32m8_t maskedoff, vfloat32m8_t src, size_t vl) {
  return vfcvt_rtz_xu_tamu(mask, maskedoff, src, vl);
}

vfloat32mf2_t test_vfcvt_f_x_v_f32mf2_tamu(vbool64_t mask, vfloat32mf2_t maskedoff, vint32mf2_t src, size_t vl) {
  return vfcvt_f_tamu(mask, maskedoff, src, vl);
}

vfloat32m1_t test_vfcvt_f_x_v_f32m1_tamu(vbool32_t mask, vfloat32m1_t maskedoff, vint32m1_t src, size_t vl) {
  return vfcvt_f_tamu(mask, maskedoff, src, vl);
}

vfloat32m2_t test_vfcvt_f_x_v_f32m2_tamu(vbool16_t mask, vfloat32m2_t maskedoff, vint32m2_t src, size_t vl) {
  return vfcvt_f_tamu(mask, maskedoff, src, vl);
}

vfloat32m4_t test_vfcvt_f_x_v_f32m4_tamu(vbool8_t mask, vfloat32m4_t maskedoff, vint32m4_t src, size_t vl) {
  return vfcvt_f_tamu(mask, maskedoff, src, vl);
}

vfloat32m8_t test_vfcvt_f_x_v_f32m8_tamu(vbool4_t mask, vfloat32m8_t maskedoff, vint32m8_t src, size_t vl) {
  return vfcvt_f_tamu(mask, maskedoff, src, vl);
}

vfloat32mf2_t test_vfcvt_f_xu_v_f32mf2_tamu(vbool64_t mask, vfloat32mf2_t maskedoff, vuint32mf2_t src, size_t vl) {
  return vfcvt_f_tamu(mask, maskedoff, src, vl);
}

vfloat32m1_t test_vfcvt_f_xu_v_f32m1_tamu(vbool32_t mask, vfloat32m1_t maskedoff, vuint32m1_t src, size_t vl) {
  return vfcvt_f_tamu(mask, maskedoff, src, vl);
}

vfloat32m2_t test_vfcvt_f_xu_v_f32m2_tamu(vbool16_t mask, vfloat32m2_t maskedoff, vuint32m2_t src, size_t vl) {
  return vfcvt_f_tamu(mask, maskedoff, src, vl);
}

vfloat32m4_t test_vfcvt_f_xu_v_f32m4_tamu(vbool8_t mask, vfloat32m4_t maskedoff, vuint32m4_t src, size_t vl) {
  return vfcvt_f_tamu(mask, maskedoff, src, vl);
}

vfloat32m8_t test_vfcvt_f_xu_v_f32m8_tamu(vbool4_t mask, vfloat32m8_t maskedoff, vuint32m8_t src, size_t vl) {
  return vfcvt_f_tamu(mask, maskedoff, src, vl);
}

vint64m1_t test_vfcvt_x_f_v_i64m1_tamu(vbool64_t mask, vint64m1_t maskedoff, vfloat64m1_t src, size_t vl) {
  return vfcvt_x_tamu(mask, maskedoff, src, vl);
}

vint64m1_t test_vfcvt_rtz_x_f_v_i64m1_tamu(vbool64_t mask, vint64m1_t maskedoff, vfloat64m1_t src, size_t vl) {
  return vfcvt_rtz_x_tamu(mask, maskedoff, src, vl);
}

vint64m2_t test_vfcvt_x_f_v_i64m2_tamu(vbool32_t mask, vint64m2_t maskedoff, vfloat64m2_t src, size_t vl) {
  return vfcvt_x_tamu(mask, maskedoff, src, vl);
}

vint64m2_t test_vfcvt_rtz_x_f_v_i64m2_tamu(vbool32_t mask, vint64m2_t maskedoff, vfloat64m2_t src, size_t vl) {
  return vfcvt_rtz_x_tamu(mask, maskedoff, src, vl);
}

vint64m4_t test_vfcvt_x_f_v_i64m4_tamu(vbool16_t mask, vint64m4_t maskedoff, vfloat64m4_t src, size_t vl) {
  return vfcvt_x_tamu(mask, maskedoff, src, vl);
}

vint64m4_t test_vfcvt_rtz_x_f_v_i64m4_tamu(vbool16_t mask, vint64m4_t maskedoff, vfloat64m4_t src, size_t vl) {
  return vfcvt_rtz_x_tamu(mask, maskedoff, src, vl);
}

vint64m8_t test_vfcvt_x_f_v_i64m8_tamu(vbool8_t mask, vint64m8_t maskedoff, vfloat64m8_t src, size_t vl) {
  return vfcvt_x_tamu(mask, maskedoff, src, vl);
}

vint64m8_t test_vfcvt_rtz_x_f_v_i64m8_tamu(vbool8_t mask, vint64m8_t maskedoff, vfloat64m8_t src, size_t vl) {
  return vfcvt_rtz_x_tamu(mask, maskedoff, src, vl);
}

vuint64m1_t test_vfcvt_xu_f_v_u64m1_tamu(vbool64_t mask, vuint64m1_t maskedoff, vfloat64m1_t src, size_t vl) {
  return vfcvt_xu_tamu(mask, maskedoff, src, vl);
}

vuint64m1_t test_vfcvt_rtz_xu_f_v_u64m1_tamu(vbool64_t mask, vuint64m1_t maskedoff, vfloat64m1_t src, size_t vl) {
  return vfcvt_rtz_xu_tamu(mask, maskedoff, src, vl);
}

vuint64m2_t test_vfcvt_xu_f_v_u64m2_tamu(vbool32_t mask, vuint64m2_t maskedoff, vfloat64m2_t src, size_t vl) {
  return vfcvt_xu_tamu(mask, maskedoff, src, vl);
}

vuint64m2_t test_vfcvt_rtz_xu_f_v_u64m2_tamu(vbool32_t mask, vuint64m2_t maskedoff, vfloat64m2_t src, size_t vl) {
  return vfcvt_rtz_xu_tamu(mask, maskedoff, src, vl);
}

vuint64m4_t test_vfcvt_xu_f_v_u64m4_tamu(vbool16_t mask, vuint64m4_t maskedoff, vfloat64m4_t src, size_t vl) {
  return vfcvt_xu_tamu(mask, maskedoff, src, vl);
}

vuint64m4_t test_vfcvt_rtz_xu_f_v_u64m4_tamu(vbool16_t mask, vuint64m4_t maskedoff, vfloat64m4_t src, size_t vl) {
  return vfcvt_rtz_xu_tamu(mask, maskedoff, src, vl);
}

vuint64m8_t test_vfcvt_xu_f_v_u64m8_tamu(vbool8_t mask, vuint64m8_t maskedoff, vfloat64m8_t src, size_t vl) {
  return vfcvt_xu_tamu(mask, maskedoff, src, vl);
}

vuint64m8_t test_vfcvt_rtz_xu_f_v_u64m8_tamu(vbool8_t mask, vuint64m8_t maskedoff, vfloat64m8_t src, size_t vl) {
  return vfcvt_rtz_xu_tamu(mask, maskedoff, src, vl);
}

vfloat64m1_t test_vfcvt_f_x_v_f64m1_tamu(vbool64_t mask, vfloat64m1_t maskedoff, vint64m1_t src, size_t vl) {
  return vfcvt_f_tamu(mask, maskedoff, src, vl);
}

vfloat64m2_t test_vfcvt_f_x_v_f64m2_tamu(vbool32_t mask, vfloat64m2_t maskedoff, vint64m2_t src, size_t vl) {
  return vfcvt_f_tamu(mask, maskedoff, src, vl);
}

vfloat64m4_t test_vfcvt_f_x_v_f64m4_tamu(vbool16_t mask, vfloat64m4_t maskedoff, vint64m4_t src, size_t vl) {
  return vfcvt_f_tamu(mask, maskedoff, src, vl);
}

vfloat64m8_t test_vfcvt_f_x_v_f64m8_tamu(vbool8_t mask, vfloat64m8_t maskedoff, vint64m8_t src, size_t vl) {
  return vfcvt_f_tamu(mask, maskedoff, src, vl);
}

vfloat64m1_t test_vfcvt_f_xu_v_f64m1_tamu(vbool64_t mask, vfloat64m1_t maskedoff, vuint64m1_t src, size_t vl) {
  return vfcvt_f_tamu(mask, maskedoff, src, vl);
}

vfloat64m2_t test_vfcvt_f_xu_v_f64m2_tamu(vbool32_t mask, vfloat64m2_t maskedoff, vuint64m2_t src, size_t vl) {
  return vfcvt_f_tamu(mask, maskedoff, src, vl);
}

vfloat64m4_t test_vfcvt_f_xu_v_f64m4_tamu(vbool16_t mask, vfloat64m4_t maskedoff, vuint64m4_t src, size_t vl) {
  return vfcvt_f_tamu(mask, maskedoff, src, vl);
}

vfloat64m8_t test_vfcvt_f_xu_v_f64m8_tamu(vbool8_t mask, vfloat64m8_t maskedoff, vuint64m8_t src, size_t vl) {
  return vfcvt_f_tamu(mask, maskedoff, src, vl);
}

