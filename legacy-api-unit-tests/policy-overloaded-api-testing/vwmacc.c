#include <stdint.h>
#include "rvv-v0p10-compatible-headers/overloaded-non-policy.h"
#include "rvv-v0p10-compatible-headers/overloaded-policy.h"
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint16mf4_t test_vwmacc_vv_i16mf4_tu(vint16mf4_t vd, vint8mf8_t vs1, vint8mf8_t vs2, size_t vl) {
  return vwmacc_tu(vd, vs1, vs2, vl);
}

vint16mf4_t test_vwmacc_vx_i16mf4_tu(vint16mf4_t vd, int8_t rs1, vint8mf8_t vs2, size_t vl) {
  return vwmacc_tu(vd, rs1, vs2, vl);
}

vint16mf2_t test_vwmacc_vv_i16mf2_tu(vint16mf2_t vd, vint8mf4_t vs1, vint8mf4_t vs2, size_t vl) {
  return vwmacc_tu(vd, vs1, vs2, vl);
}

vint16mf2_t test_vwmacc_vx_i16mf2_tu(vint16mf2_t vd, int8_t rs1, vint8mf4_t vs2, size_t vl) {
  return vwmacc_tu(vd, rs1, vs2, vl);
}

vint16m1_t test_vwmacc_vv_i16m1_tu(vint16m1_t vd, vint8mf2_t vs1, vint8mf2_t vs2, size_t vl) {
  return vwmacc_tu(vd, vs1, vs2, vl);
}

vint16m1_t test_vwmacc_vx_i16m1_tu(vint16m1_t vd, int8_t rs1, vint8mf2_t vs2, size_t vl) {
  return vwmacc_tu(vd, rs1, vs2, vl);
}

vint16m2_t test_vwmacc_vv_i16m2_tu(vint16m2_t vd, vint8m1_t vs1, vint8m1_t vs2, size_t vl) {
  return vwmacc_tu(vd, vs1, vs2, vl);
}

vint16m2_t test_vwmacc_vx_i16m2_tu(vint16m2_t vd, int8_t rs1, vint8m1_t vs2, size_t vl) {
  return vwmacc_tu(vd, rs1, vs2, vl);
}

vint16m4_t test_vwmacc_vv_i16m4_tu(vint16m4_t vd, vint8m2_t vs1, vint8m2_t vs2, size_t vl) {
  return vwmacc_tu(vd, vs1, vs2, vl);
}

vint16m4_t test_vwmacc_vx_i16m4_tu(vint16m4_t vd, int8_t rs1, vint8m2_t vs2, size_t vl) {
  return vwmacc_tu(vd, rs1, vs2, vl);
}

vint16m8_t test_vwmacc_vv_i16m8_tu(vint16m8_t vd, vint8m4_t vs1, vint8m4_t vs2, size_t vl) {
  return vwmacc_tu(vd, vs1, vs2, vl);
}

vint16m8_t test_vwmacc_vx_i16m8_tu(vint16m8_t vd, int8_t rs1, vint8m4_t vs2, size_t vl) {
  return vwmacc_tu(vd, rs1, vs2, vl);
}

vint32mf2_t test_vwmacc_vv_i32mf2_tu(vint32mf2_t vd, vint16mf4_t vs1, vint16mf4_t vs2, size_t vl) {
  return vwmacc_tu(vd, vs1, vs2, vl);
}

vint32mf2_t test_vwmacc_vx_i32mf2_tu(vint32mf2_t vd, int16_t rs1, vint16mf4_t vs2, size_t vl) {
  return vwmacc_tu(vd, rs1, vs2, vl);
}

vint32m1_t test_vwmacc_vv_i32m1_tu(vint32m1_t vd, vint16mf2_t vs1, vint16mf2_t vs2, size_t vl) {
  return vwmacc_tu(vd, vs1, vs2, vl);
}

vint32m1_t test_vwmacc_vx_i32m1_tu(vint32m1_t vd, int16_t rs1, vint16mf2_t vs2, size_t vl) {
  return vwmacc_tu(vd, rs1, vs2, vl);
}

vint32m2_t test_vwmacc_vv_i32m2_tu(vint32m2_t vd, vint16m1_t vs1, vint16m1_t vs2, size_t vl) {
  return vwmacc_tu(vd, vs1, vs2, vl);
}

vint32m2_t test_vwmacc_vx_i32m2_tu(vint32m2_t vd, int16_t rs1, vint16m1_t vs2, size_t vl) {
  return vwmacc_tu(vd, rs1, vs2, vl);
}

vint32m4_t test_vwmacc_vv_i32m4_tu(vint32m4_t vd, vint16m2_t vs1, vint16m2_t vs2, size_t vl) {
  return vwmacc_tu(vd, vs1, vs2, vl);
}

vint32m4_t test_vwmacc_vx_i32m4_tu(vint32m4_t vd, int16_t rs1, vint16m2_t vs2, size_t vl) {
  return vwmacc_tu(vd, rs1, vs2, vl);
}

vint32m8_t test_vwmacc_vv_i32m8_tu(vint32m8_t vd, vint16m4_t vs1, vint16m4_t vs2, size_t vl) {
  return vwmacc_tu(vd, vs1, vs2, vl);
}

vint32m8_t test_vwmacc_vx_i32m8_tu(vint32m8_t vd, int16_t rs1, vint16m4_t vs2, size_t vl) {
  return vwmacc_tu(vd, rs1, vs2, vl);
}

vint64m1_t test_vwmacc_vv_i64m1_tu(vint64m1_t vd, vint32mf2_t vs1, vint32mf2_t vs2, size_t vl) {
  return vwmacc_tu(vd, vs1, vs2, vl);
}

vint64m1_t test_vwmacc_vx_i64m1_tu(vint64m1_t vd, int32_t rs1, vint32mf2_t vs2, size_t vl) {
  return vwmacc_tu(vd, rs1, vs2, vl);
}

