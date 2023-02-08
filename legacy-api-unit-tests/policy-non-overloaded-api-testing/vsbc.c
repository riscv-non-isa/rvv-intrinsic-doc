#include <stdint.h>
#include "rvv-v0p10-compatible-headers/non-policy.h"
#include "rvv-v0p10-compatible-headers/policy.h"
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint8mf8_t test_vsbc_vvm_i8mf8_tu(vint8mf8_t maskedoff, vint8mf8_t op1, vint8mf8_t op2, vbool64_t borrowin, size_t vl) {
  return vsbc_vvm_i8mf8_tu(maskedoff, op1, op2, borrowin, vl);
}

vint8mf8_t test_vsbc_vxm_i8mf8_tu(vint8mf8_t maskedoff, vint8mf8_t op1, int8_t op2, vbool64_t borrowin, size_t vl) {
  return vsbc_vxm_i8mf8_tu(maskedoff, op1, op2, borrowin, vl);
}

vint8mf4_t test_vsbc_vvm_i8mf4_tu(vint8mf4_t maskedoff, vint8mf4_t op1, vint8mf4_t op2, vbool32_t borrowin, size_t vl) {
  return vsbc_vvm_i8mf4_tu(maskedoff, op1, op2, borrowin, vl);
}

vint8mf4_t test_vsbc_vxm_i8mf4_tu(vint8mf4_t maskedoff, vint8mf4_t op1, int8_t op2, vbool32_t borrowin, size_t vl) {
  return vsbc_vxm_i8mf4_tu(maskedoff, op1, op2, borrowin, vl);
}

vint8mf2_t test_vsbc_vvm_i8mf2_tu(vint8mf2_t maskedoff, vint8mf2_t op1, vint8mf2_t op2, vbool16_t borrowin, size_t vl) {
  return vsbc_vvm_i8mf2_tu(maskedoff, op1, op2, borrowin, vl);
}

vint8mf2_t test_vsbc_vxm_i8mf2_tu(vint8mf2_t maskedoff, vint8mf2_t op1, int8_t op2, vbool16_t borrowin, size_t vl) {
  return vsbc_vxm_i8mf2_tu(maskedoff, op1, op2, borrowin, vl);
}

vint8m1_t test_vsbc_vvm_i8m1_tu(vint8m1_t maskedoff, vint8m1_t op1, vint8m1_t op2, vbool8_t borrowin, size_t vl) {
  return vsbc_vvm_i8m1_tu(maskedoff, op1, op2, borrowin, vl);
}

vint8m1_t test_vsbc_vxm_i8m1_tu(vint8m1_t maskedoff, vint8m1_t op1, int8_t op2, vbool8_t borrowin, size_t vl) {
  return vsbc_vxm_i8m1_tu(maskedoff, op1, op2, borrowin, vl);
}

vint8m2_t test_vsbc_vvm_i8m2_tu(vint8m2_t maskedoff, vint8m2_t op1, vint8m2_t op2, vbool4_t borrowin, size_t vl) {
  return vsbc_vvm_i8m2_tu(maskedoff, op1, op2, borrowin, vl);
}

vint8m2_t test_vsbc_vxm_i8m2_tu(vint8m2_t maskedoff, vint8m2_t op1, int8_t op2, vbool4_t borrowin, size_t vl) {
  return vsbc_vxm_i8m2_tu(maskedoff, op1, op2, borrowin, vl);
}

vint8m4_t test_vsbc_vvm_i8m4_tu(vint8m4_t maskedoff, vint8m4_t op1, vint8m4_t op2, vbool2_t borrowin, size_t vl) {
  return vsbc_vvm_i8m4_tu(maskedoff, op1, op2, borrowin, vl);
}

vint8m4_t test_vsbc_vxm_i8m4_tu(vint8m4_t maskedoff, vint8m4_t op1, int8_t op2, vbool2_t borrowin, size_t vl) {
  return vsbc_vxm_i8m4_tu(maskedoff, op1, op2, borrowin, vl);
}

vint8m8_t test_vsbc_vvm_i8m8_tu(vint8m8_t maskedoff, vint8m8_t op1, vint8m8_t op2, vbool1_t borrowin, size_t vl) {
  return vsbc_vvm_i8m8_tu(maskedoff, op1, op2, borrowin, vl);
}

vint8m8_t test_vsbc_vxm_i8m8_tu(vint8m8_t maskedoff, vint8m8_t op1, int8_t op2, vbool1_t borrowin, size_t vl) {
  return vsbc_vxm_i8m8_tu(maskedoff, op1, op2, borrowin, vl);
}

vint16mf4_t test_vsbc_vvm_i16mf4_tu(vint16mf4_t maskedoff, vint16mf4_t op1, vint16mf4_t op2, vbool64_t borrowin, size_t vl) {
  return vsbc_vvm_i16mf4_tu(maskedoff, op1, op2, borrowin, vl);
}

vint16mf4_t test_vsbc_vxm_i16mf4_tu(vint16mf4_t maskedoff, vint16mf4_t op1, int16_t op2, vbool64_t borrowin, size_t vl) {
  return vsbc_vxm_i16mf4_tu(maskedoff, op1, op2, borrowin, vl);
}

vint16mf2_t test_vsbc_vvm_i16mf2_tu(vint16mf2_t maskedoff, vint16mf2_t op1, vint16mf2_t op2, vbool32_t borrowin, size_t vl) {
  return vsbc_vvm_i16mf2_tu(maskedoff, op1, op2, borrowin, vl);
}

vint16mf2_t test_vsbc_vxm_i16mf2_tu(vint16mf2_t maskedoff, vint16mf2_t op1, int16_t op2, vbool32_t borrowin, size_t vl) {
  return vsbc_vxm_i16mf2_tu(maskedoff, op1, op2, borrowin, vl);
}

vint16m1_t test_vsbc_vvm_i16m1_tu(vint16m1_t maskedoff, vint16m1_t op1, vint16m1_t op2, vbool16_t borrowin, size_t vl) {
  return vsbc_vvm_i16m1_tu(maskedoff, op1, op2, borrowin, vl);
}

