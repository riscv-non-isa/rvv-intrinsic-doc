/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

vfloat64m1_t test_vlse64_v_f64m1(const double *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse64_v_f64m1(rs1, rs2, vl);
}

vfloat64m2_t test_vlse64_v_f64m2(const double *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse64_v_f64m2(rs1, rs2, vl);
}

vfloat64m4_t test_vlse64_v_f64m4(const double *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse64_v_f64m4(rs1, rs2, vl);
}

vfloat64m8_t test_vlse64_v_f64m8(const double *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse64_v_f64m8(rs1, rs2, vl);
}

vint64m1_t test_vlse64_v_i64m1(const int64_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse64_v_i64m1(rs1, rs2, vl);
}

vint64m2_t test_vlse64_v_i64m2(const int64_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse64_v_i64m2(rs1, rs2, vl);
}

vint64m4_t test_vlse64_v_i64m4(const int64_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse64_v_i64m4(rs1, rs2, vl);
}

vint64m8_t test_vlse64_v_i64m8(const int64_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse64_v_i64m8(rs1, rs2, vl);
}

vuint64m1_t test_vlse64_v_u64m1(const uint64_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse64_v_u64m1(rs1, rs2, vl);
}

vuint64m2_t test_vlse64_v_u64m2(const uint64_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse64_v_u64m2(rs1, rs2, vl);
}

vuint64m4_t test_vlse64_v_u64m4(const uint64_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse64_v_u64m4(rs1, rs2, vl);
}

vuint64m8_t test_vlse64_v_u64m8(const uint64_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse64_v_u64m8(rs1, rs2, vl);
}

vfloat64m1_t test_vlse64_v_f64m1_m(vbool64_t vm, const double *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse64_v_f64m1_m(vm, rs1, rs2, vl);
}

vfloat64m2_t test_vlse64_v_f64m2_m(vbool32_t vm, const double *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse64_v_f64m2_m(vm, rs1, rs2, vl);
}

vfloat64m4_t test_vlse64_v_f64m4_m(vbool16_t vm, const double *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse64_v_f64m4_m(vm, rs1, rs2, vl);
}

vfloat64m8_t test_vlse64_v_f64m8_m(vbool8_t vm, const double *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse64_v_f64m8_m(vm, rs1, rs2, vl);
}

vint64m1_t test_vlse64_v_i64m1_m(vbool64_t vm, const int64_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse64_v_i64m1_m(vm, rs1, rs2, vl);
}

vint64m2_t test_vlse64_v_i64m2_m(vbool32_t vm, const int64_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse64_v_i64m2_m(vm, rs1, rs2, vl);
}

vint64m4_t test_vlse64_v_i64m4_m(vbool16_t vm, const int64_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse64_v_i64m4_m(vm, rs1, rs2, vl);
}

vint64m8_t test_vlse64_v_i64m8_m(vbool8_t vm, const int64_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse64_v_i64m8_m(vm, rs1, rs2, vl);
}

vuint64m1_t test_vlse64_v_u64m1_m(vbool64_t vm, const uint64_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse64_v_u64m1_m(vm, rs1, rs2, vl);
}

vuint64m2_t test_vlse64_v_u64m2_m(vbool32_t vm, const uint64_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse64_v_u64m2_m(vm, rs1, rs2, vl);
}

vuint64m4_t test_vlse64_v_u64m4_m(vbool16_t vm, const uint64_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse64_v_u64m4_m(vm, rs1, rs2, vl);
}

vuint64m8_t test_vlse64_v_u64m8_m(vbool8_t vm, const uint64_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse64_v_u64m8_m(vm, rs1, rs2, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vlse64\.[ivxfswum.]+\s+} 24 } } */
