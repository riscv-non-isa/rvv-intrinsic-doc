// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vbool64_t test_vmsgeu_vv_u8mf8_b64_m(vbool64_t mask, vuint8mf8_t op1, vuint8mf8_t op2, size_t vl) {
  return vmsgeu_vv_u8mf8_b64_m(mask, op1, op2, vl);
}

vbool64_t test_vmsgeu_vx_u8mf8_b64_m(vbool64_t mask, vuint8mf8_t op1, uint8_t op2, size_t vl) {
  return vmsgeu_vx_u8mf8_b64_m(mask, op1, op2, vl);
}

vbool32_t test_vmsgeu_vv_u8mf4_b32_m(vbool32_t mask, vuint8mf4_t op1, vuint8mf4_t op2, size_t vl) {
  return vmsgeu_vv_u8mf4_b32_m(mask, op1, op2, vl);
}

vbool32_t test_vmsgeu_vx_u8mf4_b32_m(vbool32_t mask, vuint8mf4_t op1, uint8_t op2, size_t vl) {
  return vmsgeu_vx_u8mf4_b32_m(mask, op1, op2, vl);
}

vbool16_t test_vmsgeu_vv_u8mf2_b16_m(vbool16_t mask, vuint8mf2_t op1, vuint8mf2_t op2, size_t vl) {
  return vmsgeu_vv_u8mf2_b16_m(mask, op1, op2, vl);
}

vbool16_t test_vmsgeu_vx_u8mf2_b16_m(vbool16_t mask, vuint8mf2_t op1, uint8_t op2, size_t vl) {
  return vmsgeu_vx_u8mf2_b16_m(mask, op1, op2, vl);
}

vbool8_t test_vmsgeu_vv_u8m1_b8_m(vbool8_t mask, vuint8m1_t op1, vuint8m1_t op2, size_t vl) {
  return vmsgeu_vv_u8m1_b8_m(mask, op1, op2, vl);
}

vbool8_t test_vmsgeu_vx_u8m1_b8_m(vbool8_t mask, vuint8m1_t op1, uint8_t op2, size_t vl) {
  return vmsgeu_vx_u8m1_b8_m(mask, op1, op2, vl);
}

vbool4_t test_vmsgeu_vv_u8m2_b4_m(vbool4_t mask, vuint8m2_t op1, vuint8m2_t op2, size_t vl) {
  return vmsgeu_vv_u8m2_b4_m(mask, op1, op2, vl);
}

vbool4_t test_vmsgeu_vx_u8m2_b4_m(vbool4_t mask, vuint8m2_t op1, uint8_t op2, size_t vl) {
  return vmsgeu_vx_u8m2_b4_m(mask, op1, op2, vl);
}

vbool2_t test_vmsgeu_vv_u8m4_b2_m(vbool2_t mask, vuint8m4_t op1, vuint8m4_t op2, size_t vl) {
  return vmsgeu_vv_u8m4_b2_m(mask, op1, op2, vl);
}

vbool2_t test_vmsgeu_vx_u8m4_b2_m(vbool2_t mask, vuint8m4_t op1, uint8_t op2, size_t vl) {
  return vmsgeu_vx_u8m4_b2_m(mask, op1, op2, vl);
}

vbool1_t test_vmsgeu_vv_u8m8_b1_m(vbool1_t mask, vuint8m8_t op1, vuint8m8_t op2, size_t vl) {
  return vmsgeu_vv_u8m8_b1_m(mask, op1, op2, vl);
}

vbool1_t test_vmsgeu_vx_u8m8_b1_m(vbool1_t mask, vuint8m8_t op1, uint8_t op2, size_t vl) {
  return vmsgeu_vx_u8m8_b1_m(mask, op1, op2, vl);
}

vbool64_t test_vmsgeu_vv_u16mf4_b64_m(vbool64_t mask, vuint16mf4_t op1, vuint16mf4_t op2, size_t vl) {
  return vmsgeu_vv_u16mf4_b64_m(mask, op1, op2, vl);
}

vbool64_t test_vmsgeu_vx_u16mf4_b64_m(vbool64_t mask, vuint16mf4_t op1, uint16_t op2, size_t vl) {
  return vmsgeu_vx_u16mf4_b64_m(mask, op1, op2, vl);
}

vbool32_t test_vmsgeu_vv_u16mf2_b32_m(vbool32_t mask, vuint16mf2_t op1, vuint16mf2_t op2, size_t vl) {
  return vmsgeu_vv_u16mf2_b32_m(mask, op1, op2, vl);
}

vbool32_t test_vmsgeu_vx_u16mf2_b32_m(vbool32_t mask, vuint16mf2_t op1, uint16_t op2, size_t vl) {
  return vmsgeu_vx_u16mf2_b32_m(mask, op1, op2, vl);
}

vbool16_t test_vmsgeu_vv_u16m1_b16_m(vbool16_t mask, vuint16m1_t op1, vuint16m1_t op2, size_t vl) {
  return vmsgeu_vv_u16m1_b16_m(mask, op1, op2, vl);
}

vbool16_t test_vmsgeu_vx_u16m1_b16_m(vbool16_t mask, vuint16m1_t op1, uint16_t op2, size_t vl) {
  return vmsgeu_vx_u16m1_b16_m(mask, op1, op2, vl);
}

vbool8_t test_vmsgeu_vv_u16m2_b8_m(vbool8_t mask, vuint16m2_t op1, vuint16m2_t op2, size_t vl) {
  return vmsgeu_vv_u16m2_b8_m(mask, op1, op2, vl);
}

vbool8_t test_vmsgeu_vx_u16m2_b8_m(vbool8_t mask, vuint16m2_t op1, uint16_t op2, size_t vl) {
  return vmsgeu_vx_u16m2_b8_m(mask, op1, op2, vl);
}

