// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +zvfh -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vint8mf8_t test_vnmsac_vv_i8mf8(vint8mf8_t vd, vint8mf8_t vs1, vint8mf8_t vs2,
                                size_t vl) {
  return __riscv_vnmsac_vv_i8mf8(vd, vs1, vs2, vl);
}

vint8mf8_t test_vnmsac_vx_i8mf8(vint8mf8_t vd, int8_t rs1, vint8mf8_t vs2,
                                size_t vl) {
  return __riscv_vnmsac_vx_i8mf8(vd, rs1, vs2, vl);
}

vint8mf4_t test_vnmsac_vv_i8mf4(vint8mf4_t vd, vint8mf4_t vs1, vint8mf4_t vs2,
                                size_t vl) {
  return __riscv_vnmsac_vv_i8mf4(vd, vs1, vs2, vl);
}

vint8mf4_t test_vnmsac_vx_i8mf4(vint8mf4_t vd, int8_t rs1, vint8mf4_t vs2,
                                size_t vl) {
  return __riscv_vnmsac_vx_i8mf4(vd, rs1, vs2, vl);
}

vint8mf2_t test_vnmsac_vv_i8mf2(vint8mf2_t vd, vint8mf2_t vs1, vint8mf2_t vs2,
                                size_t vl) {
  return __riscv_vnmsac_vv_i8mf2(vd, vs1, vs2, vl);
}

vint8mf2_t test_vnmsac_vx_i8mf2(vint8mf2_t vd, int8_t rs1, vint8mf2_t vs2,
                                size_t vl) {
  return __riscv_vnmsac_vx_i8mf2(vd, rs1, vs2, vl);
}

vint8m1_t test_vnmsac_vv_i8m1(vint8m1_t vd, vint8m1_t vs1, vint8m1_t vs2,
                              size_t vl) {
  return __riscv_vnmsac_vv_i8m1(vd, vs1, vs2, vl);
}

vint8m1_t test_vnmsac_vx_i8m1(vint8m1_t vd, int8_t rs1, vint8m1_t vs2,
                              size_t vl) {
  return __riscv_vnmsac_vx_i8m1(vd, rs1, vs2, vl);
}

vint8m2_t test_vnmsac_vv_i8m2(vint8m2_t vd, vint8m2_t vs1, vint8m2_t vs2,
                              size_t vl) {
  return __riscv_vnmsac_vv_i8m2(vd, vs1, vs2, vl);
}

vint8m2_t test_vnmsac_vx_i8m2(vint8m2_t vd, int8_t rs1, vint8m2_t vs2,
                              size_t vl) {
  return __riscv_vnmsac_vx_i8m2(vd, rs1, vs2, vl);
}

vint8m4_t test_vnmsac_vv_i8m4(vint8m4_t vd, vint8m4_t vs1, vint8m4_t vs2,
                              size_t vl) {
  return __riscv_vnmsac_vv_i8m4(vd, vs1, vs2, vl);
}

vint8m4_t test_vnmsac_vx_i8m4(vint8m4_t vd, int8_t rs1, vint8m4_t vs2,
                              size_t vl) {
  return __riscv_vnmsac_vx_i8m4(vd, rs1, vs2, vl);
}

vint8m8_t test_vnmsac_vv_i8m8(vint8m8_t vd, vint8m8_t vs1, vint8m8_t vs2,
                              size_t vl) {
  return __riscv_vnmsac_vv_i8m8(vd, vs1, vs2, vl);
}

vint8m8_t test_vnmsac_vx_i8m8(vint8m8_t vd, int8_t rs1, vint8m8_t vs2,
                              size_t vl) {
  return __riscv_vnmsac_vx_i8m8(vd, rs1, vs2, vl);
}

vint16mf4_t test_vnmsac_vv_i16mf4(vint16mf4_t vd, vint16mf4_t vs1,
                                  vint16mf4_t vs2, size_t vl) {
  return __riscv_vnmsac_vv_i16mf4(vd, vs1, vs2, vl);
}

vint16mf4_t test_vnmsac_vx_i16mf4(vint16mf4_t vd, int16_t rs1, vint16mf4_t vs2,
                                  size_t vl) {
  return __riscv_vnmsac_vx_i16mf4(vd, rs1, vs2, vl);
}

vint16mf2_t test_vnmsac_vv_i16mf2(vint16mf2_t vd, vint16mf2_t vs1,
                                  vint16mf2_t vs2, size_t vl) {
  return __riscv_vnmsac_vv_i16mf2(vd, vs1, vs2, vl);
}

vint16mf2_t test_vnmsac_vx_i16mf2(vint16mf2_t vd, int16_t rs1, vint16mf2_t vs2,
                                  size_t vl) {
  return __riscv_vnmsac_vx_i16mf2(vd, rs1, vs2, vl);
}

vint16m1_t test_vnmsac_vv_i16m1(vint16m1_t vd, vint16m1_t vs1, vint16m1_t vs2,
                                size_t vl) {
  return __riscv_vnmsac_vv_i16m1(vd, vs1, vs2, vl);
}

vint16m1_t test_vnmsac_vx_i16m1(vint16m1_t vd, int16_t rs1, vint16m1_t vs2,
                                size_t vl) {
  return __riscv_vnmsac_vx_i16m1(vd, rs1, vs2, vl);
}

vint16m2_t test_vnmsac_vv_i16m2(vint16m2_t vd, vint16m2_t vs1, vint16m2_t vs2,
                                size_t vl) {
  return __riscv_vnmsac_vv_i16m2(vd, vs1, vs2, vl);
}

vint16m2_t test_vnmsac_vx_i16m2(vint16m2_t vd, int16_t rs1, vint16m2_t vs2,
                                size_t vl) {
  return __riscv_vnmsac_vx_i16m2(vd, rs1, vs2, vl);
}

vint16m4_t test_vnmsac_vv_i16m4(vint16m4_t vd, vint16m4_t vs1, vint16m4_t vs2,
                                size_t vl) {
  return __riscv_vnmsac_vv_i16m4(vd, vs1, vs2, vl);
}

vint16m4_t test_vnmsac_vx_i16m4(vint16m4_t vd, int16_t rs1, vint16m4_t vs2,
                                size_t vl) {
  return __riscv_vnmsac_vx_i16m4(vd, rs1, vs2, vl);
}

