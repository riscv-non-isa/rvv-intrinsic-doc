// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +zvfh -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat64m1_t test_vlse64_v_f64m1_m(vbool64_t vm, const double *rs1,
                                   ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse64(vm, rs1, rs2, vl);
}

vfloat64m2_t test_vlse64_v_f64m2_m(vbool32_t vm, const double *rs1,
                                   ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse64(vm, rs1, rs2, vl);
}

vfloat64m4_t test_vlse64_v_f64m4_m(vbool16_t vm, const double *rs1,
                                   ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse64(vm, rs1, rs2, vl);
}

vfloat64m8_t test_vlse64_v_f64m8_m(vbool8_t vm, const double *rs1,
                                   ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse64(vm, rs1, rs2, vl);
}

vint64m1_t test_vlse64_v_i64m1_m(vbool64_t vm, const int64_t *rs1,
                                 ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse64(vm, rs1, rs2, vl);
}

vint64m2_t test_vlse64_v_i64m2_m(vbool32_t vm, const int64_t *rs1,
                                 ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse64(vm, rs1, rs2, vl);
}

vint64m4_t test_vlse64_v_i64m4_m(vbool16_t vm, const int64_t *rs1,
                                 ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse64(vm, rs1, rs2, vl);
}

vint64m8_t test_vlse64_v_i64m8_m(vbool8_t vm, const int64_t *rs1, ptrdiff_t rs2,
                                 size_t vl) {
  return __riscv_vlse64(vm, rs1, rs2, vl);
}

vuint64m1_t test_vlse64_v_u64m1_m(vbool64_t vm, const uint64_t *rs1,
                                  ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse64(vm, rs1, rs2, vl);
}

vuint64m2_t test_vlse64_v_u64m2_m(vbool32_t vm, const uint64_t *rs1,
                                  ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse64(vm, rs1, rs2, vl);
}

vuint64m4_t test_vlse64_v_u64m4_m(vbool16_t vm, const uint64_t *rs1,
                                  ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse64(vm, rs1, rs2, vl);
}

vuint64m8_t test_vlse64_v_u64m8_m(vbool8_t vm, const uint64_t *rs1,
                                  ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse64(vm, rs1, rs2, vl);
}
