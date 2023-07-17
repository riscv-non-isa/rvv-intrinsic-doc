/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint32mf2_t test_vfwcvt_rtz_x_f_v_i32mf2(vfloat16mf4_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_x_f_v_i32mf2(src, vl);
}

vint32m1_t test_vfwcvt_rtz_x_f_v_i32m1(vfloat16mf2_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_x_f_v_i32m1(src, vl);
}

vint32m2_t test_vfwcvt_rtz_x_f_v_i32m2(vfloat16m1_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_x_f_v_i32m2(src, vl);
}

vint32m4_t test_vfwcvt_rtz_x_f_v_i32m4(vfloat16m2_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_x_f_v_i32m4(src, vl);
}

vint32m8_t test_vfwcvt_rtz_x_f_v_i32m8(vfloat16m4_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_x_f_v_i32m8(src, vl);
}

vuint32mf2_t test_vfwcvt_rtz_xu_f_v_u32mf2(vfloat16mf4_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_xu_f_v_u32mf2(src, vl);
}

vuint32m1_t test_vfwcvt_rtz_xu_f_v_u32m1(vfloat16mf2_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_xu_f_v_u32m1(src, vl);
}

vuint32m2_t test_vfwcvt_rtz_xu_f_v_u32m2(vfloat16m1_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_xu_f_v_u32m2(src, vl);
}

vuint32m4_t test_vfwcvt_rtz_xu_f_v_u32m4(vfloat16m2_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_xu_f_v_u32m4(src, vl);
}

vuint32m8_t test_vfwcvt_rtz_xu_f_v_u32m8(vfloat16m4_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_xu_f_v_u32m8(src, vl);
}

vint64m1_t test_vfwcvt_rtz_x_f_v_i64m1(vfloat32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_x_f_v_i64m1(src, vl);
}

vint64m2_t test_vfwcvt_rtz_x_f_v_i64m2(vfloat32m1_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_x_f_v_i64m2(src, vl);
}

vint64m4_t test_vfwcvt_rtz_x_f_v_i64m4(vfloat32m2_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_x_f_v_i64m4(src, vl);
}

vint64m8_t test_vfwcvt_rtz_x_f_v_i64m8(vfloat32m4_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_x_f_v_i64m8(src, vl);
}

vuint64m1_t test_vfwcvt_rtz_xu_f_v_u64m1(vfloat32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_xu_f_v_u64m1(src, vl);
}

vuint64m2_t test_vfwcvt_rtz_xu_f_v_u64m2(vfloat32m1_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_xu_f_v_u64m2(src, vl);
}

vuint64m4_t test_vfwcvt_rtz_xu_f_v_u64m4(vfloat32m2_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_xu_f_v_u64m4(src, vl);
}

vuint64m8_t test_vfwcvt_rtz_xu_f_v_u64m8(vfloat32m4_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_xu_f_v_u64m8(src, vl);
}

vint32mf2_t test_vfwcvt_rtz_x_f_v_i32mf2_m(vbool64_t mask, vfloat16mf4_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_x_f_v_i32mf2_m(mask, src, vl);
}

vint32m1_t test_vfwcvt_rtz_x_f_v_i32m1_m(vbool32_t mask, vfloat16mf2_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_x_f_v_i32m1_m(mask, src, vl);
}

vint32m2_t test_vfwcvt_rtz_x_f_v_i32m2_m(vbool16_t mask, vfloat16m1_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_x_f_v_i32m2_m(mask, src, vl);
}

vint32m4_t test_vfwcvt_rtz_x_f_v_i32m4_m(vbool8_t mask, vfloat16m2_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_x_f_v_i32m4_m(mask, src, vl);
}

vint32m8_t test_vfwcvt_rtz_x_f_v_i32m8_m(vbool4_t mask, vfloat16m4_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_x_f_v_i32m8_m(mask, src, vl);
}

vuint32mf2_t test_vfwcvt_rtz_xu_f_v_u32mf2_m(vbool64_t mask, vfloat16mf4_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_xu_f_v_u32mf2_m(mask, src, vl);
}

vuint32m1_t test_vfwcvt_rtz_xu_f_v_u32m1_m(vbool32_t mask, vfloat16mf2_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_xu_f_v_u32m1_m(mask, src, vl);
}

vuint32m2_t test_vfwcvt_rtz_xu_f_v_u32m2_m(vbool16_t mask, vfloat16m1_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_xu_f_v_u32m2_m(mask, src, vl);
}

vuint32m4_t test_vfwcvt_rtz_xu_f_v_u32m4_m(vbool8_t mask, vfloat16m2_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_xu_f_v_u32m4_m(mask, src, vl);
}

vuint32m8_t test_vfwcvt_rtz_xu_f_v_u32m8_m(vbool4_t mask, vfloat16m4_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_xu_f_v_u32m8_m(mask, src, vl);
}

vint64m1_t test_vfwcvt_rtz_x_f_v_i64m1_m(vbool64_t mask, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_x_f_v_i64m1_m(mask, src, vl);
}

vint64m2_t test_vfwcvt_rtz_x_f_v_i64m2_m(vbool32_t mask, vfloat32m1_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_x_f_v_i64m2_m(mask, src, vl);
}

vint64m4_t test_vfwcvt_rtz_x_f_v_i64m4_m(vbool16_t mask, vfloat32m2_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_x_f_v_i64m4_m(mask, src, vl);
}

vint64m8_t test_vfwcvt_rtz_x_f_v_i64m8_m(vbool8_t mask, vfloat32m4_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_x_f_v_i64m8_m(mask, src, vl);
}

vuint64m1_t test_vfwcvt_rtz_xu_f_v_u64m1_m(vbool64_t mask, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_xu_f_v_u64m1_m(mask, src, vl);
}

vuint64m2_t test_vfwcvt_rtz_xu_f_v_u64m2_m(vbool32_t mask, vfloat32m1_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_xu_f_v_u64m2_m(mask, src, vl);
}

vuint64m4_t test_vfwcvt_rtz_xu_f_v_u64m4_m(vbool16_t mask, vfloat32m2_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_xu_f_v_u64m4_m(mask, src, vl);
}

vuint64m8_t test_vfwcvt_rtz_xu_f_v_u64m8_m(vbool8_t mask, vfloat32m4_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_xu_f_v_u64m8_m(mask, src, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vfwcvt\.rtz[ivxfswum.]*\s+} 36 } } */