vint16m1_t test_vsbc_vxm_i16m1_tu(vint16m1_t maskedoff, vint16m1_t op1, int16_t op2, vbool16_t borrowin, size_t vl) {
  return vsbc_vxm_i16m1_tu(maskedoff, op1, op2, borrowin, vl);
}

vint16m2_t test_vsbc_vvm_i16m2_tu(vint16m2_t maskedoff, vint16m2_t op1, vint16m2_t op2, vbool8_t borrowin, size_t vl) {
  return vsbc_vvm_i16m2_tu(maskedoff, op1, op2, borrowin, vl);
}

vint16m2_t test_vsbc_vxm_i16m2_tu(vint16m2_t maskedoff, vint16m2_t op1, int16_t op2, vbool8_t borrowin, size_t vl) {
  return vsbc_vxm_i16m2_tu(maskedoff, op1, op2, borrowin, vl);
}

vint16m4_t test_vsbc_vvm_i16m4_tu(vint16m4_t maskedoff, vint16m4_t op1, vint16m4_t op2, vbool4_t borrowin, size_t vl) {
  return vsbc_vvm_i16m4_tu(maskedoff, op1, op2, borrowin, vl);
}

vint16m4_t test_vsbc_vxm_i16m4_tu(vint16m4_t maskedoff, vint16m4_t op1, int16_t op2, vbool4_t borrowin, size_t vl) {
  return vsbc_vxm_i16m4_tu(maskedoff, op1, op2, borrowin, vl);
}

vint16m8_t test_vsbc_vvm_i16m8_tu(vint16m8_t maskedoff, vint16m8_t op1, vint16m8_t op2, vbool2_t borrowin, size_t vl) {
  return vsbc_vvm_i16m8_tu(maskedoff, op1, op2, borrowin, vl);
}

vint16m8_t test_vsbc_vxm_i16m8_tu(vint16m8_t maskedoff, vint16m8_t op1, int16_t op2, vbool2_t borrowin, size_t vl) {
  return vsbc_vxm_i16m8_tu(maskedoff, op1, op2, borrowin, vl);
}

vint32mf2_t test_vsbc_vvm_i32mf2_tu(vint32mf2_t maskedoff, vint32mf2_t op1, vint32mf2_t op2, vbool64_t borrowin, size_t vl) {
  return vsbc_vvm_i32mf2_tu(maskedoff, op1, op2, borrowin, vl);
}

vint32mf2_t test_vsbc_vxm_i32mf2_tu(vint32mf2_t maskedoff, vint32mf2_t op1, int32_t op2, vbool64_t borrowin, size_t vl) {
  return vsbc_vxm_i32mf2_tu(maskedoff, op1, op2, borrowin, vl);
}

vint32m1_t test_vsbc_vvm_i32m1_tu(vint32m1_t maskedoff, vint32m1_t op1, vint32m1_t op2, vbool32_t borrowin, size_t vl) {
  return vsbc_vvm_i32m1_tu(maskedoff, op1, op2, borrowin, vl);
}

vint32m1_t test_vsbc_vxm_i32m1_tu(vint32m1_t maskedoff, vint32m1_t op1, int32_t op2, vbool32_t borrowin, size_t vl) {
  return vsbc_vxm_i32m1_tu(maskedoff, op1, op2, borrowin, vl);
}

vint32m2_t test_vsbc_vvm_i32m2_tu(vint32m2_t maskedoff, vint32m2_t op1, vint32m2_t op2, vbool16_t borrowin, size_t vl) {
  return vsbc_vvm_i32m2_tu(maskedoff, op1, op2, borrowin, vl);
}

vint32m2_t test_vsbc_vxm_i32m2_tu(vint32m2_t maskedoff, vint32m2_t op1, int32_t op2, vbool16_t borrowin, size_t vl) {
  return vsbc_vxm_i32m2_tu(maskedoff, op1, op2, borrowin, vl);
}

vint32m4_t test_vsbc_vvm_i32m4_tu(vint32m4_t maskedoff, vint32m4_t op1, vint32m4_t op2, vbool8_t borrowin, size_t vl) {
  return vsbc_vvm_i32m4_tu(maskedoff, op1, op2, borrowin, vl);
}

vint32m4_t test_vsbc_vxm_i32m4_tu(vint32m4_t maskedoff, vint32m4_t op1, int32_t op2, vbool8_t borrowin, size_t vl) {
  return vsbc_vxm_i32m4_tu(maskedoff, op1, op2, borrowin, vl);
}

vint32m8_t test_vsbc_vvm_i32m8_tu(vint32m8_t maskedoff, vint32m8_t op1, vint32m8_t op2, vbool4_t borrowin, size_t vl) {
  return vsbc_vvm_i32m8_tu(maskedoff, op1, op2, borrowin, vl);
}

vint32m8_t test_vsbc_vxm_i32m8_tu(vint32m8_t maskedoff, vint32m8_t op1, int32_t op2, vbool4_t borrowin, size_t vl) {
  return vsbc_vxm_i32m8_tu(maskedoff, op1, op2, borrowin, vl);
}

vint64m1_t test_vsbc_vvm_i64m1_tu(vint64m1_t maskedoff, vint64m1_t op1, vint64m1_t op2, vbool64_t borrowin, size_t vl) {
  return vsbc_vvm_i64m1_tu(maskedoff, op1, op2, borrowin, vl);
}

vint64m1_t test_vsbc_vxm_i64m1_tu(vint64m1_t maskedoff, vint64m1_t op1, int64_t op2, vbool64_t borrowin, size_t vl) {
  return vsbc_vxm_i64m1_tu(maskedoff, op1, op2, borrowin, vl);
}

vint64m2_t test_vsbc_vvm_i64m2_tu(vint64m2_t maskedoff, vint64m2_t op1, vint64m2_t op2, vbool32_t borrowin, size_t vl) {
  return vsbc_vvm_i64m2_tu(maskedoff, op1, op2, borrowin, vl);
}

vint64m2_t test_vsbc_vxm_i64m2_tu(vint64m2_t maskedoff, vint64m2_t op1, int64_t op2, vbool32_t borrowin, size_t vl) {
  return vsbc_vxm_i64m2_tu(maskedoff, op1, op2, borrowin, vl);
}