vint64m2_t test_vwmacc_vv_i64m2_tu(vint64m2_t vd, vint32m1_t vs1, vint32m1_t vs2, size_t vl) {
  return vwmacc_tu(vd, vs1, vs2, vl);
}

vint64m2_t test_vwmacc_vx_i64m2_tu(vint64m2_t vd, int32_t rs1, vint32m1_t vs2, size_t vl) {
  return vwmacc_tu(vd, rs1, vs2, vl);
}

vint64m4_t test_vwmacc_vv_i64m4_tu(vint64m4_t vd, vint32m2_t vs1, vint32m2_t vs2, size_t vl) {
  return vwmacc_tu(vd, vs1, vs2, vl);
}

vint64m4_t test_vwmacc_vx_i64m4_tu(vint64m4_t vd, int32_t rs1, vint32m2_t vs2, size_t vl) {
  return vwmacc_tu(vd, rs1, vs2, vl);
}

vint64m8_t test_vwmacc_vv_i64m8_tu(vint64m8_t vd, vint32m4_t vs1, vint32m4_t vs2, size_t vl) {
  return vwmacc_tu(vd, vs1, vs2, vl);
}

vint64m8_t test_vwmacc_vx_i64m8_tu(vint64m8_t vd, int32_t rs1, vint32m4_t vs2, size_t vl) {
  return vwmacc_tu(vd, rs1, vs2, vl);
}

vint16mf4_t test_vwmacc_vv_i16mf4_ta(vint16mf4_t vd, vint8mf8_t vs1, vint8mf8_t vs2, size_t vl) {
  return vwmacc_ta(vd, vs1, vs2, vl);
}

vint16mf4_t test_vwmacc_vx_i16mf4_ta(vint16mf4_t vd, int8_t rs1, vint8mf8_t vs2, size_t vl) {
  return vwmacc_ta(vd, rs1, vs2, vl);
}

vint16mf2_t test_vwmacc_vv_i16mf2_ta(vint16mf2_t vd, vint8mf4_t vs1, vint8mf4_t vs2, size_t vl) {
  return vwmacc_ta(vd, vs1, vs2, vl);
}

vint16mf2_t test_vwmacc_vx_i16mf2_ta(vint16mf2_t vd, int8_t rs1, vint8mf4_t vs2, size_t vl) {
  return vwmacc_ta(vd, rs1, vs2, vl);
}

vint16m1_t test_vwmacc_vv_i16m1_ta(vint16m1_t vd, vint8mf2_t vs1, vint8mf2_t vs2, size_t vl) {
  return vwmacc_ta(vd, vs1, vs2, vl);
}

vint16m1_t test_vwmacc_vx_i16m1_ta(vint16m1_t vd, int8_t rs1, vint8mf2_t vs2, size_t vl) {
  return vwmacc_ta(vd, rs1, vs2, vl);
}

vint16m2_t test_vwmacc_vv_i16m2_ta(vint16m2_t vd, vint8m1_t vs1, vint8m1_t vs2, size_t vl) {
  return vwmacc_ta(vd, vs1, vs2, vl);
}

vint16m2_t test_vwmacc_vx_i16m2_ta(vint16m2_t vd, int8_t rs1, vint8m1_t vs2, size_t vl) {
  return vwmacc_ta(vd, rs1, vs2, vl);
}

vint16m4_t test_vwmacc_vv_i16m4_ta(vint16m4_t vd, vint8m2_t vs1, vint8m2_t vs2, size_t vl) {
  return vwmacc_ta(vd, vs1, vs2, vl);
}

vint16m4_t test_vwmacc_vx_i16m4_ta(vint16m4_t vd, int8_t rs1, vint8m2_t vs2, size_t vl) {
  return vwmacc_ta(vd, rs1, vs2, vl);
}

vint16m8_t test_vwmacc_vv_i16m8_ta(vint16m8_t vd, vint8m4_t vs1, vint8m4_t vs2, size_t vl) {
  return vwmacc_ta(vd, vs1, vs2, vl);
}

vint16m8_t test_vwmacc_vx_i16m8_ta(vint16m8_t vd, int8_t rs1, vint8m4_t vs2, size_t vl) {
  return vwmacc_ta(vd, rs1, vs2, vl);
}

vint32mf2_t test_vwmacc_vv_i32mf2_ta(vint32mf2_t vd, vint16mf4_t vs1, vint16mf4_t vs2, size_t vl) {
  return vwmacc_ta(vd, vs1, vs2, vl);
}

vint32mf2_t test_vwmacc_vx_i32mf2_ta(vint32mf2_t vd, int16_t rs1, vint16mf4_t vs2, size_t vl) {
  return vwmacc_ta(vd, rs1, vs2, vl);
}

vint32m1_t test_vwmacc_vv_i32m1_ta(vint32m1_t vd, vint16mf2_t vs1, vint16mf2_t vs2, size_t vl) {
  return vwmacc_ta(vd, vs1, vs2, vl);
}

vint32m1_t test_vwmacc_vx_i32m1_ta(vint32m1_t vd, int16_t rs1, vint16mf2_t vs2, size_t vl) {
  return vwmacc_ta(vd, rs1, vs2, vl);
}

vint32m2_t test_vwmacc_vv_i32m2_ta(vint32m2_t vd, vint16m1_t vs1, vint16m1_t vs2, size_t vl) {
  return vwmacc_ta(vd, vs1, vs2, vl);
}

vint32m2_t test_vwmacc_vx_i32m2_ta(vint32m2_t vd, int16_t rs1, vint16m1_t vs2, size_t vl) {
  return vwmacc_ta(vd, rs1, vs2, vl);
}

