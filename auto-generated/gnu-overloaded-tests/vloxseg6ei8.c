/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat16mf4x6_t test_vloxseg6ei8_v_f16mf4x6(const float16_t *base, vuint8mf8_t bindex, size_t vl) {
  return __riscv_vloxseg6ei8(base, bindex, vl);
}

vfloat16mf2x6_t test_vloxseg6ei8_v_f16mf2x6(const float16_t *base, vuint8mf4_t bindex, size_t vl) {
  return __riscv_vloxseg6ei8(base, bindex, vl);
}

vfloat16m1x6_t test_vloxseg6ei8_v_f16m1x6(const float16_t *base, vuint8mf2_t bindex, size_t vl) {
  return __riscv_vloxseg6ei8(base, bindex, vl);
}

vfloat32mf2x6_t test_vloxseg6ei8_v_f32mf2x6(const float32_t *base, vuint8mf8_t bindex, size_t vl) {
  return __riscv_vloxseg6ei8(base, bindex, vl);
}

vfloat32m1x6_t test_vloxseg6ei8_v_f32m1x6(const float32_t *base, vuint8mf4_t bindex, size_t vl) {
  return __riscv_vloxseg6ei8(base, bindex, vl);
}

vfloat64m1x6_t test_vloxseg6ei8_v_f64m1x6(const float64_t *base, vuint8mf8_t bindex, size_t vl) {
  return __riscv_vloxseg6ei8(base, bindex, vl);
}

vint8mf8x6_t test_vloxseg6ei8_v_i8mf8x6(const int8_t *base, vuint8mf8_t bindex, size_t vl) {
  return __riscv_vloxseg6ei8(base, bindex, vl);
}

vint8mf4x6_t test_vloxseg6ei8_v_i8mf4x6(const int8_t *base, vuint8mf4_t bindex, size_t vl) {
  return __riscv_vloxseg6ei8(base, bindex, vl);
}

vint8mf2x6_t test_vloxseg6ei8_v_i8mf2x6(const int8_t *base, vuint8mf2_t bindex, size_t vl) {
  return __riscv_vloxseg6ei8(base, bindex, vl);
}

vint8m1x6_t test_vloxseg6ei8_v_i8m1x6(const int8_t *base, vuint8m1_t bindex, size_t vl) {
  return __riscv_vloxseg6ei8(base, bindex, vl);
}

vint16mf4x6_t test_vloxseg6ei8_v_i16mf4x6(const int16_t *base, vuint8mf8_t bindex, size_t vl) {
  return __riscv_vloxseg6ei8(base, bindex, vl);
}

vint16mf2x6_t test_vloxseg6ei8_v_i16mf2x6(const int16_t *base, vuint8mf4_t bindex, size_t vl) {
  return __riscv_vloxseg6ei8(base, bindex, vl);
}

vint16m1x6_t test_vloxseg6ei8_v_i16m1x6(const int16_t *base, vuint8mf2_t bindex, size_t vl) {
  return __riscv_vloxseg6ei8(base, bindex, vl);
}

vint32mf2x6_t test_vloxseg6ei8_v_i32mf2x6(const int32_t *base, vuint8mf8_t bindex, size_t vl) {
  return __riscv_vloxseg6ei8(base, bindex, vl);
}

vint32m1x6_t test_vloxseg6ei8_v_i32m1x6(const int32_t *base, vuint8mf4_t bindex, size_t vl) {
  return __riscv_vloxseg6ei8(base, bindex, vl);
}

vint64m1x6_t test_vloxseg6ei8_v_i64m1x6(const int64_t *base, vuint8mf8_t bindex, size_t vl) {
  return __riscv_vloxseg6ei8(base, bindex, vl);
}

vuint8mf8x6_t test_vloxseg6ei8_v_u8mf8x6(const uint8_t *base, vuint8mf8_t bindex, size_t vl) {
  return __riscv_vloxseg6ei8(base, bindex, vl);
}

vuint8mf4x6_t test_vloxseg6ei8_v_u8mf4x6(const uint8_t *base, vuint8mf4_t bindex, size_t vl) {
  return __riscv_vloxseg6ei8(base, bindex, vl);
}

vuint8mf2x6_t test_vloxseg6ei8_v_u8mf2x6(const uint8_t *base, vuint8mf2_t bindex, size_t vl) {
  return __riscv_vloxseg6ei8(base, bindex, vl);
}

