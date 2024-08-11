// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +zvfh -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vint8mf8_t test_vfncvt_rtz_x_f_w_i8mf8(vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i8mf8(vs2, vl);
}

vint8mf4_t test_vfncvt_rtz_x_f_w_i8mf4(vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i8mf4(vs2, vl);
}

vint8mf2_t test_vfncvt_rtz_x_f_w_i8mf2(vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i8mf2(vs2, vl);
}

vint8m1_t test_vfncvt_rtz_x_f_w_i8m1(vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i8m1(vs2, vl);
}

vint8m2_t test_vfncvt_rtz_x_f_w_i8m2(vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i8m2(vs2, vl);
}

vint8m4_t test_vfncvt_rtz_x_f_w_i8m4(vfloat16m8_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i8m4(vs2, vl);
}

vuint8mf8_t test_vfncvt_rtz_xu_f_w_u8mf8(vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u8mf8(vs2, vl);
}

vuint8mf4_t test_vfncvt_rtz_xu_f_w_u8mf4(vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u8mf4(vs2, vl);
}

vuint8mf2_t test_vfncvt_rtz_xu_f_w_u8mf2(vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u8mf2(vs2, vl);
}

vuint8m1_t test_vfncvt_rtz_xu_f_w_u8m1(vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u8m1(vs2, vl);
}

vuint8m2_t test_vfncvt_rtz_xu_f_w_u8m2(vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u8m2(vs2, vl);
}

vuint8m4_t test_vfncvt_rtz_xu_f_w_u8m4(vfloat16m8_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u8m4(vs2, vl);
}

vint8mf8_t test_vfncvt_rtz_x_f_w_i8mf8_m(vbool64_t vm, vfloat16mf4_t vs2,
                                         size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i8mf8_m(vm, vs2, vl);
}

vint8mf4_t test_vfncvt_rtz_x_f_w_i8mf4_m(vbool32_t vm, vfloat16mf2_t vs2,
                                         size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i8mf4_m(vm, vs2, vl);
}

vint8mf2_t test_vfncvt_rtz_x_f_w_i8mf2_m(vbool16_t vm, vfloat16m1_t vs2,
                                         size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i8mf2_m(vm, vs2, vl);
}

vint8m1_t test_vfncvt_rtz_x_f_w_i8m1_m(vbool8_t vm, vfloat16m2_t vs2,
                                       size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i8m1_m(vm, vs2, vl);
}

vint8m2_t test_vfncvt_rtz_x_f_w_i8m2_m(vbool4_t vm, vfloat16m4_t vs2,
                                       size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i8m2_m(vm, vs2, vl);
}

vint8m4_t test_vfncvt_rtz_x_f_w_i8m4_m(vbool2_t vm, vfloat16m8_t vs2,
                                       size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i8m4_m(vm, vs2, vl);
}

vuint8mf8_t test_vfncvt_rtz_xu_f_w_u8mf8_m(vbool64_t vm, vfloat16mf4_t vs2,
                                           size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u8mf8_m(vm, vs2, vl);
}

vuint8mf4_t test_vfncvt_rtz_xu_f_w_u8mf4_m(vbool32_t vm, vfloat16mf2_t vs2,
                                           size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u8mf4_m(vm, vs2, vl);
}

vuint8mf2_t test_vfncvt_rtz_xu_f_w_u8mf2_m(vbool16_t vm, vfloat16m1_t vs2,
                                           size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u8mf2_m(vm, vs2, vl);
}

vuint8m1_t test_vfncvt_rtz_xu_f_w_u8m1_m(vbool8_t vm, vfloat16m2_t vs2,
                                         size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u8m1_m(vm, vs2, vl);
}

vuint8m2_t test_vfncvt_rtz_xu_f_w_u8m2_m(vbool4_t vm, vfloat16m4_t vs2,
                                         size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u8m2_m(vm, vs2, vl);
}

vuint8m4_t test_vfncvt_rtz_xu_f_w_u8m4_m(vbool2_t vm, vfloat16m8_t vs2,
                                         size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u8m4_m(vm, vs2, vl);
}
