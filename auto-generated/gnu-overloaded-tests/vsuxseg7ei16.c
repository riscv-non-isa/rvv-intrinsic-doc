/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

void test_vsuxseg7ei16_v_i8mf8x7(int8_t *rs1, vuint16mf4_t vs2, vint8mf8x7_t vs3, size_t vl) {
  return __riscv_vsuxseg7ei16(rs1, vs2, vs3, vl);
}

void test_vsuxseg7ei16_v_i8mf4x7(int8_t *rs1, vuint16mf2_t vs2, vint8mf4x7_t vs3, size_t vl) {
  return __riscv_vsuxseg7ei16(rs1, vs2, vs3, vl);
}

void test_vsuxseg7ei16_v_i8mf2x7(int8_t *rs1, vuint16m1_t vs2, vint8mf2x7_t vs3, size_t vl) {
  return __riscv_vsuxseg7ei16(rs1, vs2, vs3, vl);
}

void test_vsuxseg7ei16_v_i8m1x7(int8_t *rs1, vuint16m2_t vs2, vint8m1x7_t vs3, size_t vl) {
  return __riscv_vsuxseg7ei16(rs1, vs2, vs3, vl);
}

void test_vsuxseg7ei16_v_i16mf4x7(int16_t *rs1, vuint16mf4_t vs2, vint16mf4x7_t vs3, size_t vl) {
  return __riscv_vsuxseg7ei16(rs1, vs2, vs3, vl);
}

void test_vsuxseg7ei16_v_i16mf2x7(int16_t *rs1, vuint16mf2_t vs2, vint16mf2x7_t vs3, size_t vl) {
  return __riscv_vsuxseg7ei16(rs1, vs2, vs3, vl);
}

void test_vsuxseg7ei16_v_i16m1x7(int16_t *rs1, vuint16m1_t vs2, vint16m1x7_t vs3, size_t vl) {
  return __riscv_vsuxseg7ei16(rs1, vs2, vs3, vl);
}

void test_vsuxseg7ei16_v_i32mf2x7(int32_t *rs1, vuint16mf4_t vs2, vint32mf2x7_t vs3, size_t vl) {
  return __riscv_vsuxseg7ei16(rs1, vs2, vs3, vl);
}

void test_vsuxseg7ei16_v_i32m1x7(int32_t *rs1, vuint16mf2_t vs2, vint32m1x7_t vs3, size_t vl) {
  return __riscv_vsuxseg7ei16(rs1, vs2, vs3, vl);
}

void test_vsuxseg7ei16_v_i64m1x7(int64_t *rs1, vuint16mf4_t vs2, vint64m1x7_t vs3, size_t vl) {
  return __riscv_vsuxseg7ei16(rs1, vs2, vs3, vl);
}

void test_vsuxseg7ei16_v_u8mf8x7(uint8_t *rs1, vuint16mf4_t vs2, vuint8mf8x7_t vs3, size_t vl) {
  return __riscv_vsuxseg7ei16(rs1, vs2, vs3, vl);
}

void test_vsuxseg7ei16_v_u8mf4x7(uint8_t *rs1, vuint16mf2_t vs2, vuint8mf4x7_t vs3, size_t vl) {
  return __riscv_vsuxseg7ei16(rs1, vs2, vs3, vl);
}

void test_vsuxseg7ei16_v_u8mf2x7(uint8_t *rs1, vuint16m1_t vs2, vuint8mf2x7_t vs3, size_t vl) {
  return __riscv_vsuxseg7ei16(rs1, vs2, vs3, vl);
}

void test_vsuxseg7ei16_v_u8m1x7(uint8_t *rs1, vuint16m2_t vs2, vuint8m1x7_t vs3, size_t vl) {
  return __riscv_vsuxseg7ei16(rs1, vs2, vs3, vl);
}

void test_vsuxseg7ei16_v_u16mf4x7(uint16_t *rs1, vuint16mf4_t vs2, vuint16mf4x7_t vs3, size_t vl) {
  return __riscv_vsuxseg7ei16(rs1, vs2, vs3, vl);
}

void test_vsuxseg7ei16_v_u16mf2x7(uint16_t *rs1, vuint16mf2_t vs2, vuint16mf2x7_t vs3, size_t vl) {
  return __riscv_vsuxseg7ei16(rs1, vs2, vs3, vl);
}

void test_vsuxseg7ei16_v_u16m1x7(uint16_t *rs1, vuint16m1_t vs2, vuint16m1x7_t vs3, size_t vl) {
  return __riscv_vsuxseg7ei16(rs1, vs2, vs3, vl);
}

void test_vsuxseg7ei16_v_u32mf2x7(uint32_t *rs1, vuint16mf4_t vs2, vuint32mf2x7_t vs3, size_t vl) {
  return __riscv_vsuxseg7ei16(rs1, vs2, vs3, vl);
}

void test_vsuxseg7ei16_v_u32m1x7(uint32_t *rs1, vuint16mf2_t vs2, vuint32m1x7_t vs3, size_t vl) {
  return __riscv_vsuxseg7ei16(rs1, vs2, vs3, vl);
}

