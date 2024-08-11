// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +zvfh -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat16mf4_t test_vmerge_vvm_f16mf4(vfloat16mf4_t vs2, vfloat16mf4_t vs1,
                                     vbool64_t v0, size_t vl) {
  return __riscv_vmerge(vs2, vs1, v0, vl);
}

vfloat16mf2_t test_vmerge_vvm_f16mf2(vfloat16mf2_t vs2, vfloat16mf2_t vs1,
                                     vbool32_t v0, size_t vl) {
  return __riscv_vmerge(vs2, vs1, v0, vl);
}

vfloat16m1_t test_vmerge_vvm_f16m1(vfloat16m1_t vs2, vfloat16m1_t vs1,
                                   vbool16_t v0, size_t vl) {
  return __riscv_vmerge(vs2, vs1, v0, vl);
}

vfloat16m2_t test_vmerge_vvm_f16m2(vfloat16m2_t vs2, vfloat16m2_t vs1,
                                   vbool8_t v0, size_t vl) {
  return __riscv_vmerge(vs2, vs1, v0, vl);
}

vfloat16m4_t test_vmerge_vvm_f16m4(vfloat16m4_t vs2, vfloat16m4_t vs1,
                                   vbool4_t v0, size_t vl) {
  return __riscv_vmerge(vs2, vs1, v0, vl);
}

vfloat16m8_t test_vmerge_vvm_f16m8(vfloat16m8_t vs2, vfloat16m8_t vs1,
                                   vbool2_t v0, size_t vl) {
  return __riscv_vmerge(vs2, vs1, v0, vl);
}
