/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

vbool64_t test_vmfge_vv_f32mf2_b64_mu(vbool64_t vm, vbool64_t vd, vfloat32mf2_t vs2, vfloat32mf2_t vs1, size_t vl) {
  return __riscv_vmfge_mu(vm, vd, vs2, vs1, vl);
}

vbool64_t test_vmfge_vf_f32mf2_b64_mu(vbool64_t vm, vbool64_t vd, vfloat32mf2_t vs2, float rs1, size_t vl) {
  return __riscv_vmfge_mu(vm, vd, vs2, rs1, vl);
}

vbool32_t test_vmfge_vv_f32m1_b32_mu(vbool32_t vm, vbool32_t vd, vfloat32m1_t vs2, vfloat32m1_t vs1, size_t vl) {
  return __riscv_vmfge_mu(vm, vd, vs2, vs1, vl);
}

vbool32_t test_vmfge_vf_f32m1_b32_mu(vbool32_t vm, vbool32_t vd, vfloat32m1_t vs2, float rs1, size_t vl) {
  return __riscv_vmfge_mu(vm, vd, vs2, rs1, vl);
}

vbool16_t test_vmfge_vv_f32m2_b16_mu(vbool16_t vm, vbool16_t vd, vfloat32m2_t vs2, vfloat32m2_t vs1, size_t vl) {
  return __riscv_vmfge_mu(vm, vd, vs2, vs1, vl);
}

vbool16_t test_vmfge_vf_f32m2_b16_mu(vbool16_t vm, vbool16_t vd, vfloat32m2_t vs2, float rs1, size_t vl) {
  return __riscv_vmfge_mu(vm, vd, vs2, rs1, vl);
}

vbool8_t test_vmfge_vv_f32m4_b8_mu(vbool8_t vm, vbool8_t vd, vfloat32m4_t vs2, vfloat32m4_t vs1, size_t vl) {
  return __riscv_vmfge_mu(vm, vd, vs2, vs1, vl);
}

vbool8_t test_vmfge_vf_f32m4_b8_mu(vbool8_t vm, vbool8_t vd, vfloat32m4_t vs2, float rs1, size_t vl) {
  return __riscv_vmfge_mu(vm, vd, vs2, rs1, vl);
}

vbool4_t test_vmfge_vv_f32m8_b4_mu(vbool4_t vm, vbool4_t vd, vfloat32m8_t vs2, vfloat32m8_t vs1, size_t vl) {
  return __riscv_vmfge_mu(vm, vd, vs2, vs1, vl);
}

vbool4_t test_vmfge_vf_f32m8_b4_mu(vbool4_t vm, vbool4_t vd, vfloat32m8_t vs2, float rs1, size_t vl) {
  return __riscv_vmfge_mu(vm, vd, vs2, rs1, vl);
}

vbool64_t test_vmfge_vv_f64m1_b64_mu(vbool64_t vm, vbool64_t vd, vfloat64m1_t vs2, vfloat64m1_t vs1, size_t vl) {
  return __riscv_vmfge_mu(vm, vd, vs2, vs1, vl);
}

vbool64_t test_vmfge_vf_f64m1_b64_mu(vbool64_t vm, vbool64_t vd, vfloat64m1_t vs2, double rs1, size_t vl) {
  return __riscv_vmfge_mu(vm, vd, vs2, rs1, vl);
}

vbool32_t test_vmfge_vv_f64m2_b32_mu(vbool32_t vm, vbool32_t vd, vfloat64m2_t vs2, vfloat64m2_t vs1, size_t vl) {
  return __riscv_vmfge_mu(vm, vd, vs2, vs1, vl);
}

vbool32_t test_vmfge_vf_f64m2_b32_mu(vbool32_t vm, vbool32_t vd, vfloat64m2_t vs2, double rs1, size_t vl) {
  return __riscv_vmfge_mu(vm, vd, vs2, rs1, vl);
}

vbool16_t test_vmfge_vv_f64m4_b16_mu(vbool16_t vm, vbool16_t vd, vfloat64m4_t vs2, vfloat64m4_t vs1, size_t vl) {
  return __riscv_vmfge_mu(vm, vd, vs2, vs1, vl);
}

vbool16_t test_vmfge_vf_f64m4_b16_mu(vbool16_t vm, vbool16_t vd, vfloat64m4_t vs2, double rs1, size_t vl) {
  return __riscv_vmfge_mu(vm, vd, vs2, rs1, vl);
}

vbool8_t test_vmfge_vv_f64m8_b8_mu(vbool8_t vm, vbool8_t vd, vfloat64m8_t vs2, vfloat64m8_t vs1, size_t vl) {
  return __riscv_vmfge_mu(vm, vd, vs2, vs1, vl);
}

vbool8_t test_vmfge_vf_f64m8_b8_mu(vbool8_t vm, vbool8_t vd, vfloat64m8_t vs2, double rs1, size_t vl) {
  return __riscv_vmfge_mu(vm, vd, vs2, rs1, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vmfge\.[ivxfswum.]+\s+} 18 } } */
