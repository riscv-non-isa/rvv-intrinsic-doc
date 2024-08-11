#include <riscv_vector.h>
#include <stdint.h>

vfloat16mf4_t test_vfncvt_f_f_w_f16mf4(vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_f(vs2, vl);
}

vfloat16mf2_t test_vfncvt_f_f_w_f16mf2(vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfncvt_f(vs2, vl);
}

vfloat16m1_t test_vfncvt_f_f_w_f16m1(vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfncvt_f(vs2, vl);
}

vfloat16m2_t test_vfncvt_f_f_w_f16m2(vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfncvt_f(vs2, vl);
}

vfloat16m4_t test_vfncvt_f_f_w_f16m4(vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfncvt_f(vs2, vl);
}

vfloat16mf4_t test_vfncvt_f_f_w_f16mf4_m(vbool64_t vm, vfloat32mf2_t vs2,
                                         size_t vl) {
  return __riscv_vfncvt_f(vm, vs2, vl);
}

vfloat16mf2_t test_vfncvt_f_f_w_f16mf2_m(vbool32_t vm, vfloat32m1_t vs2,
                                         size_t vl) {
  return __riscv_vfncvt_f(vm, vs2, vl);
}

vfloat16m1_t test_vfncvt_f_f_w_f16m1_m(vbool16_t vm, vfloat32m2_t vs2,
                                       size_t vl) {
  return __riscv_vfncvt_f(vm, vs2, vl);
}

vfloat16m2_t test_vfncvt_f_f_w_f16m2_m(vbool8_t vm, vfloat32m4_t vs2,
                                       size_t vl) {
  return __riscv_vfncvt_f(vm, vs2, vl);
}

vfloat16m4_t test_vfncvt_f_f_w_f16m4_m(vbool4_t vm, vfloat32m8_t vs2,
                                       size_t vl) {
  return __riscv_vfncvt_f(vm, vs2, vl);
}

vfloat16mf4_t test_vfncvt_f_f_w_f16mf4_rm(vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_f(vs2, __RISCV_FRM_RNE, vl);
}

vfloat16mf2_t test_vfncvt_f_f_w_f16mf2_rm(vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfncvt_f(vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m1_t test_vfncvt_f_f_w_f16m1_rm(vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfncvt_f(vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m2_t test_vfncvt_f_f_w_f16m2_rm(vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfncvt_f(vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m4_t test_vfncvt_f_f_w_f16m4_rm(vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfncvt_f(vs2, __RISCV_FRM_RNE, vl);
}

vfloat16mf4_t test_vfncvt_f_f_w_f16mf4_rm_m(vbool64_t vm, vfloat32mf2_t vs2,
                                            size_t vl) {
  return __riscv_vfncvt_f(vm, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16mf2_t test_vfncvt_f_f_w_f16mf2_rm_m(vbool32_t vm, vfloat32m1_t vs2,
                                            size_t vl) {
  return __riscv_vfncvt_f(vm, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m1_t test_vfncvt_f_f_w_f16m1_rm_m(vbool16_t vm, vfloat32m2_t vs2,
                                          size_t vl) {
  return __riscv_vfncvt_f(vm, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m2_t test_vfncvt_f_f_w_f16m2_rm_m(vbool8_t vm, vfloat32m4_t vs2,
                                          size_t vl) {
  return __riscv_vfncvt_f(vm, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m4_t test_vfncvt_f_f_w_f16m4_rm_m(vbool4_t vm, vfloat32m8_t vs2,
                                          size_t vl) {
  return __riscv_vfncvt_f(vm, vs2, __RISCV_FRM_RNE, vl);
}
