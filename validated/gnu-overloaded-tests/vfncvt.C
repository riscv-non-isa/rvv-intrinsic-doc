/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint16mf4_t test_vfncvt_x_f_w_i16mf4(vfloat32mf2_t src, size_t vl) {
  return __riscv_vfncvt_x(src, vl);
}

vint16mf2_t test_vfncvt_x_f_w_i16mf2(vfloat32m1_t src, size_t vl) {
  return __riscv_vfncvt_x(src, vl);
}

vint16m1_t test_vfncvt_x_f_w_i16m1(vfloat32m2_t src, size_t vl) {
  return __riscv_vfncvt_x(src, vl);
}

vint16m2_t test_vfncvt_x_f_w_i16m2(vfloat32m4_t src, size_t vl) {
  return __riscv_vfncvt_x(src, vl);
}

vint16m4_t test_vfncvt_x_f_w_i16m4(vfloat32m8_t src, size_t vl) {
  return __riscv_vfncvt_x(src, vl);
}

vuint16mf4_t test_vfncvt_xu_f_w_u16mf4(vfloat32mf2_t src, size_t vl) {
  return __riscv_vfncvt_xu(src, vl);
}

vuint16mf2_t test_vfncvt_xu_f_w_u16mf2(vfloat32m1_t src, size_t vl) {
  return __riscv_vfncvt_xu(src, vl);
}

vuint16m1_t test_vfncvt_xu_f_w_u16m1(vfloat32m2_t src, size_t vl) {
  return __riscv_vfncvt_xu(src, vl);
}

vuint16m2_t test_vfncvt_xu_f_w_u16m2(vfloat32m4_t src, size_t vl) {
  return __riscv_vfncvt_xu(src, vl);
}

vuint16m4_t test_vfncvt_xu_f_w_u16m4(vfloat32m8_t src, size_t vl) {
  return __riscv_vfncvt_xu(src, vl);
}

vint32mf2_t test_vfncvt_x_f_w_i32mf2(vfloat64m1_t src, size_t vl) {
  return __riscv_vfncvt_x(src, vl);
}

vint32m1_t test_vfncvt_x_f_w_i32m1(vfloat64m2_t src, size_t vl) {
  return __riscv_vfncvt_x(src, vl);
}

vint32m2_t test_vfncvt_x_f_w_i32m2(vfloat64m4_t src, size_t vl) {
  return __riscv_vfncvt_x(src, vl);
}

vint32m4_t test_vfncvt_x_f_w_i32m4(vfloat64m8_t src, size_t vl) {
  return __riscv_vfncvt_x(src, vl);
}

vuint32mf2_t test_vfncvt_xu_f_w_u32mf2(vfloat64m1_t src, size_t vl) {
  return __riscv_vfncvt_xu(src, vl);
}

vuint32m1_t test_vfncvt_xu_f_w_u32m1(vfloat64m2_t src, size_t vl) {
  return __riscv_vfncvt_xu(src, vl);
}

vuint32m2_t test_vfncvt_xu_f_w_u32m2(vfloat64m4_t src, size_t vl) {
  return __riscv_vfncvt_xu(src, vl);
}

vuint32m4_t test_vfncvt_xu_f_w_u32m4(vfloat64m8_t src, size_t vl) {
  return __riscv_vfncvt_xu(src, vl);
}

vfloat32mf2_t test_vfncvt_f_x_w_f32mf2(vint64m1_t src, size_t vl) {
  return __riscv_vfncvt_f(src, vl);
}

vfloat32m1_t test_vfncvt_f_x_w_f32m1(vint64m2_t src, size_t vl) {
  return __riscv_vfncvt_f(src, vl);
}

vfloat32m2_t test_vfncvt_f_x_w_f32m2(vint64m4_t src, size_t vl) {
  return __riscv_vfncvt_f(src, vl);
}