vint16m8_t test_vnmsac_vv_i16m8(vint16m8_t vd, vint16m8_t vs1, vint16m8_t vs2,
                                size_t vl) {
  return __riscv_vnmsac_vv_i16m8(vd, vs1, vs2, vl);
}

vint16m8_t test_vnmsac_vx_i16m8(vint16m8_t vd, int16_t rs1, vint16m8_t vs2,
                                size_t vl) {
  return __riscv_vnmsac_vx_i16m8(vd, rs1, vs2, vl);
}

vint32mf2_t test_vnmsac_vv_i32mf2(vint32mf2_t vd, vint32mf2_t vs1,
                                  vint32mf2_t vs2, size_t vl) {
  return __riscv_vnmsac_vv_i32mf2(vd, vs1, vs2, vl);
}

vint32mf2_t test_vnmsac_vx_i32mf2(vint32mf2_t vd, int32_t rs1, vint32mf2_t vs2,
                                  size_t vl) {
  return __riscv_vnmsac_vx_i32mf2(vd, rs1, vs2, vl);
}

vint32m1_t test_vnmsac_vv_i32m1(vint32m1_t vd, vint32m1_t vs1, vint32m1_t vs2,
                                size_t vl) {
  return __riscv_vnmsac_vv_i32m1(vd, vs1, vs2, vl);
}

vint32m1_t test_vnmsac_vx_i32m1(vint32m1_t vd, int32_t rs1, vint32m1_t vs2,
                                size_t vl) {
  return __riscv_vnmsac_vx_i32m1(vd, rs1, vs2, vl);
}

vint32m2_t test_vnmsac_vv_i32m2(vint32m2_t vd, vint32m2_t vs1, vint32m2_t vs2,
                                size_t vl) {
  return __riscv_vnmsac_vv_i32m2(vd, vs1, vs2, vl);
}

vint32m2_t test_vnmsac_vx_i32m2(vint32m2_t vd, int32_t rs1, vint32m2_t vs2,
                                size_t vl) {
  return __riscv_vnmsac_vx_i32m2(vd, rs1, vs2, vl);
}

vint32m4_t test_vnmsac_vv_i32m4(vint32m4_t vd, vint32m4_t vs1, vint32m4_t vs2,
                                size_t vl) {
  return __riscv_vnmsac_vv_i32m4(vd, vs1, vs2, vl);
}

vint32m4_t test_vnmsac_vx_i32m4(vint32m4_t vd, int32_t rs1, vint32m4_t vs2,
                                size_t vl) {
  return __riscv_vnmsac_vx_i32m4(vd, rs1, vs2, vl);
}

vint32m8_t test_vnmsac_vv_i32m8(vint32m8_t vd, vint32m8_t vs1, vint32m8_t vs2,
                                size_t vl) {
  return __riscv_vnmsac_vv_i32m8(vd, vs1, vs2, vl);
}

vint32m8_t test_vnmsac_vx_i32m8(vint32m8_t vd, int32_t rs1, vint32m8_t vs2,
                                size_t vl) {
  return __riscv_vnmsac_vx_i32m8(vd, rs1, vs2, vl);
}

vint64m1_t test_vnmsac_vv_i64m1(vint64m1_t vd, vint64m1_t vs1, vint64m1_t vs2,
                                size_t vl) {
  return __riscv_vnmsac_vv_i64m1(vd, vs1, vs2, vl);
}

vint64m1_t test_vnmsac_vx_i64m1(vint64m1_t vd, int64_t rs1, vint64m1_t vs2,
                                size_t vl) {
  return __riscv_vnmsac_vx_i64m1(vd, rs1, vs2, vl);
}

vint64m2_t test_vnmsac_vv_i64m2(vint64m2_t vd, vint64m2_t vs1, vint64m2_t vs2,
                                size_t vl) {
  return __riscv_vnmsac_vv_i64m2(vd, vs1, vs2, vl);
}

vint64m2_t test_vnmsac_vx_i64m2(vint64m2_t vd, int64_t rs1, vint64m2_t vs2,
                                size_t vl) {
  return __riscv_vnmsac_vx_i64m2(vd, rs1, vs2, vl);
}

vint64m4_t test_vnmsac_vv_i64m4(vint64m4_t vd, vint64m4_t vs1, vint64m4_t vs2,
                                size_t vl) {
  return __riscv_vnmsac_vv_i64m4(vd, vs1, vs2, vl);
}

vint64m4_t test_vnmsac_vx_i64m4(vint64m4_t vd, int64_t rs1, vint64m4_t vs2,
                                size_t vl) {
  return __riscv_vnmsac_vx_i64m4(vd, rs1, vs2, vl);
}

vint64m8_t test_vnmsac_vv_i64m8(vint64m8_t vd, vint64m8_t vs1, vint64m8_t vs2,
                                size_t vl) {
  return __riscv_vnmsac_vv_i64m8(vd, vs1, vs2, vl);
}

vint64m8_t test_vnmsac_vx_i64m8(vint64m8_t vd, int64_t rs1, vint64m8_t vs2,
                                size_t vl) {
  return __riscv_vnmsac_vx_i64m8(vd, rs1, vs2, vl);
}

vuint8mf8_t test_vnmsac_vv_u8mf8(vuint8mf8_t vd, vuint8mf8_t vs1,
                                 vuint8mf8_t vs2, size_t vl) {
  return __riscv_vnmsac_vv_u8mf8(vd, vs1, vs2, vl);
}

vuint8mf8_t test_vnmsac_vx_u8mf8(vuint8mf8_t vd, uint8_t rs1, vuint8mf8_t vs2,
                                 size_t vl) {
  return __riscv_vnmsac_vx_u8mf8(vd, rs1, vs2, vl);
}

vuint8mf4_t test_vnmsac_vv_u8mf4(vuint8mf4_t vd, vuint8mf4_t vs1,
                                 vuint8mf4_t vs2, size_t vl) {
  return __riscv_vnmsac_vv_u8mf4(vd, vs1, vs2, vl);
}

vuint8mf4_t test_vnmsac_vx_u8mf4(vuint8mf4_t vd, uint8_t rs1, vuint8mf4_t vs2,
                                 size_t vl) {
  return __riscv_vnmsac_vx_u8mf4(vd, rs1, vs2, vl);
}

