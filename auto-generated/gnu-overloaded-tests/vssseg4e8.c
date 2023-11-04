/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

void test_vssseg4e8_v_i8mf8x4(int8_t *rs1, ptrdiff_t rs2, vint8mf8x4_t vs3, size_t vl) {
  return __riscv_vssseg4e8(rs1, rs2, vs3, vl);
}

void test_vssseg4e8_v_i8mf4x4(int8_t *rs1, ptrdiff_t rs2, vint8mf4x4_t vs3, size_t vl) {
  return __riscv_vssseg4e8(rs1, rs2, vs3, vl);
}

void test_vssseg4e8_v_i8mf2x4(int8_t *rs1, ptrdiff_t rs2, vint8mf2x4_t vs3, size_t vl) {
  return __riscv_vssseg4e8(rs1, rs2, vs3, vl);
}

void test_vssseg4e8_v_i8m1x4(int8_t *rs1, ptrdiff_t rs2, vint8m1x4_t vs3, size_t vl) {
  return __riscv_vssseg4e8(rs1, rs2, vs3, vl);
}

void test_vssseg4e8_v_i8m2x4(int8_t *rs1, ptrdiff_t rs2, vint8m2x4_t vs3, size_t vl) {
  return __riscv_vssseg4e8(rs1, rs2, vs3, vl);
}

void test_vssseg4e8_v_u8mf8x4(uint8_t *rs1, ptrdiff_t rs2, vuint8mf8x4_t vs3, size_t vl) {
  return __riscv_vssseg4e8(rs1, rs2, vs3, vl);
}

void test_vssseg4e8_v_u8mf4x4(uint8_t *rs1, ptrdiff_t rs2, vuint8mf4x4_t vs3, size_t vl) {
  return __riscv_vssseg4e8(rs1, rs2, vs3, vl);
}

void test_vssseg4e8_v_u8mf2x4(uint8_t *rs1, ptrdiff_t rs2, vuint8mf2x4_t vs3, size_t vl) {
  return __riscv_vssseg4e8(rs1, rs2, vs3, vl);
}

void test_vssseg4e8_v_u8m1x4(uint8_t *rs1, ptrdiff_t rs2, vuint8m1x4_t vs3, size_t vl) {
  return __riscv_vssseg4e8(rs1, rs2, vs3, vl);
}

void test_vssseg4e8_v_u8m2x4(uint8_t *rs1, ptrdiff_t rs2, vuint8m2x4_t vs3, size_t vl) {
  return __riscv_vssseg4e8(rs1, rs2, vs3, vl);
}

void test_vssseg4e8_v_i8mf8x4_m(vbool64_t vm, int8_t *rs1, ptrdiff_t rs2, vint8mf8x4_t vs3, size_t vl) {
  return __riscv_vssseg4e8(vm, rs1, rs2, vs3, vl);
}

void test_vssseg4e8_v_i8mf4x4_m(vbool32_t vm, int8_t *rs1, ptrdiff_t rs2, vint8mf4x4_t vs3, size_t vl) {
  return __riscv_vssseg4e8(vm, rs1, rs2, vs3, vl);
}

void test_vssseg4e8_v_i8mf2x4_m(vbool16_t vm, int8_t *rs1, ptrdiff_t rs2, vint8mf2x4_t vs3, size_t vl) {
  return __riscv_vssseg4e8(vm, rs1, rs2, vs3, vl);
}

void test_vssseg4e8_v_i8m1x4_m(vbool8_t vm, int8_t *rs1, ptrdiff_t rs2, vint8m1x4_t vs3, size_t vl) {
  return __riscv_vssseg4e8(vm, rs1, rs2, vs3, vl);
}

void test_vssseg4e8_v_i8m2x4_m(vbool4_t vm, int8_t *rs1, ptrdiff_t rs2, vint8m2x4_t vs3, size_t vl) {
  return __riscv_vssseg4e8(vm, rs1, rs2, vs3, vl);
}

void test_vssseg4e8_v_u8mf8x4_m(vbool64_t vm, uint8_t *rs1, ptrdiff_t rs2, vuint8mf8x4_t vs3, size_t vl) {
  return __riscv_vssseg4e8(vm, rs1, rs2, vs3, vl);
}

void test_vssseg4e8_v_u8mf4x4_m(vbool32_t vm, uint8_t *rs1, ptrdiff_t rs2, vuint8mf4x4_t vs3, size_t vl) {
  return __riscv_vssseg4e8(vm, rs1, rs2, vs3, vl);
}

void test_vssseg4e8_v_u8mf2x4_m(vbool16_t vm, uint8_t *rs1, ptrdiff_t rs2, vuint8mf2x4_t vs3, size_t vl) {
  return __riscv_vssseg4e8(vm, rs1, rs2, vs3, vl);
}

void test_vssseg4e8_v_u8m1x4_m(vbool8_t vm, uint8_t *rs1, ptrdiff_t rs2, vuint8m1x4_t vs3, size_t vl) {
  return __riscv_vssseg4e8(vm, rs1, rs2, vs3, vl);
}

void test_vssseg4e8_v_u8m2x4_m(vbool4_t vm, uint8_t *rs1, ptrdiff_t rs2, vuint8m2x4_t vs3, size_t vl) {
  return __riscv_vssseg4e8(vm, rs1, rs2, vs3, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vssseg4e8\.[ivxfswum.]+\s+} 20 } } */
