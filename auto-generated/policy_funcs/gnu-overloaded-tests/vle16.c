/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

vint16mf4_t test_vle16_v_i16mf4_tu(vint16mf4_t vd, const int16_t *rs1, size_t vl) {
  return __riscv_vle16_tu(vd, rs1, vl);
}

vint16mf2_t test_vle16_v_i16mf2_tu(vint16mf2_t vd, const int16_t *rs1, size_t vl) {
  return __riscv_vle16_tu(vd, rs1, vl);
}

vint16m1_t test_vle16_v_i16m1_tu(vint16m1_t vd, const int16_t *rs1, size_t vl) {
  return __riscv_vle16_tu(vd, rs1, vl);
}

vint16m2_t test_vle16_v_i16m2_tu(vint16m2_t vd, const int16_t *rs1, size_t vl) {
  return __riscv_vle16_tu(vd, rs1, vl);
}

vint16m4_t test_vle16_v_i16m4_tu(vint16m4_t vd, const int16_t *rs1, size_t vl) {
  return __riscv_vle16_tu(vd, rs1, vl);
}

vint16m8_t test_vle16_v_i16m8_tu(vint16m8_t vd, const int16_t *rs1, size_t vl) {
  return __riscv_vle16_tu(vd, rs1, vl);
}

vuint16mf4_t test_vle16_v_u16mf4_tu(vuint16mf4_t vd, const uint16_t *rs1, size_t vl) {
  return __riscv_vle16_tu(vd, rs1, vl);
}

vuint16mf2_t test_vle16_v_u16mf2_tu(vuint16mf2_t vd, const uint16_t *rs1, size_t vl) {
  return __riscv_vle16_tu(vd, rs1, vl);
}

vuint16m1_t test_vle16_v_u16m1_tu(vuint16m1_t vd, const uint16_t *rs1, size_t vl) {
  return __riscv_vle16_tu(vd, rs1, vl);
}

vuint16m2_t test_vle16_v_u16m2_tu(vuint16m2_t vd, const uint16_t *rs1, size_t vl) {
  return __riscv_vle16_tu(vd, rs1, vl);
}

vuint16m4_t test_vle16_v_u16m4_tu(vuint16m4_t vd, const uint16_t *rs1, size_t vl) {
  return __riscv_vle16_tu(vd, rs1, vl);
}

vuint16m8_t test_vle16_v_u16m8_tu(vuint16m8_t vd, const uint16_t *rs1, size_t vl) {
  return __riscv_vle16_tu(vd, rs1, vl);
}

vint16mf4_t test_vle16_v_i16mf4_tum(vbool64_t vm, vint16mf4_t vd, const int16_t *rs1, size_t vl) {
  return __riscv_vle16_tum(vm, vd, rs1, vl);
}

vint16mf2_t test_vle16_v_i16mf2_tum(vbool32_t vm, vint16mf2_t vd, const int16_t *rs1, size_t vl) {
  return __riscv_vle16_tum(vm, vd, rs1, vl);
}

vint16m1_t test_vle16_v_i16m1_tum(vbool16_t vm, vint16m1_t vd, const int16_t *rs1, size_t vl) {
  return __riscv_vle16_tum(vm, vd, rs1, vl);
}

vint16m2_t test_vle16_v_i16m2_tum(vbool8_t vm, vint16m2_t vd, const int16_t *rs1, size_t vl) {
  return __riscv_vle16_tum(vm, vd, rs1, vl);
}

vint16m4_t test_vle16_v_i16m4_tum(vbool4_t vm, vint16m4_t vd, const int16_t *rs1, size_t vl) {
  return __riscv_vle16_tum(vm, vd, rs1, vl);
}

vint16m8_t test_vle16_v_i16m8_tum(vbool2_t vm, vint16m8_t vd, const int16_t *rs1, size_t vl) {
  return __riscv_vle16_tum(vm, vd, rs1, vl);
}

vuint16mf4_t test_vle16_v_u16mf4_tum(vbool64_t vm, vuint16mf4_t vd, const uint16_t *rs1, size_t vl) {
  return __riscv_vle16_tum(vm, vd, rs1, vl);
}

vuint16mf2_t test_vle16_v_u16mf2_tum(vbool32_t vm, vuint16mf2_t vd, const uint16_t *rs1, size_t vl) {
  return __riscv_vle16_tum(vm, vd, rs1, vl);
}

vuint16m1_t test_vle16_v_u16m1_tum(vbool16_t vm, vuint16m1_t vd, const uint16_t *rs1, size_t vl) {
  return __riscv_vle16_tum(vm, vd, rs1, vl);
}

vuint16m2_t test_vle16_v_u16m2_tum(vbool8_t vm, vuint16m2_t vd, const uint16_t *rs1, size_t vl) {
  return __riscv_vle16_tum(vm, vd, rs1, vl);
}

vuint16m4_t test_vle16_v_u16m4_tum(vbool4_t vm, vuint16m4_t vd, const uint16_t *rs1, size_t vl) {
  return __riscv_vle16_tum(vm, vd, rs1, vl);
}

vuint16m8_t test_vle16_v_u16m8_tum(vbool2_t vm, vuint16m8_t vd, const uint16_t *rs1, size_t vl) {
  return __riscv_vle16_tum(vm, vd, rs1, vl);
}

vint16mf4_t test_vle16_v_i16mf4_tumu(vbool64_t vm, vint16mf4_t vd, const int16_t *rs1, size_t vl) {
  return __riscv_vle16_tumu(vm, vd, rs1, vl);
}