vuint8m1x6_t test_vloxseg6ei8_v_u8m1x6(const uint8_t *base, vuint8m1_t bindex, size_t vl) {
  return __riscv_vloxseg6ei8(base, bindex, vl);
}

vuint16mf4x6_t test_vloxseg6ei8_v_u16mf4x6(const uint16_t *base, vuint8mf8_t bindex, size_t vl) {
  return __riscv_vloxseg6ei8(base, bindex, vl);
}

vuint16mf2x6_t test_vloxseg6ei8_v_u16mf2x6(const uint16_t *base, vuint8mf4_t bindex, size_t vl) {
  return __riscv_vloxseg6ei8(base, bindex, vl);
}

vuint16m1x6_t test_vloxseg6ei8_v_u16m1x6(const uint16_t *base, vuint8mf2_t bindex, size_t vl) {
  return __riscv_vloxseg6ei8(base, bindex, vl);
}

vuint32mf2x6_t test_vloxseg6ei8_v_u32mf2x6(const uint32_t *base, vuint8mf8_t bindex, size_t vl) {
  return __riscv_vloxseg6ei8(base, bindex, vl);
}

vuint32m1x6_t test_vloxseg6ei8_v_u32m1x6(const uint32_t *base, vuint8mf4_t bindex, size_t vl) {
  return __riscv_vloxseg6ei8(base, bindex, vl);
}

vuint64m1x6_t test_vloxseg6ei8_v_u64m1x6(const uint64_t *base, vuint8mf8_t bindex, size_t vl) {
  return __riscv_vloxseg6ei8(base, bindex, vl);
}

vfloat16mf4x6_t test_vloxseg6ei8_v_f16mf4x6_m(vbool64_t mask, const float16_t *base, vuint8mf8_t bindex, size_t vl) {
  return __riscv_vloxseg6ei8(mask, base, bindex, vl);
}

vfloat16mf2x6_t test_vloxseg6ei8_v_f16mf2x6_m(vbool32_t mask, const float16_t *base, vuint8mf4_t bindex, size_t vl) {
  return __riscv_vloxseg6ei8(mask, base, bindex, vl);
}

vfloat16m1x6_t test_vloxseg6ei8_v_f16m1x6_m(vbool16_t mask, const float16_t *base, vuint8mf2_t bindex, size_t vl) {
  return __riscv_vloxseg6ei8(mask, base, bindex, vl);
}

vfloat32mf2x6_t test_vloxseg6ei8_v_f32mf2x6_m(vbool64_t mask, const float32_t *base, vuint8mf8_t bindex, size_t vl) {
  return __riscv_vloxseg6ei8(mask, base, bindex, vl);
}

vfloat32m1x6_t test_vloxseg6ei8_v_f32m1x6_m(vbool32_t mask, const float32_t *base, vuint8mf4_t bindex, size_t vl) {
  return __riscv_vloxseg6ei8(mask, base, bindex, vl);
}

vfloat64m1x6_t test_vloxseg6ei8_v_f64m1x6_m(vbool64_t mask, const float64_t *base, vuint8mf8_t bindex, size_t vl) {
  return __riscv_vloxseg6ei8(mask, base, bindex, vl);
}

vint8mf8x6_t test_vloxseg6ei8_v_i8mf8x6_m(vbool64_t mask, const int8_t *base, vuint8mf8_t bindex, size_t vl) {
  return __riscv_vloxseg6ei8(mask, base, bindex, vl);
}

vint8mf4x6_t test_vloxseg6ei8_v_i8mf4x6_m(vbool32_t mask, const int8_t *base, vuint8mf4_t bindex, size_t vl) {
  return __riscv_vloxseg6ei8(mask, base, bindex, vl);
}

vint8mf2x6_t test_vloxseg6ei8_v_i8mf2x6_m(vbool16_t mask, const int8_t *base, vuint8mf2_t bindex, size_t vl) {
  return __riscv_vloxseg6ei8(mask, base, bindex, vl);
}

vint8m1x6_t test_vloxseg6ei8_v_i8m1x6_m(vbool8_t mask, const int8_t *base, vuint8m1_t bindex, size_t vl) {
  return __riscv_vloxseg6ei8(mask, base, bindex, vl);
}

