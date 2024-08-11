#include <riscv_vector.h>
#include <stdint.h>

vfloat64m1_t test_vfwnmacc_vv_f64m1_tu(vfloat64m1_t vd, vfloat32mf2_t vs1,
                                       vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_vv_f64m1_tu(vd, vs1, vs2, vl);
}

vfloat64m1_t test_vfwnmacc_vf_f64m1_tu(vfloat64m1_t vd, float vs1,
                                       vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_vf_f64m1_tu(vd, vs1, vs2, vl);
}

vfloat64m2_t test_vfwnmacc_vv_f64m2_tu(vfloat64m2_t vd, vfloat32m1_t vs1,
                                       vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwnmacc_vv_f64m2_tu(vd, vs1, vs2, vl);
}

vfloat64m2_t test_vfwnmacc_vf_f64m2_tu(vfloat64m2_t vd, float vs1,
                                       vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwnmacc_vf_f64m2_tu(vd, vs1, vs2, vl);
}

vfloat64m4_t test_vfwnmacc_vv_f64m4_tu(vfloat64m4_t vd, vfloat32m2_t vs1,
                                       vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_vv_f64m4_tu(vd, vs1, vs2, vl);
}

vfloat64m4_t test_vfwnmacc_vf_f64m4_tu(vfloat64m4_t vd, float vs1,
                                       vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_vf_f64m4_tu(vd, vs1, vs2, vl);
}

vfloat64m8_t test_vfwnmacc_vv_f64m8_tu(vfloat64m8_t vd, vfloat32m4_t vs1,
                                       vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwnmacc_vv_f64m8_tu(vd, vs1, vs2, vl);
}

vfloat64m8_t test_vfwnmacc_vf_f64m8_tu(vfloat64m8_t vd, float vs1,
                                       vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwnmacc_vf_f64m8_tu(vd, vs1, vs2, vl);
}

vfloat64m1_t test_vfwnmacc_vv_f64m1_tum(vbool64_t vm, vfloat64m1_t vd,
                                        vfloat32mf2_t vs1, vfloat32mf2_t vs2,
                                        size_t vl) {
  return __riscv_vfwnmacc_vv_f64m1_tum(vm, vd, vs1, vs2, vl);
}

vfloat64m1_t test_vfwnmacc_vf_f64m1_tum(vbool64_t vm, vfloat64m1_t vd,
                                        float vs1, vfloat32mf2_t vs2,
                                        size_t vl) {
  return __riscv_vfwnmacc_vf_f64m1_tum(vm, vd, vs1, vs2, vl);
}

vfloat64m2_t test_vfwnmacc_vv_f64m2_tum(vbool32_t vm, vfloat64m2_t vd,
                                        vfloat32m1_t vs1, vfloat32m1_t vs2,
                                        size_t vl) {
  return __riscv_vfwnmacc_vv_f64m2_tum(vm, vd, vs1, vs2, vl);
}

vfloat64m2_t test_vfwnmacc_vf_f64m2_tum(vbool32_t vm, vfloat64m2_t vd,
                                        float vs1, vfloat32m1_t vs2,
                                        size_t vl) {
  return __riscv_vfwnmacc_vf_f64m2_tum(vm, vd, vs1, vs2, vl);
}

vfloat64m4_t test_vfwnmacc_vv_f64m4_tum(vbool16_t vm, vfloat64m4_t vd,
                                        vfloat32m2_t vs1, vfloat32m2_t vs2,
                                        size_t vl) {
  return __riscv_vfwnmacc_vv_f64m4_tum(vm, vd, vs1, vs2, vl);
}

vfloat64m4_t test_vfwnmacc_vf_f64m4_tum(vbool16_t vm, vfloat64m4_t vd,
                                        float vs1, vfloat32m2_t vs2,
                                        size_t vl) {
  return __riscv_vfwnmacc_vf_f64m4_tum(vm, vd, vs1, vs2, vl);
}

