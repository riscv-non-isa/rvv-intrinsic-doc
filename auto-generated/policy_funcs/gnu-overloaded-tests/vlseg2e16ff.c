/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

vint16mf4x2_t test_vlseg2e16ff_v_i16mf4x2_tu(vint16mf4x2_t vd, const int16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_tu(vd, rs1, new_vl, vl);
}

vint16mf2x2_t test_vlseg2e16ff_v_i16mf2x2_tu(vint16mf2x2_t vd, const int16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_tu(vd, rs1, new_vl, vl);
}

vint16m1x2_t test_vlseg2e16ff_v_i16m1x2_tu(vint16m1x2_t vd, const int16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_tu(vd, rs1, new_vl, vl);
}

vint16m2x2_t test_vlseg2e16ff_v_i16m2x2_tu(vint16m2x2_t vd, const int16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_tu(vd, rs1, new_vl, vl);
}

vint16m4x2_t test_vlseg2e16ff_v_i16m4x2_tu(vint16m4x2_t vd, const int16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_tu(vd, rs1, new_vl, vl);
}

vuint16mf4x2_t test_vlseg2e16ff_v_u16mf4x2_tu(vuint16mf4x2_t vd, const uint16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_tu(vd, rs1, new_vl, vl);
}

vuint16mf2x2_t test_vlseg2e16ff_v_u16mf2x2_tu(vuint16mf2x2_t vd, const uint16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_tu(vd, rs1, new_vl, vl);
}

vuint16m1x2_t test_vlseg2e16ff_v_u16m1x2_tu(vuint16m1x2_t vd, const uint16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_tu(vd, rs1, new_vl, vl);
}

vuint16m2x2_t test_vlseg2e16ff_v_u16m2x2_tu(vuint16m2x2_t vd, const uint16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_tu(vd, rs1, new_vl, vl);
}

vuint16m4x2_t test_vlseg2e16ff_v_u16m4x2_tu(vuint16m4x2_t vd, const uint16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_tu(vd, rs1, new_vl, vl);
}

vint16mf4x2_t test_vlseg2e16ff_v_i16mf4x2_tum(vbool64_t vm, vint16mf4x2_t vd, const int16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_tum(vm, vd, rs1, new_vl, vl);
}

vint16mf2x2_t test_vlseg2e16ff_v_i16mf2x2_tum(vbool32_t vm, vint16mf2x2_t vd, const int16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_tum(vm, vd, rs1, new_vl, vl);
}

vint16m1x2_t test_vlseg2e16ff_v_i16m1x2_tum(vbool16_t vm, vint16m1x2_t vd, const int16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_tum(vm, vd, rs1, new_vl, vl);
}

vint16m2x2_t test_vlseg2e16ff_v_i16m2x2_tum(vbool8_t vm, vint16m2x2_t vd, const int16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_tum(vm, vd, rs1, new_vl, vl);
}

vint16m4x2_t test_vlseg2e16ff_v_i16m4x2_tum(vbool4_t vm, vint16m4x2_t vd, const int16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_tum(vm, vd, rs1, new_vl, vl);
}

vuint16mf4x2_t test_vlseg2e16ff_v_u16mf4x2_tum(vbool64_t vm, vuint16mf4x2_t vd, const uint16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_tum(vm, vd, rs1, new_vl, vl);
}

vuint16mf2x2_t test_vlseg2e16ff_v_u16mf2x2_tum(vbool32_t vm, vuint16mf2x2_t vd, const uint16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_tum(vm, vd, rs1, new_vl, vl);
}

vuint16m1x2_t test_vlseg2e16ff_v_u16m1x2_tum(vbool16_t vm, vuint16m1x2_t vd, const uint16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_tum(vm, vd, rs1, new_vl, vl);
}

vuint16m2x2_t test_vlseg2e16ff_v_u16m2x2_tum(vbool8_t vm, vuint16m2x2_t vd, const uint16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_tum(vm, vd, rs1, new_vl, vl);
}

vuint16m4x2_t test_vlseg2e16ff_v_u16m4x2_tum(vbool4_t vm, vuint16m4x2_t vd, const uint16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_tum(vm, vd, rs1, new_vl, vl);
}

vint16mf4x2_t test_vlseg2e16ff_v_i16mf4x2_tumu(vbool64_t vm, vint16mf4x2_t vd, const int16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_tumu(vm, vd, rs1, new_vl, vl);
}

