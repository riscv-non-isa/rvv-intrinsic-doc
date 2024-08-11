#include <riscv_vector.h>
#include <stdint.h>

vfloat16mf4_t test_vfmsub_vv_f16mf4_tu(vfloat16mf4_t vd, vfloat16mf4_t vs1,
                                       vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfmsub_tu(vd, vs1, vs2, vl);
}

vfloat16mf4_t test_vfmsub_vf_f16mf4_tu(vfloat16mf4_t vd, _Float16 rs1,
                                       vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfmsub_tu(vd, rs1, vs2, vl);
}

vfloat16mf2_t test_vfmsub_vv_f16mf2_tu(vfloat16mf2_t vd, vfloat16mf2_t vs1,
                                       vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfmsub_tu(vd, vs1, vs2, vl);
}

vfloat16mf2_t test_vfmsub_vf_f16mf2_tu(vfloat16mf2_t vd, _Float16 rs1,
                                       vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfmsub_tu(vd, rs1, vs2, vl);
}

vfloat16m1_t test_vfmsub_vv_f16m1_tu(vfloat16m1_t vd, vfloat16m1_t vs1,
                                     vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfmsub_tu(vd, vs1, vs2, vl);
}

vfloat16m1_t test_vfmsub_vf_f16m1_tu(vfloat16m1_t vd, _Float16 rs1,
                                     vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfmsub_tu(vd, rs1, vs2, vl);
}

vfloat16m2_t test_vfmsub_vv_f16m2_tu(vfloat16m2_t vd, vfloat16m2_t vs1,
                                     vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfmsub_tu(vd, vs1, vs2, vl);
}

vfloat16m2_t test_vfmsub_vf_f16m2_tu(vfloat16m2_t vd, _Float16 rs1,
                                     vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfmsub_tu(vd, rs1, vs2, vl);
}

vfloat16m4_t test_vfmsub_vv_f16m4_tu(vfloat16m4_t vd, vfloat16m4_t vs1,
                                     vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfmsub_tu(vd, vs1, vs2, vl);
}

vfloat16m4_t test_vfmsub_vf_f16m4_tu(vfloat16m4_t vd, _Float16 rs1,
                                     vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfmsub_tu(vd, rs1, vs2, vl);
}

vfloat16m8_t test_vfmsub_vv_f16m8_tu(vfloat16m8_t vd, vfloat16m8_t vs1,
                                     vfloat16m8_t vs2, size_t vl) {
  return __riscv_vfmsub_tu(vd, vs1, vs2, vl);
}

vfloat16m8_t test_vfmsub_vf_f16m8_tu(vfloat16m8_t vd, _Float16 rs1,
                                     vfloat16m8_t vs2, size_t vl) {
  return __riscv_vfmsub_tu(vd, rs1, vs2, vl);
}

vfloat16mf4_t test_vfmsub_vv_f16mf4_tum(vbool64_t vm, vfloat16mf4_t vd,
                                        vfloat16mf4_t vs1, vfloat16mf4_t vs2,
                                        size_t vl) {
  return __riscv_vfmsub_tum(vm, vd, vs1, vs2, vl);
}

vfloat16mf4_t test_vfmsub_vf_f16mf4_tum(vbool64_t vm, vfloat16mf4_t vd,
                                        _Float16 rs1, vfloat16mf4_t vs2,
                                        size_t vl) {
  return __riscv_vfmsub_tum(vm, vd, rs1, vs2, vl);
}

vfloat16mf2_t test_vfmsub_vv_f16mf2_tum(vbool32_t vm, vfloat16mf2_t vd,
                                        vfloat16mf2_t vs1, vfloat16mf2_t vs2,
                                        size_t vl) {
  return __riscv_vfmsub_tum(vm, vd, vs1, vs2, vl);
}

vfloat16mf2_t test_vfmsub_vf_f16mf2_tum(vbool32_t vm, vfloat16mf2_t vd,
                                        _Float16 rs1, vfloat16mf2_t vs2,
                                        size_t vl) {
  return __riscv_vfmsub_tum(vm, vd, rs1, vs2, vl);
}

vfloat16m1_t test_vfmsub_vv_f16m1_tum(vbool16_t vm, vfloat16m1_t vd,
                                      vfloat16m1_t vs1, vfloat16m1_t vs2,
                                      size_t vl) {
  return __riscv_vfmsub_tum(vm, vd, vs1, vs2, vl);
}