vint64m4_t test_vsbc_vvm_i64m4_tu(vint64m4_t maskedoff, vint64m4_t op1, vint64m4_t op2, vbool16_t borrowin, size_t vl) {
  return vsbc_vvm_i64m4_tu(maskedoff, op1, op2, borrowin, vl);
}

vint64m4_t test_vsbc_vxm_i64m4_tu(vint64m4_t maskedoff, vint64m4_t op1, int64_t op2, vbool16_t borrowin, size_t vl) {
  return vsbc_vxm_i64m4_tu(maskedoff, op1, op2, borrowin, vl);
}

vint64m8_t test_vsbc_vvm_i64m8_tu(vint64m8_t maskedoff, vint64m8_t op1, vint64m8_t op2, vbool8_t borrowin, size_t vl) {
  return vsbc_vvm_i64m8_tu(maskedoff, op1, op2, borrowin, vl);
}

vint64m8_t test_vsbc_vxm_i64m8_tu(vint64m8_t maskedoff, vint64m8_t op1, int64_t op2, vbool8_t borrowin, size_t vl) {
  return vsbc_vxm_i64m8_tu(maskedoff, op1, op2, borrowin, vl);
}

vuint8mf8_t test_vsbc_vvm_u8mf8_tu(vuint8mf8_t maskedoff, vuint8mf8_t op1, vuint8mf8_t op2, vbool64_t borrowin, size_t vl) {
  return vsbc_vvm_u8mf8_tu(maskedoff, op1, op2, borrowin, vl);
}

vuint8mf8_t test_vsbc_vxm_u8mf8_tu(vuint8mf8_t maskedoff, vuint8mf8_t op1, uint8_t op2, vbool64_t borrowin, size_t vl) {
  return vsbc_vxm_u8mf8_tu(maskedoff, op1, op2, borrowin, vl);
}

vuint8mf4_t test_vsbc_vvm_u8mf4_tu(vuint8mf4_t maskedoff, vuint8mf4_t op1, vuint8mf4_t op2, vbool32_t borrowin, size_t vl) {
  return vsbc_vvm_u8mf4_tu(maskedoff, op1, op2, borrowin, vl);
}

vuint8mf4_t test_vsbc_vxm_u8mf4_tu(vuint8mf4_t maskedoff, vuint8mf4_t op1, uint8_t op2, vbool32_t borrowin, size_t vl) {
  return vsbc_vxm_u8mf4_tu(maskedoff, op1, op2, borrowin, vl);
}

vuint8mf2_t test_vsbc_vvm_u8mf2_tu(vuint8mf2_t maskedoff, vuint8mf2_t op1, vuint8mf2_t op2, vbool16_t borrowin, size_t vl) {
  return vsbc_vvm_u8mf2_tu(maskedoff, op1, op2, borrowin, vl);
}

vuint8mf2_t test_vsbc_vxm_u8mf2_tu(vuint8mf2_t maskedoff, vuint8mf2_t op1, uint8_t op2, vbool16_t borrowin, size_t vl) {
  return vsbc_vxm_u8mf2_tu(maskedoff, op1, op2, borrowin, vl);
}

vuint8m1_t test_vsbc_vvm_u8m1_tu(vuint8m1_t maskedoff, vuint8m1_t op1, vuint8m1_t op2, vbool8_t borrowin, size_t vl) {
  return vsbc_vvm_u8m1_tu(maskedoff, op1, op2, borrowin, vl);
}

vuint8m1_t test_vsbc_vxm_u8m1_tu(vuint8m1_t maskedoff, vuint8m1_t op1, uint8_t op2, vbool8_t borrowin, size_t vl) {
  return vsbc_vxm_u8m1_tu(maskedoff, op1, op2, borrowin, vl);
}

vuint8m2_t test_vsbc_vvm_u8m2_tu(vuint8m2_t maskedoff, vuint8m2_t op1, vuint8m2_t op2, vbool4_t borrowin, size_t vl) {
  return vsbc_vvm_u8m2_tu(maskedoff, op1, op2, borrowin, vl);
}

vuint8m2_t test_vsbc_vxm_u8m2_tu(vuint8m2_t maskedoff, vuint8m2_t op1, uint8_t op2, vbool4_t borrowin, size_t vl) {
  return vsbc_vxm_u8m2_tu(maskedoff, op1, op2, borrowin, vl);
}

vuint8m4_t test_vsbc_vvm_u8m4_tu(vuint8m4_t maskedoff, vuint8m4_t op1, vuint8m4_t op2, vbool2_t borrowin, size_t vl) {
  return vsbc_vvm_u8m4_tu(maskedoff, op1, op2, borrowin, vl);
}

vuint8m4_t test_vsbc_vxm_u8m4_tu(vuint8m4_t maskedoff, vuint8m4_t op1, uint8_t op2, vbool2_t borrowin, size_t vl) {
  return vsbc_vxm_u8m4_tu(maskedoff, op1, op2, borrowin, vl);
}

vuint8m8_t test_vsbc_vvm_u8m8_tu(vuint8m8_t maskedoff, vuint8m8_t op1, vuint8m8_t op2, vbool1_t borrowin, size_t vl) {
  return vsbc_vvm_u8m8_tu(maskedoff, op1, op2, borrowin, vl);
}

vuint8m8_t test_vsbc_vxm_u8m8_tu(vuint8m8_t maskedoff, vuint8m8_t op1, uint8_t op2, vbool1_t borrowin, size_t vl) {
  return vsbc_vxm_u8m8_tu(maskedoff, op1, op2, borrowin, vl);
}

vuint16mf4_t test_vsbc_vvm_u16mf4_tu(vuint16mf4_t maskedoff, vuint16mf4_t op1, vuint16mf4_t op2, vbool64_t borrowin, size_t vl) {
  return vsbc_vvm_u16mf4_tu(maskedoff, op1, op2, borrowin, vl);
}

vuint16mf4_t test_vsbc_vxm_u16mf4_tu(vuint16mf4_t maskedoff, vuint16mf4_t op1, uint16_t op2, vbool64_t borrowin, size_t vl) {
  return vsbc_vxm_u16mf4_tu(maskedoff, op1, op2, borrowin, vl);
}

