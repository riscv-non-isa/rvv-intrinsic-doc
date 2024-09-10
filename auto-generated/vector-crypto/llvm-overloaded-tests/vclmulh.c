// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zvbc \
// RUN:   -target-feature +zve64x \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vuint64m1_t test_vclmulh_vv_u64m1(vuint64m1_t vs2, vuint64m1_t vs1, size_t vl) {
  return __riscv_vclmulh(vs2, vs1, vl);
}

vuint64m1_t test_vclmulh_vx_u64m1(vuint64m1_t vs2, uint64_t rs1, size_t vl) {
  return __riscv_vclmulh(vs2, rs1, vl);
}

vuint64m2_t test_vclmulh_vv_u64m2(vuint64m2_t vs2, vuint64m2_t vs1, size_t vl) {
  return __riscv_vclmulh(vs2, vs1, vl);
}

vuint64m2_t test_vclmulh_vx_u64m2(vuint64m2_t vs2, uint64_t rs1, size_t vl) {
  return __riscv_vclmulh(vs2, rs1, vl);
}

vuint64m4_t test_vclmulh_vv_u64m4(vuint64m4_t vs2, vuint64m4_t vs1, size_t vl) {
  return __riscv_vclmulh(vs2, vs1, vl);
}

vuint64m4_t test_vclmulh_vx_u64m4(vuint64m4_t vs2, uint64_t rs1, size_t vl) {
  return __riscv_vclmulh(vs2, rs1, vl);
}

vuint64m8_t test_vclmulh_vv_u64m8(vuint64m8_t vs2, vuint64m8_t vs1, size_t vl) {
  return __riscv_vclmulh(vs2, vs1, vl);
}

vuint64m8_t test_vclmulh_vx_u64m8(vuint64m8_t vs2, uint64_t rs1, size_t vl) {
  return __riscv_vclmulh(vs2, rs1, vl);
}

vuint64m1_t test_vclmulh_vv_u64m1_m(vbool64_t vm, vuint64m1_t vs2,
                                    vuint64m1_t vs1, size_t vl) {
  return __riscv_vclmulh(vm, vs2, vs1, vl);
}

vuint64m1_t test_vclmulh_vx_u64m1_m(vbool64_t vm, vuint64m1_t vs2, uint64_t rs1,
                                    size_t vl) {
  return __riscv_vclmulh(vm, vs2, rs1, vl);
}

vuint64m2_t test_vclmulh_vv_u64m2_m(vbool32_t vm, vuint64m2_t vs2,
                                    vuint64m2_t vs1, size_t vl) {
  return __riscv_vclmulh(vm, vs2, vs1, vl);
}

vuint64m2_t test_vclmulh_vx_u64m2_m(vbool32_t vm, vuint64m2_t vs2, uint64_t rs1,
                                    size_t vl) {
  return __riscv_vclmulh(vm, vs2, rs1, vl);
}

vuint64m4_t test_vclmulh_vv_u64m4_m(vbool16_t vm, vuint64m4_t vs2,
                                    vuint64m4_t vs1, size_t vl) {
  return __riscv_vclmulh(vm, vs2, vs1, vl);
}

vuint64m4_t test_vclmulh_vx_u64m4_m(vbool16_t vm, vuint64m4_t vs2, uint64_t rs1,
                                    size_t vl) {
  return __riscv_vclmulh(vm, vs2, rs1, vl);
}

vuint64m8_t test_vclmulh_vv_u64m8_m(vbool8_t vm, vuint64m8_t vs2,
                                    vuint64m8_t vs1, size_t vl) {
  return __riscv_vclmulh(vm, vs2, vs1, vl);
}

vuint64m8_t test_vclmulh_vx_u64m8_m(vbool8_t vm, vuint64m8_t vs2, uint64_t rs1,
                                    size_t vl) {
  return __riscv_vclmulh(vm, vs2, rs1, vl);
}
