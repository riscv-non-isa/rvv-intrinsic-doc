#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

vint8mf8_t test_vadc_vvm_i8mf8(vint8mf8_t op1, vint8mf8_t op2, vbool64_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vint8mf8_t test_vadc_vxm_i8mf8(vint8mf8_t op1, int8_t op2, vbool64_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vint8mf4_t test_vadc_vvm_i8mf4(vint8mf4_t op1, vint8mf4_t op2, vbool32_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vint8mf4_t test_vadc_vxm_i8mf4(vint8mf4_t op1, int8_t op2, vbool32_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vint8mf2_t test_vadc_vvm_i8mf2(vint8mf2_t op1, vint8mf2_t op2, vbool16_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vint8mf2_t test_vadc_vxm_i8mf2(vint8mf2_t op1, int8_t op2, vbool16_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vint8m1_t test_vadc_vvm_i8m1(vint8m1_t op1, vint8m1_t op2, vbool8_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vint8m1_t test_vadc_vxm_i8m1(vint8m1_t op1, int8_t op2, vbool8_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vint8m2_t test_vadc_vvm_i8m2(vint8m2_t op1, vint8m2_t op2, vbool4_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vint8m2_t test_vadc_vxm_i8m2(vint8m2_t op1, int8_t op2, vbool4_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vint8m4_t test_vadc_vvm_i8m4(vint8m4_t op1, vint8m4_t op2, vbool2_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vint8m4_t test_vadc_vxm_i8m4(vint8m4_t op1, int8_t op2, vbool2_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vint8m8_t test_vadc_vvm_i8m8(vint8m8_t op1, vint8m8_t op2, vbool1_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vint8m8_t test_vadc_vxm_i8m8(vint8m8_t op1, int8_t op2, vbool1_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vint16mf4_t test_vadc_vvm_i16mf4(vint16mf4_t op1, vint16mf4_t op2, vbool64_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vint16mf4_t test_vadc_vxm_i16mf4(vint16mf4_t op1, int16_t op2, vbool64_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vint16mf2_t test_vadc_vvm_i16mf2(vint16mf2_t op1, vint16mf2_t op2, vbool32_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vint16mf2_t test_vadc_vxm_i16mf2(vint16mf2_t op1, int16_t op2, vbool32_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vint16m1_t test_vadc_vvm_i16m1(vint16m1_t op1, vint16m1_t op2, vbool16_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vint16m1_t test_vadc_vxm_i16m1(vint16m1_t op1, int16_t op2, vbool16_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vint16m2_t test_vadc_vvm_i16m2(vint16m2_t op1, vint16m2_t op2, vbool8_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vint16m2_t test_vadc_vxm_i16m2(vint16m2_t op1, int16_t op2, vbool8_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vint16m4_t test_vadc_vvm_i16m4(vint16m4_t op1, vint16m4_t op2, vbool4_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vint16m4_t test_vadc_vxm_i16m4(vint16m4_t op1, int16_t op2, vbool4_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vint16m8_t test_vadc_vvm_i16m8(vint16m8_t op1, vint16m8_t op2, vbool2_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vint16m8_t test_vadc_vxm_i16m8(vint16m8_t op1, int16_t op2, vbool2_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vint32mf2_t test_vadc_vvm_i32mf2(vint32mf2_t op1, vint32mf2_t op2, vbool64_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vint32mf2_t test_vadc_vxm_i32mf2(vint32mf2_t op1, int32_t op2, vbool64_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vint32m1_t test_vadc_vvm_i32m1(vint32m1_t op1, vint32m1_t op2, vbool32_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vint32m1_t test_vadc_vxm_i32m1(vint32m1_t op1, int32_t op2, vbool32_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vint32m2_t test_vadc_vvm_i32m2(vint32m2_t op1, vint32m2_t op2, vbool16_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vint32m2_t test_vadc_vxm_i32m2(vint32m2_t op1, int32_t op2, vbool16_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vint32m4_t test_vadc_vvm_i32m4(vint32m4_t op1, vint32m4_t op2, vbool8_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vint32m4_t test_vadc_vxm_i32m4(vint32m4_t op1, int32_t op2, vbool8_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vint32m8_t test_vadc_vvm_i32m8(vint32m8_t op1, vint32m8_t op2, vbool4_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vint32m8_t test_vadc_vxm_i32m8(vint32m8_t op1, int32_t op2, vbool4_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vint64m1_t test_vadc_vvm_i64m1(vint64m1_t op1, vint64m1_t op2, vbool64_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vint64m1_t test_vadc_vxm_i64m1(vint64m1_t op1, int64_t op2, vbool64_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vint64m2_t test_vadc_vvm_i64m2(vint64m2_t op1, vint64m2_t op2, vbool32_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vint64m2_t test_vadc_vxm_i64m2(vint64m2_t op1, int64_t op2, vbool32_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vint64m4_t test_vadc_vvm_i64m4(vint64m4_t op1, vint64m4_t op2, vbool16_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vint64m4_t test_vadc_vxm_i64m4(vint64m4_t op1, int64_t op2, vbool16_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vint64m8_t test_vadc_vvm_i64m8(vint64m8_t op1, vint64m8_t op2, vbool8_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vint64m8_t test_vadc_vxm_i64m8(vint64m8_t op1, int64_t op2, vbool8_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vuint8mf8_t test_vadc_vvm_u8mf8(vuint8mf8_t op1, vuint8mf8_t op2, vbool64_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vuint8mf8_t test_vadc_vxm_u8mf8(vuint8mf8_t op1, uint8_t op2, vbool64_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vuint8mf4_t test_vadc_vvm_u8mf4(vuint8mf4_t op1, vuint8mf4_t op2, vbool32_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vuint8mf4_t test_vadc_vxm_u8mf4(vuint8mf4_t op1, uint8_t op2, vbool32_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vuint8mf2_t test_vadc_vvm_u8mf2(vuint8mf2_t op1, vuint8mf2_t op2, vbool16_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vuint8mf2_t test_vadc_vxm_u8mf2(vuint8mf2_t op1, uint8_t op2, vbool16_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vuint8m1_t test_vadc_vvm_u8m1(vuint8m1_t op1, vuint8m1_t op2, vbool8_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vuint8m1_t test_vadc_vxm_u8m1(vuint8m1_t op1, uint8_t op2, vbool8_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vuint8m2_t test_vadc_vvm_u8m2(vuint8m2_t op1, vuint8m2_t op2, vbool4_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vuint8m2_t test_vadc_vxm_u8m2(vuint8m2_t op1, uint8_t op2, vbool4_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vuint8m4_t test_vadc_vvm_u8m4(vuint8m4_t op1, vuint8m4_t op2, vbool2_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vuint8m4_t test_vadc_vxm_u8m4(vuint8m4_t op1, uint8_t op2, vbool2_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vuint8m8_t test_vadc_vvm_u8m8(vuint8m8_t op1, vuint8m8_t op2, vbool1_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vuint8m8_t test_vadc_vxm_u8m8(vuint8m8_t op1, uint8_t op2, vbool1_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vuint16mf4_t test_vadc_vvm_u16mf4(vuint16mf4_t op1, vuint16mf4_t op2, vbool64_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vuint16mf4_t test_vadc_vxm_u16mf4(vuint16mf4_t op1, uint16_t op2, vbool64_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vuint16mf2_t test_vadc_vvm_u16mf2(vuint16mf2_t op1, vuint16mf2_t op2, vbool32_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vuint16mf2_t test_vadc_vxm_u16mf2(vuint16mf2_t op1, uint16_t op2, vbool32_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vuint16m1_t test_vadc_vvm_u16m1(vuint16m1_t op1, vuint16m1_t op2, vbool16_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vuint16m1_t test_vadc_vxm_u16m1(vuint16m1_t op1, uint16_t op2, vbool16_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vuint16m2_t test_vadc_vvm_u16m2(vuint16m2_t op1, vuint16m2_t op2, vbool8_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vuint16m2_t test_vadc_vxm_u16m2(vuint16m2_t op1, uint16_t op2, vbool8_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vuint16m4_t test_vadc_vvm_u16m4(vuint16m4_t op1, vuint16m4_t op2, vbool4_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vuint16m4_t test_vadc_vxm_u16m4(vuint16m4_t op1, uint16_t op2, vbool4_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vuint16m8_t test_vadc_vvm_u16m8(vuint16m8_t op1, vuint16m8_t op2, vbool2_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vuint16m8_t test_vadc_vxm_u16m8(vuint16m8_t op1, uint16_t op2, vbool2_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vuint32mf2_t test_vadc_vvm_u32mf2(vuint32mf2_t op1, vuint32mf2_t op2, vbool64_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vuint32mf2_t test_vadc_vxm_u32mf2(vuint32mf2_t op1, uint32_t op2, vbool64_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vuint32m1_t test_vadc_vvm_u32m1(vuint32m1_t op1, vuint32m1_t op2, vbool32_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vuint32m1_t test_vadc_vxm_u32m1(vuint32m1_t op1, uint32_t op2, vbool32_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vuint32m2_t test_vadc_vvm_u32m2(vuint32m2_t op1, vuint32m2_t op2, vbool16_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vuint32m2_t test_vadc_vxm_u32m2(vuint32m2_t op1, uint32_t op2, vbool16_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vuint32m4_t test_vadc_vvm_u32m4(vuint32m4_t op1, vuint32m4_t op2, vbool8_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vuint32m4_t test_vadc_vxm_u32m4(vuint32m4_t op1, uint32_t op2, vbool8_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vuint32m8_t test_vadc_vvm_u32m8(vuint32m8_t op1, vuint32m8_t op2, vbool4_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vuint32m8_t test_vadc_vxm_u32m8(vuint32m8_t op1, uint32_t op2, vbool4_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vuint64m1_t test_vadc_vvm_u64m1(vuint64m1_t op1, vuint64m1_t op2, vbool64_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vuint64m1_t test_vadc_vxm_u64m1(vuint64m1_t op1, uint64_t op2, vbool64_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vuint64m2_t test_vadc_vvm_u64m2(vuint64m2_t op1, vuint64m2_t op2, vbool32_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vuint64m2_t test_vadc_vxm_u64m2(vuint64m2_t op1, uint64_t op2, vbool32_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vuint64m4_t test_vadc_vvm_u64m4(vuint64m4_t op1, vuint64m4_t op2, vbool16_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vuint64m4_t test_vadc_vxm_u64m4(vuint64m4_t op1, uint64_t op2, vbool16_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vuint64m8_t test_vadc_vvm_u64m8(vuint64m8_t op1, vuint64m8_t op2, vbool8_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}

vuint64m8_t test_vadc_vxm_u64m8(vuint64m8_t op1, uint64_t op2, vbool8_t carryin, size_t vl) {
  return __riscv_vadc(op1, op2, carryin, vl);
}
