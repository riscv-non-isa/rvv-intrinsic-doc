// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +zvfh -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vbool64_t test_vmsne_vv_i8mf8_b64_mu(vbool64_t vm, vbool64_t vd, vint8mf8_t vs2,
                                     vint8mf8_t vs1, size_t vl) {
  return __riscv_vmsne_vv_i8mf8_b64_mu(vm, vd, vs2, vs1, vl);
}

vbool64_t test_vmsne_vx_i8mf8_b64_mu(vbool64_t vm, vbool64_t vd, vint8mf8_t vs2,
                                     int8_t rs1, size_t vl) {
  return __riscv_vmsne_vx_i8mf8_b64_mu(vm, vd, vs2, rs1, vl);
}

vbool32_t test_vmsne_vv_i8mf4_b32_mu(vbool32_t vm, vbool32_t vd, vint8mf4_t vs2,
                                     vint8mf4_t vs1, size_t vl) {
  return __riscv_vmsne_vv_i8mf4_b32_mu(vm, vd, vs2, vs1, vl);
}

vbool32_t test_vmsne_vx_i8mf4_b32_mu(vbool32_t vm, vbool32_t vd, vint8mf4_t vs2,
                                     int8_t rs1, size_t vl) {
  return __riscv_vmsne_vx_i8mf4_b32_mu(vm, vd, vs2, rs1, vl);
}

vbool16_t test_vmsne_vv_i8mf2_b16_mu(vbool16_t vm, vbool16_t vd, vint8mf2_t vs2,
                                     vint8mf2_t vs1, size_t vl) {
  return __riscv_vmsne_vv_i8mf2_b16_mu(vm, vd, vs2, vs1, vl);
}

vbool16_t test_vmsne_vx_i8mf2_b16_mu(vbool16_t vm, vbool16_t vd, vint8mf2_t vs2,
                                     int8_t rs1, size_t vl) {
  return __riscv_vmsne_vx_i8mf2_b16_mu(vm, vd, vs2, rs1, vl);
}

vbool8_t test_vmsne_vv_i8m1_b8_mu(vbool8_t vm, vbool8_t vd, vint8m1_t vs2,
                                  vint8m1_t vs1, size_t vl) {
  return __riscv_vmsne_vv_i8m1_b8_mu(vm, vd, vs2, vs1, vl);
}

vbool8_t test_vmsne_vx_i8m1_b8_mu(vbool8_t vm, vbool8_t vd, vint8m1_t vs2,
                                  int8_t rs1, size_t vl) {
  return __riscv_vmsne_vx_i8m1_b8_mu(vm, vd, vs2, rs1, vl);
}

vbool4_t test_vmsne_vv_i8m2_b4_mu(vbool4_t vm, vbool4_t vd, vint8m2_t vs2,
                                  vint8m2_t vs1, size_t vl) {
  return __riscv_vmsne_vv_i8m2_b4_mu(vm, vd, vs2, vs1, vl);
}

vbool4_t test_vmsne_vx_i8m2_b4_mu(vbool4_t vm, vbool4_t vd, vint8m2_t vs2,
                                  int8_t rs1, size_t vl) {
  return __riscv_vmsne_vx_i8m2_b4_mu(vm, vd, vs2, rs1, vl);
}

vbool2_t test_vmsne_vv_i8m4_b2_mu(vbool2_t vm, vbool2_t vd, vint8m4_t vs2,
                                  vint8m4_t vs1, size_t vl) {
  return __riscv_vmsne_vv_i8m4_b2_mu(vm, vd, vs2, vs1, vl);
}

vbool2_t test_vmsne_vx_i8m4_b2_mu(vbool2_t vm, vbool2_t vd, vint8m4_t vs2,
                                  int8_t rs1, size_t vl) {
  return __riscv_vmsne_vx_i8m4_b2_mu(vm, vd, vs2, rs1, vl);
}

