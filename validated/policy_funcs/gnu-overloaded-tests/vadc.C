/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint8mf8_t test_vadc_vvm_i8mf8_tu(vint8mf8_t maskedoff, vint8mf8_t op1, vint8mf8_t op2, vbool64_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vint8mf8_t test_vadc_vxm_i8mf8_tu(vint8mf8_t maskedoff, vint8mf8_t op1, int8_t op2, vbool64_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vint8mf4_t test_vadc_vvm_i8mf4_tu(vint8mf4_t maskedoff, vint8mf4_t op1, vint8mf4_t op2, vbool32_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vint8mf4_t test_vadc_vxm_i8mf4_tu(vint8mf4_t maskedoff, vint8mf4_t op1, int8_t op2, vbool32_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vint8mf2_t test_vadc_vvm_i8mf2_tu(vint8mf2_t maskedoff, vint8mf2_t op1, vint8mf2_t op2, vbool16_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vint8mf2_t test_vadc_vxm_i8mf2_tu(vint8mf2_t maskedoff, vint8mf2_t op1, int8_t op2, vbool16_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vint8m1_t test_vadc_vvm_i8m1_tu(vint8m1_t maskedoff, vint8m1_t op1, vint8m1_t op2, vbool8_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vint8m1_t test_vadc_vxm_i8m1_tu(vint8m1_t maskedoff, vint8m1_t op1, int8_t op2, vbool8_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vint8m2_t test_vadc_vvm_i8m2_tu(vint8m2_t maskedoff, vint8m2_t op1, vint8m2_t op2, vbool4_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vint8m2_t test_vadc_vxm_i8m2_tu(vint8m2_t maskedoff, vint8m2_t op1, int8_t op2, vbool4_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vint8m4_t test_vadc_vvm_i8m4_tu(vint8m4_t maskedoff, vint8m4_t op1, vint8m4_t op2, vbool2_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vint8m4_t test_vadc_vxm_i8m4_tu(vint8m4_t maskedoff, vint8m4_t op1, int8_t op2, vbool2_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vint8m8_t test_vadc_vvm_i8m8_tu(vint8m8_t maskedoff, vint8m8_t op1, vint8m8_t op2, vbool1_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vint8m8_t test_vadc_vxm_i8m8_tu(vint8m8_t maskedoff, vint8m8_t op1, int8_t op2, vbool1_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vint16mf4_t test_vadc_vvm_i16mf4_tu(vint16mf4_t maskedoff, vint16mf4_t op1, vint16mf4_t op2, vbool64_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vint16mf4_t test_vadc_vxm_i16mf4_tu(vint16mf4_t maskedoff, vint16mf4_t op1, int16_t op2, vbool64_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vint16mf2_t test_vadc_vvm_i16mf2_tu(vint16mf2_t maskedoff, vint16mf2_t op1, vint16mf2_t op2, vbool32_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vint16mf2_t test_vadc_vxm_i16mf2_tu(vint16mf2_t maskedoff, vint16mf2_t op1, int16_t op2, vbool32_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vint16m1_t test_vadc_vvm_i16m1_tu(vint16m1_t maskedoff, vint16m1_t op1, vint16m1_t op2, vbool16_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vint16m1_t test_vadc_vxm_i16m1_tu(vint16m1_t maskedoff, vint16m1_t op1, int16_t op2, vbool16_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vint16m2_t test_vadc_vvm_i16m2_tu(vint16m2_t maskedoff, vint16m2_t op1, vint16m2_t op2, vbool8_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vint16m2_t test_vadc_vxm_i16m2_tu(vint16m2_t maskedoff, vint16m2_t op1, int16_t op2, vbool8_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vint16m4_t test_vadc_vvm_i16m4_tu(vint16m4_t maskedoff, vint16m4_t op1, vint16m4_t op2, vbool4_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vint16m4_t test_vadc_vxm_i16m4_tu(vint16m4_t maskedoff, vint16m4_t op1, int16_t op2, vbool4_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vint16m8_t test_vadc_vvm_i16m8_tu(vint16m8_t maskedoff, vint16m8_t op1, vint16m8_t op2, vbool2_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vint16m8_t test_vadc_vxm_i16m8_tu(vint16m8_t maskedoff, vint16m8_t op1, int16_t op2, vbool2_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vint32mf2_t test_vadc_vvm_i32mf2_tu(vint32mf2_t maskedoff, vint32mf2_t op1, vint32mf2_t op2, vbool64_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vint32mf2_t test_vadc_vxm_i32mf2_tu(vint32mf2_t maskedoff, vint32mf2_t op1, int32_t op2, vbool64_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vint32m1_t test_vadc_vvm_i32m1_tu(vint32m1_t maskedoff, vint32m1_t op1, vint32m1_t op2, vbool32_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vint32m1_t test_vadc_vxm_i32m1_tu(vint32m1_t maskedoff, vint32m1_t op1, int32_t op2, vbool32_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vint32m2_t test_vadc_vvm_i32m2_tu(vint32m2_t maskedoff, vint32m2_t op1, vint32m2_t op2, vbool16_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vint32m2_t test_vadc_vxm_i32m2_tu(vint32m2_t maskedoff, vint32m2_t op1, int32_t op2, vbool16_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vint32m4_t test_vadc_vvm_i32m4_tu(vint32m4_t maskedoff, vint32m4_t op1, vint32m4_t op2, vbool8_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vint32m4_t test_vadc_vxm_i32m4_tu(vint32m4_t maskedoff, vint32m4_t op1, int32_t op2, vbool8_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vint32m8_t test_vadc_vvm_i32m8_tu(vint32m8_t maskedoff, vint32m8_t op1, vint32m8_t op2, vbool4_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vint32m8_t test_vadc_vxm_i32m8_tu(vint32m8_t maskedoff, vint32m8_t op1, int32_t op2, vbool4_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vint64m1_t test_vadc_vvm_i64m1_tu(vint64m1_t maskedoff, vint64m1_t op1, vint64m1_t op2, vbool64_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vint64m1_t test_vadc_vxm_i64m1_tu(vint64m1_t maskedoff, vint64m1_t op1, int64_t op2, vbool64_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vint64m2_t test_vadc_vvm_i64m2_tu(vint64m2_t maskedoff, vint64m2_t op1, vint64m2_t op2, vbool32_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vint64m2_t test_vadc_vxm_i64m2_tu(vint64m2_t maskedoff, vint64m2_t op1, int64_t op2, vbool32_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vint64m4_t test_vadc_vvm_i64m4_tu(vint64m4_t maskedoff, vint64m4_t op1, vint64m4_t op2, vbool16_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vint64m4_t test_vadc_vxm_i64m4_tu(vint64m4_t maskedoff, vint64m4_t op1, int64_t op2, vbool16_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vint64m8_t test_vadc_vvm_i64m8_tu(vint64m8_t maskedoff, vint64m8_t op1, vint64m8_t op2, vbool8_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vint64m8_t test_vadc_vxm_i64m8_tu(vint64m8_t maskedoff, vint64m8_t op1, int64_t op2, vbool8_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vuint8mf8_t test_vadc_vvm_u8mf8_tu(vuint8mf8_t maskedoff, vuint8mf8_t op1, vuint8mf8_t op2, vbool64_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vuint8mf8_t test_vadc_vxm_u8mf8_tu(vuint8mf8_t maskedoff, vuint8mf8_t op1, uint8_t op2, vbool64_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vuint8mf4_t test_vadc_vvm_u8mf4_tu(vuint8mf4_t maskedoff, vuint8mf4_t op1, vuint8mf4_t op2, vbool32_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vuint8mf4_t test_vadc_vxm_u8mf4_tu(vuint8mf4_t maskedoff, vuint8mf4_t op1, uint8_t op2, vbool32_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vuint8mf2_t test_vadc_vvm_u8mf2_tu(vuint8mf2_t maskedoff, vuint8mf2_t op1, vuint8mf2_t op2, vbool16_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vuint8mf2_t test_vadc_vxm_u8mf2_tu(vuint8mf2_t maskedoff, vuint8mf2_t op1, uint8_t op2, vbool16_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vuint8m1_t test_vadc_vvm_u8m1_tu(vuint8m1_t maskedoff, vuint8m1_t op1, vuint8m1_t op2, vbool8_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vuint8m1_t test_vadc_vxm_u8m1_tu(vuint8m1_t maskedoff, vuint8m1_t op1, uint8_t op2, vbool8_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vuint8m2_t test_vadc_vvm_u8m2_tu(vuint8m2_t maskedoff, vuint8m2_t op1, vuint8m2_t op2, vbool4_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vuint8m2_t test_vadc_vxm_u8m2_tu(vuint8m2_t maskedoff, vuint8m2_t op1, uint8_t op2, vbool4_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vuint8m4_t test_vadc_vvm_u8m4_tu(vuint8m4_t maskedoff, vuint8m4_t op1, vuint8m4_t op2, vbool2_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vuint8m4_t test_vadc_vxm_u8m4_tu(vuint8m4_t maskedoff, vuint8m4_t op1, uint8_t op2, vbool2_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vuint8m8_t test_vadc_vvm_u8m8_tu(vuint8m8_t maskedoff, vuint8m8_t op1, vuint8m8_t op2, vbool1_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vuint8m8_t test_vadc_vxm_u8m8_tu(vuint8m8_t maskedoff, vuint8m8_t op1, uint8_t op2, vbool1_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vuint16mf4_t test_vadc_vvm_u16mf4_tu(vuint16mf4_t maskedoff, vuint16mf4_t op1, vuint16mf4_t op2, vbool64_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vuint16mf4_t test_vadc_vxm_u16mf4_tu(vuint16mf4_t maskedoff, vuint16mf4_t op1, uint16_t op2, vbool64_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vuint16mf2_t test_vadc_vvm_u16mf2_tu(vuint16mf2_t maskedoff, vuint16mf2_t op1, vuint16mf2_t op2, vbool32_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vuint16mf2_t test_vadc_vxm_u16mf2_tu(vuint16mf2_t maskedoff, vuint16mf2_t op1, uint16_t op2, vbool32_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vuint16m1_t test_vadc_vvm_u16m1_tu(vuint16m1_t maskedoff, vuint16m1_t op1, vuint16m1_t op2, vbool16_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vuint16m1_t test_vadc_vxm_u16m1_tu(vuint16m1_t maskedoff, vuint16m1_t op1, uint16_t op2, vbool16_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vuint16m2_t test_vadc_vvm_u16m2_tu(vuint16m2_t maskedoff, vuint16m2_t op1, vuint16m2_t op2, vbool8_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vuint16m2_t test_vadc_vxm_u16m2_tu(vuint16m2_t maskedoff, vuint16m2_t op1, uint16_t op2, vbool8_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vuint16m4_t test_vadc_vvm_u16m4_tu(vuint16m4_t maskedoff, vuint16m4_t op1, vuint16m4_t op2, vbool4_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vuint16m4_t test_vadc_vxm_u16m4_tu(vuint16m4_t maskedoff, vuint16m4_t op1, uint16_t op2, vbool4_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vuint16m8_t test_vadc_vvm_u16m8_tu(vuint16m8_t maskedoff, vuint16m8_t op1, vuint16m8_t op2, vbool2_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vuint16m8_t test_vadc_vxm_u16m8_tu(vuint16m8_t maskedoff, vuint16m8_t op1, uint16_t op2, vbool2_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vuint32mf2_t test_vadc_vvm_u32mf2_tu(vuint32mf2_t maskedoff, vuint32mf2_t op1, vuint32mf2_t op2, vbool64_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vuint32mf2_t test_vadc_vxm_u32mf2_tu(vuint32mf2_t maskedoff, vuint32mf2_t op1, uint32_t op2, vbool64_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vuint32m1_t test_vadc_vvm_u32m1_tu(vuint32m1_t maskedoff, vuint32m1_t op1, vuint32m1_t op2, vbool32_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vuint32m1_t test_vadc_vxm_u32m1_tu(vuint32m1_t maskedoff, vuint32m1_t op1, uint32_t op2, vbool32_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vuint32m2_t test_vadc_vvm_u32m2_tu(vuint32m2_t maskedoff, vuint32m2_t op1, vuint32m2_t op2, vbool16_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vuint32m2_t test_vadc_vxm_u32m2_tu(vuint32m2_t maskedoff, vuint32m2_t op1, uint32_t op2, vbool16_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vuint32m4_t test_vadc_vvm_u32m4_tu(vuint32m4_t maskedoff, vuint32m4_t op1, vuint32m4_t op2, vbool8_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vuint32m4_t test_vadc_vxm_u32m4_tu(vuint32m4_t maskedoff, vuint32m4_t op1, uint32_t op2, vbool8_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vuint32m8_t test_vadc_vvm_u32m8_tu(vuint32m8_t maskedoff, vuint32m8_t op1, vuint32m8_t op2, vbool4_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vuint32m8_t test_vadc_vxm_u32m8_tu(vuint32m8_t maskedoff, vuint32m8_t op1, uint32_t op2, vbool4_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vuint64m1_t test_vadc_vvm_u64m1_tu(vuint64m1_t maskedoff, vuint64m1_t op1, vuint64m1_t op2, vbool64_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vuint64m1_t test_vadc_vxm_u64m1_tu(vuint64m1_t maskedoff, vuint64m1_t op1, uint64_t op2, vbool64_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vuint64m2_t test_vadc_vvm_u64m2_tu(vuint64m2_t maskedoff, vuint64m2_t op1, vuint64m2_t op2, vbool32_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vuint64m2_t test_vadc_vxm_u64m2_tu(vuint64m2_t maskedoff, vuint64m2_t op1, uint64_t op2, vbool32_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vuint64m4_t test_vadc_vvm_u64m4_tu(vuint64m4_t maskedoff, vuint64m4_t op1, vuint64m4_t op2, vbool16_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vuint64m4_t test_vadc_vxm_u64m4_tu(vuint64m4_t maskedoff, vuint64m4_t op1, uint64_t op2, vbool16_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vuint64m8_t test_vadc_vvm_u64m8_tu(vuint64m8_t maskedoff, vuint64m8_t op1, vuint64m8_t op2, vbool8_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

vuint64m8_t test_vadc_vxm_u64m8_tu(vuint64m8_t maskedoff, vuint64m8_t op1, uint64_t op2, vbool8_t carryin, size_t vl) {
  return __riscv_vadc_tu(maskedoff, op1, op2, carryin, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*[a-x0-9]+,\s*e[0-9]+,\s*m[f]?[1248],\s*t[au],\s*m[au]\s+vadc\.[,\sa-x0-9()]+} 88 } } */
