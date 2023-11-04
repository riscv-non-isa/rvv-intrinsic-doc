/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

vfloat64m1x8_t test_vlsseg8e64_v_f64m1x8_tu(vfloat64m1x8_t vd, const double *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg8e64_tu(vd, rs1, rs2, vl);
}

vint64m1x8_t test_vlsseg8e64_v_i64m1x8_tu(vint64m1x8_t vd, const int64_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg8e64_tu(vd, rs1, rs2, vl);
}

vuint64m1x8_t test_vlsseg8e64_v_u64m1x8_tu(vuint64m1x8_t vd, const uint64_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg8e64_tu(vd, rs1, rs2, vl);
}

vfloat64m1x8_t test_vlsseg8e64_v_f64m1x8_tum(vbool64_t vm, vfloat64m1x8_t vd, const double *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg8e64_tum(vm, vd, rs1, rs2, vl);
}

vint64m1x8_t test_vlsseg8e64_v_i64m1x8_tum(vbool64_t vm, vint64m1x8_t vd, const int64_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg8e64_tum(vm, vd, rs1, rs2, vl);
}

vuint64m1x8_t test_vlsseg8e64_v_u64m1x8_tum(vbool64_t vm, vuint64m1x8_t vd, const uint64_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg8e64_tum(vm, vd, rs1, rs2, vl);
}

vfloat64m1x8_t test_vlsseg8e64_v_f64m1x8_tumu(vbool64_t vm, vfloat64m1x8_t vd, const double *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg8e64_tumu(vm, vd, rs1, rs2, vl);
}

vint64m1x8_t test_vlsseg8e64_v_i64m1x8_tumu(vbool64_t vm, vint64m1x8_t vd, const int64_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg8e64_tumu(vm, vd, rs1, rs2, vl);
}

vuint64m1x8_t test_vlsseg8e64_v_u64m1x8_tumu(vbool64_t vm, vuint64m1x8_t vd, const uint64_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg8e64_tumu(vm, vd, rs1, rs2, vl);
}

vfloat64m1x8_t test_vlsseg8e64_v_f64m1x8_mu(vbool64_t vm, vfloat64m1x8_t vd, const double *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg8e64_mu(vm, vd, rs1, rs2, vl);
}

vint64m1x8_t test_vlsseg8e64_v_i64m1x8_mu(vbool64_t vm, vint64m1x8_t vd, const int64_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg8e64_mu(vm, vd, rs1, rs2, vl);
}

vuint64m1x8_t test_vlsseg8e64_v_u64m1x8_mu(vbool64_t vm, vuint64m1x8_t vd, const uint64_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg8e64_mu(vm, vd, rs1, rs2, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vlsseg8e64\.[ivxfswum.]+\s+} 12 } } */
