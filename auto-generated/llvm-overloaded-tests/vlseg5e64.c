// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +zvfh -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat64m1x5_t test_vlseg5e64_v_f64m1x5_m(vbool64_t vm, const double *rs1,
                                          size_t vl) {
  return __riscv_vlseg5e64(vm, rs1, vl);
}

vint64m1x5_t test_vlseg5e64_v_i64m1x5_m(vbool64_t vm, const int64_t *rs1,
                                        size_t vl) {
  return __riscv_vlseg5e64(vm, rs1, vl);
}

vuint64m1x5_t test_vlseg5e64_v_u64m1x5_m(vbool64_t vm, const uint64_t *rs1,
                                         size_t vl) {
  return __riscv_vlseg5e64(vm, rs1, vl);
}
