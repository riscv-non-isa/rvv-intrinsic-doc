/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

vfloat32mf2_t test_vfncvt_rod_f_f_w_f32mf2_tu(vfloat32mf2_t vd, vfloat64m1_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_tu(vd, vs2, vl);
}

vfloat32m1_t test_vfncvt_rod_f_f_w_f32m1_tu(vfloat32m1_t vd, vfloat64m2_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_tu(vd, vs2, vl);
}

vfloat32m2_t test_vfncvt_rod_f_f_w_f32m2_tu(vfloat32m2_t vd, vfloat64m4_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_tu(vd, vs2, vl);
}

vfloat32m4_t test_vfncvt_rod_f_f_w_f32m4_tu(vfloat32m4_t vd, vfloat64m8_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_tu(vd, vs2, vl);
}

vfloat32mf2_t test_vfncvt_rod_f_f_w_f32mf2_tum(vbool64_t vm, vfloat32mf2_t vd, vfloat64m1_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_tum(vm, vd, vs2, vl);
}

vfloat32m1_t test_vfncvt_rod_f_f_w_f32m1_tum(vbool32_t vm, vfloat32m1_t vd, vfloat64m2_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_tum(vm, vd, vs2, vl);
}

vfloat32m2_t test_vfncvt_rod_f_f_w_f32m2_tum(vbool16_t vm, vfloat32m2_t vd, vfloat64m4_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_tum(vm, vd, vs2, vl);
}

vfloat32m4_t test_vfncvt_rod_f_f_w_f32m4_tum(vbool8_t vm, vfloat32m4_t vd, vfloat64m8_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_tum(vm, vd, vs2, vl);
}

vfloat32mf2_t test_vfncvt_rod_f_f_w_f32mf2_tumu(vbool64_t vm, vfloat32mf2_t vd, vfloat64m1_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_tumu(vm, vd, vs2, vl);
}

vfloat32m1_t test_vfncvt_rod_f_f_w_f32m1_tumu(vbool32_t vm, vfloat32m1_t vd, vfloat64m2_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_tumu(vm, vd, vs2, vl);
}

vfloat32m2_t test_vfncvt_rod_f_f_w_f32m2_tumu(vbool16_t vm, vfloat32m2_t vd, vfloat64m4_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_tumu(vm, vd, vs2, vl);
}

vfloat32m4_t test_vfncvt_rod_f_f_w_f32m4_tumu(vbool8_t vm, vfloat32m4_t vd, vfloat64m8_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_tumu(vm, vd, vs2, vl);
}

vfloat32mf2_t test_vfncvt_rod_f_f_w_f32mf2_mu(vbool64_t vm, vfloat32mf2_t vd, vfloat64m1_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_mu(vm, vd, vs2, vl);
}

vfloat32m1_t test_vfncvt_rod_f_f_w_f32m1_mu(vbool32_t vm, vfloat32m1_t vd, vfloat64m2_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_mu(vm, vd, vs2, vl);
}

vfloat32m2_t test_vfncvt_rod_f_f_w_f32m2_mu(vbool16_t vm, vfloat32m2_t vd, vfloat64m4_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_mu(vm, vd, vs2, vl);
}

vfloat32m4_t test_vfncvt_rod_f_f_w_f32m4_mu(vbool8_t vm, vfloat32m4_t vd, vfloat64m8_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_mu(vm, vd, vs2, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vfncvt\.rod[ivxfswum.]*\s+} 16 } } */
