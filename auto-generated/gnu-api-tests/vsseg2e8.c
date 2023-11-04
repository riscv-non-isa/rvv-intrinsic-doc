/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

void test_vsseg2e8_v_i8mf8x2(int8_t *rs1, vint8mf8x2_t vs3, size_t vl) {
  return __riscv_vsseg2e8_v_i8mf8x2(rs1, vs3, vl);
}

void test_vsseg2e8_v_i8mf4x2(int8_t *rs1, vint8mf4x2_t vs3, size_t vl) {
  return __riscv_vsseg2e8_v_i8mf4x2(rs1, vs3, vl);
}

void test_vsseg2e8_v_i8mf2x2(int8_t *rs1, vint8mf2x2_t vs3, size_t vl) {
  return __riscv_vsseg2e8_v_i8mf2x2(rs1, vs3, vl);
}

void test_vsseg2e8_v_i8m1x2(int8_t *rs1, vint8m1x2_t vs3, size_t vl) {
  return __riscv_vsseg2e8_v_i8m1x2(rs1, vs3, vl);
}

void test_vsseg2e8_v_i8m2x2(int8_t *rs1, vint8m2x2_t vs3, size_t vl) {
  return __riscv_vsseg2e8_v_i8m2x2(rs1, vs3, vl);
}

void test_vsseg2e8_v_i8m4x2(int8_t *rs1, vint8m4x2_t vs3, size_t vl) {
  return __riscv_vsseg2e8_v_i8m4x2(rs1, vs3, vl);
}

void test_vsseg2e8_v_u8mf8x2(uint8_t *rs1, vuint8mf8x2_t vs3, size_t vl) {
  return __riscv_vsseg2e8_v_u8mf8x2(rs1, vs3, vl);
}

void test_vsseg2e8_v_u8mf4x2(uint8_t *rs1, vuint8mf4x2_t vs3, size_t vl) {
  return __riscv_vsseg2e8_v_u8mf4x2(rs1, vs3, vl);
}

void test_vsseg2e8_v_u8mf2x2(uint8_t *rs1, vuint8mf2x2_t vs3, size_t vl) {
  return __riscv_vsseg2e8_v_u8mf2x2(rs1, vs3, vl);
}

void test_vsseg2e8_v_u8m1x2(uint8_t *rs1, vuint8m1x2_t vs3, size_t vl) {
  return __riscv_vsseg2e8_v_u8m1x2(rs1, vs3, vl);
}

void test_vsseg2e8_v_u8m2x2(uint8_t *rs1, vuint8m2x2_t vs3, size_t vl) {
  return __riscv_vsseg2e8_v_u8m2x2(rs1, vs3, vl);
}

void test_vsseg2e8_v_u8m4x2(uint8_t *rs1, vuint8m4x2_t vs3, size_t vl) {
  return __riscv_vsseg2e8_v_u8m4x2(rs1, vs3, vl);
}

void test_vsseg2e8_v_i8mf8x2_m(vbool64_t vm, int8_t *rs1, vint8mf8x2_t vs3, size_t vl) {
  return __riscv_vsseg2e8_v_i8mf8x2_m(vm, rs1, vs3, vl);
}

void test_vsseg2e8_v_i8mf4x2_m(vbool32_t vm, int8_t *rs1, vint8mf4x2_t vs3, size_t vl) {
  return __riscv_vsseg2e8_v_i8mf4x2_m(vm, rs1, vs3, vl);
}

void test_vsseg2e8_v_i8mf2x2_m(vbool16_t vm, int8_t *rs1, vint8mf2x2_t vs3, size_t vl) {
  return __riscv_vsseg2e8_v_i8mf2x2_m(vm, rs1, vs3, vl);
}

void test_vsseg2e8_v_i8m1x2_m(vbool8_t vm, int8_t *rs1, vint8m1x2_t vs3, size_t vl) {
  return __riscv_vsseg2e8_v_i8m1x2_m(vm, rs1, vs3, vl);
}

void test_vsseg2e8_v_i8m2x2_m(vbool4_t vm, int8_t *rs1, vint8m2x2_t vs3, size_t vl) {
  return __riscv_vsseg2e8_v_i8m2x2_m(vm, rs1, vs3, vl);
}

void test_vsseg2e8_v_i8m4x2_m(vbool2_t vm, int8_t *rs1, vint8m4x2_t vs3, size_t vl) {
  return __riscv_vsseg2e8_v_i8m4x2_m(vm, rs1, vs3, vl);
}

void test_vsseg2e8_v_u8mf8x2_m(vbool64_t vm, uint8_t *rs1, vuint8mf8x2_t vs3, size_t vl) {
  return __riscv_vsseg2e8_v_u8mf8x2_m(vm, rs1, vs3, vl);
}

void test_vsseg2e8_v_u8mf4x2_m(vbool32_t vm, uint8_t *rs1, vuint8mf4x2_t vs3, size_t vl) {
  return __riscv_vsseg2e8_v_u8mf4x2_m(vm, rs1, vs3, vl);
}

void test_vsseg2e8_v_u8mf2x2_m(vbool16_t vm, uint8_t *rs1, vuint8mf2x2_t vs3, size_t vl) {
  return __riscv_vsseg2e8_v_u8mf2x2_m(vm, rs1, vs3, vl);
}

void test_vsseg2e8_v_u8m1x2_m(vbool8_t vm, uint8_t *rs1, vuint8m1x2_t vs3, size_t vl) {
  return __riscv_vsseg2e8_v_u8m1x2_m(vm, rs1, vs3, vl);
}

void test_vsseg2e8_v_u8m2x2_m(vbool4_t vm, uint8_t *rs1, vuint8m2x2_t vs3, size_t vl) {
  return __riscv_vsseg2e8_v_u8m2x2_m(vm, rs1, vs3, vl);
}

void test_vsseg2e8_v_u8m4x2_m(vbool2_t vm, uint8_t *rs1, vuint8m4x2_t vs3, size_t vl) {
  return __riscv_vsseg2e8_v_u8m4x2_m(vm, rs1, vs3, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vsseg2e8\.[ivxfswum.]+\s+} 24 } } */
