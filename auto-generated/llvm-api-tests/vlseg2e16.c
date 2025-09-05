// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +zvfh -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat16mf4x2_t test_vlseg2e16_v_f16mf4x2(const _Float16 *rs1, size_t vl) {
  return __riscv_vlseg2e16_v_f16mf4x2(rs1, vl);
}

vfloat16mf2x2_t test_vlseg2e16_v_f16mf2x2(const _Float16 *rs1, size_t vl) {
  return __riscv_vlseg2e16_v_f16mf2x2(rs1, vl);
}

vfloat16m1x2_t test_vlseg2e16_v_f16m1x2(const _Float16 *rs1, size_t vl) {
  return __riscv_vlseg2e16_v_f16m1x2(rs1, vl);
}

vfloat16m2x2_t test_vlseg2e16_v_f16m2x2(const _Float16 *rs1, size_t vl) {
  return __riscv_vlseg2e16_v_f16m2x2(rs1, vl);
}

vfloat16m4x2_t test_vlseg2e16_v_f16m4x2(const _Float16 *rs1, size_t vl) {
  return __riscv_vlseg2e16_v_f16m4x2(rs1, vl);
}

vint16mf4x2_t test_vlseg2e16_v_i16mf4x2(const int16_t *rs1, size_t vl) {
  return __riscv_vlseg2e16_v_i16mf4x2(rs1, vl);
}

vint16mf2x2_t test_vlseg2e16_v_i16mf2x2(const int16_t *rs1, size_t vl) {
  return __riscv_vlseg2e16_v_i16mf2x2(rs1, vl);
}

vint16m1x2_t test_vlseg2e16_v_i16m1x2(const int16_t *rs1, size_t vl) {
  return __riscv_vlseg2e16_v_i16m1x2(rs1, vl);
}

vint16m2x2_t test_vlseg2e16_v_i16m2x2(const int16_t *rs1, size_t vl) {
  return __riscv_vlseg2e16_v_i16m2x2(rs1, vl);
}

vint16m4x2_t test_vlseg2e16_v_i16m4x2(const int16_t *rs1, size_t vl) {
  return __riscv_vlseg2e16_v_i16m4x2(rs1, vl);
}

vuint16mf4x2_t test_vlseg2e16_v_u16mf4x2(const uint16_t *rs1, size_t vl) {
  return __riscv_vlseg2e16_v_u16mf4x2(rs1, vl);
}

vuint16mf2x2_t test_vlseg2e16_v_u16mf2x2(const uint16_t *rs1, size_t vl) {
  return __riscv_vlseg2e16_v_u16mf2x2(rs1, vl);
}

vuint16m1x2_t test_vlseg2e16_v_u16m1x2(const uint16_t *rs1, size_t vl) {
  return __riscv_vlseg2e16_v_u16m1x2(rs1, vl);
}

vuint16m2x2_t test_vlseg2e16_v_u16m2x2(const uint16_t *rs1, size_t vl) {
  return __riscv_vlseg2e16_v_u16m2x2(rs1, vl);
}

vuint16m4x2_t test_vlseg2e16_v_u16m4x2(const uint16_t *rs1, size_t vl) {
  return __riscv_vlseg2e16_v_u16m4x2(rs1, vl);
}

vfloat16mf4x2_t test_vlseg2e16_v_f16mf4x2_m(vbool64_t vm, const _Float16 *rs1,
                                            size_t vl) {
  return __riscv_vlseg2e16_v_f16mf4x2_m(vm, rs1, vl);
}

vfloat16mf2x2_t test_vlseg2e16_v_f16mf2x2_m(vbool32_t vm, const _Float16 *rs1,
                                            size_t vl) {
  return __riscv_vlseg2e16_v_f16mf2x2_m(vm, rs1, vl);
}

vfloat16m1x2_t test_vlseg2e16_v_f16m1x2_m(vbool16_t vm, const _Float16 *rs1,
                                          size_t vl) {
  return __riscv_vlseg2e16_v_f16m1x2_m(vm, rs1, vl);
}

vfloat16m2x2_t test_vlseg2e16_v_f16m2x2_m(vbool8_t vm, const _Float16 *rs1,
                                          size_t vl) {
  return __riscv_vlseg2e16_v_f16m2x2_m(vm, rs1, vl);
}

vfloat16m4x2_t test_vlseg2e16_v_f16m4x2_m(vbool4_t vm, const _Float16 *rs1,
                                          size_t vl) {
  return __riscv_vlseg2e16_v_f16m4x2_m(vm, rs1, vl);
}

vint16mf4x2_t test_vlseg2e16_v_i16mf4x2_m(vbool64_t vm, const int16_t *rs1,
                                          size_t vl) {
  return __riscv_vlseg2e16_v_i16mf4x2_m(vm, rs1, vl);
}

vint16mf2x2_t test_vlseg2e16_v_i16mf2x2_m(vbool32_t vm, const int16_t *rs1,
                                          size_t vl) {
  return __riscv_vlseg2e16_v_i16mf2x2_m(vm, rs1, vl);
}

vint16m1x2_t test_vlseg2e16_v_i16m1x2_m(vbool16_t vm, const int16_t *rs1,
                                        size_t vl) {
  return __riscv_vlseg2e16_v_i16m1x2_m(vm, rs1, vl);
}

vint16m2x2_t test_vlseg2e16_v_i16m2x2_m(vbool8_t vm, const int16_t *rs1,
                                        size_t vl) {
  return __riscv_vlseg2e16_v_i16m2x2_m(vm, rs1, vl);
}

vint16m4x2_t test_vlseg2e16_v_i16m4x2_m(vbool4_t vm, const int16_t *rs1,
                                        size_t vl) {
  return __riscv_vlseg2e16_v_i16m4x2_m(vm, rs1, vl);
}

vuint16mf4x2_t test_vlseg2e16_v_u16mf4x2_m(vbool64_t vm, const uint16_t *rs1,
                                           size_t vl) {
  return __riscv_vlseg2e16_v_u16mf4x2_m(vm, rs1, vl);
}

vuint16mf2x2_t test_vlseg2e16_v_u16mf2x2_m(vbool32_t vm, const uint16_t *rs1,
                                           size_t vl) {
  return __riscv_vlseg2e16_v_u16mf2x2_m(vm, rs1, vl);
}

vuint16m1x2_t test_vlseg2e16_v_u16m1x2_m(vbool16_t vm, const uint16_t *rs1,
                                         size_t vl) {
  return __riscv_vlseg2e16_v_u16m1x2_m(vm, rs1, vl);
}

vuint16m2x2_t test_vlseg2e16_v_u16m2x2_m(vbool8_t vm, const uint16_t *rs1,
                                         size_t vl) {
  return __riscv_vlseg2e16_v_u16m2x2_m(vm, rs1, vl);
}

vuint16m4x2_t test_vlseg2e16_v_u16m4x2_m(vbool4_t vm, const uint16_t *rs1,
                                         size_t vl) {
  return __riscv_vlseg2e16_v_u16m4x2_m(vm, rs1, vl);
}
