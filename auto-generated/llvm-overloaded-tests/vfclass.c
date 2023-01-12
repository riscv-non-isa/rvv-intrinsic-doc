// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vuint16mf4_t test_vfclass_v_u16mf4(vfloat16mf4_t op1, size_t vl) {
  return vfclass(op1, vl);
}

vuint16mf2_t test_vfclass_v_u16mf2(vfloat16mf2_t op1, size_t vl) {
  return vfclass(op1, vl);
}

vuint16m1_t test_vfclass_v_u16m1(vfloat16m1_t op1, size_t vl) {
  return vfclass(op1, vl);
}

vuint16m2_t test_vfclass_v_u16m2(vfloat16m2_t op1, size_t vl) {
  return vfclass(op1, vl);
}

vuint16m4_t test_vfclass_v_u16m4(vfloat16m4_t op1, size_t vl) {
  return vfclass(op1, vl);
}

vuint16m8_t test_vfclass_v_u16m8(vfloat16m8_t op1, size_t vl) {
  return vfclass(op1, vl);
}

vuint32mf2_t test_vfclass_v_u32mf2(vfloat32mf2_t op1, size_t vl) {
  return vfclass(op1, vl);
}

vuint32m1_t test_vfclass_v_u32m1(vfloat32m1_t op1, size_t vl) {
  return vfclass(op1, vl);
}

vuint32m2_t test_vfclass_v_u32m2(vfloat32m2_t op1, size_t vl) {
  return vfclass(op1, vl);
}

vuint32m4_t test_vfclass_v_u32m4(vfloat32m4_t op1, size_t vl) {
  return vfclass(op1, vl);
}

vuint32m8_t test_vfclass_v_u32m8(vfloat32m8_t op1, size_t vl) {
  return vfclass(op1, vl);
}

vuint64m1_t test_vfclass_v_u64m1(vfloat64m1_t op1, size_t vl) {
  return vfclass(op1, vl);
}

vuint64m2_t test_vfclass_v_u64m2(vfloat64m2_t op1, size_t vl) {
  return vfclass(op1, vl);
}

vuint64m4_t test_vfclass_v_u64m4(vfloat64m4_t op1, size_t vl) {
  return vfclass(op1, vl);
}

vuint64m8_t test_vfclass_v_u64m8(vfloat64m8_t op1, size_t vl) {
  return vfclass(op1, vl);
}

vuint16mf4_t test_vfclass_v_u16mf4_m(vbool64_t mask, vuint16mf4_t maskedoff, vfloat16mf4_t op1, size_t vl) {
  return vfclass(mask, maskedoff, op1, vl);
}

vuint16mf2_t test_vfclass_v_u16mf2_m(vbool32_t mask, vuint16mf2_t maskedoff, vfloat16mf2_t op1, size_t vl) {
  return vfclass(mask, maskedoff, op1, vl);
}

vuint16m1_t test_vfclass_v_u16m1_m(vbool16_t mask, vuint16m1_t maskedoff, vfloat16m1_t op1, size_t vl) {
  return vfclass(mask, maskedoff, op1, vl);
}

vuint16m2_t test_vfclass_v_u16m2_m(vbool8_t mask, vuint16m2_t maskedoff, vfloat16m2_t op1, size_t vl) {
  return vfclass(mask, maskedoff, op1, vl);
}

vuint16m4_t test_vfclass_v_u16m4_m(vbool4_t mask, vuint16m4_t maskedoff, vfloat16m4_t op1, size_t vl) {
  return vfclass(mask, maskedoff, op1, vl);
}

vuint16m8_t test_vfclass_v_u16m8_m(vbool2_t mask, vuint16m8_t maskedoff, vfloat16m8_t op1, size_t vl) {
  return vfclass(mask, maskedoff, op1, vl);
}

vuint32mf2_t test_vfclass_v_u32mf2_m(vbool64_t mask, vuint32mf2_t maskedoff, vfloat32mf2_t op1, size_t vl) {
  return vfclass(mask, maskedoff, op1, vl);
}

vuint32m1_t test_vfclass_v_u32m1_m(vbool32_t mask, vuint32m1_t maskedoff, vfloat32m1_t op1, size_t vl) {
  return vfclass(mask, maskedoff, op1, vl);
}

vuint32m2_t test_vfclass_v_u32m2_m(vbool16_t mask, vuint32m2_t maskedoff, vfloat32m2_t op1, size_t vl) {
  return vfclass(mask, maskedoff, op1, vl);
}

vuint32m4_t test_vfclass_v_u32m4_m(vbool8_t mask, vuint32m4_t maskedoff, vfloat32m4_t op1, size_t vl) {
  return vfclass(mask, maskedoff, op1, vl);
}

vuint32m8_t test_vfclass_v_u32m8_m(vbool4_t mask, vuint32m8_t maskedoff, vfloat32m8_t op1, size_t vl) {
  return vfclass(mask, maskedoff, op1, vl);
}

vuint64m1_t test_vfclass_v_u64m1_m(vbool64_t mask, vuint64m1_t maskedoff, vfloat64m1_t op1, size_t vl) {
  return vfclass(mask, maskedoff, op1, vl);
}

vuint64m2_t test_vfclass_v_u64m2_m(vbool32_t mask, vuint64m2_t maskedoff, vfloat64m2_t op1, size_t vl) {
  return vfclass(mask, maskedoff, op1, vl);
}

vuint64m4_t test_vfclass_v_u64m4_m(vbool16_t mask, vuint64m4_t maskedoff, vfloat64m4_t op1, size_t vl) {
  return vfclass(mask, maskedoff, op1, vl);
}

vuint64m8_t test_vfclass_v_u64m8_m(vbool8_t mask, vuint64m8_t maskedoff, vfloat64m8_t op1, size_t vl) {
  return vfclass(mask, maskedoff, op1, vl);
}