vint32m4_t test_vwmacc_vv_i32m4_ta(vint32m4_t vd, vint16m2_t vs1, vint16m2_t vs2, size_t vl) {
  return vwmacc_ta(vd, vs1, vs2, vl);
}

vint32m4_t test_vwmacc_vx_i32m4_ta(vint32m4_t vd, int16_t rs1, vint16m2_t vs2, size_t vl) {
  return vwmacc_ta(vd, rs1, vs2, vl);
}

vint32m8_t test_vwmacc_vv_i32m8_ta(vint32m8_t vd, vint16m4_t vs1, vint16m4_t vs2, size_t vl) {
  return vwmacc_ta(vd, vs1, vs2, vl);
}

vint32m8_t test_vwmacc_vx_i32m8_ta(vint32m8_t vd, int16_t rs1, vint16m4_t vs2, size_t vl) {
  return vwmacc_ta(vd, rs1, vs2, vl);
}

vint64m1_t test_vwmacc_vv_i64m1_ta(vint64m1_t vd, vint32mf2_t vs1, vint32mf2_t vs2, size_t vl) {
  return vwmacc_ta(vd, vs1, vs2, vl);
}

vint64m1_t test_vwmacc_vx_i64m1_ta(vint64m1_t vd, int32_t rs1, vint32mf2_t vs2, size_t vl) {
  return vwmacc_ta(vd, rs1, vs2, vl);
}

vint64m2_t test_vwmacc_vv_i64m2_ta(vint64m2_t vd, vint32m1_t vs1, vint32m1_t vs2, size_t vl) {
  return vwmacc_ta(vd, vs1, vs2, vl);
}

vint64m2_t test_vwmacc_vx_i64m2_ta(vint64m2_t vd, int32_t rs1, vint32m1_t vs2, size_t vl) {
  return vwmacc_ta(vd, rs1, vs2, vl);
}

vint64m4_t test_vwmacc_vv_i64m4_ta(vint64m4_t vd, vint32m2_t vs1, vint32m2_t vs2, size_t vl) {
  return vwmacc_ta(vd, vs1, vs2, vl);
}

vint64m4_t test_vwmacc_vx_i64m4_ta(vint64m4_t vd, int32_t rs1, vint32m2_t vs2, size_t vl) {
  return vwmacc_ta(vd, rs1, vs2, vl);
}

vint64m8_t test_vwmacc_vv_i64m8_ta(vint64m8_t vd, vint32m4_t vs1, vint32m4_t vs2, size_t vl) {
  return vwmacc_ta(vd, vs1, vs2, vl);
}

vint64m8_t test_vwmacc_vx_i64m8_ta(vint64m8_t vd, int32_t rs1, vint32m4_t vs2, size_t vl) {
  return vwmacc_ta(vd, rs1, vs2, vl);
}

vint16mf4_t test_vwmacc_vv_i16mf4_tuma(vbool64_t mask, vint16mf4_t vd, vint8mf8_t vs1, vint8mf8_t vs2, size_t vl) {
  return vwmacc_tuma(mask, vd, vs1, vs2, vl);
}

vint16mf4_t test_vwmacc_vx_i16mf4_tuma(vbool64_t mask, vint16mf4_t vd, int8_t rs1, vint8mf8_t vs2, size_t vl) {
  return vwmacc_tuma(mask, vd, rs1, vs2, vl);
}

vint16mf2_t test_vwmacc_vv_i16mf2_tuma(vbool32_t mask, vint16mf2_t vd, vint8mf4_t vs1, vint8mf4_t vs2, size_t vl) {
  return vwmacc_tuma(mask, vd, vs1, vs2, vl);
}

vint16mf2_t test_vwmacc_vx_i16mf2_tuma(vbool32_t mask, vint16mf2_t vd, int8_t rs1, vint8mf4_t vs2, size_t vl) {
  return vwmacc_tuma(mask, vd, rs1, vs2, vl);
}

vint16m1_t test_vwmacc_vv_i16m1_tuma(vbool16_t mask, vint16m1_t vd, vint8mf2_t vs1, vint8mf2_t vs2, size_t vl) {
  return vwmacc_tuma(mask, vd, vs1, vs2, vl);
}

vint16m1_t test_vwmacc_vx_i16m1_tuma(vbool16_t mask, vint16m1_t vd, int8_t rs1, vint8mf2_t vs2, size_t vl) {
  return vwmacc_tuma(mask, vd, rs1, vs2, vl);
}

vint16m2_t test_vwmacc_vv_i16m2_tuma(vbool8_t mask, vint16m2_t vd, vint8m1_t vs1, vint8m1_t vs2, size_t vl) {
  return vwmacc_tuma(mask, vd, vs1, vs2, vl);
}

vint16m2_t test_vwmacc_vx_i16m2_tuma(vbool8_t mask, vint16m2_t vd, int8_t rs1, vint8m1_t vs2, size_t vl) {
  return vwmacc_tuma(mask, vd, rs1, vs2, vl);
}

vint16m4_t test_vwmacc_vv_i16m4_tuma(vbool4_t mask, vint16m4_t vd, vint8m2_t vs1, vint8m2_t vs2, size_t vl) {
  return vwmacc_tuma(mask, vd, vs1, vs2, vl);
}

vint16m4_t test_vwmacc_vx_i16m4_tuma(vbool4_t mask, vint16m4_t vd, int8_t rs1, vint8m2_t vs2, size_t vl) {
  return vwmacc_tuma(mask, vd, rs1, vs2, vl);
}

vint16m8_t test_vwmacc_vv_i16m8_tuma(vbool2_t mask, vint16m8_t vd, vint8m4_t vs1, vint8m4_t vs2, size_t vl) {
  return vwmacc_tuma(mask, vd, vs1, vs2, vl);
}

