// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vint8mf8_t test_vmv_v_v_i8mf8_tu(vint8mf8_t vd, vint8mf8_t vs1, size_t vl) {
  return __riscv_vmv_v_v_i8mf8_tu(vd, vs1, vl);
}

vint8mf8_t test_vmv_v_x_i8mf8_tu(vint8mf8_t vd, int8_t rs1, size_t vl) {
  return __riscv_vmv_v_x_i8mf8_tu(vd, rs1, vl);
}

vint8mf4_t test_vmv_v_v_i8mf4_tu(vint8mf4_t vd, vint8mf4_t vs1, size_t vl) {
  return __riscv_vmv_v_v_i8mf4_tu(vd, vs1, vl);
}

vint8mf4_t test_vmv_v_x_i8mf4_tu(vint8mf4_t vd, int8_t rs1, size_t vl) {
  return __riscv_vmv_v_x_i8mf4_tu(vd, rs1, vl);
}

vint8mf2_t test_vmv_v_v_i8mf2_tu(vint8mf2_t vd, vint8mf2_t vs1, size_t vl) {
  return __riscv_vmv_v_v_i8mf2_tu(vd, vs1, vl);
}

vint8mf2_t test_vmv_v_x_i8mf2_tu(vint8mf2_t vd, int8_t rs1, size_t vl) {
  return __riscv_vmv_v_x_i8mf2_tu(vd, rs1, vl);
}

vint8m1_t test_vmv_v_v_i8m1_tu(vint8m1_t vd, vint8m1_t vs1, size_t vl) {
  return __riscv_vmv_v_v_i8m1_tu(vd, vs1, vl);
}

vint8m1_t test_vmv_v_x_i8m1_tu(vint8m1_t vd, int8_t rs1, size_t vl) {
  return __riscv_vmv_v_x_i8m1_tu(vd, rs1, vl);
}

vint8m2_t test_vmv_v_v_i8m2_tu(vint8m2_t vd, vint8m2_t vs1, size_t vl) {
  return __riscv_vmv_v_v_i8m2_tu(vd, vs1, vl);
}

vint8m2_t test_vmv_v_x_i8m2_tu(vint8m2_t vd, int8_t rs1, size_t vl) {
  return __riscv_vmv_v_x_i8m2_tu(vd, rs1, vl);
}

vint8m4_t test_vmv_v_v_i8m4_tu(vint8m4_t vd, vint8m4_t vs1, size_t vl) {
  return __riscv_vmv_v_v_i8m4_tu(vd, vs1, vl);
}

vint8m4_t test_vmv_v_x_i8m4_tu(vint8m4_t vd, int8_t rs1, size_t vl) {
  return __riscv_vmv_v_x_i8m4_tu(vd, rs1, vl);
}

vint8m8_t test_vmv_v_v_i8m8_tu(vint8m8_t vd, vint8m8_t vs1, size_t vl) {
  return __riscv_vmv_v_v_i8m8_tu(vd, vs1, vl);
}

vint8m8_t test_vmv_v_x_i8m8_tu(vint8m8_t vd, int8_t rs1, size_t vl) {
  return __riscv_vmv_v_x_i8m8_tu(vd, rs1, vl);
}

vint16mf4_t test_vmv_v_v_i16mf4_tu(vint16mf4_t vd, vint16mf4_t vs1, size_t vl) {
  return __riscv_vmv_v_v_i16mf4_tu(vd, vs1, vl);
}

vint16mf4_t test_vmv_v_x_i16mf4_tu(vint16mf4_t vd, int16_t rs1, size_t vl) {
  return __riscv_vmv_v_x_i16mf4_tu(vd, rs1, vl);
}

vint16mf2_t test_vmv_v_v_i16mf2_tu(vint16mf2_t vd, vint16mf2_t vs1, size_t vl) {
  return __riscv_vmv_v_v_i16mf2_tu(vd, vs1, vl);
}

vint16mf2_t test_vmv_v_x_i16mf2_tu(vint16mf2_t vd, int16_t rs1, size_t vl) {
  return __riscv_vmv_v_x_i16mf2_tu(vd, rs1, vl);
}

vint16m1_t test_vmv_v_v_i16m1_tu(vint16m1_t vd, vint16m1_t vs1, size_t vl) {
  return __riscv_vmv_v_v_i16m1_tu(vd, vs1, vl);
}

