// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +zvfh -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vint8mf8_t test_vle8ff_v_i8mf8_m(vbool64_t vm, const int8_t *rs1,
                                 size_t *new_vl, size_t vl) {
  return __riscv_vle8ff(vm, rs1, new_vl, vl);
}

vint8mf4_t test_vle8ff_v_i8mf4_m(vbool32_t vm, const int8_t *rs1,
                                 size_t *new_vl, size_t vl) {
  return __riscv_vle8ff(vm, rs1, new_vl, vl);
}

vint8mf2_t test_vle8ff_v_i8mf2_m(vbool16_t vm, const int8_t *rs1,
                                 size_t *new_vl, size_t vl) {
  return __riscv_vle8ff(vm, rs1, new_vl, vl);
}

vint8m1_t test_vle8ff_v_i8m1_m(vbool8_t vm, const int8_t *rs1, size_t *new_vl,
                               size_t vl) {
  return __riscv_vle8ff(vm, rs1, new_vl, vl);
}

vint8m2_t test_vle8ff_v_i8m2_m(vbool4_t vm, const int8_t *rs1, size_t *new_vl,
                               size_t vl) {
  return __riscv_vle8ff(vm, rs1, new_vl, vl);
}

vint8m4_t test_vle8ff_v_i8m4_m(vbool2_t vm, const int8_t *rs1, size_t *new_vl,
                               size_t vl) {
  return __riscv_vle8ff(vm, rs1, new_vl, vl);
}

vint8m8_t test_vle8ff_v_i8m8_m(vbool1_t vm, const int8_t *rs1, size_t *new_vl,
                               size_t vl) {
  return __riscv_vle8ff(vm, rs1, new_vl, vl);
}

vuint8mf8_t test_vle8ff_v_u8mf8_m(vbool64_t vm, const uint8_t *rs1,
                                  size_t *new_vl, size_t vl) {
  return __riscv_vle8ff(vm, rs1, new_vl, vl);
}

vuint8mf4_t test_vle8ff_v_u8mf4_m(vbool32_t vm, const uint8_t *rs1,
                                  size_t *new_vl, size_t vl) {
  return __riscv_vle8ff(vm, rs1, new_vl, vl);
}

vuint8mf2_t test_vle8ff_v_u8mf2_m(vbool16_t vm, const uint8_t *rs1,
                                  size_t *new_vl, size_t vl) {
  return __riscv_vle8ff(vm, rs1, new_vl, vl);
}

vuint8m1_t test_vle8ff_v_u8m1_m(vbool8_t vm, const uint8_t *rs1, size_t *new_vl,
                                size_t vl) {
  return __riscv_vle8ff(vm, rs1, new_vl, vl);
}

vuint8m2_t test_vle8ff_v_u8m2_m(vbool4_t vm, const uint8_t *rs1, size_t *new_vl,
                                size_t vl) {
  return __riscv_vle8ff(vm, rs1, new_vl, vl);
}

vuint8m4_t test_vle8ff_v_u8m4_m(vbool2_t vm, const uint8_t *rs1, size_t *new_vl,
                                size_t vl) {
  return __riscv_vle8ff(vm, rs1, new_vl, vl);
}

vuint8m8_t test_vle8ff_v_u8m8_m(vbool1_t vm, const uint8_t *rs1, size_t *new_vl,
                                size_t vl) {
  return __riscv_vle8ff(vm, rs1, new_vl, vl);
}
