/* { dg-do compile } */
/* { dg-options "-march=rv32gc_zve32f -mabi=ilp32d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include "riscv_vector.h"

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat32m1x3_t test_vluxseg3ei16_v_f32m1x3(const float32_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16(base, bindex, vl);
}

vfloat32m2x3_t test_vluxseg3ei16_v_f32m2x3(const float32_t *base, vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16(base, bindex, vl);
}

vint8mf4x3_t test_vluxseg3ei16_v_i8mf4x3(const int8_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16(base, bindex, vl);
}

vint8mf2x3_t test_vluxseg3ei16_v_i8mf2x3(const int8_t *base, vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16(base, bindex, vl);
}

vint8m1x3_t test_vluxseg3ei16_v_i8m1x3(const int8_t *base, vuint16m2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16(base, bindex, vl);
}

vint8m2x3_t test_vluxseg3ei16_v_i8m2x3(const int8_t *base, vuint16m4_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16(base, bindex, vl);
}

vint16mf2x3_t test_vluxseg3ei16_v_i16mf2x3(const int16_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16(base, bindex, vl);
}

vint16m1x3_t test_vluxseg3ei16_v_i16m1x3(const int16_t *base, vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16(base, bindex, vl);
}

vint16m2x3_t test_vluxseg3ei16_v_i16m2x3(const int16_t *base, vuint16m2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16(base, bindex, vl);
}

vint32m1x3_t test_vluxseg3ei16_v_i32m1x3(const int32_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16(base, bindex, vl);
}

vint32m2x3_t test_vluxseg3ei16_v_i32m2x3(const int32_t *base, vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16(base, bindex, vl);
}

vuint8mf4x3_t test_vluxseg3ei16_v_u8mf4x3(const uint8_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16(base, bindex, vl);
}

vuint8mf2x3_t test_vluxseg3ei16_v_u8mf2x3(const uint8_t *base, vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16(base, bindex, vl);
}

vuint8m1x3_t test_vluxseg3ei16_v_u8m1x3(const uint8_t *base, vuint16m2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16(base, bindex, vl);
}

vuint8m2x3_t test_vluxseg3ei16_v_u8m2x3(const uint8_t *base, vuint16m4_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16(base, bindex, vl);
}

vuint16mf2x3_t test_vluxseg3ei16_v_u16mf2x3(const uint16_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16(base, bindex, vl);
}

vuint16m1x3_t test_vluxseg3ei16_v_u16m1x3(const uint16_t *base, vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16(base, bindex, vl);
}

vuint16m2x3_t test_vluxseg3ei16_v_u16m2x3(const uint16_t *base, vuint16m2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16(base, bindex, vl);
}

vuint32m1x3_t test_vluxseg3ei16_v_u32m1x3(const uint32_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16(base, bindex, vl);
}

vuint32m2x3_t test_vluxseg3ei16_v_u32m2x3(const uint32_t *base, vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16(base, bindex, vl);
}

vfloat32m1x3_t test_vluxseg3ei16_v_f32m1x3_m(vbool32_t mask, const float32_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16(mask, base, bindex, vl);
}

vfloat32m2x3_t test_vluxseg3ei16_v_f32m2x3_m(vbool16_t mask, const float32_t *base, vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16(mask, base, bindex, vl);
}

vint8mf4x3_t test_vluxseg3ei16_v_i8mf4x3_m(vbool32_t mask, const int8_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16(mask, base, bindex, vl);
}

vint8mf2x3_t test_vluxseg3ei16_v_i8mf2x3_m(vbool16_t mask, const int8_t *base, vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16(mask, base, bindex, vl);
}

vint8m1x3_t test_vluxseg3ei16_v_i8m1x3_m(vbool8_t mask, const int8_t *base, vuint16m2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16(mask, base, bindex, vl);
}

vint8m2x3_t test_vluxseg3ei16_v_i8m2x3_m(vbool4_t mask, const int8_t *base, vuint16m4_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16(mask, base, bindex, vl);
}

vint16mf2x3_t test_vluxseg3ei16_v_i16mf2x3_m(vbool32_t mask, const int16_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16(mask, base, bindex, vl);
}

vint16m1x3_t test_vluxseg3ei16_v_i16m1x3_m(vbool16_t mask, const int16_t *base, vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16(mask, base, bindex, vl);
}

vint16m2x3_t test_vluxseg3ei16_v_i16m2x3_m(vbool8_t mask, const int16_t *base, vuint16m2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16(mask, base, bindex, vl);
}

vint32m1x3_t test_vluxseg3ei16_v_i32m1x3_m(vbool32_t mask, const int32_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16(mask, base, bindex, vl);
}

vint32m2x3_t test_vluxseg3ei16_v_i32m2x3_m(vbool16_t mask, const int32_t *base, vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16(mask, base, bindex, vl);
}

vuint8mf4x3_t test_vluxseg3ei16_v_u8mf4x3_m(vbool32_t mask, const uint8_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16(mask, base, bindex, vl);
}

vuint8mf2x3_t test_vluxseg3ei16_v_u8mf2x3_m(vbool16_t mask, const uint8_t *base, vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16(mask, base, bindex, vl);
}

vuint8m1x3_t test_vluxseg3ei16_v_u8m1x3_m(vbool8_t mask, const uint8_t *base, vuint16m2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16(mask, base, bindex, vl);
}

vuint8m2x3_t test_vluxseg3ei16_v_u8m2x3_m(vbool4_t mask, const uint8_t *base, vuint16m4_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16(mask, base, bindex, vl);
}

vuint16mf2x3_t test_vluxseg3ei16_v_u16mf2x3_m(vbool32_t mask, const uint16_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16(mask, base, bindex, vl);
}

vuint16m1x3_t test_vluxseg3ei16_v_u16m1x3_m(vbool16_t mask, const uint16_t *base, vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16(mask, base, bindex, vl);
}

vuint16m2x3_t test_vluxseg3ei16_v_u16m2x3_m(vbool8_t mask, const uint16_t *base, vuint16m2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16(mask, base, bindex, vl);
}

vuint32m1x3_t test_vluxseg3ei16_v_u32m1x3_m(vbool32_t mask, const uint32_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16(mask, base, bindex, vl);
}

vuint32m2x3_t test_vluxseg3ei16_v_u32m2x3_m(vbool16_t mask, const uint32_t *base, vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16(mask, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vluxseg3ei16\.[ivxfswum.]+\s+} 40 } } */