vfloat64m8_t test_vfwnmacc_vv_f64m8_tum(vbool8_t vm, vfloat64m8_t vd,
                                        vfloat32m4_t vs1, vfloat32m4_t vs2,
                                        size_t vl) {
  return __riscv_vfwnmacc_vv_f64m8_tum(vm, vd, vs1, vs2, vl);
}

vfloat64m8_t test_vfwnmacc_vf_f64m8_tum(vbool8_t vm, vfloat64m8_t vd, float vs1,
                                        vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwnmacc_vf_f64m8_tum(vm, vd, vs1, vs2, vl);
}

vfloat64m1_t test_vfwnmacc_vv_f64m1_tumu(vbool64_t vm, vfloat64m1_t vd,
                                         vfloat32mf2_t vs1, vfloat32mf2_t vs2,
                                         size_t vl) {
  return __riscv_vfwnmacc_vv_f64m1_tumu(vm, vd, vs1, vs2, vl);
}

vfloat64m1_t test_vfwnmacc_vf_f64m1_tumu(vbool64_t vm, vfloat64m1_t vd,
                                         float vs1, vfloat32mf2_t vs2,
                                         size_t vl) {
  return __riscv_vfwnmacc_vf_f64m1_tumu(vm, vd, vs1, vs2, vl);
}

vfloat64m2_t test_vfwnmacc_vv_f64m2_tumu(vbool32_t vm, vfloat64m2_t vd,
                                         vfloat32m1_t vs1, vfloat32m1_t vs2,
                                         size_t vl) {
  return __riscv_vfwnmacc_vv_f64m2_tumu(vm, vd, vs1, vs2, vl);
}

vfloat64m2_t test_vfwnmacc_vf_f64m2_tumu(vbool32_t vm, vfloat64m2_t vd,
                                         float vs1, vfloat32m1_t vs2,
                                         size_t vl) {
  return __riscv_vfwnmacc_vf_f64m2_tumu(vm, vd, vs1, vs2, vl);
}

vfloat64m4_t test_vfwnmacc_vv_f64m4_tumu(vbool16_t vm, vfloat64m4_t vd,
                                         vfloat32m2_t vs1, vfloat32m2_t vs2,
                                         size_t vl) {
  return __riscv_vfwnmacc_vv_f64m4_tumu(vm, vd, vs1, vs2, vl);
}

vfloat64m4_t test_vfwnmacc_vf_f64m4_tumu(vbool16_t vm, vfloat64m4_t vd,
                                         float vs1, vfloat32m2_t vs2,
                                         size_t vl) {
  return __riscv_vfwnmacc_vf_f64m4_tumu(vm, vd, vs1, vs2, vl);
}

vfloat64m8_t test_vfwnmacc_vv_f64m8_tumu(vbool8_t vm, vfloat64m8_t vd,
                                         vfloat32m4_t vs1, vfloat32m4_t vs2,
                                         size_t vl) {
  return __riscv_vfwnmacc_vv_f64m8_tumu(vm, vd, vs1, vs2, vl);
}

vfloat64m8_t test_vfwnmacc_vf_f64m8_tumu(vbool8_t vm, vfloat64m8_t vd,
                                         float vs1, vfloat32m4_t vs2,
                                         size_t vl) {
  return __riscv_vfwnmacc_vf_f64m8_tumu(vm, vd, vs1, vs2, vl);
}

vfloat64m1_t test_vfwnmacc_vv_f64m1_mu(vbool64_t vm, vfloat64m1_t vd,
                                       vfloat32mf2_t vs1, vfloat32mf2_t vs2,
                                       size_t vl) {
  return __riscv_vfwnmacc_vv_f64m1_mu(vm, vd, vs1, vs2, vl);
}

vfloat64m1_t test_vfwnmacc_vf_f64m1_mu(vbool64_t vm, vfloat64m1_t vd, float vs1,
                                       vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_vf_f64m1_mu(vm, vd, vs1, vs2, vl);
}

