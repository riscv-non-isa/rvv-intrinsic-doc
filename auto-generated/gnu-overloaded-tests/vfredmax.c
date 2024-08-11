/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

vfloat32m1_t test_vfredmax_vs_f32mf2_f32m1(vfloat32mf2_t vs2, vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfredmax(vs2, vs1, vl);
}

vfloat32m1_t test_vfredmax_vs_f32m1_f32m1(vfloat32m1_t vs2, vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfredmax(vs2, vs1, vl);
}

vfloat32m1_t test_vfredmax_vs_f32m2_f32m1(vfloat32m2_t vs2, vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfredmax(vs2, vs1, vl);
}

vfloat32m1_t test_vfredmax_vs_f32m4_f32m1(vfloat32m4_t vs2, vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfredmax(vs2, vs1, vl);
}

vfloat32m1_t test_vfredmax_vs_f32m8_f32m1(vfloat32m8_t vs2, vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfredmax(vs2, vs1, vl);
}

vfloat64m1_t test_vfredmax_vs_f64m1_f64m1(vfloat64m1_t vs2, vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfredmax(vs2, vs1, vl);
}

vfloat64m1_t test_vfredmax_vs_f64m2_f64m1(vfloat64m2_t vs2, vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfredmax(vs2, vs1, vl);
}

vfloat64m1_t test_vfredmax_vs_f64m4_f64m1(vfloat64m4_t vs2, vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfredmax(vs2, vs1, vl);
}

vfloat64m1_t test_vfredmax_vs_f64m8_f64m1(vfloat64m8_t vs2, vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfredmax(vs2, vs1, vl);
}

vfloat32m1_t test_vfredmax_vs_f32mf2_f32m1_m(vbool64_t vm, vfloat32mf2_t vs2, vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfredmax(vm, vs2, vs1, vl);
}

vfloat32m1_t test_vfredmax_vs_f32m1_f32m1_m(vbool32_t vm, vfloat32m1_t vs2, vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfredmax(vm, vs2, vs1, vl);
}

vfloat32m1_t test_vfredmax_vs_f32m2_f32m1_m(vbool16_t vm, vfloat32m2_t vs2, vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfredmax(vm, vs2, vs1, vl);
}

vfloat32m1_t test_vfredmax_vs_f32m4_f32m1_m(vbool8_t vm, vfloat32m4_t vs2, vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfredmax(vm, vs2, vs1, vl);
}

vfloat32m1_t test_vfredmax_vs_f32m8_f32m1_m(vbool4_t vm, vfloat32m8_t vs2, vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfredmax(vm, vs2, vs1, vl);
}

vfloat64m1_t test_vfredmax_vs_f64m1_f64m1_m(vbool64_t vm, vfloat64m1_t vs2, vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfredmax(vm, vs2, vs1, vl);
}

vfloat64m1_t test_vfredmax_vs_f64m2_f64m1_m(vbool32_t vm, vfloat64m2_t vs2, vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfredmax(vm, vs2, vs1, vl);
}

vfloat64m1_t test_vfredmax_vs_f64m4_f64m1_m(vbool16_t vm, vfloat64m4_t vs2, vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfredmax(vm, vs2, vs1, vl);
}

vfloat64m1_t test_vfredmax_vs_f64m8_f64m1_m(vbool8_t vm, vfloat64m8_t vs2, vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfredmax(vm, vs2, vs1, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vfredmax\.[ivxfswum.]+\s+} 18 } } */