vfloat16m1_t test_vfmsub_vf_f16m1_tum(vbool16_t vm, vfloat16m1_t vd,
                                      _Float16 rs1, vfloat16m1_t vs2,
                                      size_t vl) {
  return __riscv_vfmsub_tum(vm, vd, rs1, vs2, vl);
}

vfloat16m2_t test_vfmsub_vv_f16m2_tum(vbool8_t vm, vfloat16m2_t vd,
                                      vfloat16m2_t vs1, vfloat16m2_t vs2,
                                      size_t vl) {
  return __riscv_vfmsub_tum(vm, vd, vs1, vs2, vl);
}

vfloat16m2_t test_vfmsub_vf_f16m2_tum(vbool8_t vm, vfloat16m2_t vd,
                                      _Float16 rs1, vfloat16m2_t vs2,
                                      size_t vl) {
  return __riscv_vfmsub_tum(vm, vd, rs1, vs2, vl);
}

vfloat16m4_t test_vfmsub_vv_f16m4_tum(vbool4_t vm, vfloat16m4_t vd,
                                      vfloat16m4_t vs1, vfloat16m4_t vs2,
                                      size_t vl) {
  return __riscv_vfmsub_tum(vm, vd, vs1, vs2, vl);
}

vfloat16m4_t test_vfmsub_vf_f16m4_tum(vbool4_t vm, vfloat16m4_t vd,
                                      _Float16 rs1, vfloat16m4_t vs2,
                                      size_t vl) {
  return __riscv_vfmsub_tum(vm, vd, rs1, vs2, vl);
}

vfloat16m8_t test_vfmsub_vv_f16m8_tum(vbool2_t vm, vfloat16m8_t vd,
                                      vfloat16m8_t vs1, vfloat16m8_t vs2,
                                      size_t vl) {
  return __riscv_vfmsub_tum(vm, vd, vs1, vs2, vl);
}

vfloat16m8_t test_vfmsub_vf_f16m8_tum(vbool2_t vm, vfloat16m8_t vd,
                                      _Float16 rs1, vfloat16m8_t vs2,
                                      size_t vl) {
  return __riscv_vfmsub_tum(vm, vd, rs1, vs2, vl);
}

vfloat16mf4_t test_vfmsub_vv_f16mf4_tumu(vbool64_t vm, vfloat16mf4_t vd,
                                         vfloat16mf4_t vs1, vfloat16mf4_t vs2,
                                         size_t vl) {
  return __riscv_vfmsub_tumu(vm, vd, vs1, vs2, vl);
}

vfloat16mf4_t test_vfmsub_vf_f16mf4_tumu(vbool64_t vm, vfloat16mf4_t vd,
                                         _Float16 rs1, vfloat16mf4_t vs2,
                                         size_t vl) {
  return __riscv_vfmsub_tumu(vm, vd, rs1, vs2, vl);
}

vfloat16mf2_t test_vfmsub_vv_f16mf2_tumu(vbool32_t vm, vfloat16mf2_t vd,
                                         vfloat16mf2_t vs1, vfloat16mf2_t vs2,
                                         size_t vl) {
  return __riscv_vfmsub_tumu(vm, vd, vs1, vs2, vl);
}

vfloat16mf2_t test_vfmsub_vf_f16mf2_tumu(vbool32_t vm, vfloat16mf2_t vd,
                                         _Float16 rs1, vfloat16mf2_t vs2,
                                         size_t vl) {
  return __riscv_vfmsub_tumu(vm, vd, rs1, vs2, vl);
}

vfloat16m1_t test_vfmsub_vv_f16m1_tumu(vbool16_t vm, vfloat16m1_t vd,
                                       vfloat16m1_t vs1, vfloat16m1_t vs2,
                                       size_t vl) {
  return __riscv_vfmsub_tumu(vm, vd, vs1, vs2, vl);
}

vfloat16m1_t test_vfmsub_vf_f16m1_tumu(vbool16_t vm, vfloat16m1_t vd,
                                       _Float16 rs1, vfloat16m1_t vs2,
                                       size_t vl) {
  return __riscv_vfmsub_tumu(vm, vd, rs1, vs2, vl);
}