vbool1_t test_vmsne_vv_i8m8_b1_mu(vbool1_t vm, vbool1_t vd, vint8m8_t vs2,
                                  vint8m8_t vs1, size_t vl) {
  return __riscv_vmsne_vv_i8m8_b1_mu(vm, vd, vs2, vs1, vl);
}

vbool1_t test_vmsne_vx_i8m8_b1_mu(vbool1_t vm, vbool1_t vd, vint8m8_t vs2,
                                  int8_t rs1, size_t vl) {
  return __riscv_vmsne_vx_i8m8_b1_mu(vm, vd, vs2, rs1, vl);
}

vbool64_t test_vmsne_vv_i16mf4_b64_mu(vbool64_t vm, vbool64_t vd,
                                      vint16mf4_t vs2, vint16mf4_t vs1,
                                      size_t vl) {
  return __riscv_vmsne_vv_i16mf4_b64_mu(vm, vd, vs2, vs1, vl);
}

vbool64_t test_vmsne_vx_i16mf4_b64_mu(vbool64_t vm, vbool64_t vd,
                                      vint16mf4_t vs2, int16_t rs1, size_t vl) {
  return __riscv_vmsne_vx_i16mf4_b64_mu(vm, vd, vs2, rs1, vl);
}

vbool32_t test_vmsne_vv_i16mf2_b32_mu(vbool32_t vm, vbool32_t vd,
                                      vint16mf2_t vs2, vint16mf2_t vs1,
                                      size_t vl) {
  return __riscv_vmsne_vv_i16mf2_b32_mu(vm, vd, vs2, vs1, vl);
}

vbool32_t test_vmsne_vx_i16mf2_b32_mu(vbool32_t vm, vbool32_t vd,
                                      vint16mf2_t vs2, int16_t rs1, size_t vl) {
  return __riscv_vmsne_vx_i16mf2_b32_mu(vm, vd, vs2, rs1, vl);
}

vbool16_t test_vmsne_vv_i16m1_b16_mu(vbool16_t vm, vbool16_t vd, vint16m1_t vs2,
                                     vint16m1_t vs1, size_t vl) {
  return __riscv_vmsne_vv_i16m1_b16_mu(vm, vd, vs2, vs1, vl);
}

vbool16_t test_vmsne_vx_i16m1_b16_mu(vbool16_t vm, vbool16_t vd, vint16m1_t vs2,
                                     int16_t rs1, size_t vl) {
  return __riscv_vmsne_vx_i16m1_b16_mu(vm, vd, vs2, rs1, vl);
}

vbool8_t test_vmsne_vv_i16m2_b8_mu(vbool8_t vm, vbool8_t vd, vint16m2_t vs2,
                                   vint16m2_t vs1, size_t vl) {
  return __riscv_vmsne_vv_i16m2_b8_mu(vm, vd, vs2, vs1, vl);
}

vbool8_t test_vmsne_vx_i16m2_b8_mu(vbool8_t vm, vbool8_t vd, vint16m2_t vs2,
                                   int16_t rs1, size_t vl) {
  return __riscv_vmsne_vx_i16m2_b8_mu(vm, vd, vs2, rs1, vl);
}

vbool4_t test_vmsne_vv_i16m4_b4_mu(vbool4_t vm, vbool4_t vd, vint16m4_t vs2,
                                   vint16m4_t vs1, size_t vl) {
  return __riscv_vmsne_vv_i16m4_b4_mu(vm, vd, vs2, vs1, vl);
}

vbool4_t test_vmsne_vx_i16m4_b4_mu(vbool4_t vm, vbool4_t vd, vint16m4_t vs2,
                                   int16_t rs1, size_t vl) {
  return __riscv_vmsne_vx_i16m4_b4_mu(vm, vd, vs2, rs1, vl);
}

vbool2_t test_vmsne_vv_i16m8_b2_mu(vbool2_t vm, vbool2_t vd, vint16m8_t vs2,
                                   vint16m8_t vs1, size_t vl) {
  return __riscv_vmsne_vv_i16m8_b2_mu(vm, vd, vs2, vs1, vl);
}

