#include <riscv_vector.h>
#include <stdint.h>

vfloat64m1_t test_vfwredosum_vs_f32mf2_f64m1_tu(vfloat64m1_t vd,
                                                vfloat32mf2_t vs2,
                                                vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_f32mf2_f64m1_tu(vd, vs2, vs1, vl);
}

vfloat64m1_t test_vfwredosum_vs_f32m1_f64m1_tu(vfloat64m1_t vd,
                                               vfloat32m1_t vs2,
                                               vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_f32m1_f64m1_tu(vd, vs2, vs1, vl);
}

vfloat64m1_t test_vfwredosum_vs_f32m2_f64m1_tu(vfloat64m1_t vd,
                                               vfloat32m2_t vs2,
                                               vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_f32m2_f64m1_tu(vd, vs2, vs1, vl);
}

vfloat64m1_t test_vfwredosum_vs_f32m4_f64m1_tu(vfloat64m1_t vd,
                                               vfloat32m4_t vs2,
                                               vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_f32m4_f64m1_tu(vd, vs2, vs1, vl);
}

vfloat64m1_t test_vfwredosum_vs_f32m8_f64m1_tu(vfloat64m1_t vd,
                                               vfloat32m8_t vs2,
                                               vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_f32m8_f64m1_tu(vd, vs2, vs1, vl);
}

vfloat64m1_t test_vfwredosum_vs_f32mf2_f64m1_tum(vbool64_t vm, vfloat64m1_t vd,
                                                 vfloat32mf2_t vs2,
                                                 vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_f32mf2_f64m1_tum(vm, vd, vs2, vs1, vl);
}

vfloat64m1_t test_vfwredosum_vs_f32m1_f64m1_tum(vbool32_t vm, vfloat64m1_t vd,
                                                vfloat32m1_t vs2,
                                                vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_f32m1_f64m1_tum(vm, vd, vs2, vs1, vl);
}

vfloat64m1_t test_vfwredosum_vs_f32m2_f64m1_tum(vbool16_t vm, vfloat64m1_t vd,
                                                vfloat32m2_t vs2,
                                                vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_f32m2_f64m1_tum(vm, vd, vs2, vs1, vl);
}

vfloat64m1_t test_vfwredosum_vs_f32m4_f64m1_tum(vbool8_t vm, vfloat64m1_t vd,
                                                vfloat32m4_t vs2,
                                                vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_f32m4_f64m1_tum(vm, vd, vs2, vs1, vl);
}

vfloat64m1_t test_vfwredosum_vs_f32m8_f64m1_tum(vbool4_t vm, vfloat64m1_t vd,
                                                vfloat32m8_t vs2,
                                                vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_f32m8_f64m1_tum(vm, vd, vs2, vs1, vl);
}

vfloat64m1_t test_vfwredosum_vs_f32mf2_f64m1_rm_tu(vfloat64m1_t vd,
                                                   vfloat32mf2_t vs2,
                                                   vfloat64m1_t vs1,
                                                   size_t vl) {
  return __riscv_vfwredosum_vs_f32mf2_f64m1_rm_tu(vd, vs2, vs1, __RISCV_FRM_RNE,
                                                  vl);
}

vfloat64m1_t test_vfwredosum_vs_f32m1_f64m1_rm_tu(vfloat64m1_t vd,
                                                  vfloat32m1_t vs2,
                                                  vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_f32m1_f64m1_rm_tu(vd, vs2, vs1, __RISCV_FRM_RNE,
                                                 vl);
}

vfloat64m1_t test_vfwredosum_vs_f32m2_f64m1_rm_tu(vfloat64m1_t vd,
                                                  vfloat32m2_t vs2,
                                                  vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_f32m2_f64m1_rm_tu(vd, vs2, vs1, __RISCV_FRM_RNE,
                                                 vl);
}

vfloat64m1_t test_vfwredosum_vs_f32m4_f64m1_rm_tu(vfloat64m1_t vd,
                                                  vfloat32m4_t vs2,
                                                  vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_f32m4_f64m1_rm_tu(vd, vs2, vs1, __RISCV_FRM_RNE,
                                                 vl);
}

vfloat64m1_t test_vfwredosum_vs_f32m8_f64m1_rm_tu(vfloat64m1_t vd,
                                                  vfloat32m8_t vs2,
                                                  vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_f32m8_f64m1_rm_tu(vd, vs2, vs1, __RISCV_FRM_RNE,
                                                 vl);
}

vfloat64m1_t test_vfwredosum_vs_f32mf2_f64m1_rm_tum(vbool64_t vm,
                                                    vfloat64m1_t vd,
                                                    vfloat32mf2_t vs2,
                                                    vfloat64m1_t vs1,
                                                    size_t vl) {
  return __riscv_vfwredosum_vs_f32mf2_f64m1_rm_tum(vm, vd, vs2, vs1,
                                                   __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwredosum_vs_f32m1_f64m1_rm_tum(vbool32_t vm,
                                                   vfloat64m1_t vd,
                                                   vfloat32m1_t vs2,
                                                   vfloat64m1_t vs1,
                                                   size_t vl) {
  return __riscv_vfwredosum_vs_f32m1_f64m1_rm_tum(vm, vd, vs2, vs1,
                                                  __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwredosum_vs_f32m2_f64m1_rm_tum(vbool16_t vm,
                                                   vfloat64m1_t vd,
                                                   vfloat32m2_t vs2,
                                                   vfloat64m1_t vs1,
                                                   size_t vl) {
  return __riscv_vfwredosum_vs_f32m2_f64m1_rm_tum(vm, vd, vs2, vs1,
                                                  __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwredosum_vs_f32m4_f64m1_rm_tum(vbool8_t vm, vfloat64m1_t vd,
                                                   vfloat32m4_t vs2,
                                                   vfloat64m1_t vs1,
                                                   size_t vl) {
  return __riscv_vfwredosum_vs_f32m4_f64m1_rm_tum(vm, vd, vs2, vs1,
                                                  __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwredosum_vs_f32m8_f64m1_rm_tum(vbool4_t vm, vfloat64m1_t vd,
                                                   vfloat32m8_t vs2,
                                                   vfloat64m1_t vs1,
                                                   size_t vl) {
  return __riscv_vfwredosum_vs_f32m8_f64m1_rm_tum(vm, vd, vs2, vs1,
                                                  __RISCV_FRM_RNE, vl);
}
