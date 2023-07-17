// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vuint32mf2_t test_vsm3me_vv_u32mf2_tu(vuint32mf2_t maskedoff, vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl) {
  return __riscv_vsm3me_vv_u32mf2_tu(maskedoff, vs2, vs1, vl);
}

vuint32m1_t test_vsm3me_vv_u32m1_tu(vuint32m1_t maskedoff, vuint32m1_t vs2, vuint32m1_t vs1, size_t vl) {
  return __riscv_vsm3me_vv_u32m1_tu(maskedoff, vs2, vs1, vl);
}

vuint32m2_t test_vsm3me_vv_u32m2_tu(vuint32m2_t maskedoff, vuint32m2_t vs2, vuint32m2_t vs1, size_t vl) {
  return __riscv_vsm3me_vv_u32m2_tu(maskedoff, vs2, vs1, vl);
}

vuint32m4_t test_vsm3me_vv_u32m4_tu(vuint32m4_t maskedoff, vuint32m4_t vs2, vuint32m4_t vs1, size_t vl) {
  return __riscv_vsm3me_vv_u32m4_tu(maskedoff, vs2, vs1, vl);
}

vuint32m8_t test_vsm3me_vv_u32m8_tu(vuint32m8_t maskedoff, vuint32m8_t vs2, vuint32m8_t vs1, size_t vl) {
  return __riscv_vsm3me_vv_u32m8_tu(maskedoff, vs2, vs1, vl);
}

