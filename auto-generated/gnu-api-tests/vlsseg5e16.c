/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

vfloat16mf4x5_t test_vlsseg5e16_v_f16mf4x5(const _Float16 *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg5e16_v_f16mf4x5(rs1, rs2, vl);
}

vfloat16mf2x5_t test_vlsseg5e16_v_f16mf2x5(const _Float16 *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg5e16_v_f16mf2x5(rs1, rs2, vl);
}

vfloat16m1x5_t test_vlsseg5e16_v_f16m1x5(const _Float16 *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg5e16_v_f16m1x5(rs1, rs2, vl);
}

vint16mf4x5_t test_vlsseg5e16_v_i16mf4x5(const int16_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg5e16_v_i16mf4x5(rs1, rs2, vl);
}

vint16mf2x5_t test_vlsseg5e16_v_i16mf2x5(const int16_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg5e16_v_i16mf2x5(rs1, rs2, vl);
}

vint16m1x5_t test_vlsseg5e16_v_i16m1x5(const int16_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg5e16_v_i16m1x5(rs1, rs2, vl);
}

vuint16mf4x5_t test_vlsseg5e16_v_u16mf4x5(const uint16_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg5e16_v_u16mf4x5(rs1, rs2, vl);
}

vuint16mf2x5_t test_vlsseg5e16_v_u16mf2x5(const uint16_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg5e16_v_u16mf2x5(rs1, rs2, vl);
}

vuint16m1x5_t test_vlsseg5e16_v_u16m1x5(const uint16_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg5e16_v_u16m1x5(rs1, rs2, vl);
}

vfloat16mf4x5_t test_vlsseg5e16_v_f16mf4x5_m(vbool64_t vm, const _Float16 *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg5e16_v_f16mf4x5_m(vm, rs1, rs2, vl);
}

vfloat16mf2x5_t test_vlsseg5e16_v_f16mf2x5_m(vbool32_t vm, const _Float16 *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg5e16_v_f16mf2x5_m(vm, rs1, rs2, vl);
}

vfloat16m1x5_t test_vlsseg5e16_v_f16m1x5_m(vbool16_t vm, const _Float16 *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg5e16_v_f16m1x5_m(vm, rs1, rs2, vl);
}

vint16mf4x5_t test_vlsseg5e16_v_i16mf4x5_m(vbool64_t vm, const int16_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg5e16_v_i16mf4x5_m(vm, rs1, rs2, vl);
}

vint16mf2x5_t test_vlsseg5e16_v_i16mf2x5_m(vbool32_t vm, const int16_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg5e16_v_i16mf2x5_m(vm, rs1, rs2, vl);
}

vint16m1x5_t test_vlsseg5e16_v_i16m1x5_m(vbool16_t vm, const int16_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg5e16_v_i16m1x5_m(vm, rs1, rs2, vl);
}

vuint16mf4x5_t test_vlsseg5e16_v_u16mf4x5_m(vbool64_t vm, const uint16_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg5e16_v_u16mf4x5_m(vm, rs1, rs2, vl);
}

vuint16mf2x5_t test_vlsseg5e16_v_u16mf2x5_m(vbool32_t vm, const uint16_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg5e16_v_u16mf2x5_m(vm, rs1, rs2, vl);
}

vuint16m1x5_t test_vlsseg5e16_v_u16m1x5_m(vbool16_t vm, const uint16_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg5e16_v_u16m1x5_m(vm, rs1, rs2, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vlsseg5e16\.[ivxfswum.]+\s+} 18 } } */
