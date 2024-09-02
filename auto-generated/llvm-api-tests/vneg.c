// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +zvfh -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vint8mf8_t test_vneg_v_i8mf8(vint8mf8_t vs, size_t vl) {
  return __riscv_vneg_v_i8mf8(vs, vl);
}

vint8mf4_t test_vneg_v_i8mf4(vint8mf4_t vs, size_t vl) {
  return __riscv_vneg_v_i8mf4(vs, vl);
}

vint8mf2_t test_vneg_v_i8mf2(vint8mf2_t vs, size_t vl) {
  return __riscv_vneg_v_i8mf2(vs, vl);
}

vint8m1_t test_vneg_v_i8m1(vint8m1_t vs, size_t vl) {
  return __riscv_vneg_v_i8m1(vs, vl);
}

vint8m2_t test_vneg_v_i8m2(vint8m2_t vs, size_t vl) {
  return __riscv_vneg_v_i8m2(vs, vl);
}

vint8m4_t test_vneg_v_i8m4(vint8m4_t vs, size_t vl) {
  return __riscv_vneg_v_i8m4(vs, vl);
}

vint8m8_t test_vneg_v_i8m8(vint8m8_t vs, size_t vl) {
  return __riscv_vneg_v_i8m8(vs, vl);
}

vint16mf4_t test_vneg_v_i16mf4(vint16mf4_t vs, size_t vl) {
  return __riscv_vneg_v_i16mf4(vs, vl);
}

vint16mf2_t test_vneg_v_i16mf2(vint16mf2_t vs, size_t vl) {
  return __riscv_vneg_v_i16mf2(vs, vl);
}

vint16m1_t test_vneg_v_i16m1(vint16m1_t vs, size_t vl) {
  return __riscv_vneg_v_i16m1(vs, vl);
}

vint16m2_t test_vneg_v_i16m2(vint16m2_t vs, size_t vl) {
  return __riscv_vneg_v_i16m2(vs, vl);
}

vint16m4_t test_vneg_v_i16m4(vint16m4_t vs, size_t vl) {
  return __riscv_vneg_v_i16m4(vs, vl);
}

vint16m8_t test_vneg_v_i16m8(vint16m8_t vs, size_t vl) {
  return __riscv_vneg_v_i16m8(vs, vl);
}

vint32mf2_t test_vneg_v_i32mf2(vint32mf2_t vs, size_t vl) {
  return __riscv_vneg_v_i32mf2(vs, vl);
}

vint32m1_t test_vneg_v_i32m1(vint32m1_t vs, size_t vl) {
  return __riscv_vneg_v_i32m1(vs, vl);
}

vint32m2_t test_vneg_v_i32m2(vint32m2_t vs, size_t vl) {
  return __riscv_vneg_v_i32m2(vs, vl);
}

vint32m4_t test_vneg_v_i32m4(vint32m4_t vs, size_t vl) {
  return __riscv_vneg_v_i32m4(vs, vl);
}

vint32m8_t test_vneg_v_i32m8(vint32m8_t vs, size_t vl) {
  return __riscv_vneg_v_i32m8(vs, vl);
}

vint64m1_t test_vneg_v_i64m1(vint64m1_t vs, size_t vl) {
  return __riscv_vneg_v_i64m1(vs, vl);
}

vint64m2_t test_vneg_v_i64m2(vint64m2_t vs, size_t vl) {
  return __riscv_vneg_v_i64m2(vs, vl);
}

vint64m4_t test_vneg_v_i64m4(vint64m4_t vs, size_t vl) {
  return __riscv_vneg_v_i64m4(vs, vl);
}

vint64m8_t test_vneg_v_i64m8(vint64m8_t vs, size_t vl) {
  return __riscv_vneg_v_i64m8(vs, vl);
}

vint8mf8_t test_vneg_v_i8mf8_m(vbool64_t vm, vint8mf8_t vs, size_t vl) {
  return __riscv_vneg_v_i8mf8_m(vm, vs, vl);
}

vint8mf4_t test_vneg_v_i8mf4_m(vbool32_t vm, vint8mf4_t vs, size_t vl) {
  return __riscv_vneg_v_i8mf4_m(vm, vs, vl);
}

