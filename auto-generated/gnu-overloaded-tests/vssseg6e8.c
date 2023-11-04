/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

void test_vssseg6e8_v_i8mf8x6(int8_t *rs1, ptrdiff_t rs2, vint8mf8x6_t vs3, size_t vl) {
  return __riscv_vssseg6e8(rs1, rs2, vs3, vl);
}

void test_vssseg6e8_v_i8mf4x6(int8_t *rs1, ptrdiff_t rs2, vint8mf4x6_t vs3, size_t vl) {
  return __riscv_vssseg6e8(rs1, rs2, vs3, vl);
}

void test_vssseg6e8_v_i8mf2x6(int8_t *rs1, ptrdiff_t rs2, vint8mf2x6_t vs3, size_t vl) {
  return __riscv_vssseg6e8(rs1, rs2, vs3, vl);
}

void test_vssseg6e8_v_i8m1x6(int8_t *rs1, ptrdiff_t rs2, vint8m1x6_t vs3, size_t vl) {
  return __riscv_vssseg6e8(rs1, rs2, vs3, vl);
}

void test_vssseg6e8_v_u8mf8x6(uint8_t *rs1, ptrdiff_t rs2, vuint8mf8x6_t vs3, size_t vl) {
  return __riscv_vssseg6e8(rs1, rs2, vs3, vl);
}

void test_vssseg6e8_v_u8mf4x6(uint8_t *rs1, ptrdiff_t rs2, vuint8mf4x6_t vs3, size_t vl) {
  return __riscv_vssseg6e8(rs1, rs2, vs3, vl);
}

void test_vssseg6e8_v_u8mf2x6(uint8_t *rs1, ptrdiff_t rs2, vuint8mf2x6_t vs3, size_t vl) {
  return __riscv_vssseg6e8(rs1, rs2, vs3, vl);
}

void test_vssseg6e8_v_u8m1x6(uint8_t *rs1, ptrdiff_t rs2, vuint8m1x6_t vs3, size_t vl) {
  return __riscv_vssseg6e8(rs1, rs2, vs3, vl);
}

void test_vssseg6e8_v_i8mf8x6_m(vbool64_t vm, int8_t *rs1, ptrdiff_t rs2, vint8mf8x6_t vs3, size_t vl) {
  return __riscv_vssseg6e8(vm, rs1, rs2, vs3, vl);
}

void test_vssseg6e8_v_i8mf4x6_m(vbool32_t vm, int8_t *rs1, ptrdiff_t rs2, vint8mf4x6_t vs3, size_t vl) {
  return __riscv_vssseg6e8(vm, rs1, rs2, vs3, vl);
}

void test_vssseg6e8_v_i8mf2x6_m(vbool16_t vm, int8_t *rs1, ptrdiff_t rs2, vint8mf2x6_t vs3, size_t vl) {
  return __riscv_vssseg6e8(vm, rs1, rs2, vs3, vl);
}

void test_vssseg6e8_v_i8m1x6_m(vbool8_t vm, int8_t *rs1, ptrdiff_t rs2, vint8m1x6_t vs3, size_t vl) {
  return __riscv_vssseg6e8(vm, rs1, rs2, vs3, vl);
}

void test_vssseg6e8_v_u8mf8x6_m(vbool64_t vm, uint8_t *rs1, ptrdiff_t rs2, vuint8mf8x6_t vs3, size_t vl) {
  return __riscv_vssseg6e8(vm, rs1, rs2, vs3, vl);
}

void test_vssseg6e8_v_u8mf4x6_m(vbool32_t vm, uint8_t *rs1, ptrdiff_t rs2, vuint8mf4x6_t vs3, size_t vl) {
  return __riscv_vssseg6e8(vm, rs1, rs2, vs3, vl);
}

void test_vssseg6e8_v_u8mf2x6_m(vbool16_t vm, uint8_t *rs1, ptrdiff_t rs2, vuint8mf2x6_t vs3, size_t vl) {
  return __riscv_vssseg6e8(vm, rs1, rs2, vs3, vl);
}

void test_vssseg6e8_v_u8m1x6_m(vbool8_t vm, uint8_t *rs1, ptrdiff_t rs2, vuint8m1x6_t vs3, size_t vl) {
  return __riscv_vssseg6e8(vm, rs1, rs2, vs3, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vssseg6e8\.[ivxfswum.]+\s+} 16 } } */