vint16m1_t test_vmv_v_x_i16m1_tu(vint16m1_t vd, int16_t rs1, size_t vl) {
  return __riscv_vmv_v_x_i16m1_tu(vd, rs1, vl);
}

vint16m2_t test_vmv_v_v_i16m2_tu(vint16m2_t vd, vint16m2_t vs1, size_t vl) {
  return __riscv_vmv_v_v_i16m2_tu(vd, vs1, vl);
}

vint16m2_t test_vmv_v_x_i16m2_tu(vint16m2_t vd, int16_t rs1, size_t vl) {
  return __riscv_vmv_v_x_i16m2_tu(vd, rs1, vl);
}

vint16m4_t test_vmv_v_v_i16m4_tu(vint16m4_t vd, vint16m4_t vs1, size_t vl) {
  return __riscv_vmv_v_v_i16m4_tu(vd, vs1, vl);
}

vint16m4_t test_vmv_v_x_i16m4_tu(vint16m4_t vd, int16_t rs1, size_t vl) {
  return __riscv_vmv_v_x_i16m4_tu(vd, rs1, vl);
}

vint16m8_t test_vmv_v_v_i16m8_tu(vint16m8_t vd, vint16m8_t vs1, size_t vl) {
  return __riscv_vmv_v_v_i16m8_tu(vd, vs1, vl);
}

vint16m8_t test_vmv_v_x_i16m8_tu(vint16m8_t vd, int16_t rs1, size_t vl) {
  return __riscv_vmv_v_x_i16m8_tu(vd, rs1, vl);
}

vint32mf2_t test_vmv_v_v_i32mf2_tu(vint32mf2_t vd, vint32mf2_t vs1, size_t vl) {
  return __riscv_vmv_v_v_i32mf2_tu(vd, vs1, vl);
}

vint32mf2_t test_vmv_v_x_i32mf2_tu(vint32mf2_t vd, int32_t rs1, size_t vl) {
  return __riscv_vmv_v_x_i32mf2_tu(vd, rs1, vl);
}

vint32m1_t test_vmv_v_v_i32m1_tu(vint32m1_t vd, vint32m1_t vs1, size_t vl) {
  return __riscv_vmv_v_v_i32m1_tu(vd, vs1, vl);
}

vint32m1_t test_vmv_v_x_i32m1_tu(vint32m1_t vd, int32_t rs1, size_t vl) {
  return __riscv_vmv_v_x_i32m1_tu(vd, rs1, vl);
}

vint32m2_t test_vmv_v_v_i32m2_tu(vint32m2_t vd, vint32m2_t vs1, size_t vl) {
  return __riscv_vmv_v_v_i32m2_tu(vd, vs1, vl);
}

vint32m2_t test_vmv_v_x_i32m2_tu(vint32m2_t vd, int32_t rs1, size_t vl) {
  return __riscv_vmv_v_x_i32m2_tu(vd, rs1, vl);
}

vint32m4_t test_vmv_v_v_i32m4_tu(vint32m4_t vd, vint32m4_t vs1, size_t vl) {
  return __riscv_vmv_v_v_i32m4_tu(vd, vs1, vl);
}

vint32m4_t test_vmv_v_x_i32m4_tu(vint32m4_t vd, int32_t rs1, size_t vl) {
  return __riscv_vmv_v_x_i32m4_tu(vd, rs1, vl);
}

vint32m8_t test_vmv_v_v_i32m8_tu(vint32m8_t vd, vint32m8_t vs1, size_t vl) {
  return __riscv_vmv_v_v_i32m8_tu(vd, vs1, vl);
}

vint32m8_t test_vmv_v_x_i32m8_tu(vint32m8_t vd, int32_t rs1, size_t vl) {
  return __riscv_vmv_v_x_i32m8_tu(vd, rs1, vl);
}

vint64m1_t test_vmv_v_v_i64m1_tu(vint64m1_t vd, vint64m1_t vs1, size_t vl) {
  return __riscv_vmv_v_v_i64m1_tu(vd, vs1, vl);
}