vbool2_t test_vmsne_vx_i16m8_b2_mu(vbool2_t vm, vbool2_t vd, vint16m8_t vs2,
                                   int16_t rs1, size_t vl) {
  return __riscv_vmsne_vx_i16m8_b2_mu(vm, vd, vs2, rs1, vl);
}

vbool64_t test_vmsne_vv_i32mf2_b64_mu(vbool64_t vm, vbool64_t vd,
                                      vint32mf2_t vs2, vint32mf2_t vs1,
                                      size_t vl) {
  return __riscv_vmsne_vv_i32mf2_b64_mu(vm, vd, vs2, vs1, vl);
}

vbool64_t test_vmsne_vx_i32mf2_b64_mu(vbool64_t vm, vbool64_t vd,
                                      vint32mf2_t vs2, int32_t rs1, size_t vl) {
  return __riscv_vmsne_vx_i32mf2_b64_mu(vm, vd, vs2, rs1, vl);
}

vbool32_t test_vmsne_vv_i32m1_b32_mu(vbool32_t vm, vbool32_t vd, vint32m1_t vs2,
                                     vint32m1_t vs1, size_t vl) {
  return __riscv_vmsne_vv_i32m1_b32_mu(vm, vd, vs2, vs1, vl);
}

vbool32_t test_vmsne_vx_i32m1_b32_mu(vbool32_t vm, vbool32_t vd, vint32m1_t vs2,
                                     int32_t rs1, size_t vl) {
  return __riscv_vmsne_vx_i32m1_b32_mu(vm, vd, vs2, rs1, vl);
}

vbool16_t test_vmsne_vv_i32m2_b16_mu(vbool16_t vm, vbool16_t vd, vint32m2_t vs2,
                                     vint32m2_t vs1, size_t vl) {
  return __riscv_vmsne_vv_i32m2_b16_mu(vm, vd, vs2, vs1, vl);
}

vbool16_t test_vmsne_vx_i32m2_b16_mu(vbool16_t vm, vbool16_t vd, vint32m2_t vs2,
                                     int32_t rs1, size_t vl) {
  return __riscv_vmsne_vx_i32m2_b16_mu(vm, vd, vs2, rs1, vl);
}

vbool8_t test_vmsne_vv_i32m4_b8_mu(vbool8_t vm, vbool8_t vd, vint32m4_t vs2,
                                   vint32m4_t vs1, size_t vl) {
  return __riscv_vmsne_vv_i32m4_b8_mu(vm, vd, vs2, vs1, vl);
}

vbool8_t test_vmsne_vx_i32m4_b8_mu(vbool8_t vm, vbool8_t vd, vint32m4_t vs2,
                                   int32_t rs1, size_t vl) {
  return __riscv_vmsne_vx_i32m4_b8_mu(vm, vd, vs2, rs1, vl);
}

vbool4_t test_vmsne_vv_i32m8_b4_mu(vbool4_t vm, vbool4_t vd, vint32m8_t vs2,
                                   vint32m8_t vs1, size_t vl) {
  return __riscv_vmsne_vv_i32m8_b4_mu(vm, vd, vs2, vs1, vl);
}

vbool4_t test_vmsne_vx_i32m8_b4_mu(vbool4_t vm, vbool4_t vd, vint32m8_t vs2,
                                   int32_t rs1, size_t vl) {
  return __riscv_vmsne_vx_i32m8_b4_mu(vm, vd, vs2, rs1, vl);
}

vbool64_t test_vmsne_vv_i64m1_b64_mu(vbool64_t vm, vbool64_t vd, vint64m1_t vs2,
                                     vint64m1_t vs1, size_t vl) {
  return __riscv_vmsne_vv_i64m1_b64_mu(vm, vd, vs2, vs1, vl);
}

vbool64_t test_vmsne_vx_i64m1_b64_mu(vbool64_t vm, vbool64_t vd, vint64m1_t vs2,
                                     int64_t rs1, size_t vl) {
  return __riscv_vmsne_vx_i64m1_b64_mu(vm, vd, vs2, rs1, vl);
}

