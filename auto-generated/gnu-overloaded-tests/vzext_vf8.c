/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vuint64m1_t test_vzext_vf8_u64m1(vuint8mf8_t vs2, size_t vl) {
  return __riscv_vzext_vf8(vs2, vl);
}

vuint64m2_t test_vzext_vf8_u64m2(vuint8mf4_t vs2, size_t vl) {
  return __riscv_vzext_vf8(vs2, vl);
}

vuint64m4_t test_vzext_vf8_u64m4(vuint8mf2_t vs2, size_t vl) {
  return __riscv_vzext_vf8(vs2, vl);
}

vuint64m8_t test_vzext_vf8_u64m8(vuint8m1_t vs2, size_t vl) {
  return __riscv_vzext_vf8(vs2, vl);
}

vuint64m1_t test_vzext_vf8_u64m1_m(vbool64_t vm, vuint8mf8_t vs2, size_t vl) {
  return __riscv_vzext_vf8(vm, vs2, vl);
}

vuint64m2_t test_vzext_vf8_u64m2_m(vbool32_t vm, vuint8mf4_t vs2, size_t vl) {
  return __riscv_vzext_vf8(vm, vs2, vl);
}

vuint64m4_t test_vzext_vf8_u64m4_m(vbool16_t vm, vuint8mf2_t vs2, size_t vl) {
  return __riscv_vzext_vf8(vm, vs2, vl);
}

vuint64m8_t test_vzext_vf8_u64m8_m(vbool8_t vm, vuint8m1_t vs2, size_t vl) {
  return __riscv_vzext_vf8(vm, vs2, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vzext\.vf8[ivxfswum.]*\s+} 8 } } */
