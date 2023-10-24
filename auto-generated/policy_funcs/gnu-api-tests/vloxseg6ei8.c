/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

vfloat16mf4x6_t test_vloxseg6ei8_v_f16mf4x6_tu(vfloat16mf4x6_t vd, const float16_t *rs1, vuint8mf8_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_f16mf4x6_tu(vd, rs1, rs2, vl);
}

vfloat16mf2x6_t test_vloxseg6ei8_v_f16mf2x6_tu(vfloat16mf2x6_t vd, const float16_t *rs1, vuint8mf4_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_f16mf2x6_tu(vd, rs1, rs2, vl);
}

vfloat16m1x6_t test_vloxseg6ei8_v_f16m1x6_tu(vfloat16m1x6_t vd, const float16_t *rs1, vuint8mf2_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_f16m1x6_tu(vd, rs1, rs2, vl);
}

vfloat32mf2x6_t test_vloxseg6ei8_v_f32mf2x6_tu(vfloat32mf2x6_t vd, const float32_t *rs1, vuint8mf8_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_f32mf2x6_tu(vd, rs1, rs2, vl);
}

vfloat32m1x6_t test_vloxseg6ei8_v_f32m1x6_tu(vfloat32m1x6_t vd, const float32_t *rs1, vuint8mf4_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_f32m1x6_tu(vd, rs1, rs2, vl);
}

vfloat64m1x6_t test_vloxseg6ei8_v_f64m1x6_tu(vfloat64m1x6_t vd, const float64_t *rs1, vuint8mf8_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_f64m1x6_tu(vd, rs1, rs2, vl);
}

vint8mf8x6_t test_vloxseg6ei8_v_i8mf8x6_tu(vint8mf8x6_t vd, const int8_t *rs1, vuint8mf8_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_i8mf8x6_tu(vd, rs1, rs2, vl);
}

vint8mf4x6_t test_vloxseg6ei8_v_i8mf4x6_tu(vint8mf4x6_t vd, const int8_t *rs1, vuint8mf4_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_i8mf4x6_tu(vd, rs1, rs2, vl);
}

vint8mf2x6_t test_vloxseg6ei8_v_i8mf2x6_tu(vint8mf2x6_t vd, const int8_t *rs1, vuint8mf2_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_i8mf2x6_tu(vd, rs1, rs2, vl);
}

vint8m1x6_t test_vloxseg6ei8_v_i8m1x6_tu(vint8m1x6_t vd, const int8_t *rs1, vuint8m1_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_i8m1x6_tu(vd, rs1, rs2, vl);
}

vint16mf4x6_t test_vloxseg6ei8_v_i16mf4x6_tu(vint16mf4x6_t vd, const int16_t *rs1, vuint8mf8_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_i16mf4x6_tu(vd, rs1, rs2, vl);
}

vint16mf2x6_t test_vloxseg6ei8_v_i16mf2x6_tu(vint16mf2x6_t vd, const int16_t *rs1, vuint8mf4_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_i16mf2x6_tu(vd, rs1, rs2, vl);
}

vint16m1x6_t test_vloxseg6ei8_v_i16m1x6_tu(vint16m1x6_t vd, const int16_t *rs1, vuint8mf2_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_i16m1x6_tu(vd, rs1, rs2, vl);
}

vint32mf2x6_t test_vloxseg6ei8_v_i32mf2x6_tu(vint32mf2x6_t vd, const int32_t *rs1, vuint8mf8_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_i32mf2x6_tu(vd, rs1, rs2, vl);
}

vint32m1x6_t test_vloxseg6ei8_v_i32m1x6_tu(vint32m1x6_t vd, const int32_t *rs1, vuint8mf4_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_i32m1x6_tu(vd, rs1, rs2, vl);
}

vint64m1x6_t test_vloxseg6ei8_v_i64m1x6_tu(vint64m1x6_t vd, const int64_t *rs1, vuint8mf8_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_i64m1x6_tu(vd, rs1, rs2, vl);
}

