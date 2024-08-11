// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +zvfh -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat16m2_t test_vcreate_v_f16m1_f16m2(vfloat16m1_t v0, vfloat16m1_t v1) {
  return __riscv_vcreate_v_f16m1_f16m2(v0, v1);
}

vfloat16m4_t test_vcreate_v_f16m1_f16m4(vfloat16m1_t v0, vfloat16m1_t v1,
                                        vfloat16m1_t v2, vfloat16m1_t v3) {
  return __riscv_vcreate_v_f16m1_f16m4(v0, v1, v2, v3);
}

vfloat16m8_t test_vcreate_v_f16m1_f16m8(vfloat16m1_t v0, vfloat16m1_t v1,
                                        vfloat16m1_t v2, vfloat16m1_t v3,
                                        vfloat16m1_t v4, vfloat16m1_t v5,
                                        vfloat16m1_t v6, vfloat16m1_t v7) {
  return __riscv_vcreate_v_f16m1_f16m8(v0, v1, v2, v3, v4, v5, v6, v7);
}

vfloat16m4_t test_vcreate_v_f16m2_f16m4(vfloat16m2_t v0, vfloat16m2_t v1) {
  return __riscv_vcreate_v_f16m2_f16m4(v0, v1);
}

vfloat16m8_t test_vcreate_v_f16m2_f16m8(vfloat16m2_t v0, vfloat16m2_t v1,
                                        vfloat16m2_t v2, vfloat16m2_t v3) {
  return __riscv_vcreate_v_f16m2_f16m8(v0, v1, v2, v3);
}

vfloat16m8_t test_vcreate_v_f16m4_f16m8(vfloat16m4_t v0, vfloat16m4_t v1) {
  return __riscv_vcreate_v_f16m4_f16m8(v0, v1);
}

vfloat16mf4x2_t test_vcreate_v_f16mf4x2(vfloat16mf4_t v0, vfloat16mf4_t v1) {
  return __riscv_vcreate_v_f16mf4x2(v0, v1);
}

vfloat16mf4x3_t test_vcreate_v_f16mf4x3(vfloat16mf4_t v0, vfloat16mf4_t v1,
                                        vfloat16mf4_t v2) {
  return __riscv_vcreate_v_f16mf4x3(v0, v1, v2);
}

vfloat16mf4x4_t test_vcreate_v_f16mf4x4(vfloat16mf4_t v0, vfloat16mf4_t v1,
                                        vfloat16mf4_t v2, vfloat16mf4_t v3) {
  return __riscv_vcreate_v_f16mf4x4(v0, v1, v2, v3);
}

vfloat16mf4x5_t test_vcreate_v_f16mf4x5(vfloat16mf4_t v0, vfloat16mf4_t v1,
                                        vfloat16mf4_t v2, vfloat16mf4_t v3,
                                        vfloat16mf4_t v4) {
  return __riscv_vcreate_v_f16mf4x5(v0, v1, v2, v3, v4);
}

vfloat16mf4x6_t test_vcreate_v_f16mf4x6(vfloat16mf4_t v0, vfloat16mf4_t v1,
                                        vfloat16mf4_t v2, vfloat16mf4_t v3,
                                        vfloat16mf4_t v4, vfloat16mf4_t v5) {
  return __riscv_vcreate_v_f16mf4x6(v0, v1, v2, v3, v4, v5);
}

vfloat16mf4x7_t test_vcreate_v_f16mf4x7(vfloat16mf4_t v0, vfloat16mf4_t v1,
                                        vfloat16mf4_t v2, vfloat16mf4_t v3,
                                        vfloat16mf4_t v4, vfloat16mf4_t v5,
                                        vfloat16mf4_t v6) {
  return __riscv_vcreate_v_f16mf4x7(v0, v1, v2, v3, v4, v5, v6);
}

vfloat16mf4x8_t test_vcreate_v_f16mf4x8(vfloat16mf4_t v0, vfloat16mf4_t v1,
                                        vfloat16mf4_t v2, vfloat16mf4_t v3,
                                        vfloat16mf4_t v4, vfloat16mf4_t v5,
                                        vfloat16mf4_t v6, vfloat16mf4_t v7) {
  return __riscv_vcreate_v_f16mf4x8(v0, v1, v2, v3, v4, v5, v6, v7);
}

vfloat16mf2x2_t test_vcreate_v_f16mf2x2(vfloat16mf2_t v0, vfloat16mf2_t v1) {
  return __riscv_vcreate_v_f16mf2x2(v0, v1);
}

vfloat16mf2x3_t test_vcreate_v_f16mf2x3(vfloat16mf2_t v0, vfloat16mf2_t v1,
                                        vfloat16mf2_t v2) {
  return __riscv_vcreate_v_f16mf2x3(v0, v1, v2);
}

vfloat16mf2x4_t test_vcreate_v_f16mf2x4(vfloat16mf2_t v0, vfloat16mf2_t v1,
                                        vfloat16mf2_t v2, vfloat16mf2_t v3) {
  return __riscv_vcreate_v_f16mf2x4(v0, v1, v2, v3);
}

