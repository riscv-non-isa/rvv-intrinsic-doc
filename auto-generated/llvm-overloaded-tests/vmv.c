// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +zvfh -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vint8mf8_t test_vmv_v_v_i8mf8(vint8mf8_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vint8mf4_t test_vmv_v_v_i8mf4(vint8mf4_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vint8mf2_t test_vmv_v_v_i8mf2(vint8mf2_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vint8m1_t test_vmv_v_v_i8m1(vint8m1_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vint8m2_t test_vmv_v_v_i8m2(vint8m2_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vint8m4_t test_vmv_v_v_i8m4(vint8m4_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vint8m8_t test_vmv_v_v_i8m8(vint8m8_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vint16mf4_t test_vmv_v_v_i16mf4(vint16mf4_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vint16mf2_t test_vmv_v_v_i16mf2(vint16mf2_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vint16m1_t test_vmv_v_v_i16m1(vint16m1_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vint16m2_t test_vmv_v_v_i16m2(vint16m2_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vint16m4_t test_vmv_v_v_i16m4(vint16m4_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vint16m8_t test_vmv_v_v_i16m8(vint16m8_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vint32mf2_t test_vmv_v_v_i32mf2(vint32mf2_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vint32m1_t test_vmv_v_v_i32m1(vint32m1_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vint32m2_t test_vmv_v_v_i32m2(vint32m2_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vint32m4_t test_vmv_v_v_i32m4(vint32m4_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vint32m8_t test_vmv_v_v_i32m8(vint32m8_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vint64m1_t test_vmv_v_v_i64m1(vint64m1_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vint64m2_t test_vmv_v_v_i64m2(vint64m2_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vint64m4_t test_vmv_v_v_i64m4(vint64m4_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vint64m8_t test_vmv_v_v_i64m8(vint64m8_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vuint8mf8_t test_vmv_v_v_u8mf8(vuint8mf8_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vuint8mf4_t test_vmv_v_v_u8mf4(vuint8mf4_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vuint8mf2_t test_vmv_v_v_u8mf2(vuint8mf2_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vuint8m1_t test_vmv_v_v_u8m1(vuint8m1_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vuint8m2_t test_vmv_v_v_u8m2(vuint8m2_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vuint8m4_t test_vmv_v_v_u8m4(vuint8m4_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vuint8m8_t test_vmv_v_v_u8m8(vuint8m8_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vuint16mf4_t test_vmv_v_v_u16mf4(vuint16mf4_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vuint16mf2_t test_vmv_v_v_u16mf2(vuint16mf2_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vuint16m1_t test_vmv_v_v_u16m1(vuint16m1_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vuint16m2_t test_vmv_v_v_u16m2(vuint16m2_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vuint16m4_t test_vmv_v_v_u16m4(vuint16m4_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vuint16m8_t test_vmv_v_v_u16m8(vuint16m8_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vuint32mf2_t test_vmv_v_v_u32mf2(vuint32mf2_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vuint32m1_t test_vmv_v_v_u32m1(vuint32m1_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vuint32m2_t test_vmv_v_v_u32m2(vuint32m2_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vuint32m4_t test_vmv_v_v_u32m4(vuint32m4_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vuint32m8_t test_vmv_v_v_u32m8(vuint32m8_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vuint64m1_t test_vmv_v_v_u64m1(vuint64m1_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vuint64m2_t test_vmv_v_v_u64m2(vuint64m2_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vuint64m4_t test_vmv_v_v_u64m4(vuint64m4_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vuint64m8_t test_vmv_v_v_u64m8(vuint64m8_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vfloat16mf4_t test_vmv_v_v_f16mf4(vfloat16mf4_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vfloat16mf2_t test_vmv_v_v_f16mf2(vfloat16mf2_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vfloat16m1_t test_vmv_v_v_f16m1(vfloat16m1_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vfloat16m2_t test_vmv_v_v_f16m2(vfloat16m2_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vfloat16m4_t test_vmv_v_v_f16m4(vfloat16m4_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vfloat16m8_t test_vmv_v_v_f16m8(vfloat16m8_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vfloat32mf2_t test_vmv_v_v_f32mf2(vfloat32mf2_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vfloat32m1_t test_vmv_v_v_f32m1(vfloat32m1_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vfloat32m2_t test_vmv_v_v_f32m2(vfloat32m2_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vfloat32m4_t test_vmv_v_v_f32m4(vfloat32m4_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vfloat32m8_t test_vmv_v_v_f32m8(vfloat32m8_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vfloat64m1_t test_vmv_v_v_f64m1(vfloat64m1_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vfloat64m2_t test_vmv_v_v_f64m2(vfloat64m2_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vfloat64m4_t test_vmv_v_v_f64m4(vfloat64m4_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vfloat64m8_t test_vmv_v_v_f64m8(vfloat64m8_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

int8_t test_vmv_x_s_i8mf8_i8(vint8mf8_t vs1) { return __riscv_vmv_x(vs1); }

int8_t test_vmv_x_s_i8mf4_i8(vint8mf4_t vs1) { return __riscv_vmv_x(vs1); }

int8_t test_vmv_x_s_i8mf2_i8(vint8mf2_t vs1) { return __riscv_vmv_x(vs1); }

int8_t test_vmv_x_s_i8m1_i8(vint8m1_t vs1) { return __riscv_vmv_x(vs1); }