vint16mf2_t test_vle16_v_i16mf2_tumu(vbool32_t vm, vint16mf2_t vd, const int16_t *rs1, size_t vl) {
  return __riscv_vle16_tumu(vm, vd, rs1, vl);
}

vint16m1_t test_vle16_v_i16m1_tumu(vbool16_t vm, vint16m1_t vd, const int16_t *rs1, size_t vl) {
  return __riscv_vle16_tumu(vm, vd, rs1, vl);
}

vint16m2_t test_vle16_v_i16m2_tumu(vbool8_t vm, vint16m2_t vd, const int16_t *rs1, size_t vl) {
  return __riscv_vle16_tumu(vm, vd, rs1, vl);
}

vint16m4_t test_vle16_v_i16m4_tumu(vbool4_t vm, vint16m4_t vd, const int16_t *rs1, size_t vl) {
  return __riscv_vle16_tumu(vm, vd, rs1, vl);
}

vint16m8_t test_vle16_v_i16m8_tumu(vbool2_t vm, vint16m8_t vd, const int16_t *rs1, size_t vl) {
  return __riscv_vle16_tumu(vm, vd, rs1, vl);
}

vuint16mf4_t test_vle16_v_u16mf4_tumu(vbool64_t vm, vuint16mf4_t vd, const uint16_t *rs1, size_t vl) {
  return __riscv_vle16_tumu(vm, vd, rs1, vl);
}

vuint16mf2_t test_vle16_v_u16mf2_tumu(vbool32_t vm, vuint16mf2_t vd, const uint16_t *rs1, size_t vl) {
  return __riscv_vle16_tumu(vm, vd, rs1, vl);
}

vuint16m1_t test_vle16_v_u16m1_tumu(vbool16_t vm, vuint16m1_t vd, const uint16_t *rs1, size_t vl) {
  return __riscv_vle16_tumu(vm, vd, rs1, vl);
}

vuint16m2_t test_vle16_v_u16m2_tumu(vbool8_t vm, vuint16m2_t vd, const uint16_t *rs1, size_t vl) {
  return __riscv_vle16_tumu(vm, vd, rs1, vl);
}

vuint16m4_t test_vle16_v_u16m4_tumu(vbool4_t vm, vuint16m4_t vd, const uint16_t *rs1, size_t vl) {
  return __riscv_vle16_tumu(vm, vd, rs1, vl);
}

vuint16m8_t test_vle16_v_u16m8_tumu(vbool2_t vm, vuint16m8_t vd, const uint16_t *rs1, size_t vl) {
  return __riscv_vle16_tumu(vm, vd, rs1, vl);
}

vint16mf4_t test_vle16_v_i16mf4_mu(vbool64_t vm, vint16mf4_t vd, const int16_t *rs1, size_t vl) {
  return __riscv_vle16_mu(vm, vd, rs1, vl);
}

vint16mf2_t test_vle16_v_i16mf2_mu(vbool32_t vm, vint16mf2_t vd, const int16_t *rs1, size_t vl) {
  return __riscv_vle16_mu(vm, vd, rs1, vl);
}

vint16m1_t test_vle16_v_i16m1_mu(vbool16_t vm, vint16m1_t vd, const int16_t *rs1, size_t vl) {
  return __riscv_vle16_mu(vm, vd, rs1, vl);
}

vint16m2_t test_vle16_v_i16m2_mu(vbool8_t vm, vint16m2_t vd, const int16_t *rs1, size_t vl) {
  return __riscv_vle16_mu(vm, vd, rs1, vl);
}

vint16m4_t test_vle16_v_i16m4_mu(vbool4_t vm, vint16m4_t vd, const int16_t *rs1, size_t vl) {
  return __riscv_vle16_mu(vm, vd, rs1, vl);
}

vint16m8_t test_vle16_v_i16m8_mu(vbool2_t vm, vint16m8_t vd, const int16_t *rs1, size_t vl) {
  return __riscv_vle16_mu(vm, vd, rs1, vl);
}

vuint16mf4_t test_vle16_v_u16mf4_mu(vbool64_t vm, vuint16mf4_t vd, const uint16_t *rs1, size_t vl) {
  return __riscv_vle16_mu(vm, vd, rs1, vl);
}

vuint16mf2_t test_vle16_v_u16mf2_mu(vbool32_t vm, vuint16mf2_t vd, const uint16_t *rs1, size_t vl) {
  return __riscv_vle16_mu(vm, vd, rs1, vl);
}

vuint16m1_t test_vle16_v_u16m1_mu(vbool16_t vm, vuint16m1_t vd, const uint16_t *rs1, size_t vl) {
  return __riscv_vle16_mu(vm, vd, rs1, vl);
}

vuint16m2_t test_vle16_v_u16m2_mu(vbool8_t vm, vuint16m2_t vd, const uint16_t *rs1, size_t vl) {
  return __riscv_vle16_mu(vm, vd, rs1, vl);
}

vuint16m4_t test_vle16_v_u16m4_mu(vbool4_t vm, vuint16m4_t vd, const uint16_t *rs1, size_t vl) {
  return __riscv_vle16_mu(vm, vd, rs1, vl);
}

vuint16m8_t test_vle16_v_u16m8_mu(vbool2_t vm, vuint16m8_t vd, const uint16_t *rs1, size_t vl) {
  return __riscv_vle16_mu(vm, vd, rs1, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vle16\.[ivxfswum.]+\s+} 78 } } */