vuint8mf2_t test_vnmsac_vv_u8mf2(vuint8mf2_t vd, vuint8mf2_t vs1,
                                 vuint8mf2_t vs2, size_t vl) {
  return __riscv_vnmsac_vv_u8mf2(vd, vs1, vs2, vl);
}

vuint8mf2_t test_vnmsac_vx_u8mf2(vuint8mf2_t vd, uint8_t rs1, vuint8mf2_t vs2,
                                 size_t vl) {
  return __riscv_vnmsac_vx_u8mf2(vd, rs1, vs2, vl);
}

vuint8m1_t test_vnmsac_vv_u8m1(vuint8m1_t vd, vuint8m1_t vs1, vuint8m1_t vs2,
                               size_t vl) {
  return __riscv_vnmsac_vv_u8m1(vd, vs1, vs2, vl);
}

vuint8m1_t test_vnmsac_vx_u8m1(vuint8m1_t vd, uint8_t rs1, vuint8m1_t vs2,
                               size_t vl) {
  return __riscv_vnmsac_vx_u8m1(vd, rs1, vs2, vl);
}

vuint8m2_t test_vnmsac_vv_u8m2(vuint8m2_t vd, vuint8m2_t vs1, vuint8m2_t vs2,
                               size_t vl) {
  return __riscv_vnmsac_vv_u8m2(vd, vs1, vs2, vl);
}

vuint8m2_t test_vnmsac_vx_u8m2(vuint8m2_t vd, uint8_t rs1, vuint8m2_t vs2,
                               size_t vl) {
  return __riscv_vnmsac_vx_u8m2(vd, rs1, vs2, vl);
}

vuint8m4_t test_vnmsac_vv_u8m4(vuint8m4_t vd, vuint8m4_t vs1, vuint8m4_t vs2,
                               size_t vl) {
  return __riscv_vnmsac_vv_u8m4(vd, vs1, vs2, vl);
}

vuint8m4_t test_vnmsac_vx_u8m4(vuint8m4_t vd, uint8_t rs1, vuint8m4_t vs2,
                               size_t vl) {
  return __riscv_vnmsac_vx_u8m4(vd, rs1, vs2, vl);
}

vuint8m8_t test_vnmsac_vv_u8m8(vuint8m8_t vd, vuint8m8_t vs1, vuint8m8_t vs2,
                               size_t vl) {
  return __riscv_vnmsac_vv_u8m8(vd, vs1, vs2, vl);
}

vuint8m8_t test_vnmsac_vx_u8m8(vuint8m8_t vd, uint8_t rs1, vuint8m8_t vs2,
                               size_t vl) {
  return __riscv_vnmsac_vx_u8m8(vd, rs1, vs2, vl);
}

vuint16mf4_t test_vnmsac_vv_u16mf4(vuint16mf4_t vd, vuint16mf4_t vs1,
                                   vuint16mf4_t vs2, size_t vl) {
  return __riscv_vnmsac_vv_u16mf4(vd, vs1, vs2, vl);
}

vuint16mf4_t test_vnmsac_vx_u16mf4(vuint16mf4_t vd, uint16_t rs1,
                                   vuint16mf4_t vs2, size_t vl) {
  return __riscv_vnmsac_vx_u16mf4(vd, rs1, vs2, vl);
}

vuint16mf2_t test_vnmsac_vv_u16mf2(vuint16mf2_t vd, vuint16mf2_t vs1,
                                   vuint16mf2_t vs2, size_t vl) {
  return __riscv_vnmsac_vv_u16mf2(vd, vs1, vs2, vl);
}

vuint16mf2_t test_vnmsac_vx_u16mf2(vuint16mf2_t vd, uint16_t rs1,
                                   vuint16mf2_t vs2, size_t vl) {
  return __riscv_vnmsac_vx_u16mf2(vd, rs1, vs2, vl);
}

vuint16m1_t test_vnmsac_vv_u16m1(vuint16m1_t vd, vuint16m1_t vs1,
                                 vuint16m1_t vs2, size_t vl) {
  return __riscv_vnmsac_vv_u16m1(vd, vs1, vs2, vl);
}

vuint16m1_t test_vnmsac_vx_u16m1(vuint16m1_t vd, uint16_t rs1, vuint16m1_t vs2,
                                 size_t vl) {
  return __riscv_vnmsac_vx_u16m1(vd, rs1, vs2, vl);
}

vuint16m2_t test_vnmsac_vv_u16m2(vuint16m2_t vd, vuint16m2_t vs1,
                                 vuint16m2_t vs2, size_t vl) {
  return __riscv_vnmsac_vv_u16m2(vd, vs1, vs2, vl);
}

vuint16m2_t test_vnmsac_vx_u16m2(vuint16m2_t vd, uint16_t rs1, vuint16m2_t vs2,
                                 size_t vl) {
  return __riscv_vnmsac_vx_u16m2(vd, rs1, vs2, vl);
}

vuint16m4_t test_vnmsac_vv_u16m4(vuint16m4_t vd, vuint16m4_t vs1,
                                 vuint16m4_t vs2, size_t vl) {
  return __riscv_vnmsac_vv_u16m4(vd, vs1, vs2, vl);
}

vuint16m4_t test_vnmsac_vx_u16m4(vuint16m4_t vd, uint16_t rs1, vuint16m4_t vs2,
                                 size_t vl) {
  return __riscv_vnmsac_vx_u16m4(vd, rs1, vs2, vl);
}

vuint16m8_t test_vnmsac_vv_u16m8(vuint16m8_t vd, vuint16m8_t vs1,
                                 vuint16m8_t vs2, size_t vl) {
  return __riscv_vnmsac_vv_u16m8(vd, vs1, vs2, vl);
}

vuint16m8_t test_vnmsac_vx_u16m8(vuint16m8_t vd, uint16_t rs1, vuint16m8_t vs2,
                                 size_t vl) {
  return __riscv_vnmsac_vx_u16m8(vd, rs1, vs2, vl);
}

vuint32mf2_t test_vnmsac_vv_u32mf2(vuint32mf2_t vd, vuint32mf2_t vs1,
                                   vuint32mf2_t vs2, size_t vl) {
  return __riscv_vnmsac_vv_u32mf2(vd, vs1, vs2, vl);
}

