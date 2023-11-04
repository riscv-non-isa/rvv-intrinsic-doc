/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

vfloat64m1_t test_vle64_v_f64m1_tu(vfloat64m1_t vd, const double *rs1, size_t vl) {
  return __riscv_vle64_tu(vd, rs1, vl);
}

vfloat64m2_t test_vle64_v_f64m2_tu(vfloat64m2_t vd, const double *rs1, size_t vl) {
  return __riscv_vle64_tu(vd, rs1, vl);
}

vfloat64m4_t test_vle64_v_f64m4_tu(vfloat64m4_t vd, const double *rs1, size_t vl) {
  return __riscv_vle64_tu(vd, rs1, vl);
}

vfloat64m8_t test_vle64_v_f64m8_tu(vfloat64m8_t vd, const double *rs1, size_t vl) {
  return __riscv_vle64_tu(vd, rs1, vl);
}

vint64m1_t test_vle64_v_i64m1_tu(vint64m1_t vd, const int64_t *rs1, size_t vl) {
  return __riscv_vle64_tu(vd, rs1, vl);
}

vint64m2_t test_vle64_v_i64m2_tu(vint64m2_t vd, const int64_t *rs1, size_t vl) {
  return __riscv_vle64_tu(vd, rs1, vl);
}

vint64m4_t test_vle64_v_i64m4_tu(vint64m4_t vd, const int64_t *rs1, size_t vl) {
  return __riscv_vle64_tu(vd, rs1, vl);
}

vint64m8_t test_vle64_v_i64m8_tu(vint64m8_t vd, const int64_t *rs1, size_t vl) {
  return __riscv_vle64_tu(vd, rs1, vl);
}

vuint64m1_t test_vle64_v_u64m1_tu(vuint64m1_t vd, const uint64_t *rs1, size_t vl) {
  return __riscv_vle64_tu(vd, rs1, vl);
}

vuint64m2_t test_vle64_v_u64m2_tu(vuint64m2_t vd, const uint64_t *rs1, size_t vl) {
  return __riscv_vle64_tu(vd, rs1, vl);
}

vuint64m4_t test_vle64_v_u64m4_tu(vuint64m4_t vd, const uint64_t *rs1, size_t vl) {
  return __riscv_vle64_tu(vd, rs1, vl);
}

vuint64m8_t test_vle64_v_u64m8_tu(vuint64m8_t vd, const uint64_t *rs1, size_t vl) {
  return __riscv_vle64_tu(vd, rs1, vl);
}

vfloat64m1_t test_vle64_v_f64m1_tum(vbool64_t vm, vfloat64m1_t vd, const double *rs1, size_t vl) {
  return __riscv_vle64_tum(vm, vd, rs1, vl);
}

vfloat64m2_t test_vle64_v_f64m2_tum(vbool32_t vm, vfloat64m2_t vd, const double *rs1, size_t vl) {
  return __riscv_vle64_tum(vm, vd, rs1, vl);
}

vfloat64m4_t test_vle64_v_f64m4_tum(vbool16_t vm, vfloat64m4_t vd, const double *rs1, size_t vl) {
  return __riscv_vle64_tum(vm, vd, rs1, vl);
}

vfloat64m8_t test_vle64_v_f64m8_tum(vbool8_t vm, vfloat64m8_t vd, const double *rs1, size_t vl) {
  return __riscv_vle64_tum(vm, vd, rs1, vl);
}

vint64m1_t test_vle64_v_i64m1_tum(vbool64_t vm, vint64m1_t vd, const int64_t *rs1, size_t vl) {
  return __riscv_vle64_tum(vm, vd, rs1, vl);
}

vint64m2_t test_vle64_v_i64m2_tum(vbool32_t vm, vint64m2_t vd, const int64_t *rs1, size_t vl) {
  return __riscv_vle64_tum(vm, vd, rs1, vl);
}

vint64m4_t test_vle64_v_i64m4_tum(vbool16_t vm, vint64m4_t vd, const int64_t *rs1, size_t vl) {
  return __riscv_vle64_tum(vm, vd, rs1, vl);
}

vint64m8_t test_vle64_v_i64m8_tum(vbool8_t vm, vint64m8_t vd, const int64_t *rs1, size_t vl) {
  return __riscv_vle64_tum(vm, vd, rs1, vl);
}

vuint64m1_t test_vle64_v_u64m1_tum(vbool64_t vm, vuint64m1_t vd, const uint64_t *rs1, size_t vl) {
  return __riscv_vle64_tum(vm, vd, rs1, vl);
}

vuint64m2_t test_vle64_v_u64m2_tum(vbool32_t vm, vuint64m2_t vd, const uint64_t *rs1, size_t vl) {
  return __riscv_vle64_tum(vm, vd, rs1, vl);
}

vuint64m4_t test_vle64_v_u64m4_tum(vbool16_t vm, vuint64m4_t vd, const uint64_t *rs1, size_t vl) {
  return __riscv_vle64_tum(vm, vd, rs1, vl);
}

vuint64m8_t test_vle64_v_u64m8_tum(vbool8_t vm, vuint64m8_t vd, const uint64_t *rs1, size_t vl) {
  return __riscv_vle64_tum(vm, vd, rs1, vl);
}

vfloat64m1_t test_vle64_v_f64m1_tumu(vbool64_t vm, vfloat64m1_t vd, const double *rs1, size_t vl) {
  return __riscv_vle64_tumu(vm, vd, rs1, vl);
}

