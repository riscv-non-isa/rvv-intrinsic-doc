/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

vint8mf8x7_t test_vlsseg7e8_v_i8mf8x7_tu(vint8mf8x7_t vd, const int8_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e8_tu(vd, rs1, rs2, vl);
}

vint8mf4x7_t test_vlsseg7e8_v_i8mf4x7_tu(vint8mf4x7_t vd, const int8_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e8_tu(vd, rs1, rs2, vl);
}

vint8mf2x7_t test_vlsseg7e8_v_i8mf2x7_tu(vint8mf2x7_t vd, const int8_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e8_tu(vd, rs1, rs2, vl);
}

vint8m1x7_t test_vlsseg7e8_v_i8m1x7_tu(vint8m1x7_t vd, const int8_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e8_tu(vd, rs1, rs2, vl);
}

vuint8mf8x7_t test_vlsseg7e8_v_u8mf8x7_tu(vuint8mf8x7_t vd, const uint8_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e8_tu(vd, rs1, rs2, vl);
}

vuint8mf4x7_t test_vlsseg7e8_v_u8mf4x7_tu(vuint8mf4x7_t vd, const uint8_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e8_tu(vd, rs1, rs2, vl);
}

vuint8mf2x7_t test_vlsseg7e8_v_u8mf2x7_tu(vuint8mf2x7_t vd, const uint8_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e8_tu(vd, rs1, rs2, vl);
}

vuint8m1x7_t test_vlsseg7e8_v_u8m1x7_tu(vuint8m1x7_t vd, const uint8_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e8_tu(vd, rs1, rs2, vl);
}

vint8mf8x7_t test_vlsseg7e8_v_i8mf8x7_tum(vbool64_t vm, vint8mf8x7_t vd, const int8_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e8_tum(vm, vd, rs1, rs2, vl);
}

vint8mf4x7_t test_vlsseg7e8_v_i8mf4x7_tum(vbool32_t vm, vint8mf4x7_t vd, const int8_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e8_tum(vm, vd, rs1, rs2, vl);
}

vint8mf2x7_t test_vlsseg7e8_v_i8mf2x7_tum(vbool16_t vm, vint8mf2x7_t vd, const int8_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e8_tum(vm, vd, rs1, rs2, vl);
}

vint8m1x7_t test_vlsseg7e8_v_i8m1x7_tum(vbool8_t vm, vint8m1x7_t vd, const int8_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e8_tum(vm, vd, rs1, rs2, vl);
}

vuint8mf8x7_t test_vlsseg7e8_v_u8mf8x7_tum(vbool64_t vm, vuint8mf8x7_t vd, const uint8_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e8_tum(vm, vd, rs1, rs2, vl);
}

vuint8mf4x7_t test_vlsseg7e8_v_u8mf4x7_tum(vbool32_t vm, vuint8mf4x7_t vd, const uint8_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e8_tum(vm, vd, rs1, rs2, vl);
}

vuint8mf2x7_t test_vlsseg7e8_v_u8mf2x7_tum(vbool16_t vm, vuint8mf2x7_t vd, const uint8_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e8_tum(vm, vd, rs1, rs2, vl);
}

vuint8m1x7_t test_vlsseg7e8_v_u8m1x7_tum(vbool8_t vm, vuint8m1x7_t vd, const uint8_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e8_tum(vm, vd, rs1, rs2, vl);
}

vint8mf8x7_t test_vlsseg7e8_v_i8mf8x7_tumu(vbool64_t vm, vint8mf8x7_t vd, const int8_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e8_tumu(vm, vd, rs1, rs2, vl);
}

vint8mf4x7_t test_vlsseg7e8_v_i8mf4x7_tumu(vbool32_t vm, vint8mf4x7_t vd, const int8_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e8_tumu(vm, vd, rs1, rs2, vl);
}

vint8mf2x7_t test_vlsseg7e8_v_i8mf2x7_tumu(vbool16_t vm, vint8mf2x7_t vd, const int8_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e8_tumu(vm, vd, rs1, rs2, vl);
}

vint8m1x7_t test_vlsseg7e8_v_i8m1x7_tumu(vbool8_t vm, vint8m1x7_t vd, const int8_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e8_tumu(vm, vd, rs1, rs2, vl);
}

vuint8mf8x7_t test_vlsseg7e8_v_u8mf8x7_tumu(vbool64_t vm, vuint8mf8x7_t vd, const uint8_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e8_tumu(vm, vd, rs1, rs2, vl);
}

vuint8mf4x7_t test_vlsseg7e8_v_u8mf4x7_tumu(vbool32_t vm, vuint8mf4x7_t vd, const uint8_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e8_tumu(vm, vd, rs1, rs2, vl);
}

vuint8mf2x7_t test_vlsseg7e8_v_u8mf2x7_tumu(vbool16_t vm, vuint8mf2x7_t vd, const uint8_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e8_tumu(vm, vd, rs1, rs2, vl);
}

vuint8m1x7_t test_vlsseg7e8_v_u8m1x7_tumu(vbool8_t vm, vuint8m1x7_t vd, const uint8_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e8_tumu(vm, vd, rs1, rs2, vl);
}

vint8mf8x7_t test_vlsseg7e8_v_i8mf8x7_mu(vbool64_t vm, vint8mf8x7_t vd, const int8_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e8_mu(vm, vd, rs1, rs2, vl);
}

vint8mf4x7_t test_vlsseg7e8_v_i8mf4x7_mu(vbool32_t vm, vint8mf4x7_t vd, const int8_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e8_mu(vm, vd, rs1, rs2, vl);
}

vint8mf2x7_t test_vlsseg7e8_v_i8mf2x7_mu(vbool16_t vm, vint8mf2x7_t vd, const int8_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e8_mu(vm, vd, rs1, rs2, vl);
}

vint8m1x7_t test_vlsseg7e8_v_i8m1x7_mu(vbool8_t vm, vint8m1x7_t vd, const int8_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e8_mu(vm, vd, rs1, rs2, vl);
}

vuint8mf8x7_t test_vlsseg7e8_v_u8mf8x7_mu(vbool64_t vm, vuint8mf8x7_t vd, const uint8_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e8_mu(vm, vd, rs1, rs2, vl);
}

vuint8mf4x7_t test_vlsseg7e8_v_u8mf4x7_mu(vbool32_t vm, vuint8mf4x7_t vd, const uint8_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e8_mu(vm, vd, rs1, rs2, vl);
}

vuint8mf2x7_t test_vlsseg7e8_v_u8mf2x7_mu(vbool16_t vm, vuint8mf2x7_t vd, const uint8_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e8_mu(vm, vd, rs1, rs2, vl);
}

vuint8m1x7_t test_vlsseg7e8_v_u8m1x7_mu(vbool8_t vm, vuint8m1x7_t vd, const uint8_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e8_mu(vm, vd, rs1, rs2, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vlsseg7e8\.[ivxfswum.]+\s+} 32 } } */