vint16m8_t test_vwmacc_vx_i16m8_tuma(vbool2_t mask, vint16m8_t vd, int8_t rs1, vint8m4_t vs2, size_t vl) {
  return vwmacc_tuma(mask, vd, rs1, vs2, vl);
}

vint32mf2_t test_vwmacc_vv_i32mf2_tuma(vbool64_t mask, vint32mf2_t vd, vint16mf4_t vs1, vint16mf4_t vs2, size_t vl) {
  return vwmacc_tuma(mask, vd, vs1, vs2, vl);
}

vint32mf2_t test_vwmacc_vx_i32mf2_tuma(vbool64_t mask, vint32mf2_t vd, int16_t rs1, vint16mf4_t vs2, size_t vl) {
  return vwmacc_tuma(mask, vd, rs1, vs2, vl);
}

vint32m1_t test_vwmacc_vv_i32m1_tuma(vbool32_t mask, vint32m1_t vd, vint16mf2_t vs1, vint16mf2_t vs2, size_t vl) {
  return vwmacc_tuma(mask, vd, vs1, vs2, vl);
}

vint32m1_t test_vwmacc_vx_i32m1_tuma(vbool32_t mask, vint32m1_t vd, int16_t rs1, vint16mf2_t vs2, size_t vl) {
  return vwmacc_tuma(mask, vd, rs1, vs2, vl);
}

vint32m2_t test_vwmacc_vv_i32m2_tuma(vbool16_t mask, vint32m2_t vd, vint16m1_t vs1, vint16m1_t vs2, size_t vl) {
  return vwmacc_tuma(mask, vd, vs1, vs2, vl);
}

vint32m2_t test_vwmacc_vx_i32m2_tuma(vbool16_t mask, vint32m2_t vd, int16_t rs1, vint16m1_t vs2, size_t vl) {
  return vwmacc_tuma(mask, vd, rs1, vs2, vl);
}

vint32m4_t test_vwmacc_vv_i32m4_tuma(vbool8_t mask, vint32m4_t vd, vint16m2_t vs1, vint16m2_t vs2, size_t vl) {
  return vwmacc_tuma(mask, vd, vs1, vs2, vl);
}

vint32m4_t test_vwmacc_vx_i32m4_tuma(vbool8_t mask, vint32m4_t vd, int16_t rs1, vint16m2_t vs2, size_t vl) {
  return vwmacc_tuma(mask, vd, rs1, vs2, vl);
}

vint32m8_t test_vwmacc_vv_i32m8_tuma(vbool4_t mask, vint32m8_t vd, vint16m4_t vs1, vint16m4_t vs2, size_t vl) {
  return vwmacc_tuma(mask, vd, vs1, vs2, vl);
}

vint32m8_t test_vwmacc_vx_i32m8_tuma(vbool4_t mask, vint32m8_t vd, int16_t rs1, vint16m4_t vs2, size_t vl) {
  return vwmacc_tuma(mask, vd, rs1, vs2, vl);
}

vint64m1_t test_vwmacc_vv_i64m1_tuma(vbool64_t mask, vint64m1_t vd, vint32mf2_t vs1, vint32mf2_t vs2, size_t vl) {
  return vwmacc_tuma(mask, vd, vs1, vs2, vl);
}

vint64m1_t test_vwmacc_vx_i64m1_tuma(vbool64_t mask, vint64m1_t vd, int32_t rs1, vint32mf2_t vs2, size_t vl) {
  return vwmacc_tuma(mask, vd, rs1, vs2, vl);
}

vint64m2_t test_vwmacc_vv_i64m2_tuma(vbool32_t mask, vint64m2_t vd, vint32m1_t vs1, vint32m1_t vs2, size_t vl) {
  return vwmacc_tuma(mask, vd, vs1, vs2, vl);
}

vint64m2_t test_vwmacc_vx_i64m2_tuma(vbool32_t mask, vint64m2_t vd, int32_t rs1, vint32m1_t vs2, size_t vl) {
  return vwmacc_tuma(mask, vd, rs1, vs2, vl);
}

vint64m4_t test_vwmacc_vv_i64m4_tuma(vbool16_t mask, vint64m4_t vd, vint32m2_t vs1, vint32m2_t vs2, size_t vl) {
  return vwmacc_tuma(mask, vd, vs1, vs2, vl);
}

vint64m4_t test_vwmacc_vx_i64m4_tuma(vbool16_t mask, vint64m4_t vd, int32_t rs1, vint32m2_t vs2, size_t vl) {
  return vwmacc_tuma(mask, vd, rs1, vs2, vl);
}

vint64m8_t test_vwmacc_vv_i64m8_tuma(vbool8_t mask, vint64m8_t vd, vint32m4_t vs1, vint32m4_t vs2, size_t vl) {
  return vwmacc_tuma(mask, vd, vs1, vs2, vl);
}

vint64m8_t test_vwmacc_vx_i64m8_tuma(vbool8_t mask, vint64m8_t vd, int32_t rs1, vint32m4_t vs2, size_t vl) {
  return vwmacc_tuma(mask, vd, rs1, vs2, vl);
}

vint16mf4_t test_vwmacc_vv_i16mf4_tumu(vbool64_t mask, vint16mf4_t vd, vint8mf8_t vs1, vint8mf8_t vs2, size_t vl) {
  return vwmacc_tumu(mask, vd, vs1, vs2, vl);
}

vint16mf4_t test_vwmacc_vx_i16mf4_tumu(vbool64_t mask, vint16mf4_t vd, int8_t rs1, vint8mf8_t vs2, size_t vl) {
  return vwmacc_tumu(mask, vd, rs1, vs2, vl);
}

vint16mf2_t test_vwmacc_vv_i16mf2_tumu(vbool32_t mask, vint16mf2_t vd, vint8mf4_t vs1, vint8mf4_t vs2, size_t vl) {
  return vwmacc_tumu(mask, vd, vs1, vs2, vl);
}