vuint8mf8x6_t test_vloxseg6ei8_v_u8mf8x6_tu(vuint8mf8x6_t vd, const uint8_t *rs1, vuint8mf8_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_u8mf8x6_tu(vd, rs1, rs2, vl);
}

vuint8mf4x6_t test_vloxseg6ei8_v_u8mf4x6_tu(vuint8mf4x6_t vd, const uint8_t *rs1, vuint8mf4_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_u8mf4x6_tu(vd, rs1, rs2, vl);
}

vuint8mf2x6_t test_vloxseg6ei8_v_u8mf2x6_tu(vuint8mf2x6_t vd, const uint8_t *rs1, vuint8mf2_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_u8mf2x6_tu(vd, rs1, rs2, vl);
}

vuint8m1x6_t test_vloxseg6ei8_v_u8m1x6_tu(vuint8m1x6_t vd, const uint8_t *rs1, vuint8m1_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_u8m1x6_tu(vd, rs1, rs2, vl);
}

vuint16mf4x6_t test_vloxseg6ei8_v_u16mf4x6_tu(vuint16mf4x6_t vd, const uint16_t *rs1, vuint8mf8_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_u16mf4x6_tu(vd, rs1, rs2, vl);
}

vuint16mf2x6_t test_vloxseg6ei8_v_u16mf2x6_tu(vuint16mf2x6_t vd, const uint16_t *rs1, vuint8mf4_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_u16mf2x6_tu(vd, rs1, rs2, vl);
}

vuint16m1x6_t test_vloxseg6ei8_v_u16m1x6_tu(vuint16m1x6_t vd, const uint16_t *rs1, vuint8mf2_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_u16m1x6_tu(vd, rs1, rs2, vl);
}

vuint32mf2x6_t test_vloxseg6ei8_v_u32mf2x6_tu(vuint32mf2x6_t vd, const uint32_t *rs1, vuint8mf8_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_u32mf2x6_tu(vd, rs1, rs2, vl);
}

vuint32m1x6_t test_vloxseg6ei8_v_u32m1x6_tu(vuint32m1x6_t vd, const uint32_t *rs1, vuint8mf4_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_u32m1x6_tu(vd, rs1, rs2, vl);
}

vuint64m1x6_t test_vloxseg6ei8_v_u64m1x6_tu(vuint64m1x6_t vd, const uint64_t *rs1, vuint8mf8_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_u64m1x6_tu(vd, rs1, rs2, vl);
}

vfloat16mf4x6_t test_vloxseg6ei8_v_f16mf4x6_tum(vbool64_t vm, vfloat16mf4x6_t vd, const float16_t *rs1, vuint8mf8_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_f16mf4x6_tum(vm, vd, rs1, rs2, vl);
}

vfloat16mf2x6_t test_vloxseg6ei8_v_f16mf2x6_tum(vbool32_t vm, vfloat16mf2x6_t vd, const float16_t *rs1, vuint8mf4_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_f16mf2x6_tum(vm, vd, rs1, rs2, vl);
}

vfloat16m1x6_t test_vloxseg6ei8_v_f16m1x6_tum(vbool16_t vm, vfloat16m1x6_t vd, const float16_t *rs1, vuint8mf2_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_f16m1x6_tum(vm, vd, rs1, rs2, vl);
}

vfloat32mf2x6_t test_vloxseg6ei8_v_f32mf2x6_tum(vbool64_t vm, vfloat32mf2x6_t vd, const float32_t *rs1, vuint8mf8_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_f32mf2x6_tum(vm, vd, rs1, rs2, vl);
}

vfloat32m1x6_t test_vloxseg6ei8_v_f32m1x6_tum(vbool32_t vm, vfloat32m1x6_t vd, const float32_t *rs1, vuint8mf4_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_f32m1x6_tum(vm, vd, rs1, rs2, vl);
}

vfloat64m1x6_t test_vloxseg6ei8_v_f64m1x6_tum(vbool64_t vm, vfloat64m1x6_t vd, const float64_t *rs1, vuint8mf8_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_f64m1x6_tum(vm, vd, rs1, rs2, vl);
}