int8_t test_vmv_x_s_i8m2_i8(vint8m2_t vs1) { return __riscv_vmv_x(vs1); }

int8_t test_vmv_x_s_i8m4_i8(vint8m4_t vs1) { return __riscv_vmv_x(vs1); }

int8_t test_vmv_x_s_i8m8_i8(vint8m8_t vs1) { return __riscv_vmv_x(vs1); }

int16_t test_vmv_x_s_i16mf4_i16(vint16mf4_t vs1) { return __riscv_vmv_x(vs1); }

int16_t test_vmv_x_s_i16mf2_i16(vint16mf2_t vs1) { return __riscv_vmv_x(vs1); }

int16_t test_vmv_x_s_i16m1_i16(vint16m1_t vs1) { return __riscv_vmv_x(vs1); }

int16_t test_vmv_x_s_i16m2_i16(vint16m2_t vs1) { return __riscv_vmv_x(vs1); }

int16_t test_vmv_x_s_i16m4_i16(vint16m4_t vs1) { return __riscv_vmv_x(vs1); }

int16_t test_vmv_x_s_i16m8_i16(vint16m8_t vs1) { return __riscv_vmv_x(vs1); }

int32_t test_vmv_x_s_i32mf2_i32(vint32mf2_t vs1) { return __riscv_vmv_x(vs1); }

int32_t test_vmv_x_s_i32m1_i32(vint32m1_t vs1) { return __riscv_vmv_x(vs1); }

int32_t test_vmv_x_s_i32m2_i32(vint32m2_t vs1) { return __riscv_vmv_x(vs1); }

int32_t test_vmv_x_s_i32m4_i32(vint32m4_t vs1) { return __riscv_vmv_x(vs1); }

int32_t test_vmv_x_s_i32m8_i32(vint32m8_t vs1) { return __riscv_vmv_x(vs1); }

int64_t test_vmv_x_s_i64m1_i64(vint64m1_t vs1) { return __riscv_vmv_x(vs1); }

int64_t test_vmv_x_s_i64m2_i64(vint64m2_t vs1) { return __riscv_vmv_x(vs1); }

int64_t test_vmv_x_s_i64m4_i64(vint64m4_t vs1) { return __riscv_vmv_x(vs1); }

int64_t test_vmv_x_s_i64m8_i64(vint64m8_t vs1) { return __riscv_vmv_x(vs1); }

uint8_t test_vmv_x_s_u8mf8_u8(vuint8mf8_t vs1) { return __riscv_vmv_x(vs1); }

uint8_t test_vmv_x_s_u8mf4_u8(vuint8mf4_t vs1) { return __riscv_vmv_x(vs1); }

uint8_t test_vmv_x_s_u8mf2_u8(vuint8mf2_t vs1) { return __riscv_vmv_x(vs1); }

uint8_t test_vmv_x_s_u8m1_u8(vuint8m1_t vs1) { return __riscv_vmv_x(vs1); }

uint8_t test_vmv_x_s_u8m2_u8(vuint8m2_t vs1) { return __riscv_vmv_x(vs1); }

uint8_t test_vmv_x_s_u8m4_u8(vuint8m4_t vs1) { return __riscv_vmv_x(vs1); }

uint8_t test_vmv_x_s_u8m8_u8(vuint8m8_t vs1) { return __riscv_vmv_x(vs1); }

uint16_t test_vmv_x_s_u16mf4_u16(vuint16mf4_t vs1) {
  return __riscv_vmv_x(vs1);
}

uint16_t test_vmv_x_s_u16mf2_u16(vuint16mf2_t vs1) {
  return __riscv_vmv_x(vs1);
}

uint16_t test_vmv_x_s_u16m1_u16(vuint16m1_t vs1) { return __riscv_vmv_x(vs1); }

uint16_t test_vmv_x_s_u16m2_u16(vuint16m2_t vs1) { return __riscv_vmv_x(vs1); }

uint16_t test_vmv_x_s_u16m4_u16(vuint16m4_t vs1) { return __riscv_vmv_x(vs1); }

uint16_t test_vmv_x_s_u16m8_u16(vuint16m8_t vs1) { return __riscv_vmv_x(vs1); }

uint32_t test_vmv_x_s_u32mf2_u32(vuint32mf2_t vs1) {
  return __riscv_vmv_x(vs1);
}

uint32_t test_vmv_x_s_u32m1_u32(vuint32m1_t vs1) { return __riscv_vmv_x(vs1); }

uint32_t test_vmv_x_s_u32m2_u32(vuint32m2_t vs1) { return __riscv_vmv_x(vs1); }

uint32_t test_vmv_x_s_u32m4_u32(vuint32m4_t vs1) { return __riscv_vmv_x(vs1); }

uint32_t test_vmv_x_s_u32m8_u32(vuint32m8_t vs1) { return __riscv_vmv_x(vs1); }

uint64_t test_vmv_x_s_u64m1_u64(vuint64m1_t vs1) { return __riscv_vmv_x(vs1); }

uint64_t test_vmv_x_s_u64m2_u64(vuint64m2_t vs1) { return __riscv_vmv_x(vs1); }

uint64_t test_vmv_x_s_u64m4_u64(vuint64m4_t vs1) { return __riscv_vmv_x(vs1); }

uint64_t test_vmv_x_s_u64m8_u64(vuint64m8_t vs1) { return __riscv_vmv_x(vs1); }
