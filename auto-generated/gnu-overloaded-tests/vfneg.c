/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

vfloat32mf2_t test_vfneg_v_f32mf2(vfloat32mf2_t vs, size_t vl) {
  return __riscv_vfneg(vs, vl);
}

vfloat32m1_t test_vfneg_v_f32m1(vfloat32m1_t vs, size_t vl) {
  return __riscv_vfneg(vs, vl);
}

vfloat32m2_t test_vfneg_v_f32m2(vfloat32m2_t vs, size_t vl) {
  return __riscv_vfneg(vs, vl);
}

vfloat32m4_t test_vfneg_v_f32m4(vfloat32m4_t vs, size_t vl) {
  return __riscv_vfneg(vs, vl);
}

vfloat32m8_t test_vfneg_v_f32m8(vfloat32m8_t vs, size_t vl) {
  return __riscv_vfneg(vs, vl);
}

vfloat64m1_t test_vfneg_v_f64m1(vfloat64m1_t vs, size_t vl) {
  return __riscv_vfneg(vs, vl);
}

vfloat64m2_t test_vfneg_v_f64m2(vfloat64m2_t vs, size_t vl) {
  return __riscv_vfneg(vs, vl);
}

vfloat64m4_t test_vfneg_v_f64m4(vfloat64m4_t vs, size_t vl) {
  return __riscv_vfneg(vs, vl);
}

vfloat64m8_t test_vfneg_v_f64m8(vfloat64m8_t vs, size_t vl) {
  return __riscv_vfneg(vs, vl);
}

vfloat32mf2_t test_vfneg_v_f32mf2_m(vbool64_t vm, vfloat32mf2_t vs, size_t vl) {
  return __riscv_vfneg(vm, vs, vl);
}

vfloat32m1_t test_vfneg_v_f32m1_m(vbool32_t vm, vfloat32m1_t vs, size_t vl) {
  return __riscv_vfneg(vm, vs, vl);
}

vfloat32m2_t test_vfneg_v_f32m2_m(vbool16_t vm, vfloat32m2_t vs, size_t vl) {
  return __riscv_vfneg(vm, vs, vl);
}

vfloat32m4_t test_vfneg_v_f32m4_m(vbool8_t vm, vfloat32m4_t vs, size_t vl) {
  return __riscv_vfneg(vm, vs, vl);
}

vfloat32m8_t test_vfneg_v_f32m8_m(vbool4_t vm, vfloat32m8_t vs, size_t vl) {
  return __riscv_vfneg(vm, vs, vl);
}

vfloat64m1_t test_vfneg_v_f64m1_m(vbool64_t vm, vfloat64m1_t vs, size_t vl) {
  return __riscv_vfneg(vm, vs, vl);
}

vfloat64m2_t test_vfneg_v_f64m2_m(vbool32_t vm, vfloat64m2_t vs, size_t vl) {
  return __riscv_vfneg(vm, vs, vl);
}

vfloat64m4_t test_vfneg_v_f64m4_m(vbool16_t vm, vfloat64m4_t vs, size_t vl) {
  return __riscv_vfneg(vm, vs, vl);
}

vfloat64m8_t test_vfneg_v_f64m8_m(vbool8_t vm, vfloat64m8_t vs, size_t vl) {
  return __riscv_vfneg(vm, vs, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vfneg\.[ivxfswum.]+\s+} 18 } } */
