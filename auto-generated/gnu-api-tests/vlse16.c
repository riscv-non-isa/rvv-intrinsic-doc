/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

vint16mf4_t test_vlse16_v_i16mf4(const int16_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse16_v_i16mf4(rs1, rs2, vl);
}

vint16mf2_t test_vlse16_v_i16mf2(const int16_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse16_v_i16mf2(rs1, rs2, vl);
}

vint16m1_t test_vlse16_v_i16m1(const int16_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse16_v_i16m1(rs1, rs2, vl);
}

vint16m2_t test_vlse16_v_i16m2(const int16_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse16_v_i16m2(rs1, rs2, vl);
}

vint16m4_t test_vlse16_v_i16m4(const int16_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse16_v_i16m4(rs1, rs2, vl);
}

vint16m8_t test_vlse16_v_i16m8(const int16_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse16_v_i16m8(rs1, rs2, vl);
}

vuint16mf4_t test_vlse16_v_u16mf4(const uint16_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse16_v_u16mf4(rs1, rs2, vl);
}

vuint16mf2_t test_vlse16_v_u16mf2(const uint16_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse16_v_u16mf2(rs1, rs2, vl);
}

vuint16m1_t test_vlse16_v_u16m1(const uint16_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse16_v_u16m1(rs1, rs2, vl);
}

vuint16m2_t test_vlse16_v_u16m2(const uint16_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse16_v_u16m2(rs1, rs2, vl);
}

vuint16m4_t test_vlse16_v_u16m4(const uint16_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse16_v_u16m4(rs1, rs2, vl);
}

vuint16m8_t test_vlse16_v_u16m8(const uint16_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse16_v_u16m8(rs1, rs2, vl);
}

vint16mf4_t test_vlse16_v_i16mf4_m(vbool64_t vm, const int16_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse16_v_i16mf4_m(vm, rs1, rs2, vl);
}

vint16mf2_t test_vlse16_v_i16mf2_m(vbool32_t vm, const int16_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse16_v_i16mf2_m(vm, rs1, rs2, vl);
}

vint16m1_t test_vlse16_v_i16m1_m(vbool16_t vm, const int16_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse16_v_i16m1_m(vm, rs1, rs2, vl);
}

vint16m2_t test_vlse16_v_i16m2_m(vbool8_t vm, const int16_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse16_v_i16m2_m(vm, rs1, rs2, vl);
}

vint16m4_t test_vlse16_v_i16m4_m(vbool4_t vm, const int16_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse16_v_i16m4_m(vm, rs1, rs2, vl);
}

vint16m8_t test_vlse16_v_i16m8_m(vbool2_t vm, const int16_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse16_v_i16m8_m(vm, rs1, rs2, vl);
}

vuint16mf4_t test_vlse16_v_u16mf4_m(vbool64_t vm, const uint16_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse16_v_u16mf4_m(vm, rs1, rs2, vl);
}

vuint16mf2_t test_vlse16_v_u16mf2_m(vbool32_t vm, const uint16_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse16_v_u16mf2_m(vm, rs1, rs2, vl);
}

vuint16m1_t test_vlse16_v_u16m1_m(vbool16_t vm, const uint16_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse16_v_u16m1_m(vm, rs1, rs2, vl);
}

vuint16m2_t test_vlse16_v_u16m2_m(vbool8_t vm, const uint16_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse16_v_u16m2_m(vm, rs1, rs2, vl);
}

vuint16m4_t test_vlse16_v_u16m4_m(vbool4_t vm, const uint16_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse16_v_u16m4_m(vm, rs1, rs2, vl);
}

vuint16m8_t test_vlse16_v_u16m8_m(vbool2_t vm, const uint16_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse16_v_u16m8_m(vm, rs1, rs2, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vlse16\.[ivxfswum.]+\s+} 24 } } */