vint8mf2_t test_vneg_v_i8mf2_m(vbool16_t vm, vint8mf2_t vs, size_t vl) {
  return __riscv_vneg_v_i8mf2_m(vm, vs, vl);
}

vint8m1_t test_vneg_v_i8m1_m(vbool8_t vm, vint8m1_t vs, size_t vl) {
  return __riscv_vneg_v_i8m1_m(vm, vs, vl);
}

vint8m2_t test_vneg_v_i8m2_m(vbool4_t vm, vint8m2_t vs, size_t vl) {
  return __riscv_vneg_v_i8m2_m(vm, vs, vl);
}

vint8m4_t test_vneg_v_i8m4_m(vbool2_t vm, vint8m4_t vs, size_t vl) {
  return __riscv_vneg_v_i8m4_m(vm, vs, vl);
}

vint8m8_t test_vneg_v_i8m8_m(vbool1_t vm, vint8m8_t vs, size_t vl) {
  return __riscv_vneg_v_i8m8_m(vm, vs, vl);
}

vint16mf4_t test_vneg_v_i16mf4_m(vbool64_t vm, vint16mf4_t vs, size_t vl) {
  return __riscv_vneg_v_i16mf4_m(vm, vs, vl);
}

vint16mf2_t test_vneg_v_i16mf2_m(vbool32_t vm, vint16mf2_t vs, size_t vl) {
  return __riscv_vneg_v_i16mf2_m(vm, vs, vl);
}

vint16m1_t test_vneg_v_i16m1_m(vbool16_t vm, vint16m1_t vs, size_t vl) {
  return __riscv_vneg_v_i16m1_m(vm, vs, vl);
}

vint16m2_t test_vneg_v_i16m2_m(vbool8_t vm, vint16m2_t vs, size_t vl) {
  return __riscv_vneg_v_i16m2_m(vm, vs, vl);
}

vint16m4_t test_vneg_v_i16m4_m(vbool4_t vm, vint16m4_t vs, size_t vl) {
  return __riscv_vneg_v_i16m4_m(vm, vs, vl);
}

vint16m8_t test_vneg_v_i16m8_m(vbool2_t vm, vint16m8_t vs, size_t vl) {
  return __riscv_vneg_v_i16m8_m(vm, vs, vl);
}

vint32mf2_t test_vneg_v_i32mf2_m(vbool64_t vm, vint32mf2_t vs, size_t vl) {
  return __riscv_vneg_v_i32mf2_m(vm, vs, vl);
}

vint32m1_t test_vneg_v_i32m1_m(vbool32_t vm, vint32m1_t vs, size_t vl) {
  return __riscv_vneg_v_i32m1_m(vm, vs, vl);
}

vint32m2_t test_vneg_v_i32m2_m(vbool16_t vm, vint32m2_t vs, size_t vl) {
  return __riscv_vneg_v_i32m2_m(vm, vs, vl);
}

vint32m4_t test_vneg_v_i32m4_m(vbool8_t vm, vint32m4_t vs, size_t vl) {
  return __riscv_vneg_v_i32m4_m(vm, vs, vl);
}

vint32m8_t test_vneg_v_i32m8_m(vbool4_t vm, vint32m8_t vs, size_t vl) {
  return __riscv_vneg_v_i32m8_m(vm, vs, vl);
}

vint64m1_t test_vneg_v_i64m1_m(vbool64_t vm, vint64m1_t vs, size_t vl) {
  return __riscv_vneg_v_i64m1_m(vm, vs, vl);
}

vint64m2_t test_vneg_v_i64m2_m(vbool32_t vm, vint64m2_t vs, size_t vl) {
  return __riscv_vneg_v_i64m2_m(vm, vs, vl);
}

vint64m4_t test_vneg_v_i64m4_m(vbool16_t vm, vint64m4_t vs, size_t vl) {
  return __riscv_vneg_v_i64m4_m(vm, vs, vl);
}

vint64m8_t test_vneg_v_i64m8_m(vbool8_t vm, vint64m8_t vs, size_t vl) {
  return __riscv_vneg_v_i64m8_m(vm, vs, vl);
}