vint64m1_t test_vmv_v_x_i64m1_tu(vint64m1_t vd, int64_t rs1, size_t vl) {
  return __riscv_vmv_v_x_i64m1_tu(vd, rs1, vl);
}

vint64m2_t test_vmv_v_v_i64m2_tu(vint64m2_t vd, vint64m2_t vs1, size_t vl) {
  return __riscv_vmv_v_v_i64m2_tu(vd, vs1, vl);
}

vint64m2_t test_vmv_v_x_i64m2_tu(vint64m2_t vd, int64_t rs1, size_t vl) {
  return __riscv_vmv_v_x_i64m2_tu(vd, rs1, vl);
}

vint64m4_t test_vmv_v_v_i64m4_tu(vint64m4_t vd, vint64m4_t vs1, size_t vl) {
  return __riscv_vmv_v_v_i64m4_tu(vd, vs1, vl);
}

vint64m4_t test_vmv_v_x_i64m4_tu(vint64m4_t vd, int64_t rs1, size_t vl) {
  return __riscv_vmv_v_x_i64m4_tu(vd, rs1, vl);
}

vint64m8_t test_vmv_v_v_i64m8_tu(vint64m8_t vd, vint64m8_t vs1, size_t vl) {
  return __riscv_vmv_v_v_i64m8_tu(vd, vs1, vl);
}

vint64m8_t test_vmv_v_x_i64m8_tu(vint64m8_t vd, int64_t rs1, size_t vl) {
  return __riscv_vmv_v_x_i64m8_tu(vd, rs1, vl);
}

vuint8mf8_t test_vmv_v_v_u8mf8_tu(vuint8mf8_t vd, vuint8mf8_t vs1, size_t vl) {
  return __riscv_vmv_v_v_u8mf8_tu(vd, vs1, vl);
}

vuint8mf8_t test_vmv_v_x_u8mf8_tu(vuint8mf8_t vd, uint8_t rs1, size_t vl) {
  return __riscv_vmv_v_x_u8mf8_tu(vd, rs1, vl);
}

vuint8mf4_t test_vmv_v_v_u8mf4_tu(vuint8mf4_t vd, vuint8mf4_t vs1, size_t vl) {
  return __riscv_vmv_v_v_u8mf4_tu(vd, vs1, vl);
}

vuint8mf4_t test_vmv_v_x_u8mf4_tu(vuint8mf4_t vd, uint8_t rs1, size_t vl) {
  return __riscv_vmv_v_x_u8mf4_tu(vd, rs1, vl);
}

vuint8mf2_t test_vmv_v_v_u8mf2_tu(vuint8mf2_t vd, vuint8mf2_t vs1, size_t vl) {
  return __riscv_vmv_v_v_u8mf2_tu(vd, vs1, vl);
}

vuint8mf2_t test_vmv_v_x_u8mf2_tu(vuint8mf2_t vd, uint8_t rs1, size_t vl) {
  return __riscv_vmv_v_x_u8mf2_tu(vd, rs1, vl);
}

vuint8m1_t test_vmv_v_v_u8m1_tu(vuint8m1_t vd, vuint8m1_t vs1, size_t vl) {
  return __riscv_vmv_v_v_u8m1_tu(vd, vs1, vl);
}

vuint8m1_t test_vmv_v_x_u8m1_tu(vuint8m1_t vd, uint8_t rs1, size_t vl) {
  return __riscv_vmv_v_x_u8m1_tu(vd, rs1, vl);
}

vuint8m2_t test_vmv_v_v_u8m2_tu(vuint8m2_t vd, vuint8m2_t vs1, size_t vl) {
  return __riscv_vmv_v_v_u8m2_tu(vd, vs1, vl);
}

vuint8m2_t test_vmv_v_x_u8m2_tu(vuint8m2_t vd, uint8_t rs1, size_t vl) {
  return __riscv_vmv_v_x_u8m2_tu(vd, rs1, vl);
}

vuint8m4_t test_vmv_v_v_u8m4_tu(vuint8m4_t vd, vuint8m4_t vs1, size_t vl) {
  return __riscv_vmv_v_v_u8m4_tu(vd, vs1, vl);
}

vuint8m4_t test_vmv_v_x_u8m4_tu(vuint8m4_t vd, uint8_t rs1, size_t vl) {
  return __riscv_vmv_v_x_u8m4_tu(vd, rs1, vl);
}