vuint32mf2_t test_vnmsac_vx_u32mf2(vuint32mf2_t vd, uint32_t rs1,
                                   vuint32mf2_t vs2, size_t vl) {
  return __riscv_vnmsac_vx_u32mf2(vd, rs1, vs2, vl);
}

vuint32m1_t test_vnmsac_vv_u32m1(vuint32m1_t vd, vuint32m1_t vs1,
                                 vuint32m1_t vs2, size_t vl) {
  return __riscv_vnmsac_vv_u32m1(vd, vs1, vs2, vl);
}

vuint32m1_t test_vnmsac_vx_u32m1(vuint32m1_t vd, uint32_t rs1, vuint32m1_t vs2,
                                 size_t vl) {
  return __riscv_vnmsac_vx_u32m1(vd, rs1, vs2, vl);
}

vuint32m2_t test_vnmsac_vv_u32m2(vuint32m2_t vd, vuint32m2_t vs1,
                                 vuint32m2_t vs2, size_t vl) {
  return __riscv_vnmsac_vv_u32m2(vd, vs1, vs2, vl);
}

vuint32m2_t test_vnmsac_vx_u32m2(vuint32m2_t vd, uint32_t rs1, vuint32m2_t vs2,
                                 size_t vl) {
  return __riscv_vnmsac_vx_u32m2(vd, rs1, vs2, vl);
}

vuint32m4_t test_vnmsac_vv_u32m4(vuint32m4_t vd, vuint32m4_t vs1,
                                 vuint32m4_t vs2, size_t vl) {
  return __riscv_vnmsac_vv_u32m4(vd, vs1, vs2, vl);
}

vuint32m4_t test_vnmsac_vx_u32m4(vuint32m4_t vd, uint32_t rs1, vuint32m4_t vs2,
                                 size_t vl) {
  return __riscv_vnmsac_vx_u32m4(vd, rs1, vs2, vl);
}

vuint32m8_t test_vnmsac_vv_u32m8(vuint32m8_t vd, vuint32m8_t vs1,
                                 vuint32m8_t vs2, size_t vl) {
  return __riscv_vnmsac_vv_u32m8(vd, vs1, vs2, vl);
}

vuint32m8_t test_vnmsac_vx_u32m8(vuint32m8_t vd, uint32_t rs1, vuint32m8_t vs2,
                                 size_t vl) {
  return __riscv_vnmsac_vx_u32m8(vd, rs1, vs2, vl);
}

vuint64m1_t test_vnmsac_vv_u64m1(vuint64m1_t vd, vuint64m1_t vs1,
                                 vuint64m1_t vs2, size_t vl) {
  return __riscv_vnmsac_vv_u64m1(vd, vs1, vs2, vl);
}

vuint64m1_t test_vnmsac_vx_u64m1(vuint64m1_t vd, uint64_t rs1, vuint64m1_t vs2,
                                 size_t vl) {
  return __riscv_vnmsac_vx_u64m1(vd, rs1, vs2, vl);
}

vuint64m2_t test_vnmsac_vv_u64m2(vuint64m2_t vd, vuint64m2_t vs1,
                                 vuint64m2_t vs2, size_t vl) {
  return __riscv_vnmsac_vv_u64m2(vd, vs1, vs2, vl);
}

vuint64m2_t test_vnmsac_vx_u64m2(vuint64m2_t vd, uint64_t rs1, vuint64m2_t vs2,
                                 size_t vl) {
  return __riscv_vnmsac_vx_u64m2(vd, rs1, vs2, vl);
}

vuint64m4_t test_vnmsac_vv_u64m4(vuint64m4_t vd, vuint64m4_t vs1,
                                 vuint64m4_t vs2, size_t vl) {
  return __riscv_vnmsac_vv_u64m4(vd, vs1, vs2, vl);
}

vuint64m4_t test_vnmsac_vx_u64m4(vuint64m4_t vd, uint64_t rs1, vuint64m4_t vs2,
                                 size_t vl) {
  return __riscv_vnmsac_vx_u64m4(vd, rs1, vs2, vl);
}

vuint64m8_t test_vnmsac_vv_u64m8(vuint64m8_t vd, vuint64m8_t vs1,
                                 vuint64m8_t vs2, size_t vl) {
  return __riscv_vnmsac_vv_u64m8(vd, vs1, vs2, vl);
}

vuint64m8_t test_vnmsac_vx_u64m8(vuint64m8_t vd, uint64_t rs1, vuint64m8_t vs2,
                                 size_t vl) {
  return __riscv_vnmsac_vx_u64m8(vd, rs1, vs2, vl);
}

vint8mf8_t test_vnmsac_vv_i8mf8_m(vbool64_t vm, vint8mf8_t vd, vint8mf8_t vs1,
                                  vint8mf8_t vs2, size_t vl) {
  return __riscv_vnmsac_vv_i8mf8_m(vm, vd, vs1, vs2, vl);
}

vint8mf8_t test_vnmsac_vx_i8mf8_m(vbool64_t vm, vint8mf8_t vd, int8_t rs1,
                                  vint8mf8_t vs2, size_t vl) {
  return __riscv_vnmsac_vx_i8mf8_m(vm, vd, rs1, vs2, vl);
}

vint8mf4_t test_vnmsac_vv_i8mf4_m(vbool32_t vm, vint8mf4_t vd, vint8mf4_t vs1,
                                  vint8mf4_t vs2, size_t vl) {
  return __riscv_vnmsac_vv_i8mf4_m(vm, vd, vs1, vs2, vl);
}

vint8mf4_t test_vnmsac_vx_i8mf4_m(vbool32_t vm, vint8mf4_t vd, int8_t rs1,
                                  vint8mf4_t vs2, size_t vl) {
  return __riscv_vnmsac_vx_i8mf4_m(vm, vd, rs1, vs2, vl);
}

vint8mf2_t test_vnmsac_vv_i8mf2_m(vbool16_t vm, vint8mf2_t vd, vint8mf2_t vs1,
                                  vint8mf2_t vs2, size_t vl) {
  return __riscv_vnmsac_vv_i8mf2_m(vm, vd, vs1, vs2, vl);
}

vint8mf2_t test_vnmsac_vx_i8mf2_m(vbool16_t vm, vint8mf2_t vd, int8_t rs1,
                                  vint8mf2_t vs2, size_t vl) {
  return __riscv_vnmsac_vx_i8mf2_m(vm, vd, rs1, vs2, vl);
}

