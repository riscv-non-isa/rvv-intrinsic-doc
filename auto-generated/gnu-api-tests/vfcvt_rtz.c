/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

vint32mf2_t test_vfcvt_rtz_x_f_v_i32mf2(vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfcvt_rtz_x_f_v_i32mf2(vs2, vl);
}

vint32m1_t test_vfcvt_rtz_x_f_v_i32m1(vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfcvt_rtz_x_f_v_i32m1(vs2, vl);
}

vint32m2_t test_vfcvt_rtz_x_f_v_i32m2(vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfcvt_rtz_x_f_v_i32m2(vs2, vl);
}

vint32m4_t test_vfcvt_rtz_x_f_v_i32m4(vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfcvt_rtz_x_f_v_i32m4(vs2, vl);
}

vint32m8_t test_vfcvt_rtz_x_f_v_i32m8(vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfcvt_rtz_x_f_v_i32m8(vs2, vl);
}

vuint32mf2_t test_vfcvt_rtz_xu_f_v_u32mf2(vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfcvt_rtz_xu_f_v_u32mf2(vs2, vl);
}

vuint32m1_t test_vfcvt_rtz_xu_f_v_u32m1(vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfcvt_rtz_xu_f_v_u32m1(vs2, vl);
}

vuint32m2_t test_vfcvt_rtz_xu_f_v_u32m2(vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfcvt_rtz_xu_f_v_u32m2(vs2, vl);
}

vuint32m4_t test_vfcvt_rtz_xu_f_v_u32m4(vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfcvt_rtz_xu_f_v_u32m4(vs2, vl);
}

vuint32m8_t test_vfcvt_rtz_xu_f_v_u32m8(vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfcvt_rtz_xu_f_v_u32m8(vs2, vl);
}

vint64m1_t test_vfcvt_rtz_x_f_v_i64m1(vfloat64m1_t vs2, size_t vl) {
  return __riscv_vfcvt_rtz_x_f_v_i64m1(vs2, vl);
}

vint64m2_t test_vfcvt_rtz_x_f_v_i64m2(vfloat64m2_t vs2, size_t vl) {
  return __riscv_vfcvt_rtz_x_f_v_i64m2(vs2, vl);
}

vint64m4_t test_vfcvt_rtz_x_f_v_i64m4(vfloat64m4_t vs2, size_t vl) {
  return __riscv_vfcvt_rtz_x_f_v_i64m4(vs2, vl);
}

vint64m8_t test_vfcvt_rtz_x_f_v_i64m8(vfloat64m8_t vs2, size_t vl) {
  return __riscv_vfcvt_rtz_x_f_v_i64m8(vs2, vl);
}

vuint64m1_t test_vfcvt_rtz_xu_f_v_u64m1(vfloat64m1_t vs2, size_t vl) {
  return __riscv_vfcvt_rtz_xu_f_v_u64m1(vs2, vl);
}

vuint64m2_t test_vfcvt_rtz_xu_f_v_u64m2(vfloat64m2_t vs2, size_t vl) {
  return __riscv_vfcvt_rtz_xu_f_v_u64m2(vs2, vl);
}

vuint64m4_t test_vfcvt_rtz_xu_f_v_u64m4(vfloat64m4_t vs2, size_t vl) {
  return __riscv_vfcvt_rtz_xu_f_v_u64m4(vs2, vl);
}

vuint64m8_t test_vfcvt_rtz_xu_f_v_u64m8(vfloat64m8_t vs2, size_t vl) {
  return __riscv_vfcvt_rtz_xu_f_v_u64m8(vs2, vl);
}

vint32mf2_t test_vfcvt_rtz_x_f_v_i32mf2_m(vbool64_t vm, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfcvt_rtz_x_f_v_i32mf2_m(vm, vs2, vl);
}

vint32m1_t test_vfcvt_rtz_x_f_v_i32m1_m(vbool32_t vm, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfcvt_rtz_x_f_v_i32m1_m(vm, vs2, vl);
}

