/* { dg-do compile } */
/* { dg-options "-march=rv32gc_zve32x -mabi=ilp32d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include "riscv_vector.h"

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vuint8m1_t test_vredminu_vs_u8mf4_u8m1(vuint8mf4_t vector, vuint8m1_t scalar, size_t vl) {
  return __riscv_vredminu(vector, scalar, vl);
}

vuint8m1_t test_vredminu_vs_u8mf2_u8m1(vuint8mf2_t vector, vuint8m1_t scalar, size_t vl) {
  return __riscv_vredminu(vector, scalar, vl);
}

vuint8m1_t test_vredminu_vs_u8m1_u8m1(vuint8m1_t vector, vuint8m1_t scalar, size_t vl) {
  return __riscv_vredminu(vector, scalar, vl);
}

vuint8m1_t test_vredminu_vs_u8m2_u8m1(vuint8m2_t vector, vuint8m1_t scalar, size_t vl) {
  return __riscv_vredminu(vector, scalar, vl);
}

vuint8m1_t test_vredminu_vs_u8m4_u8m1(vuint8m4_t vector, vuint8m1_t scalar, size_t vl) {
  return __riscv_vredminu(vector, scalar, vl);
}

vuint8m1_t test_vredminu_vs_u8m8_u8m1(vuint8m8_t vector, vuint8m1_t scalar, size_t vl) {
  return __riscv_vredminu(vector, scalar, vl);
}

vuint16m1_t test_vredminu_vs_u16mf2_u16m1(vuint16mf2_t vector, vuint16m1_t scalar, size_t vl) {
  return __riscv_vredminu(vector, scalar, vl);
}

vuint16m1_t test_vredminu_vs_u16m1_u16m1(vuint16m1_t vector, vuint16m1_t scalar, size_t vl) {
  return __riscv_vredminu(vector, scalar, vl);
}

vuint16m1_t test_vredminu_vs_u16m2_u16m1(vuint16m2_t vector, vuint16m1_t scalar, size_t vl) {
  return __riscv_vredminu(vector, scalar, vl);
}

vuint16m1_t test_vredminu_vs_u16m4_u16m1(vuint16m4_t vector, vuint16m1_t scalar, size_t vl) {
  return __riscv_vredminu(vector, scalar, vl);
}

vuint16m1_t test_vredminu_vs_u16m8_u16m1(vuint16m8_t vector, vuint16m1_t scalar, size_t vl) {
  return __riscv_vredminu(vector, scalar, vl);
}

vuint32m1_t test_vredminu_vs_u32m1_u32m1(vuint32m1_t vector, vuint32m1_t scalar, size_t vl) {
  return __riscv_vredminu(vector, scalar, vl);
}

vuint32m1_t test_vredminu_vs_u32m2_u32m1(vuint32m2_t vector, vuint32m1_t scalar, size_t vl) {
  return __riscv_vredminu(vector, scalar, vl);
}

vuint32m1_t test_vredminu_vs_u32m4_u32m1(vuint32m4_t vector, vuint32m1_t scalar, size_t vl) {
  return __riscv_vredminu(vector, scalar, vl);
}

vuint32m1_t test_vredminu_vs_u32m8_u32m1(vuint32m8_t vector, vuint32m1_t scalar, size_t vl) {
  return __riscv_vredminu(vector, scalar, vl);
}

vuint8m1_t test_vredminu_vs_u8mf4_u8m1_m(vbool32_t mask, vuint8mf4_t vector, vuint8m1_t scalar, size_t vl) {
  return __riscv_vredminu(mask, vector, scalar, vl);
}

vuint8m1_t test_vredminu_vs_u8mf2_u8m1_m(vbool16_t mask, vuint8mf2_t vector, vuint8m1_t scalar, size_t vl) {
  return __riscv_vredminu(mask, vector, scalar, vl);
}

vuint8m1_t test_vredminu_vs_u8m1_u8m1_m(vbool8_t mask, vuint8m1_t vector, vuint8m1_t scalar, size_t vl) {
  return __riscv_vredminu(mask, vector, scalar, vl);
}

vuint8m1_t test_vredminu_vs_u8m2_u8m1_m(vbool4_t mask, vuint8m2_t vector, vuint8m1_t scalar, size_t vl) {
  return __riscv_vredminu(mask, vector, scalar, vl);
}

vuint8m1_t test_vredminu_vs_u8m4_u8m1_m(vbool2_t mask, vuint8m4_t vector, vuint8m1_t scalar, size_t vl) {
  return __riscv_vredminu(mask, vector, scalar, vl);
}

vuint8m1_t test_vredminu_vs_u8m8_u8m1_m(vbool1_t mask, vuint8m8_t vector, vuint8m1_t scalar, size_t vl) {
  return __riscv_vredminu(mask, vector, scalar, vl);
}

vuint16m1_t test_vredminu_vs_u16mf2_u16m1_m(vbool32_t mask, vuint16mf2_t vector, vuint16m1_t scalar, size_t vl) {
  return __riscv_vredminu(mask, vector, scalar, vl);
}

vuint16m1_t test_vredminu_vs_u16m1_u16m1_m(vbool16_t mask, vuint16m1_t vector, vuint16m1_t scalar, size_t vl) {
  return __riscv_vredminu(mask, vector, scalar, vl);
}

vuint16m1_t test_vredminu_vs_u16m2_u16m1_m(vbool8_t mask, vuint16m2_t vector, vuint16m1_t scalar, size_t vl) {
  return __riscv_vredminu(mask, vector, scalar, vl);
}

vuint16m1_t test_vredminu_vs_u16m4_u16m1_m(vbool4_t mask, vuint16m4_t vector, vuint16m1_t scalar, size_t vl) {
  return __riscv_vredminu(mask, vector, scalar, vl);
}

vuint16m1_t test_vredminu_vs_u16m8_u16m1_m(vbool2_t mask, vuint16m8_t vector, vuint16m1_t scalar, size_t vl) {
  return __riscv_vredminu(mask, vector, scalar, vl);
}

vuint32m1_t test_vredminu_vs_u32m1_u32m1_m(vbool32_t mask, vuint32m1_t vector, vuint32m1_t scalar, size_t vl) {
  return __riscv_vredminu(mask, vector, scalar, vl);
}

vuint32m1_t test_vredminu_vs_u32m2_u32m1_m(vbool16_t mask, vuint32m2_t vector, vuint32m1_t scalar, size_t vl) {
  return __riscv_vredminu(mask, vector, scalar, vl);
}

vuint32m1_t test_vredminu_vs_u32m4_u32m1_m(vbool8_t mask, vuint32m4_t vector, vuint32m1_t scalar, size_t vl) {
  return __riscv_vredminu(mask, vector, scalar, vl);
}

vuint32m1_t test_vredminu_vs_u32m8_u32m1_m(vbool4_t mask, vuint32m8_t vector, vuint32m1_t scalar, size_t vl) {
  return __riscv_vredminu(mask, vector, scalar, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vredminu\.[ivxfswum.]+\s+} 30 } } */
