/* { dg-do compile } */
/* { dg-options "-march=rv32gc_zve64x -mabi=ilp32d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include "riscv_vector.h"

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint64m1_t test_vle64ff_v_i64m1(const int64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle64ff_v_i64m1(base, new_vl, vl);
}

vint64m2_t test_vle64ff_v_i64m2(const int64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle64ff_v_i64m2(base, new_vl, vl);
}

vint64m4_t test_vle64ff_v_i64m4(const int64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle64ff_v_i64m4(base, new_vl, vl);
}

vint64m8_t test_vle64ff_v_i64m8(const int64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle64ff_v_i64m8(base, new_vl, vl);
}

vuint64m1_t test_vle64ff_v_u64m1(const uint64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle64ff_v_u64m1(base, new_vl, vl);
}

vuint64m2_t test_vle64ff_v_u64m2(const uint64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle64ff_v_u64m2(base, new_vl, vl);
}

vuint64m4_t test_vle64ff_v_u64m4(const uint64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle64ff_v_u64m4(base, new_vl, vl);
}

vuint64m8_t test_vle64ff_v_u64m8(const uint64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle64ff_v_u64m8(base, new_vl, vl);
}

vint64m1_t test_vle64ff_v_i64m1_m(vbool64_t mask, const int64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle64ff_v_i64m1_m(mask, base, new_vl, vl);
}

vint64m2_t test_vle64ff_v_i64m2_m(vbool32_t mask, const int64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle64ff_v_i64m2_m(mask, base, new_vl, vl);
}

vint64m4_t test_vle64ff_v_i64m4_m(vbool16_t mask, const int64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle64ff_v_i64m4_m(mask, base, new_vl, vl);
}

vint64m8_t test_vle64ff_v_i64m8_m(vbool8_t mask, const int64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle64ff_v_i64m8_m(mask, base, new_vl, vl);
}

vuint64m1_t test_vle64ff_v_u64m1_m(vbool64_t mask, const uint64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle64ff_v_u64m1_m(mask, base, new_vl, vl);
}

vuint64m2_t test_vle64ff_v_u64m2_m(vbool32_t mask, const uint64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle64ff_v_u64m2_m(mask, base, new_vl, vl);
}

vuint64m4_t test_vle64ff_v_u64m4_m(vbool16_t mask, const uint64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle64ff_v_u64m4_m(mask, base, new_vl, vl);
}

vuint64m8_t test_vle64ff_v_u64m8_m(vbool8_t mask, const uint64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle64ff_v_u64m8_m(mask, base, new_vl, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vle64ff\.[ivxfswum.]+\s+} 16 } } */
