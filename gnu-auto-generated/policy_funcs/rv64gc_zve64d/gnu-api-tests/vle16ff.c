/* { dg-do compile } */
/* { dg-options "-march=rv64gc_zve64d -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include "riscv_vector.h"

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint16mf4_t test_vle16ff_v_i16mf4(const int16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_i16mf4(base, new_vl, vl);
}

vint16mf2_t test_vle16ff_v_i16mf2(const int16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_i16mf2(base, new_vl, vl);
}

vint16m1_t test_vle16ff_v_i16m1(const int16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_i16m1(base, new_vl, vl);
}

vint16m2_t test_vle16ff_v_i16m2(const int16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_i16m2(base, new_vl, vl);
}

vint16m4_t test_vle16ff_v_i16m4(const int16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_i16m4(base, new_vl, vl);
}

vint16m8_t test_vle16ff_v_i16m8(const int16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_i16m8(base, new_vl, vl);
}

vuint16mf4_t test_vle16ff_v_u16mf4(const uint16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_u16mf4(base, new_vl, vl);
}

vuint16mf2_t test_vle16ff_v_u16mf2(const uint16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_u16mf2(base, new_vl, vl);
}

vuint16m1_t test_vle16ff_v_u16m1(const uint16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_u16m1(base, new_vl, vl);
}

vuint16m2_t test_vle16ff_v_u16m2(const uint16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_u16m2(base, new_vl, vl);
}

vuint16m4_t test_vle16ff_v_u16m4(const uint16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_u16m4(base, new_vl, vl);
}

vuint16m8_t test_vle16ff_v_u16m8(const uint16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_u16m8(base, new_vl, vl);
}

vint16mf4_t test_vle16ff_v_i16mf4_m(vbool64_t mask, const int16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_i16mf4_m(mask, base, new_vl, vl);
}

vint16mf2_t test_vle16ff_v_i16mf2_m(vbool32_t mask, const int16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_i16mf2_m(mask, base, new_vl, vl);
}

vint16m1_t test_vle16ff_v_i16m1_m(vbool16_t mask, const int16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_i16m1_m(mask, base, new_vl, vl);
}

vint16m2_t test_vle16ff_v_i16m2_m(vbool8_t mask, const int16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_i16m2_m(mask, base, new_vl, vl);
}

vint16m4_t test_vle16ff_v_i16m4_m(vbool4_t mask, const int16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_i16m4_m(mask, base, new_vl, vl);
}

vint16m8_t test_vle16ff_v_i16m8_m(vbool2_t mask, const int16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_i16m8_m(mask, base, new_vl, vl);
}

vuint16mf4_t test_vle16ff_v_u16mf4_m(vbool64_t mask, const uint16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_u16mf4_m(mask, base, new_vl, vl);
}

vuint16mf2_t test_vle16ff_v_u16mf2_m(vbool32_t mask, const uint16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_u16mf2_m(mask, base, new_vl, vl);
}

vuint16m1_t test_vle16ff_v_u16m1_m(vbool16_t mask, const uint16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_u16m1_m(mask, base, new_vl, vl);
}

vuint16m2_t test_vle16ff_v_u16m2_m(vbool8_t mask, const uint16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_u16m2_m(mask, base, new_vl, vl);
}

vuint16m4_t test_vle16ff_v_u16m4_m(vbool4_t mask, const uint16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_u16m4_m(mask, base, new_vl, vl);
}

vuint16m8_t test_vle16ff_v_u16m8_m(vbool2_t mask, const uint16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_u16m8_m(mask, base, new_vl, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vle16ff\.[ivxfswum.]+\s+} 24 } } */
