/* { dg-do compile } */
/* { dg-options "-march=rv32gc_zve32x -mabi=ilp32d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include "riscv_vector.h"

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint8mf4x2_t test_vluxseg2ei8_v_i8mf4x2(const int8_t *base, vuint8mf4_t bindex, size_t vl) {
  return __riscv_vluxseg2ei8(base, bindex, vl);
}

vint8mf2x2_t test_vluxseg2ei8_v_i8mf2x2(const int8_t *base, vuint8mf2_t bindex, size_t vl) {
  return __riscv_vluxseg2ei8(base, bindex, vl);
}

vint8m1x2_t test_vluxseg2ei8_v_i8m1x2(const int8_t *base, vuint8m1_t bindex, size_t vl) {
  return __riscv_vluxseg2ei8(base, bindex, vl);
}

vint8m2x2_t test_vluxseg2ei8_v_i8m2x2(const int8_t *base, vuint8m2_t bindex, size_t vl) {
  return __riscv_vluxseg2ei8(base, bindex, vl);
}

vint8m4x2_t test_vluxseg2ei8_v_i8m4x2(const int8_t *base, vuint8m4_t bindex, size_t vl) {
  return __riscv_vluxseg2ei8(base, bindex, vl);
}

vint16mf2x2_t test_vluxseg2ei8_v_i16mf2x2(const int16_t *base, vuint8mf4_t bindex, size_t vl) {
  return __riscv_vluxseg2ei8(base, bindex, vl);
}

vint16m1x2_t test_vluxseg2ei8_v_i16m1x2(const int16_t *base, vuint8mf2_t bindex, size_t vl) {
  return __riscv_vluxseg2ei8(base, bindex, vl);
}

vint16m2x2_t test_vluxseg2ei8_v_i16m2x2(const int16_t *base, vuint8m1_t bindex, size_t vl) {
  return __riscv_vluxseg2ei8(base, bindex, vl);
}

vint16m4x2_t test_vluxseg2ei8_v_i16m4x2(const int16_t *base, vuint8m2_t bindex, size_t vl) {
  return __riscv_vluxseg2ei8(base, bindex, vl);
}

vint32m1x2_t test_vluxseg2ei8_v_i32m1x2(const int32_t *base, vuint8mf4_t bindex, size_t vl) {
  return __riscv_vluxseg2ei8(base, bindex, vl);
}

vint32m2x2_t test_vluxseg2ei8_v_i32m2x2(const int32_t *base, vuint8mf2_t bindex, size_t vl) {
  return __riscv_vluxseg2ei8(base, bindex, vl);
}

vint32m4x2_t test_vluxseg2ei8_v_i32m4x2(const int32_t *base, vuint8m1_t bindex, size_t vl) {
  return __riscv_vluxseg2ei8(base, bindex, vl);
}

vuint8mf4x2_t test_vluxseg2ei8_v_u8mf4x2(const uint8_t *base, vuint8mf4_t bindex, size_t vl) {
  return __riscv_vluxseg2ei8(base, bindex, vl);
}

vuint8mf2x2_t test_vluxseg2ei8_v_u8mf2x2(const uint8_t *base, vuint8mf2_t bindex, size_t vl) {
  return __riscv_vluxseg2ei8(base, bindex, vl);
}

vuint8m1x2_t test_vluxseg2ei8_v_u8m1x2(const uint8_t *base, vuint8m1_t bindex, size_t vl) {
  return __riscv_vluxseg2ei8(base, bindex, vl);
}

vuint8m2x2_t test_vluxseg2ei8_v_u8m2x2(const uint8_t *base, vuint8m2_t bindex, size_t vl) {
  return __riscv_vluxseg2ei8(base, bindex, vl);
}

vuint8m4x2_t test_vluxseg2ei8_v_u8m4x2(const uint8_t *base, vuint8m4_t bindex, size_t vl) {
  return __riscv_vluxseg2ei8(base, bindex, vl);
}

vuint16mf2x2_t test_vluxseg2ei8_v_u16mf2x2(const uint16_t *base, vuint8mf4_t bindex, size_t vl) {
  return __riscv_vluxseg2ei8(base, bindex, vl);
}

vuint16m1x2_t test_vluxseg2ei8_v_u16m1x2(const uint16_t *base, vuint8mf2_t bindex, size_t vl) {
  return __riscv_vluxseg2ei8(base, bindex, vl);
}

vuint16m2x2_t test_vluxseg2ei8_v_u16m2x2(const uint16_t *base, vuint8m1_t bindex, size_t vl) {
  return __riscv_vluxseg2ei8(base, bindex, vl);
}

vuint16m4x2_t test_vluxseg2ei8_v_u16m4x2(const uint16_t *base, vuint8m2_t bindex, size_t vl) {
  return __riscv_vluxseg2ei8(base, bindex, vl);
}

vuint32m1x2_t test_vluxseg2ei8_v_u32m1x2(const uint32_t *base, vuint8mf4_t bindex, size_t vl) {
  return __riscv_vluxseg2ei8(base, bindex, vl);
}

vuint32m2x2_t test_vluxseg2ei8_v_u32m2x2(const uint32_t *base, vuint8mf2_t bindex, size_t vl) {
  return __riscv_vluxseg2ei8(base, bindex, vl);
}

vuint32m4x2_t test_vluxseg2ei8_v_u32m4x2(const uint32_t *base, vuint8m1_t bindex, size_t vl) {
  return __riscv_vluxseg2ei8(base, bindex, vl);
}

vint8mf4x2_t test_vluxseg2ei8_v_i8mf4x2_m(vbool32_t mask, const int8_t *base, vuint8mf4_t bindex, size_t vl) {
  return __riscv_vluxseg2ei8(mask, base, bindex, vl);
}

vint8mf2x2_t test_vluxseg2ei8_v_i8mf2x2_m(vbool16_t mask, const int8_t *base, vuint8mf2_t bindex, size_t vl) {
  return __riscv_vluxseg2ei8(mask, base, bindex, vl);
}

vint8m1x2_t test_vluxseg2ei8_v_i8m1x2_m(vbool8_t mask, const int8_t *base, vuint8m1_t bindex, size_t vl) {
  return __riscv_vluxseg2ei8(mask, base, bindex, vl);
}

vint8m2x2_t test_vluxseg2ei8_v_i8m2x2_m(vbool4_t mask, const int8_t *base, vuint8m2_t bindex, size_t vl) {
  return __riscv_vluxseg2ei8(mask, base, bindex, vl);
}

vint8m4x2_t test_vluxseg2ei8_v_i8m4x2_m(vbool2_t mask, const int8_t *base, vuint8m4_t bindex, size_t vl) {
  return __riscv_vluxseg2ei8(mask, base, bindex, vl);
}

vint16mf2x2_t test_vluxseg2ei8_v_i16mf2x2_m(vbool32_t mask, const int16_t *base, vuint8mf4_t bindex, size_t vl) {
  return __riscv_vluxseg2ei8(mask, base, bindex, vl);
}

vint16m1x2_t test_vluxseg2ei8_v_i16m1x2_m(vbool16_t mask, const int16_t *base, vuint8mf2_t bindex, size_t vl) {
  return __riscv_vluxseg2ei8(mask, base, bindex, vl);
}

vint16m2x2_t test_vluxseg2ei8_v_i16m2x2_m(vbool8_t mask, const int16_t *base, vuint8m1_t bindex, size_t vl) {
  return __riscv_vluxseg2ei8(mask, base, bindex, vl);
}

vint16m4x2_t test_vluxseg2ei8_v_i16m4x2_m(vbool4_t mask, const int16_t *base, vuint8m2_t bindex, size_t vl) {
  return __riscv_vluxseg2ei8(mask, base, bindex, vl);
}

vint32m1x2_t test_vluxseg2ei8_v_i32m1x2_m(vbool32_t mask, const int32_t *base, vuint8mf4_t bindex, size_t vl) {
  return __riscv_vluxseg2ei8(mask, base, bindex, vl);
}

vint32m2x2_t test_vluxseg2ei8_v_i32m2x2_m(vbool16_t mask, const int32_t *base, vuint8mf2_t bindex, size_t vl) {
  return __riscv_vluxseg2ei8(mask, base, bindex, vl);
}

vint32m4x2_t test_vluxseg2ei8_v_i32m4x2_m(vbool8_t mask, const int32_t *base, vuint8m1_t bindex, size_t vl) {
  return __riscv_vluxseg2ei8(mask, base, bindex, vl);
}

vuint8mf4x2_t test_vluxseg2ei8_v_u8mf4x2_m(vbool32_t mask, const uint8_t *base, vuint8mf4_t bindex, size_t vl) {
  return __riscv_vluxseg2ei8(mask, base, bindex, vl);
}

vuint8mf2x2_t test_vluxseg2ei8_v_u8mf2x2_m(vbool16_t mask, const uint8_t *base, vuint8mf2_t bindex, size_t vl) {
  return __riscv_vluxseg2ei8(mask, base, bindex, vl);
}

vuint8m1x2_t test_vluxseg2ei8_v_u8m1x2_m(vbool8_t mask, const uint8_t *base, vuint8m1_t bindex, size_t vl) {
  return __riscv_vluxseg2ei8(mask, base, bindex, vl);
}

vuint8m2x2_t test_vluxseg2ei8_v_u8m2x2_m(vbool4_t mask, const uint8_t *base, vuint8m2_t bindex, size_t vl) {
  return __riscv_vluxseg2ei8(mask, base, bindex, vl);
}

vuint8m4x2_t test_vluxseg2ei8_v_u8m4x2_m(vbool2_t mask, const uint8_t *base, vuint8m4_t bindex, size_t vl) {
  return __riscv_vluxseg2ei8(mask, base, bindex, vl);
}

vuint16mf2x2_t test_vluxseg2ei8_v_u16mf2x2_m(vbool32_t mask, const uint16_t *base, vuint8mf4_t bindex, size_t vl) {
  return __riscv_vluxseg2ei8(mask, base, bindex, vl);
}

vuint16m1x2_t test_vluxseg2ei8_v_u16m1x2_m(vbool16_t mask, const uint16_t *base, vuint8mf2_t bindex, size_t vl) {
  return __riscv_vluxseg2ei8(mask, base, bindex, vl);
}

vuint16m2x2_t test_vluxseg2ei8_v_u16m2x2_m(vbool8_t mask, const uint16_t *base, vuint8m1_t bindex, size_t vl) {
  return __riscv_vluxseg2ei8(mask, base, bindex, vl);
}

vuint16m4x2_t test_vluxseg2ei8_v_u16m4x2_m(vbool4_t mask, const uint16_t *base, vuint8m2_t bindex, size_t vl) {
  return __riscv_vluxseg2ei8(mask, base, bindex, vl);
}

vuint32m1x2_t test_vluxseg2ei8_v_u32m1x2_m(vbool32_t mask, const uint32_t *base, vuint8mf4_t bindex, size_t vl) {
  return __riscv_vluxseg2ei8(mask, base, bindex, vl);
}

vuint32m2x2_t test_vluxseg2ei8_v_u32m2x2_m(vbool16_t mask, const uint32_t *base, vuint8mf2_t bindex, size_t vl) {
  return __riscv_vluxseg2ei8(mask, base, bindex, vl);
}

vuint32m4x2_t test_vluxseg2ei8_v_u32m4x2_m(vbool8_t mask, const uint32_t *base, vuint8m1_t bindex, size_t vl) {
  return __riscv_vluxseg2ei8(mask, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vluxseg2ei8\.[ivxfswum.]+\s+} 48 } } */
