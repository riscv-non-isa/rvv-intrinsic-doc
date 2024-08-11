// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +zvfh -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat16mf4_t test_vfmv_v_f_f16mf4(_Float16 rs1, size_t vl) {
  return __riscv_vfmv_v_f_f16mf4(rs1, vl);
}

vfloat16mf2_t test_vfmv_v_f_f16mf2(_Float16 rs1, size_t vl) {
  return __riscv_vfmv_v_f_f16mf2(rs1, vl);
}

vfloat16m1_t test_vfmv_v_f_f16m1(_Float16 rs1, size_t vl) {
  return __riscv_vfmv_v_f_f16m1(rs1, vl);
}

vfloat16m2_t test_vfmv_v_f_f16m2(_Float16 rs1, size_t vl) {
  return __riscv_vfmv_v_f_f16m2(rs1, vl);
}

vfloat16m4_t test_vfmv_v_f_f16m4(_Float16 rs1, size_t vl) {
  return __riscv_vfmv_v_f_f16m4(rs1, vl);
}

vfloat16m8_t test_vfmv_v_f_f16m8(_Float16 rs1, size_t vl) {
  return __riscv_vfmv_v_f_f16m8(rs1, vl);
}

_Float16 test_vfmv_f_s_f16mf4_f16(vfloat16mf4_t vs1) {
  return __riscv_vfmv_f_s_f16mf4_f16(vs1);
}

vfloat16mf4_t test_vfmv_s_f_f16mf4(_Float16 rs1, size_t vl) {
  return __riscv_vfmv_s_f_f16mf4(rs1, vl);
}

_Float16 test_vfmv_f_s_f16mf2_f16(vfloat16mf2_t vs1) {
  return __riscv_vfmv_f_s_f16mf2_f16(vs1);
}

vfloat16mf2_t test_vfmv_s_f_f16mf2(_Float16 rs1, size_t vl) {
  return __riscv_vfmv_s_f_f16mf2(rs1, vl);
}

_Float16 test_vfmv_f_s_f16m1_f16(vfloat16m1_t vs1) {
  return __riscv_vfmv_f_s_f16m1_f16(vs1);
}

vfloat16m1_t test_vfmv_s_f_f16m1(_Float16 rs1, size_t vl) {
  return __riscv_vfmv_s_f_f16m1(rs1, vl);
}

_Float16 test_vfmv_f_s_f16m2_f16(vfloat16m2_t vs1) {
  return __riscv_vfmv_f_s_f16m2_f16(vs1);
}

vfloat16m2_t test_vfmv_s_f_f16m2(_Float16 rs1, size_t vl) {
  return __riscv_vfmv_s_f_f16m2(rs1, vl);
}

_Float16 test_vfmv_f_s_f16m4_f16(vfloat16m4_t vs1) {
  return __riscv_vfmv_f_s_f16m4_f16(vs1);
}

vfloat16m4_t test_vfmv_s_f_f16m4(_Float16 rs1, size_t vl) {
  return __riscv_vfmv_s_f_f16m4(rs1, vl);
}

_Float16 test_vfmv_f_s_f16m8_f16(vfloat16m8_t vs1) {
  return __riscv_vfmv_f_s_f16m8_f16(vs1);
}

vfloat16m8_t test_vfmv_s_f_f16m8(_Float16 rs1, size_t vl) {
  return __riscv_vfmv_s_f_f16m8(rs1, vl);
}