vbool32_t test_vmsne_vv_i64m2_b32_mu(vbool32_t vm, vbool32_t vd, vint64m2_t vs2,
                                     vint64m2_t vs1, size_t vl) {
  return __riscv_vmsne_vv_i64m2_b32_mu(vm, vd, vs2, vs1, vl);
}

vbool32_t test_vmsne_vx_i64m2_b32_mu(vbool32_t vm, vbool32_t vd, vint64m2_t vs2,
                                     int64_t rs1, size_t vl) {
  return __riscv_vmsne_vx_i64m2_b32_mu(vm, vd, vs2, rs1, vl);
}

vbool16_t test_vmsne_vv_i64m4_b16_mu(vbool16_t vm, vbool16_t vd, vint64m4_t vs2,
                                     vint64m4_t vs1, size_t vl) {
  return __riscv_vmsne_vv_i64m4_b16_mu(vm, vd, vs2, vs1, vl);
}

vbool16_t test_vmsne_vx_i64m4_b16_mu(vbool16_t vm, vbool16_t vd, vint64m4_t vs2,
                                     int64_t rs1, size_t vl) {
  return __riscv_vmsne_vx_i64m4_b16_mu(vm, vd, vs2, rs1, vl);
}

vbool8_t test_vmsne_vv_i64m8_b8_mu(vbool8_t vm, vbool8_t vd, vint64m8_t vs2,
                                   vint64m8_t vs1, size_t vl) {
  return __riscv_vmsne_vv_i64m8_b8_mu(vm, vd, vs2, vs1, vl);
}

vbool8_t test_vmsne_vx_i64m8_b8_mu(vbool8_t vm, vbool8_t vd, vint64m8_t vs2,
                                   int64_t rs1, size_t vl) {
  return __riscv_vmsne_vx_i64m8_b8_mu(vm, vd, vs2, rs1, vl);
}

vbool64_t test_vmsne_vv_u8mf8_b64_mu(vbool64_t vm, vbool64_t vd,
                                     vuint8mf8_t vs2, vuint8mf8_t vs1,
                                     size_t vl) {
  return __riscv_vmsne_vv_u8mf8_b64_mu(vm, vd, vs2, vs1, vl);
}

vbool64_t test_vmsne_vx_u8mf8_b64_mu(vbool64_t vm, vbool64_t vd,
                                     vuint8mf8_t vs2, uint8_t rs1, size_t vl) {
  return __riscv_vmsne_vx_u8mf8_b64_mu(vm, vd, vs2, rs1, vl);
}

vbool32_t test_vmsne_vv_u8mf4_b32_mu(vbool32_t vm, vbool32_t vd,
                                     vuint8mf4_t vs2, vuint8mf4_t vs1,
                                     size_t vl) {
  return __riscv_vmsne_vv_u8mf4_b32_mu(vm, vd, vs2, vs1, vl);
}

vbool32_t test_vmsne_vx_u8mf4_b32_mu(vbool32_t vm, vbool32_t vd,
                                     vuint8mf4_t vs2, uint8_t rs1, size_t vl) {
  return __riscv_vmsne_vx_u8mf4_b32_mu(vm, vd, vs2, rs1, vl);
}

vbool16_t test_vmsne_vv_u8mf2_b16_mu(vbool16_t vm, vbool16_t vd,
                                     vuint8mf2_t vs2, vuint8mf2_t vs1,
                                     size_t vl) {
  return __riscv_vmsne_vv_u8mf2_b16_mu(vm, vd, vs2, vs1, vl);
}

vbool16_t test_vmsne_vx_u8mf2_b16_mu(vbool16_t vm, vbool16_t vd,
                                     vuint8mf2_t vs2, uint8_t rs1, size_t vl) {
  return __riscv_vmsne_vx_u8mf2_b16_mu(vm, vd, vs2, rs1, vl);
}

