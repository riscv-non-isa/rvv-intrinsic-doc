/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

void test_vssseg5e16_v_i16mf4x5(int16_t *rs1, ptrdiff_t rs2, vint16mf4x5_t vs3, size_t vl) {
  return __riscv_vssseg5e16(rs1, rs2, vs3, vl);
}

void test_vssseg5e16_v_i16mf2x5(int16_t *rs1, ptrdiff_t rs2, vint16mf2x5_t vs3, size_t vl) {
  return __riscv_vssseg5e16(rs1, rs2, vs3, vl);
}

void test_vssseg5e16_v_i16m1x5(int16_t *rs1, ptrdiff_t rs2, vint16m1x5_t vs3, size_t vl) {
  return __riscv_vssseg5e16(rs1, rs2, vs3, vl);
}

void test_vssseg5e16_v_u16mf4x5(uint16_t *rs1, ptrdiff_t rs2, vuint16mf4x5_t vs3, size_t vl) {
  return __riscv_vssseg5e16(rs1, rs2, vs3, vl);
}

void test_vssseg5e16_v_u16mf2x5(uint16_t *rs1, ptrdiff_t rs2, vuint16mf2x5_t vs3, size_t vl) {
  return __riscv_vssseg5e16(rs1, rs2, vs3, vl);
}

void test_vssseg5e16_v_u16m1x5(uint16_t *rs1, ptrdiff_t rs2, vuint16m1x5_t vs3, size_t vl) {
  return __riscv_vssseg5e16(rs1, rs2, vs3, vl);
}

void test_vssseg5e16_v_i16mf4x5_m(vbool64_t vm, int16_t *rs1, ptrdiff_t rs2, vint16mf4x5_t vs3, size_t vl) {
  return __riscv_vssseg5e16(vm, rs1, rs2, vs3, vl);
}

void test_vssseg5e16_v_i16mf2x5_m(vbool32_t vm, int16_t *rs1, ptrdiff_t rs2, vint16mf2x5_t vs3, size_t vl) {
  return __riscv_vssseg5e16(vm, rs1, rs2, vs3, vl);
}

void test_vssseg5e16_v_i16m1x5_m(vbool16_t vm, int16_t *rs1, ptrdiff_t rs2, vint16m1x5_t vs3, size_t vl) {
  return __riscv_vssseg5e16(vm, rs1, rs2, vs3, vl);
}

void test_vssseg5e16_v_u16mf4x5_m(vbool64_t vm, uint16_t *rs1, ptrdiff_t rs2, vuint16mf4x5_t vs3, size_t vl) {
  return __riscv_vssseg5e16(vm, rs1, rs2, vs3, vl);
}

void test_vssseg5e16_v_u16mf2x5_m(vbool32_t vm, uint16_t *rs1, ptrdiff_t rs2, vuint16mf2x5_t vs3, size_t vl) {
  return __riscv_vssseg5e16(vm, rs1, rs2, vs3, vl);
}

void test_vssseg5e16_v_u16m1x5_m(vbool16_t vm, uint16_t *rs1, ptrdiff_t rs2, vuint16m1x5_t vs3, size_t vl) {
  return __riscv_vssseg5e16(vm, rs1, rs2, vs3, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vssseg5e16\.[ivxfswum.]+\s+} 12 } } */
