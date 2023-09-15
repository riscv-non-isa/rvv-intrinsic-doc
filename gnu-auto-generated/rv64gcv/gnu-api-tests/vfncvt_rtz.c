/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include "riscv_vector.h"

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint16mf4_t test_vfncvt_rtz_x_f_w_i16mf4(vfloat32mf2_t src, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i16mf4(src, vl);
}

vint16mf2_t test_vfncvt_rtz_x_f_w_i16mf2(vfloat32m1_t src, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i16mf2(src, vl);
}

vint16m1_t test_vfncvt_rtz_x_f_w_i16m1(vfloat32m2_t src, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i16m1(src, vl);
}

vint16m2_t test_vfncvt_rtz_x_f_w_i16m2(vfloat32m4_t src, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i16m2(src, vl);
}

vint16m4_t test_vfncvt_rtz_x_f_w_i16m4(vfloat32m8_t src, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i16m4(src, vl);
}

vuint16mf4_t test_vfncvt_rtz_xu_f_w_u16mf4(vfloat32mf2_t src, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u16mf4(src, vl);
}

vuint16mf2_t test_vfncvt_rtz_xu_f_w_u16mf2(vfloat32m1_t src, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u16mf2(src, vl);
}

vuint16m1_t test_vfncvt_rtz_xu_f_w_u16m1(vfloat32m2_t src, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u16m1(src, vl);
}

vuint16m2_t test_vfncvt_rtz_xu_f_w_u16m2(vfloat32m4_t src, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u16m2(src, vl);
}

vuint16m4_t test_vfncvt_rtz_xu_f_w_u16m4(vfloat32m8_t src, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u16m4(src, vl);
}

vint32mf2_t test_vfncvt_rtz_x_f_w_i32mf2(vfloat64m1_t src, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i32mf2(src, vl);
}

vint32m1_t test_vfncvt_rtz_x_f_w_i32m1(vfloat64m2_t src, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i32m1(src, vl);
}

vint32m2_t test_vfncvt_rtz_x_f_w_i32m2(vfloat64m4_t src, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i32m2(src, vl);
}

vint32m4_t test_vfncvt_rtz_x_f_w_i32m4(vfloat64m8_t src, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i32m4(src, vl);
}

vuint32mf2_t test_vfncvt_rtz_xu_f_w_u32mf2(vfloat64m1_t src, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u32mf2(src, vl);
}

vuint32m1_t test_vfncvt_rtz_xu_f_w_u32m1(vfloat64m2_t src, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u32m1(src, vl);
}

vuint32m2_t test_vfncvt_rtz_xu_f_w_u32m2(vfloat64m4_t src, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u32m2(src, vl);
}

vuint32m4_t test_vfncvt_rtz_xu_f_w_u32m4(vfloat64m8_t src, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u32m4(src, vl);
}

vint16mf4_t test_vfncvt_rtz_x_f_w_i16mf4_m(vbool64_t mask, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i16mf4_m(mask, src, vl);
}

vint16mf2_t test_vfncvt_rtz_x_f_w_i16mf2_m(vbool32_t mask, vfloat32m1_t src, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i16mf2_m(mask, src, vl);
}

vint16m1_t test_vfncvt_rtz_x_f_w_i16m1_m(vbool16_t mask, vfloat32m2_t src, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i16m1_m(mask, src, vl);
}

vint16m2_t test_vfncvt_rtz_x_f_w_i16m2_m(vbool8_t mask, vfloat32m4_t src, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i16m2_m(mask, src, vl);
}

vint16m4_t test_vfncvt_rtz_x_f_w_i16m4_m(vbool4_t mask, vfloat32m8_t src, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i16m4_m(mask, src, vl);
}

vuint16mf4_t test_vfncvt_rtz_xu_f_w_u16mf4_m(vbool64_t mask, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u16mf4_m(mask, src, vl);
}

vuint16mf2_t test_vfncvt_rtz_xu_f_w_u16mf2_m(vbool32_t mask, vfloat32m1_t src, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u16mf2_m(mask, src, vl);
}

vuint16m1_t test_vfncvt_rtz_xu_f_w_u16m1_m(vbool16_t mask, vfloat32m2_t src, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u16m1_m(mask, src, vl);
}

vuint16m2_t test_vfncvt_rtz_xu_f_w_u16m2_m(vbool8_t mask, vfloat32m4_t src, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u16m2_m(mask, src, vl);
}

vuint16m4_t test_vfncvt_rtz_xu_f_w_u16m4_m(vbool4_t mask, vfloat32m8_t src, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u16m4_m(mask, src, vl);
}

vint32mf2_t test_vfncvt_rtz_x_f_w_i32mf2_m(vbool64_t mask, vfloat64m1_t src, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i32mf2_m(mask, src, vl);
}

vint32m1_t test_vfncvt_rtz_x_f_w_i32m1_m(vbool32_t mask, vfloat64m2_t src, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i32m1_m(mask, src, vl);
}

vint32m2_t test_vfncvt_rtz_x_f_w_i32m2_m(vbool16_t mask, vfloat64m4_t src, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i32m2_m(mask, src, vl);
}

vint32m4_t test_vfncvt_rtz_x_f_w_i32m4_m(vbool8_t mask, vfloat64m8_t src, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i32m4_m(mask, src, vl);
}

vuint32mf2_t test_vfncvt_rtz_xu_f_w_u32mf2_m(vbool64_t mask, vfloat64m1_t src, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u32mf2_m(mask, src, vl);
}

vuint32m1_t test_vfncvt_rtz_xu_f_w_u32m1_m(vbool32_t mask, vfloat64m2_t src, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u32m1_m(mask, src, vl);
}

vuint32m2_t test_vfncvt_rtz_xu_f_w_u32m2_m(vbool16_t mask, vfloat64m4_t src, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u32m2_m(mask, src, vl);
}

vuint32m4_t test_vfncvt_rtz_xu_f_w_u32m4_m(vbool8_t mask, vfloat64m8_t src, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u32m4_m(mask, src, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vfncvt\.rtz[ivxfswum.]*\s+} 36 } } */