vfloat16m2_t test_vfmsub_vv_f16m2_tumu(vbool8_t vm, vfloat16m2_t vd,
                                       vfloat16m2_t vs1, vfloat16m2_t vs2,
                                       size_t vl) {
  return __riscv_vfmsub_tumu(vm, vd, vs1, vs2, vl);
}

vfloat16m2_t test_vfmsub_vf_f16m2_tumu(vbool8_t vm, vfloat16m2_t vd,
                                       _Float16 rs1, vfloat16m2_t vs2,
                                       size_t vl) {
  return __riscv_vfmsub_tumu(vm, vd, rs1, vs2, vl);
}

vfloat16m4_t test_vfmsub_vv_f16m4_tumu(vbool4_t vm, vfloat16m4_t vd,
                                       vfloat16m4_t vs1, vfloat16m4_t vs2,
                                       size_t vl) {
  return __riscv_vfmsub_tumu(vm, vd, vs1, vs2, vl);
}

vfloat16m4_t test_vfmsub_vf_f16m4_tumu(vbool4_t vm, vfloat16m4_t vd,
                                       _Float16 rs1, vfloat16m4_t vs2,
                                       size_t vl) {
  return __riscv_vfmsub_tumu(vm, vd, rs1, vs2, vl);
}

vfloat16m8_t test_vfmsub_vv_f16m8_tumu(vbool2_t vm, vfloat16m8_t vd,
                                       vfloat16m8_t vs1, vfloat16m8_t vs2,
                                       size_t vl) {
  return __riscv_vfmsub_tumu(vm, vd, vs1, vs2, vl);
}

vfloat16m8_t test_vfmsub_vf_f16m8_tumu(vbool2_t vm, vfloat16m8_t vd,
                                       _Float16 rs1, vfloat16m8_t vs2,
                                       size_t vl) {
  return __riscv_vfmsub_tumu(vm, vd, rs1, vs2, vl);
}

vfloat16mf4_t test_vfmsub_vv_f16mf4_mu(vbool64_t vm, vfloat16mf4_t vd,
                                       vfloat16mf4_t vs1, vfloat16mf4_t vs2,
                                       size_t vl) {
  return __riscv_vfmsub_mu(vm, vd, vs1, vs2, vl);
}

vfloat16mf4_t test_vfmsub_vf_f16mf4_mu(vbool64_t vm, vfloat16mf4_t vd,
                                       _Float16 rs1, vfloat16mf4_t vs2,
                                       size_t vl) {
  return __riscv_vfmsub_mu(vm, vd, rs1, vs2, vl);
}

vfloat16mf2_t test_vfmsub_vv_f16mf2_mu(vbool32_t vm, vfloat16mf2_t vd,
                                       vfloat16mf2_t vs1, vfloat16mf2_t vs2,
                                       size_t vl) {
  return __riscv_vfmsub_mu(vm, vd, vs1, vs2, vl);
}

vfloat16mf2_t test_vfmsub_vf_f16mf2_mu(vbool32_t vm, vfloat16mf2_t vd,
                                       _Float16 rs1, vfloat16mf2_t vs2,
                                       size_t vl) {
  return __riscv_vfmsub_mu(vm, vd, rs1, vs2, vl);
}

vfloat16m1_t test_vfmsub_vv_f16m1_mu(vbool16_t vm, vfloat16m1_t vd,
                                     vfloat16m1_t vs1, vfloat16m1_t vs2,
                                     size_t vl) {
  return __riscv_vfmsub_mu(vm, vd, vs1, vs2, vl);
}

vfloat16m1_t test_vfmsub_vf_f16m1_mu(vbool16_t vm, vfloat16m1_t vd,
                                     _Float16 rs1, vfloat16m1_t vs2,
                                     size_t vl) {
  return __riscv_vfmsub_mu(vm, vd, rs1, vs2, vl);
}

vfloat16m2_t test_vfmsub_vv_f16m2_mu(vbool8_t vm, vfloat16m2_t vd,
                                     vfloat16m2_t vs1, vfloat16m2_t vs2,
                                     size_t vl) {
  return __riscv_vfmsub_mu(vm, vd, vs1, vs2, vl);
}

vfloat16m2_t test_vfmsub_vf_f16m2_mu(vbool8_t vm, vfloat16m2_t vd, _Float16 rs1,
                                     vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfmsub_mu(vm, vd, rs1, vs2, vl);
}

