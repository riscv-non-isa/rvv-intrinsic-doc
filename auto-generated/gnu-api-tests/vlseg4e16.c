/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

vint16mf4x4_t test_vlseg4e16_v_i16mf4x4(const int16_t *rs1, size_t vl) {
  return __riscv_vlseg4e16_v_i16mf4x4(rs1, vl);
}

vint16mf2x4_t test_vlseg4e16_v_i16mf2x4(const int16_t *rs1, size_t vl) {
  return __riscv_vlseg4e16_v_i16mf2x4(rs1, vl);
}

vint16m1x4_t test_vlseg4e16_v_i16m1x4(const int16_t *rs1, size_t vl) {
  return __riscv_vlseg4e16_v_i16m1x4(rs1, vl);
}

vint16m2x4_t test_vlseg4e16_v_i16m2x4(const int16_t *rs1, size_t vl) {
  return __riscv_vlseg4e16_v_i16m2x4(rs1, vl);
}

vuint16mf4x4_t test_vlseg4e16_v_u16mf4x4(const uint16_t *rs1, size_t vl) {
  return __riscv_vlseg4e16_v_u16mf4x4(rs1, vl);
}

vuint16mf2x4_t test_vlseg4e16_v_u16mf2x4(const uint16_t *rs1, size_t vl) {
  return __riscv_vlseg4e16_v_u16mf2x4(rs1, vl);
}

vuint16m1x4_t test_vlseg4e16_v_u16m1x4(const uint16_t *rs1, size_t vl) {
  return __riscv_vlseg4e16_v_u16m1x4(rs1, vl);
}

vuint16m2x4_t test_vlseg4e16_v_u16m2x4(const uint16_t *rs1, size_t vl) {
  return __riscv_vlseg4e16_v_u16m2x4(rs1, vl);
}

vint16mf4x4_t test_vlseg4e16_v_i16mf4x4_m(vbool64_t vm, const int16_t *rs1, size_t vl) {
  return __riscv_vlseg4e16_v_i16mf4x4_m(vm, rs1, vl);
}

vint16mf2x4_t test_vlseg4e16_v_i16mf2x4_m(vbool32_t vm, const int16_t *rs1, size_t vl) {
  return __riscv_vlseg4e16_v_i16mf2x4_m(vm, rs1, vl);
}

vint16m1x4_t test_vlseg4e16_v_i16m1x4_m(vbool16_t vm, const int16_t *rs1, size_t vl) {
  return __riscv_vlseg4e16_v_i16m1x4_m(vm, rs1, vl);
}

vint16m2x4_t test_vlseg4e16_v_i16m2x4_m(vbool8_t vm, const int16_t *rs1, size_t vl) {
  return __riscv_vlseg4e16_v_i16m2x4_m(vm, rs1, vl);
}

vuint16mf4x4_t test_vlseg4e16_v_u16mf4x4_m(vbool64_t vm, const uint16_t *rs1, size_t vl) {
  return __riscv_vlseg4e16_v_u16mf4x4_m(vm, rs1, vl);
}

vuint16mf2x4_t test_vlseg4e16_v_u16mf2x4_m(vbool32_t vm, const uint16_t *rs1, size_t vl) {
  return __riscv_vlseg4e16_v_u16mf2x4_m(vm, rs1, vl);
}

vuint16m1x4_t test_vlseg4e16_v_u16m1x4_m(vbool16_t vm, const uint16_t *rs1, size_t vl) {
  return __riscv_vlseg4e16_v_u16m1x4_m(vm, rs1, vl);
}

vuint16m2x4_t test_vlseg4e16_v_u16m2x4_m(vbool8_t vm, const uint16_t *rs1, size_t vl) {
  return __riscv_vlseg4e16_v_u16m2x4_m(vm, rs1, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vlseg4e16\.[ivxfswum.]+\s+} 16 } } */
