// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +zvfh -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat32mf2x3_t test_vlseg3e32_v_f32mf2x3(const float *rs1, size_t vl) {
  return __riscv_vlseg3e32_v_f32mf2x3(rs1, vl);
}

vfloat32m1x3_t test_vlseg3e32_v_f32m1x3(const float *rs1, size_t vl) {
  return __riscv_vlseg3e32_v_f32m1x3(rs1, vl);
}

vfloat32m2x3_t test_vlseg3e32_v_f32m2x3(const float *rs1, size_t vl) {
  return __riscv_vlseg3e32_v_f32m2x3(rs1, vl);
}

vint32mf2x3_t test_vlseg3e32_v_i32mf2x3(const int32_t *rs1, size_t vl) {
  return __riscv_vlseg3e32_v_i32mf2x3(rs1, vl);
}

vint32m1x3_t test_vlseg3e32_v_i32m1x3(const int32_t *rs1, size_t vl) {
  return __riscv_vlseg3e32_v_i32m1x3(rs1, vl);
}

vint32m2x3_t test_vlseg3e32_v_i32m2x3(const int32_t *rs1, size_t vl) {
  return __riscv_vlseg3e32_v_i32m2x3(rs1, vl);
}

vuint32mf2x3_t test_vlseg3e32_v_u32mf2x3(const uint32_t *rs1, size_t vl) {
  return __riscv_vlseg3e32_v_u32mf2x3(rs1, vl);
}

vuint32m1x3_t test_vlseg3e32_v_u32m1x3(const uint32_t *rs1, size_t vl) {
  return __riscv_vlseg3e32_v_u32m1x3(rs1, vl);
}

vuint32m2x3_t test_vlseg3e32_v_u32m2x3(const uint32_t *rs1, size_t vl) {
  return __riscv_vlseg3e32_v_u32m2x3(rs1, vl);
}

vfloat32mf2x3_t test_vlseg3e32_v_f32mf2x3_m(vbool64_t vm, const float *rs1,
                                            size_t vl) {
  return __riscv_vlseg3e32_v_f32mf2x3_m(vm, rs1, vl);
}

vfloat32m1x3_t test_vlseg3e32_v_f32m1x3_m(vbool32_t vm, const float *rs1,
                                          size_t vl) {
  return __riscv_vlseg3e32_v_f32m1x3_m(vm, rs1, vl);
}

vfloat32m2x3_t test_vlseg3e32_v_f32m2x3_m(vbool16_t vm, const float *rs1,
                                          size_t vl) {
  return __riscv_vlseg3e32_v_f32m2x3_m(vm, rs1, vl);
}

vint32mf2x3_t test_vlseg3e32_v_i32mf2x3_m(vbool64_t vm, const int32_t *rs1,
                                          size_t vl) {
  return __riscv_vlseg3e32_v_i32mf2x3_m(vm, rs1, vl);
}

vint32m1x3_t test_vlseg3e32_v_i32m1x3_m(vbool32_t vm, const int32_t *rs1,
                                        size_t vl) {
  return __riscv_vlseg3e32_v_i32m1x3_m(vm, rs1, vl);
}

vint32m2x3_t test_vlseg3e32_v_i32m2x3_m(vbool16_t vm, const int32_t *rs1,
                                        size_t vl) {
  return __riscv_vlseg3e32_v_i32m2x3_m(vm, rs1, vl);
}

vuint32mf2x3_t test_vlseg3e32_v_u32mf2x3_m(vbool64_t vm, const uint32_t *rs1,
                                           size_t vl) {
  return __riscv_vlseg3e32_v_u32mf2x3_m(vm, rs1, vl);
}

vuint32m1x3_t test_vlseg3e32_v_u32m1x3_m(vbool32_t vm, const uint32_t *rs1,
                                         size_t vl) {
  return __riscv_vlseg3e32_v_u32m1x3_m(vm, rs1, vl);
}

vuint32m2x3_t test_vlseg3e32_v_u32m2x3_m(vbool16_t vm, const uint32_t *rs1,
                                         size_t vl) {
  return __riscv_vlseg3e32_v_u32m2x3_m(vm, rs1, vl);
}