vuint16mf2_t test_vsbc_vvm_u16mf2_tu(vuint16mf2_t maskedoff, vuint16mf2_t op1, vuint16mf2_t op2, vbool32_t borrowin, size_t vl) {
  return vsbc_vvm_u16mf2_tu(maskedoff, op1, op2, borrowin, vl);
}

vuint16mf2_t test_vsbc_vxm_u16mf2_tu(vuint16mf2_t maskedoff, vuint16mf2_t op1, uint16_t op2, vbool32_t borrowin, size_t vl) {
  return vsbc_vxm_u16mf2_tu(maskedoff, op1, op2, borrowin, vl);
}

vuint16m1_t test_vsbc_vvm_u16m1_tu(vuint16m1_t maskedoff, vuint16m1_t op1, vuint16m1_t op2, vbool16_t borrowin, size_t vl) {
  return vsbc_vvm_u16m1_tu(maskedoff, op1, op2, borrowin, vl);
}

vuint16m1_t test_vsbc_vxm_u16m1_tu(vuint16m1_t maskedoff, vuint16m1_t op1, uint16_t op2, vbool16_t borrowin, size_t vl) {
  return vsbc_vxm_u16m1_tu(maskedoff, op1, op2, borrowin, vl);
}

vuint16m2_t test_vsbc_vvm_u16m2_tu(vuint16m2_t maskedoff, vuint16m2_t op1, vuint16m2_t op2, vbool8_t borrowin, size_t vl) {
  return vsbc_vvm_u16m2_tu(maskedoff, op1, op2, borrowin, vl);
}

vuint16m2_t test_vsbc_vxm_u16m2_tu(vuint16m2_t maskedoff, vuint16m2_t op1, uint16_t op2, vbool8_t borrowin, size_t vl) {
  return vsbc_vxm_u16m2_tu(maskedoff, op1, op2, borrowin, vl);
}

vuint16m4_t test_vsbc_vvm_u16m4_tu(vuint16m4_t maskedoff, vuint16m4_t op1, vuint16m4_t op2, vbool4_t borrowin, size_t vl) {
  return vsbc_vvm_u16m4_tu(maskedoff, op1, op2, borrowin, vl);
}

vuint16m4_t test_vsbc_vxm_u16m4_tu(vuint16m4_t maskedoff, vuint16m4_t op1, uint16_t op2, vbool4_t borrowin, size_t vl) {
  return vsbc_vxm_u16m4_tu(maskedoff, op1, op2, borrowin, vl);
}

vuint16m8_t test_vsbc_vvm_u16m8_tu(vuint16m8_t maskedoff, vuint16m8_t op1, vuint16m8_t op2, vbool2_t borrowin, size_t vl) {
  return vsbc_vvm_u16m8_tu(maskedoff, op1, op2, borrowin, vl);
}

vuint16m8_t test_vsbc_vxm_u16m8_tu(vuint16m8_t maskedoff, vuint16m8_t op1, uint16_t op2, vbool2_t borrowin, size_t vl) {
  return vsbc_vxm_u16m8_tu(maskedoff, op1, op2, borrowin, vl);
}

vuint32mf2_t test_vsbc_vvm_u32mf2_tu(vuint32mf2_t maskedoff, vuint32mf2_t op1, vuint32mf2_t op2, vbool64_t borrowin, size_t vl) {
  return vsbc_vvm_u32mf2_tu(maskedoff, op1, op2, borrowin, vl);
}

vuint32mf2_t test_vsbc_vxm_u32mf2_tu(vuint32mf2_t maskedoff, vuint32mf2_t op1, uint32_t op2, vbool64_t borrowin, size_t vl) {
  return vsbc_vxm_u32mf2_tu(maskedoff, op1, op2, borrowin, vl);
}

vuint32m1_t test_vsbc_vvm_u32m1_tu(vuint32m1_t maskedoff, vuint32m1_t op1, vuint32m1_t op2, vbool32_t borrowin, size_t vl) {
  return vsbc_vvm_u32m1_tu(maskedoff, op1, op2, borrowin, vl);
}

vuint32m1_t test_vsbc_vxm_u32m1_tu(vuint32m1_t maskedoff, vuint32m1_t op1, uint32_t op2, vbool32_t borrowin, size_t vl) {
  return vsbc_vxm_u32m1_tu(maskedoff, op1, op2, borrowin, vl);
}

vuint32m2_t test_vsbc_vvm_u32m2_tu(vuint32m2_t maskedoff, vuint32m2_t op1, vuint32m2_t op2, vbool16_t borrowin, size_t vl) {
  return vsbc_vvm_u32m2_tu(maskedoff, op1, op2, borrowin, vl);
}

vuint32m2_t test_vsbc_vxm_u32m2_tu(vuint32m2_t maskedoff, vuint32m2_t op1, uint32_t op2, vbool16_t borrowin, size_t vl) {
  return vsbc_vxm_u32m2_tu(maskedoff, op1, op2, borrowin, vl);
}

vuint32m4_t test_vsbc_vvm_u32m4_tu(vuint32m4_t maskedoff, vuint32m4_t op1, vuint32m4_t op2, vbool8_t borrowin, size_t vl) {
  return vsbc_vvm_u32m4_tu(maskedoff, op1, op2, borrowin, vl);
}

vuint32m4_t test_vsbc_vxm_u32m4_tu(vuint32m4_t maskedoff, vuint32m4_t op1, uint32_t op2, vbool8_t borrowin, size_t vl) {
  return vsbc_vxm_u32m4_tu(maskedoff, op1, op2, borrowin, vl);
}

vuint32m8_t test_vsbc_vvm_u32m8_tu(vuint32m8_t maskedoff, vuint32m8_t op1, vuint32m8_t op2, vbool4_t borrowin, size_t vl) {
  return vsbc_vvm_u32m8_tu(maskedoff, op1, op2, borrowin, vl);
}

vuint32m8_t test_vsbc_vxm_u32m8_tu(vuint32m8_t maskedoff, vuint32m8_t op1, uint32_t op2, vbool4_t borrowin, size_t vl) {
  return vsbc_vxm_u32m8_tu(maskedoff, op1, op2, borrowin, vl);
}