vint32m2_t test_vfcvt_rtz_x_f_v_i32m2_m(vbool16_t vm, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfcvt_rtz_x_f_v_i32m2_m(vm, vs2, vl);
}

vint32m4_t test_vfcvt_rtz_x_f_v_i32m4_m(vbool8_t vm, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfcvt_rtz_x_f_v_i32m4_m(vm, vs2, vl);
}

vint32m8_t test_vfcvt_rtz_x_f_v_i32m8_m(vbool4_t vm, vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfcvt_rtz_x_f_v_i32m8_m(vm, vs2, vl);
}

vuint32mf2_t test_vfcvt_rtz_xu_f_v_u32mf2_m(vbool64_t vm, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfcvt_rtz_xu_f_v_u32mf2_m(vm, vs2, vl);
}

vuint32m1_t test_vfcvt_rtz_xu_f_v_u32m1_m(vbool32_t vm, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfcvt_rtz_xu_f_v_u32m1_m(vm, vs2, vl);
}

vuint32m2_t test_vfcvt_rtz_xu_f_v_u32m2_m(vbool16_t vm, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfcvt_rtz_xu_f_v_u32m2_m(vm, vs2, vl);
}

vuint32m4_t test_vfcvt_rtz_xu_f_v_u32m4_m(vbool8_t vm, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfcvt_rtz_xu_f_v_u32m4_m(vm, vs2, vl);
}

vuint32m8_t test_vfcvt_rtz_xu_f_v_u32m8_m(vbool4_t vm, vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfcvt_rtz_xu_f_v_u32m8_m(vm, vs2, vl);
}

vint64m1_t test_vfcvt_rtz_x_f_v_i64m1_m(vbool64_t vm, vfloat64m1_t vs2, size_t vl) {
  return __riscv_vfcvt_rtz_x_f_v_i64m1_m(vm, vs2, vl);
}

vint64m2_t test_vfcvt_rtz_x_f_v_i64m2_m(vbool32_t vm, vfloat64m2_t vs2, size_t vl) {
  return __riscv_vfcvt_rtz_x_f_v_i64m2_m(vm, vs2, vl);
}

vint64m4_t test_vfcvt_rtz_x_f_v_i64m4_m(vbool16_t vm, vfloat64m4_t vs2, size_t vl) {
  return __riscv_vfcvt_rtz_x_f_v_i64m4_m(vm, vs2, vl);
}

vint64m8_t test_vfcvt_rtz_x_f_v_i64m8_m(vbool8_t vm, vfloat64m8_t vs2, size_t vl) {
  return __riscv_vfcvt_rtz_x_f_v_i64m8_m(vm, vs2, vl);
}

vuint64m1_t test_vfcvt_rtz_xu_f_v_u64m1_m(vbool64_t vm, vfloat64m1_t vs2, size_t vl) {
  return __riscv_vfcvt_rtz_xu_f_v_u64m1_m(vm, vs2, vl);
}

vuint64m2_t test_vfcvt_rtz_xu_f_v_u64m2_m(vbool32_t vm, vfloat64m2_t vs2, size_t vl) {
  return __riscv_vfcvt_rtz_xu_f_v_u64m2_m(vm, vs2, vl);
}

vuint64m4_t test_vfcvt_rtz_xu_f_v_u64m4_m(vbool16_t vm, vfloat64m4_t vs2, size_t vl) {
  return __riscv_vfcvt_rtz_xu_f_v_u64m4_m(vm, vs2, vl);
}

vuint64m8_t test_vfcvt_rtz_xu_f_v_u64m8_m(vbool8_t vm, vfloat64m8_t vs2, size_t vl) {
  return __riscv_vfcvt_rtz_xu_f_v_u64m8_m(vm, vs2, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vfcvt\.rtz[ivxfswum.]*\s+} 36 } } */