vint16mf2x2_t test_vlseg2e16ff_v_i16mf2x2_tumu(vbool32_t vm, vint16mf2x2_t vd, const int16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_tumu(vm, vd, rs1, new_vl, vl);
}

vint16m1x2_t test_vlseg2e16ff_v_i16m1x2_tumu(vbool16_t vm, vint16m1x2_t vd, const int16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_tumu(vm, vd, rs1, new_vl, vl);
}

vint16m2x2_t test_vlseg2e16ff_v_i16m2x2_tumu(vbool8_t vm, vint16m2x2_t vd, const int16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_tumu(vm, vd, rs1, new_vl, vl);
}

vint16m4x2_t test_vlseg2e16ff_v_i16m4x2_tumu(vbool4_t vm, vint16m4x2_t vd, const int16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_tumu(vm, vd, rs1, new_vl, vl);
}

vuint16mf4x2_t test_vlseg2e16ff_v_u16mf4x2_tumu(vbool64_t vm, vuint16mf4x2_t vd, const uint16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_tumu(vm, vd, rs1, new_vl, vl);
}

vuint16mf2x2_t test_vlseg2e16ff_v_u16mf2x2_tumu(vbool32_t vm, vuint16mf2x2_t vd, const uint16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_tumu(vm, vd, rs1, new_vl, vl);
}

vuint16m1x2_t test_vlseg2e16ff_v_u16m1x2_tumu(vbool16_t vm, vuint16m1x2_t vd, const uint16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_tumu(vm, vd, rs1, new_vl, vl);
}

vuint16m2x2_t test_vlseg2e16ff_v_u16m2x2_tumu(vbool8_t vm, vuint16m2x2_t vd, const uint16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_tumu(vm, vd, rs1, new_vl, vl);
}

vuint16m4x2_t test_vlseg2e16ff_v_u16m4x2_tumu(vbool4_t vm, vuint16m4x2_t vd, const uint16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_tumu(vm, vd, rs1, new_vl, vl);
}

vint16mf4x2_t test_vlseg2e16ff_v_i16mf4x2_mu(vbool64_t vm, vint16mf4x2_t vd, const int16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_mu(vm, vd, rs1, new_vl, vl);
}

vint16mf2x2_t test_vlseg2e16ff_v_i16mf2x2_mu(vbool32_t vm, vint16mf2x2_t vd, const int16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_mu(vm, vd, rs1, new_vl, vl);
}

vint16m1x2_t test_vlseg2e16ff_v_i16m1x2_mu(vbool16_t vm, vint16m1x2_t vd, const int16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_mu(vm, vd, rs1, new_vl, vl);
}

vint16m2x2_t test_vlseg2e16ff_v_i16m2x2_mu(vbool8_t vm, vint16m2x2_t vd, const int16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_mu(vm, vd, rs1, new_vl, vl);
}

vint16m4x2_t test_vlseg2e16ff_v_i16m4x2_mu(vbool4_t vm, vint16m4x2_t vd, const int16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_mu(vm, vd, rs1, new_vl, vl);
}

vuint16mf4x2_t test_vlseg2e16ff_v_u16mf4x2_mu(vbool64_t vm, vuint16mf4x2_t vd, const uint16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_mu(vm, vd, rs1, new_vl, vl);
}

vuint16mf2x2_t test_vlseg2e16ff_v_u16mf2x2_mu(vbool32_t vm, vuint16mf2x2_t vd, const uint16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_mu(vm, vd, rs1, new_vl, vl);
}

vuint16m1x2_t test_vlseg2e16ff_v_u16m1x2_mu(vbool16_t vm, vuint16m1x2_t vd, const uint16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_mu(vm, vd, rs1, new_vl, vl);
}

vuint16m2x2_t test_vlseg2e16ff_v_u16m2x2_mu(vbool8_t vm, vuint16m2x2_t vd, const uint16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_mu(vm, vd, rs1, new_vl, vl);
}

vuint16m4x2_t test_vlseg2e16ff_v_u16m4x2_mu(vbool4_t vm, vuint16m4x2_t vd, const uint16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_mu(vm, vd, rs1, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vlseg2e16ff\.[ivxfswum.]+\s+} 40 } } */
