/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint16mf4_t test_vfncvt_rtz_x_f_w_i16mf4_tu(vint16mf4_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfncvt_rtz_x_tu(maskedoff, src, vl);
}

vint16mf2_t test_vfncvt_rtz_x_f_w_i16mf2_tu(vint16mf2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfncvt_rtz_x_tu(maskedoff, src, vl);
}

vint16m1_t test_vfncvt_rtz_x_f_w_i16m1_tu(vint16m1_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfncvt_rtz_x_tu(maskedoff, src, vl);
}

vint16m2_t test_vfncvt_rtz_x_f_w_i16m2_tu(vint16m2_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfncvt_rtz_x_tu(maskedoff, src, vl);
}

vint16m4_t test_vfncvt_rtz_x_f_w_i16m4_tu(vint16m4_t maskedoff, vfloat32m8_t src, size_t vl) {
  return __riscv_vfncvt_rtz_x_tu(maskedoff, src, vl);
}

vuint16mf4_t test_vfncvt_rtz_xu_f_w_u16mf4_tu(vuint16mf4_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfncvt_rtz_xu_tu(maskedoff, src, vl);
}

vuint16mf2_t test_vfncvt_rtz_xu_f_w_u16mf2_tu(vuint16mf2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfncvt_rtz_xu_tu(maskedoff, src, vl);
}

vuint16m1_t test_vfncvt_rtz_xu_f_w_u16m1_tu(vuint16m1_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfncvt_rtz_xu_tu(maskedoff, src, vl);
}

vuint16m2_t test_vfncvt_rtz_xu_f_w_u16m2_tu(vuint16m2_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfncvt_rtz_xu_tu(maskedoff, src, vl);
}

vuint16m4_t test_vfncvt_rtz_xu_f_w_u16m4_tu(vuint16m4_t maskedoff, vfloat32m8_t src, size_t vl) {
  return __riscv_vfncvt_rtz_xu_tu(maskedoff, src, vl);
}

vint32mf2_t test_vfncvt_rtz_x_f_w_i32mf2_tu(vint32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return __riscv_vfncvt_rtz_x_tu(maskedoff, src, vl);
}

vint32m1_t test_vfncvt_rtz_x_f_w_i32m1_tu(vint32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return __riscv_vfncvt_rtz_x_tu(maskedoff, src, vl);
}

vint32m2_t test_vfncvt_rtz_x_f_w_i32m2_tu(vint32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return __riscv_vfncvt_rtz_x_tu(maskedoff, src, vl);
}

vint32m4_t test_vfncvt_rtz_x_f_w_i32m4_tu(vint32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return __riscv_vfncvt_rtz_x_tu(maskedoff, src, vl);
}

vuint32mf2_t test_vfncvt_rtz_xu_f_w_u32mf2_tu(vuint32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return __riscv_vfncvt_rtz_xu_tu(maskedoff, src, vl);
}

vuint32m1_t test_vfncvt_rtz_xu_f_w_u32m1_tu(vuint32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return __riscv_vfncvt_rtz_xu_tu(maskedoff, src, vl);
}

vuint32m2_t test_vfncvt_rtz_xu_f_w_u32m2_tu(vuint32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return __riscv_vfncvt_rtz_xu_tu(maskedoff, src, vl);
}

vuint32m4_t test_vfncvt_rtz_xu_f_w_u32m4_tu(vuint32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return __riscv_vfncvt_rtz_xu_tu(maskedoff, src, vl);
}

vint16mf4_t test_vfncvt_rtz_x_f_w_i16mf4_tum(vbool64_t mask, vint16mf4_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfncvt_rtz_x_tum(mask, maskedoff, src, vl);
}

vint16mf2_t test_vfncvt_rtz_x_f_w_i16mf2_tum(vbool32_t mask, vint16mf2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfncvt_rtz_x_tum(mask, maskedoff, src, vl);
}

