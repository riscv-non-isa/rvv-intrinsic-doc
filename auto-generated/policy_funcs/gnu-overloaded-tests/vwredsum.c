/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint16m1_t test_vwredsum_vs_i8mf8_i16m1_tu(vint16m1_t vd, vint8mf8_t vs2, vint16m1_t vs1, size_t vl) {
  return __riscv_vwredsum_tu(vd, vs2, vs1, vl);
}

vint16m1_t test_vwredsum_vs_i8mf4_i16m1_tu(vint16m1_t vd, vint8mf4_t vs2, vint16m1_t vs1, size_t vl) {
  return __riscv_vwredsum_tu(vd, vs2, vs1, vl);
}

vint16m1_t test_vwredsum_vs_i8mf2_i16m1_tu(vint16m1_t vd, vint8mf2_t vs2, vint16m1_t vs1, size_t vl) {
  return __riscv_vwredsum_tu(vd, vs2, vs1, vl);
}

vint16m1_t test_vwredsum_vs_i8m1_i16m1_tu(vint16m1_t vd, vint8m1_t vs2, vint16m1_t vs1, size_t vl) {
  return __riscv_vwredsum_tu(vd, vs2, vs1, vl);
}

vint16m1_t test_vwredsum_vs_i8m2_i16m1_tu(vint16m1_t vd, vint8m2_t vs2, vint16m1_t vs1, size_t vl) {
  return __riscv_vwredsum_tu(vd, vs2, vs1, vl);
}

vint16m1_t test_vwredsum_vs_i8m4_i16m1_tu(vint16m1_t vd, vint8m4_t vs2, vint16m1_t vs1, size_t vl) {
  return __riscv_vwredsum_tu(vd, vs2, vs1, vl);
}

vint16m1_t test_vwredsum_vs_i8m8_i16m1_tu(vint16m1_t vd, vint8m8_t vs2, vint16m1_t vs1, size_t vl) {
  return __riscv_vwredsum_tu(vd, vs2, vs1, vl);
}

vint32m1_t test_vwredsum_vs_i16mf4_i32m1_tu(vint32m1_t vd, vint16mf4_t vs2, vint32m1_t vs1, size_t vl) {
  return __riscv_vwredsum_tu(vd, vs2, vs1, vl);
}

vint32m1_t test_vwredsum_vs_i16mf2_i32m1_tu(vint32m1_t vd, vint16mf2_t vs2, vint32m1_t vs1, size_t vl) {
  return __riscv_vwredsum_tu(vd, vs2, vs1, vl);
}

vint32m1_t test_vwredsum_vs_i16m1_i32m1_tu(vint32m1_t vd, vint16m1_t vs2, vint32m1_t vs1, size_t vl) {
  return __riscv_vwredsum_tu(vd, vs2, vs1, vl);
}

vint32m1_t test_vwredsum_vs_i16m2_i32m1_tu(vint32m1_t vd, vint16m2_t vs2, vint32m1_t vs1, size_t vl) {
  return __riscv_vwredsum_tu(vd, vs2, vs1, vl);
}

vint32m1_t test_vwredsum_vs_i16m4_i32m1_tu(vint32m1_t vd, vint16m4_t vs2, vint32m1_t vs1, size_t vl) {
  return __riscv_vwredsum_tu(vd, vs2, vs1, vl);
}

vint32m1_t test_vwredsum_vs_i16m8_i32m1_tu(vint32m1_t vd, vint16m8_t vs2, vint32m1_t vs1, size_t vl) {
  return __riscv_vwredsum_tu(vd, vs2, vs1, vl);
}

vint64m1_t test_vwredsum_vs_i32mf2_i64m1_tu(vint64m1_t vd, vint32mf2_t vs2, vint64m1_t vs1, size_t vl) {
  return __riscv_vwredsum_tu(vd, vs2, vs1, vl);
}

vint64m1_t test_vwredsum_vs_i32m1_i64m1_tu(vint64m1_t vd, vint32m1_t vs2, vint64m1_t vs1, size_t vl) {
  return __riscv_vwredsum_tu(vd, vs2, vs1, vl);
}

vint64m1_t test_vwredsum_vs_i32m2_i64m1_tu(vint64m1_t vd, vint32m2_t vs2, vint64m1_t vs1, size_t vl) {
  return __riscv_vwredsum_tu(vd, vs2, vs1, vl);
}

vint64m1_t test_vwredsum_vs_i32m4_i64m1_tu(vint64m1_t vd, vint32m4_t vs2, vint64m1_t vs1, size_t vl) {
  return __riscv_vwredsum_tu(vd, vs2, vs1, vl);
}

vint64m1_t test_vwredsum_vs_i32m8_i64m1_tu(vint64m1_t vd, vint32m8_t vs2, vint64m1_t vs1, size_t vl) {
  return __riscv_vwredsum_tu(vd, vs2, vs1, vl);
}

