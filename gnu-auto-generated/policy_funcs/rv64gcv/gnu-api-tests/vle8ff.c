/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include "riscv_vector.h"

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint8mf8_t test_vle8ff_v_i8mf8(const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle8ff_v_i8mf8(base, new_vl, vl);
}

vint8mf4_t test_vle8ff_v_i8mf4(const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle8ff_v_i8mf4(base, new_vl, vl);
}

vint8mf2_t test_vle8ff_v_i8mf2(const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle8ff_v_i8mf2(base, new_vl, vl);
}

vint8m1_t test_vle8ff_v_i8m1(const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle8ff_v_i8m1(base, new_vl, vl);
}

vint8m2_t test_vle8ff_v_i8m2(const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle8ff_v_i8m2(base, new_vl, vl);
}

vint8m4_t test_vle8ff_v_i8m4(const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle8ff_v_i8m4(base, new_vl, vl);
}

vint8m8_t test_vle8ff_v_i8m8(const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle8ff_v_i8m8(base, new_vl, vl);
}

vuint8mf8_t test_vle8ff_v_u8mf8(const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle8ff_v_u8mf8(base, new_vl, vl);
}

vuint8mf4_t test_vle8ff_v_u8mf4(const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle8ff_v_u8mf4(base, new_vl, vl);
}

vuint8mf2_t test_vle8ff_v_u8mf2(const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle8ff_v_u8mf2(base, new_vl, vl);
}

vuint8m1_t test_vle8ff_v_u8m1(const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle8ff_v_u8m1(base, new_vl, vl);
}

vuint8m2_t test_vle8ff_v_u8m2(const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle8ff_v_u8m2(base, new_vl, vl);
}

vuint8m4_t test_vle8ff_v_u8m4(const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle8ff_v_u8m4(base, new_vl, vl);
}

vuint8m8_t test_vle8ff_v_u8m8(const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle8ff_v_u8m8(base, new_vl, vl);
}

vint8mf8_t test_vle8ff_v_i8mf8_m(vbool64_t mask, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle8ff_v_i8mf8_m(mask, base, new_vl, vl);
}

vint8mf4_t test_vle8ff_v_i8mf4_m(vbool32_t mask, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle8ff_v_i8mf4_m(mask, base, new_vl, vl);
}

vint8mf2_t test_vle8ff_v_i8mf2_m(vbool16_t mask, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle8ff_v_i8mf2_m(mask, base, new_vl, vl);
}

vint8m1_t test_vle8ff_v_i8m1_m(vbool8_t mask, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle8ff_v_i8m1_m(mask, base, new_vl, vl);
}

vint8m2_t test_vle8ff_v_i8m2_m(vbool4_t mask, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle8ff_v_i8m2_m(mask, base, new_vl, vl);
}

vint8m4_t test_vle8ff_v_i8m4_m(vbool2_t mask, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle8ff_v_i8m4_m(mask, base, new_vl, vl);
}

vint8m8_t test_vle8ff_v_i8m8_m(vbool1_t mask, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle8ff_v_i8m8_m(mask, base, new_vl, vl);
}

vuint8mf8_t test_vle8ff_v_u8mf8_m(vbool64_t mask, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle8ff_v_u8mf8_m(mask, base, new_vl, vl);
}

vuint8mf4_t test_vle8ff_v_u8mf4_m(vbool32_t mask, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle8ff_v_u8mf4_m(mask, base, new_vl, vl);
}

vuint8mf2_t test_vle8ff_v_u8mf2_m(vbool16_t mask, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle8ff_v_u8mf2_m(mask, base, new_vl, vl);
}

vuint8m1_t test_vle8ff_v_u8m1_m(vbool8_t mask, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle8ff_v_u8m1_m(mask, base, new_vl, vl);
}

vuint8m2_t test_vle8ff_v_u8m2_m(vbool4_t mask, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle8ff_v_u8m2_m(mask, base, new_vl, vl);
}

vuint8m4_t test_vle8ff_v_u8m4_m(vbool2_t mask, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle8ff_v_u8m4_m(mask, base, new_vl, vl);
}

vuint8m8_t test_vle8ff_v_u8m8_m(vbool1_t mask, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle8ff_v_u8m8_m(mask, base, new_vl, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vle8ff\.[ivxfswum.]+\s+} 28 } } */