vint16mf2_t test_vwmacc_vx_i16mf2_tumu(vbool32_t mask, vint16mf2_t vd, int8_t rs1, vint8mf4_t vs2, size_t vl) {
  return vwmacc_tumu(mask, vd, rs1, vs2, vl);
}

vint16m1_t test_vwmacc_vv_i16m1_tumu(vbool16_t mask, vint16m1_t vd, vint8mf2_t vs1, vint8mf2_t vs2, size_t vl) {
  return vwmacc_tumu(mask, vd, vs1, vs2, vl);
}

vint16m1_t test_vwmacc_vx_i16m1_tumu(vbool16_t mask, vint16m1_t vd, int8_t rs1, vint8mf2_t vs2, size_t vl) {
  return vwmacc_tumu(mask, vd, rs1, vs2, vl);
}

vint16m2_t test_vwmacc_vv_i16m2_tumu(vbool8_t mask, vint16m2_t vd, vint8m1_t vs1, vint8m1_t vs2, size_t vl) {
  return vwmacc_tumu(mask, vd, vs1, vs2, vl);
}

vint16m2_t test_vwmacc_vx_i16m2_tumu(vbool8_t mask, vint16m2_t vd, int8_t rs1, vint8m1_t vs2, size_t vl) {
  return vwmacc_tumu(mask, vd, rs1, vs2, vl);
}

vint16m4_t test_vwmacc_vv_i16m4_tumu(vbool4_t mask, vint16m4_t vd, vint8m2_t vs1, vint8m2_t vs2, size_t vl) {
  return vwmacc_tumu(mask, vd, vs1, vs2, vl);
}

vint16m4_t test_vwmacc_vx_i16m4_tumu(vbool4_t mask, vint16m4_t vd, int8_t rs1, vint8m2_t vs2, size_t vl) {
  return vwmacc_tumu(mask, vd, rs1, vs2, vl);
}

vint16m8_t test_vwmacc_vv_i16m8_tumu(vbool2_t mask, vint16m8_t vd, vint8m4_t vs1, vint8m4_t vs2, size_t vl) {
  return vwmacc_tumu(mask, vd, vs1, vs2, vl);
}

vint16m8_t test_vwmacc_vx_i16m8_tumu(vbool2_t mask, vint16m8_t vd, int8_t rs1, vint8m4_t vs2, size_t vl) {
  return vwmacc_tumu(mask, vd, rs1, vs2, vl);
}

vint32mf2_t test_vwmacc_vv_i32mf2_tumu(vbool64_t mask, vint32mf2_t vd, vint16mf4_t vs1, vint16mf4_t vs2, size_t vl) {
  return vwmacc_tumu(mask, vd, vs1, vs2, vl);
}

vint32mf2_t test_vwmacc_vx_i32mf2_tumu(vbool64_t mask, vint32mf2_t vd, int16_t rs1, vint16mf4_t vs2, size_t vl) {
  return vwmacc_tumu(mask, vd, rs1, vs2, vl);
}

vint32m1_t test_vwmacc_vv_i32m1_tumu(vbool32_t mask, vint32m1_t vd, vint16mf2_t vs1, vint16mf2_t vs2, size_t vl) {
  return vwmacc_tumu(mask, vd, vs1, vs2, vl);
}

vint32m1_t test_vwmacc_vx_i32m1_tumu(vbool32_t mask, vint32m1_t vd, int16_t rs1, vint16mf2_t vs2, size_t vl) {
  return vwmacc_tumu(mask, vd, rs1, vs2, vl);
}

vint32m2_t test_vwmacc_vv_i32m2_tumu(vbool16_t mask, vint32m2_t vd, vint16m1_t vs1, vint16m1_t vs2, size_t vl) {
  return vwmacc_tumu(mask, vd, vs1, vs2, vl);
}

vint32m2_t test_vwmacc_vx_i32m2_tumu(vbool16_t mask, vint32m2_t vd, int16_t rs1, vint16m1_t vs2, size_t vl) {
  return vwmacc_tumu(mask, vd, rs1, vs2, vl);
}

vint32m4_t test_vwmacc_vv_i32m4_tumu(vbool8_t mask, vint32m4_t vd, vint16m2_t vs1, vint16m2_t vs2, size_t vl) {
  return vwmacc_tumu(mask, vd, vs1, vs2, vl);
}

vint32m4_t test_vwmacc_vx_i32m4_tumu(vbool8_t mask, vint32m4_t vd, int16_t rs1, vint16m2_t vs2, size_t vl) {
  return vwmacc_tumu(mask, vd, rs1, vs2, vl);
}

vint32m8_t test_vwmacc_vv_i32m8_tumu(vbool4_t mask, vint32m8_t vd, vint16m4_t vs1, vint16m4_t vs2, size_t vl) {
  return vwmacc_tumu(mask, vd, vs1, vs2, vl);
}

vint32m8_t test_vwmacc_vx_i32m8_tumu(vbool4_t mask, vint32m8_t vd, int16_t rs1, vint16m4_t vs2, size_t vl) {
  return vwmacc_tumu(mask, vd, rs1, vs2, vl);
}

vint64m1_t test_vwmacc_vv_i64m1_tumu(vbool64_t mask, vint64m1_t vd, vint32mf2_t vs1, vint32mf2_t vs2, size_t vl) {
  return vwmacc_tumu(mask, vd, vs1, vs2, vl);
}

vint64m1_t test_vwmacc_vx_i64m1_tumu(vbool64_t mask, vint64m1_t vd, int32_t rs1, vint32mf2_t vs2, size_t vl) {
  return vwmacc_tumu(mask, vd, rs1, vs2, vl);
}

vint64m2_t test_vwmacc_vv_i64m2_tumu(vbool32_t mask, vint64m2_t vd, vint32m1_t vs1, vint32m1_t vs2, size_t vl) {
  return vwmacc_tumu(mask, vd, vs1, vs2, vl);
}

