#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint16m1_t test_vwredsum_vs_i8mf8_i16m1(vint16m1_t dest, vint8mf8_t vector, vint16m1_t scalar, size_t vl) {
  return vwredsum(dest, vector, scalar, vl);
}

vint16m1_t test_vwredsum_vs_i8mf4_i16m1(vint16m1_t dest, vint8mf4_t vector, vint16m1_t scalar, size_t vl) {
  return vwredsum(dest, vector, scalar, vl);
}

vint16m1_t test_vwredsum_vs_i8mf2_i16m1(vint16m1_t dest, vint8mf2_t vector, vint16m1_t scalar, size_t vl) {
  return vwredsum(dest, vector, scalar, vl);
}

vint16m1_t test_vwredsum_vs_i8m1_i16m1(vint16m1_t dest, vint8m1_t vector, vint16m1_t scalar, size_t vl) {
  return vwredsum(dest, vector, scalar, vl);
}

vint16m1_t test_vwredsum_vs_i8m2_i16m1(vint16m1_t dest, vint8m2_t vector, vint16m1_t scalar, size_t vl) {
  return vwredsum(dest, vector, scalar, vl);
}

vint16m1_t test_vwredsum_vs_i8m4_i16m1(vint16m1_t dest, vint8m4_t vector, vint16m1_t scalar, size_t vl) {
  return vwredsum(dest, vector, scalar, vl);
}

vint16m1_t test_vwredsum_vs_i8m8_i16m1(vint16m1_t dest, vint8m8_t vector, vint16m1_t scalar, size_t vl) {
  return vwredsum(dest, vector, scalar, vl);
}

vint32m1_t test_vwredsum_vs_i16mf4_i32m1(vint32m1_t dest, vint16mf4_t vector, vint32m1_t scalar, size_t vl) {
  return vwredsum(dest, vector, scalar, vl);
}

vint32m1_t test_vwredsum_vs_i16mf2_i32m1(vint32m1_t dest, vint16mf2_t vector, vint32m1_t scalar, size_t vl) {
  return vwredsum(dest, vector, scalar, vl);
}

vint32m1_t test_vwredsum_vs_i16m1_i32m1(vint32m1_t dest, vint16m1_t vector, vint32m1_t scalar, size_t vl) {
  return vwredsum(dest, vector, scalar, vl);
}

vint32m1_t test_vwredsum_vs_i16m2_i32m1(vint32m1_t dest, vint16m2_t vector, vint32m1_t scalar, size_t vl) {
  return vwredsum(dest, vector, scalar, vl);
}

vint32m1_t test_vwredsum_vs_i16m4_i32m1(vint32m1_t dest, vint16m4_t vector, vint32m1_t scalar, size_t vl) {
  return vwredsum(dest, vector, scalar, vl);
}

vint32m1_t test_vwredsum_vs_i16m8_i32m1(vint32m1_t dest, vint16m8_t vector, vint32m1_t scalar, size_t vl) {
  return vwredsum(dest, vector, scalar, vl);
}

vint64m1_t test_vwredsum_vs_i32mf2_i64m1(vint64m1_t dest, vint32mf2_t vector, vint64m1_t scalar, size_t vl) {
  return vwredsum(dest, vector, scalar, vl);
}

vint64m1_t test_vwredsum_vs_i32m1_i64m1(vint64m1_t dest, vint32m1_t vector, vint64m1_t scalar, size_t vl) {
  return vwredsum(dest, vector, scalar, vl);
}

vint64m1_t test_vwredsum_vs_i32m2_i64m1(vint64m1_t dest, vint32m2_t vector, vint64m1_t scalar, size_t vl) {
  return vwredsum(dest, vector, scalar, vl);
}

vint64m1_t test_vwredsum_vs_i32m4_i64m1(vint64m1_t dest, vint32m4_t vector, vint64m1_t scalar, size_t vl) {
  return vwredsum(dest, vector, scalar, vl);
}

vint64m1_t test_vwredsum_vs_i32m8_i64m1(vint64m1_t dest, vint32m8_t vector, vint64m1_t scalar, size_t vl) {
  return vwredsum(dest, vector, scalar, vl);
}

vint16m1_t test_vwredsum_vs_i8mf8_i16m1_m(vbool64_t mask, vint16m1_t dest, vint8mf8_t vector, vint16m1_t scalar, size_t vl) {
  return vwredsum(mask, dest, vector, scalar, vl);
}