vint8m1_t test_vnmsac_vv_i8m1_m(vbool8_t vm, vint8m1_t vd, vint8m1_t vs1,
                                vint8m1_t vs2, size_t vl) {
  return __riscv_vnmsac_vv_i8m1_m(vm, vd, vs1, vs2, vl);
}

vint8m1_t test_vnmsac_vx_i8m1_m(vbool8_t vm, vint8m1_t vd, int8_t rs1,
                                vint8m1_t vs2, size_t vl) {
  return __riscv_vnmsac_vx_i8m1_m(vm, vd, rs1, vs2, vl);
}

vint8m2_t test_vnmsac_vv_i8m2_m(vbool4_t vm, vint8m2_t vd, vint8m2_t vs1,
                                vint8m2_t vs2, size_t vl) {
  return __riscv_vnmsac_vv_i8m2_m(vm, vd, vs1, vs2, vl);
}

vint8m2_t test_vnmsac_vx_i8m2_m(vbool4_t vm, vint8m2_t vd, int8_t rs1,
                                vint8m2_t vs2, size_t vl) {
  return __riscv_vnmsac_vx_i8m2_m(vm, vd, rs1, vs2, vl);
}

vint8m4_t test_vnmsac_vv_i8m4_m(vbool2_t vm, vint8m4_t vd, vint8m4_t vs1,
                                vint8m4_t vs2, size_t vl) {
  return __riscv_vnmsac_vv_i8m4_m(vm, vd, vs1, vs2, vl);
}

vint8m4_t test_vnmsac_vx_i8m4_m(vbool2_t vm, vint8m4_t vd, int8_t rs1,
                                vint8m4_t vs2, size_t vl) {
  return __riscv_vnmsac_vx_i8m4_m(vm, vd, rs1, vs2, vl);
}

vint8m8_t test_vnmsac_vv_i8m8_m(vbool1_t vm, vint8m8_t vd, vint8m8_t vs1,
                                vint8m8_t vs2, size_t vl) {
  return __riscv_vnmsac_vv_i8m8_m(vm, vd, vs1, vs2, vl);
}

vint8m8_t test_vnmsac_vx_i8m8_m(vbool1_t vm, vint8m8_t vd, int8_t rs1,
                                vint8m8_t vs2, size_t vl) {
  return __riscv_vnmsac_vx_i8m8_m(vm, vd, rs1, vs2, vl);
}

vint16mf4_t test_vnmsac_vv_i16mf4_m(vbool64_t vm, vint16mf4_t vd,
                                    vint16mf4_t vs1, vint16mf4_t vs2,
                                    size_t vl) {
  return __riscv_vnmsac_vv_i16mf4_m(vm, vd, vs1, vs2, vl);
}

vint16mf4_t test_vnmsac_vx_i16mf4_m(vbool64_t vm, vint16mf4_t vd, int16_t rs1,
                                    vint16mf4_t vs2, size_t vl) {
  return __riscv_vnmsac_vx_i16mf4_m(vm, vd, rs1, vs2, vl);
}

vint16mf2_t test_vnmsac_vv_i16mf2_m(vbool32_t vm, vint16mf2_t vd,
                                    vint16mf2_t vs1, vint16mf2_t vs2,
                                    size_t vl) {
  return __riscv_vnmsac_vv_i16mf2_m(vm, vd, vs1, vs2, vl);
}

vint16mf2_t test_vnmsac_vx_i16mf2_m(vbool32_t vm, vint16mf2_t vd, int16_t rs1,
                                    vint16mf2_t vs2, size_t vl) {
  return __riscv_vnmsac_vx_i16mf2_m(vm, vd, rs1, vs2, vl);
}

vint16m1_t test_vnmsac_vv_i16m1_m(vbool16_t vm, vint16m1_t vd, vint16m1_t vs1,
                                  vint16m1_t vs2, size_t vl) {
  return __riscv_vnmsac_vv_i16m1_m(vm, vd, vs1, vs2, vl);
}

vint16m1_t test_vnmsac_vx_i16m1_m(vbool16_t vm, vint16m1_t vd, int16_t rs1,
                                  vint16m1_t vs2, size_t vl) {
  return __riscv_vnmsac_vx_i16m1_m(vm, vd, rs1, vs2, vl);
}

vint16m2_t test_vnmsac_vv_i16m2_m(vbool8_t vm, vint16m2_t vd, vint16m2_t vs1,
                                  vint16m2_t vs2, size_t vl) {
  return __riscv_vnmsac_vv_i16m2_m(vm, vd, vs1, vs2, vl);
}

vint16m2_t test_vnmsac_vx_i16m2_m(vbool8_t vm, vint16m2_t vd, int16_t rs1,
                                  vint16m2_t vs2, size_t vl) {
  return __riscv_vnmsac_vx_i16m2_m(vm, vd, rs1, vs2, vl);
}

vint16m4_t test_vnmsac_vv_i16m4_m(vbool4_t vm, vint16m4_t vd, vint16m4_t vs1,
                                  vint16m4_t vs2, size_t vl) {
  return __riscv_vnmsac_vv_i16m4_m(vm, vd, vs1, vs2, vl);
}

vint16m4_t test_vnmsac_vx_i16m4_m(vbool4_t vm, vint16m4_t vd, int16_t rs1,
                                  vint16m4_t vs2, size_t vl) {
  return __riscv_vnmsac_vx_i16m4_m(vm, vd, rs1, vs2, vl);
}

vint16m8_t test_vnmsac_vv_i16m8_m(vbool2_t vm, vint16m8_t vd, vint16m8_t vs1,
                                  vint16m8_t vs2, size_t vl) {
  return __riscv_vnmsac_vv_i16m8_m(vm, vd, vs1, vs2, vl);
}

vint16m8_t test_vnmsac_vx_i16m8_m(vbool2_t vm, vint16m8_t vd, int16_t rs1,
                                  vint16m8_t vs2, size_t vl) {
  return __riscv_vnmsac_vx_i16m8_m(vm, vd, rs1, vs2, vl);
}

vint32mf2_t test_vnmsac_vv_i32mf2_m(vbool64_t vm, vint32mf2_t vd,
                                    vint32mf2_t vs1, vint32mf2_t vs2,
                                    size_t vl) {
  return __riscv_vnmsac_vv_i32mf2_m(vm, vd, vs1, vs2, vl);
}

