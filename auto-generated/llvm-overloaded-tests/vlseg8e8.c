// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vint8mf8x8_t test_vlseg8e8_v_i8mf8x8_m(vbool64_t vm, const int8_t *rs1,
                                       size_t vl) {
  return __riscv_vlseg8e8(vm, rs1, vl);
}

vint8mf4x8_t test_vlseg8e8_v_i8mf4x8_m(vbool32_t vm, const int8_t *rs1,
                                       size_t vl) {
  return __riscv_vlseg8e8(vm, rs1, vl);
}

vint8mf2x8_t test_vlseg8e8_v_i8mf2x8_m(vbool16_t vm, const int8_t *rs1,
                                       size_t vl) {
  return __riscv_vlseg8e8(vm, rs1, vl);
}

vint8m1x8_t test_vlseg8e8_v_i8m1x8_m(vbool8_t vm, const int8_t *rs1,
                                     size_t vl) {
  return __riscv_vlseg8e8(vm, rs1, vl);
}

vuint8mf8x8_t test_vlseg8e8_v_u8mf8x8_m(vbool64_t vm, const uint8_t *rs1,
                                        size_t vl) {
  return __riscv_vlseg8e8(vm, rs1, vl);
}

vuint8mf4x8_t test_vlseg8e8_v_u8mf4x8_m(vbool32_t vm, const uint8_t *rs1,
                                        size_t vl) {
  return __riscv_vlseg8e8(vm, rs1, vl);
}

vuint8mf2x8_t test_vlseg8e8_v_u8mf2x8_m(vbool16_t vm, const uint8_t *rs1,
                                        size_t vl) {
  return __riscv_vlseg8e8(vm, rs1, vl);
}

vuint8m1x8_t test_vlseg8e8_v_u8m1x8_m(vbool8_t vm, const uint8_t *rs1,
                                      size_t vl) {
  return __riscv_vlseg8e8(vm, rs1, vl);
}