vint8mf8x6_t test_vloxseg6ei8_v_i8mf8x6_tum(vbool64_t vm, vint8mf8x6_t vd, const int8_t *rs1, vuint8mf8_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_i8mf8x6_tum(vm, vd, rs1, rs2, vl);
}

vint8mf4x6_t test_vloxseg6ei8_v_i8mf4x6_tum(vbool32_t vm, vint8mf4x6_t vd, const int8_t *rs1, vuint8mf4_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_i8mf4x6_tum(vm, vd, rs1, rs2, vl);
}

vint8mf2x6_t test_vloxseg6ei8_v_i8mf2x6_tum(vbool16_t vm, vint8mf2x6_t vd, const int8_t *rs1, vuint8mf2_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_i8mf2x6_tum(vm, vd, rs1, rs2, vl);
}

vint8m1x6_t test_vloxseg6ei8_v_i8m1x6_tum(vbool8_t vm, vint8m1x6_t vd, const int8_t *rs1, vuint8m1_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_i8m1x6_tum(vm, vd, rs1, rs2, vl);
}

vint16mf4x6_t test_vloxseg6ei8_v_i16mf4x6_tum(vbool64_t vm, vint16mf4x6_t vd, const int16_t *rs1, vuint8mf8_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_i16mf4x6_tum(vm, vd, rs1, rs2, vl);
}

vint16mf2x6_t test_vloxseg6ei8_v_i16mf2x6_tum(vbool32_t vm, vint16mf2x6_t vd, const int16_t *rs1, vuint8mf4_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_i16mf2x6_tum(vm, vd, rs1, rs2, vl);
}

vint16m1x6_t test_vloxseg6ei8_v_i16m1x6_tum(vbool16_t vm, vint16m1x6_t vd, const int16_t *rs1, vuint8mf2_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_i16m1x6_tum(vm, vd, rs1, rs2, vl);
}

vint32mf2x6_t test_vloxseg6ei8_v_i32mf2x6_tum(vbool64_t vm, vint32mf2x6_t vd, const int32_t *rs1, vuint8mf8_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_i32mf2x6_tum(vm, vd, rs1, rs2, vl);
}

vint32m1x6_t test_vloxseg6ei8_v_i32m1x6_tum(vbool32_t vm, vint32m1x6_t vd, const int32_t *rs1, vuint8mf4_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_i32m1x6_tum(vm, vd, rs1, rs2, vl);
}

vint64m1x6_t test_vloxseg6ei8_v_i64m1x6_tum(vbool64_t vm, vint64m1x6_t vd, const int64_t *rs1, vuint8mf8_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_i64m1x6_tum(vm, vd, rs1, rs2, vl);
}

vuint8mf8x6_t test_vloxseg6ei8_v_u8mf8x6_tum(vbool64_t vm, vuint8mf8x6_t vd, const uint8_t *rs1, vuint8mf8_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_u8mf8x6_tum(vm, vd, rs1, rs2, vl);
}

vuint8mf4x6_t test_vloxseg6ei8_v_u8mf4x6_tum(vbool32_t vm, vuint8mf4x6_t vd, const uint8_t *rs1, vuint8mf4_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_u8mf4x6_tum(vm, vd, rs1, rs2, vl);
}

vuint8mf2x6_t test_vloxseg6ei8_v_u8mf2x6_tum(vbool16_t vm, vuint8mf2x6_t vd, const uint8_t *rs1, vuint8mf2_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_u8mf2x6_tum(vm, vd, rs1, rs2, vl);
}

vuint8m1x6_t test_vloxseg6ei8_v_u8m1x6_tum(vbool8_t vm, vuint8m1x6_t vd, const uint8_t *rs1, vuint8m1_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_u8m1x6_tum(vm, vd, rs1, rs2, vl);
}

