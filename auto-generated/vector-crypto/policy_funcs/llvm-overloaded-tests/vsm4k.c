// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vuint32mf2_t test_vsm4k_vi_u32mf2_tu(vuint32mf2_t maskedoff, vuint32mf2_t vs2, size_t uimm, size_t vl) {
  return __riscv_vsm4k_tu(maskedoff, vs2, 0, vl);
}

vuint32m1_t test_vsm4k_vi_u32m1_tu(vuint32m1_t maskedoff, vuint32m1_t vs2, size_t uimm, size_t vl) {
  return __riscv_vsm4k_tu(maskedoff, vs2, 0, vl);
}

vuint32m2_t test_vsm4k_vi_u32m2_tu(vuint32m2_t maskedoff, vuint32m2_t vs2, size_t uimm, size_t vl) {
  return __riscv_vsm4k_tu(maskedoff, vs2, 0, vl);
}

vuint32m4_t test_vsm4k_vi_u32m4_tu(vuint32m4_t maskedoff, vuint32m4_t vs2, size_t uimm, size_t vl) {
  return __riscv_vsm4k_tu(maskedoff, vs2, 0, vl);
}

vuint32m8_t test_vsm4k_vi_u32m8_tu(vuint32m8_t maskedoff, vuint32m8_t vs2, size_t uimm, size_t vl) {
  return __riscv_vsm4k_tu(maskedoff, vs2, 0, vl);
}