void test_vsuxseg7ei16_v_u64m1x7(uint64_t *rs1, vuint16mf4_t vs2, vuint64m1x7_t vs3, size_t vl) {
  return __riscv_vsuxseg7ei16(rs1, vs2, vs3, vl);
}

void test_vsuxseg7ei16_v_i8mf8x7_m(vbool64_t vm, int8_t *rs1, vuint16mf4_t vs2, vint8mf8x7_t vs3, size_t vl) {
  return __riscv_vsuxseg7ei16(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg7ei16_v_i8mf4x7_m(vbool32_t vm, int8_t *rs1, vuint16mf2_t vs2, vint8mf4x7_t vs3, size_t vl) {
  return __riscv_vsuxseg7ei16(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg7ei16_v_i8mf2x7_m(vbool16_t vm, int8_t *rs1, vuint16m1_t vs2, vint8mf2x7_t vs3, size_t vl) {
  return __riscv_vsuxseg7ei16(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg7ei16_v_i8m1x7_m(vbool8_t vm, int8_t *rs1, vuint16m2_t vs2, vint8m1x7_t vs3, size_t vl) {
  return __riscv_vsuxseg7ei16(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg7ei16_v_i16mf4x7_m(vbool64_t vm, int16_t *rs1, vuint16mf4_t vs2, vint16mf4x7_t vs3, size_t vl) {
  return __riscv_vsuxseg7ei16(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg7ei16_v_i16mf2x7_m(vbool32_t vm, int16_t *rs1, vuint16mf2_t vs2, vint16mf2x7_t vs3, size_t vl) {
  return __riscv_vsuxseg7ei16(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg7ei16_v_i16m1x7_m(vbool16_t vm, int16_t *rs1, vuint16m1_t vs2, vint16m1x7_t vs3, size_t vl) {
  return __riscv_vsuxseg7ei16(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg7ei16_v_i32mf2x7_m(vbool64_t vm, int32_t *rs1, vuint16mf4_t vs2, vint32mf2x7_t vs3, size_t vl) {
  return __riscv_vsuxseg7ei16(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg7ei16_v_i32m1x7_m(vbool32_t vm, int32_t *rs1, vuint16mf2_t vs2, vint32m1x7_t vs3, size_t vl) {
  return __riscv_vsuxseg7ei16(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg7ei16_v_i64m1x7_m(vbool64_t vm, int64_t *rs1, vuint16mf4_t vs2, vint64m1x7_t vs3, size_t vl) {
  return __riscv_vsuxseg7ei16(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg7ei16_v_u8mf8x7_m(vbool64_t vm, uint8_t *rs1, vuint16mf4_t vs2, vuint8mf8x7_t vs3, size_t vl) {
  return __riscv_vsuxseg7ei16(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg7ei16_v_u8mf4x7_m(vbool32_t vm, uint8_t *rs1, vuint16mf2_t vs2, vuint8mf4x7_t vs3, size_t vl) {
  return __riscv_vsuxseg7ei16(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg7ei16_v_u8mf2x7_m(vbool16_t vm, uint8_t *rs1, vuint16m1_t vs2, vuint8mf2x7_t vs3, size_t vl) {
  return __riscv_vsuxseg7ei16(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg7ei16_v_u8m1x7_m(vbool8_t vm, uint8_t *rs1, vuint16m2_t vs2, vuint8m1x7_t vs3, size_t vl) {
  return __riscv_vsuxseg7ei16(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg7ei16_v_u16mf4x7_m(vbool64_t vm, uint16_t *rs1, vuint16mf4_t vs2, vuint16mf4x7_t vs3, size_t vl) {
  return __riscv_vsuxseg7ei16(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg7ei16_v_u16mf2x7_m(vbool32_t vm, uint16_t *rs1, vuint16mf2_t vs2, vuint16mf2x7_t vs3, size_t vl) {
  return __riscv_vsuxseg7ei16(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg7ei16_v_u16m1x7_m(vbool16_t vm, uint16_t *rs1, vuint16m1_t vs2, vuint16m1x7_t vs3, size_t vl) {
  return __riscv_vsuxseg7ei16(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg7ei16_v_u32mf2x7_m(vbool64_t vm, uint32_t *rs1, vuint16mf4_t vs2, vuint32mf2x7_t vs3, size_t vl) {
  return __riscv_vsuxseg7ei16(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg7ei16_v_u32m1x7_m(vbool32_t vm, uint32_t *rs1, vuint16mf2_t vs2, vuint32m1x7_t vs3, size_t vl) {
  return __riscv_vsuxseg7ei16(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg7ei16_v_u64m1x7_m(vbool64_t vm, uint64_t *rs1, vuint16mf4_t vs2, vuint64m1x7_t vs3, size_t vl) {
  return __riscv_vsuxseg7ei16(vm, rs1, vs2, vs3, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vsuxseg7ei16\.[ivxfswum.]+\s+} 40 } } */
