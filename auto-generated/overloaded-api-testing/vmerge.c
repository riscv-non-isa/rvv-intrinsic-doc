#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint8mf8_t test_vmerge_vvm_i8mf8(vbool64_t mask, vint8mf8_t op1, vint8mf8_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vint8mf8_t test_vmerge_vxm_i8mf8(vbool64_t mask, vint8mf8_t op1, int8_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vint8mf4_t test_vmerge_vvm_i8mf4(vbool32_t mask, vint8mf4_t op1, vint8mf4_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vint8mf4_t test_vmerge_vxm_i8mf4(vbool32_t mask, vint8mf4_t op1, int8_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vint8mf2_t test_vmerge_vvm_i8mf2(vbool16_t mask, vint8mf2_t op1, vint8mf2_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vint8mf2_t test_vmerge_vxm_i8mf2(vbool16_t mask, vint8mf2_t op1, int8_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vint8m1_t test_vmerge_vvm_i8m1(vbool8_t mask, vint8m1_t op1, vint8m1_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vint8m1_t test_vmerge_vxm_i8m1(vbool8_t mask, vint8m1_t op1, int8_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vint8m2_t test_vmerge_vvm_i8m2(vbool4_t mask, vint8m2_t op1, vint8m2_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vint8m2_t test_vmerge_vxm_i8m2(vbool4_t mask, vint8m2_t op1, int8_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vint8m4_t test_vmerge_vvm_i8m4(vbool2_t mask, vint8m4_t op1, vint8m4_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vint8m4_t test_vmerge_vxm_i8m4(vbool2_t mask, vint8m4_t op1, int8_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vint8m8_t test_vmerge_vvm_i8m8(vbool1_t mask, vint8m8_t op1, vint8m8_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vint8m8_t test_vmerge_vxm_i8m8(vbool1_t mask, vint8m8_t op1, int8_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vint16mf4_t test_vmerge_vvm_i16mf4(vbool64_t mask, vint16mf4_t op1, vint16mf4_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vint16mf4_t test_vmerge_vxm_i16mf4(vbool64_t mask, vint16mf4_t op1, int16_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vint16mf2_t test_vmerge_vvm_i16mf2(vbool32_t mask, vint16mf2_t op1, vint16mf2_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vint16mf2_t test_vmerge_vxm_i16mf2(vbool32_t mask, vint16mf2_t op1, int16_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vint16m1_t test_vmerge_vvm_i16m1(vbool16_t mask, vint16m1_t op1, vint16m1_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vint16m1_t test_vmerge_vxm_i16m1(vbool16_t mask, vint16m1_t op1, int16_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vint16m2_t test_vmerge_vvm_i16m2(vbool8_t mask, vint16m2_t op1, vint16m2_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vint16m2_t test_vmerge_vxm_i16m2(vbool8_t mask, vint16m2_t op1, int16_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vint16m4_t test_vmerge_vvm_i16m4(vbool4_t mask, vint16m4_t op1, vint16m4_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vint16m4_t test_vmerge_vxm_i16m4(vbool4_t mask, vint16m4_t op1, int16_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vint16m8_t test_vmerge_vvm_i16m8(vbool2_t mask, vint16m8_t op1, vint16m8_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vint16m8_t test_vmerge_vxm_i16m8(vbool2_t mask, vint16m8_t op1, int16_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vint32mf2_t test_vmerge_vvm_i32mf2(vbool64_t mask, vint32mf2_t op1, vint32mf2_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vint32mf2_t test_vmerge_vxm_i32mf2(vbool64_t mask, vint32mf2_t op1, int32_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vint32m1_t test_vmerge_vvm_i32m1(vbool32_t mask, vint32m1_t op1, vint32m1_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vint32m1_t test_vmerge_vxm_i32m1(vbool32_t mask, vint32m1_t op1, int32_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vint32m2_t test_vmerge_vvm_i32m2(vbool16_t mask, vint32m2_t op1, vint32m2_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vint32m2_t test_vmerge_vxm_i32m2(vbool16_t mask, vint32m2_t op1, int32_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vint32m4_t test_vmerge_vvm_i32m4(vbool8_t mask, vint32m4_t op1, vint32m4_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vint32m4_t test_vmerge_vxm_i32m4(vbool8_t mask, vint32m4_t op1, int32_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vint32m8_t test_vmerge_vvm_i32m8(vbool4_t mask, vint32m8_t op1, vint32m8_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vint32m8_t test_vmerge_vxm_i32m8(vbool4_t mask, vint32m8_t op1, int32_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vint64m1_t test_vmerge_vvm_i64m1(vbool64_t mask, vint64m1_t op1, vint64m1_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vint64m1_t test_vmerge_vxm_i64m1(vbool64_t mask, vint64m1_t op1, int64_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vint64m2_t test_vmerge_vvm_i64m2(vbool32_t mask, vint64m2_t op1, vint64m2_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vint64m2_t test_vmerge_vxm_i64m2(vbool32_t mask, vint64m2_t op1, int64_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vint64m4_t test_vmerge_vvm_i64m4(vbool16_t mask, vint64m4_t op1, vint64m4_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vint64m4_t test_vmerge_vxm_i64m4(vbool16_t mask, vint64m4_t op1, int64_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vint64m8_t test_vmerge_vvm_i64m8(vbool8_t mask, vint64m8_t op1, vint64m8_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vint64m8_t test_vmerge_vxm_i64m8(vbool8_t mask, vint64m8_t op1, int64_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vuint8mf8_t test_vmerge_vvm_u8mf8(vbool64_t mask, vuint8mf8_t op1, vuint8mf8_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vuint8mf8_t test_vmerge_vxm_u8mf8(vbool64_t mask, vuint8mf8_t op1, uint8_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vuint8mf4_t test_vmerge_vvm_u8mf4(vbool32_t mask, vuint8mf4_t op1, vuint8mf4_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vuint8mf4_t test_vmerge_vxm_u8mf4(vbool32_t mask, vuint8mf4_t op1, uint8_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vuint8mf2_t test_vmerge_vvm_u8mf2(vbool16_t mask, vuint8mf2_t op1, vuint8mf2_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vuint8mf2_t test_vmerge_vxm_u8mf2(vbool16_t mask, vuint8mf2_t op1, uint8_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vuint8m1_t test_vmerge_vvm_u8m1(vbool8_t mask, vuint8m1_t op1, vuint8m1_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vuint8m1_t test_vmerge_vxm_u8m1(vbool8_t mask, vuint8m1_t op1, uint8_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vuint8m2_t test_vmerge_vvm_u8m2(vbool4_t mask, vuint8m2_t op1, vuint8m2_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vuint8m2_t test_vmerge_vxm_u8m2(vbool4_t mask, vuint8m2_t op1, uint8_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vuint8m4_t test_vmerge_vvm_u8m4(vbool2_t mask, vuint8m4_t op1, vuint8m4_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vuint8m4_t test_vmerge_vxm_u8m4(vbool2_t mask, vuint8m4_t op1, uint8_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vuint8m8_t test_vmerge_vvm_u8m8(vbool1_t mask, vuint8m8_t op1, vuint8m8_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vuint8m8_t test_vmerge_vxm_u8m8(vbool1_t mask, vuint8m8_t op1, uint8_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vuint16mf4_t test_vmerge_vvm_u16mf4(vbool64_t mask, vuint16mf4_t op1, vuint16mf4_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vuint16mf4_t test_vmerge_vxm_u16mf4(vbool64_t mask, vuint16mf4_t op1, uint16_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vuint16mf2_t test_vmerge_vvm_u16mf2(vbool32_t mask, vuint16mf2_t op1, vuint16mf2_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vuint16mf2_t test_vmerge_vxm_u16mf2(vbool32_t mask, vuint16mf2_t op1, uint16_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vuint16m1_t test_vmerge_vvm_u16m1(vbool16_t mask, vuint16m1_t op1, vuint16m1_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vuint16m1_t test_vmerge_vxm_u16m1(vbool16_t mask, vuint16m1_t op1, uint16_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vuint16m2_t test_vmerge_vvm_u16m2(vbool8_t mask, vuint16m2_t op1, vuint16m2_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vuint16m2_t test_vmerge_vxm_u16m2(vbool8_t mask, vuint16m2_t op1, uint16_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vuint16m4_t test_vmerge_vvm_u16m4(vbool4_t mask, vuint16m4_t op1, vuint16m4_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vuint16m4_t test_vmerge_vxm_u16m4(vbool4_t mask, vuint16m4_t op1, uint16_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vuint16m8_t test_vmerge_vvm_u16m8(vbool2_t mask, vuint16m8_t op1, vuint16m8_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vuint16m8_t test_vmerge_vxm_u16m8(vbool2_t mask, vuint16m8_t op1, uint16_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vuint32mf2_t test_vmerge_vvm_u32mf2(vbool64_t mask, vuint32mf2_t op1, vuint32mf2_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vuint32mf2_t test_vmerge_vxm_u32mf2(vbool64_t mask, vuint32mf2_t op1, uint32_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vuint32m1_t test_vmerge_vvm_u32m1(vbool32_t mask, vuint32m1_t op1, vuint32m1_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vuint32m1_t test_vmerge_vxm_u32m1(vbool32_t mask, vuint32m1_t op1, uint32_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vuint32m2_t test_vmerge_vvm_u32m2(vbool16_t mask, vuint32m2_t op1, vuint32m2_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vuint32m2_t test_vmerge_vxm_u32m2(vbool16_t mask, vuint32m2_t op1, uint32_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vuint32m4_t test_vmerge_vvm_u32m4(vbool8_t mask, vuint32m4_t op1, vuint32m4_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vuint32m4_t test_vmerge_vxm_u32m4(vbool8_t mask, vuint32m4_t op1, uint32_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vuint32m8_t test_vmerge_vvm_u32m8(vbool4_t mask, vuint32m8_t op1, vuint32m8_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vuint32m8_t test_vmerge_vxm_u32m8(vbool4_t mask, vuint32m8_t op1, uint32_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vuint64m1_t test_vmerge_vvm_u64m1(vbool64_t mask, vuint64m1_t op1, vuint64m1_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vuint64m1_t test_vmerge_vxm_u64m1(vbool64_t mask, vuint64m1_t op1, uint64_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vuint64m2_t test_vmerge_vvm_u64m2(vbool32_t mask, vuint64m2_t op1, vuint64m2_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vuint64m2_t test_vmerge_vxm_u64m2(vbool32_t mask, vuint64m2_t op1, uint64_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vuint64m4_t test_vmerge_vvm_u64m4(vbool16_t mask, vuint64m4_t op1, vuint64m4_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vuint64m4_t test_vmerge_vxm_u64m4(vbool16_t mask, vuint64m4_t op1, uint64_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vuint64m8_t test_vmerge_vvm_u64m8(vbool8_t mask, vuint64m8_t op1, vuint64m8_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vuint64m8_t test_vmerge_vxm_u64m8(vbool8_t mask, vuint64m8_t op1, uint64_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vfloat16mf4_t test_vmerge_vvm_f16mf4(vbool64_t mask, vfloat16mf4_t op1, vfloat16mf4_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vfloat16mf2_t test_vmerge_vvm_f16mf2(vbool32_t mask, vfloat16mf2_t op1, vfloat16mf2_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vfloat16m1_t test_vmerge_vvm_f16m1(vbool16_t mask, vfloat16m1_t op1, vfloat16m1_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vfloat16m2_t test_vmerge_vvm_f16m2(vbool8_t mask, vfloat16m2_t op1, vfloat16m2_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vfloat16m4_t test_vmerge_vvm_f16m4(vbool4_t mask, vfloat16m4_t op1, vfloat16m4_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vfloat16m8_t test_vmerge_vvm_f16m8(vbool2_t mask, vfloat16m8_t op1, vfloat16m8_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vfloat32mf2_t test_vmerge_vvm_f32mf2(vbool64_t mask, vfloat32mf2_t op1, vfloat32mf2_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vfloat32m1_t test_vmerge_vvm_f32m1(vbool32_t mask, vfloat32m1_t op1, vfloat32m1_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vfloat32m2_t test_vmerge_vvm_f32m2(vbool16_t mask, vfloat32m2_t op1, vfloat32m2_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vfloat32m4_t test_vmerge_vvm_f32m4(vbool8_t mask, vfloat32m4_t op1, vfloat32m4_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vfloat32m8_t test_vmerge_vvm_f32m8(vbool4_t mask, vfloat32m8_t op1, vfloat32m8_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vfloat64m1_t test_vmerge_vvm_f64m1(vbool64_t mask, vfloat64m1_t op1, vfloat64m1_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vfloat64m2_t test_vmerge_vvm_f64m2(vbool32_t mask, vfloat64m2_t op1, vfloat64m2_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vfloat64m4_t test_vmerge_vvm_f64m4(vbool16_t mask, vfloat64m4_t op1, vfloat64m4_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

vfloat64m8_t test_vmerge_vvm_f64m8(vbool8_t mask, vfloat64m8_t op1, vfloat64m8_t op2, size_t vl) {
  return vmerge(mask, op1, op2, vl);
}