vint16m1_t test_vfncvt_rtz_x_f_w_i16m1_tum(vbool16_t mask, vint16m1_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfncvt_rtz_x_tum(mask, maskedoff, src, vl);
}

vint16m2_t test_vfncvt_rtz_x_f_w_i16m2_tum(vbool8_t mask, vint16m2_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfncvt_rtz_x_tum(mask, maskedoff, src, vl);
}

vint16m4_t test_vfncvt_rtz_x_f_w_i16m4_tum(vbool4_t mask, vint16m4_t maskedoff, vfloat32m8_t src, size_t vl) {
  return __riscv_vfncvt_rtz_x_tum(mask, maskedoff, src, vl);
}

vuint16mf4_t test_vfncvt_rtz_xu_f_w_u16mf4_tum(vbool64_t mask, vuint16mf4_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfncvt_rtz_xu_tum(mask, maskedoff, src, vl);
}

vuint16mf2_t test_vfncvt_rtz_xu_f_w_u16mf2_tum(vbool32_t mask, vuint16mf2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfncvt_rtz_xu_tum(mask, maskedoff, src, vl);
}

vuint16m1_t test_vfncvt_rtz_xu_f_w_u16m1_tum(vbool16_t mask, vuint16m1_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfncvt_rtz_xu_tum(mask, maskedoff, src, vl);
}

vuint16m2_t test_vfncvt_rtz_xu_f_w_u16m2_tum(vbool8_t mask, vuint16m2_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfncvt_rtz_xu_tum(mask, maskedoff, src, vl);
}

vuint16m4_t test_vfncvt_rtz_xu_f_w_u16m4_tum(vbool4_t mask, vuint16m4_t maskedoff, vfloat32m8_t src, size_t vl) {
  return __riscv_vfncvt_rtz_xu_tum(mask, maskedoff, src, vl);
}

vint32mf2_t test_vfncvt_rtz_x_f_w_i32mf2_tum(vbool64_t mask, vint32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return __riscv_vfncvt_rtz_x_tum(mask, maskedoff, src, vl);
}

vint32m1_t test_vfncvt_rtz_x_f_w_i32m1_tum(vbool32_t mask, vint32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return __riscv_vfncvt_rtz_x_tum(mask, maskedoff, src, vl);
}

vint32m2_t test_vfncvt_rtz_x_f_w_i32m2_tum(vbool16_t mask, vint32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return __riscv_vfncvt_rtz_x_tum(mask, maskedoff, src, vl);
}

vint32m4_t test_vfncvt_rtz_x_f_w_i32m4_tum(vbool8_t mask, vint32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return __riscv_vfncvt_rtz_x_tum(mask, maskedoff, src, vl);
}

vuint32mf2_t test_vfncvt_rtz_xu_f_w_u32mf2_tum(vbool64_t mask, vuint32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return __riscv_vfncvt_rtz_xu_tum(mask, maskedoff, src, vl);
}

vuint32m1_t test_vfncvt_rtz_xu_f_w_u32m1_tum(vbool32_t mask, vuint32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return __riscv_vfncvt_rtz_xu_tum(mask, maskedoff, src, vl);
}

vuint32m2_t test_vfncvt_rtz_xu_f_w_u32m2_tum(vbool16_t mask, vuint32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return __riscv_vfncvt_rtz_xu_tum(mask, maskedoff, src, vl);
}

vuint32m4_t test_vfncvt_rtz_xu_f_w_u32m4_tum(vbool8_t mask, vuint32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return __riscv_vfncvt_rtz_xu_tum(mask, maskedoff, src, vl);
}

vint16mf4_t test_vfncvt_rtz_x_f_w_i16mf4_tumu(vbool64_t mask, vint16mf4_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfncvt_rtz_x_tumu(mask, maskedoff, src, vl);
}

vint16mf2_t test_vfncvt_rtz_x_f_w_i16mf2_tumu(vbool32_t mask, vint16mf2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfncvt_rtz_x_tumu(mask, maskedoff, src, vl);
}