vint32mf2_t test_vnmsac_vx_i32mf2_m(vbool64_t vm, vint32mf2_t vd, int32_t rs1,
                                    vint32mf2_t vs2, size_t vl) {
  return __riscv_vnmsac_vx_i32mf2_m(vm, vd, rs1, vs2, vl);
}

vint32m1_t test_vnmsac_vv_i32m1_m(vbool32_t vm, vint32m1_t vd, vint32m1_t vs1,
                                  vint32m1_t vs2, size_t vl) {
  return __riscv_vnmsac_vv_i32m1_m(vm, vd, vs1, vs2, vl);
}

vint32m1_t test_vnmsac_vx_i32m1_m(vbool32_t vm, vint32m1_t vd, int32_t rs1,
                                  vint32m1_t vs2, size_t vl) {
  return __riscv_vnmsac_vx_i32m1_m(vm, vd, rs1, vs2, vl);
}

vint32m2_t test_vnmsac_vv_i32m2_m(vbool16_t vm, vint32m2_t vd, vint32m2_t vs1,
                                  vint32m2_t vs2, size_t vl) {
  return __riscv_vnmsac_vv_i32m2_m(vm, vd, vs1, vs2, vl);
}

vint32m2_t test_vnmsac_vx_i32m2_m(vbool16_t vm, vint32m2_t vd, int32_t rs1,
                                  vint32m2_t vs2, size_t vl) {
  return __riscv_vnmsac_vx_i32m2_m(vm, vd, rs1, vs2, vl);
}

vint32m4_t test_vnmsac_vv_i32m4_m(vbool8_t vm, vint32m4_t vd, vint32m4_t vs1,
                                  vint32m4_t vs2, size_t vl) {
  return __riscv_vnmsac_vv_i32m4_m(vm, vd, vs1, vs2, vl);
}

vint32m4_t test_vnmsac_vx_i32m4_m(vbool8_t vm, vint32m4_t vd, int32_t rs1,
                                  vint32m4_t vs2, size_t vl) {
  return __riscv_vnmsac_vx_i32m4_m(vm, vd, rs1, vs2, vl);
}

vint32m8_t test_vnmsac_vv_i32m8_m(vbool4_t vm, vint32m8_t vd, vint32m8_t vs1,
                                  vint32m8_t vs2, size_t vl) {
  return __riscv_vnmsac_vv_i32m8_m(vm, vd, vs1, vs2, vl);
}

vint32m8_t test_vnmsac_vx_i32m8_m(vbool4_t vm, vint32m8_t vd, int32_t rs1,
                                  vint32m8_t vs2, size_t vl) {
  return __riscv_vnmsac_vx_i32m8_m(vm, vd, rs1, vs2, vl);
}

vint64m1_t test_vnmsac_vv_i64m1_m(vbool64_t vm, vint64m1_t vd, vint64m1_t vs1,
                                  vint64m1_t vs2, size_t vl) {
  return __riscv_vnmsac_vv_i64m1_m(vm, vd, vs1, vs2, vl);
}

vint64m1_t test_vnmsac_vx_i64m1_m(vbool64_t vm, vint64m1_t vd, int64_t rs1,
                                  vint64m1_t vs2, size_t vl) {
  return __riscv_vnmsac_vx_i64m1_m(vm, vd, rs1, vs2, vl);
}

vint64m2_t test_vnmsac_vv_i64m2_m(vbool32_t vm, vint64m2_t vd, vint64m2_t vs1,
                                  vint64m2_t vs2, size_t vl) {
  return __riscv_vnmsac_vv_i64m2_m(vm, vd, vs1, vs2, vl);
}

vint64m2_t test_vnmsac_vx_i64m2_m(vbool32_t vm, vint64m2_t vd, int64_t rs1,
                                  vint64m2_t vs2, size_t vl) {
  return __riscv_vnmsac_vx_i64m2_m(vm, vd, rs1, vs2, vl);
}

vint64m4_t test_vnmsac_vv_i64m4_m(vbool16_t vm, vint64m4_t vd, vint64m4_t vs1,
                                  vint64m4_t vs2, size_t vl) {
  return __riscv_vnmsac_vv_i64m4_m(vm, vd, vs1, vs2, vl);
}

vint64m4_t test_vnmsac_vx_i64m4_m(vbool16_t vm, vint64m4_t vd, int64_t rs1,
                                  vint64m4_t vs2, size_t vl) {
  return __riscv_vnmsac_vx_i64m4_m(vm, vd, rs1, vs2, vl);
}

vint64m8_t test_vnmsac_vv_i64m8_m(vbool8_t vm, vint64m8_t vd, vint64m8_t vs1,
                                  vint64m8_t vs2, size_t vl) {
  return __riscv_vnmsac_vv_i64m8_m(vm, vd, vs1, vs2, vl);
}

vint64m8_t test_vnmsac_vx_i64m8_m(vbool8_t vm, vint64m8_t vd, int64_t rs1,
                                  vint64m8_t vs2, size_t vl) {
  return __riscv_vnmsac_vx_i64m8_m(vm, vd, rs1, vs2, vl);
}

vuint8mf8_t test_vnmsac_vv_u8mf8_m(vbool64_t vm, vuint8mf8_t vd,
                                   vuint8mf8_t vs1, vuint8mf8_t vs2,
                                   size_t vl) {
  return __riscv_vnmsac_vv_u8mf8_m(vm, vd, vs1, vs2, vl);
}

vuint8mf8_t test_vnmsac_vx_u8mf8_m(vbool64_t vm, vuint8mf8_t vd, uint8_t rs1,
                                   vuint8mf8_t vs2, size_t vl) {
  return __riscv_vnmsac_vx_u8mf8_m(vm, vd, rs1, vs2, vl);
}

vuint8mf4_t test_vnmsac_vv_u8mf4_m(vbool32_t vm, vuint8mf4_t vd,
                                   vuint8mf4_t vs1, vuint8mf4_t vs2,
                                   size_t vl) {
  return __riscv_vnmsac_vv_u8mf4_m(vm, vd, vs1, vs2, vl);
}

vuint8mf4_t test_vnmsac_vx_u8mf4_m(vbool32_t vm, vuint8mf4_t vd, uint8_t rs1,
                                   vuint8mf4_t vs2, size_t vl) {
  return __riscv_vnmsac_vx_u8mf4_m(vm, vd, rs1, vs2, vl);
}