vuint8m8_t test_vmv_v_v_u8m8_tu(vuint8m8_t vd, vuint8m8_t vs1, size_t vl) {
  return __riscv_vmv_v_v_u8m8_tu(vd, vs1, vl);
}

vuint8m8_t test_vmv_v_x_u8m8_tu(vuint8m8_t vd, uint8_t rs1, size_t vl) {
  return __riscv_vmv_v_x_u8m8_tu(vd, rs1, vl);
}

vuint16mf4_t test_vmv_v_v_u16mf4_tu(vuint16mf4_t vd, vuint16mf4_t vs1,
                                    size_t vl) {
  return __riscv_vmv_v_v_u16mf4_tu(vd, vs1, vl);
}

vuint16mf4_t test_vmv_v_x_u16mf4_tu(vuint16mf4_t vd, uint16_t rs1, size_t vl) {
  return __riscv_vmv_v_x_u16mf4_tu(vd, rs1, vl);
}

vuint16mf2_t test_vmv_v_v_u16mf2_tu(vuint16mf2_t vd, vuint16mf2_t vs1,
                                    size_t vl) {
  return __riscv_vmv_v_v_u16mf2_tu(vd, vs1, vl);
}

vuint16mf2_t test_vmv_v_x_u16mf2_tu(vuint16mf2_t vd, uint16_t rs1, size_t vl) {
  return __riscv_vmv_v_x_u16mf2_tu(vd, rs1, vl);
}

vuint16m1_t test_vmv_v_v_u16m1_tu(vuint16m1_t vd, vuint16m1_t vs1, size_t vl) {
  return __riscv_vmv_v_v_u16m1_tu(vd, vs1, vl);
}

vuint16m1_t test_vmv_v_x_u16m1_tu(vuint16m1_t vd, uint16_t rs1, size_t vl) {
  return __riscv_vmv_v_x_u16m1_tu(vd, rs1, vl);
}

vuint16m2_t test_vmv_v_v_u16m2_tu(vuint16m2_t vd, vuint16m2_t vs1, size_t vl) {
  return __riscv_vmv_v_v_u16m2_tu(vd, vs1, vl);
}

vuint16m2_t test_vmv_v_x_u16m2_tu(vuint16m2_t vd, uint16_t rs1, size_t vl) {
  return __riscv_vmv_v_x_u16m2_tu(vd, rs1, vl);
}

vuint16m4_t test_vmv_v_v_u16m4_tu(vuint16m4_t vd, vuint16m4_t vs1, size_t vl) {
  return __riscv_vmv_v_v_u16m4_tu(vd, vs1, vl);
}

vuint16m4_t test_vmv_v_x_u16m4_tu(vuint16m4_t vd, uint16_t rs1, size_t vl) {
  return __riscv_vmv_v_x_u16m4_tu(vd, rs1, vl);
}

vuint16m8_t test_vmv_v_v_u16m8_tu(vuint16m8_t vd, vuint16m8_t vs1, size_t vl) {
  return __riscv_vmv_v_v_u16m8_tu(vd, vs1, vl);
}

vuint16m8_t test_vmv_v_x_u16m8_tu(vuint16m8_t vd, uint16_t rs1, size_t vl) {
  return __riscv_vmv_v_x_u16m8_tu(vd, rs1, vl);
}

vuint32mf2_t test_vmv_v_v_u32mf2_tu(vuint32mf2_t vd, vuint32mf2_t vs1,
                                    size_t vl) {
  return __riscv_vmv_v_v_u32mf2_tu(vd, vs1, vl);
}

vuint32mf2_t test_vmv_v_x_u32mf2_tu(vuint32mf2_t vd, uint32_t rs1, size_t vl) {
  return __riscv_vmv_v_x_u32mf2_tu(vd, rs1, vl);
}

vuint32m1_t test_vmv_v_v_u32m1_tu(vuint32m1_t vd, vuint32m1_t vs1, size_t vl) {
  return __riscv_vmv_v_v_u32m1_tu(vd, vs1, vl);
}

vuint32m1_t test_vmv_v_x_u32m1_tu(vuint32m1_t vd, uint32_t rs1, size_t vl) {
  return __riscv_vmv_v_x_u32m1_tu(vd, rs1, vl);
}