vbool8_t test_vmsne_vv_u8m1_b8_mu(vbool8_t vm, vbool8_t vd, vuint8m1_t vs2,
                                  vuint8m1_t vs1, size_t vl) {
  return __riscv_vmsne_vv_u8m1_b8_mu(vm, vd, vs2, vs1, vl);
}

vbool8_t test_vmsne_vx_u8m1_b8_mu(vbool8_t vm, vbool8_t vd, vuint8m1_t vs2,
                                  uint8_t rs1, size_t vl) {
  return __riscv_vmsne_vx_u8m1_b8_mu(vm, vd, vs2, rs1, vl);
}

vbool4_t test_vmsne_vv_u8m2_b4_mu(vbool4_t vm, vbool4_t vd, vuint8m2_t vs2,
                                  vuint8m2_t vs1, size_t vl) {
  return __riscv_vmsne_vv_u8m2_b4_mu(vm, vd, vs2, vs1, vl);
}

vbool4_t test_vmsne_vx_u8m2_b4_mu(vbool4_t vm, vbool4_t vd, vuint8m2_t vs2,
                                  uint8_t rs1, size_t vl) {
  return __riscv_vmsne_vx_u8m2_b4_mu(vm, vd, vs2, rs1, vl);
}

vbool2_t test_vmsne_vv_u8m4_b2_mu(vbool2_t vm, vbool2_t vd, vuint8m4_t vs2,
                                  vuint8m4_t vs1, size_t vl) {
  return __riscv_vmsne_vv_u8m4_b2_mu(vm, vd, vs2, vs1, vl);
}

vbool2_t test_vmsne_vx_u8m4_b2_mu(vbool2_t vm, vbool2_t vd, vuint8m4_t vs2,
                                  uint8_t rs1, size_t vl) {
  return __riscv_vmsne_vx_u8m4_b2_mu(vm, vd, vs2, rs1, vl);
}

vbool1_t test_vmsne_vv_u8m8_b1_mu(vbool1_t vm, vbool1_t vd, vuint8m8_t vs2,
                                  vuint8m8_t vs1, size_t vl) {
  return __riscv_vmsne_vv_u8m8_b1_mu(vm, vd, vs2, vs1, vl);
}

vbool1_t test_vmsne_vx_u8m8_b1_mu(vbool1_t vm, vbool1_t vd, vuint8m8_t vs2,
                                  uint8_t rs1, size_t vl) {
  return __riscv_vmsne_vx_u8m8_b1_mu(vm, vd, vs2, rs1, vl);
}

vbool64_t test_vmsne_vv_u16mf4_b64_mu(vbool64_t vm, vbool64_t vd,
                                      vuint16mf4_t vs2, vuint16mf4_t vs1,
                                      size_t vl) {
  return __riscv_vmsne_vv_u16mf4_b64_mu(vm, vd, vs2, vs1, vl);
}

vbool64_t test_vmsne_vx_u16mf4_b64_mu(vbool64_t vm, vbool64_t vd,
                                      vuint16mf4_t vs2, uint16_t rs1,
                                      size_t vl) {
  return __riscv_vmsne_vx_u16mf4_b64_mu(vm, vd, vs2, rs1, vl);
}

vbool32_t test_vmsne_vv_u16mf2_b32_mu(vbool32_t vm, vbool32_t vd,
                                      vuint16mf2_t vs2, vuint16mf2_t vs1,
                                      size_t vl) {
  return __riscv_vmsne_vv_u16mf2_b32_mu(vm, vd, vs2, vs1, vl);
}

vbool32_t test_vmsne_vx_u16mf2_b32_mu(vbool32_t vm, vbool32_t vd,
                                      vuint16mf2_t vs2, uint16_t rs1,
                                      size_t vl) {
  return __riscv_vmsne_vx_u16mf2_b32_mu(vm, vd, vs2, rs1, vl);
}

vbool16_t test_vmsne_vv_u16m1_b16_mu(vbool16_t vm, vbool16_t vd,
                                     vuint16m1_t vs2, vuint16m1_t vs1,
                                     size_t vl) {
  return __riscv_vmsne_vv_u16m1_b16_mu(vm, vd, vs2, vs1, vl);
}