vint64m2_t test_vwmacc_vx_i64m2_tumu(vbool32_t mask, vint64m2_t vd, int32_t rs1, vint32m1_t vs2, size_t vl) {
  return vwmacc_tumu(mask, vd, rs1, vs2, vl);
}

vint64m4_t test_vwmacc_vv_i64m4_tumu(vbool16_t mask, vint64m4_t vd, vint32m2_t vs1, vint32m2_t vs2, size_t vl) {
  return vwmacc_tumu(mask, vd, vs1, vs2, vl);
}

vint64m4_t test_vwmacc_vx_i64m4_tumu(vbool16_t mask, vint64m4_t vd, int32_t rs1, vint32m2_t vs2, size_t vl) {
  return vwmacc_tumu(mask, vd, rs1, vs2, vl);
}

vint64m8_t test_vwmacc_vv_i64m8_tumu(vbool8_t mask, vint64m8_t vd, vint32m4_t vs1, vint32m4_t vs2, size_t vl) {
  return vwmacc_tumu(mask, vd, vs1, vs2, vl);
}

vint64m8_t test_vwmacc_vx_i64m8_tumu(vbool8_t mask, vint64m8_t vd, int32_t rs1, vint32m4_t vs2, size_t vl) {
  return vwmacc_tumu(mask, vd, rs1, vs2, vl);
}

vint16mf4_t test_vwmacc_vv_i16mf4_tama(vbool64_t mask, vint16mf4_t vd, vint8mf8_t vs1, vint8mf8_t vs2, size_t vl) {
  return vwmacc_tama(mask, vd, vs1, vs2, vl);
}

vint16mf4_t test_vwmacc_vx_i16mf4_tama(vbool64_t mask, vint16mf4_t vd, int8_t rs1, vint8mf8_t vs2, size_t vl) {
  return vwmacc_tama(mask, vd, rs1, vs2, vl);
}

vint16mf2_t test_vwmacc_vv_i16mf2_tama(vbool32_t mask, vint16mf2_t vd, vint8mf4_t vs1, vint8mf4_t vs2, size_t vl) {
  return vwmacc_tama(mask, vd, vs1, vs2, vl);
}

vint16mf2_t test_vwmacc_vx_i16mf2_tama(vbool32_t mask, vint16mf2_t vd, int8_t rs1, vint8mf4_t vs2, size_t vl) {
  return vwmacc_tama(mask, vd, rs1, vs2, vl);
}

vint16m1_t test_vwmacc_vv_i16m1_tama(vbool16_t mask, vint16m1_t vd, vint8mf2_t vs1, vint8mf2_t vs2, size_t vl) {
  return vwmacc_tama(mask, vd, vs1, vs2, vl);
}

vint16m1_t test_vwmacc_vx_i16m1_tama(vbool16_t mask, vint16m1_t vd, int8_t rs1, vint8mf2_t vs2, size_t vl) {
  return vwmacc_tama(mask, vd, rs1, vs2, vl);
}

vint16m2_t test_vwmacc_vv_i16m2_tama(vbool8_t mask, vint16m2_t vd, vint8m1_t vs1, vint8m1_t vs2, size_t vl) {
  return vwmacc_tama(mask, vd, vs1, vs2, vl);
}

vint16m2_t test_vwmacc_vx_i16m2_tama(vbool8_t mask, vint16m2_t vd, int8_t rs1, vint8m1_t vs2, size_t vl) {
  return vwmacc_tama(mask, vd, rs1, vs2, vl);
}

vint16m4_t test_vwmacc_vv_i16m4_tama(vbool4_t mask, vint16m4_t vd, vint8m2_t vs1, vint8m2_t vs2, size_t vl) {
  return vwmacc_tama(mask, vd, vs1, vs2, vl);
}

vint16m4_t test_vwmacc_vx_i16m4_tama(vbool4_t mask, vint16m4_t vd, int8_t rs1, vint8m2_t vs2, size_t vl) {
  return vwmacc_tama(mask, vd, rs1, vs2, vl);
}

vint16m8_t test_vwmacc_vv_i16m8_tama(vbool2_t mask, vint16m8_t vd, vint8m4_t vs1, vint8m4_t vs2, size_t vl) {
  return vwmacc_tama(mask, vd, vs1, vs2, vl);
}

vint16m8_t test_vwmacc_vx_i16m8_tama(vbool2_t mask, vint16m8_t vd, int8_t rs1, vint8m4_t vs2, size_t vl) {
  return vwmacc_tama(mask, vd, rs1, vs2, vl);
}

vint32mf2_t test_vwmacc_vv_i32mf2_tama(vbool64_t mask, vint32mf2_t vd, vint16mf4_t vs1, vint16mf4_t vs2, size_t vl) {
  return vwmacc_tama(mask, vd, vs1, vs2, vl);
}

vint32mf2_t test_vwmacc_vx_i32mf2_tama(vbool64_t mask, vint32mf2_t vd, int16_t rs1, vint16mf4_t vs2, size_t vl) {
  return vwmacc_tama(mask, vd, rs1, vs2, vl);
}

vint32m1_t test_vwmacc_vv_i32m1_tama(vbool32_t mask, vint32m1_t vd, vint16mf2_t vs1, vint16mf2_t vs2, size_t vl) {
  return vwmacc_tama(mask, vd, vs1, vs2, vl);
}

vint32m1_t test_vwmacc_vx_i32m1_tama(vbool32_t mask, vint32m1_t vd, int16_t rs1, vint16mf2_t vs2, size_t vl) {
  return vwmacc_tama(mask, vd, rs1, vs2, vl);
}

