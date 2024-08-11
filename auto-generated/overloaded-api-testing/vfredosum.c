#include <riscv_vector.h>
#include <stdint.h>

vfloat32m1_t test_vfredosum_vs_f32mf2_f32m1(vfloat32mf2_t vs2, vfloat32m1_t vs1,
                                            size_t vl) {
  return __riscv_vfredosum(vs2, vs1, vl);
}

vfloat32m1_t test_vfredosum_vs_f32m1_f32m1(vfloat32m1_t vs2, vfloat32m1_t vs1,
                                           size_t vl) {
  return __riscv_vfredosum(vs2, vs1, vl);
}

vfloat32m1_t test_vfredosum_vs_f32m2_f32m1(vfloat32m2_t vs2, vfloat32m1_t vs1,
                                           size_t vl) {
  return __riscv_vfredosum(vs2, vs1, vl);
}

vfloat32m1_t test_vfredosum_vs_f32m4_f32m1(vfloat32m4_t vs2, vfloat32m1_t vs1,
                                           size_t vl) {
  return __riscv_vfredosum(vs2, vs1, vl);
}

vfloat32m1_t test_vfredosum_vs_f32m8_f32m1(vfloat32m8_t vs2, vfloat32m1_t vs1,
                                           size_t vl) {
  return __riscv_vfredosum(vs2, vs1, vl);
}

vfloat64m1_t test_vfredosum_vs_f64m1_f64m1(vfloat64m1_t vs2, vfloat64m1_t vs1,
                                           size_t vl) {
  return __riscv_vfredosum(vs2, vs1, vl);
}

vfloat64m1_t test_vfredosum_vs_f64m2_f64m1(vfloat64m2_t vs2, vfloat64m1_t vs1,
                                           size_t vl) {
  return __riscv_vfredosum(vs2, vs1, vl);
}

vfloat64m1_t test_vfredosum_vs_f64m4_f64m1(vfloat64m4_t vs2, vfloat64m1_t vs1,
                                           size_t vl) {
  return __riscv_vfredosum(vs2, vs1, vl);
}

vfloat64m1_t test_vfredosum_vs_f64m8_f64m1(vfloat64m8_t vs2, vfloat64m1_t vs1,
                                           size_t vl) {
  return __riscv_vfredosum(vs2, vs1, vl);
}

vfloat32m1_t test_vfredosum_vs_f32mf2_f32m1_m(vbool64_t vm, vfloat32mf2_t vs2,
                                              vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfredosum(vm, vs2, vs1, vl);
}

vfloat32m1_t test_vfredosum_vs_f32m1_f32m1_m(vbool32_t vm, vfloat32m1_t vs2,
                                             vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfredosum(vm, vs2, vs1, vl);
}

vfloat32m1_t test_vfredosum_vs_f32m2_f32m1_m(vbool16_t vm, vfloat32m2_t vs2,
                                             vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfredosum(vm, vs2, vs1, vl);
}

vfloat32m1_t test_vfredosum_vs_f32m4_f32m1_m(vbool8_t vm, vfloat32m4_t vs2,
                                             vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfredosum(vm, vs2, vs1, vl);
}

vfloat32m1_t test_vfredosum_vs_f32m8_f32m1_m(vbool4_t vm, vfloat32m8_t vs2,
                                             vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfredosum(vm, vs2, vs1, vl);
}

vfloat64m1_t test_vfredosum_vs_f64m1_f64m1_m(vbool64_t vm, vfloat64m1_t vs2,
                                             vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfredosum(vm, vs2, vs1, vl);
}

vfloat64m1_t test_vfredosum_vs_f64m2_f64m1_m(vbool32_t vm, vfloat64m2_t vs2,
                                             vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfredosum(vm, vs2, vs1, vl);
}

vfloat64m1_t test_vfredosum_vs_f64m4_f64m1_m(vbool16_t vm, vfloat64m4_t vs2,
                                             vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfredosum(vm, vs2, vs1, vl);
}

vfloat64m1_t test_vfredosum_vs_f64m8_f64m1_m(vbool8_t vm, vfloat64m8_t vs2,
                                             vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfredosum(vm, vs2, vs1, vl);
}

vfloat32m1_t test_vfredosum_vs_f32mf2_f32m1_rm(vfloat32mf2_t vs2,
                                               vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfredosum(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfredosum_vs_f32m1_f32m1_rm(vfloat32m1_t vs2,
                                              vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfredosum(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfredosum_vs_f32m2_f32m1_rm(vfloat32m2_t vs2,
                                              vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfredosum(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfredosum_vs_f32m4_f32m1_rm(vfloat32m4_t vs2,
                                              vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfredosum(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfredosum_vs_f32m8_f32m1_rm(vfloat32m8_t vs2,
                                              vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfredosum(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfredosum_vs_f64m1_f64m1_rm(vfloat64m1_t vs2,
                                              vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfredosum(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfredosum_vs_f64m2_f64m1_rm(vfloat64m2_t vs2,
                                              vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfredosum(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfredosum_vs_f64m4_f64m1_rm(vfloat64m4_t vs2,
                                              vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfredosum(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfredosum_vs_f64m8_f64m1_rm(vfloat64m8_t vs2,
                                              vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfredosum(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfredosum_vs_f32mf2_f32m1_rm_m(vbool64_t vm,
                                                 vfloat32mf2_t vs2,
                                                 vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfredosum(vm, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfredosum_vs_f32m1_f32m1_rm_m(vbool32_t vm, vfloat32m1_t vs2,
                                                vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfredosum(vm, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfredosum_vs_f32m2_f32m1_rm_m(vbool16_t vm, vfloat32m2_t vs2,
                                                vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfredosum(vm, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfredosum_vs_f32m4_f32m1_rm_m(vbool8_t vm, vfloat32m4_t vs2,
                                                vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfredosum(vm, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfredosum_vs_f32m8_f32m1_rm_m(vbool4_t vm, vfloat32m8_t vs2,
                                                vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfredosum(vm, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfredosum_vs_f64m1_f64m1_rm_m(vbool64_t vm, vfloat64m1_t vs2,
                                                vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfredosum(vm, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfredosum_vs_f64m2_f64m1_rm_m(vbool32_t vm, vfloat64m2_t vs2,
                                                vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfredosum(vm, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfredosum_vs_f64m4_f64m1_rm_m(vbool16_t vm, vfloat64m4_t vs2,
                                                vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfredosum(vm, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfredosum_vs_f64m8_f64m1_rm_m(vbool8_t vm, vfloat64m8_t vs2,
                                                vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfredosum(vm, vs2, vs1, __RISCV_FRM_RNE, vl);
}
