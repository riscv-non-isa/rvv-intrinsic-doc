#include <riscv_vector.h>
#include <stdint.h>

vfloat16mf4_t test_vfrec7_v_f16mf4(vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfrec7(vs2, vl);
}

vfloat16mf2_t test_vfrec7_v_f16mf2(vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfrec7(vs2, vl);
}

vfloat16m1_t test_vfrec7_v_f16m1(vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfrec7(vs2, vl);
}

vfloat16m2_t test_vfrec7_v_f16m2(vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfrec7(vs2, vl);
}

vfloat16m4_t test_vfrec7_v_f16m4(vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfrec7(vs2, vl);
}

vfloat16m8_t test_vfrec7_v_f16m8(vfloat16m8_t vs2, size_t vl) {
  return __riscv_vfrec7(vs2, vl);
}

vfloat16mf4_t test_vfrec7_v_f16mf4_m(vbool64_t vm, vfloat16mf4_t vs2,
                                     size_t vl) {
  return __riscv_vfrec7(vm, vs2, vl);
}

vfloat16mf2_t test_vfrec7_v_f16mf2_m(vbool32_t vm, vfloat16mf2_t vs2,
                                     size_t vl) {
  return __riscv_vfrec7(vm, vs2, vl);
}

vfloat16m1_t test_vfrec7_v_f16m1_m(vbool16_t vm, vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfrec7(vm, vs2, vl);
}

vfloat16m2_t test_vfrec7_v_f16m2_m(vbool8_t vm, vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfrec7(vm, vs2, vl);
}

vfloat16m4_t test_vfrec7_v_f16m4_m(vbool4_t vm, vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfrec7(vm, vs2, vl);
}

vfloat16m8_t test_vfrec7_v_f16m8_m(vbool2_t vm, vfloat16m8_t vs2, size_t vl) {
  return __riscv_vfrec7(vm, vs2, vl);
}

vfloat16mf4_t test_vfrec7_v_f16mf4_rm(vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfrec7(vs2, __RISCV_FRM_RNE, vl);
}

vfloat16mf2_t test_vfrec7_v_f16mf2_rm(vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfrec7(vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m1_t test_vfrec7_v_f16m1_rm(vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfrec7(vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m2_t test_vfrec7_v_f16m2_rm(vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfrec7(vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m4_t test_vfrec7_v_f16m4_rm(vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfrec7(vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m8_t test_vfrec7_v_f16m8_rm(vfloat16m8_t vs2, size_t vl) {
  return __riscv_vfrec7(vs2, __RISCV_FRM_RNE, vl);
}

vfloat16mf4_t test_vfrec7_v_f16mf4_rm_m(vbool64_t vm, vfloat16mf4_t vs2,
                                        size_t vl) {
  return __riscv_vfrec7(vm, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16mf2_t test_vfrec7_v_f16mf2_rm_m(vbool32_t vm, vfloat16mf2_t vs2,
                                        size_t vl) {
  return __riscv_vfrec7(vm, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m1_t test_vfrec7_v_f16m1_rm_m(vbool16_t vm, vfloat16m1_t vs2,
                                      size_t vl) {
  return __riscv_vfrec7(vm, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m2_t test_vfrec7_v_f16m2_rm_m(vbool8_t vm, vfloat16m2_t vs2,
                                      size_t vl) {
  return __riscv_vfrec7(vm, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m4_t test_vfrec7_v_f16m4_rm_m(vbool4_t vm, vfloat16m4_t vs2,
                                      size_t vl) {
  return __riscv_vfrec7(vm, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m8_t test_vfrec7_v_f16m8_rm_m(vbool2_t vm, vfloat16m8_t vs2,
                                      size_t vl) {
  return __riscv_vfrec7(vm, vs2, __RISCV_FRM_RNE, vl);
}
