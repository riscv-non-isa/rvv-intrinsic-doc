// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +zvfhmin -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat16m2_t test_vset_v_f16m1_f16m2(vfloat16m2_t dest, size_t index,
                                     vfloat16m1_t value) {
  return __riscv_vset_v_f16m1_f16m2(dest, 0, value);
}

vfloat16m4_t test_vset_v_f16m1_f16m4(vfloat16m4_t dest, size_t index,
                                     vfloat16m1_t value) {
  return __riscv_vset_v_f16m1_f16m4(dest, 0, value);
}

vfloat16m4_t test_vset_v_f16m2_f16m4(vfloat16m4_t dest, size_t index,
                                     vfloat16m2_t value) {
  return __riscv_vset_v_f16m2_f16m4(dest, 0, value);
}

vfloat16m8_t test_vset_v_f16m1_f16m8(vfloat16m8_t dest, size_t index,
                                     vfloat16m1_t value) {
  return __riscv_vset_v_f16m1_f16m8(dest, 0, value);
}

vfloat16m8_t test_vset_v_f16m2_f16m8(vfloat16m8_t dest, size_t index,
                                     vfloat16m2_t value) {
  return __riscv_vset_v_f16m2_f16m8(dest, 0, value);
}

vfloat16m8_t test_vset_v_f16m4_f16m8(vfloat16m8_t dest, size_t index,
                                     vfloat16m4_t value) {
  return __riscv_vset_v_f16m4_f16m8(dest, 0, value);
}

vfloat16mf4x2_t test_vset_v_f16mf4_f16mf4x2(vfloat16mf4x2_t dest, size_t index,
                                            vfloat16mf4_t value) {
  return __riscv_vset_v_f16mf4_f16mf4x2(dest, 0, value);
}

vfloat16mf4x3_t test_vset_v_f16mf4_f16mf4x3(vfloat16mf4x3_t dest, size_t index,
                                            vfloat16mf4_t value) {
  return __riscv_vset_v_f16mf4_f16mf4x3(dest, 0, value);
}

vfloat16mf4x4_t test_vset_v_f16mf4_f16mf4x4(vfloat16mf4x4_t dest, size_t index,
                                            vfloat16mf4_t value) {
  return __riscv_vset_v_f16mf4_f16mf4x4(dest, 0, value);
}

vfloat16mf4x5_t test_vset_v_f16mf4_f16mf4x5(vfloat16mf4x5_t dest, size_t index,
                                            vfloat16mf4_t value) {
  return __riscv_vset_v_f16mf4_f16mf4x5(dest, 0, value);
}

vfloat16mf4x6_t test_vset_v_f16mf4_f16mf4x6(vfloat16mf4x6_t dest, size_t index,
                                            vfloat16mf4_t value) {
  return __riscv_vset_v_f16mf4_f16mf4x6(dest, 0, value);
}

vfloat16mf4x7_t test_vset_v_f16mf4_f16mf4x7(vfloat16mf4x7_t dest, size_t index,
                                            vfloat16mf4_t value) {
  return __riscv_vset_v_f16mf4_f16mf4x7(dest, 0, value);
}

vfloat16mf4x8_t test_vset_v_f16mf4_f16mf4x8(vfloat16mf4x8_t dest, size_t index,
                                            vfloat16mf4_t value) {
  return __riscv_vset_v_f16mf4_f16mf4x8(dest, 0, value);
}

vfloat16mf2x2_t test_vset_v_f16mf2_f16mf2x2(vfloat16mf2x2_t dest, size_t index,
                                            vfloat16mf2_t value) {
  return __riscv_vset_v_f16mf2_f16mf2x2(dest, 0, value);
}

vfloat16mf2x3_t test_vset_v_f16mf2_f16mf2x3(vfloat16mf2x3_t dest, size_t index,
                                            vfloat16mf2_t value) {
  return __riscv_vset_v_f16mf2_f16mf2x3(dest, 0, value);
}