vint16m1_t test_vwredsum_vs_i8mf8_i16m1_tum(vbool64_t vm, vint16m1_t vd, vint8mf8_t vs2, vint16m1_t vs1, size_t vl) {
  return __riscv_vwredsum_tum(vm, vd, vs2, vs1, vl);
}

vint16m1_t test_vwredsum_vs_i8mf4_i16m1_tum(vbool32_t vm, vint16m1_t vd, vint8mf4_t vs2, vint16m1_t vs1, size_t vl) {
  return __riscv_vwredsum_tum(vm, vd, vs2, vs1, vl);
}

vint16m1_t test_vwredsum_vs_i8mf2_i16m1_tum(vbool16_t vm, vint16m1_t vd, vint8mf2_t vs2, vint16m1_t vs1, size_t vl) {
  return __riscv_vwredsum_tum(vm, vd, vs2, vs1, vl);
}

vint16m1_t test_vwredsum_vs_i8m1_i16m1_tum(vbool8_t vm, vint16m1_t vd, vint8m1_t vs2, vint16m1_t vs1, size_t vl) {
  return __riscv_vwredsum_tum(vm, vd, vs2, vs1, vl);
}

vint16m1_t test_vwredsum_vs_i8m2_i16m1_tum(vbool4_t vm, vint16m1_t vd, vint8m2_t vs2, vint16m1_t vs1, size_t vl) {
  return __riscv_vwredsum_tum(vm, vd, vs2, vs1, vl);
}

vint16m1_t test_vwredsum_vs_i8m4_i16m1_tum(vbool2_t vm, vint16m1_t vd, vint8m4_t vs2, vint16m1_t vs1, size_t vl) {
  return __riscv_vwredsum_tum(vm, vd, vs2, vs1, vl);
}

vint16m1_t test_vwredsum_vs_i8m8_i16m1_tum(vbool1_t vm, vint16m1_t vd, vint8m8_t vs2, vint16m1_t vs1, size_t vl) {
  return __riscv_vwredsum_tum(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vwredsum_vs_i16mf4_i32m1_tum(vbool64_t vm, vint32m1_t vd, vint16mf4_t vs2, vint32m1_t vs1, size_t vl) {
  return __riscv_vwredsum_tum(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vwredsum_vs_i16mf2_i32m1_tum(vbool32_t vm, vint32m1_t vd, vint16mf2_t vs2, vint32m1_t vs1, size_t vl) {
  return __riscv_vwredsum_tum(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vwredsum_vs_i16m1_i32m1_tum(vbool16_t vm, vint32m1_t vd, vint16m1_t vs2, vint32m1_t vs1, size_t vl) {
  return __riscv_vwredsum_tum(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vwredsum_vs_i16m2_i32m1_tum(vbool8_t vm, vint32m1_t vd, vint16m2_t vs2, vint32m1_t vs1, size_t vl) {
  return __riscv_vwredsum_tum(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vwredsum_vs_i16m4_i32m1_tum(vbool4_t vm, vint32m1_t vd, vint16m4_t vs2, vint32m1_t vs1, size_t vl) {
  return __riscv_vwredsum_tum(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vwredsum_vs_i16m8_i32m1_tum(vbool2_t vm, vint32m1_t vd, vint16m8_t vs2, vint32m1_t vs1, size_t vl) {
  return __riscv_vwredsum_tum(vm, vd, vs2, vs1, vl);
}

vint64m1_t test_vwredsum_vs_i32mf2_i64m1_tum(vbool64_t vm, vint64m1_t vd, vint32mf2_t vs2, vint64m1_t vs1, size_t vl) {
  return __riscv_vwredsum_tum(vm, vd, vs2, vs1, vl);
}

vint64m1_t test_vwredsum_vs_i32m1_i64m1_tum(vbool32_t vm, vint64m1_t vd, vint32m1_t vs2, vint64m1_t vs1, size_t vl) {
  return __riscv_vwredsum_tum(vm, vd, vs2, vs1, vl);
}

vint64m1_t test_vwredsum_vs_i32m2_i64m1_tum(vbool16_t vm, vint64m1_t vd, vint32m2_t vs2, vint64m1_t vs1, size_t vl) {
  return __riscv_vwredsum_tum(vm, vd, vs2, vs1, vl);
}

vint64m1_t test_vwredsum_vs_i32m4_i64m1_tum(vbool8_t vm, vint64m1_t vd, vint32m4_t vs2, vint64m1_t vs1, size_t vl) {
  return __riscv_vwredsum_tum(vm, vd, vs2, vs1, vl);
}

vint64m1_t test_vwredsum_vs_i32m8_i64m1_tum(vbool4_t vm, vint64m1_t vd, vint32m8_t vs2, vint64m1_t vs1, size_t vl) {
  return __riscv_vwredsum_tum(vm, vd, vs2, vs1, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vwredsum\.[ivxfswum.]+\s+} 36 } } */