vfloat64m2_t test_vfwnmacc_vv_f64m2_mu(vbool32_t vm, vfloat64m2_t vd,
                                       vfloat32m1_t vs1, vfloat32m1_t vs2,
                                       size_t vl) {
  return __riscv_vfwnmacc_vv_f64m2_mu(vm, vd, vs1, vs2, vl);
}

vfloat64m2_t test_vfwnmacc_vf_f64m2_mu(vbool32_t vm, vfloat64m2_t vd, float vs1,
                                       vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwnmacc_vf_f64m2_mu(vm, vd, vs1, vs2, vl);
}

vfloat64m4_t test_vfwnmacc_vv_f64m4_mu(vbool16_t vm, vfloat64m4_t vd,
                                       vfloat32m2_t vs1, vfloat32m2_t vs2,
                                       size_t vl) {
  return __riscv_vfwnmacc_vv_f64m4_mu(vm, vd, vs1, vs2, vl);
}

vfloat64m4_t test_vfwnmacc_vf_f64m4_mu(vbool16_t vm, vfloat64m4_t vd, float vs1,
                                       vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_vf_f64m4_mu(vm, vd, vs1, vs2, vl);
}

vfloat64m8_t test_vfwnmacc_vv_f64m8_mu(vbool8_t vm, vfloat64m8_t vd,
                                       vfloat32m4_t vs1, vfloat32m4_t vs2,
                                       size_t vl) {
  return __riscv_vfwnmacc_vv_f64m8_mu(vm, vd, vs1, vs2, vl);
}

vfloat64m8_t test_vfwnmacc_vf_f64m8_mu(vbool8_t vm, vfloat64m8_t vd, float vs1,
                                       vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwnmacc_vf_f64m8_mu(vm, vd, vs1, vs2, vl);
}