vfloat32m4_t test_vfncvt_f_x_w_f32m4(vint64m8_t src, size_t vl) {
  return __riscv_vfncvt_f(src, vl);
}

vfloat32mf2_t test_vfncvt_f_xu_w_f32mf2(vuint64m1_t src, size_t vl) {
  return __riscv_vfncvt_f(src, vl);
}

vfloat32m1_t test_vfncvt_f_xu_w_f32m1(vuint64m2_t src, size_t vl) {
  return __riscv_vfncvt_f(src, vl);
}

vfloat32m2_t test_vfncvt_f_xu_w_f32m2(vuint64m4_t src, size_t vl) {
  return __riscv_vfncvt_f(src, vl);
}

vfloat32m4_t test_vfncvt_f_xu_w_f32m4(vuint64m8_t src, size_t vl) {
  return __riscv_vfncvt_f(src, vl);
}

vfloat32mf2_t test_vfncvt_f_f_w_f32mf2(vfloat64m1_t src, size_t vl) {
  return __riscv_vfncvt_f(src, vl);
}

vfloat32m1_t test_vfncvt_f_f_w_f32m1(vfloat64m2_t src, size_t vl) {
  return __riscv_vfncvt_f(src, vl);
}

vfloat32m2_t test_vfncvt_f_f_w_f32m2(vfloat64m4_t src, size_t vl) {
  return __riscv_vfncvt_f(src, vl);
}

vfloat32m4_t test_vfncvt_f_f_w_f32m4(vfloat64m8_t src, size_t vl) {
  return __riscv_vfncvt_f(src, vl);
}

vint16mf4_t test_vfncvt_x_f_w_i16mf4_m(vbool64_t mask, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfncvt_x(mask, src, vl);
}

vint16mf2_t test_vfncvt_x_f_w_i16mf2_m(vbool32_t mask, vfloat32m1_t src, size_t vl) {
  return __riscv_vfncvt_x(mask, src, vl);
}

vint16m1_t test_vfncvt_x_f_w_i16m1_m(vbool16_t mask, vfloat32m2_t src, size_t vl) {
  return __riscv_vfncvt_x(mask, src, vl);
}

vint16m2_t test_vfncvt_x_f_w_i16m2_m(vbool8_t mask, vfloat32m4_t src, size_t vl) {
  return __riscv_vfncvt_x(mask, src, vl);
}

vint16m4_t test_vfncvt_x_f_w_i16m4_m(vbool4_t mask, vfloat32m8_t src, size_t vl) {
  return __riscv_vfncvt_x(mask, src, vl);
}

vuint16mf4_t test_vfncvt_xu_f_w_u16mf4_m(vbool64_t mask, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfncvt_xu(mask, src, vl);
}

vuint16mf2_t test_vfncvt_xu_f_w_u16mf2_m(vbool32_t mask, vfloat32m1_t src, size_t vl) {
  return __riscv_vfncvt_xu(mask, src, vl);
}

vuint16m1_t test_vfncvt_xu_f_w_u16m1_m(vbool16_t mask, vfloat32m2_t src, size_t vl) {
  return __riscv_vfncvt_xu(mask, src, vl);
}

vuint16m2_t test_vfncvt_xu_f_w_u16m2_m(vbool8_t mask, vfloat32m4_t src, size_t vl) {
  return __riscv_vfncvt_xu(mask, src, vl);
}

vuint16m4_t test_vfncvt_xu_f_w_u16m4_m(vbool4_t mask, vfloat32m8_t src, size_t vl) {
  return __riscv_vfncvt_xu(mask, src, vl);
}

vint32mf2_t test_vfncvt_x_f_w_i32mf2_m(vbool64_t mask, vfloat64m1_t src, size_t vl) {
  return __riscv_vfncvt_x(mask, src, vl);
}

vint32m1_t test_vfncvt_x_f_w_i32m1_m(vbool32_t mask, vfloat64m2_t src, size_t vl) {
  return __riscv_vfncvt_x(mask, src, vl);
}