vuint64m1_t test_vsbc_vvm_u64m1_tu(vuint64m1_t maskedoff, vuint64m1_t op1, vuint64m1_t op2, vbool64_t borrowin, size_t vl) {
  return vsbc_vvm_u64m1_tu(maskedoff, op1, op2, borrowin, vl);
}

vuint64m1_t test_vsbc_vxm_u64m1_tu(vuint64m1_t maskedoff, vuint64m1_t op1, uint64_t op2, vbool64_t borrowin, size_t vl) {
  return vsbc_vxm_u64m1_tu(maskedoff, op1, op2, borrowin, vl);
}

vuint64m2_t test_vsbc_vvm_u64m2_tu(vuint64m2_t maskedoff, vuint64m2_t op1, vuint64m2_t op2, vbool32_t borrowin, size_t vl) {
  return vsbc_vvm_u64m2_tu(maskedoff, op1, op2, borrowin, vl);
}

vuint64m2_t test_vsbc_vxm_u64m2_tu(vuint64m2_t maskedoff, vuint64m2_t op1, uint64_t op2, vbool32_t borrowin, size_t vl) {
  return vsbc_vxm_u64m2_tu(maskedoff, op1, op2, borrowin, vl);
}

vuint64m4_t test_vsbc_vvm_u64m4_tu(vuint64m4_t maskedoff, vuint64m4_t op1, vuint64m4_t op2, vbool16_t borrowin, size_t vl) {
  return vsbc_vvm_u64m4_tu(maskedoff, op1, op2, borrowin, vl);
}

vuint64m4_t test_vsbc_vxm_u64m4_tu(vuint64m4_t maskedoff, vuint64m4_t op1, uint64_t op2, vbool16_t borrowin, size_t vl) {
  return vsbc_vxm_u64m4_tu(maskedoff, op1, op2, borrowin, vl);
}

vuint64m8_t test_vsbc_vvm_u64m8_tu(vuint64m8_t maskedoff, vuint64m8_t op1, vuint64m8_t op2, vbool8_t borrowin, size_t vl) {
  return vsbc_vvm_u64m8_tu(maskedoff, op1, op2, borrowin, vl);
}

vuint64m8_t test_vsbc_vxm_u64m8_tu(vuint64m8_t maskedoff, vuint64m8_t op1, uint64_t op2, vbool8_t borrowin, size_t vl) {
  return vsbc_vxm_u64m8_tu(maskedoff, op1, op2, borrowin, vl);
}

vint8mf8_t test_vsbc_vvm_i8mf8_ta(vint8mf8_t op1, vint8mf8_t op2, vbool64_t borrowin, size_t vl) {
  return vsbc_vvm_i8mf8_ta(op1, op2, borrowin, vl);
}

vint8mf8_t test_vsbc_vxm_i8mf8_ta(vint8mf8_t op1, int8_t op2, vbool64_t borrowin, size_t vl) {
  return vsbc_vxm_i8mf8_ta(op1, op2, borrowin, vl);
}

vint8mf4_t test_vsbc_vvm_i8mf4_ta(vint8mf4_t op1, vint8mf4_t op2, vbool32_t borrowin, size_t vl) {
  return vsbc_vvm_i8mf4_ta(op1, op2, borrowin, vl);
}

vint8mf4_t test_vsbc_vxm_i8mf4_ta(vint8mf4_t op1, int8_t op2, vbool32_t borrowin, size_t vl) {
  return vsbc_vxm_i8mf4_ta(op1, op2, borrowin, vl);
}

vint8mf2_t test_vsbc_vvm_i8mf2_ta(vint8mf2_t op1, vint8mf2_t op2, vbool16_t borrowin, size_t vl) {
  return vsbc_vvm_i8mf2_ta(op1, op2, borrowin, vl);
}

vint8mf2_t test_vsbc_vxm_i8mf2_ta(vint8mf2_t op1, int8_t op2, vbool16_t borrowin, size_t vl) {
  return vsbc_vxm_i8mf2_ta(op1, op2, borrowin, vl);
}

vint8m1_t test_vsbc_vvm_i8m1_ta(vint8m1_t op1, vint8m1_t op2, vbool8_t borrowin, size_t vl) {
  return vsbc_vvm_i8m1_ta(op1, op2, borrowin, vl);
}

vint8m1_t test_vsbc_vxm_i8m1_ta(vint8m1_t op1, int8_t op2, vbool8_t borrowin, size_t vl) {
  return vsbc_vxm_i8m1_ta(op1, op2, borrowin, vl);
}

vint8m2_t test_vsbc_vvm_i8m2_ta(vint8m2_t op1, vint8m2_t op2, vbool4_t borrowin, size_t vl) {
  return vsbc_vvm_i8m2_ta(op1, op2, borrowin, vl);
}

vint8m2_t test_vsbc_vxm_i8m2_ta(vint8m2_t op1, int8_t op2, vbool4_t borrowin, size_t vl) {
  return vsbc_vxm_i8m2_ta(op1, op2, borrowin, vl);
}

vint8m4_t test_vsbc_vvm_i8m4_ta(vint8m4_t op1, vint8m4_t op2, vbool2_t borrowin, size_t vl) {
  return vsbc_vvm_i8m4_ta(op1, op2, borrowin, vl);
}

vint8m4_t test_vsbc_vxm_i8m4_ta(vint8m4_t op1, int8_t op2, vbool2_t borrowin, size_t vl) {
  return vsbc_vxm_i8m4_ta(op1, op2, borrowin, vl);
}

vint8m8_t test_vsbc_vvm_i8m8_ta(vint8m8_t op1, vint8m8_t op2, vbool1_t borrowin, size_t vl) {
  return vsbc_vvm_i8m8_ta(op1, op2, borrowin, vl);
}

vint8m8_t test_vsbc_vxm_i8m8_ta(vint8m8_t op1, int8_t op2, vbool1_t borrowin, size_t vl) {
  return vsbc_vxm_i8m8_ta(op1, op2, borrowin, vl);
}

vint16mf4_t test_vsbc_vvm_i16mf4_ta(vint16mf4_t op1, vint16mf4_t op2, vbool64_t borrowin, size_t vl) {
  return vsbc_vvm_i16mf4_ta(op1, op2, borrowin, vl);
}