vfloat64m2_t test_vle64_v_f64m2_tumu(vbool32_t vm, vfloat64m2_t vd, const double *rs1, size_t vl) {
  return __riscv_vle64_tumu(vm, vd, rs1, vl);
}

vfloat64m4_t test_vle64_v_f64m4_tumu(vbool16_t vm, vfloat64m4_t vd, const double *rs1, size_t vl) {
  return __riscv_vle64_tumu(vm, vd, rs1, vl);
}

vfloat64m8_t test_vle64_v_f64m8_tumu(vbool8_t vm, vfloat64m8_t vd, const double *rs1, size_t vl) {
  return __riscv_vle64_tumu(vm, vd, rs1, vl);
}

vint64m1_t test_vle64_v_i64m1_tumu(vbool64_t vm, vint64m1_t vd, const int64_t *rs1, size_t vl) {
  return __riscv_vle64_tumu(vm, vd, rs1, vl);
}

vint64m2_t test_vle64_v_i64m2_tumu(vbool32_t vm, vint64m2_t vd, const int64_t *rs1, size_t vl) {
  return __riscv_vle64_tumu(vm, vd, rs1, vl);
}

vint64m4_t test_vle64_v_i64m4_tumu(vbool16_t vm, vint64m4_t vd, const int64_t *rs1, size_t vl) {
  return __riscv_vle64_tumu(vm, vd, rs1, vl);
}

vint64m8_t test_vle64_v_i64m8_tumu(vbool8_t vm, vint64m8_t vd, const int64_t *rs1, size_t vl) {
  return __riscv_vle64_tumu(vm, vd, rs1, vl);
}

vuint64m1_t test_vle64_v_u64m1_tumu(vbool64_t vm, vuint64m1_t vd, const uint64_t *rs1, size_t vl) {
  return __riscv_vle64_tumu(vm, vd, rs1, vl);
}

vuint64m2_t test_vle64_v_u64m2_tumu(vbool32_t vm, vuint64m2_t vd, const uint64_t *rs1, size_t vl) {
  return __riscv_vle64_tumu(vm, vd, rs1, vl);
}

vuint64m4_t test_vle64_v_u64m4_tumu(vbool16_t vm, vuint64m4_t vd, const uint64_t *rs1, size_t vl) {
  return __riscv_vle64_tumu(vm, vd, rs1, vl);
}

vuint64m8_t test_vle64_v_u64m8_tumu(vbool8_t vm, vuint64m8_t vd, const uint64_t *rs1, size_t vl) {
  return __riscv_vle64_tumu(vm, vd, rs1, vl);
}

vfloat64m1_t test_vle64_v_f64m1_mu(vbool64_t vm, vfloat64m1_t vd, const double *rs1, size_t vl) {
  return __riscv_vle64_mu(vm, vd, rs1, vl);
}

vfloat64m2_t test_vle64_v_f64m2_mu(vbool32_t vm, vfloat64m2_t vd, const double *rs1, size_t vl) {
  return __riscv_vle64_mu(vm, vd, rs1, vl);
}

vfloat64m4_t test_vle64_v_f64m4_mu(vbool16_t vm, vfloat64m4_t vd, const double *rs1, size_t vl) {
  return __riscv_vle64_mu(vm, vd, rs1, vl);
}

vfloat64m8_t test_vle64_v_f64m8_mu(vbool8_t vm, vfloat64m8_t vd, const double *rs1, size_t vl) {
  return __riscv_vle64_mu(vm, vd, rs1, vl);
}

vint64m1_t test_vle64_v_i64m1_mu(vbool64_t vm, vint64m1_t vd, const int64_t *rs1, size_t vl) {
  return __riscv_vle64_mu(vm, vd, rs1, vl);
}

vint64m2_t test_vle64_v_i64m2_mu(vbool32_t vm, vint64m2_t vd, const int64_t *rs1, size_t vl) {
  return __riscv_vle64_mu(vm, vd, rs1, vl);
}

vint64m4_t test_vle64_v_i64m4_mu(vbool16_t vm, vint64m4_t vd, const int64_t *rs1, size_t vl) {
  return __riscv_vle64_mu(vm, vd, rs1, vl);
}

vint64m8_t test_vle64_v_i64m8_mu(vbool8_t vm, vint64m8_t vd, const int64_t *rs1, size_t vl) {
  return __riscv_vle64_mu(vm, vd, rs1, vl);
}

vuint64m1_t test_vle64_v_u64m1_mu(vbool64_t vm, vuint64m1_t vd, const uint64_t *rs1, size_t vl) {
  return __riscv_vle64_mu(vm, vd, rs1, vl);
}

vuint64m2_t test_vle64_v_u64m2_mu(vbool32_t vm, vuint64m2_t vd, const uint64_t *rs1, size_t vl) {
  return __riscv_vle64_mu(vm, vd, rs1, vl);
}

vuint64m4_t test_vle64_v_u64m4_mu(vbool16_t vm, vuint64m4_t vd, const uint64_t *rs1, size_t vl) {
  return __riscv_vle64_mu(vm, vd, rs1, vl);
}

vuint64m8_t test_vle64_v_u64m8_mu(vbool8_t vm, vuint64m8_t vd, const uint64_t *rs1, size_t vl) {
  return __riscv_vle64_mu(vm, vd, rs1, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vle64\.[ivxfswum.]+\s+} 48 } } */
