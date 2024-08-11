// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +zvfh -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat16mf4x5_t test_vluxseg5ei16_v_f16mf4x5(const _Float16 *rs1,
                                             vuint16mf4_t rs2, size_t vl) {
  return __riscv_vluxseg5ei16_v_f16mf4x5(rs1, rs2, vl);
}

vfloat16mf2x5_t test_vluxseg5ei16_v_f16mf2x5(const _Float16 *rs1,
                                             vuint16mf2_t rs2, size_t vl) {
  return __riscv_vluxseg5ei16_v_f16mf2x5(rs1, rs2, vl);
}

vfloat16m1x5_t test_vluxseg5ei16_v_f16m1x5(const _Float16 *rs1, vuint16m1_t rs2,
                                           size_t vl) {
  return __riscv_vluxseg5ei16_v_f16m1x5(rs1, rs2, vl);
}

vfloat16mf4x5_t test_vluxseg5ei16_v_f16mf4x5_m(vbool64_t vm,
                                               const _Float16 *rs1,
                                               vuint16mf4_t rs2, size_t vl) {
  return __riscv_vluxseg5ei16_v_f16mf4x5_m(vm, rs1, rs2, vl);
}

vfloat16mf2x5_t test_vluxseg5ei16_v_f16mf2x5_m(vbool32_t vm,
                                               const _Float16 *rs1,
                                               vuint16mf2_t rs2, size_t vl) {
  return __riscv_vluxseg5ei16_v_f16mf2x5_m(vm, rs1, rs2, vl);
}

vfloat16m1x5_t test_vluxseg5ei16_v_f16m1x5_m(vbool16_t vm, const _Float16 *rs1,
                                             vuint16m1_t rs2, size_t vl) {
  return __riscv_vluxseg5ei16_v_f16m1x5_m(vm, rs1, rs2, vl);
}