vint16mf4x6_t test_vloxseg6ei8_v_i16mf4x6_m(vbool64_t mask, const int16_t *base, vuint8mf8_t bindex, size_t vl) {
  return __riscv_vloxseg6ei8(mask, base, bindex, vl);
}

vint16mf2x6_t test_vloxseg6ei8_v_i16mf2x6_m(vbool32_t mask, const int16_t *base, vuint8mf4_t bindex, size_t vl) {
  return __riscv_vloxseg6ei8(mask, base, bindex, vl);
}

vint16m1x6_t test_vloxseg6ei8_v_i16m1x6_m(vbool16_t mask, const int16_t *base, vuint8mf2_t bindex, size_t vl) {
  return __riscv_vloxseg6ei8(mask, base, bindex, vl);
}

vint32mf2x6_t test_vloxseg6ei8_v_i32mf2x6_m(vbool64_t mask, const int32_t *base, vuint8mf8_t bindex, size_t vl) {
  return __riscv_vloxseg6ei8(mask, base, bindex, vl);
}

vint32m1x6_t test_vloxseg6ei8_v_i32m1x6_m(vbool32_t mask, const int32_t *base, vuint8mf4_t bindex, size_t vl) {
  return __riscv_vloxseg6ei8(mask, base, bindex, vl);
}

vint64m1x6_t test_vloxseg6ei8_v_i64m1x6_m(vbool64_t mask, const int64_t *base, vuint8mf8_t bindex, size_t vl) {
  return __riscv_vloxseg6ei8(mask, base, bindex, vl);
}

vuint8mf8x6_t test_vloxseg6ei8_v_u8mf8x6_m(vbool64_t mask, const uint8_t *base, vuint8mf8_t bindex, size_t vl) {
  return __riscv_vloxseg6ei8(mask, base, bindex, vl);
}

vuint8mf4x6_t test_vloxseg6ei8_v_u8mf4x6_m(vbool32_t mask, const uint8_t *base, vuint8mf4_t bindex, size_t vl) {
  return __riscv_vloxseg6ei8(mask, base, bindex, vl);
}

vuint8mf2x6_t test_vloxseg6ei8_v_u8mf2x6_m(vbool16_t mask, const uint8_t *base, vuint8mf2_t bindex, size_t vl) {
  return __riscv_vloxseg6ei8(mask, base, bindex, vl);
}

vuint8m1x6_t test_vloxseg6ei8_v_u8m1x6_m(vbool8_t mask, const uint8_t *base, vuint8m1_t bindex, size_t vl) {
  return __riscv_vloxseg6ei8(mask, base, bindex, vl);
}

vuint16mf4x6_t test_vloxseg6ei8_v_u16mf4x6_m(vbool64_t mask, const uint16_t *base, vuint8mf8_t bindex, size_t vl) {
  return __riscv_vloxseg6ei8(mask, base, bindex, vl);
}

vuint16mf2x6_t test_vloxseg6ei8_v_u16mf2x6_m(vbool32_t mask, const uint16_t *base, vuint8mf4_t bindex, size_t vl) {
  return __riscv_vloxseg6ei8(mask, base, bindex, vl);
}

vuint16m1x6_t test_vloxseg6ei8_v_u16m1x6_m(vbool16_t mask, const uint16_t *base, vuint8mf2_t bindex, size_t vl) {
  return __riscv_vloxseg6ei8(mask, base, bindex, vl);
}

vuint32mf2x6_t test_vloxseg6ei8_v_u32mf2x6_m(vbool64_t mask, const uint32_t *base, vuint8mf8_t bindex, size_t vl) {
  return __riscv_vloxseg6ei8(mask, base, bindex, vl);
}

vuint32m1x6_t test_vloxseg6ei8_v_u32m1x6_m(vbool32_t mask, const uint32_t *base, vuint8mf4_t bindex, size_t vl) {
  return __riscv_vloxseg6ei8(mask, base, bindex, vl);
}

vuint64m1x6_t test_vloxseg6ei8_v_u64m1x6_m(vbool64_t mask, const uint64_t *base, vuint8mf8_t bindex, size_t vl) {
  return __riscv_vloxseg6ei8(mask, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vloxseg6ei8\.[ivxfswum.]+\s+} 52 } } */
