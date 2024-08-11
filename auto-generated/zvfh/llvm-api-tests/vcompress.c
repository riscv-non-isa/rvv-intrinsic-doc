// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +zvfh -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat16mf4_t test_vcompress_vm_f16mf4(vfloat16mf4_t vs2, vbool64_t vs1,
                                       size_t vl) {
  return __riscv_vcompress_vm_f16mf4(vs2, vs1, vl);
}

vfloat16mf2_t test_vcompress_vm_f16mf2(vfloat16mf2_t vs2, vbool32_t vs1,
                                       size_t vl) {
  return __riscv_vcompress_vm_f16mf2(vs2, vs1, vl);
}

vfloat16m1_t test_vcompress_vm_f16m1(vfloat16m1_t vs2, vbool16_t vs1,
                                     size_t vl) {
  return __riscv_vcompress_vm_f16m1(vs2, vs1, vl);
}

vfloat16m2_t test_vcompress_vm_f16m2(vfloat16m2_t vs2, vbool8_t vs1,
                                     size_t vl) {
  return __riscv_vcompress_vm_f16m2(vs2, vs1, vl);
}

vfloat16m4_t test_vcompress_vm_f16m4(vfloat16m4_t vs2, vbool4_t vs1,
                                     size_t vl) {
  return __riscv_vcompress_vm_f16m4(vs2, vs1, vl);
}

vfloat16m8_t test_vcompress_vm_f16m8(vfloat16m8_t vs2, vbool2_t vs1,
                                     size_t vl) {
  return __riscv_vcompress_vm_f16m8(vs2, vs1, vl);
}