vfloat16mf2x4_t test_vset_v_f16mf2_f16mf2x4(vfloat16mf2x4_t dest, size_t index,
                                            vfloat16mf2_t value) {
  return __riscv_vset_v_f16mf2_f16mf2x4(dest, 0, value);
}

vfloat16mf2x5_t test_vset_v_f16mf2_f16mf2x5(vfloat16mf2x5_t dest, size_t index,
                                            vfloat16mf2_t value) {
  return __riscv_vset_v_f16mf2_f16mf2x5(dest, 0, value);
}

vfloat16mf2x6_t test_vset_v_f16mf2_f16mf2x6(vfloat16mf2x6_t dest, size_t index,
                                            vfloat16mf2_t value) {
  return __riscv_vset_v_f16mf2_f16mf2x6(dest, 0, value);
}

vfloat16mf2x7_t test_vset_v_f16mf2_f16mf2x7(vfloat16mf2x7_t dest, size_t index,
                                            vfloat16mf2_t value) {
  return __riscv_vset_v_f16mf2_f16mf2x7(dest, 0, value);
}

vfloat16mf2x8_t test_vset_v_f16mf2_f16mf2x8(vfloat16mf2x8_t dest, size_t index,
                                            vfloat16mf2_t value) {
  return __riscv_vset_v_f16mf2_f16mf2x8(dest, 0, value);
}

vfloat16m1x2_t test_vset_v_f16m1_f16m1x2(vfloat16m1x2_t dest, size_t index,
                                         vfloat16m1_t value) {
  return __riscv_vset_v_f16m1_f16m1x2(dest, 0, value);
}

vfloat16m1x3_t test_vset_v_f16m1_f16m1x3(vfloat16m1x3_t dest, size_t index,
                                         vfloat16m1_t value) {
  return __riscv_vset_v_f16m1_f16m1x3(dest, 0, value);
}

vfloat16m1x4_t test_vset_v_f16m1_f16m1x4(vfloat16m1x4_t dest, size_t index,
                                         vfloat16m1_t value) {
  return __riscv_vset_v_f16m1_f16m1x4(dest, 0, value);
}

vfloat16m1x5_t test_vset_v_f16m1_f16m1x5(vfloat16m1x5_t dest, size_t index,
                                         vfloat16m1_t value) {
  return __riscv_vset_v_f16m1_f16m1x5(dest, 0, value);
}

vfloat16m1x6_t test_vset_v_f16m1_f16m1x6(vfloat16m1x6_t dest, size_t index,
                                         vfloat16m1_t value) {
  return __riscv_vset_v_f16m1_f16m1x6(dest, 0, value);
}

vfloat16m1x7_t test_vset_v_f16m1_f16m1x7(vfloat16m1x7_t dest, size_t index,
                                         vfloat16m1_t value) {
  return __riscv_vset_v_f16m1_f16m1x7(dest, 0, value);
}

vfloat16m1x8_t test_vset_v_f16m1_f16m1x8(vfloat16m1x8_t dest, size_t index,
                                         vfloat16m1_t value) {
  return __riscv_vset_v_f16m1_f16m1x8(dest, 0, value);
}

vfloat16m2x2_t test_vset_v_f16m2_f16m2x2(vfloat16m2x2_t dest, size_t index,
                                         vfloat16m2_t value) {
  return __riscv_vset_v_f16m2_f16m2x2(dest, 0, value);
}

vfloat16m2x3_t test_vset_v_f16m2_f16m2x3(vfloat16m2x3_t dest, size_t index,
                                         vfloat16m2_t value) {
  return __riscv_vset_v_f16m2_f16m2x3(dest, 0, value);
}

vfloat16m2x4_t test_vset_v_f16m2_f16m2x4(vfloat16m2x4_t dest, size_t index,
                                         vfloat16m2_t value) {
  return __riscv_vset_v_f16m2_f16m2x4(dest, 0, value);
}

vfloat16m4x2_t test_vset_v_f16m4_f16m4x2(vfloat16m4x2_t dest, size_t index,
                                         vfloat16m4_t value) {
  return __riscv_vset_v_f16m4_f16m4x2(dest, 0, value);
}