vuint16mf4x6_t test_vloxseg6ei8_v_u16mf4x6_tum(vbool64_t vm, vuint16mf4x6_t vd, const uint16_t *rs1, vuint8mf8_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_u16mf4x6_tum(vm, vd, rs1, rs2, vl);
}

vuint16mf2x6_t test_vloxseg6ei8_v_u16mf2x6_tum(vbool32_t vm, vuint16mf2x6_t vd, const uint16_t *rs1, vuint8mf4_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_u16mf2x6_tum(vm, vd, rs1, rs2, vl);
}

vuint16m1x6_t test_vloxseg6ei8_v_u16m1x6_tum(vbool16_t vm, vuint16m1x6_t vd, const uint16_t *rs1, vuint8mf2_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_u16m1x6_tum(vm, vd, rs1, rs2, vl);
}

vuint32mf2x6_t test_vloxseg6ei8_v_u32mf2x6_tum(vbool64_t vm, vuint32mf2x6_t vd, const uint32_t *rs1, vuint8mf8_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_u32mf2x6_tum(vm, vd, rs1, rs2, vl);
}

vuint32m1x6_t test_vloxseg6ei8_v_u32m1x6_tum(vbool32_t vm, vuint32m1x6_t vd, const uint32_t *rs1, vuint8mf4_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_u32m1x6_tum(vm, vd, rs1, rs2, vl);
}

vuint64m1x6_t test_vloxseg6ei8_v_u64m1x6_tum(vbool64_t vm, vuint64m1x6_t vd, const uint64_t *rs1, vuint8mf8_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_u64m1x6_tum(vm, vd, rs1, rs2, vl);
}

vfloat16mf4x6_t test_vloxseg6ei8_v_f16mf4x6_tumu(vbool64_t vm, vfloat16mf4x6_t vd, const float16_t *rs1, vuint8mf8_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_f16mf4x6_tumu(vm, vd, rs1, rs2, vl);
}

vfloat16mf2x6_t test_vloxseg6ei8_v_f16mf2x6_tumu(vbool32_t vm, vfloat16mf2x6_t vd, const float16_t *rs1, vuint8mf4_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_f16mf2x6_tumu(vm, vd, rs1, rs2, vl);
}

vfloat16m1x6_t test_vloxseg6ei8_v_f16m1x6_tumu(vbool16_t vm, vfloat16m1x6_t vd, const float16_t *rs1, vuint8mf2_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_f16m1x6_tumu(vm, vd, rs1, rs2, vl);
}

vfloat32mf2x6_t test_vloxseg6ei8_v_f32mf2x6_tumu(vbool64_t vm, vfloat32mf2x6_t vd, const float32_t *rs1, vuint8mf8_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_f32mf2x6_tumu(vm, vd, rs1, rs2, vl);
}

vfloat32m1x6_t test_vloxseg6ei8_v_f32m1x6_tumu(vbool32_t vm, vfloat32m1x6_t vd, const float32_t *rs1, vuint8mf4_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_f32m1x6_tumu(vm, vd, rs1, rs2, vl);
}

vfloat64m1x6_t test_vloxseg6ei8_v_f64m1x6_tumu(vbool64_t vm, vfloat64m1x6_t vd, const float64_t *rs1, vuint8mf8_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_f64m1x6_tumu(vm, vd, rs1, rs2, vl);
}

vint8mf8x6_t test_vloxseg6ei8_v_i8mf8x6_tumu(vbool64_t vm, vint8mf8x6_t vd, const int8_t *rs1, vuint8mf8_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_i8mf8x6_tumu(vm, vd, rs1, rs2, vl);
}

vint8mf4x6_t test_vloxseg6ei8_v_i8mf4x6_tumu(vbool32_t vm, vint8mf4x6_t vd, const int8_t *rs1, vuint8mf4_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_i8mf4x6_tumu(vm, vd, rs1, rs2, vl);
}

vint8mf2x6_t test_vloxseg6ei8_v_i8mf2x6_tumu(vbool16_t vm, vint8mf2x6_t vd, const int8_t *rs1, vuint8mf2_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_i8mf2x6_tumu(vm, vd, rs1, rs2, vl);
}

