// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +zvfh -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat16mf4x3_t test_vloxseg3ei16_v_f16mf4x3(const _Float16 *rs1,
                                             vuint16mf4_t rs2, size_t vl) {
  return __riscv_vloxseg3ei16(rs1, rs2, vl);
}

vfloat16mf2x3_t test_vloxseg3ei16_v_f16mf2x3(const _Float16 *rs1,
                                             vuint16mf2_t rs2, size_t vl) {
  return __riscv_vloxseg3ei16(rs1, rs2, vl);
}

vfloat16m1x3_t test_vloxseg3ei16_v_f16m1x3(const _Float16 *rs1, vuint16m1_t rs2,
                                           size_t vl) {
  return __riscv_vloxseg3ei16(rs1, rs2, vl);
}

vfloat16m2x3_t test_vloxseg3ei16_v_f16m2x3(const _Float16 *rs1, vuint16m2_t rs2,
                                           size_t vl) {
  return __riscv_vloxseg3ei16(rs1, rs2, vl);
}

vfloat16mf4x3_t test_vloxseg3ei16_v_f16mf4x3_m(vbool64_t vm,
                                               const _Float16 *rs1,
                                               vuint16mf4_t rs2, size_t vl) {
  return __riscv_vloxseg3ei16(vm, rs1, rs2, vl);
}

vfloat16mf2x3_t test_vloxseg3ei16_v_f16mf2x3_m(vbool32_t vm,
                                               const _Float16 *rs1,
                                               vuint16mf2_t rs2, size_t vl) {
  return __riscv_vloxseg3ei16(vm, rs1, rs2, vl);
}

vfloat16m1x3_t test_vloxseg3ei16_v_f16m1x3_m(vbool16_t vm, const _Float16 *rs1,
                                             vuint16m1_t rs2, size_t vl) {
  return __riscv_vloxseg3ei16(vm, rs1, rs2, vl);
}

vfloat16m2x3_t test_vloxseg3ei16_v_f16m2x3_m(vbool8_t vm, const _Float16 *rs1,
                                             vuint16m2_t rs2, size_t vl) {
  return __riscv_vloxseg3ei16(vm, rs1, rs2, vl);
}
