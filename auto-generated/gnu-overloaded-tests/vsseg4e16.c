/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

void test_vsseg4e16_v_f16mf4x4(_Float16 *rs1, vfloat16mf4x4_t vs3, size_t vl) {
  return __riscv_vsseg4e16(rs1, vs3, vl);
}

void test_vsseg4e16_v_f16mf2x4(_Float16 *rs1, vfloat16mf2x4_t vs3, size_t vl) {
  return __riscv_vsseg4e16(rs1, vs3, vl);
}

void test_vsseg4e16_v_f16m1x4(_Float16 *rs1, vfloat16m1x4_t vs3, size_t vl) {
  return __riscv_vsseg4e16(rs1, vs3, vl);
}

void test_vsseg4e16_v_f16m2x4(_Float16 *rs1, vfloat16m2x4_t vs3, size_t vl) {
  return __riscv_vsseg4e16(rs1, vs3, vl);
}

void test_vsseg4e16_v_i16mf4x4(int16_t *rs1, vint16mf4x4_t vs3, size_t vl) {
  return __riscv_vsseg4e16(rs1, vs3, vl);
}

void test_vsseg4e16_v_i16mf2x4(int16_t *rs1, vint16mf2x4_t vs3, size_t vl) {
  return __riscv_vsseg4e16(rs1, vs3, vl);
}

void test_vsseg4e16_v_i16m1x4(int16_t *rs1, vint16m1x4_t vs3, size_t vl) {
  return __riscv_vsseg4e16(rs1, vs3, vl);
}

void test_vsseg4e16_v_i16m2x4(int16_t *rs1, vint16m2x4_t vs3, size_t vl) {
  return __riscv_vsseg4e16(rs1, vs3, vl);
}

void test_vsseg4e16_v_u16mf4x4(uint16_t *rs1, vuint16mf4x4_t vs3, size_t vl) {
  return __riscv_vsseg4e16(rs1, vs3, vl);
}

void test_vsseg4e16_v_u16mf2x4(uint16_t *rs1, vuint16mf2x4_t vs3, size_t vl) {
  return __riscv_vsseg4e16(rs1, vs3, vl);
}

void test_vsseg4e16_v_u16m1x4(uint16_t *rs1, vuint16m1x4_t vs3, size_t vl) {
  return __riscv_vsseg4e16(rs1, vs3, vl);
}

void test_vsseg4e16_v_u16m2x4(uint16_t *rs1, vuint16m2x4_t vs3, size_t vl) {
  return __riscv_vsseg4e16(rs1, vs3, vl);
}

void test_vsseg4e16_v_f16mf4x4_m(vbool64_t vm, _Float16 *rs1, vfloat16mf4x4_t vs3, size_t vl) {
  return __riscv_vsseg4e16(vm, rs1, vs3, vl);
}

void test_vsseg4e16_v_f16mf2x4_m(vbool32_t vm, _Float16 *rs1, vfloat16mf2x4_t vs3, size_t vl) {
  return __riscv_vsseg4e16(vm, rs1, vs3, vl);
}

void test_vsseg4e16_v_f16m1x4_m(vbool16_t vm, _Float16 *rs1, vfloat16m1x4_t vs3, size_t vl) {
  return __riscv_vsseg4e16(vm, rs1, vs3, vl);
}

void test_vsseg4e16_v_f16m2x4_m(vbool8_t vm, _Float16 *rs1, vfloat16m2x4_t vs3, size_t vl) {
  return __riscv_vsseg4e16(vm, rs1, vs3, vl);
}

void test_vsseg4e16_v_i16mf4x4_m(vbool64_t vm, int16_t *rs1, vint16mf4x4_t vs3, size_t vl) {
  return __riscv_vsseg4e16(vm, rs1, vs3, vl);
}

void test_vsseg4e16_v_i16mf2x4_m(vbool32_t vm, int16_t *rs1, vint16mf2x4_t vs3, size_t vl) {
  return __riscv_vsseg4e16(vm, rs1, vs3, vl);
}

void test_vsseg4e16_v_i16m1x4_m(vbool16_t vm, int16_t *rs1, vint16m1x4_t vs3, size_t vl) {
  return __riscv_vsseg4e16(vm, rs1, vs3, vl);
}

void test_vsseg4e16_v_i16m2x4_m(vbool8_t vm, int16_t *rs1, vint16m2x4_t vs3, size_t vl) {
  return __riscv_vsseg4e16(vm, rs1, vs3, vl);
}

void test_vsseg4e16_v_u16mf4x4_m(vbool64_t vm, uint16_t *rs1, vuint16mf4x4_t vs3, size_t vl) {
  return __riscv_vsseg4e16(vm, rs1, vs3, vl);
}

void test_vsseg4e16_v_u16mf2x4_m(vbool32_t vm, uint16_t *rs1, vuint16mf2x4_t vs3, size_t vl) {
  return __riscv_vsseg4e16(vm, rs1, vs3, vl);
}

void test_vsseg4e16_v_u16m1x4_m(vbool16_t vm, uint16_t *rs1, vuint16m1x4_t vs3, size_t vl) {
  return __riscv_vsseg4e16(vm, rs1, vs3, vl);
}

void test_vsseg4e16_v_u16m2x4_m(vbool8_t vm, uint16_t *rs1, vuint16m2x4_t vs3, size_t vl) {
  return __riscv_vsseg4e16(vm, rs1, vs3, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vsseg4e16\.[ivxfswum.]+\s+} 24 } } */
