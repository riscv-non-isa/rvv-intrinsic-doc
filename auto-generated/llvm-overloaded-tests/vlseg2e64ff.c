// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat64m1x2_t test_vlseg2e64ff_v_f64m1x2_m(vbool64_t mask, const double *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff(mask, base, new_vl, vl);
}

vfloat64m2x2_t test_vlseg2e64ff_v_f64m2x2_m(vbool32_t mask, const double *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff(mask, base, new_vl, vl);
}

vfloat64m4x2_t test_vlseg2e64ff_v_f64m4x2_m(vbool16_t mask, const double *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff(mask, base, new_vl, vl);
}

vint64m1x2_t test_vlseg2e64ff_v_i64m1x2_m(vbool64_t mask, const int64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff(mask, base, new_vl, vl);
}

vint64m2x2_t test_vlseg2e64ff_v_i64m2x2_m(vbool32_t mask, const int64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff(mask, base, new_vl, vl);
}

vint64m4x2_t test_vlseg2e64ff_v_i64m4x2_m(vbool16_t mask, const int64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff(mask, base, new_vl, vl);
}

vuint64m1x2_t test_vlseg2e64ff_v_u64m1x2_m(vbool64_t mask, const uint64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff(mask, base, new_vl, vl);
}

vuint64m2x2_t test_vlseg2e64ff_v_u64m2x2_m(vbool32_t mask, const uint64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff(mask, base, new_vl, vl);
}

vuint64m4x2_t test_vlseg2e64ff_v_u64m4x2_m(vbool16_t mask, const uint64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff(mask, base, new_vl, vl);
}

