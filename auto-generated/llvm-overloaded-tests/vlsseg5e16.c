// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +zvfh -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat16mf4x5_t test_vlsseg5e16_v_f16mf4x5_m(vbool64_t vm, const _Float16 *rs1,
                                             ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg5e16(vm, rs1, rs2, vl);
}

vfloat16mf2x5_t test_vlsseg5e16_v_f16mf2x5_m(vbool32_t vm, const _Float16 *rs1,
                                             ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg5e16(vm, rs1, rs2, vl);
}

vfloat16m1x5_t test_vlsseg5e16_v_f16m1x5_m(vbool16_t vm, const _Float16 *rs1,
                                           ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg5e16(vm, rs1, rs2, vl);
}

vint16mf4x5_t test_vlsseg5e16_v_i16mf4x5_m(vbool64_t vm, const int16_t *rs1,
                                           ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg5e16(vm, rs1, rs2, vl);
}

vint16mf2x5_t test_vlsseg5e16_v_i16mf2x5_m(vbool32_t vm, const int16_t *rs1,
                                           ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg5e16(vm, rs1, rs2, vl);
}

vint16m1x5_t test_vlsseg5e16_v_i16m1x5_m(vbool16_t vm, const int16_t *rs1,
                                         ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg5e16(vm, rs1, rs2, vl);
}

vuint16mf4x5_t test_vlsseg5e16_v_u16mf4x5_m(vbool64_t vm, const uint16_t *rs1,
                                            ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg5e16(vm, rs1, rs2, vl);
}

vuint16mf2x5_t test_vlsseg5e16_v_u16mf2x5_m(vbool32_t vm, const uint16_t *rs1,
                                            ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg5e16(vm, rs1, rs2, vl);
}

vuint16m1x5_t test_vlsseg5e16_v_u16m1x5_m(vbool16_t vm, const uint16_t *rs1,
                                          ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg5e16(vm, rs1, rs2, vl);
}