vuint8mf2_t test_vnmsac_vv_u8mf2_m(vbool16_t vm, vuint8mf2_t vd,
                                   vuint8mf2_t vs1, vuint8mf2_t vs2,
                                   size_t vl) {
  return __riscv_vnmsac_vv_u8mf2_m(vm, vd, vs1, vs2, vl);
}

vuint8mf2_t test_vnmsac_vx_u8mf2_m(vbool16_t vm, vuint8mf2_t vd, uint8_t rs1,
                                   vuint8mf2_t vs2, size_t vl) {
  return __riscv_vnmsac_vx_u8mf2_m(vm, vd, rs1, vs2, vl);
}

vuint8m1_t test_vnmsac_vv_u8m1_m(vbool8_t vm, vuint8m1_t vd, vuint8m1_t vs1,
                                 vuint8m1_t vs2, size_t vl) {
  return __riscv_vnmsac_vv_u8m1_m(vm, vd, vs1, vs2, vl);
}

vuint8m1_t test_vnmsac_vx_u8m1_m(vbool8_t vm, vuint8m1_t vd, uint8_t rs1,
                                 vuint8m1_t vs2, size_t vl) {
  return __riscv_vnmsac_vx_u8m1_m(vm, vd, rs1, vs2, vl);
}

vuint8m2_t test_vnmsac_vv_u8m2_m(vbool4_t vm, vuint8m2_t vd, vuint8m2_t vs1,
                                 vuint8m2_t vs2, size_t vl) {
  return __riscv_vnmsac_vv_u8m2_m(vm, vd, vs1, vs2, vl);
}

vuint8m2_t test_vnmsac_vx_u8m2_m(vbool4_t vm, vuint8m2_t vd, uint8_t rs1,
                                 vuint8m2_t vs2, size_t vl) {
  return __riscv_vnmsac_vx_u8m2_m(vm, vd, rs1, vs2, vl);
}

vuint8m4_t test_vnmsac_vv_u8m4_m(vbool2_t vm, vuint8m4_t vd, vuint8m4_t vs1,
                                 vuint8m4_t vs2, size_t vl) {
  return __riscv_vnmsac_vv_u8m4_m(vm, vd, vs1, vs2, vl);
}

vuint8m4_t test_vnmsac_vx_u8m4_m(vbool2_t vm, vuint8m4_t vd, uint8_t rs1,
                                 vuint8m4_t vs2, size_t vl) {
  return __riscv_vnmsac_vx_u8m4_m(vm, vd, rs1, vs2, vl);
}

vuint8m8_t test_vnmsac_vv_u8m8_m(vbool1_t vm, vuint8m8_t vd, vuint8m8_t vs1,
                                 vuint8m8_t vs2, size_t vl) {
  return __riscv_vnmsac_vv_u8m8_m(vm, vd, vs1, vs2, vl);
}

vuint8m8_t test_vnmsac_vx_u8m8_m(vbool1_t vm, vuint8m8_t vd, uint8_t rs1,
                                 vuint8m8_t vs2, size_t vl) {
  return __riscv_vnmsac_vx_u8m8_m(vm, vd, rs1, vs2, vl);
}

vuint16mf4_t test_vnmsac_vv_u16mf4_m(vbool64_t vm, vuint16mf4_t vd,
                                     vuint16mf4_t vs1, vuint16mf4_t vs2,
                                     size_t vl) {
  return __riscv_vnmsac_vv_u16mf4_m(vm, vd, vs1, vs2, vl);
}

vuint16mf4_t test_vnmsac_vx_u16mf4_m(vbool64_t vm, vuint16mf4_t vd,
                                     uint16_t rs1, vuint16mf4_t vs2,
                                     size_t vl) {
  return __riscv_vnmsac_vx_u16mf4_m(vm, vd, rs1, vs2, vl);
}

vuint16mf2_t test_vnmsac_vv_u16mf2_m(vbool32_t vm, vuint16mf2_t vd,
                                     vuint16mf2_t vs1, vuint16mf2_t vs2,
                                     size_t vl) {
  return __riscv_vnmsac_vv_u16mf2_m(vm, vd, vs1, vs2, vl);
}

vuint16mf2_t test_vnmsac_vx_u16mf2_m(vbool32_t vm, vuint16mf2_t vd,
                                     uint16_t rs1, vuint16mf2_t vs2,
                                     size_t vl) {
  return __riscv_vnmsac_vx_u16mf2_m(vm, vd, rs1, vs2, vl);
}

vuint16m1_t test_vnmsac_vv_u16m1_m(vbool16_t vm, vuint16m1_t vd,
                                   vuint16m1_t vs1, vuint16m1_t vs2,
                                   size_t vl) {
  return __riscv_vnmsac_vv_u16m1_m(vm, vd, vs1, vs2, vl);
}

vuint16m1_t test_vnmsac_vx_u16m1_m(vbool16_t vm, vuint16m1_t vd, uint16_t rs1,
                                   vuint16m1_t vs2, size_t vl) {
  return __riscv_vnmsac_vx_u16m1_m(vm, vd, rs1, vs2, vl);
}

vuint16m2_t test_vnmsac_vv_u16m2_m(vbool8_t vm, vuint16m2_t vd, vuint16m2_t vs1,
                                   vuint16m2_t vs2, size_t vl) {
  return __riscv_vnmsac_vv_u16m2_m(vm, vd, vs1, vs2, vl);
}

vuint16m2_t test_vnmsac_vx_u16m2_m(vbool8_t vm, vuint16m2_t vd, uint16_t rs1,
                                   vuint16m2_t vs2, size_t vl) {
  return __riscv_vnmsac_vx_u16m2_m(vm, vd, rs1, vs2, vl);
}

vuint16m4_t test_vnmsac_vv_u16m4_m(vbool4_t vm, vuint16m4_t vd, vuint16m4_t vs1,
                                   vuint16m4_t vs2, size_t vl) {
  return __riscv_vnmsac_vv_u16m4_m(vm, vd, vs1, vs2, vl);
}

vuint16m4_t test_vnmsac_vx_u16m4_m(vbool4_t vm, vuint16m4_t vd, uint16_t rs1,
                                   vuint16m4_t vs2, size_t vl) {
  return __riscv_vnmsac_vx_u16m4_m(vm, vd, rs1, vs2, vl);
}

