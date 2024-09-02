// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +zvfh -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vint8mf8x6_t test_vlseg6e8ff_v_i8mf8x6(const int8_t *rs1, size_t *new_vl,
                                       size_t vl) {
  return __riscv_vlseg6e8ff_v_i8mf8x6(rs1, new_vl, vl);
}

vint8mf4x6_t test_vlseg6e8ff_v_i8mf4x6(const int8_t *rs1, size_t *new_vl,
                                       size_t vl) {
  return __riscv_vlseg6e8ff_v_i8mf4x6(rs1, new_vl, vl);
}

vint8mf2x6_t test_vlseg6e8ff_v_i8mf2x6(const int8_t *rs1, size_t *new_vl,
                                       size_t vl) {
  return __riscv_vlseg6e8ff_v_i8mf2x6(rs1, new_vl, vl);
}

vint8m1x6_t test_vlseg6e8ff_v_i8m1x6(const int8_t *rs1, size_t *new_vl,
                                     size_t vl) {
  return __riscv_vlseg6e8ff_v_i8m1x6(rs1, new_vl, vl);
}

vuint8mf8x6_t test_vlseg6e8ff_v_u8mf8x6(const uint8_t *rs1, size_t *new_vl,
                                        size_t vl) {
  return __riscv_vlseg6e8ff_v_u8mf8x6(rs1, new_vl, vl);
}

vuint8mf4x6_t test_vlseg6e8ff_v_u8mf4x6(const uint8_t *rs1, size_t *new_vl,
                                        size_t vl) {
  return __riscv_vlseg6e8ff_v_u8mf4x6(rs1, new_vl, vl);
}

vuint8mf2x6_t test_vlseg6e8ff_v_u8mf2x6(const uint8_t *rs1, size_t *new_vl,
                                        size_t vl) {
  return __riscv_vlseg6e8ff_v_u8mf2x6(rs1, new_vl, vl);
}

vuint8m1x6_t test_vlseg6e8ff_v_u8m1x6(const uint8_t *rs1, size_t *new_vl,
                                      size_t vl) {
  return __riscv_vlseg6e8ff_v_u8m1x6(rs1, new_vl, vl);
}

vint8mf8x6_t test_vlseg6e8ff_v_i8mf8x6_m(vbool64_t vm, const int8_t *rs1,
                                         size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e8ff_v_i8mf8x6_m(vm, rs1, new_vl, vl);
}

vint8mf4x6_t test_vlseg6e8ff_v_i8mf4x6_m(vbool32_t vm, const int8_t *rs1,
                                         size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e8ff_v_i8mf4x6_m(vm, rs1, new_vl, vl);
}

vint8mf2x6_t test_vlseg6e8ff_v_i8mf2x6_m(vbool16_t vm, const int8_t *rs1,
                                         size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e8ff_v_i8mf2x6_m(vm, rs1, new_vl, vl);
}

vint8m1x6_t test_vlseg6e8ff_v_i8m1x6_m(vbool8_t vm, const int8_t *rs1,
                                       size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e8ff_v_i8m1x6_m(vm, rs1, new_vl, vl);
}

vuint8mf8x6_t test_vlseg6e8ff_v_u8mf8x6_m(vbool64_t vm, const uint8_t *rs1,
                                          size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e8ff_v_u8mf8x6_m(vm, rs1, new_vl, vl);
}

vuint8mf4x6_t test_vlseg6e8ff_v_u8mf4x6_m(vbool32_t vm, const uint8_t *rs1,
                                          size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e8ff_v_u8mf4x6_m(vm, rs1, new_vl, vl);
}

vuint8mf2x6_t test_vlseg6e8ff_v_u8mf2x6_m(vbool16_t vm, const uint8_t *rs1,
                                          size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e8ff_v_u8mf2x6_m(vm, rs1, new_vl, vl);
}

vuint8m1x6_t test_vlseg6e8ff_v_u8m1x6_m(vbool8_t vm, const uint8_t *rs1,
                                        size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e8ff_v_u8m1x6_m(vm, rs1, new_vl, vl);
}