vint32m2_t test_vwmacc_vv_i32m2_tama(vbool16_t mask, vint32m2_t vd, vint16m1_t vs1, vint16m1_t vs2, size_t vl) {
  return vwmacc_tama(mask, vd, vs1, vs2, vl);
}

vint32m2_t test_vwmacc_vx_i32m2_tama(vbool16_t mask, vint32m2_t vd, int16_t rs1, vint16m1_t vs2, size_t vl) {
  return vwmacc_tama(mask, vd, rs1, vs2, vl);
}

vint32m4_t test_vwmacc_vv_i32m4_tama(vbool8_t mask, vint32m4_t vd, vint16m2_t vs1, vint16m2_t vs2, size_t vl) {
  return vwmacc_tama(mask, vd, vs1, vs2, vl);
}

vint32m4_t test_vwmacc_vx_i32m4_tama(vbool8_t mask, vint32m4_t vd, int16_t rs1, vint16m2_t vs2, size_t vl) {
  return vwmacc_tama(mask, vd, rs1, vs2, vl);
}

vint32m8_t test_vwmacc_vv_i32m8_tama(vbool4_t mask, vint32m8_t vd, vint16m4_t vs1, vint16m4_t vs2, size_t vl) {
  return vwmacc_tama(mask, vd, vs1, vs2, vl);
}

vint32m8_t test_vwmacc_vx_i32m8_tama(vbool4_t mask, vint32m8_t vd, int16_t rs1, vint16m4_t vs2, size_t vl) {
  return vwmacc_tama(mask, vd, rs1, vs2, vl);
}

vint64m1_t test_vwmacc_vv_i64m1_tama(vbool64_t mask, vint64m1_t vd, vint32mf2_t vs1, vint32mf2_t vs2, size_t vl) {
  return vwmacc_tama(mask, vd, vs1, vs2, vl);
}

vint64m1_t test_vwmacc_vx_i64m1_tama(vbool64_t mask, vint64m1_t vd, int32_t rs1, vint32mf2_t vs2, size_t vl) {
  return vwmacc_tama(mask, vd, rs1, vs2, vl);
}

vint64m2_t test_vwmacc_vv_i64m2_tama(vbool32_t mask, vint64m2_t vd, vint32m1_t vs1, vint32m1_t vs2, size_t vl) {
  return vwmacc_tama(mask, vd, vs1, vs2, vl);
}

vint64m2_t test_vwmacc_vx_i64m2_tama(vbool32_t mask, vint64m2_t vd, int32_t rs1, vint32m1_t vs2, size_t vl) {
  return vwmacc_tama(mask, vd, rs1, vs2, vl);
}

vint64m4_t test_vwmacc_vv_i64m4_tama(vbool16_t mask, vint64m4_t vd, vint32m2_t vs1, vint32m2_t vs2, size_t vl) {
  return vwmacc_tama(mask, vd, vs1, vs2, vl);
}

vint64m4_t test_vwmacc_vx_i64m4_tama(vbool16_t mask, vint64m4_t vd, int32_t rs1, vint32m2_t vs2, size_t vl) {
  return vwmacc_tama(mask, vd, rs1, vs2, vl);
}

vint64m8_t test_vwmacc_vv_i64m8_tama(vbool8_t mask, vint64m8_t vd, vint32m4_t vs1, vint32m4_t vs2, size_t vl) {
  return vwmacc_tama(mask, vd, vs1, vs2, vl);
}

vint64m8_t test_vwmacc_vx_i64m8_tama(vbool8_t mask, vint64m8_t vd, int32_t rs1, vint32m4_t vs2, size_t vl) {
  return vwmacc_tama(mask, vd, rs1, vs2, vl);
}

vint16mf4_t test_vwmacc_vv_i16mf4_tamu(vbool64_t mask, vint16mf4_t vd, vint8mf8_t vs1, vint8mf8_t vs2, size_t vl) {
  return vwmacc_tamu(mask, vd, vs1, vs2, vl);
}

vint16mf4_t test_vwmacc_vx_i16mf4_tamu(vbool64_t mask, vint16mf4_t vd, int8_t rs1, vint8mf8_t vs2, size_t vl) {
  return vwmacc_tamu(mask, vd, rs1, vs2, vl);
}

vint16mf2_t test_vwmacc_vv_i16mf2_tamu(vbool32_t mask, vint16mf2_t vd, vint8mf4_t vs1, vint8mf4_t vs2, size_t vl) {
  return vwmacc_tamu(mask, vd, vs1, vs2, vl);
}

vint16mf2_t test_vwmacc_vx_i16mf2_tamu(vbool32_t mask, vint16mf2_t vd, int8_t rs1, vint8mf4_t vs2, size_t vl) {
  return vwmacc_tamu(mask, vd, rs1, vs2, vl);
}

vint16m1_t test_vwmacc_vv_i16m1_tamu(vbool16_t mask, vint16m1_t vd, vint8mf2_t vs1, vint8mf2_t vs2, size_t vl) {
  return vwmacc_tamu(mask, vd, vs1, vs2, vl);
}

vint16m1_t test_vwmacc_vx_i16m1_tamu(vbool16_t mask, vint16m1_t vd, int8_t rs1, vint8mf2_t vs2, size_t vl) {
  return vwmacc_tamu(mask, vd, rs1, vs2, vl);
}

vint16m2_t test_vwmacc_vv_i16m2_tamu(vbool8_t mask, vint16m2_t vd, vint8m1_t vs1, vint8m1_t vs2, size_t vl) {
  return vwmacc_tamu(mask, vd, vs1, vs2, vl);
}

vint16m2_t test_vwmacc_vx_i16m2_tamu(vbool8_t mask, vint16m2_t vd, int8_t rs1, vint8m1_t vs2, size_t vl) {
  return vwmacc_tamu(mask, vd, rs1, vs2, vl);
}

