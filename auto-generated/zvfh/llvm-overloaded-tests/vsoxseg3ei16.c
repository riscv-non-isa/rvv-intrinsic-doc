// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +zvfh -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vsoxseg3ei16_v_f16mf4x3(_Float16 *rs1, vuint16mf4_t vs2,
                                  vfloat16mf4x3_t vs3, size_t vl) {
  return __riscv_vsoxseg3ei16(rs1, vs2, vs3, vl);
}

void test_vsoxseg3ei16_v_f16mf2x3(_Float16 *rs1, vuint16mf2_t vs2,
                                  vfloat16mf2x3_t vs3, size_t vl) {
  return __riscv_vsoxseg3ei16(rs1, vs2, vs3, vl);
}

void test_vsoxseg3ei16_v_f16m1x3(_Float16 *rs1, vuint16m1_t vs2,
                                 vfloat16m1x3_t vs3, size_t vl) {
  return __riscv_vsoxseg3ei16(rs1, vs2, vs3, vl);
}

void test_vsoxseg3ei16_v_f16m2x3(_Float16 *rs1, vuint16m2_t vs2,
                                 vfloat16m2x3_t vs3, size_t vl) {
  return __riscv_vsoxseg3ei16(rs1, vs2, vs3, vl);
}

void test_vsoxseg3ei16_v_f16mf4x3_m(vbool64_t vm, _Float16 *rs1,
                                    vuint16mf4_t vs2, vfloat16mf4x3_t vs3,
                                    size_t vl) {
  return __riscv_vsoxseg3ei16(vm, rs1, vs2, vs3, vl);
}

void test_vsoxseg3ei16_v_f16mf2x3_m(vbool32_t vm, _Float16 *rs1,
                                    vuint16mf2_t vs2, vfloat16mf2x3_t vs3,
                                    size_t vl) {
  return __riscv_vsoxseg3ei16(vm, rs1, vs2, vs3, vl);
}

void test_vsoxseg3ei16_v_f16m1x3_m(vbool16_t vm, _Float16 *rs1, vuint16m1_t vs2,
                                   vfloat16m1x3_t vs3, size_t vl) {
  return __riscv_vsoxseg3ei16(vm, rs1, vs2, vs3, vl);
}

void test_vsoxseg3ei16_v_f16m2x3_m(vbool8_t vm, _Float16 *rs1, vuint16m2_t vs2,
                                   vfloat16m2x3_t vs3, size_t vl) {
  return __riscv_vsoxseg3ei16(vm, rs1, vs2, vs3, vl);
}