vint8m1x6_t test_vloxseg6ei8_v_i8m1x6_tumu(vbool8_t vm, vint8m1x6_t vd, const int8_t *rs1, vuint8m1_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_i8m1x6_tumu(vm, vd, rs1, rs2, vl);
}

vint16mf4x6_t test_vloxseg6ei8_v_i16mf4x6_tumu(vbool64_t vm, vint16mf4x6_t vd, const int16_t *rs1, vuint8mf8_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_i16mf4x6_tumu(vm, vd, rs1, rs2, vl);
}

vint16mf2x6_t test_vloxseg6ei8_v_i16mf2x6_tumu(vbool32_t vm, vint16mf2x6_t vd, const int16_t *rs1, vuint8mf4_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_i16mf2x6_tumu(vm, vd, rs1, rs2, vl);
}

vint16m1x6_t test_vloxseg6ei8_v_i16m1x6_tumu(vbool16_t vm, vint16m1x6_t vd, const int16_t *rs1, vuint8mf2_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_i16m1x6_tumu(vm, vd, rs1, rs2, vl);
}

vint32mf2x6_t test_vloxseg6ei8_v_i32mf2x6_tumu(vbool64_t vm, vint32mf2x6_t vd, const int32_t *rs1, vuint8mf8_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_i32mf2x6_tumu(vm, vd, rs1, rs2, vl);
}

vint32m1x6_t test_vloxseg6ei8_v_i32m1x6_tumu(vbool32_t vm, vint32m1x6_t vd, const int32_t *rs1, vuint8mf4_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_i32m1x6_tumu(vm, vd, rs1, rs2, vl);
}

vint64m1x6_t test_vloxseg6ei8_v_i64m1x6_tumu(vbool64_t vm, vint64m1x6_t vd, const int64_t *rs1, vuint8mf8_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_i64m1x6_tumu(vm, vd, rs1, rs2, vl);
}

vuint8mf8x6_t test_vloxseg6ei8_v_u8mf8x6_tumu(vbool64_t vm, vuint8mf8x6_t vd, const uint8_t *rs1, vuint8mf8_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_u8mf8x6_tumu(vm, vd, rs1, rs2, vl);
}

vuint8mf4x6_t test_vloxseg6ei8_v_u8mf4x6_tumu(vbool32_t vm, vuint8mf4x6_t vd, const uint8_t *rs1, vuint8mf4_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_u8mf4x6_tumu(vm, vd, rs1, rs2, vl);
}

vuint8mf2x6_t test_vloxseg6ei8_v_u8mf2x6_tumu(vbool16_t vm, vuint8mf2x6_t vd, const uint8_t *rs1, vuint8mf2_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_u8mf2x6_tumu(vm, vd, rs1, rs2, vl);
}

vuint8m1x6_t test_vloxseg6ei8_v_u8m1x6_tumu(vbool8_t vm, vuint8m1x6_t vd, const uint8_t *rs1, vuint8m1_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_u8m1x6_tumu(vm, vd, rs1, rs2, vl);
}

vuint16mf4x6_t test_vloxseg6ei8_v_u16mf4x6_tumu(vbool64_t vm, vuint16mf4x6_t vd, const uint16_t *rs1, vuint8mf8_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_u16mf4x6_tumu(vm, vd, rs1, rs2, vl);
}

vuint16mf2x6_t test_vloxseg6ei8_v_u16mf2x6_tumu(vbool32_t vm, vuint16mf2x6_t vd, const uint16_t *rs1, vuint8mf4_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_u16mf2x6_tumu(vm, vd, rs1, rs2, vl);
}

vuint16m1x6_t test_vloxseg6ei8_v_u16m1x6_tumu(vbool16_t vm, vuint16m1x6_t vd, const uint16_t *rs1, vuint8mf2_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_u16m1x6_tumu(vm, vd, rs1, rs2, vl);
}