vint32m2_t test_vfncvt_x_f_w_i32m2_m(vbool16_t mask, vfloat64m4_t src, size_t vl) {
  return __riscv_vfncvt_x(mask, src, vl);
}

vint32m4_t test_vfncvt_x_f_w_i32m4_m(vbool8_t mask, vfloat64m8_t src, size_t vl) {
  return __riscv_vfncvt_x(mask, src, vl);
}

vuint32mf2_t test_vfncvt_xu_f_w_u32mf2_m(vbool64_t mask, vfloat64m1_t src, size_t vl) {
  return __riscv_vfncvt_xu(mask, src, vl);
}

vuint32m1_t test_vfncvt_xu_f_w_u32m1_m(vbool32_t mask, vfloat64m2_t src, size_t vl) {
  return __riscv_vfncvt_xu(mask, src, vl);
}

vuint32m2_t test_vfncvt_xu_f_w_u32m2_m(vbool16_t mask, vfloat64m4_t src, size_t vl) {
  return __riscv_vfncvt_xu(mask, src, vl);
}

vuint32m4_t test_vfncvt_xu_f_w_u32m4_m(vbool8_t mask, vfloat64m8_t src, size_t vl) {
  return __riscv_vfncvt_xu(mask, src, vl);
}

vfloat32mf2_t test_vfncvt_f_x_w_f32mf2_m(vbool64_t mask, vint64m1_t src, size_t vl) {
  return __riscv_vfncvt_f(mask, src, vl);
}

vfloat32m1_t test_vfncvt_f_x_w_f32m1_m(vbool32_t mask, vint64m2_t src, size_t vl) {
  return __riscv_vfncvt_f(mask, src, vl);
}

vfloat32m2_t test_vfncvt_f_x_w_f32m2_m(vbool16_t mask, vint64m4_t src, size_t vl) {
  return __riscv_vfncvt_f(mask, src, vl);
}

vfloat32m4_t test_vfncvt_f_x_w_f32m4_m(vbool8_t mask, vint64m8_t src, size_t vl) {
  return __riscv_vfncvt_f(mask, src, vl);
}

vfloat32mf2_t test_vfncvt_f_xu_w_f32mf2_m(vbool64_t mask, vuint64m1_t src, size_t vl) {
  return __riscv_vfncvt_f(mask, src, vl);
}

vfloat32m1_t test_vfncvt_f_xu_w_f32m1_m(vbool32_t mask, vuint64m2_t src, size_t vl) {
  return __riscv_vfncvt_f(mask, src, vl);
}

vfloat32m2_t test_vfncvt_f_xu_w_f32m2_m(vbool16_t mask, vuint64m4_t src, size_t vl) {
  return __riscv_vfncvt_f(mask, src, vl);
}

vfloat32m4_t test_vfncvt_f_xu_w_f32m4_m(vbool8_t mask, vuint64m8_t src, size_t vl) {
  return __riscv_vfncvt_f(mask, src, vl);
}

vfloat32mf2_t test_vfncvt_f_f_w_f32mf2_m(vbool64_t mask, vfloat64m1_t src, size_t vl) {
  return __riscv_vfncvt_f(mask, src, vl);
}

vfloat32m1_t test_vfncvt_f_f_w_f32m1_m(vbool32_t mask, vfloat64m2_t src, size_t vl) {
  return __riscv_vfncvt_f(mask, src, vl);
}

vfloat32m2_t test_vfncvt_f_f_w_f32m2_m(vbool16_t mask, vfloat64m4_t src, size_t vl) {
  return __riscv_vfncvt_f(mask, src, vl);
}

vfloat32m4_t test_vfncvt_f_f_w_f32m4_m(vbool8_t mask, vfloat64m8_t src, size_t vl) {
  return __riscv_vfncvt_f(mask, src, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vfncvt\.[ivxfswum.]+\s+} 60 } } */
