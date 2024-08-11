// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +zvfh -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat16mf4_t test_vfmv_v_f_f16mf4_tu(vfloat16mf4_t vd, _Float16 rs1,
                                      size_t vl) {
  return __riscv_vfmv_v_f_f16mf4_tu(vd, rs1, vl);
}

vfloat16mf2_t test_vfmv_v_f_f16mf2_tu(vfloat16mf2_t vd, _Float16 rs1,
                                      size_t vl) {
  return __riscv_vfmv_v_f_f16mf2_tu(vd, rs1, vl);
}

vfloat16m1_t test_vfmv_v_f_f16m1_tu(vfloat16m1_t vd, _Float16 rs1, size_t vl) {
  return __riscv_vfmv_v_f_f16m1_tu(vd, rs1, vl);
}

vfloat16m2_t test_vfmv_v_f_f16m2_tu(vfloat16m2_t vd, _Float16 rs1, size_t vl) {
  return __riscv_vfmv_v_f_f16m2_tu(vd, rs1, vl);
}

vfloat16m4_t test_vfmv_v_f_f16m4_tu(vfloat16m4_t vd, _Float16 rs1, size_t vl) {
  return __riscv_vfmv_v_f_f16m4_tu(vd, rs1, vl);
}

vfloat16m8_t test_vfmv_v_f_f16m8_tu(vfloat16m8_t vd, _Float16 rs1, size_t vl) {
  return __riscv_vfmv_v_f_f16m8_tu(vd, rs1, vl);
}

vfloat16mf4_t test_vfmv_s_f_f16mf4_tu(vfloat16mf4_t vd, _Float16 rs1,
                                      size_t vl) {
  return __riscv_vfmv_s_f_f16mf4_tu(vd, rs1, vl);
}

vfloat16mf2_t test_vfmv_s_f_f16mf2_tu(vfloat16mf2_t vd, _Float16 rs1,
                                      size_t vl) {
  return __riscv_vfmv_s_f_f16mf2_tu(vd, rs1, vl);
}

vfloat16m1_t test_vfmv_s_f_f16m1_tu(vfloat16m1_t vd, _Float16 rs1, size_t vl) {
  return __riscv_vfmv_s_f_f16m1_tu(vd, rs1, vl);
}

vfloat16m2_t test_vfmv_s_f_f16m2_tu(vfloat16m2_t vd, _Float16 rs1, size_t vl) {
  return __riscv_vfmv_s_f_f16m2_tu(vd, rs1, vl);
}

vfloat16m4_t test_vfmv_s_f_f16m4_tu(vfloat16m4_t vd, _Float16 rs1, size_t vl) {
  return __riscv_vfmv_s_f_f16m4_tu(vd, rs1, vl);
}

vfloat16m8_t test_vfmv_s_f_f16m8_tu(vfloat16m8_t vd, _Float16 rs1, size_t vl) {
  return __riscv_vfmv_s_f_f16m8_tu(vd, rs1, vl);
}