vint16m1_t test_vfncvt_rtz_x_f_w_i16m1_tumu(vbool16_t mask, vint16m1_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfncvt_rtz_x_tumu(mask, maskedoff, src, vl);
}

vint16m2_t test_vfncvt_rtz_x_f_w_i16m2_tumu(vbool8_t mask, vint16m2_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfncvt_rtz_x_tumu(mask, maskedoff, src, vl);
}

vint16m4_t test_vfncvt_rtz_x_f_w_i16m4_tumu(vbool4_t mask, vint16m4_t maskedoff, vfloat32m8_t src, size_t vl) {
  return __riscv_vfncvt_rtz_x_tumu(mask, maskedoff, src, vl);
}

vuint16mf4_t test_vfncvt_rtz_xu_f_w_u16mf4_tumu(vbool64_t mask, vuint16mf4_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfncvt_rtz_xu_tumu(mask, maskedoff, src, vl);
}

vuint16mf2_t test_vfncvt_rtz_xu_f_w_u16mf2_tumu(vbool32_t mask, vuint16mf2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfncvt_rtz_xu_tumu(mask, maskedoff, src, vl);
}

vuint16m1_t test_vfncvt_rtz_xu_f_w_u16m1_tumu(vbool16_t mask, vuint16m1_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfncvt_rtz_xu_tumu(mask, maskedoff, src, vl);
}

vuint16m2_t test_vfncvt_rtz_xu_f_w_u16m2_tumu(vbool8_t mask, vuint16m2_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfncvt_rtz_xu_tumu(mask, maskedoff, src, vl);
}

vuint16m4_t test_vfncvt_rtz_xu_f_w_u16m4_tumu(vbool4_t mask, vuint16m4_t maskedoff, vfloat32m8_t src, size_t vl) {
  return __riscv_vfncvt_rtz_xu_tumu(mask, maskedoff, src, vl);
}

vint32mf2_t test_vfncvt_rtz_x_f_w_i32mf2_tumu(vbool64_t mask, vint32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return __riscv_vfncvt_rtz_x_tumu(mask, maskedoff, src, vl);
}

vint32m1_t test_vfncvt_rtz_x_f_w_i32m1_tumu(vbool32_t mask, vint32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return __riscv_vfncvt_rtz_x_tumu(mask, maskedoff, src, vl);
}

vint32m2_t test_vfncvt_rtz_x_f_w_i32m2_tumu(vbool16_t mask, vint32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return __riscv_vfncvt_rtz_x_tumu(mask, maskedoff, src, vl);
}

vint32m4_t test_vfncvt_rtz_x_f_w_i32m4_tumu(vbool8_t mask, vint32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return __riscv_vfncvt_rtz_x_tumu(mask, maskedoff, src, vl);
}

vuint32mf2_t test_vfncvt_rtz_xu_f_w_u32mf2_tumu(vbool64_t mask, vuint32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return __riscv_vfncvt_rtz_xu_tumu(mask, maskedoff, src, vl);
}

vuint32m1_t test_vfncvt_rtz_xu_f_w_u32m1_tumu(vbool32_t mask, vuint32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return __riscv_vfncvt_rtz_xu_tumu(mask, maskedoff, src, vl);
}

vuint32m2_t test_vfncvt_rtz_xu_f_w_u32m2_tumu(vbool16_t mask, vuint32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return __riscv_vfncvt_rtz_xu_tumu(mask, maskedoff, src, vl);
}

vuint32m4_t test_vfncvt_rtz_xu_f_w_u32m4_tumu(vbool8_t mask, vuint32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return __riscv_vfncvt_rtz_xu_tumu(mask, maskedoff, src, vl);
}

vint16mf4_t test_vfncvt_rtz_x_f_w_i16mf4_mu(vbool64_t mask, vint16mf4_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfncvt_rtz_x_mu(mask, maskedoff, src, vl);
}

