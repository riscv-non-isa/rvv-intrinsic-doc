/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint8m1_t test_vredmin_vs_i8mf8_i8m1(vint8mf8_t vector, vint8m1_t scalar, size_t vl) {
  return __riscv_vredmin_vs_i8mf8_i8m1(vector, scalar, vl);
}

vint8m1_t test_vredmin_vs_i8mf4_i8m1(vint8mf4_t vector, vint8m1_t scalar, size_t vl) {
  return __riscv_vredmin_vs_i8mf4_i8m1(vector, scalar, vl);
}

vint8m1_t test_vredmin_vs_i8mf2_i8m1(vint8mf2_t vector, vint8m1_t scalar, size_t vl) {
  return __riscv_vredmin_vs_i8mf2_i8m1(vector, scalar, vl);
}

vint8m1_t test_vredmin_vs_i8m1_i8m1(vint8m1_t vector, vint8m1_t scalar, size_t vl) {
  return __riscv_vredmin_vs_i8m1_i8m1(vector, scalar, vl);
}

vint8m1_t test_vredmin_vs_i8m2_i8m1(vint8m2_t vector, vint8m1_t scalar, size_t vl) {
  return __riscv_vredmin_vs_i8m2_i8m1(vector, scalar, vl);
}

vint8m1_t test_vredmin_vs_i8m4_i8m1(vint8m4_t vector, vint8m1_t scalar, size_t vl) {
  return __riscv_vredmin_vs_i8m4_i8m1(vector, scalar, vl);
}

vint8m1_t test_vredmin_vs_i8m8_i8m1(vint8m8_t vector, vint8m1_t scalar, size_t vl) {
  return __riscv_vredmin_vs_i8m8_i8m1(vector, scalar, vl);
}

vint16m1_t test_vredmin_vs_i16mf4_i16m1(vint16mf4_t vector, vint16m1_t scalar, size_t vl) {
  return __riscv_vredmin_vs_i16mf4_i16m1(vector, scalar, vl);
}

vint16m1_t test_vredmin_vs_i16mf2_i16m1(vint16mf2_t vector, vint16m1_t scalar, size_t vl) {
  return __riscv_vredmin_vs_i16mf2_i16m1(vector, scalar, vl);
}

vint16m1_t test_vredmin_vs_i16m1_i16m1(vint16m1_t vector, vint16m1_t scalar, size_t vl) {
  return __riscv_vredmin_vs_i16m1_i16m1(vector, scalar, vl);
}

vint16m1_t test_vredmin_vs_i16m2_i16m1(vint16m2_t vector, vint16m1_t scalar, size_t vl) {
  return __riscv_vredmin_vs_i16m2_i16m1(vector, scalar, vl);
}

vint16m1_t test_vredmin_vs_i16m4_i16m1(vint16m4_t vector, vint16m1_t scalar, size_t vl) {
  return __riscv_vredmin_vs_i16m4_i16m1(vector, scalar, vl);
}

vint16m1_t test_vredmin_vs_i16m8_i16m1(vint16m8_t vector, vint16m1_t scalar, size_t vl) {
  return __riscv_vredmin_vs_i16m8_i16m1(vector, scalar, vl);
}

vint32m1_t test_vredmin_vs_i32mf2_i32m1(vint32mf2_t vector, vint32m1_t scalar, size_t vl) {
  return __riscv_vredmin_vs_i32mf2_i32m1(vector, scalar, vl);
}

vint32m1_t test_vredmin_vs_i32m1_i32m1(vint32m1_t vector, vint32m1_t scalar, size_t vl) {
  return __riscv_vredmin_vs_i32m1_i32m1(vector, scalar, vl);
}

vint32m1_t test_vredmin_vs_i32m2_i32m1(vint32m2_t vector, vint32m1_t scalar, size_t vl) {
  return __riscv_vredmin_vs_i32m2_i32m1(vector, scalar, vl);
}

