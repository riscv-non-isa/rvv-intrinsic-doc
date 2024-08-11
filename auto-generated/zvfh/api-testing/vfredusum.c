#include <riscv_vector.h>
#include <stdint.h>

vfloat16m1_t test_vfredusum_vs_f16mf4_f16m1(vfloat16mf4_t vs2, vfloat16m1_t vs1,
                                            size_t vl) {
  return __riscv_vfredusum_vs_f16mf4_f16m1(vs2, vs1, vl);
}

vfloat16m1_t test_vfredusum_vs_f16mf2_f16m1(vfloat16mf2_t vs2, vfloat16m1_t vs1,
                                            size_t vl) {
  return __riscv_vfredusum_vs_f16mf2_f16m1(vs2, vs1, vl);
}

vfloat16m1_t test_vfredusum_vs_f16m1_f16m1(vfloat16m1_t vs2, vfloat16m1_t vs1,
                                           size_t vl) {
  return __riscv_vfredusum_vs_f16m1_f16m1(vs2, vs1, vl);
}

vfloat16m1_t test_vfredusum_vs_f16m2_f16m1(vfloat16m2_t vs2, vfloat16m1_t vs1,
                                           size_t vl) {
  return __riscv_vfredusum_vs_f16m2_f16m1(vs2, vs1, vl);
}

vfloat16m1_t test_vfredusum_vs_f16m4_f16m1(vfloat16m4_t vs2, vfloat16m1_t vs1,
                                           size_t vl) {
  return __riscv_vfredusum_vs_f16m4_f16m1(vs2, vs1, vl);
}

vfloat16m1_t test_vfredusum_vs_f16m8_f16m1(vfloat16m8_t vs2, vfloat16m1_t vs1,
                                           size_t vl) {
  return __riscv_vfredusum_vs_f16m8_f16m1(vs2, vs1, vl);
}

vfloat16m1_t test_vfredusum_vs_f16mf4_f16m1_m(vbool64_t vm, vfloat16mf4_t vs2,
                                              vfloat16m1_t vs1, size_t vl) {
  return __riscv_vfredusum_vs_f16mf4_f16m1_m(vm, vs2, vs1, vl);
}

vfloat16m1_t test_vfredusum_vs_f16mf2_f16m1_m(vbool32_t vm, vfloat16mf2_t vs2,
                                              vfloat16m1_t vs1, size_t vl) {
  return __riscv_vfredusum_vs_f16mf2_f16m1_m(vm, vs2, vs1, vl);
}

vfloat16m1_t test_vfredusum_vs_f16m1_f16m1_m(vbool16_t vm, vfloat16m1_t vs2,
                                             vfloat16m1_t vs1, size_t vl) {
  return __riscv_vfredusum_vs_f16m1_f16m1_m(vm, vs2, vs1, vl);
}

vfloat16m1_t test_vfredusum_vs_f16m2_f16m1_m(vbool8_t vm, vfloat16m2_t vs2,
                                             vfloat16m1_t vs1, size_t vl) {
  return __riscv_vfredusum_vs_f16m2_f16m1_m(vm, vs2, vs1, vl);
}

vfloat16m1_t test_vfredusum_vs_f16m4_f16m1_m(vbool4_t vm, vfloat16m4_t vs2,
                                             vfloat16m1_t vs1, size_t vl) {
  return __riscv_vfredusum_vs_f16m4_f16m1_m(vm, vs2, vs1, vl);
}

vfloat16m1_t test_vfredusum_vs_f16m8_f16m1_m(vbool2_t vm, vfloat16m8_t vs2,
                                             vfloat16m1_t vs1, size_t vl) {
  return __riscv_vfredusum_vs_f16m8_f16m1_m(vm, vs2, vs1, vl);
}

vfloat16m1_t test_vfredusum_vs_f16mf4_f16m1_rm(vfloat16mf4_t vs2,
                                               vfloat16m1_t vs1, size_t vl) {
  return __riscv_vfredusum_vs_f16mf4_f16m1_rm(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat16m1_t test_vfredusum_vs_f16mf2_f16m1_rm(vfloat16mf2_t vs2,
                                               vfloat16m1_t vs1, size_t vl) {
  return __riscv_vfredusum_vs_f16mf2_f16m1_rm(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat16m1_t test_vfredusum_vs_f16m1_f16m1_rm(vfloat16m1_t vs2,
                                              vfloat16m1_t vs1, size_t vl) {
  return __riscv_vfredusum_vs_f16m1_f16m1_rm(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat16m1_t test_vfredusum_vs_f16m2_f16m1_rm(vfloat16m2_t vs2,
                                              vfloat16m1_t vs1, size_t vl) {
  return __riscv_vfredusum_vs_f16m2_f16m1_rm(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat16m1_t test_vfredusum_vs_f16m4_f16m1_rm(vfloat16m4_t vs2,
                                              vfloat16m1_t vs1, size_t vl) {
  return __riscv_vfredusum_vs_f16m4_f16m1_rm(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat16m1_t test_vfredusum_vs_f16m8_f16m1_rm(vfloat16m8_t vs2,
                                              vfloat16m1_t vs1, size_t vl) {
  return __riscv_vfredusum_vs_f16m8_f16m1_rm(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat16m1_t test_vfredusum_vs_f16mf4_f16m1_rm_m(vbool64_t vm,
                                                 vfloat16mf4_t vs2,
                                                 vfloat16m1_t vs1, size_t vl) {
  return __riscv_vfredusum_vs_f16mf4_f16m1_rm_m(vm, vs2, vs1, __RISCV_FRM_RNE,
                                                vl);
}

vfloat16m1_t test_vfredusum_vs_f16mf2_f16m1_rm_m(vbool32_t vm,
                                                 vfloat16mf2_t vs2,
                                                 vfloat16m1_t vs1, size_t vl) {
  return __riscv_vfredusum_vs_f16mf2_f16m1_rm_m(vm, vs2, vs1, __RISCV_FRM_RNE,
                                                vl);
}

vfloat16m1_t test_vfredusum_vs_f16m1_f16m1_rm_m(vbool16_t vm, vfloat16m1_t vs2,
                                                vfloat16m1_t vs1, size_t vl) {
  return __riscv_vfredusum_vs_f16m1_f16m1_rm_m(vm, vs2, vs1, __RISCV_FRM_RNE,
                                               vl);
}

vfloat16m1_t test_vfredusum_vs_f16m2_f16m1_rm_m(vbool8_t vm, vfloat16m2_t vs2,
                                                vfloat16m1_t vs1, size_t vl) {
  return __riscv_vfredusum_vs_f16m2_f16m1_rm_m(vm, vs2, vs1, __RISCV_FRM_RNE,
                                               vl);
}

vfloat16m1_t test_vfredusum_vs_f16m4_f16m1_rm_m(vbool4_t vm, vfloat16m4_t vs2,
                                                vfloat16m1_t vs1, size_t vl) {
  return __riscv_vfredusum_vs_f16m4_f16m1_rm_m(vm, vs2, vs1, __RISCV_FRM_RNE,
                                               vl);
}

vfloat16m1_t test_vfredusum_vs_f16m8_f16m1_rm_m(vbool2_t vm, vfloat16m8_t vs2,
                                                vfloat16m1_t vs1, size_t vl) {
  return __riscv_vfredusum_vs_f16m8_f16m1_rm_m(vm, vs2, vs1, __RISCV_FRM_RNE,
                                               vl);
}
