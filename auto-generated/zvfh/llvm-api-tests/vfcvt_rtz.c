// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +zvfh -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vint16mf4_t test_vfcvt_rtz_x_f_v_i16mf4(vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfcvt_rtz_x_f_v_i16mf4(vs2, vl);
}

vint16mf2_t test_vfcvt_rtz_x_f_v_i16mf2(vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfcvt_rtz_x_f_v_i16mf2(vs2, vl);
}

vint16m1_t test_vfcvt_rtz_x_f_v_i16m1(vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfcvt_rtz_x_f_v_i16m1(vs2, vl);
}

vint16m2_t test_vfcvt_rtz_x_f_v_i16m2(vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfcvt_rtz_x_f_v_i16m2(vs2, vl);
}

vint16m4_t test_vfcvt_rtz_x_f_v_i16m4(vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfcvt_rtz_x_f_v_i16m4(vs2, vl);
}

vint16m8_t test_vfcvt_rtz_x_f_v_i16m8(vfloat16m8_t vs2, size_t vl) {
  return __riscv_vfcvt_rtz_x_f_v_i16m8(vs2, vl);
}

vuint16mf4_t test_vfcvt_rtz_xu_f_v_u16mf4(vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfcvt_rtz_xu_f_v_u16mf4(vs2, vl);
}

vuint16mf2_t test_vfcvt_rtz_xu_f_v_u16mf2(vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfcvt_rtz_xu_f_v_u16mf2(vs2, vl);
}

vuint16m1_t test_vfcvt_rtz_xu_f_v_u16m1(vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfcvt_rtz_xu_f_v_u16m1(vs2, vl);
}

vuint16m2_t test_vfcvt_rtz_xu_f_v_u16m2(vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfcvt_rtz_xu_f_v_u16m2(vs2, vl);
}

vuint16m4_t test_vfcvt_rtz_xu_f_v_u16m4(vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfcvt_rtz_xu_f_v_u16m4(vs2, vl);
}

vuint16m8_t test_vfcvt_rtz_xu_f_v_u16m8(vfloat16m8_t vs2, size_t vl) {
  return __riscv_vfcvt_rtz_xu_f_v_u16m8(vs2, vl);
}

vint16mf4_t test_vfcvt_rtz_x_f_v_i16mf4_m(vbool64_t vm, vfloat16mf4_t vs2,
                                          size_t vl) {
  return __riscv_vfcvt_rtz_x_f_v_i16mf4_m(vm, vs2, vl);
}

vint16mf2_t test_vfcvt_rtz_x_f_v_i16mf2_m(vbool32_t vm, vfloat16mf2_t vs2,
                                          size_t vl) {
  return __riscv_vfcvt_rtz_x_f_v_i16mf2_m(vm, vs2, vl);
}

vint16m1_t test_vfcvt_rtz_x_f_v_i16m1_m(vbool16_t vm, vfloat16m1_t vs2,
                                        size_t vl) {
  return __riscv_vfcvt_rtz_x_f_v_i16m1_m(vm, vs2, vl);
}

vint16m2_t test_vfcvt_rtz_x_f_v_i16m2_m(vbool8_t vm, vfloat16m2_t vs2,
                                        size_t vl) {
  return __riscv_vfcvt_rtz_x_f_v_i16m2_m(vm, vs2, vl);
}

vint16m4_t test_vfcvt_rtz_x_f_v_i16m4_m(vbool4_t vm, vfloat16m4_t vs2,
                                        size_t vl) {
  return __riscv_vfcvt_rtz_x_f_v_i16m4_m(vm, vs2, vl);
}

vint16m8_t test_vfcvt_rtz_x_f_v_i16m8_m(vbool2_t vm, vfloat16m8_t vs2,
                                        size_t vl) {
  return __riscv_vfcvt_rtz_x_f_v_i16m8_m(vm, vs2, vl);
}

vuint16mf4_t test_vfcvt_rtz_xu_f_v_u16mf4_m(vbool64_t vm, vfloat16mf4_t vs2,
                                            size_t vl) {
  return __riscv_vfcvt_rtz_xu_f_v_u16mf4_m(vm, vs2, vl);
}

vuint16mf2_t test_vfcvt_rtz_xu_f_v_u16mf2_m(vbool32_t vm, vfloat16mf2_t vs2,
                                            size_t vl) {
  return __riscv_vfcvt_rtz_xu_f_v_u16mf2_m(vm, vs2, vl);
}

vuint16m1_t test_vfcvt_rtz_xu_f_v_u16m1_m(vbool16_t vm, vfloat16m1_t vs2,
                                          size_t vl) {
  return __riscv_vfcvt_rtz_xu_f_v_u16m1_m(vm, vs2, vl);
}

vuint16m2_t test_vfcvt_rtz_xu_f_v_u16m2_m(vbool8_t vm, vfloat16m2_t vs2,
                                          size_t vl) {
  return __riscv_vfcvt_rtz_xu_f_v_u16m2_m(vm, vs2, vl);
}

vuint16m4_t test_vfcvt_rtz_xu_f_v_u16m4_m(vbool4_t vm, vfloat16m4_t vs2,
                                          size_t vl) {
  return __riscv_vfcvt_rtz_xu_f_v_u16m4_m(vm, vs2, vl);
}

vuint16m8_t test_vfcvt_rtz_xu_f_v_u16m8_m(vbool2_t vm, vfloat16m8_t vs2,
                                          size_t vl) {
  return __riscv_vfcvt_rtz_xu_f_v_u16m8_m(vm, vs2, vl);
}
