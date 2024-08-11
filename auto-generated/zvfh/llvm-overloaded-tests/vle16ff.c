// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +zvfh -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat16mf4_t test_vle16ff_v_f16mf4_m(vbool64_t vm, const _Float16 *rs1,
                                      size_t *new_vl, size_t vl) {
  return __riscv_vle16ff(vm, rs1, new_vl, vl);
}

vfloat16mf2_t test_vle16ff_v_f16mf2_m(vbool32_t vm, const _Float16 *rs1,
                                      size_t *new_vl, size_t vl) {
  return __riscv_vle16ff(vm, rs1, new_vl, vl);
}

vfloat16m1_t test_vle16ff_v_f16m1_m(vbool16_t vm, const _Float16 *rs1,
                                    size_t *new_vl, size_t vl) {
  return __riscv_vle16ff(vm, rs1, new_vl, vl);
}

vfloat16m2_t test_vle16ff_v_f16m2_m(vbool8_t vm, const _Float16 *rs1,
                                    size_t *new_vl, size_t vl) {
  return __riscv_vle16ff(vm, rs1, new_vl, vl);
}

vfloat16m4_t test_vle16ff_v_f16m4_m(vbool4_t vm, const _Float16 *rs1,
                                    size_t *new_vl, size_t vl) {
  return __riscv_vle16ff(vm, rs1, new_vl, vl);
}

vfloat16m8_t test_vle16ff_v_f16m8_m(vbool2_t vm, const _Float16 *rs1,
                                    size_t *new_vl, size_t vl) {
  return __riscv_vle16ff(vm, rs1, new_vl, vl);
}