vuint32m2_t test_vmv_v_v_u32m2_tu(vuint32m2_t vd, vuint32m2_t vs1, size_t vl) {
  return __riscv_vmv_v_v_u32m2_tu(vd, vs1, vl);
}

vuint32m2_t test_vmv_v_x_u32m2_tu(vuint32m2_t vd, uint32_t rs1, size_t vl) {
  return __riscv_vmv_v_x_u32m2_tu(vd, rs1, vl);
}

vuint32m4_t test_vmv_v_v_u32m4_tu(vuint32m4_t vd, vuint32m4_t vs1, size_t vl) {
  return __riscv_vmv_v_v_u32m4_tu(vd, vs1, vl);
}

vuint32m4_t test_vmv_v_x_u32m4_tu(vuint32m4_t vd, uint32_t rs1, size_t vl) {
  return __riscv_vmv_v_x_u32m4_tu(vd, rs1, vl);
}

vuint32m8_t test_vmv_v_v_u32m8_tu(vuint32m8_t vd, vuint32m8_t vs1, size_t vl) {
  return __riscv_vmv_v_v_u32m8_tu(vd, vs1, vl);
}

vuint32m8_t test_vmv_v_x_u32m8_tu(vuint32m8_t vd, uint32_t rs1, size_t vl) {
  return __riscv_vmv_v_x_u32m8_tu(vd, rs1, vl);
}

vuint64m1_t test_vmv_v_v_u64m1_tu(vuint64m1_t vd, vuint64m1_t vs1, size_t vl) {
  return __riscv_vmv_v_v_u64m1_tu(vd, vs1, vl);
}

vuint64m1_t test_vmv_v_x_u64m1_tu(vuint64m1_t vd, uint64_t rs1, size_t vl) {
  return __riscv_vmv_v_x_u64m1_tu(vd, rs1, vl);
}

vuint64m2_t test_vmv_v_v_u64m2_tu(vuint64m2_t vd, vuint64m2_t vs1, size_t vl) {
  return __riscv_vmv_v_v_u64m2_tu(vd, vs1, vl);
}

vuint64m2_t test_vmv_v_x_u64m2_tu(vuint64m2_t vd, uint64_t rs1, size_t vl) {
  return __riscv_vmv_v_x_u64m2_tu(vd, rs1, vl);
}

vuint64m4_t test_vmv_v_v_u64m4_tu(vuint64m4_t vd, vuint64m4_t vs1, size_t vl) {
  return __riscv_vmv_v_v_u64m4_tu(vd, vs1, vl);
}

vuint64m4_t test_vmv_v_x_u64m4_tu(vuint64m4_t vd, uint64_t rs1, size_t vl) {
  return __riscv_vmv_v_x_u64m4_tu(vd, rs1, vl);
}

vuint64m8_t test_vmv_v_v_u64m8_tu(vuint64m8_t vd, vuint64m8_t vs1, size_t vl) {
  return __riscv_vmv_v_v_u64m8_tu(vd, vs1, vl);
}

vuint64m8_t test_vmv_v_x_u64m8_tu(vuint64m8_t vd, uint64_t rs1, size_t vl) {
  return __riscv_vmv_v_x_u64m8_tu(vd, rs1, vl);
}

vfloat16mf4_t test_vmv_v_v_f16mf4_tu(vfloat16mf4_t vd, vfloat16mf4_t vs1,
                                     size_t vl) {
  return __riscv_vmv_v_v_f16mf4_tu(vd, vs1, vl);
}

vfloat16mf2_t test_vmv_v_v_f16mf2_tu(vfloat16mf2_t vd, vfloat16mf2_t vs1,
                                     size_t vl) {
  return __riscv_vmv_v_v_f16mf2_tu(vd, vs1, vl);
}

vfloat16m1_t test_vmv_v_v_f16m1_tu(vfloat16m1_t vd, vfloat16m1_t vs1,
                                   size_t vl) {
  return __riscv_vmv_v_v_f16m1_tu(vd, vs1, vl);
}

vfloat16m2_t test_vmv_v_v_f16m2_tu(vfloat16m2_t vd, vfloat16m2_t vs1,
                                   size_t vl) {
  return __riscv_vmv_v_v_f16m2_tu(vd, vs1, vl);
}