vint32m1_t test_vredmin_vs_i32m4_i32m1(vint32m4_t vector, vint32m1_t scalar, size_t vl) {
  return __riscv_vredmin_vs_i32m4_i32m1(vector, scalar, vl);
}

vint32m1_t test_vredmin_vs_i32m8_i32m1(vint32m8_t vector, vint32m1_t scalar, size_t vl) {
  return __riscv_vredmin_vs_i32m8_i32m1(vector, scalar, vl);
}

vint64m1_t test_vredmin_vs_i64m1_i64m1(vint64m1_t vector, vint64m1_t scalar, size_t vl) {
  return __riscv_vredmin_vs_i64m1_i64m1(vector, scalar, vl);
}

vint64m1_t test_vredmin_vs_i64m2_i64m1(vint64m2_t vector, vint64m1_t scalar, size_t vl) {
  return __riscv_vredmin_vs_i64m2_i64m1(vector, scalar, vl);
}

vint64m1_t test_vredmin_vs_i64m4_i64m1(vint64m4_t vector, vint64m1_t scalar, size_t vl) {
  return __riscv_vredmin_vs_i64m4_i64m1(vector, scalar, vl);
}

vint64m1_t test_vredmin_vs_i64m8_i64m1(vint64m8_t vector, vint64m1_t scalar, size_t vl) {
  return __riscv_vredmin_vs_i64m8_i64m1(vector, scalar, vl);
}

vint8m1_t test_vredmin_vs_i8mf8_i8m1_m(vbool64_t mask, vint8mf8_t vector, vint8m1_t scalar, size_t vl) {
  return __riscv_vredmin_vs_i8mf8_i8m1_m(mask, vector, scalar, vl);
}

vint8m1_t test_vredmin_vs_i8mf4_i8m1_m(vbool32_t mask, vint8mf4_t vector, vint8m1_t scalar, size_t vl) {
  return __riscv_vredmin_vs_i8mf4_i8m1_m(mask, vector, scalar, vl);
}

vint8m1_t test_vredmin_vs_i8mf2_i8m1_m(vbool16_t mask, vint8mf2_t vector, vint8m1_t scalar, size_t vl) {
  return __riscv_vredmin_vs_i8mf2_i8m1_m(mask, vector, scalar, vl);
}

vint8m1_t test_vredmin_vs_i8m1_i8m1_m(vbool8_t mask, vint8m1_t vector, vint8m1_t scalar, size_t vl) {
  return __riscv_vredmin_vs_i8m1_i8m1_m(mask, vector, scalar, vl);
}

vint8m1_t test_vredmin_vs_i8m2_i8m1_m(vbool4_t mask, vint8m2_t vector, vint8m1_t scalar, size_t vl) {
  return __riscv_vredmin_vs_i8m2_i8m1_m(mask, vector, scalar, vl);
}

vint8m1_t test_vredmin_vs_i8m4_i8m1_m(vbool2_t mask, vint8m4_t vector, vint8m1_t scalar, size_t vl) {
  return __riscv_vredmin_vs_i8m4_i8m1_m(mask, vector, scalar, vl);
}

vint8m1_t test_vredmin_vs_i8m8_i8m1_m(vbool1_t mask, vint8m8_t vector, vint8m1_t scalar, size_t vl) {
  return __riscv_vredmin_vs_i8m8_i8m1_m(mask, vector, scalar, vl);
}

vint16m1_t test_vredmin_vs_i16mf4_i16m1_m(vbool64_t mask, vint16mf4_t vector, vint16m1_t scalar, size_t vl) {
  return __riscv_vredmin_vs_i16mf4_i16m1_m(mask, vector, scalar, vl);
}

vint16m1_t test_vredmin_vs_i16mf2_i16m1_m(vbool32_t mask, vint16mf2_t vector, vint16m1_t scalar, size_t vl) {
  return __riscv_vredmin_vs_i16mf2_i16m1_m(mask, vector, scalar, vl);
}