vint16m4_t test_vwmacc_vv_i16m4_tamu(vbool4_t mask, vint16m4_t vd, vint8m2_t vs1, vint8m2_t vs2, size_t vl) {
  return vwmacc_tamu(mask, vd, vs1, vs2, vl);
}

vint16m4_t test_vwmacc_vx_i16m4_tamu(vbool4_t mask, vint16m4_t vd, int8_t rs1, vint8m2_t vs2, size_t vl) {
  return vwmacc_tamu(mask, vd, rs1, vs2, vl);
}

vint16m8_t test_vwmacc_vv_i16m8_tamu(vbool2_t mask, vint16m8_t vd, vint8m4_t vs1, vint8m4_t vs2, size_t vl) {
  return vwmacc_tamu(mask, vd, vs1, vs2, vl);
}

vint16m8_t test_vwmacc_vx_i16m8_tamu(vbool2_t mask, vint16m8_t vd, int8_t rs1, vint8m4_t vs2, size_t vl) {
  return vwmacc_tamu(mask, vd, rs1, vs2, vl);
}

vint32mf2_t test_vwmacc_vv_i32mf2_tamu(vbool64_t mask, vint32mf2_t vd, vint16mf4_t vs1, vint16mf4_t vs2, size_t vl) {
  return vwmacc_tamu(mask, vd, vs1, vs2, vl);
}

vint32mf2_t test_vwmacc_vx_i32mf2_tamu(vbool64_t mask, vint32mf2_t vd, int16_t rs1, vint16mf4_t vs2, size_t vl) {
  return vwmacc_tamu(mask, vd, rs1, vs2, vl);
}

vint32m1_t test_vwmacc_vv_i32m1_tamu(vbool32_t mask, vint32m1_t vd, vint16mf2_t vs1, vint16mf2_t vs2, size_t vl) {
  return vwmacc_tamu(mask, vd, vs1, vs2, vl);
}

vint32m1_t test_vwmacc_vx_i32m1_tamu(vbool32_t mask, vint32m1_t vd, int16_t rs1, vint16mf2_t vs2, size_t vl) {
  return vwmacc_tamu(mask, vd, rs1, vs2, vl);
}

vint32m2_t test_vwmacc_vv_i32m2_tamu(vbool16_t mask, vint32m2_t vd, vint16m1_t vs1, vint16m1_t vs2, size_t vl) {
  return vwmacc_tamu(mask, vd, vs1, vs2, vl);
}

vint32m2_t test_vwmacc_vx_i32m2_tamu(vbool16_t mask, vint32m2_t vd, int16_t rs1, vint16m1_t vs2, size_t vl) {
  return vwmacc_tamu(mask, vd, rs1, vs2, vl);
}

vint32m4_t test_vwmacc_vv_i32m4_tamu(vbool8_t mask, vint32m4_t vd, vint16m2_t vs1, vint16m2_t vs2, size_t vl) {
  return vwmacc_tamu(mask, vd, vs1, vs2, vl);
}

vint32m4_t test_vwmacc_vx_i32m4_tamu(vbool8_t mask, vint32m4_t vd, int16_t rs1, vint16m2_t vs2, size_t vl) {
  return vwmacc_tamu(mask, vd, rs1, vs2, vl);
}

vint32m8_t test_vwmacc_vv_i32m8_tamu(vbool4_t mask, vint32m8_t vd, vint16m4_t vs1, vint16m4_t vs2, size_t vl) {
  return vwmacc_tamu(mask, vd, vs1, vs2, vl);
}

vint32m8_t test_vwmacc_vx_i32m8_tamu(vbool4_t mask, vint32m8_t vd, int16_t rs1, vint16m4_t vs2, size_t vl) {
  return vwmacc_tamu(mask, vd, rs1, vs2, vl);
}

vint64m1_t test_vwmacc_vv_i64m1_tamu(vbool64_t mask, vint64m1_t vd, vint32mf2_t vs1, vint32mf2_t vs2, size_t vl) {
  return vwmacc_tamu(mask, vd, vs1, vs2, vl);
}

vint64m1_t test_vwmacc_vx_i64m1_tamu(vbool64_t mask, vint64m1_t vd, int32_t rs1, vint32mf2_t vs2, size_t vl) {
  return vwmacc_tamu(mask, vd, rs1, vs2, vl);
}

vint64m2_t test_vwmacc_vv_i64m2_tamu(vbool32_t mask, vint64m2_t vd, vint32m1_t vs1, vint32m1_t vs2, size_t vl) {
  return vwmacc_tamu(mask, vd, vs1, vs2, vl);
}

vint64m2_t test_vwmacc_vx_i64m2_tamu(vbool32_t mask, vint64m2_t vd, int32_t rs1, vint32m1_t vs2, size_t vl) {
  return vwmacc_tamu(mask, vd, rs1, vs2, vl);
}

vint64m4_t test_vwmacc_vv_i64m4_tamu(vbool16_t mask, vint64m4_t vd, vint32m2_t vs1, vint32m2_t vs2, size_t vl) {
  return vwmacc_tamu(mask, vd, vs1, vs2, vl);
}

vint64m4_t test_vwmacc_vx_i64m4_tamu(vbool16_t mask, vint64m4_t vd, int32_t rs1, vint32m2_t vs2, size_t vl) {
  return vwmacc_tamu(mask, vd, rs1, vs2, vl);
}

vint64m8_t test_vwmacc_vv_i64m8_tamu(vbool8_t mask, vint64m8_t vd, vint32m4_t vs1, vint32m4_t vs2, size_t vl) {
  return vwmacc_tamu(mask, vd, vs1, vs2, vl);
}

vint64m8_t test_vwmacc_vx_i64m8_tamu(vbool8_t mask, vint64m8_t vd, int32_t rs1, vint32m4_t vs2, size_t vl) {
  return vwmacc_tamu(mask, vd, rs1, vs2, vl);
}