vuint16m8_t test_vnmsac_vv_u16m8_m(vbool2_t vm, vuint16m8_t vd, vuint16m8_t vs1,
                                   vuint16m8_t vs2, size_t vl) {
  return __riscv_vnmsac_vv_u16m8_m(vm, vd, vs1, vs2, vl);
}

vuint16m8_t test_vnmsac_vx_u16m8_m(vbool2_t vm, vuint16m8_t vd, uint16_t rs1,
                                   vuint16m8_t vs2, size_t vl) {
  return __riscv_vnmsac_vx_u16m8_m(vm, vd, rs1, vs2, vl);
}

vuint32mf2_t test_vnmsac_vv_u32mf2_m(vbool64_t vm, vuint32mf2_t vd,
                                     vuint32mf2_t vs1, vuint32mf2_t vs2,
                                     size_t vl) {
  return __riscv_vnmsac_vv_u32mf2_m(vm, vd, vs1, vs2, vl);
}

vuint32mf2_t test_vnmsac_vx_u32mf2_m(vbool64_t vm, vuint32mf2_t vd,
                                     uint32_t rs1, vuint32mf2_t vs2,
                                     size_t vl) {
  return __riscv_vnmsac_vx_u32mf2_m(vm, vd, rs1, vs2, vl);
}

vuint32m1_t test_vnmsac_vv_u32m1_m(vbool32_t vm, vuint32m1_t vd,
                                   vuint32m1_t vs1, vuint32m1_t vs2,
                                   size_t vl) {
  return __riscv_vnmsac_vv_u32m1_m(vm, vd, vs1, vs2, vl);
}

vuint32m1_t test_vnmsac_vx_u32m1_m(vbool32_t vm, vuint32m1_t vd, uint32_t rs1,
                                   vuint32m1_t vs2, size_t vl) {
  return __riscv_vnmsac_vx_u32m1_m(vm, vd, rs1, vs2, vl);
}

vuint32m2_t test_vnmsac_vv_u32m2_m(vbool16_t vm, vuint32m2_t vd,
                                   vuint32m2_t vs1, vuint32m2_t vs2,
                                   size_t vl) {
  return __riscv_vnmsac_vv_u32m2_m(vm, vd, vs1, vs2, vl);
}

vuint32m2_t test_vnmsac_vx_u32m2_m(vbool16_t vm, vuint32m2_t vd, uint32_t rs1,
                                   vuint32m2_t vs2, size_t vl) {
  return __riscv_vnmsac_vx_u32m2_m(vm, vd, rs1, vs2, vl);
}

vuint32m4_t test_vnmsac_vv_u32m4_m(vbool8_t vm, vuint32m4_t vd, vuint32m4_t vs1,
                                   vuint32m4_t vs2, size_t vl) {
  return __riscv_vnmsac_vv_u32m4_m(vm, vd, vs1, vs2, vl);
}

vuint32m4_t test_vnmsac_vx_u32m4_m(vbool8_t vm, vuint32m4_t vd, uint32_t rs1,
                                   vuint32m4_t vs2, size_t vl) {
  return __riscv_vnmsac_vx_u32m4_m(vm, vd, rs1, vs2, vl);
}

vuint32m8_t test_vnmsac_vv_u32m8_m(vbool4_t vm, vuint32m8_t vd, vuint32m8_t vs1,
                                   vuint32m8_t vs2, size_t vl) {
  return __riscv_vnmsac_vv_u32m8_m(vm, vd, vs1, vs2, vl);
}

vuint32m8_t test_vnmsac_vx_u32m8_m(vbool4_t vm, vuint32m8_t vd, uint32_t rs1,
                                   vuint32m8_t vs2, size_t vl) {
  return __riscv_vnmsac_vx_u32m8_m(vm, vd, rs1, vs2, vl);
}

vuint64m1_t test_vnmsac_vv_u64m1_m(vbool64_t vm, vuint64m1_t vd,
                                   vuint64m1_t vs1, vuint64m1_t vs2,
                                   size_t vl) {
  return __riscv_vnmsac_vv_u64m1_m(vm, vd, vs1, vs2, vl);
}

vuint64m1_t test_vnmsac_vx_u64m1_m(vbool64_t vm, vuint64m1_t vd, uint64_t rs1,
                                   vuint64m1_t vs2, size_t vl) {
  return __riscv_vnmsac_vx_u64m1_m(vm, vd, rs1, vs2, vl);
}

vuint64m2_t test_vnmsac_vv_u64m2_m(vbool32_t vm, vuint64m2_t vd,
                                   vuint64m2_t vs1, vuint64m2_t vs2,
                                   size_t vl) {
  return __riscv_vnmsac_vv_u64m2_m(vm, vd, vs1, vs2, vl);
}

vuint64m2_t test_vnmsac_vx_u64m2_m(vbool32_t vm, vuint64m2_t vd, uint64_t rs1,
                                   vuint64m2_t vs2, size_t vl) {
  return __riscv_vnmsac_vx_u64m2_m(vm, vd, rs1, vs2, vl);
}

vuint64m4_t test_vnmsac_vv_u64m4_m(vbool16_t vm, vuint64m4_t vd,
                                   vuint64m4_t vs1, vuint64m4_t vs2,
                                   size_t vl) {
  return __riscv_vnmsac_vv_u64m4_m(vm, vd, vs1, vs2, vl);
}

vuint64m4_t test_vnmsac_vx_u64m4_m(vbool16_t vm, vuint64m4_t vd, uint64_t rs1,
                                   vuint64m4_t vs2, size_t vl) {
  return __riscv_vnmsac_vx_u64m4_m(vm, vd, rs1, vs2, vl);
}

vuint64m8_t test_vnmsac_vv_u64m8_m(vbool8_t vm, vuint64m8_t vd, vuint64m8_t vs1,
                                   vuint64m8_t vs2, size_t vl) {
  return __riscv_vnmsac_vv_u64m8_m(vm, vd, vs1, vs2, vl);
}

vuint64m8_t test_vnmsac_vx_u64m8_m(vbool8_t vm, vuint64m8_t vd, uint64_t rs1,
                                   vuint64m8_t vs2, size_t vl) {
  return __riscv_vnmsac_vx_u64m8_m(vm, vd, rs1, vs2, vl);
}
