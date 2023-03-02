/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat64m1_t test_vle64_v_f64m1(const float64_t *base, size_t vl) {
  return __riscv_vle64_v_f64m1(base, vl);
}

vfloat64m2_t test_vle64_v_f64m2(const float64_t *base, size_t vl) {
  return __riscv_vle64_v_f64m2(base, vl);
}

vfloat64m4_t test_vle64_v_f64m4(const float64_t *base, size_t vl) {
  return __riscv_vle64_v_f64m4(base, vl);
}

vfloat64m8_t test_vle64_v_f64m8(const float64_t *base, size_t vl) {
  return __riscv_vle64_v_f64m8(base, vl);
}

vint64m1_t test_vle64_v_i64m1(const int64_t *base, size_t vl) {
  return __riscv_vle64_v_i64m1(base, vl);
}

vint64m2_t test_vle64_v_i64m2(const int64_t *base, size_t vl) {
  return __riscv_vle64_v_i64m2(base, vl);
}

vint64m4_t test_vle64_v_i64m4(const int64_t *base, size_t vl) {
  return __riscv_vle64_v_i64m4(base, vl);
}

vint64m8_t test_vle64_v_i64m8(const int64_t *base, size_t vl) {
  return __riscv_vle64_v_i64m8(base, vl);
}

vuint64m1_t test_vle64_v_u64m1(const uint64_t *base, size_t vl) {
  return __riscv_vle64_v_u64m1(base, vl);
}

vuint64m2_t test_vle64_v_u64m2(const uint64_t *base, size_t vl) {
  return __riscv_vle64_v_u64m2(base, vl);
}

vuint64m4_t test_vle64_v_u64m4(const uint64_t *base, size_t vl) {
  return __riscv_vle64_v_u64m4(base, vl);
}

vuint64m8_t test_vle64_v_u64m8(const uint64_t *base, size_t vl) {
  return __riscv_vle64_v_u64m8(base, vl);
}

vfloat64m1_t test_vle64_v_f64m1_m(vbool64_t mask, const float64_t *base, size_t vl) {
  return __riscv_vle64_v_f64m1_m(mask, base, vl);
}

vfloat64m2_t test_vle64_v_f64m2_m(vbool32_t mask, const float64_t *base, size_t vl) {
  return __riscv_vle64_v_f64m2_m(mask, base, vl);
}

vfloat64m4_t test_vle64_v_f64m4_m(vbool16_t mask, const float64_t *base, size_t vl) {
  return __riscv_vle64_v_f64m4_m(mask, base, vl);
}

vfloat64m8_t test_vle64_v_f64m8_m(vbool8_t mask, const float64_t *base, size_t vl) {
  return __riscv_vle64_v_f64m8_m(mask, base, vl);
}

vint64m1_t test_vle64_v_i64m1_m(vbool64_t mask, const int64_t *base, size_t vl) {
  return __riscv_vle64_v_i64m1_m(mask, base, vl);
}

vint64m2_t test_vle64_v_i64m2_m(vbool32_t mask, const int64_t *base, size_t vl) {
  return __riscv_vle64_v_i64m2_m(mask, base, vl);
}

vint64m4_t test_vle64_v_i64m4_m(vbool16_t mask, const int64_t *base, size_t vl) {
  return __riscv_vle64_v_i64m4_m(mask, base, vl);
}

vint64m8_t test_vle64_v_i64m8_m(vbool8_t mask, const int64_t *base, size_t vl) {
  return __riscv_vle64_v_i64m8_m(mask, base, vl);
}

vuint64m1_t test_vle64_v_u64m1_m(vbool64_t mask, const uint64_t *base, size_t vl) {
  return __riscv_vle64_v_u64m1_m(mask, base, vl);
}

vuint64m2_t test_vle64_v_u64m2_m(vbool32_t mask, const uint64_t *base, size_t vl) {
  return __riscv_vle64_v_u64m2_m(mask, base, vl);
}

vuint64m4_t test_vle64_v_u64m4_m(vbool16_t mask, const uint64_t *base, size_t vl) {
  return __riscv_vle64_v_u64m4_m(mask, base, vl);
}

vuint64m8_t test_vle64_v_u64m8_m(vbool8_t mask, const uint64_t *base, size_t vl) {
  return __riscv_vle64_v_u64m8_m(mask, base, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*[a-x0-9]+,\s*e[0-9]+,\s*m[f]?[1248],\s*t[au],\s*m[au]\s+vle64\.[,\sa-x0-9()]+} 24 } } */