vfloat16m4_t test_vfmsub_vv_f16m4_mu(vbool4_t vm, vfloat16m4_t vd,
                                     vfloat16m4_t vs1, vfloat16m4_t vs2,
                                     size_t vl) {
  return __riscv_vfmsub_mu(vm, vd, vs1, vs2, vl);
}

vfloat16m4_t test_vfmsub_vf_f16m4_mu(vbool4_t vm, vfloat16m4_t vd, _Float16 rs1,
                                     vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfmsub_mu(vm, vd, rs1, vs2, vl);
}

vfloat16m8_t test_vfmsub_vv_f16m8_mu(vbool2_t vm, vfloat16m8_t vd,
                                     vfloat16m8_t vs1, vfloat16m8_t vs2,
                                     size_t vl) {
  return __riscv_vfmsub_mu(vm, vd, vs1, vs2, vl);
}

vfloat16m8_t test_vfmsub_vf_f16m8_mu(vbool2_t vm, vfloat16m8_t vd, _Float16 rs1,
                                     vfloat16m8_t vs2, size_t vl) {
  return __riscv_vfmsub_mu(vm, vd, rs1, vs2, vl);
}

vfloat16mf4_t test_vfmsub_vv_f16mf4_rm_tu(vfloat16mf4_t vd, vfloat16mf4_t vs1,
                                          vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfmsub_tu(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16mf4_t test_vfmsub_vf_f16mf4_rm_tu(vfloat16mf4_t vd, _Float16 rs1,
                                          vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfmsub_tu(vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16mf2_t test_vfmsub_vv_f16mf2_rm_tu(vfloat16mf2_t vd, vfloat16mf2_t vs1,
                                          vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfmsub_tu(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16mf2_t test_vfmsub_vf_f16mf2_rm_tu(vfloat16mf2_t vd, _Float16 rs1,
                                          vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfmsub_tu(vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m1_t test_vfmsub_vv_f16m1_rm_tu(vfloat16m1_t vd, vfloat16m1_t vs1,
                                        vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfmsub_tu(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m1_t test_vfmsub_vf_f16m1_rm_tu(vfloat16m1_t vd, _Float16 rs1,
                                        vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfmsub_tu(vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m2_t test_vfmsub_vv_f16m2_rm_tu(vfloat16m2_t vd, vfloat16m2_t vs1,
                                        vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfmsub_tu(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m2_t test_vfmsub_vf_f16m2_rm_tu(vfloat16m2_t vd, _Float16 rs1,
                                        vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfmsub_tu(vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m4_t test_vfmsub_vv_f16m4_rm_tu(vfloat16m4_t vd, vfloat16m4_t vs1,
                                        vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfmsub_tu(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m4_t test_vfmsub_vf_f16m4_rm_tu(vfloat16m4_t vd, _Float16 rs1,
                                        vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfmsub_tu(vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m8_t test_vfmsub_vv_f16m8_rm_tu(vfloat16m8_t vd, vfloat16m8_t vs1,
                                        vfloat16m8_t vs2, size_t vl) {
  return __riscv_vfmsub_tu(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m8_t test_vfmsub_vf_f16m8_rm_tu(vfloat16m8_t vd, _Float16 rs1,
                                        vfloat16m8_t vs2, size_t vl) {
  return __riscv_vfmsub_tu(vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16mf4_t test_vfmsub_vv_f16mf4_rm_tum(vbool64_t vm, vfloat16mf4_t vd,
                                           vfloat16mf4_t vs1, vfloat16mf4_t vs2,
                                           size_t vl) {
  return __riscv_vfmsub_tum(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16mf4_t test_vfmsub_vf_f16mf4_rm_tum(vbool64_t vm, vfloat16mf4_t vd,
                                           _Float16 rs1, vfloat16mf4_t vs2,
                                           size_t vl) {
  return __riscv_vfmsub_tum(vm, vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16mf2_t test_vfmsub_vv_f16mf2_rm_tum(vbool32_t vm, vfloat16mf2_t vd,
                                           vfloat16mf2_t vs1, vfloat16mf2_t vs2,
                                           size_t vl) {
  return __riscv_vfmsub_tum(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16mf2_t test_vfmsub_vf_f16mf2_rm_tum(vbool32_t vm, vfloat16mf2_t vd,
                                           _Float16 rs1, vfloat16mf2_t vs2,
                                           size_t vl) {
  return __riscv_vfmsub_tum(vm, vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m1_t test_vfmsub_vv_f16m1_rm_tum(vbool16_t vm, vfloat16m1_t vd,
                                         vfloat16m1_t vs1, vfloat16m1_t vs2,
                                         size_t vl) {
  return __riscv_vfmsub_tum(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m1_t test_vfmsub_vf_f16m1_rm_tum(vbool16_t vm, vfloat16m1_t vd,
                                         _Float16 rs1, vfloat16m1_t vs2,
                                         size_t vl) {
  return __riscv_vfmsub_tum(vm, vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m2_t test_vfmsub_vv_f16m2_rm_tum(vbool8_t vm, vfloat16m2_t vd,
                                         vfloat16m2_t vs1, vfloat16m2_t vs2,
                                         size_t vl) {
  return __riscv_vfmsub_tum(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m2_t test_vfmsub_vf_f16m2_rm_tum(vbool8_t vm, vfloat16m2_t vd,
                                         _Float16 rs1, vfloat16m2_t vs2,
                                         size_t vl) {
  return __riscv_vfmsub_tum(vm, vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m4_t test_vfmsub_vv_f16m4_rm_tum(vbool4_t vm, vfloat16m4_t vd,
                                         vfloat16m4_t vs1, vfloat16m4_t vs2,
                                         size_t vl) {
  return __riscv_vfmsub_tum(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m4_t test_vfmsub_vf_f16m4_rm_tum(vbool4_t vm, vfloat16m4_t vd,
                                         _Float16 rs1, vfloat16m4_t vs2,
                                         size_t vl) {
  return __riscv_vfmsub_tum(vm, vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m8_t test_vfmsub_vv_f16m8_rm_tum(vbool2_t vm, vfloat16m8_t vd,
                                         vfloat16m8_t vs1, vfloat16m8_t vs2,
                                         size_t vl) {
  return __riscv_vfmsub_tum(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m8_t test_vfmsub_vf_f16m8_rm_tum(vbool2_t vm, vfloat16m8_t vd,
                                         _Float16 rs1, vfloat16m8_t vs2,
                                         size_t vl) {
  return __riscv_vfmsub_tum(vm, vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16mf4_t test_vfmsub_vv_f16mf4_rm_tumu(vbool64_t vm, vfloat16mf4_t vd,
                                            vfloat16mf4_t vs1,
                                            vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfmsub_tumu(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16mf4_t test_vfmsub_vf_f16mf4_rm_tumu(vbool64_t vm, vfloat16mf4_t vd,
                                            _Float16 rs1, vfloat16mf4_t vs2,
                                            size_t vl) {
  return __riscv_vfmsub_tumu(vm, vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16mf2_t test_vfmsub_vv_f16mf2_rm_tumu(vbool32_t vm, vfloat16mf2_t vd,
                                            vfloat16mf2_t vs1,
                                            vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfmsub_tumu(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16mf2_t test_vfmsub_vf_f16mf2_rm_tumu(vbool32_t vm, vfloat16mf2_t vd,
                                            _Float16 rs1, vfloat16mf2_t vs2,
                                            size_t vl) {
  return __riscv_vfmsub_tumu(vm, vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m1_t test_vfmsub_vv_f16m1_rm_tumu(vbool16_t vm, vfloat16m1_t vd,
                                          vfloat16m1_t vs1, vfloat16m1_t vs2,
                                          size_t vl) {
  return __riscv_vfmsub_tumu(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m1_t test_vfmsub_vf_f16m1_rm_tumu(vbool16_t vm, vfloat16m1_t vd,
                                          _Float16 rs1, vfloat16m1_t vs2,
                                          size_t vl) {
  return __riscv_vfmsub_tumu(vm, vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m2_t test_vfmsub_vv_f16m2_rm_tumu(vbool8_t vm, vfloat16m2_t vd,
                                          vfloat16m2_t vs1, vfloat16m2_t vs2,
                                          size_t vl) {
  return __riscv_vfmsub_tumu(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m2_t test_vfmsub_vf_f16m2_rm_tumu(vbool8_t vm, vfloat16m2_t vd,
                                          _Float16 rs1, vfloat16m2_t vs2,
                                          size_t vl) {
  return __riscv_vfmsub_tumu(vm, vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m4_t test_vfmsub_vv_f16m4_rm_tumu(vbool4_t vm, vfloat16m4_t vd,
                                          vfloat16m4_t vs1, vfloat16m4_t vs2,
                                          size_t vl) {
  return __riscv_vfmsub_tumu(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m4_t test_vfmsub_vf_f16m4_rm_tumu(vbool4_t vm, vfloat16m4_t vd,
                                          _Float16 rs1, vfloat16m4_t vs2,
                                          size_t vl) {
  return __riscv_vfmsub_tumu(vm, vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m8_t test_vfmsub_vv_f16m8_rm_tumu(vbool2_t vm, vfloat16m8_t vd,
                                          vfloat16m8_t vs1, vfloat16m8_t vs2,
                                          size_t vl) {
  return __riscv_vfmsub_tumu(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m8_t test_vfmsub_vf_f16m8_rm_tumu(vbool2_t vm, vfloat16m8_t vd,
                                          _Float16 rs1, vfloat16m8_t vs2,
                                          size_t vl) {
  return __riscv_vfmsub_tumu(vm, vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16mf4_t test_vfmsub_vv_f16mf4_rm_mu(vbool64_t vm, vfloat16mf4_t vd,
                                          vfloat16mf4_t vs1, vfloat16mf4_t vs2,
                                          size_t vl) {
  return __riscv_vfmsub_mu(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16mf4_t test_vfmsub_vf_f16mf4_rm_mu(vbool64_t vm, vfloat16mf4_t vd,
                                          _Float16 rs1, vfloat16mf4_t vs2,
                                          size_t vl) {
  return __riscv_vfmsub_mu(vm, vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16mf2_t test_vfmsub_vv_f16mf2_rm_mu(vbool32_t vm, vfloat16mf2_t vd,
                                          vfloat16mf2_t vs1, vfloat16mf2_t vs2,
                                          size_t vl) {
  return __riscv_vfmsub_mu(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16mf2_t test_vfmsub_vf_f16mf2_rm_mu(vbool32_t vm, vfloat16mf2_t vd,
                                          _Float16 rs1, vfloat16mf2_t vs2,
                                          size_t vl) {
  return __riscv_vfmsub_mu(vm, vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m1_t test_vfmsub_vv_f16m1_rm_mu(vbool16_t vm, vfloat16m1_t vd,
                                        vfloat16m1_t vs1, vfloat16m1_t vs2,
                                        size_t vl) {
  return __riscv_vfmsub_mu(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m1_t test_vfmsub_vf_f16m1_rm_mu(vbool16_t vm, vfloat16m1_t vd,
                                        _Float16 rs1, vfloat16m1_t vs2,
                                        size_t vl) {
  return __riscv_vfmsub_mu(vm, vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m2_t test_vfmsub_vv_f16m2_rm_mu(vbool8_t vm, vfloat16m2_t vd,
                                        vfloat16m2_t vs1, vfloat16m2_t vs2,
                                        size_t vl) {
  return __riscv_vfmsub_mu(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m2_t test_vfmsub_vf_f16m2_rm_mu(vbool8_t vm, vfloat16m2_t vd,
                                        _Float16 rs1, vfloat16m2_t vs2,
                                        size_t vl) {
  return __riscv_vfmsub_mu(vm, vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m4_t test_vfmsub_vv_f16m4_rm_mu(vbool4_t vm, vfloat16m4_t vd,
                                        vfloat16m4_t vs1, vfloat16m4_t vs2,
                                        size_t vl) {
  return __riscv_vfmsub_mu(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m4_t test_vfmsub_vf_f16m4_rm_mu(vbool4_t vm, vfloat16m4_t vd,
                                        _Float16 rs1, vfloat16m4_t vs2,
                                        size_t vl) {
  return __riscv_vfmsub_mu(vm, vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m8_t test_vfmsub_vv_f16m8_rm_mu(vbool2_t vm, vfloat16m8_t vd,
                                        vfloat16m8_t vs1, vfloat16m8_t vs2,
                                        size_t vl) {
  return __riscv_vfmsub_mu(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m8_t test_vfmsub_vf_f16m8_rm_mu(vbool2_t vm, vfloat16m8_t vd,
                                        _Float16 rs1, vfloat16m8_t vs2,
                                        size_t vl) {
  return __riscv_vfmsub_mu(vm, vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}