vuint32mf2x6_t test_vloxseg6ei8_v_u32mf2x6_tumu(vbool64_t vm, vuint32mf2x6_t vd, const uint32_t *rs1, vuint8mf8_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_u32mf2x6_tumu(vm, vd, rs1, rs2, vl);
}

vuint32m1x6_t test_vloxseg6ei8_v_u32m1x6_tumu(vbool32_t vm, vuint32m1x6_t vd, const uint32_t *rs1, vuint8mf4_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_u32m1x6_tumu(vm, vd, rs1, rs2, vl);
}

vuint64m1x6_t test_vloxseg6ei8_v_u64m1x6_tumu(vbool64_t vm, vuint64m1x6_t vd, const uint64_t *rs1, vuint8mf8_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_u64m1x6_tumu(vm, vd, rs1, rs2, vl);
}

vfloat16mf4x6_t test_vloxseg6ei8_v_f16mf4x6_mu(vbool64_t vm, vfloat16mf4x6_t vd, const float16_t *rs1, vuint8mf8_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_f16mf4x6_mu(vm, vd, rs1, rs2, vl);
}

vfloat16mf2x6_t test_vloxseg6ei8_v_f16mf2x6_mu(vbool32_t vm, vfloat16mf2x6_t vd, const float16_t *rs1, vuint8mf4_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_f16mf2x6_mu(vm, vd, rs1, rs2, vl);
}

vfloat16m1x6_t test_vloxseg6ei8_v_f16m1x6_mu(vbool16_t vm, vfloat16m1x6_t vd, const float16_t *rs1, vuint8mf2_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_f16m1x6_mu(vm, vd, rs1, rs2, vl);
}

vfloat32mf2x6_t test_vloxseg6ei8_v_f32mf2x6_mu(vbool64_t vm, vfloat32mf2x6_t vd, const float32_t *rs1, vuint8mf8_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_f32mf2x6_mu(vm, vd, rs1, rs2, vl);
}

vfloat32m1x6_t test_vloxseg6ei8_v_f32m1x6_mu(vbool32_t vm, vfloat32m1x6_t vd, const float32_t *rs1, vuint8mf4_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_f32m1x6_mu(vm, vd, rs1, rs2, vl);
}

vfloat64m1x6_t test_vloxseg6ei8_v_f64m1x6_mu(vbool64_t vm, vfloat64m1x6_t vd, const float64_t *rs1, vuint8mf8_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_f64m1x6_mu(vm, vd, rs1, rs2, vl);
}

vint8mf8x6_t test_vloxseg6ei8_v_i8mf8x6_mu(vbool64_t vm, vint8mf8x6_t vd, const int8_t *rs1, vuint8mf8_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_i8mf8x6_mu(vm, vd, rs1, rs2, vl);
}

vint8mf4x6_t test_vloxseg6ei8_v_i8mf4x6_mu(vbool32_t vm, vint8mf4x6_t vd, const int8_t *rs1, vuint8mf4_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_i8mf4x6_mu(vm, vd, rs1, rs2, vl);
}

vint8mf2x6_t test_vloxseg6ei8_v_i8mf2x6_mu(vbool16_t vm, vint8mf2x6_t vd, const int8_t *rs1, vuint8mf2_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_i8mf2x6_mu(vm, vd, rs1, rs2, vl);
}

vint8m1x6_t test_vloxseg6ei8_v_i8m1x6_mu(vbool8_t vm, vint8m1x6_t vd, const int8_t *rs1, vuint8m1_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_i8m1x6_mu(vm, vd, rs1, rs2, vl);
}

vint16mf4x6_t test_vloxseg6ei8_v_i16mf4x6_mu(vbool64_t vm, vint16mf4x6_t vd, const int16_t *rs1, vuint8mf8_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_i16mf4x6_mu(vm, vd, rs1, rs2, vl);
}

vint16mf2x6_t test_vloxseg6ei8_v_i16mf2x6_mu(vbool32_t vm, vint16mf2x6_t vd, const int16_t *rs1, vuint8mf4_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_i16mf2x6_mu(vm, vd, rs1, rs2, vl);
}