vbool16_t test_vmsne_vx_u16m1_b16_mu(vbool16_t vm, vbool16_t vd,
                                     vuint16m1_t vs2, uint16_t rs1, size_t vl) {
  return __riscv_vmsne_vx_u16m1_b16_mu(vm, vd, vs2, rs1, vl);
}

vbool8_t test_vmsne_vv_u16m2_b8_mu(vbool8_t vm, vbool8_t vd, vuint16m2_t vs2,
                                   vuint16m2_t vs1, size_t vl) {
  return __riscv_vmsne_vv_u16m2_b8_mu(vm, vd, vs2, vs1, vl);
}

vbool8_t test_vmsne_vx_u16m2_b8_mu(vbool8_t vm, vbool8_t vd, vuint16m2_t vs2,
                                   uint16_t rs1, size_t vl) {
  return __riscv_vmsne_vx_u16m2_b8_mu(vm, vd, vs2, rs1, vl);
}

vbool4_t test_vmsne_vv_u16m4_b4_mu(vbool4_t vm, vbool4_t vd, vuint16m4_t vs2,
                                   vuint16m4_t vs1, size_t vl) {
  return __riscv_vmsne_vv_u16m4_b4_mu(vm, vd, vs2, vs1, vl);
}

vbool4_t test_vmsne_vx_u16m4_b4_mu(vbool4_t vm, vbool4_t vd, vuint16m4_t vs2,
                                   uint16_t rs1, size_t vl) {
  return __riscv_vmsne_vx_u16m4_b4_mu(vm, vd, vs2, rs1, vl);
}

vbool2_t test_vmsne_vv_u16m8_b2_mu(vbool2_t vm, vbool2_t vd, vuint16m8_t vs2,
                                   vuint16m8_t vs1, size_t vl) {
  return __riscv_vmsne_vv_u16m8_b2_mu(vm, vd, vs2, vs1, vl);
}

vbool2_t test_vmsne_vx_u16m8_b2_mu(vbool2_t vm, vbool2_t vd, vuint16m8_t vs2,
                                   uint16_t rs1, size_t vl) {
  return __riscv_vmsne_vx_u16m8_b2_mu(vm, vd, vs2, rs1, vl);
}

vbool64_t test_vmsne_vv_u32mf2_b64_mu(vbool64_t vm, vbool64_t vd,
                                      vuint32mf2_t vs2, vuint32mf2_t vs1,
                                      size_t vl) {
  return __riscv_vmsne_vv_u32mf2_b64_mu(vm, vd, vs2, vs1, vl);
}

vbool64_t test_vmsne_vx_u32mf2_b64_mu(vbool64_t vm, vbool64_t vd,
                                      vuint32mf2_t vs2, uint32_t rs1,
                                      size_t vl) {
  return __riscv_vmsne_vx_u32mf2_b64_mu(vm, vd, vs2, rs1, vl);
}

vbool32_t test_vmsne_vv_u32m1_b32_mu(vbool32_t vm, vbool32_t vd,
                                     vuint32m1_t vs2, vuint32m1_t vs1,
                                     size_t vl) {
  return __riscv_vmsne_vv_u32m1_b32_mu(vm, vd, vs2, vs1, vl);
}

vbool32_t test_vmsne_vx_u32m1_b32_mu(vbool32_t vm, vbool32_t vd,
                                     vuint32m1_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vmsne_vx_u32m1_b32_mu(vm, vd, vs2, rs1, vl);
}

vbool16_t test_vmsne_vv_u32m2_b16_mu(vbool16_t vm, vbool16_t vd,
                                     vuint32m2_t vs2, vuint32m2_t vs1,
                                     size_t vl) {
  return __riscv_vmsne_vv_u32m2_b16_mu(vm, vd, vs2, vs1, vl);
}