vint16m1_t test_vwredsum_vs_i8mf4_i16m1_m(vbool32_t mask, vint16m1_t dest, vint8mf4_t vector, vint16m1_t scalar, size_t vl) {
  return vwredsum(mask, dest, vector, scalar, vl);
}

vint16m1_t test_vwredsum_vs_i8mf2_i16m1_m(vbool16_t mask, vint16m1_t dest, vint8mf2_t vector, vint16m1_t scalar, size_t vl) {
  return vwredsum(mask, dest, vector, scalar, vl);
}

vint16m1_t test_vwredsum_vs_i8m1_i16m1_m(vbool8_t mask, vint16m1_t dest, vint8m1_t vector, vint16m1_t scalar, size_t vl) {
  return vwredsum(mask, dest, vector, scalar, vl);
}

vint16m1_t test_vwredsum_vs_i8m2_i16m1_m(vbool4_t mask, vint16m1_t dest, vint8m2_t vector, vint16m1_t scalar, size_t vl) {
  return vwredsum(mask, dest, vector, scalar, vl);
}

vint16m1_t test_vwredsum_vs_i8m4_i16m1_m(vbool2_t mask, vint16m1_t dest, vint8m4_t vector, vint16m1_t scalar, size_t vl) {
  return vwredsum(mask, dest, vector, scalar, vl);
}

vint16m1_t test_vwredsum_vs_i8m8_i16m1_m(vbool1_t mask, vint16m1_t dest, vint8m8_t vector, vint16m1_t scalar, size_t vl) {
  return vwredsum(mask, dest, vector, scalar, vl);
}

vint32m1_t test_vwredsum_vs_i16mf4_i32m1_m(vbool64_t mask, vint32m1_t dest, vint16mf4_t vector, vint32m1_t scalar, size_t vl) {
  return vwredsum(mask, dest, vector, scalar, vl);
}

vint32m1_t test_vwredsum_vs_i16mf2_i32m1_m(vbool32_t mask, vint32m1_t dest, vint16mf2_t vector, vint32m1_t scalar, size_t vl) {
  return vwredsum(mask, dest, vector, scalar, vl);
}

vint32m1_t test_vwredsum_vs_i16m1_i32m1_m(vbool16_t mask, vint32m1_t dest, vint16m1_t vector, vint32m1_t scalar, size_t vl) {
  return vwredsum(mask, dest, vector, scalar, vl);
}

vint32m1_t test_vwredsum_vs_i16m2_i32m1_m(vbool8_t mask, vint32m1_t dest, vint16m2_t vector, vint32m1_t scalar, size_t vl) {
  return vwredsum(mask, dest, vector, scalar, vl);
}

vint32m1_t test_vwredsum_vs_i16m4_i32m1_m(vbool4_t mask, vint32m1_t dest, vint16m4_t vector, vint32m1_t scalar, size_t vl) {
  return vwredsum(mask, dest, vector, scalar, vl);
}

vint32m1_t test_vwredsum_vs_i16m8_i32m1_m(vbool2_t mask, vint32m1_t dest, vint16m8_t vector, vint32m1_t scalar, size_t vl) {
  return vwredsum(mask, dest, vector, scalar, vl);
}

vint64m1_t test_vwredsum_vs_i32mf2_i64m1_m(vbool64_t mask, vint64m1_t dest, vint32mf2_t vector, vint64m1_t scalar, size_t vl) {
  return vwredsum(mask, dest, vector, scalar, vl);
}

vint64m1_t test_vwredsum_vs_i32m1_i64m1_m(vbool32_t mask, vint64m1_t dest, vint32m1_t vector, vint64m1_t scalar, size_t vl) {
  return vwredsum(mask, dest, vector, scalar, vl);
}

vint64m1_t test_vwredsum_vs_i32m2_i64m1_m(vbool16_t mask, vint64m1_t dest, vint32m2_t vector, vint64m1_t scalar, size_t vl) {
  return vwredsum(mask, dest, vector, scalar, vl);
}

vint64m1_t test_vwredsum_vs_i32m4_i64m1_m(vbool8_t mask, vint64m1_t dest, vint32m4_t vector, vint64m1_t scalar, size_t vl) {
  return vwredsum(mask, dest, vector, scalar, vl);
}

vint64m1_t test_vwredsum_vs_i32m8_i64m1_m(vbool4_t mask, vint64m1_t dest, vint32m8_t vector, vint64m1_t scalar, size_t vl) {
  return vwredsum(mask, dest, vector, scalar, vl);
}