vint16mf4_t test_vsbc_vxm_i16mf4_ta(vint16mf4_t op1, int16_t op2, vbool64_t borrowin, size_t vl) {
  return vsbc_vxm_i16mf4_ta(op1, op2, borrowin, vl);
}

vint16mf2_t test_vsbc_vvm_i16mf2_ta(vint16mf2_t op1, vint16mf2_t op2, vbool32_t borrowin, size_t vl) {
  return vsbc_vvm_i16mf2_ta(op1, op2, borrowin, vl);
}

vint16mf2_t test_vsbc_vxm_i16mf2_ta(vint16mf2_t op1, int16_t op2, vbool32_t borrowin, size_t vl) {
  return vsbc_vxm_i16mf2_ta(op1, op2, borrowin, vl);
}

vint16m1_t test_vsbc_vvm_i16m1_ta(vint16m1_t op1, vint16m1_t op2, vbool16_t borrowin, size_t vl) {
  return vsbc_vvm_i16m1_ta(op1, op2, borrowin, vl);
}

vint16m1_t test_vsbc_vxm_i16m1_ta(vint16m1_t op1, int16_t op2, vbool16_t borrowin, size_t vl) {
  return vsbc_vxm_i16m1_ta(op1, op2, borrowin, vl);
}

vint16m2_t test_vsbc_vvm_i16m2_ta(vint16m2_t op1, vint16m2_t op2, vbool8_t borrowin, size_t vl) {
  return vsbc_vvm_i16m2_ta(op1, op2, borrowin, vl);
}

vint16m2_t test_vsbc_vxm_i16m2_ta(vint16m2_t op1, int16_t op2, vbool8_t borrowin, size_t vl) {
  return vsbc_vxm_i16m2_ta(op1, op2, borrowin, vl);
}

vint16m4_t test_vsbc_vvm_i16m4_ta(vint16m4_t op1, vint16m4_t op2, vbool4_t borrowin, size_t vl) {
  return vsbc_vvm_i16m4_ta(op1, op2, borrowin, vl);
}

vint16m4_t test_vsbc_vxm_i16m4_ta(vint16m4_t op1, int16_t op2, vbool4_t borrowin, size_t vl) {
  return vsbc_vxm_i16m4_ta(op1, op2, borrowin, vl);
}

vint16m8_t test_vsbc_vvm_i16m8_ta(vint16m8_t op1, vint16m8_t op2, vbool2_t borrowin, size_t vl) {
  return vsbc_vvm_i16m8_ta(op1, op2, borrowin, vl);
}

vint16m8_t test_vsbc_vxm_i16m8_ta(vint16m8_t op1, int16_t op2, vbool2_t borrowin, size_t vl) {
  return vsbc_vxm_i16m8_ta(op1, op2, borrowin, vl);
}

vint32mf2_t test_vsbc_vvm_i32mf2_ta(vint32mf2_t op1, vint32mf2_t op2, vbool64_t borrowin, size_t vl) {
  return vsbc_vvm_i32mf2_ta(op1, op2, borrowin, vl);
}

vint32mf2_t test_vsbc_vxm_i32mf2_ta(vint32mf2_t op1, int32_t op2, vbool64_t borrowin, size_t vl) {
  return vsbc_vxm_i32mf2_ta(op1, op2, borrowin, vl);
}

vint32m1_t test_vsbc_vvm_i32m1_ta(vint32m1_t op1, vint32m1_t op2, vbool32_t borrowin, size_t vl) {
  return vsbc_vvm_i32m1_ta(op1, op2, borrowin, vl);
}

vint32m1_t test_vsbc_vxm_i32m1_ta(vint32m1_t op1, int32_t op2, vbool32_t borrowin, size_t vl) {
  return vsbc_vxm_i32m1_ta(op1, op2, borrowin, vl);
}

vint32m2_t test_vsbc_vvm_i32m2_ta(vint32m2_t op1, vint32m2_t op2, vbool16_t borrowin, size_t vl) {
  return vsbc_vvm_i32m2_ta(op1, op2, borrowin, vl);
}

vint32m2_t test_vsbc_vxm_i32m2_ta(vint32m2_t op1, int32_t op2, vbool16_t borrowin, size_t vl) {
  return vsbc_vxm_i32m2_ta(op1, op2, borrowin, vl);
}

vint32m4_t test_vsbc_vvm_i32m4_ta(vint32m4_t op1, vint32m4_t op2, vbool8_t borrowin, size_t vl) {
  return vsbc_vvm_i32m4_ta(op1, op2, borrowin, vl);
}

vint32m4_t test_vsbc_vxm_i32m4_ta(vint32m4_t op1, int32_t op2, vbool8_t borrowin, size_t vl) {
  return vsbc_vxm_i32m4_ta(op1, op2, borrowin, vl);
}

vint32m8_t test_vsbc_vvm_i32m8_ta(vint32m8_t op1, vint32m8_t op2, vbool4_t borrowin, size_t vl) {
  return vsbc_vvm_i32m8_ta(op1, op2, borrowin, vl);
}

vint32m8_t test_vsbc_vxm_i32m8_ta(vint32m8_t op1, int32_t op2, vbool4_t borrowin, size_t vl) {
  return vsbc_vxm_i32m8_ta(op1, op2, borrowin, vl);
}

vint64m1_t test_vsbc_vvm_i64m1_ta(vint64m1_t op1, vint64m1_t op2, vbool64_t borrowin, size_t vl) {
  return vsbc_vvm_i64m1_ta(op1, op2, borrowin, vl);
}

vint64m1_t test_vsbc_vxm_i64m1_ta(vint64m1_t op1, int64_t op2, vbool64_t borrowin, size_t vl) {
  return vsbc_vxm_i64m1_ta(op1, op2, borrowin, vl);
}

vint64m2_t test_vsbc_vvm_i64m2_ta(vint64m2_t op1, vint64m2_t op2, vbool32_t borrowin, size_t vl) {
  return vsbc_vvm_i64m2_ta(op1, op2, borrowin, vl);
}

vint64m2_t test_vsbc_vxm_i64m2_ta(vint64m2_t op1, int64_t op2, vbool32_t borrowin, size_t vl) {
  return vsbc_vxm_i64m2_ta(op1, op2, borrowin, vl);
}