vint16m1_t test_vredmin_vs_i16m1_i16m1_m(vbool16_t mask, vint16m1_t vector, vint16m1_t scalar, size_t vl) {
  return __riscv_vredmin_vs_i16m1_i16m1_m(mask, vector, scalar, vl);
}

vint16m1_t test_vredmin_vs_i16m2_i16m1_m(vbool8_t mask, vint16m2_t vector, vint16m1_t scalar, size_t vl) {
  return __riscv_vredmin_vs_i16m2_i16m1_m(mask, vector, scalar, vl);
}

vint16m1_t test_vredmin_vs_i16m4_i16m1_m(vbool4_t mask, vint16m4_t vector, vint16m1_t scalar, size_t vl) {
  return __riscv_vredmin_vs_i16m4_i16m1_m(mask, vector, scalar, vl);
}

vint16m1_t test_vredmin_vs_i16m8_i16m1_m(vbool2_t mask, vint16m8_t vector, vint16m1_t scalar, size_t vl) {
  return __riscv_vredmin_vs_i16m8_i16m1_m(mask, vector, scalar, vl);
}

vint32m1_t test_vredmin_vs_i32mf2_i32m1_m(vbool64_t mask, vint32mf2_t vector, vint32m1_t scalar, size_t vl) {
  return __riscv_vredmin_vs_i32mf2_i32m1_m(mask, vector, scalar, vl);
}

vint32m1_t test_vredmin_vs_i32m1_i32m1_m(vbool32_t mask, vint32m1_t vector, vint32m1_t scalar, size_t vl) {
  return __riscv_vredmin_vs_i32m1_i32m1_m(mask, vector, scalar, vl);
}

vint32m1_t test_vredmin_vs_i32m2_i32m1_m(vbool16_t mask, vint32m2_t vector, vint32m1_t scalar, size_t vl) {
  return __riscv_vredmin_vs_i32m2_i32m1_m(mask, vector, scalar, vl);
}

vint32m1_t test_vredmin_vs_i32m4_i32m1_m(vbool8_t mask, vint32m4_t vector, vint32m1_t scalar, size_t vl) {
  return __riscv_vredmin_vs_i32m4_i32m1_m(mask, vector, scalar, vl);
}

vint32m1_t test_vredmin_vs_i32m8_i32m1_m(vbool4_t mask, vint32m8_t vector, vint32m1_t scalar, size_t vl) {
  return __riscv_vredmin_vs_i32m8_i32m1_m(mask, vector, scalar, vl);
}

vint64m1_t test_vredmin_vs_i64m1_i64m1_m(vbool64_t mask, vint64m1_t vector, vint64m1_t scalar, size_t vl) {
  return __riscv_vredmin_vs_i64m1_i64m1_m(mask, vector, scalar, vl);
}

vint64m1_t test_vredmin_vs_i64m2_i64m1_m(vbool32_t mask, vint64m2_t vector, vint64m1_t scalar, size_t vl) {
  return __riscv_vredmin_vs_i64m2_i64m1_m(mask, vector, scalar, vl);
}

vint64m1_t test_vredmin_vs_i64m4_i64m1_m(vbool16_t mask, vint64m4_t vector, vint64m1_t scalar, size_t vl) {
  return __riscv_vredmin_vs_i64m4_i64m1_m(mask, vector, scalar, vl);
}

vint64m1_t test_vredmin_vs_i64m8_i64m1_m(vbool8_t mask, vint64m8_t vector, vint64m1_t scalar, size_t vl) {
  return __riscv_vredmin_vs_i64m8_i64m1_m(mask, vector, scalar, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*[a-x0-9]+,\s*e[0-9]+,\s*m[f]?[1248],\s*t[au],\s*m[au]\s+vredmin\.[,\sa-x0-9()]+} 44 } } */
