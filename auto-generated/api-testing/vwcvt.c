#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

vint16mf4_t test_vwcvt_x_x_v_i16mf4(vint8mf8_t src, size_t vl) {
  return __riscv_vwcvt_x_x_v_i16mf4(src, vl);
}

vint16mf2_t test_vwcvt_x_x_v_i16mf2(vint8mf4_t src, size_t vl) {
  return __riscv_vwcvt_x_x_v_i16mf2(src, vl);
}

vint16m1_t test_vwcvt_x_x_v_i16m1(vint8mf2_t src, size_t vl) {
  return __riscv_vwcvt_x_x_v_i16m1(src, vl);
}

vint16m2_t test_vwcvt_x_x_v_i16m2(vint8m1_t src, size_t vl) {
  return __riscv_vwcvt_x_x_v_i16m2(src, vl);
}

vint16m4_t test_vwcvt_x_x_v_i16m4(vint8m2_t src, size_t vl) {
  return __riscv_vwcvt_x_x_v_i16m4(src, vl);
}

vint16m8_t test_vwcvt_x_x_v_i16m8(vint8m4_t src, size_t vl) {
  return __riscv_vwcvt_x_x_v_i16m8(src, vl);
}

vint32mf2_t test_vwcvt_x_x_v_i32mf2(vint16mf4_t src, size_t vl) {
  return __riscv_vwcvt_x_x_v_i32mf2(src, vl);
}

vint32m1_t test_vwcvt_x_x_v_i32m1(vint16mf2_t src, size_t vl) {
  return __riscv_vwcvt_x_x_v_i32m1(src, vl);
}

vint32m2_t test_vwcvt_x_x_v_i32m2(vint16m1_t src, size_t vl) {
  return __riscv_vwcvt_x_x_v_i32m2(src, vl);
}

vint32m4_t test_vwcvt_x_x_v_i32m4(vint16m2_t src, size_t vl) {
  return __riscv_vwcvt_x_x_v_i32m4(src, vl);
}

vint32m8_t test_vwcvt_x_x_v_i32m8(vint16m4_t src, size_t vl) {
  return __riscv_vwcvt_x_x_v_i32m8(src, vl);
}

vint64m1_t test_vwcvt_x_x_v_i64m1(vint32mf2_t src, size_t vl) {
  return __riscv_vwcvt_x_x_v_i64m1(src, vl);
}

vint64m2_t test_vwcvt_x_x_v_i64m2(vint32m1_t src, size_t vl) {
  return __riscv_vwcvt_x_x_v_i64m2(src, vl);
}

vint64m4_t test_vwcvt_x_x_v_i64m4(vint32m2_t src, size_t vl) {
  return __riscv_vwcvt_x_x_v_i64m4(src, vl);
}

vint64m8_t test_vwcvt_x_x_v_i64m8(vint32m4_t src, size_t vl) {
  return __riscv_vwcvt_x_x_v_i64m8(src, vl);
}

vint16mf4_t test_vwcvt_x_x_v_i16mf4_m(vbool64_t mask, vint8mf8_t src, size_t vl) {
  return __riscv_vwcvt_x_x_v_i16mf4_m(mask, src, vl);
}

vint16mf2_t test_vwcvt_x_x_v_i16mf2_m(vbool32_t mask, vint8mf4_t src, size_t vl) {
  return __riscv_vwcvt_x_x_v_i16mf2_m(mask, src, vl);
}

vint16m1_t test_vwcvt_x_x_v_i16m1_m(vbool16_t mask, vint8mf2_t src, size_t vl) {
  return __riscv_vwcvt_x_x_v_i16m1_m(mask, src, vl);
}

vint16m2_t test_vwcvt_x_x_v_i16m2_m(vbool8_t mask, vint8m1_t src, size_t vl) {
  return __riscv_vwcvt_x_x_v_i16m2_m(mask, src, vl);
}

vint16m4_t test_vwcvt_x_x_v_i16m4_m(vbool4_t mask, vint8m2_t src, size_t vl) {
  return __riscv_vwcvt_x_x_v_i16m4_m(mask, src, vl);
}

vint16m8_t test_vwcvt_x_x_v_i16m8_m(vbool2_t mask, vint8m4_t src, size_t vl) {
  return __riscv_vwcvt_x_x_v_i16m8_m(mask, src, vl);
}

vint32mf2_t test_vwcvt_x_x_v_i32mf2_m(vbool64_t mask, vint16mf4_t src, size_t vl) {
  return __riscv_vwcvt_x_x_v_i32mf2_m(mask, src, vl);
}

vint32m1_t test_vwcvt_x_x_v_i32m1_m(vbool32_t mask, vint16mf2_t src, size_t vl) {
  return __riscv_vwcvt_x_x_v_i32m1_m(mask, src, vl);
}

vint32m2_t test_vwcvt_x_x_v_i32m2_m(vbool16_t mask, vint16m1_t src, size_t vl) {
  return __riscv_vwcvt_x_x_v_i32m2_m(mask, src, vl);
}

vint32m4_t test_vwcvt_x_x_v_i32m4_m(vbool8_t mask, vint16m2_t src, size_t vl) {
  return __riscv_vwcvt_x_x_v_i32m4_m(mask, src, vl);
}

vint32m8_t test_vwcvt_x_x_v_i32m8_m(vbool4_t mask, vint16m4_t src, size_t vl) {
  return __riscv_vwcvt_x_x_v_i32m8_m(mask, src, vl);
}

vint64m1_t test_vwcvt_x_x_v_i64m1_m(vbool64_t mask, vint32mf2_t src, size_t vl) {
  return __riscv_vwcvt_x_x_v_i64m1_m(mask, src, vl);
}

vint64m2_t test_vwcvt_x_x_v_i64m2_m(vbool32_t mask, vint32m1_t src, size_t vl) {
  return __riscv_vwcvt_x_x_v_i64m2_m(mask, src, vl);
}

vint64m4_t test_vwcvt_x_x_v_i64m4_m(vbool16_t mask, vint32m2_t src, size_t vl) {
  return __riscv_vwcvt_x_x_v_i64m4_m(mask, src, vl);
}

vint64m8_t test_vwcvt_x_x_v_i64m8_m(vbool8_t mask, vint32m4_t src, size_t vl) {
  return __riscv_vwcvt_x_x_v_i64m8_m(mask, src, vl);
}
