/* { dg-do compile } */
/* { dg-options "-march=rv32gc_zve32x -mabi=ilp32d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include "riscv_vector.h"

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint16mf2_t test_vwsub_vv_i16mf2(vint8mf4_t op1, vint8mf4_t op2, size_t vl) {
  return __riscv_vwsub_vv(op1, op2, vl);
}

vint16mf2_t test_vwsub_vx_i16mf2(vint8mf4_t op1, int8_t op2, size_t vl) {
  return __riscv_vwsub_vx(op1, op2, vl);
}

vint16mf2_t test_vwsub_wv_i16mf2(vint16mf2_t op1, vint8mf4_t op2, size_t vl) {
  return __riscv_vwsub_wv(op1, op2, vl);
}

vint16mf2_t test_vwsub_wx_i16mf2(vint16mf2_t op1, int8_t op2, size_t vl) {
  return __riscv_vwsub_wx(op1, op2, vl);
}

vint16m1_t test_vwsub_vv_i16m1(vint8mf2_t op1, vint8mf2_t op2, size_t vl) {
  return __riscv_vwsub_vv(op1, op2, vl);
}

vint16m1_t test_vwsub_vx_i16m1(vint8mf2_t op1, int8_t op2, size_t vl) {
  return __riscv_vwsub_vx(op1, op2, vl);
}

vint16m1_t test_vwsub_wv_i16m1(vint16m1_t op1, vint8mf2_t op2, size_t vl) {
  return __riscv_vwsub_wv(op1, op2, vl);
}

vint16m1_t test_vwsub_wx_i16m1(vint16m1_t op1, int8_t op2, size_t vl) {
  return __riscv_vwsub_wx(op1, op2, vl);
}

vint16m2_t test_vwsub_vv_i16m2(vint8m1_t op1, vint8m1_t op2, size_t vl) {
  return __riscv_vwsub_vv(op1, op2, vl);
}

vint16m2_t test_vwsub_vx_i16m2(vint8m1_t op1, int8_t op2, size_t vl) {
  return __riscv_vwsub_vx(op1, op2, vl);
}

vint16m2_t test_vwsub_wv_i16m2(vint16m2_t op1, vint8m1_t op2, size_t vl) {
  return __riscv_vwsub_wv(op1, op2, vl);
}

vint16m2_t test_vwsub_wx_i16m2(vint16m2_t op1, int8_t op2, size_t vl) {
  return __riscv_vwsub_wx(op1, op2, vl);
}

vint16m4_t test_vwsub_vv_i16m4(vint8m2_t op1, vint8m2_t op2, size_t vl) {
  return __riscv_vwsub_vv(op1, op2, vl);
}

vint16m4_t test_vwsub_vx_i16m4(vint8m2_t op1, int8_t op2, size_t vl) {
  return __riscv_vwsub_vx(op1, op2, vl);
}

vint16m4_t test_vwsub_wv_i16m4(vint16m4_t op1, vint8m2_t op2, size_t vl) {
  return __riscv_vwsub_wv(op1, op2, vl);
}

vint16m4_t test_vwsub_wx_i16m4(vint16m4_t op1, int8_t op2, size_t vl) {
  return __riscv_vwsub_wx(op1, op2, vl);
}

vint16m8_t test_vwsub_vv_i16m8(vint8m4_t op1, vint8m4_t op2, size_t vl) {
  return __riscv_vwsub_vv(op1, op2, vl);
}

vint16m8_t test_vwsub_vx_i16m8(vint8m4_t op1, int8_t op2, size_t vl) {
  return __riscv_vwsub_vx(op1, op2, vl);
}

vint16m8_t test_vwsub_wv_i16m8(vint16m8_t op1, vint8m4_t op2, size_t vl) {
  return __riscv_vwsub_wv(op1, op2, vl);
}

vint16m8_t test_vwsub_wx_i16m8(vint16m8_t op1, int8_t op2, size_t vl) {
  return __riscv_vwsub_wx(op1, op2, vl);
}

vint32m1_t test_vwsub_vv_i32m1(vint16mf2_t op1, vint16mf2_t op2, size_t vl) {
  return __riscv_vwsub_vv(op1, op2, vl);
}

vint32m1_t test_vwsub_vx_i32m1(vint16mf2_t op1, int16_t op2, size_t vl) {
  return __riscv_vwsub_vx(op1, op2, vl);
}

vint32m1_t test_vwsub_wv_i32m1(vint32m1_t op1, vint16mf2_t op2, size_t vl) {
  return __riscv_vwsub_wv(op1, op2, vl);
}

vint32m1_t test_vwsub_wx_i32m1(vint32m1_t op1, int16_t op2, size_t vl) {
  return __riscv_vwsub_wx(op1, op2, vl);
}

vint32m2_t test_vwsub_vv_i32m2(vint16m1_t op1, vint16m1_t op2, size_t vl) {
  return __riscv_vwsub_vv(op1, op2, vl);
}

vint32m2_t test_vwsub_vx_i32m2(vint16m1_t op1, int16_t op2, size_t vl) {
  return __riscv_vwsub_vx(op1, op2, vl);
}

vint32m2_t test_vwsub_wv_i32m2(vint32m2_t op1, vint16m1_t op2, size_t vl) {
  return __riscv_vwsub_wv(op1, op2, vl);
}

vint32m2_t test_vwsub_wx_i32m2(vint32m2_t op1, int16_t op2, size_t vl) {
  return __riscv_vwsub_wx(op1, op2, vl);
}

vint32m4_t test_vwsub_vv_i32m4(vint16m2_t op1, vint16m2_t op2, size_t vl) {
  return __riscv_vwsub_vv(op1, op2, vl);
}

vint32m4_t test_vwsub_vx_i32m4(vint16m2_t op1, int16_t op2, size_t vl) {
  return __riscv_vwsub_vx(op1, op2, vl);
}

vint32m4_t test_vwsub_wv_i32m4(vint32m4_t op1, vint16m2_t op2, size_t vl) {
  return __riscv_vwsub_wv(op1, op2, vl);
}

vint32m4_t test_vwsub_wx_i32m4(vint32m4_t op1, int16_t op2, size_t vl) {
  return __riscv_vwsub_wx(op1, op2, vl);
}

vint32m8_t test_vwsub_vv_i32m8(vint16m4_t op1, vint16m4_t op2, size_t vl) {
  return __riscv_vwsub_vv(op1, op2, vl);
}

vint32m8_t test_vwsub_vx_i32m8(vint16m4_t op1, int16_t op2, size_t vl) {
  return __riscv_vwsub_vx(op1, op2, vl);
}

vint32m8_t test_vwsub_wv_i32m8(vint32m8_t op1, vint16m4_t op2, size_t vl) {
  return __riscv_vwsub_wv(op1, op2, vl);
}

vint32m8_t test_vwsub_wx_i32m8(vint32m8_t op1, int16_t op2, size_t vl) {
  return __riscv_vwsub_wx(op1, op2, vl);
}

vint16mf2_t test_vwsub_vv_i16mf2_m(vbool32_t mask, vint8mf4_t op1, vint8mf4_t op2, size_t vl) {
  return __riscv_vwsub_vv(mask, op1, op2, vl);
}

vint16mf2_t test_vwsub_vx_i16mf2_m(vbool32_t mask, vint8mf4_t op1, int8_t op2, size_t vl) {
  return __riscv_vwsub_vx(mask, op1, op2, vl);
}

vint16mf2_t test_vwsub_wv_i16mf2_m(vbool32_t mask, vint16mf2_t op1, vint8mf4_t op2, size_t vl) {
  return __riscv_vwsub_wv(mask, op1, op2, vl);
}

vint16mf2_t test_vwsub_wx_i16mf2_m(vbool32_t mask, vint16mf2_t op1, int8_t op2, size_t vl) {
  return __riscv_vwsub_wx(mask, op1, op2, vl);
}

vint16m1_t test_vwsub_vv_i16m1_m(vbool16_t mask, vint8mf2_t op1, vint8mf2_t op2, size_t vl) {
  return __riscv_vwsub_vv(mask, op1, op2, vl);
}

vint16m1_t test_vwsub_vx_i16m1_m(vbool16_t mask, vint8mf2_t op1, int8_t op2, size_t vl) {
  return __riscv_vwsub_vx(mask, op1, op2, vl);
}

vint16m1_t test_vwsub_wv_i16m1_m(vbool16_t mask, vint16m1_t op1, vint8mf2_t op2, size_t vl) {
  return __riscv_vwsub_wv(mask, op1, op2, vl);
}

vint16m1_t test_vwsub_wx_i16m1_m(vbool16_t mask, vint16m1_t op1, int8_t op2, size_t vl) {
  return __riscv_vwsub_wx(mask, op1, op2, vl);
}

vint16m2_t test_vwsub_vv_i16m2_m(vbool8_t mask, vint8m1_t op1, vint8m1_t op2, size_t vl) {
  return __riscv_vwsub_vv(mask, op1, op2, vl);
}

vint16m2_t test_vwsub_vx_i16m2_m(vbool8_t mask, vint8m1_t op1, int8_t op2, size_t vl) {
  return __riscv_vwsub_vx(mask, op1, op2, vl);
}

vint16m2_t test_vwsub_wv_i16m2_m(vbool8_t mask, vint16m2_t op1, vint8m1_t op2, size_t vl) {
  return __riscv_vwsub_wv(mask, op1, op2, vl);
}

vint16m2_t test_vwsub_wx_i16m2_m(vbool8_t mask, vint16m2_t op1, int8_t op2, size_t vl) {
  return __riscv_vwsub_wx(mask, op1, op2, vl);
}

vint16m4_t test_vwsub_vv_i16m4_m(vbool4_t mask, vint8m2_t op1, vint8m2_t op2, size_t vl) {
  return __riscv_vwsub_vv(mask, op1, op2, vl);
}

vint16m4_t test_vwsub_vx_i16m4_m(vbool4_t mask, vint8m2_t op1, int8_t op2, size_t vl) {
  return __riscv_vwsub_vx(mask, op1, op2, vl);
}

vint16m4_t test_vwsub_wv_i16m4_m(vbool4_t mask, vint16m4_t op1, vint8m2_t op2, size_t vl) {
  return __riscv_vwsub_wv(mask, op1, op2, vl);
}

vint16m4_t test_vwsub_wx_i16m4_m(vbool4_t mask, vint16m4_t op1, int8_t op2, size_t vl) {
  return __riscv_vwsub_wx(mask, op1, op2, vl);
}

vint16m8_t test_vwsub_vv_i16m8_m(vbool2_t mask, vint8m4_t op1, vint8m4_t op2, size_t vl) {
  return __riscv_vwsub_vv(mask, op1, op2, vl);
}

vint16m8_t test_vwsub_vx_i16m8_m(vbool2_t mask, vint8m4_t op1, int8_t op2, size_t vl) {
  return __riscv_vwsub_vx(mask, op1, op2, vl);
}

vint16m8_t test_vwsub_wv_i16m8_m(vbool2_t mask, vint16m8_t op1, vint8m4_t op2, size_t vl) {
  return __riscv_vwsub_wv(mask, op1, op2, vl);
}

vint16m8_t test_vwsub_wx_i16m8_m(vbool2_t mask, vint16m8_t op1, int8_t op2, size_t vl) {
  return __riscv_vwsub_wx(mask, op1, op2, vl);
}

vint32m1_t test_vwsub_vv_i32m1_m(vbool32_t mask, vint16mf2_t op1, vint16mf2_t op2, size_t vl) {
  return __riscv_vwsub_vv(mask, op1, op2, vl);
}

vint32m1_t test_vwsub_vx_i32m1_m(vbool32_t mask, vint16mf2_t op1, int16_t op2, size_t vl) {
  return __riscv_vwsub_vx(mask, op1, op2, vl);
}

vint32m1_t test_vwsub_wv_i32m1_m(vbool32_t mask, vint32m1_t op1, vint16mf2_t op2, size_t vl) {
  return __riscv_vwsub_wv(mask, op1, op2, vl);
}

vint32m1_t test_vwsub_wx_i32m1_m(vbool32_t mask, vint32m1_t op1, int16_t op2, size_t vl) {
  return __riscv_vwsub_wx(mask, op1, op2, vl);
}

vint32m2_t test_vwsub_vv_i32m2_m(vbool16_t mask, vint16m1_t op1, vint16m1_t op2, size_t vl) {
  return __riscv_vwsub_vv(mask, op1, op2, vl);
}

vint32m2_t test_vwsub_vx_i32m2_m(vbool16_t mask, vint16m1_t op1, int16_t op2, size_t vl) {
  return __riscv_vwsub_vx(mask, op1, op2, vl);
}

vint32m2_t test_vwsub_wv_i32m2_m(vbool16_t mask, vint32m2_t op1, vint16m1_t op2, size_t vl) {
  return __riscv_vwsub_wv(mask, op1, op2, vl);
}

vint32m2_t test_vwsub_wx_i32m2_m(vbool16_t mask, vint32m2_t op1, int16_t op2, size_t vl) {
  return __riscv_vwsub_wx(mask, op1, op2, vl);
}

vint32m4_t test_vwsub_vv_i32m4_m(vbool8_t mask, vint16m2_t op1, vint16m2_t op2, size_t vl) {
  return __riscv_vwsub_vv(mask, op1, op2, vl);
}

vint32m4_t test_vwsub_vx_i32m4_m(vbool8_t mask, vint16m2_t op1, int16_t op2, size_t vl) {
  return __riscv_vwsub_vx(mask, op1, op2, vl);
}

vint32m4_t test_vwsub_wv_i32m4_m(vbool8_t mask, vint32m4_t op1, vint16m2_t op2, size_t vl) {
  return __riscv_vwsub_wv(mask, op1, op2, vl);
}

vint32m4_t test_vwsub_wx_i32m4_m(vbool8_t mask, vint32m4_t op1, int16_t op2, size_t vl) {
  return __riscv_vwsub_wx(mask, op1, op2, vl);
}

vint32m8_t test_vwsub_vv_i32m8_m(vbool4_t mask, vint16m4_t op1, vint16m4_t op2, size_t vl) {
  return __riscv_vwsub_vv(mask, op1, op2, vl);
}

vint32m8_t test_vwsub_vx_i32m8_m(vbool4_t mask, vint16m4_t op1, int16_t op2, size_t vl) {
  return __riscv_vwsub_vx(mask, op1, op2, vl);
}

vint32m8_t test_vwsub_wv_i32m8_m(vbool4_t mask, vint32m8_t op1, vint16m4_t op2, size_t vl) {
  return __riscv_vwsub_wv(mask, op1, op2, vl);
}

vint32m8_t test_vwsub_wx_i32m8_m(vbool4_t mask, vint32m8_t op1, int16_t op2, size_t vl) {
  return __riscv_vwsub_wx(mask, op1, op2, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+v[w]?sub\.[ivxfswum.]+\s+} 72 } } */
