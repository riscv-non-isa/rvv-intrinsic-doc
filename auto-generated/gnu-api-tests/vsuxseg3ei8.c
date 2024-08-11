/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

void test_vsuxseg3ei8_v_i8mf8x3(int8_t *rs1, vuint8mf8_t vs2, vint8mf8x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei8_v_i8mf8x3(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei8_v_i8mf4x3(int8_t *rs1, vuint8mf4_t vs2, vint8mf4x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei8_v_i8mf4x3(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei8_v_i8mf2x3(int8_t *rs1, vuint8mf2_t vs2, vint8mf2x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei8_v_i8mf2x3(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei8_v_i8m1x3(int8_t *rs1, vuint8m1_t vs2, vint8m1x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei8_v_i8m1x3(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei8_v_i8m2x3(int8_t *rs1, vuint8m2_t vs2, vint8m2x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei8_v_i8m2x3(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei8_v_i16mf4x3(int16_t *rs1, vuint8mf8_t vs2, vint16mf4x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei8_v_i16mf4x3(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei8_v_i16mf2x3(int16_t *rs1, vuint8mf4_t vs2, vint16mf2x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei8_v_i16mf2x3(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei8_v_i16m1x3(int16_t *rs1, vuint8mf2_t vs2, vint16m1x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei8_v_i16m1x3(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei8_v_i16m2x3(int16_t *rs1, vuint8m1_t vs2, vint16m2x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei8_v_i16m2x3(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei8_v_i32mf2x3(int32_t *rs1, vuint8mf8_t vs2, vint32mf2x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei8_v_i32mf2x3(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei8_v_i32m1x3(int32_t *rs1, vuint8mf4_t vs2, vint32m1x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei8_v_i32m1x3(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei8_v_i32m2x3(int32_t *rs1, vuint8mf2_t vs2, vint32m2x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei8_v_i32m2x3(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei8_v_i64m1x3(int64_t *rs1, vuint8mf8_t vs2, vint64m1x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei8_v_i64m1x3(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei8_v_i64m2x3(int64_t *rs1, vuint8mf4_t vs2, vint64m2x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei8_v_i64m2x3(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei8_v_u8mf8x3(uint8_t *rs1, vuint8mf8_t vs2, vuint8mf8x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei8_v_u8mf8x3(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei8_v_u8mf4x3(uint8_t *rs1, vuint8mf4_t vs2, vuint8mf4x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei8_v_u8mf4x3(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei8_v_u8mf2x3(uint8_t *rs1, vuint8mf2_t vs2, vuint8mf2x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei8_v_u8mf2x3(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei8_v_u8m1x3(uint8_t *rs1, vuint8m1_t vs2, vuint8m1x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei8_v_u8m1x3(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei8_v_u8m2x3(uint8_t *rs1, vuint8m2_t vs2, vuint8m2x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei8_v_u8m2x3(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei8_v_u16mf4x3(uint16_t *rs1, vuint8mf8_t vs2, vuint16mf4x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei8_v_u16mf4x3(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei8_v_u16mf2x3(uint16_t *rs1, vuint8mf4_t vs2, vuint16mf2x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei8_v_u16mf2x3(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei8_v_u16m1x3(uint16_t *rs1, vuint8mf2_t vs2, vuint16m1x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei8_v_u16m1x3(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei8_v_u16m2x3(uint16_t *rs1, vuint8m1_t vs2, vuint16m2x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei8_v_u16m2x3(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei8_v_u32mf2x3(uint32_t *rs1, vuint8mf8_t vs2, vuint32mf2x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei8_v_u32mf2x3(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei8_v_u32m1x3(uint32_t *rs1, vuint8mf4_t vs2, vuint32m1x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei8_v_u32m1x3(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei8_v_u32m2x3(uint32_t *rs1, vuint8mf2_t vs2, vuint32m2x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei8_v_u32m2x3(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei8_v_u64m1x3(uint64_t *rs1, vuint8mf8_t vs2, vuint64m1x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei8_v_u64m1x3(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei8_v_u64m2x3(uint64_t *rs1, vuint8mf4_t vs2, vuint64m2x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei8_v_u64m2x3(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei8_v_i8mf8x3_m(vbool64_t vm, int8_t *rs1, vuint8mf8_t vs2, vint8mf8x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei8_v_i8mf8x3_m(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei8_v_i8mf4x3_m(vbool32_t vm, int8_t *rs1, vuint8mf4_t vs2, vint8mf4x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei8_v_i8mf4x3_m(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei8_v_i8mf2x3_m(vbool16_t vm, int8_t *rs1, vuint8mf2_t vs2, vint8mf2x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei8_v_i8mf2x3_m(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei8_v_i8m1x3_m(vbool8_t vm, int8_t *rs1, vuint8m1_t vs2, vint8m1x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei8_v_i8m1x3_m(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei8_v_i8m2x3_m(vbool4_t vm, int8_t *rs1, vuint8m2_t vs2, vint8m2x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei8_v_i8m2x3_m(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei8_v_i16mf4x3_m(vbool64_t vm, int16_t *rs1, vuint8mf8_t vs2, vint16mf4x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei8_v_i16mf4x3_m(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei8_v_i16mf2x3_m(vbool32_t vm, int16_t *rs1, vuint8mf4_t vs2, vint16mf2x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei8_v_i16mf2x3_m(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei8_v_i16m1x3_m(vbool16_t vm, int16_t *rs1, vuint8mf2_t vs2, vint16m1x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei8_v_i16m1x3_m(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei8_v_i16m2x3_m(vbool8_t vm, int16_t *rs1, vuint8m1_t vs2, vint16m2x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei8_v_i16m2x3_m(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei8_v_i32mf2x3_m(vbool64_t vm, int32_t *rs1, vuint8mf8_t vs2, vint32mf2x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei8_v_i32mf2x3_m(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei8_v_i32m1x3_m(vbool32_t vm, int32_t *rs1, vuint8mf4_t vs2, vint32m1x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei8_v_i32m1x3_m(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei8_v_i32m2x3_m(vbool16_t vm, int32_t *rs1, vuint8mf2_t vs2, vint32m2x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei8_v_i32m2x3_m(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei8_v_i64m1x3_m(vbool64_t vm, int64_t *rs1, vuint8mf8_t vs2, vint64m1x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei8_v_i64m1x3_m(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei8_v_i64m2x3_m(vbool32_t vm, int64_t *rs1, vuint8mf4_t vs2, vint64m2x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei8_v_i64m2x3_m(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei8_v_u8mf8x3_m(vbool64_t vm, uint8_t *rs1, vuint8mf8_t vs2, vuint8mf8x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei8_v_u8mf8x3_m(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei8_v_u8mf4x3_m(vbool32_t vm, uint8_t *rs1, vuint8mf4_t vs2, vuint8mf4x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei8_v_u8mf4x3_m(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei8_v_u8mf2x3_m(vbool16_t vm, uint8_t *rs1, vuint8mf2_t vs2, vuint8mf2x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei8_v_u8mf2x3_m(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei8_v_u8m1x3_m(vbool8_t vm, uint8_t *rs1, vuint8m1_t vs2, vuint8m1x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei8_v_u8m1x3_m(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei8_v_u8m2x3_m(vbool4_t vm, uint8_t *rs1, vuint8m2_t vs2, vuint8m2x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei8_v_u8m2x3_m(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei8_v_u16mf4x3_m(vbool64_t vm, uint16_t *rs1, vuint8mf8_t vs2, vuint16mf4x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei8_v_u16mf4x3_m(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei8_v_u16mf2x3_m(vbool32_t vm, uint16_t *rs1, vuint8mf4_t vs2, vuint16mf2x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei8_v_u16mf2x3_m(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei8_v_u16m1x3_m(vbool16_t vm, uint16_t *rs1, vuint8mf2_t vs2, vuint16m1x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei8_v_u16m1x3_m(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei8_v_u16m2x3_m(vbool8_t vm, uint16_t *rs1, vuint8m1_t vs2, vuint16m2x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei8_v_u16m2x3_m(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei8_v_u32mf2x3_m(vbool64_t vm, uint32_t *rs1, vuint8mf8_t vs2, vuint32mf2x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei8_v_u32mf2x3_m(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei8_v_u32m1x3_m(vbool32_t vm, uint32_t *rs1, vuint8mf4_t vs2, vuint32m1x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei8_v_u32m1x3_m(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei8_v_u32m2x3_m(vbool16_t vm, uint32_t *rs1, vuint8mf2_t vs2, vuint32m2x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei8_v_u32m2x3_m(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei8_v_u64m1x3_m(vbool64_t vm, uint64_t *rs1, vuint8mf8_t vs2, vuint64m1x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei8_v_u64m1x3_m(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei8_v_u64m2x3_m(vbool32_t vm, uint64_t *rs1, vuint8mf4_t vs2, vuint64m2x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei8_v_u64m2x3_m(vm, rs1, vs2, vs3, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vsuxseg3ei8\.[ivxfswum.]+\s+} 56 } } */
