/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

vfloat32mf2_t test_vfsgnjx_vv_f32mf2(vfloat32mf2_t vs2, vfloat32mf2_t vs1, size_t vl) {
  return __riscv_vfsgnjx_vv_f32mf2(vs2, vs1, vl);
}

vfloat32mf2_t test_vfsgnjx_vf_f32mf2(vfloat32mf2_t vs2, float rs1, size_t vl) {
  return __riscv_vfsgnjx_vf_f32mf2(vs2, rs1, vl);
}

vfloat32m1_t test_vfsgnjx_vv_f32m1(vfloat32m1_t vs2, vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfsgnjx_vv_f32m1(vs2, vs1, vl);
}

vfloat32m1_t test_vfsgnjx_vf_f32m1(vfloat32m1_t vs2, float rs1, size_t vl) {
  return __riscv_vfsgnjx_vf_f32m1(vs2, rs1, vl);
}

vfloat32m2_t test_vfsgnjx_vv_f32m2(vfloat32m2_t vs2, vfloat32m2_t vs1, size_t vl) {
  return __riscv_vfsgnjx_vv_f32m2(vs2, vs1, vl);
}

vfloat32m2_t test_vfsgnjx_vf_f32m2(vfloat32m2_t vs2, float rs1, size_t vl) {
  return __riscv_vfsgnjx_vf_f32m2(vs2, rs1, vl);
}

vfloat32m4_t test_vfsgnjx_vv_f32m4(vfloat32m4_t vs2, vfloat32m4_t vs1, size_t vl) {
  return __riscv_vfsgnjx_vv_f32m4(vs2, vs1, vl);
}

vfloat32m4_t test_vfsgnjx_vf_f32m4(vfloat32m4_t vs2, float rs1, size_t vl) {
  return __riscv_vfsgnjx_vf_f32m4(vs2, rs1, vl);
}

vfloat32m8_t test_vfsgnjx_vv_f32m8(vfloat32m8_t vs2, vfloat32m8_t vs1, size_t vl) {
  return __riscv_vfsgnjx_vv_f32m8(vs2, vs1, vl);
}

vfloat32m8_t test_vfsgnjx_vf_f32m8(vfloat32m8_t vs2, float rs1, size_t vl) {
  return __riscv_vfsgnjx_vf_f32m8(vs2, rs1, vl);
}

vfloat64m1_t test_vfsgnjx_vv_f64m1(vfloat64m1_t vs2, vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfsgnjx_vv_f64m1(vs2, vs1, vl);
}

vfloat64m1_t test_vfsgnjx_vf_f64m1(vfloat64m1_t vs2, double rs1, size_t vl) {
  return __riscv_vfsgnjx_vf_f64m1(vs2, rs1, vl);
}

vfloat64m2_t test_vfsgnjx_vv_f64m2(vfloat64m2_t vs2, vfloat64m2_t vs1, size_t vl) {
  return __riscv_vfsgnjx_vv_f64m2(vs2, vs1, vl);
}

vfloat64m2_t test_vfsgnjx_vf_f64m2(vfloat64m2_t vs2, double rs1, size_t vl) {
  return __riscv_vfsgnjx_vf_f64m2(vs2, rs1, vl);
}

vfloat64m4_t test_vfsgnjx_vv_f64m4(vfloat64m4_t vs2, vfloat64m4_t vs1, size_t vl) {
  return __riscv_vfsgnjx_vv_f64m4(vs2, vs1, vl);
}

vfloat64m4_t test_vfsgnjx_vf_f64m4(vfloat64m4_t vs2, double rs1, size_t vl) {
  return __riscv_vfsgnjx_vf_f64m4(vs2, rs1, vl);
}

vfloat64m8_t test_vfsgnjx_vv_f64m8(vfloat64m8_t vs2, vfloat64m8_t vs1, size_t vl) {
  return __riscv_vfsgnjx_vv_f64m8(vs2, vs1, vl);
}

vfloat64m8_t test_vfsgnjx_vf_f64m8(vfloat64m8_t vs2, double rs1, size_t vl) {
  return __riscv_vfsgnjx_vf_f64m8(vs2, rs1, vl);
}

vfloat32mf2_t test_vfsgnjx_vv_f32mf2_m(vbool64_t vm, vfloat32mf2_t vs2, vfloat32mf2_t vs1, size_t vl) {
  return __riscv_vfsgnjx_vv_f32mf2_m(vm, vs2, vs1, vl);
}