vfloat16mf2x5_t test_vcreate_v_f16mf2x5(vfloat16mf2_t v0, vfloat16mf2_t v1,
                                        vfloat16mf2_t v2, vfloat16mf2_t v3,
                                        vfloat16mf2_t v4) {
  return __riscv_vcreate_v_f16mf2x5(v0, v1, v2, v3, v4);
}

vfloat16mf2x6_t test_vcreate_v_f16mf2x6(vfloat16mf2_t v0, vfloat16mf2_t v1,
                                        vfloat16mf2_t v2, vfloat16mf2_t v3,
                                        vfloat16mf2_t v4, vfloat16mf2_t v5) {
  return __riscv_vcreate_v_f16mf2x6(v0, v1, v2, v3, v4, v5);
}

vfloat16mf2x7_t test_vcreate_v_f16mf2x7(vfloat16mf2_t v0, vfloat16mf2_t v1,
                                        vfloat16mf2_t v2, vfloat16mf2_t v3,
                                        vfloat16mf2_t v4, vfloat16mf2_t v5,
                                        vfloat16mf2_t v6) {
  return __riscv_vcreate_v_f16mf2x7(v0, v1, v2, v3, v4, v5, v6);
}

vfloat16mf2x8_t test_vcreate_v_f16mf2x8(vfloat16mf2_t v0, vfloat16mf2_t v1,
                                        vfloat16mf2_t v2, vfloat16mf2_t v3,
                                        vfloat16mf2_t v4, vfloat16mf2_t v5,
                                        vfloat16mf2_t v6, vfloat16mf2_t v7) {
  return __riscv_vcreate_v_f16mf2x8(v0, v1, v2, v3, v4, v5, v6, v7);
}

vfloat16m1x2_t test_vcreate_v_f16m1x2(vfloat16m1_t v0, vfloat16m1_t v1) {
  return __riscv_vcreate_v_f16m1x2(v0, v1);
}

vfloat16m1x3_t test_vcreate_v_f16m1x3(vfloat16m1_t v0, vfloat16m1_t v1,
                                      vfloat16m1_t v2) {
  return __riscv_vcreate_v_f16m1x3(v0, v1, v2);
}

vfloat16m1x4_t test_vcreate_v_f16m1x4(vfloat16m1_t v0, vfloat16m1_t v1,
                                      vfloat16m1_t v2, vfloat16m1_t v3) {
  return __riscv_vcreate_v_f16m1x4(v0, v1, v2, v3);
}

vfloat16m1x5_t test_vcreate_v_f16m1x5(vfloat16m1_t v0, vfloat16m1_t v1,
                                      vfloat16m1_t v2, vfloat16m1_t v3,
                                      vfloat16m1_t v4) {
  return __riscv_vcreate_v_f16m1x5(v0, v1, v2, v3, v4);
}

vfloat16m1x6_t test_vcreate_v_f16m1x6(vfloat16m1_t v0, vfloat16m1_t v1,
                                      vfloat16m1_t v2, vfloat16m1_t v3,
                                      vfloat16m1_t v4, vfloat16m1_t v5) {
  return __riscv_vcreate_v_f16m1x6(v0, v1, v2, v3, v4, v5);
}

vfloat16m1x7_t test_vcreate_v_f16m1x7(vfloat16m1_t v0, vfloat16m1_t v1,
                                      vfloat16m1_t v2, vfloat16m1_t v3,
                                      vfloat16m1_t v4, vfloat16m1_t v5,
                                      vfloat16m1_t v6) {
  return __riscv_vcreate_v_f16m1x7(v0, v1, v2, v3, v4, v5, v6);
}

vfloat16m1x8_t test_vcreate_v_f16m1x8(vfloat16m1_t v0, vfloat16m1_t v1,
                                      vfloat16m1_t v2, vfloat16m1_t v3,
                                      vfloat16m1_t v4, vfloat16m1_t v5,
                                      vfloat16m1_t v6, vfloat16m1_t v7) {
  return __riscv_vcreate_v_f16m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
}

vfloat16m2x2_t test_vcreate_v_f16m2x2(vfloat16m2_t v0, vfloat16m2_t v1) {
  return __riscv_vcreate_v_f16m2x2(v0, v1);
}

vfloat16m2x3_t test_vcreate_v_f16m2x3(vfloat16m2_t v0, vfloat16m2_t v1,
                                      vfloat16m2_t v2) {
  return __riscv_vcreate_v_f16m2x3(v0, v1, v2);
}

vfloat16m2x4_t test_vcreate_v_f16m2x4(vfloat16m2_t v0, vfloat16m2_t v1,
                                      vfloat16m2_t v2, vfloat16m2_t v3) {
  return __riscv_vcreate_v_f16m2x4(v0, v1, v2, v3);
}

vfloat16m4x2_t test_vcreate_v_f16m4x2(vfloat16m4_t v0, vfloat16m4_t v1) {
  return __riscv_vcreate_v_f16m4x2(v0, v1);
}