vfloat64m1_t test_vfwnmacc_vv_f64m1_rm_tu(vfloat64m1_t vd, vfloat32mf2_t vs1,
                                          vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_vv_f64m1_rm_tu(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwnmacc_vf_f64m1_rm_tu(vfloat64m1_t vd, float vs1,
                                          vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_vf_f64m1_rm_tu(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwnmacc_vv_f64m2_rm_tu(vfloat64m2_t vd, vfloat32m1_t vs1,
                                          vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwnmacc_vv_f64m2_rm_tu(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwnmacc_vf_f64m2_rm_tu(vfloat64m2_t vd, float vs1,
                                          vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwnmacc_vf_f64m2_rm_tu(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwnmacc_vv_f64m4_rm_tu(vfloat64m4_t vd, vfloat32m2_t vs1,
                                          vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_vv_f64m4_rm_tu(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwnmacc_vf_f64m4_rm_tu(vfloat64m4_t vd, float vs1,
                                          vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_vf_f64m4_rm_tu(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwnmacc_vv_f64m8_rm_tu(vfloat64m8_t vd, vfloat32m4_t vs1,
                                          vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwnmacc_vv_f64m8_rm_tu(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwnmacc_vf_f64m8_rm_tu(vfloat64m8_t vd, float vs1,
                                          vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwnmacc_vf_f64m8_rm_tu(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwnmacc_vv_f64m1_rm_tum(vbool64_t vm, vfloat64m1_t vd,
                                           vfloat32mf2_t vs1, vfloat32mf2_t vs2,
                                           size_t vl) {
  return __riscv_vfwnmacc_vv_f64m1_rm_tum(vm, vd, vs1, vs2, __RISCV_FRM_RNE,
                                          vl);
}

vfloat64m1_t test_vfwnmacc_vf_f64m1_rm_tum(vbool64_t vm, vfloat64m1_t vd,
                                           float vs1, vfloat32mf2_t vs2,
                                           size_t vl) {
  return __riscv_vfwnmacc_vf_f64m1_rm_tum(vm, vd, vs1, vs2, __RISCV_FRM_RNE,
                                          vl);
}

vfloat64m2_t test_vfwnmacc_vv_f64m2_rm_tum(vbool32_t vm, vfloat64m2_t vd,
                                           vfloat32m1_t vs1, vfloat32m1_t vs2,
                                           size_t vl) {
  return __riscv_vfwnmacc_vv_f64m2_rm_tum(vm, vd, vs1, vs2, __RISCV_FRM_RNE,
                                          vl);
}

vfloat64m2_t test_vfwnmacc_vf_f64m2_rm_tum(vbool32_t vm, vfloat64m2_t vd,
                                           float vs1, vfloat32m1_t vs2,
                                           size_t vl) {
  return __riscv_vfwnmacc_vf_f64m2_rm_tum(vm, vd, vs1, vs2, __RISCV_FRM_RNE,
                                          vl);
}

vfloat64m4_t test_vfwnmacc_vv_f64m4_rm_tum(vbool16_t vm, vfloat64m4_t vd,
                                           vfloat32m2_t vs1, vfloat32m2_t vs2,
                                           size_t vl) {
  return __riscv_vfwnmacc_vv_f64m4_rm_tum(vm, vd, vs1, vs2, __RISCV_FRM_RNE,
                                          vl);
}

vfloat64m4_t test_vfwnmacc_vf_f64m4_rm_tum(vbool16_t vm, vfloat64m4_t vd,
                                           float vs1, vfloat32m2_t vs2,
                                           size_t vl) {
  return __riscv_vfwnmacc_vf_f64m4_rm_tum(vm, vd, vs1, vs2, __RISCV_FRM_RNE,
                                          vl);
}

vfloat64m8_t test_vfwnmacc_vv_f64m8_rm_tum(vbool8_t vm, vfloat64m8_t vd,
                                           vfloat32m4_t vs1, vfloat32m4_t vs2,
                                           size_t vl) {
  return __riscv_vfwnmacc_vv_f64m8_rm_tum(vm, vd, vs1, vs2, __RISCV_FRM_RNE,
                                          vl);
}

vfloat64m8_t test_vfwnmacc_vf_f64m8_rm_tum(vbool8_t vm, vfloat64m8_t vd,
                                           float vs1, vfloat32m4_t vs2,
                                           size_t vl) {
  return __riscv_vfwnmacc_vf_f64m8_rm_tum(vm, vd, vs1, vs2, __RISCV_FRM_RNE,
                                          vl);
}

vfloat64m1_t test_vfwnmacc_vv_f64m1_rm_tumu(vbool64_t vm, vfloat64m1_t vd,
                                            vfloat32mf2_t vs1,
                                            vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwnmacc_vv_f64m1_rm_tumu(vm, vd, vs1, vs2, __RISCV_FRM_RNE,
                                           vl);
}

vfloat64m1_t test_vfwnmacc_vf_f64m1_rm_tumu(vbool64_t vm, vfloat64m1_t vd,
                                            float vs1, vfloat32mf2_t vs2,
                                            size_t vl) {
  return __riscv_vfwnmacc_vf_f64m1_rm_tumu(vm, vd, vs1, vs2, __RISCV_FRM_RNE,
                                           vl);
}

vfloat64m2_t test_vfwnmacc_vv_f64m2_rm_tumu(vbool32_t vm, vfloat64m2_t vd,
                                            vfloat32m1_t vs1, vfloat32m1_t vs2,
                                            size_t vl) {
  return __riscv_vfwnmacc_vv_f64m2_rm_tumu(vm, vd, vs1, vs2, __RISCV_FRM_RNE,
                                           vl);
}

vfloat64m2_t test_vfwnmacc_vf_f64m2_rm_tumu(vbool32_t vm, vfloat64m2_t vd,
                                            float vs1, vfloat32m1_t vs2,
                                            size_t vl) {
  return __riscv_vfwnmacc_vf_f64m2_rm_tumu(vm, vd, vs1, vs2, __RISCV_FRM_RNE,
                                           vl);
}

vfloat64m4_t test_vfwnmacc_vv_f64m4_rm_tumu(vbool16_t vm, vfloat64m4_t vd,
                                            vfloat32m2_t vs1, vfloat32m2_t vs2,
                                            size_t vl) {
  return __riscv_vfwnmacc_vv_f64m4_rm_tumu(vm, vd, vs1, vs2, __RISCV_FRM_RNE,
                                           vl);
}

vfloat64m4_t test_vfwnmacc_vf_f64m4_rm_tumu(vbool16_t vm, vfloat64m4_t vd,
                                            float vs1, vfloat32m2_t vs2,
                                            size_t vl) {
  return __riscv_vfwnmacc_vf_f64m4_rm_tumu(vm, vd, vs1, vs2, __RISCV_FRM_RNE,
                                           vl);
}

vfloat64m8_t test_vfwnmacc_vv_f64m8_rm_tumu(vbool8_t vm, vfloat64m8_t vd,
                                            vfloat32m4_t vs1, vfloat32m4_t vs2,
                                            size_t vl) {
  return __riscv_vfwnmacc_vv_f64m8_rm_tumu(vm, vd, vs1, vs2, __RISCV_FRM_RNE,
                                           vl);
}

vfloat64m8_t test_vfwnmacc_vf_f64m8_rm_tumu(vbool8_t vm, vfloat64m8_t vd,
                                            float vs1, vfloat32m4_t vs2,
                                            size_t vl) {
  return __riscv_vfwnmacc_vf_f64m8_rm_tumu(vm, vd, vs1, vs2, __RISCV_FRM_RNE,
                                           vl);
}

vfloat64m1_t test_vfwnmacc_vv_f64m1_rm_mu(vbool64_t vm, vfloat64m1_t vd,
                                          vfloat32mf2_t vs1, vfloat32mf2_t vs2,
                                          size_t vl) {
  return __riscv_vfwnmacc_vv_f64m1_rm_mu(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwnmacc_vf_f64m1_rm_mu(vbool64_t vm, vfloat64m1_t vd,
                                          float vs1, vfloat32mf2_t vs2,
                                          size_t vl) {
  return __riscv_vfwnmacc_vf_f64m1_rm_mu(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwnmacc_vv_f64m2_rm_mu(vbool32_t vm, vfloat64m2_t vd,
                                          vfloat32m1_t vs1, vfloat32m1_t vs2,
                                          size_t vl) {
  return __riscv_vfwnmacc_vv_f64m2_rm_mu(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwnmacc_vf_f64m2_rm_mu(vbool32_t vm, vfloat64m2_t vd,
                                          float vs1, vfloat32m1_t vs2,
                                          size_t vl) {
  return __riscv_vfwnmacc_vf_f64m2_rm_mu(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwnmacc_vv_f64m4_rm_mu(vbool16_t vm, vfloat64m4_t vd,
                                          vfloat32m2_t vs1, vfloat32m2_t vs2,
                                          size_t vl) {
  return __riscv_vfwnmacc_vv_f64m4_rm_mu(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwnmacc_vf_f64m4_rm_mu(vbool16_t vm, vfloat64m4_t vd,
                                          float vs1, vfloat32m2_t vs2,
                                          size_t vl) {
  return __riscv_vfwnmacc_vf_f64m4_rm_mu(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwnmacc_vv_f64m8_rm_mu(vbool8_t vm, vfloat64m8_t vd,
                                          vfloat32m4_t vs1, vfloat32m4_t vs2,
                                          size_t vl) {
  return __riscv_vfwnmacc_vv_f64m8_rm_mu(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwnmacc_vf_f64m8_rm_mu(vbool8_t vm, vfloat64m8_t vd,
                                          float vs1, vfloat32m4_t vs2,
                                          size_t vl) {
  return __riscv_vfwnmacc_vf_f64m8_rm_mu(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}