vint64m4_t test_vsbc_vvm_i64m4_ta(vint64m4_t op1, vint64m4_t op2, vbool16_t borrowin, size_t vl) {
  return vsbc_vvm_i64m4_ta(op1, op2, borrowin, vl);
}

vint64m4_t test_vsbc_vxm_i64m4_ta(vint64m4_t op1, int64_t op2, vbool16_t borrowin, size_t vl) {
  return vsbc_vxm_i64m4_ta(op1, op2, borrowin, vl);
}

vint64m8_t test_vsbc_vvm_i64m8_ta(vint64m8_t op1, vint64m8_t op2, vbool8_t borrowin, size_t vl) {
  return vsbc_vvm_i64m8_ta(op1, op2, borrowin, vl);
}

vint64m8_t test_vsbc_vxm_i64m8_ta(vint64m8_t op1, int64_t op2, vbool8_t borrowin, size_t vl) {
  return vsbc_vxm_i64m8_ta(op1, op2, borrowin, vl);
}

vuint8mf8_t test_vsbc_vvm_u8mf8_ta(vuint8mf8_t op1, vuint8mf8_t op2, vbool64_t borrowin, size_t vl) {
  return vsbc_vvm_u8mf8_ta(op1, op2, borrowin, vl);
}

vuint8mf8_t test_vsbc_vxm_u8mf8_ta(vuint8mf8_t op1, uint8_t op2, vbool64_t borrowin, size_t vl) {
  return vsbc_vxm_u8mf8_ta(op1, op2, borrowin, vl);
}

vuint8mf4_t test_vsbc_vvm_u8mf4_ta(vuint8mf4_t op1, vuint8mf4_t op2, vbool32_t borrowin, size_t vl) {
  return vsbc_vvm_u8mf4_ta(op1, op2, borrowin, vl);
}

vuint8mf4_t test_vsbc_vxm_u8mf4_ta(vuint8mf4_t op1, uint8_t op2, vbool32_t borrowin, size_t vl) {
  return vsbc_vxm_u8mf4_ta(op1, op2, borrowin, vl);
}

vuint8mf2_t test_vsbc_vvm_u8mf2_ta(vuint8mf2_t op1, vuint8mf2_t op2, vbool16_t borrowin, size_t vl) {
  return vsbc_vvm_u8mf2_ta(op1, op2, borrowin, vl);
}

vuint8mf2_t test_vsbc_vxm_u8mf2_ta(vuint8mf2_t op1, uint8_t op2, vbool16_t borrowin, size_t vl) {
  return vsbc_vxm_u8mf2_ta(op1, op2, borrowin, vl);
}

vuint8m1_t test_vsbc_vvm_u8m1_ta(vuint8m1_t op1, vuint8m1_t op2, vbool8_t borrowin, size_t vl) {
  return vsbc_vvm_u8m1_ta(op1, op2, borrowin, vl);
}

vuint8m1_t test_vsbc_vxm_u8m1_ta(vuint8m1_t op1, uint8_t op2, vbool8_t borrowin, size_t vl) {
  return vsbc_vxm_u8m1_ta(op1, op2, borrowin, vl);
}

vuint8m2_t test_vsbc_vvm_u8m2_ta(vuint8m2_t op1, vuint8m2_t op2, vbool4_t borrowin, size_t vl) {
  return vsbc_vvm_u8m2_ta(op1, op2, borrowin, vl);
}

vuint8m2_t test_vsbc_vxm_u8m2_ta(vuint8m2_t op1, uint8_t op2, vbool4_t borrowin, size_t vl) {
  return vsbc_vxm_u8m2_ta(op1, op2, borrowin, vl);
}

vuint8m4_t test_vsbc_vvm_u8m4_ta(vuint8m4_t op1, vuint8m4_t op2, vbool2_t borrowin, size_t vl) {
  return vsbc_vvm_u8m4_ta(op1, op2, borrowin, vl);
}

vuint8m4_t test_vsbc_vxm_u8m4_ta(vuint8m4_t op1, uint8_t op2, vbool2_t borrowin, size_t vl) {
  return vsbc_vxm_u8m4_ta(op1, op2, borrowin, vl);
}

vuint8m8_t test_vsbc_vvm_u8m8_ta(vuint8m8_t op1, vuint8m8_t op2, vbool1_t borrowin, size_t vl) {
  return vsbc_vvm_u8m8_ta(op1, op2, borrowin, vl);
}

vuint8m8_t test_vsbc_vxm_u8m8_ta(vuint8m8_t op1, uint8_t op2, vbool1_t borrowin, size_t vl) {
  return vsbc_vxm_u8m8_ta(op1, op2, borrowin, vl);
}

vuint16mf4_t test_vsbc_vvm_u16mf4_ta(vuint16mf4_t op1, vuint16mf4_t op2, vbool64_t borrowin, size_t vl) {
  return vsbc_vvm_u16mf4_ta(op1, op2, borrowin, vl);
}

vuint16mf4_t test_vsbc_vxm_u16mf4_ta(vuint16mf4_t op1, uint16_t op2, vbool64_t borrowin, size_t vl) {
  return vsbc_vxm_u16mf4_ta(op1, op2, borrowin, vl);
}

vuint16mf2_t test_vsbc_vvm_u16mf2_ta(vuint16mf2_t op1, vuint16mf2_t op2, vbool32_t borrowin, size_t vl) {
  return vsbc_vvm_u16mf2_ta(op1, op2, borrowin, vl);
}

vuint16mf2_t test_vsbc_vxm_u16mf2_ta(vuint16mf2_t op1, uint16_t op2, vbool32_t borrowin, size_t vl) {
  return vsbc_vxm_u16mf2_ta(op1, op2, borrowin, vl);
}

vuint16m1_t test_vsbc_vvm_u16m1_ta(vuint16m1_t op1, vuint16m1_t op2, vbool16_t borrowin, size_t vl) {
  return vsbc_vvm_u16m1_ta(op1, op2, borrowin, vl);
}

vuint16m1_t test_vsbc_vxm_u16m1_ta(vuint16m1_t op1, uint16_t op2, vbool16_t borrowin, size_t vl) {
  return vsbc_vxm_u16m1_ta(op1, op2, borrowin, vl);
}