vfloat16m4_t test_vmv_v_v_f16m4_tu(vfloat16m4_t vd, vfloat16m4_t vs1,
                                   size_t vl) {
  return __riscv_vmv_v_v_f16m4_tu(vd, vs1, vl);
}

vfloat16m8_t test_vmv_v_v_f16m8_tu(vfloat16m8_t vd, vfloat16m8_t vs1,
                                   size_t vl) {
  return __riscv_vmv_v_v_f16m8_tu(vd, vs1, vl);
}

vfloat32mf2_t test_vmv_v_v_f32mf2_tu(vfloat32mf2_t vd, vfloat32mf2_t vs1,
                                     size_t vl) {
  return __riscv_vmv_v_v_f32mf2_tu(vd, vs1, vl);
}

vfloat32m1_t test_vmv_v_v_f32m1_tu(vfloat32m1_t vd, vfloat32m1_t vs1,
                                   size_t vl) {
  return __riscv_vmv_v_v_f32m1_tu(vd, vs1, vl);
}

vfloat32m2_t test_vmv_v_v_f32m2_tu(vfloat32m2_t vd, vfloat32m2_t vs1,
                                   size_t vl) {
  return __riscv_vmv_v_v_f32m2_tu(vd, vs1, vl);
}

vfloat32m4_t test_vmv_v_v_f32m4_tu(vfloat32m4_t vd, vfloat32m4_t vs1,
                                   size_t vl) {
  return __riscv_vmv_v_v_f32m4_tu(vd, vs1, vl);
}

vfloat32m8_t test_vmv_v_v_f32m8_tu(vfloat32m8_t vd, vfloat32m8_t vs1,
                                   size_t vl) {
  return __riscv_vmv_v_v_f32m8_tu(vd, vs1, vl);
}

vfloat64m1_t test_vmv_v_v_f64m1_tu(vfloat64m1_t vd, vfloat64m1_t vs1,
                                   size_t vl) {
  return __riscv_vmv_v_v_f64m1_tu(vd, vs1, vl);
}

vfloat64m2_t test_vmv_v_v_f64m2_tu(vfloat64m2_t vd, vfloat64m2_t vs1,
                                   size_t vl) {
  return __riscv_vmv_v_v_f64m2_tu(vd, vs1, vl);
}

vfloat64m4_t test_vmv_v_v_f64m4_tu(vfloat64m4_t vd, vfloat64m4_t vs1,
                                   size_t vl) {
  return __riscv_vmv_v_v_f64m4_tu(vd, vs1, vl);
}

vfloat64m8_t test_vmv_v_v_f64m8_tu(vfloat64m8_t vd, vfloat64m8_t vs1,
                                   size_t vl) {
  return __riscv_vmv_v_v_f64m8_tu(vd, vs1, vl);
}

vint8mf8_t test_vmv_s_x_i8mf8_tu(vint8mf8_t vd, int8_t rs1, size_t vl) {
  return __riscv_vmv_s_x_i8mf8_tu(vd, rs1, vl);
}

vint8mf4_t test_vmv_s_x_i8mf4_tu(vint8mf4_t vd, int8_t rs1, size_t vl) {
  return __riscv_vmv_s_x_i8mf4_tu(vd, rs1, vl);
}

vint8mf2_t test_vmv_s_x_i8mf2_tu(vint8mf2_t vd, int8_t rs1, size_t vl) {
  return __riscv_vmv_s_x_i8mf2_tu(vd, rs1, vl);
}

vint8m1_t test_vmv_s_x_i8m1_tu(vint8m1_t vd, int8_t rs1, size_t vl) {
  return __riscv_vmv_s_x_i8m1_tu(vd, rs1, vl);
}

vint8m2_t test_vmv_s_x_i8m2_tu(vint8m2_t vd, int8_t rs1, size_t vl) {
  return __riscv_vmv_s_x_i8m2_tu(vd, rs1, vl);
}

vint8m4_t test_vmv_s_x_i8m4_tu(vint8m4_t vd, int8_t rs1, size_t vl) {
  return __riscv_vmv_s_x_i8m4_tu(vd, rs1, vl);
}