vint16m1x6_t test_vloxseg6ei8_v_i16m1x6_mu(vbool16_t vm, vint16m1x6_t vd, const int16_t *rs1, vuint8mf2_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_i16m1x6_mu(vm, vd, rs1, rs2, vl);
}

vint32mf2x6_t test_vloxseg6ei8_v_i32mf2x6_mu(vbool64_t vm, vint32mf2x6_t vd, const int32_t *rs1, vuint8mf8_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_i32mf2x6_mu(vm, vd, rs1, rs2, vl);
}

vint32m1x6_t test_vloxseg6ei8_v_i32m1x6_mu(vbool32_t vm, vint32m1x6_t vd, const int32_t *rs1, vuint8mf4_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_i32m1x6_mu(vm, vd, rs1, rs2, vl);
}

vint64m1x6_t test_vloxseg6ei8_v_i64m1x6_mu(vbool64_t vm, vint64m1x6_t vd, const int64_t *rs1, vuint8mf8_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_i64m1x6_mu(vm, vd, rs1, rs2, vl);
}

vuint8mf8x6_t test_vloxseg6ei8_v_u8mf8x6_mu(vbool64_t vm, vuint8mf8x6_t vd, const uint8_t *rs1, vuint8mf8_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_u8mf8x6_mu(vm, vd, rs1, rs2, vl);
}

vuint8mf4x6_t test_vloxseg6ei8_v_u8mf4x6_mu(vbool32_t vm, vuint8mf4x6_t vd, const uint8_t *rs1, vuint8mf4_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_u8mf4x6_mu(vm, vd, rs1, rs2, vl);
}

vuint8mf2x6_t test_vloxseg6ei8_v_u8mf2x6_mu(vbool16_t vm, vuint8mf2x6_t vd, const uint8_t *rs1, vuint8mf2_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_u8mf2x6_mu(vm, vd, rs1, rs2, vl);
}

vuint8m1x6_t test_vloxseg6ei8_v_u8m1x6_mu(vbool8_t vm, vuint8m1x6_t vd, const uint8_t *rs1, vuint8m1_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_u8m1x6_mu(vm, vd, rs1, rs2, vl);
}

vuint16mf4x6_t test_vloxseg6ei8_v_u16mf4x6_mu(vbool64_t vm, vuint16mf4x6_t vd, const uint16_t *rs1, vuint8mf8_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_u16mf4x6_mu(vm, vd, rs1, rs2, vl);
}

vuint16mf2x6_t test_vloxseg6ei8_v_u16mf2x6_mu(vbool32_t vm, vuint16mf2x6_t vd, const uint16_t *rs1, vuint8mf4_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_u16mf2x6_mu(vm, vd, rs1, rs2, vl);
}

vuint16m1x6_t test_vloxseg6ei8_v_u16m1x6_mu(vbool16_t vm, vuint16m1x6_t vd, const uint16_t *rs1, vuint8mf2_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_u16m1x6_mu(vm, vd, rs1, rs2, vl);
}

vuint32mf2x6_t test_vloxseg6ei8_v_u32mf2x6_mu(vbool64_t vm, vuint32mf2x6_t vd, const uint32_t *rs1, vuint8mf8_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_u32mf2x6_mu(vm, vd, rs1, rs2, vl);
}

vuint32m1x6_t test_vloxseg6ei8_v_u32m1x6_mu(vbool32_t vm, vuint32m1x6_t vd, const uint32_t *rs1, vuint8mf4_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_u32m1x6_mu(vm, vd, rs1, rs2, vl);
}

vuint64m1x6_t test_vloxseg6ei8_v_u64m1x6_mu(vbool64_t vm, vuint64m1x6_t vd, const uint64_t *rs1, vuint8mf8_t rs2, size_t vl) {
  return __riscv_vloxseg6ei8_v_u64m1x6_mu(vm, vd, rs1, rs2, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vloxseg6ei8\.[ivxfswum.]+\s+} 104 } } */