vint16mf2_t test_vfncvt_rtz_x_f_w_i16mf2_mu(vbool32_t mask, vint16mf2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfncvt_rtz_x_mu(mask, maskedoff, src, vl);
}

vint16m1_t test_vfncvt_rtz_x_f_w_i16m1_mu(vbool16_t mask, vint16m1_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfncvt_rtz_x_mu(mask, maskedoff, src, vl);
}

vint16m2_t test_vfncvt_rtz_x_f_w_i16m2_mu(vbool8_t mask, vint16m2_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfncvt_rtz_x_mu(mask, maskedoff, src, vl);
}

vint16m4_t test_vfncvt_rtz_x_f_w_i16m4_mu(vbool4_t mask, vint16m4_t maskedoff, vfloat32m8_t src, size_t vl) {
  return __riscv_vfncvt_rtz_x_mu(mask, maskedoff, src, vl);
}

vuint16mf4_t test_vfncvt_rtz_xu_f_w_u16mf4_mu(vbool64_t mask, vuint16mf4_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfncvt_rtz_xu_mu(mask, maskedoff, src, vl);
}

vuint16mf2_t test_vfncvt_rtz_xu_f_w_u16mf2_mu(vbool32_t mask, vuint16mf2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfncvt_rtz_xu_mu(mask, maskedoff, src, vl);
}

vuint16m1_t test_vfncvt_rtz_xu_f_w_u16m1_mu(vbool16_t mask, vuint16m1_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfncvt_rtz_xu_mu(mask, maskedoff, src, vl);
}

vuint16m2_t test_vfncvt_rtz_xu_f_w_u16m2_mu(vbool8_t mask, vuint16m2_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfncvt_rtz_xu_mu(mask, maskedoff, src, vl);
}

vuint16m4_t test_vfncvt_rtz_xu_f_w_u16m4_mu(vbool4_t mask, vuint16m4_t maskedoff, vfloat32m8_t src, size_t vl) {
  return __riscv_vfncvt_rtz_xu_mu(mask, maskedoff, src, vl);
}

vint32mf2_t test_vfncvt_rtz_x_f_w_i32mf2_mu(vbool64_t mask, vint32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return __riscv_vfncvt_rtz_x_mu(mask, maskedoff, src, vl);
}

vint32m1_t test_vfncvt_rtz_x_f_w_i32m1_mu(vbool32_t mask, vint32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return __riscv_vfncvt_rtz_x_mu(mask, maskedoff, src, vl);
}

vint32m2_t test_vfncvt_rtz_x_f_w_i32m2_mu(vbool16_t mask, vint32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return __riscv_vfncvt_rtz_x_mu(mask, maskedoff, src, vl);
}

vint32m4_t test_vfncvt_rtz_x_f_w_i32m4_mu(vbool8_t mask, vint32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return __riscv_vfncvt_rtz_x_mu(mask, maskedoff, src, vl);
}

vuint32mf2_t test_vfncvt_rtz_xu_f_w_u32mf2_mu(vbool64_t mask, vuint32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return __riscv_vfncvt_rtz_xu_mu(mask, maskedoff, src, vl);
}

vuint32m1_t test_vfncvt_rtz_xu_f_w_u32m1_mu(vbool32_t mask, vuint32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return __riscv_vfncvt_rtz_xu_mu(mask, maskedoff, src, vl);
}

vuint32m2_t test_vfncvt_rtz_xu_f_w_u32m2_mu(vbool16_t mask, vuint32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return __riscv_vfncvt_rtz_xu_mu(mask, maskedoff, src, vl);
}

vuint32m4_t test_vfncvt_rtz_xu_f_w_u32m4_mu(vbool8_t mask, vuint32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return __riscv_vfncvt_rtz_xu_mu(mask, maskedoff, src, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vfncvt\.rtz[ivxfswum.]*\s+} 72 } } */