vint8m8_t test_vmv_s_x_i8m8_tu(vint8m8_t vd, int8_t rs1, size_t vl) {
  return __riscv_vmv_s_x_i8m8_tu(vd, rs1, vl);
}

vint16mf4_t test_vmv_s_x_i16mf4_tu(vint16mf4_t vd, int16_t rs1, size_t vl) {
  return __riscv_vmv_s_x_i16mf4_tu(vd, rs1, vl);
}

vint16mf2_t test_vmv_s_x_i16mf2_tu(vint16mf2_t vd, int16_t rs1, size_t vl) {
  return __riscv_vmv_s_x_i16mf2_tu(vd, rs1, vl);
}

vint16m1_t test_vmv_s_x_i16m1_tu(vint16m1_t vd, int16_t rs1, size_t vl) {
  return __riscv_vmv_s_x_i16m1_tu(vd, rs1, vl);
}

vint16m2_t test_vmv_s_x_i16m2_tu(vint16m2_t vd, int16_t rs1, size_t vl) {
  return __riscv_vmv_s_x_i16m2_tu(vd, rs1, vl);
}

vint16m4_t test_vmv_s_x_i16m4_tu(vint16m4_t vd, int16_t rs1, size_t vl) {
  return __riscv_vmv_s_x_i16m4_tu(vd, rs1, vl);
}

vint16m8_t test_vmv_s_x_i16m8_tu(vint16m8_t vd, int16_t rs1, size_t vl) {
  return __riscv_vmv_s_x_i16m8_tu(vd, rs1, vl);
}

vint32mf2_t test_vmv_s_x_i32mf2_tu(vint32mf2_t vd, int32_t rs1, size_t vl) {
  return __riscv_vmv_s_x_i32mf2_tu(vd, rs1, vl);
}

vint32m1_t test_vmv_s_x_i32m1_tu(vint32m1_t vd, int32_t rs1, size_t vl) {
  return __riscv_vmv_s_x_i32m1_tu(vd, rs1, vl);
}

vint32m2_t test_vmv_s_x_i32m2_tu(vint32m2_t vd, int32_t rs1, size_t vl) {
  return __riscv_vmv_s_x_i32m2_tu(vd, rs1, vl);
}

vint32m4_t test_vmv_s_x_i32m4_tu(vint32m4_t vd, int32_t rs1, size_t vl) {
  return __riscv_vmv_s_x_i32m4_tu(vd, rs1, vl);
}

vint32m8_t test_vmv_s_x_i32m8_tu(vint32m8_t vd, int32_t rs1, size_t vl) {
  return __riscv_vmv_s_x_i32m8_tu(vd, rs1, vl);
}

vint64m1_t test_vmv_s_x_i64m1_tu(vint64m1_t vd, int64_t rs1, size_t vl) {
  return __riscv_vmv_s_x_i64m1_tu(vd, rs1, vl);
}

vint64m2_t test_vmv_s_x_i64m2_tu(vint64m2_t vd, int64_t rs1, size_t vl) {
  return __riscv_vmv_s_x_i64m2_tu(vd, rs1, vl);
}

vint64m4_t test_vmv_s_x_i64m4_tu(vint64m4_t vd, int64_t rs1, size_t vl) {
  return __riscv_vmv_s_x_i64m4_tu(vd, rs1, vl);
}

vint64m8_t test_vmv_s_x_i64m8_tu(vint64m8_t vd, int64_t rs1, size_t vl) {
  return __riscv_vmv_s_x_i64m8_tu(vd, rs1, vl);
}

vuint8mf8_t test_vmv_s_x_u8mf8_tu(vuint8mf8_t vd, uint8_t rs1, size_t vl) {
  return __riscv_vmv_s_x_u8mf8_tu(vd, rs1, vl);
}

vuint8mf4_t test_vmv_s_x_u8mf4_tu(vuint8mf4_t vd, uint8_t rs1, size_t vl) {
  return __riscv_vmv_s_x_u8mf4_tu(vd, rs1, vl);
}

vuint8mf2_t test_vmv_s_x_u8mf2_tu(vuint8mf2_t vd, uint8_t rs1, size_t vl) {
  return __riscv_vmv_s_x_u8mf2_tu(vd, rs1, vl);
}

