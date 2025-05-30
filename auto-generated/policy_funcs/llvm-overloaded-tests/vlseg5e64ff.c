// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat64m1x5_t test_vlseg5e64ff_v_f64m1x5_tu(vfloat64m1x5_t vd,
                                             const double *rs1, size_t *new_vl,
                                             size_t vl) {
  return __riscv_vlseg5e64ff_tu(vd, rs1, new_vl, vl);
}

vint64m1x5_t test_vlseg5e64ff_v_i64m1x5_tu(vint64m1x5_t vd, const int64_t *rs1,
                                           size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e64ff_tu(vd, rs1, new_vl, vl);
}

vuint64m1x5_t test_vlseg5e64ff_v_u64m1x5_tu(vuint64m1x5_t vd,
                                            const uint64_t *rs1, size_t *new_vl,
                                            size_t vl) {
  return __riscv_vlseg5e64ff_tu(vd, rs1, new_vl, vl);
}

vfloat64m1x5_t test_vlseg5e64ff_v_f64m1x5_tum(vbool64_t vm, vfloat64m1x5_t vd,
                                              const double *rs1, size_t *new_vl,
                                              size_t vl) {
  return __riscv_vlseg5e64ff_tum(vm, vd, rs1, new_vl, vl);
}

vint64m1x5_t test_vlseg5e64ff_v_i64m1x5_tum(vbool64_t vm, vint64m1x5_t vd,
                                            const int64_t *rs1, size_t *new_vl,
                                            size_t vl) {
  return __riscv_vlseg5e64ff_tum(vm, vd, rs1, new_vl, vl);
}

vuint64m1x5_t test_vlseg5e64ff_v_u64m1x5_tum(vbool64_t vm, vuint64m1x5_t vd,
                                             const uint64_t *rs1,
                                             size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e64ff_tum(vm, vd, rs1, new_vl, vl);
}

vfloat64m1x5_t test_vlseg5e64ff_v_f64m1x5_tumu(vbool64_t vm, vfloat64m1x5_t vd,
                                               const double *rs1,
                                               size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e64ff_tumu(vm, vd, rs1, new_vl, vl);
}

vint64m1x5_t test_vlseg5e64ff_v_i64m1x5_tumu(vbool64_t vm, vint64m1x5_t vd,
                                             const int64_t *rs1, size_t *new_vl,
                                             size_t vl) {
  return __riscv_vlseg5e64ff_tumu(vm, vd, rs1, new_vl, vl);
}

vuint64m1x5_t test_vlseg5e64ff_v_u64m1x5_tumu(vbool64_t vm, vuint64m1x5_t vd,
                                              const uint64_t *rs1,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e64ff_tumu(vm, vd, rs1, new_vl, vl);
}

vfloat64m1x5_t test_vlseg5e64ff_v_f64m1x5_mu(vbool64_t vm, vfloat64m1x5_t vd,
                                             const double *rs1, size_t *new_vl,
                                             size_t vl) {
  return __riscv_vlseg5e64ff_mu(vm, vd, rs1, new_vl, vl);
}

vint64m1x5_t test_vlseg5e64ff_v_i64m1x5_mu(vbool64_t vm, vint64m1x5_t vd,
                                           const int64_t *rs1, size_t *new_vl,
                                           size_t vl) {
  return __riscv_vlseg5e64ff_mu(vm, vd, rs1, new_vl, vl);
}

vuint64m1x5_t test_vlseg5e64ff_v_u64m1x5_mu(vbool64_t vm, vuint64m1x5_t vd,
                                            const uint64_t *rs1, size_t *new_vl,
                                            size_t vl) {
  return __riscv_vlseg5e64ff_mu(vm, vd, rs1, new_vl, vl);
}