vbool16_t test_vmsne_vx_u32m2_b16_mu(vbool16_t vm, vbool16_t vd,
                                     vuint32m2_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vmsne_vx_u32m2_b16_mu(vm, vd, vs2, rs1, vl);
}

vbool8_t test_vmsne_vv_u32m4_b8_mu(vbool8_t vm, vbool8_t vd, vuint32m4_t vs2,
                                   vuint32m4_t vs1, size_t vl) {
  return __riscv_vmsne_vv_u32m4_b8_mu(vm, vd, vs2, vs1, vl);
}

vbool8_t test_vmsne_vx_u32m4_b8_mu(vbool8_t vm, vbool8_t vd, vuint32m4_t vs2,
                                   uint32_t rs1, size_t vl) {
  return __riscv_vmsne_vx_u32m4_b8_mu(vm, vd, vs2, rs1, vl);
}

vbool4_t test_vmsne_vv_u32m8_b4_mu(vbool4_t vm, vbool4_t vd, vuint32m8_t vs2,
                                   vuint32m8_t vs1, size_t vl) {
  return __riscv_vmsne_vv_u32m8_b4_mu(vm, vd, vs2, vs1, vl);
}

vbool4_t test_vmsne_vx_u32m8_b4_mu(vbool4_t vm, vbool4_t vd, vuint32m8_t vs2,
                                   uint32_t rs1, size_t vl) {
  return __riscv_vmsne_vx_u32m8_b4_mu(vm, vd, vs2, rs1, vl);
}

vbool64_t test_vmsne_vv_u64m1_b64_mu(vbool64_t vm, vbool64_t vd,
                                     vuint64m1_t vs2, vuint64m1_t vs1,
                                     size_t vl) {
  return __riscv_vmsne_vv_u64m1_b64_mu(vm, vd, vs2, vs1, vl);
}

vbool64_t test_vmsne_vx_u64m1_b64_mu(vbool64_t vm, vbool64_t vd,
                                     vuint64m1_t vs2, uint64_t rs1, size_t vl) {
  return __riscv_vmsne_vx_u64m1_b64_mu(vm, vd, vs2, rs1, vl);
}

vbool32_t test_vmsne_vv_u64m2_b32_mu(vbool32_t vm, vbool32_t vd,
                                     vuint64m2_t vs2, vuint64m2_t vs1,
                                     size_t vl) {
  return __riscv_vmsne_vv_u64m2_b32_mu(vm, vd, vs2, vs1, vl);
}

vbool32_t test_vmsne_vx_u64m2_b32_mu(vbool32_t vm, vbool32_t vd,
                                     vuint64m2_t vs2, uint64_t rs1, size_t vl) {
  return __riscv_vmsne_vx_u64m2_b32_mu(vm, vd, vs2, rs1, vl);
}

vbool16_t test_vmsne_vv_u64m4_b16_mu(vbool16_t vm, vbool16_t vd,
                                     vuint64m4_t vs2, vuint64m4_t vs1,
                                     size_t vl) {
  return __riscv_vmsne_vv_u64m4_b16_mu(vm, vd, vs2, vs1, vl);
}

vbool16_t test_vmsne_vx_u64m4_b16_mu(vbool16_t vm, vbool16_t vd,
                                     vuint64m4_t vs2, uint64_t rs1, size_t vl) {
  return __riscv_vmsne_vx_u64m4_b16_mu(vm, vd, vs2, rs1, vl);
}

vbool8_t test_vmsne_vv_u64m8_b8_mu(vbool8_t vm, vbool8_t vd, vuint64m8_t vs2,
                                   vuint64m8_t vs1, size_t vl) {
  return __riscv_vmsne_vv_u64m8_b8_mu(vm, vd, vs2, vs1, vl);
}

vbool8_t test_vmsne_vx_u64m8_b8_mu(vbool8_t vm, vbool8_t vd, vuint64m8_t vs2,
                                   uint64_t rs1, size_t vl) {
  return __riscv_vmsne_vx_u64m8_b8_mu(vm, vd, vs2, rs1, vl);
}