vuint8m1_t test_vmv_s_x_u8m1_tu(vuint8m1_t vd, uint8_t rs1, size_t vl) {
  return __riscv_vmv_s_x_u8m1_tu(vd, rs1, vl);
}

vuint8m2_t test_vmv_s_x_u8m2_tu(vuint8m2_t vd, uint8_t rs1, size_t vl) {
  return __riscv_vmv_s_x_u8m2_tu(vd, rs1, vl);
}

vuint8m4_t test_vmv_s_x_u8m4_tu(vuint8m4_t vd, uint8_t rs1, size_t vl) {
  return __riscv_vmv_s_x_u8m4_tu(vd, rs1, vl);
}

vuint8m8_t test_vmv_s_x_u8m8_tu(vuint8m8_t vd, uint8_t rs1, size_t vl) {
  return __riscv_vmv_s_x_u8m8_tu(vd, rs1, vl);
}

vuint16mf4_t test_vmv_s_x_u16mf4_tu(vuint16mf4_t vd, uint16_t rs1, size_t vl) {
  return __riscv_vmv_s_x_u16mf4_tu(vd, rs1, vl);
}

vuint16mf2_t test_vmv_s_x_u16mf2_tu(vuint16mf2_t vd, uint16_t rs1, size_t vl) {
  return __riscv_vmv_s_x_u16mf2_tu(vd, rs1, vl);
}

vuint16m1_t test_vmv_s_x_u16m1_tu(vuint16m1_t vd, uint16_t rs1, size_t vl) {
  return __riscv_vmv_s_x_u16m1_tu(vd, rs1, vl);
}

vuint16m2_t test_vmv_s_x_u16m2_tu(vuint16m2_t vd, uint16_t rs1, size_t vl) {
  return __riscv_vmv_s_x_u16m2_tu(vd, rs1, vl);
}

vuint16m4_t test_vmv_s_x_u16m4_tu(vuint16m4_t vd, uint16_t rs1, size_t vl) {
  return __riscv_vmv_s_x_u16m4_tu(vd, rs1, vl);
}

vuint16m8_t test_vmv_s_x_u16m8_tu(vuint16m8_t vd, uint16_t rs1, size_t vl) {
  return __riscv_vmv_s_x_u16m8_tu(vd, rs1, vl);
}

vuint32mf2_t test_vmv_s_x_u32mf2_tu(vuint32mf2_t vd, uint32_t rs1, size_t vl) {
  return __riscv_vmv_s_x_u32mf2_tu(vd, rs1, vl);
}

vuint32m1_t test_vmv_s_x_u32m1_tu(vuint32m1_t vd, uint32_t rs1, size_t vl) {
  return __riscv_vmv_s_x_u32m1_tu(vd, rs1, vl);
}

vuint32m2_t test_vmv_s_x_u32m2_tu(vuint32m2_t vd, uint32_t rs1, size_t vl) {
  return __riscv_vmv_s_x_u32m2_tu(vd, rs1, vl);
}

vuint32m4_t test_vmv_s_x_u32m4_tu(vuint32m4_t vd, uint32_t rs1, size_t vl) {
  return __riscv_vmv_s_x_u32m4_tu(vd, rs1, vl);
}

vuint32m8_t test_vmv_s_x_u32m8_tu(vuint32m8_t vd, uint32_t rs1, size_t vl) {
  return __riscv_vmv_s_x_u32m8_tu(vd, rs1, vl);
}

vuint64m1_t test_vmv_s_x_u64m1_tu(vuint64m1_t vd, uint64_t rs1, size_t vl) {
  return __riscv_vmv_s_x_u64m1_tu(vd, rs1, vl);
}

vuint64m2_t test_vmv_s_x_u64m2_tu(vuint64m2_t vd, uint64_t rs1, size_t vl) {
  return __riscv_vmv_s_x_u64m2_tu(vd, rs1, vl);
}

vuint64m4_t test_vmv_s_x_u64m4_tu(vuint64m4_t vd, uint64_t rs1, size_t vl) {
  return __riscv_vmv_s_x_u64m4_tu(vd, rs1, vl);
}

vuint64m8_t test_vmv_s_x_u64m8_tu(vuint64m8_t vd, uint64_t rs1, size_t vl) {
  return __riscv_vmv_s_x_u64m8_tu(vd, rs1, vl);
}
