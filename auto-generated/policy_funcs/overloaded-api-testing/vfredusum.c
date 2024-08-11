#include <riscv_vector.h>
#include <stdint.h>

vfloat32m1_t test_vfredusum_vs_f32mf2_f32m1_tu(vfloat32m1_t vd,
                                               vfloat32mf2_t vs2,
                                               vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfredusum_tu(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfredusum_vs_f32m1_f32m1_tu(vfloat32m1_t vd, vfloat32m1_t vs2,
                                              vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfredusum_tu(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfredusum_vs_f32m2_f32m1_tu(vfloat32m1_t vd, vfloat32m2_t vs2,
                                              vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfredusum_tu(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfredusum_vs_f32m4_f32m1_tu(vfloat32m1_t vd, vfloat32m4_t vs2,
                                              vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfredusum_tu(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfredusum_vs_f32m8_f32m1_tu(vfloat32m1_t vd, vfloat32m8_t vs2,
                                              vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfredusum_tu(vd, vs2, vs1, vl);
}

vfloat64m1_t test_vfredusum_vs_f64m1_f64m1_tu(vfloat64m1_t vd, vfloat64m1_t vs2,
                                              vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfredusum_tu(vd, vs2, vs1, vl);
}

vfloat64m1_t test_vfredusum_vs_f64m2_f64m1_tu(vfloat64m1_t vd, vfloat64m2_t vs2,
                                              vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfredusum_tu(vd, vs2, vs1, vl);
}

vfloat64m1_t test_vfredusum_vs_f64m4_f64m1_tu(vfloat64m1_t vd, vfloat64m4_t vs2,
                                              vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfredusum_tu(vd, vs2, vs1, vl);
}

vfloat64m1_t test_vfredusum_vs_f64m8_f64m1_tu(vfloat64m1_t vd, vfloat64m8_t vs2,
                                              vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfredusum_tu(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfredusum_vs_f32mf2_f32m1_tum(vbool64_t vm, vfloat32m1_t vd,
                                                vfloat32mf2_t vs2,
                                                vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfredusum_tum(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfredusum_vs_f32m1_f32m1_tum(vbool32_t vm, vfloat32m1_t vd,
                                               vfloat32m1_t vs2,
                                               vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfredusum_tum(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfredusum_vs_f32m2_f32m1_tum(vbool16_t vm, vfloat32m1_t vd,
                                               vfloat32m2_t vs2,
                                               vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfredusum_tum(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfredusum_vs_f32m4_f32m1_tum(vbool8_t vm, vfloat32m1_t vd,
                                               vfloat32m4_t vs2,
                                               vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfredusum_tum(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfredusum_vs_f32m8_f32m1_tum(vbool4_t vm, vfloat32m1_t vd,
                                               vfloat32m8_t vs2,
                                               vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfredusum_tum(vm, vd, vs2, vs1, vl);
}

vfloat64m1_t test_vfredusum_vs_f64m1_f64m1_tum(vbool64_t vm, vfloat64m1_t vd,
                                               vfloat64m1_t vs2,
                                               vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfredusum_tum(vm, vd, vs2, vs1, vl);
}

vfloat64m1_t test_vfredusum_vs_f64m2_f64m1_tum(vbool32_t vm, vfloat64m1_t vd,
                                               vfloat64m2_t vs2,
                                               vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfredusum_tum(vm, vd, vs2, vs1, vl);
}

vfloat64m1_t test_vfredusum_vs_f64m4_f64m1_tum(vbool16_t vm, vfloat64m1_t vd,
                                               vfloat64m4_t vs2,
                                               vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfredusum_tum(vm, vd, vs2, vs1, vl);
}

vfloat64m1_t test_vfredusum_vs_f64m8_f64m1_tum(vbool8_t vm, vfloat64m1_t vd,
                                               vfloat64m8_t vs2,
                                               vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfredusum_tum(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfredusum_vs_f32mf2_f32m1_rm_tu(vfloat32m1_t vd,
                                                  vfloat32mf2_t vs2,
                                                  vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfredusum_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfredusum_vs_f32m1_f32m1_rm_tu(vfloat32m1_t vd,
                                                 vfloat32m1_t vs2,
                                                 vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfredusum_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfredusum_vs_f32m2_f32m1_rm_tu(vfloat32m1_t vd,
                                                 vfloat32m2_t vs2,
                                                 vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfredusum_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfredusum_vs_f32m4_f32m1_rm_tu(vfloat32m1_t vd,
                                                 vfloat32m4_t vs2,
                                                 vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfredusum_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfredusum_vs_f32m8_f32m1_rm_tu(vfloat32m1_t vd,
                                                 vfloat32m8_t vs2,
                                                 vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfredusum_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfredusum_vs_f64m1_f64m1_rm_tu(vfloat64m1_t vd,
                                                 vfloat64m1_t vs2,
                                                 vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfredusum_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfredusum_vs_f64m2_f64m1_rm_tu(vfloat64m1_t vd,
                                                 vfloat64m2_t vs2,
                                                 vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfredusum_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfredusum_vs_f64m4_f64m1_rm_tu(vfloat64m1_t vd,
                                                 vfloat64m4_t vs2,
                                                 vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfredusum_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfredusum_vs_f64m8_f64m1_rm_tu(vfloat64m1_t vd,
                                                 vfloat64m8_t vs2,
                                                 vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfredusum_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfredusum_vs_f32mf2_f32m1_rm_tum(vbool64_t vm,
                                                   vfloat32m1_t vd,
                                                   vfloat32mf2_t vs2,
                                                   vfloat32m1_t vs1,
                                                   size_t vl) {
  return __riscv_vfredusum_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfredusum_vs_f32m1_f32m1_rm_tum(vbool32_t vm, vfloat32m1_t vd,
                                                  vfloat32m1_t vs2,
                                                  vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfredusum_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfredusum_vs_f32m2_f32m1_rm_tum(vbool16_t vm, vfloat32m1_t vd,
                                                  vfloat32m2_t vs2,
                                                  vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfredusum_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfredusum_vs_f32m4_f32m1_rm_tum(vbool8_t vm, vfloat32m1_t vd,
                                                  vfloat32m4_t vs2,
                                                  vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfredusum_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfredusum_vs_f32m8_f32m1_rm_tum(vbool4_t vm, vfloat32m1_t vd,
                                                  vfloat32m8_t vs2,
                                                  vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfredusum_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfredusum_vs_f64m1_f64m1_rm_tum(vbool64_t vm, vfloat64m1_t vd,
                                                  vfloat64m1_t vs2,
                                                  vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfredusum_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfredusum_vs_f64m2_f64m1_rm_tum(vbool32_t vm, vfloat64m1_t vd,
                                                  vfloat64m2_t vs2,
                                                  vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfredusum_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfredusum_vs_f64m4_f64m1_rm_tum(vbool16_t vm, vfloat64m1_t vd,
                                                  vfloat64m4_t vs2,
                                                  vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfredusum_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfredusum_vs_f64m8_f64m1_rm_tum(vbool8_t vm, vfloat64m1_t vd,
                                                  vfloat64m8_t vs2,
                                                  vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfredusum_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}