vfloat32mf2_t test_vfsgnjx_vf_f32mf2_m(vbool64_t vm, vfloat32mf2_t vs2, float rs1, size_t vl) {
  return __riscv_vfsgnjx_vf_f32mf2_m(vm, vs2, rs1, vl);
}

vfloat32m1_t test_vfsgnjx_vv_f32m1_m(vbool32_t vm, vfloat32m1_t vs2, vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfsgnjx_vv_f32m1_m(vm, vs2, vs1, vl);
}

vfloat32m1_t test_vfsgnjx_vf_f32m1_m(vbool32_t vm, vfloat32m1_t vs2, float rs1, size_t vl) {
  return __riscv_vfsgnjx_vf_f32m1_m(vm, vs2, rs1, vl);
}

vfloat32m2_t test_vfsgnjx_vv_f32m2_m(vbool16_t vm, vfloat32m2_t vs2, vfloat32m2_t vs1, size_t vl) {
  return __riscv_vfsgnjx_vv_f32m2_m(vm, vs2, vs1, vl);
}

vfloat32m2_t test_vfsgnjx_vf_f32m2_m(vbool16_t vm, vfloat32m2_t vs2, float rs1, size_t vl) {
  return __riscv_vfsgnjx_vf_f32m2_m(vm, vs2, rs1, vl);
}

vfloat32m4_t test_vfsgnjx_vv_f32m4_m(vbool8_t vm, vfloat32m4_t vs2, vfloat32m4_t vs1, size_t vl) {
  return __riscv_vfsgnjx_vv_f32m4_m(vm, vs2, vs1, vl);
}

vfloat32m4_t test_vfsgnjx_vf_f32m4_m(vbool8_t vm, vfloat32m4_t vs2, float rs1, size_t vl) {
  return __riscv_vfsgnjx_vf_f32m4_m(vm, vs2, rs1, vl);
}

vfloat32m8_t test_vfsgnjx_vv_f32m8_m(vbool4_t vm, vfloat32m8_t vs2, vfloat32m8_t vs1, size_t vl) {
  return __riscv_vfsgnjx_vv_f32m8_m(vm, vs2, vs1, vl);
}

vfloat32m8_t test_vfsgnjx_vf_f32m8_m(vbool4_t vm, vfloat32m8_t vs2, float rs1, size_t vl) {
  return __riscv_vfsgnjx_vf_f32m8_m(vm, vs2, rs1, vl);
}

vfloat64m1_t test_vfsgnjx_vv_f64m1_m(vbool64_t vm, vfloat64m1_t vs2, vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfsgnjx_vv_f64m1_m(vm, vs2, vs1, vl);
}

vfloat64m1_t test_vfsgnjx_vf_f64m1_m(vbool64_t vm, vfloat64m1_t vs2, double rs1, size_t vl) {
  return __riscv_vfsgnjx_vf_f64m1_m(vm, vs2, rs1, vl);
}

vfloat64m2_t test_vfsgnjx_vv_f64m2_m(vbool32_t vm, vfloat64m2_t vs2, vfloat64m2_t vs1, size_t vl) {
  return __riscv_vfsgnjx_vv_f64m2_m(vm, vs2, vs1, vl);
}

vfloat64m2_t test_vfsgnjx_vf_f64m2_m(vbool32_t vm, vfloat64m2_t vs2, double rs1, size_t vl) {
  return __riscv_vfsgnjx_vf_f64m2_m(vm, vs2, rs1, vl);
}

vfloat64m4_t test_vfsgnjx_vv_f64m4_m(vbool16_t vm, vfloat64m4_t vs2, vfloat64m4_t vs1, size_t vl) {
  return __riscv_vfsgnjx_vv_f64m4_m(vm, vs2, vs1, vl);
}

vfloat64m4_t test_vfsgnjx_vf_f64m4_m(vbool16_t vm, vfloat64m4_t vs2, double rs1, size_t vl) {
  return __riscv_vfsgnjx_vf_f64m4_m(vm, vs2, rs1, vl);
}

vfloat64m8_t test_vfsgnjx_vv_f64m8_m(vbool8_t vm, vfloat64m8_t vs2, vfloat64m8_t vs1, size_t vl) {
  return __riscv_vfsgnjx_vv_f64m8_m(vm, vs2, vs1, vl);
}

vfloat64m8_t test_vfsgnjx_vf_f64m8_m(vbool8_t vm, vfloat64m8_t vs2, double rs1, size_t vl) {
  return __riscv_vfsgnjx_vf_f64m8_m(vm, vs2, rs1, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vfsgnjx\.[ivxfswum.]+\s+} 36 } } */