vbool4_t test_vmsgeu_vv_u16m4_b4_m(vbool4_t mask, vuint16m4_t op1, vuint16m4_t op2, size_t vl) {
  return vmsgeu_vv_u16m4_b4_m(mask, op1, op2, vl);
}

vbool4_t test_vmsgeu_vx_u16m4_b4_m(vbool4_t mask, vuint16m4_t op1, uint16_t op2, size_t vl) {
  return vmsgeu_vx_u16m4_b4_m(mask, op1, op2, vl);
}

vbool2_t test_vmsgeu_vv_u16m8_b2_m(vbool2_t mask, vuint16m8_t op1, vuint16m8_t op2, size_t vl) {
  return vmsgeu_vv_u16m8_b2_m(mask, op1, op2, vl);
}

vbool2_t test_vmsgeu_vx_u16m8_b2_m(vbool2_t mask, vuint16m8_t op1, uint16_t op2, size_t vl) {
  return vmsgeu_vx_u16m8_b2_m(mask, op1, op2, vl);
}

vbool64_t test_vmsgeu_vv_u32mf2_b64_m(vbool64_t mask, vuint32mf2_t op1, vuint32mf2_t op2, size_t vl) {
  return vmsgeu_vv_u32mf2_b64_m(mask, op1, op2, vl);
}

vbool64_t test_vmsgeu_vx_u32mf2_b64_m(vbool64_t mask, vuint32mf2_t op1, uint32_t op2, size_t vl) {
  return vmsgeu_vx_u32mf2_b64_m(mask, op1, op2, vl);
}

vbool32_t test_vmsgeu_vv_u32m1_b32_m(vbool32_t mask, vuint32m1_t op1, vuint32m1_t op2, size_t vl) {
  return vmsgeu_vv_u32m1_b32_m(mask, op1, op2, vl);
}

vbool32_t test_vmsgeu_vx_u32m1_b32_m(vbool32_t mask, vuint32m1_t op1, uint32_t op2, size_t vl) {
  return vmsgeu_vx_u32m1_b32_m(mask, op1, op2, vl);
}

vbool16_t test_vmsgeu_vv_u32m2_b16_m(vbool16_t mask, vuint32m2_t op1, vuint32m2_t op2, size_t vl) {
  return vmsgeu_vv_u32m2_b16_m(mask, op1, op2, vl);
}

vbool16_t test_vmsgeu_vx_u32m2_b16_m(vbool16_t mask, vuint32m2_t op1, uint32_t op2, size_t vl) {
  return vmsgeu_vx_u32m2_b16_m(mask, op1, op2, vl);
}

vbool8_t test_vmsgeu_vv_u32m4_b8_m(vbool8_t mask, vuint32m4_t op1, vuint32m4_t op2, size_t vl) {
  return vmsgeu_vv_u32m4_b8_m(mask, op1, op2, vl);
}

vbool8_t test_vmsgeu_vx_u32m4_b8_m(vbool8_t mask, vuint32m4_t op1, uint32_t op2, size_t vl) {
  return vmsgeu_vx_u32m4_b8_m(mask, op1, op2, vl);
}

vbool4_t test_vmsgeu_vv_u32m8_b4_m(vbool4_t mask, vuint32m8_t op1, vuint32m8_t op2, size_t vl) {
  return vmsgeu_vv_u32m8_b4_m(mask, op1, op2, vl);
}

vbool4_t test_vmsgeu_vx_u32m8_b4_m(vbool4_t mask, vuint32m8_t op1, uint32_t op2, size_t vl) {
  return vmsgeu_vx_u32m8_b4_m(mask, op1, op2, vl);
}

vbool64_t test_vmsgeu_vv_u64m1_b64_m(vbool64_t mask, vuint64m1_t op1, vuint64m1_t op2, size_t vl) {
  return vmsgeu_vv_u64m1_b64_m(mask, op1, op2, vl);
}

vbool64_t test_vmsgeu_vx_u64m1_b64_m(vbool64_t mask, vuint64m1_t op1, uint64_t op2, size_t vl) {
  return vmsgeu_vx_u64m1_b64_m(mask, op1, op2, vl);
}

vbool32_t test_vmsgeu_vv_u64m2_b32_m(vbool32_t mask, vuint64m2_t op1, vuint64m2_t op2, size_t vl) {
  return vmsgeu_vv_u64m2_b32_m(mask, op1, op2, vl);
}

vbool32_t test_vmsgeu_vx_u64m2_b32_m(vbool32_t mask, vuint64m2_t op1, uint64_t op2, size_t vl) {
  return vmsgeu_vx_u64m2_b32_m(mask, op1, op2, vl);
}

vbool16_t test_vmsgeu_vv_u64m4_b16_m(vbool16_t mask, vuint64m4_t op1, vuint64m4_t op2, size_t vl) {
  return vmsgeu_vv_u64m4_b16_m(mask, op1, op2, vl);
}

vbool16_t test_vmsgeu_vx_u64m4_b16_m(vbool16_t mask, vuint64m4_t op1, uint64_t op2, size_t vl) {
  return vmsgeu_vx_u64m4_b16_m(mask, op1, op2, vl);
}

vbool8_t test_vmsgeu_vv_u64m8_b8_m(vbool8_t mask, vuint64m8_t op1, vuint64m8_t op2, size_t vl) {
  return vmsgeu_vv_u64m8_b8_m(mask, op1, op2, vl);
}

vbool8_t test_vmsgeu_vx_u64m8_b8_m(vbool8_t mask, vuint64m8_t op1, uint64_t op2, size_t vl) {
  return vmsgeu_vx_u64m8_b8_m(mask, op1, op2, vl);
}