vuint16m2_t test_vsbc_vvm_u16m2_ta(vuint16m2_t op1, vuint16m2_t op2, vbool8_t borrowin, size_t vl) {
  return vsbc_vvm_u16m2_ta(op1, op2, borrowin, vl);
}

vuint16m2_t test_vsbc_vxm_u16m2_ta(vuint16m2_t op1, uint16_t op2, vbool8_t borrowin, size_t vl) {
  return vsbc_vxm_u16m2_ta(op1, op2, borrowin, vl);
}

vuint16m4_t test_vsbc_vvm_u16m4_ta(vuint16m4_t op1, vuint16m4_t op2, vbool4_t borrowin, size_t vl) {
  return vsbc_vvm_u16m4_ta(op1, op2, borrowin, vl);
}

vuint16m4_t test_vsbc_vxm_u16m4_ta(vuint16m4_t op1, uint16_t op2, vbool4_t borrowin, size_t vl) {
  return vsbc_vxm_u16m4_ta(op1, op2, borrowin, vl);
}

vuint16m8_t test_vsbc_vvm_u16m8_ta(vuint16m8_t op1, vuint16m8_t op2, vbool2_t borrowin, size_t vl) {
  return vsbc_vvm_u16m8_ta(op1, op2, borrowin, vl);
}

vuint16m8_t test_vsbc_vxm_u16m8_ta(vuint16m8_t op1, uint16_t op2, vbool2_t borrowin, size_t vl) {
  return vsbc_vxm_u16m8_ta(op1, op2, borrowin, vl);
}

vuint32mf2_t test_vsbc_vvm_u32mf2_ta(vuint32mf2_t op1, vuint32mf2_t op2, vbool64_t borrowin, size_t vl) {
  return vsbc_vvm_u32mf2_ta(op1, op2, borrowin, vl);
}

vuint32mf2_t test_vsbc_vxm_u32mf2_ta(vuint32mf2_t op1, uint32_t op2, vbool64_t borrowin, size_t vl) {
  return vsbc_vxm_u32mf2_ta(op1, op2, borrowin, vl);
}

vuint32m1_t test_vsbc_vvm_u32m1_ta(vuint32m1_t op1, vuint32m1_t op2, vbool32_t borrowin, size_t vl) {
  return vsbc_vvm_u32m1_ta(op1, op2, borrowin, vl);
}

vuint32m1_t test_vsbc_vxm_u32m1_ta(vuint32m1_t op1, uint32_t op2, vbool32_t borrowin, size_t vl) {
  return vsbc_vxm_u32m1_ta(op1, op2, borrowin, vl);
}

vuint32m2_t test_vsbc_vvm_u32m2_ta(vuint32m2_t op1, vuint32m2_t op2, vbool16_t borrowin, size_t vl) {
  return vsbc_vvm_u32m2_ta(op1, op2, borrowin, vl);
}

vuint32m2_t test_vsbc_vxm_u32m2_ta(vuint32m2_t op1, uint32_t op2, vbool16_t borrowin, size_t vl) {
  return vsbc_vxm_u32m2_ta(op1, op2, borrowin, vl);
}

vuint32m4_t test_vsbc_vvm_u32m4_ta(vuint32m4_t op1, vuint32m4_t op2, vbool8_t borrowin, size_t vl) {
  return vsbc_vvm_u32m4_ta(op1, op2, borrowin, vl);
}

vuint32m4_t test_vsbc_vxm_u32m4_ta(vuint32m4_t op1, uint32_t op2, vbool8_t borrowin, size_t vl) {
  return vsbc_vxm_u32m4_ta(op1, op2, borrowin, vl);
}

vuint32m8_t test_vsbc_vvm_u32m8_ta(vuint32m8_t op1, vuint32m8_t op2, vbool4_t borrowin, size_t vl) {
  return vsbc_vvm_u32m8_ta(op1, op2, borrowin, vl);
}

vuint32m8_t test_vsbc_vxm_u32m8_ta(vuint32m8_t op1, uint32_t op2, vbool4_t borrowin, size_t vl) {
  return vsbc_vxm_u32m8_ta(op1, op2, borrowin, vl);
}

vuint64m1_t test_vsbc_vvm_u64m1_ta(vuint64m1_t op1, vuint64m1_t op2, vbool64_t borrowin, size_t vl) {
  return vsbc_vvm_u64m1_ta(op1, op2, borrowin, vl);
}

vuint64m1_t test_vsbc_vxm_u64m1_ta(vuint64m1_t op1, uint64_t op2, vbool64_t borrowin, size_t vl) {
  return vsbc_vxm_u64m1_ta(op1, op2, borrowin, vl);
}

vuint64m2_t test_vsbc_vvm_u64m2_ta(vuint64m2_t op1, vuint64m2_t op2, vbool32_t borrowin, size_t vl) {
  return vsbc_vvm_u64m2_ta(op1, op2, borrowin, vl);
}

vuint64m2_t test_vsbc_vxm_u64m2_ta(vuint64m2_t op1, uint64_t op2, vbool32_t borrowin, size_t vl) {
  return vsbc_vxm_u64m2_ta(op1, op2, borrowin, vl);
}

vuint64m4_t test_vsbc_vvm_u64m4_ta(vuint64m4_t op1, vuint64m4_t op2, vbool16_t borrowin, size_t vl) {
  return vsbc_vvm_u64m4_ta(op1, op2, borrowin, vl);
}

vuint64m4_t test_vsbc_vxm_u64m4_ta(vuint64m4_t op1, uint64_t op2, vbool16_t borrowin, size_t vl) {
  return vsbc_vxm_u64m4_ta(op1, op2, borrowin, vl);
}

vuint64m8_t test_vsbc_vvm_u64m8_ta(vuint64m8_t op1, vuint64m8_t op2, vbool8_t borrowin, size_t vl) {
  return vsbc_vvm_u64m8_ta(op1, op2, borrowin, vl);
}

vuint64m8_t test_vsbc_vxm_u64m8_ta(vuint64m8_t op1, uint64_t op2, vbool8_t borrowin, size_t vl) {
  return vsbc_vxm_u64m8_ta(op1, op2, borrowin, vl);
}

