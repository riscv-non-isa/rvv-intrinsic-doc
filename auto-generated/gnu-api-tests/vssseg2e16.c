/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

void test_vssseg2e16_v_f16mf4x2(float16_t *rs1, ptrdiff_t rs2, vfloat16mf4x2_t vs3, size_t vl) {
  return __riscv_vssseg2e16_v_f16mf4x2(rs1, rs2, vs3, vl);
}

void test_vssseg2e16_v_f16mf2x2(float16_t *rs1, ptrdiff_t rs2, vfloat16mf2x2_t vs3, size_t vl) {
  return __riscv_vssseg2e16_v_f16mf2x2(rs1, rs2, vs3, vl);
}

void test_vssseg2e16_v_f16m1x2(float16_t *rs1, ptrdiff_t rs2, vfloat16m1x2_t vs3, size_t vl) {
  return __riscv_vssseg2e16_v_f16m1x2(rs1, rs2, vs3, vl);
}

void test_vssseg2e16_v_f16m2x2(float16_t *rs1, ptrdiff_t rs2, vfloat16m2x2_t vs3, size_t vl) {
  return __riscv_vssseg2e16_v_f16m2x2(rs1, rs2, vs3, vl);
}

void test_vssseg2e16_v_f16m4x2(float16_t *rs1, ptrdiff_t rs2, vfloat16m4x2_t vs3, size_t vl) {
  return __riscv_vssseg2e16_v_f16m4x2(rs1, rs2, vs3, vl);
}

void test_vssseg2e16_v_i16mf4x2(int16_t *rs1, ptrdiff_t rs2, vint16mf4x2_t vs3, size_t vl) {
  return __riscv_vssseg2e16_v_i16mf4x2(rs1, rs2, vs3, vl);
}

void test_vssseg2e16_v_i16mf2x2(int16_t *rs1, ptrdiff_t rs2, vint16mf2x2_t vs3, size_t vl) {
  return __riscv_vssseg2e16_v_i16mf2x2(rs1, rs2, vs3, vl);
}

void test_vssseg2e16_v_i16m1x2(int16_t *rs1, ptrdiff_t rs2, vint16m1x2_t vs3, size_t vl) {
  return __riscv_vssseg2e16_v_i16m1x2(rs1, rs2, vs3, vl);
}

void test_vssseg2e16_v_i16m2x2(int16_t *rs1, ptrdiff_t rs2, vint16m2x2_t vs3, size_t vl) {
  return __riscv_vssseg2e16_v_i16m2x2(rs1, rs2, vs3, vl);
}

void test_vssseg2e16_v_i16m4x2(int16_t *rs1, ptrdiff_t rs2, vint16m4x2_t vs3, size_t vl) {
  return __riscv_vssseg2e16_v_i16m4x2(rs1, rs2, vs3, vl);
}

void test_vssseg2e16_v_u16mf4x2(uint16_t *rs1, ptrdiff_t rs2, vuint16mf4x2_t vs3, size_t vl) {
  return __riscv_vssseg2e16_v_u16mf4x2(rs1, rs2, vs3, vl);
}

void test_vssseg2e16_v_u16mf2x2(uint16_t *rs1, ptrdiff_t rs2, vuint16mf2x2_t vs3, size_t vl) {
  return __riscv_vssseg2e16_v_u16mf2x2(rs1, rs2, vs3, vl);
}

void test_vssseg2e16_v_u16m1x2(uint16_t *rs1, ptrdiff_t rs2, vuint16m1x2_t vs3, size_t vl) {
  return __riscv_vssseg2e16_v_u16m1x2(rs1, rs2, vs3, vl);
}

void test_vssseg2e16_v_u16m2x2(uint16_t *rs1, ptrdiff_t rs2, vuint16m2x2_t vs3, size_t vl) {
  return __riscv_vssseg2e16_v_u16m2x2(rs1, rs2, vs3, vl);
}

void test_vssseg2e16_v_u16m4x2(uint16_t *rs1, ptrdiff_t rs2, vuint16m4x2_t vs3, size_t vl) {
  return __riscv_vssseg2e16_v_u16m4x2(rs1, rs2, vs3, vl);
}

void test_vssseg2e16_v_f16mf4x2_m(vbool64_t vm, float16_t *rs1, ptrdiff_t rs2, vfloat16mf4x2_t vs3, size_t vl) {
  return __riscv_vssseg2e16_v_f16mf4x2_m(vm, rs1, rs2, vs3, vl);
}

void test_vssseg2e16_v_f16mf2x2_m(vbool32_t vm, float16_t *rs1, ptrdiff_t rs2, vfloat16mf2x2_t vs3, size_t vl) {
  return __riscv_vssseg2e16_v_f16mf2x2_m(vm, rs1, rs2, vs3, vl);
}

void test_vssseg2e16_v_f16m1x2_m(vbool16_t vm, float16_t *rs1, ptrdiff_t rs2, vfloat16m1x2_t vs3, size_t vl) {
  return __riscv_vssseg2e16_v_f16m1x2_m(vm, rs1, rs2, vs3, vl);
}

void test_vssseg2e16_v_f16m2x2_m(vbool8_t vm, float16_t *rs1, ptrdiff_t rs2, vfloat16m2x2_t vs3, size_t vl) {
  return __riscv_vssseg2e16_v_f16m2x2_m(vm, rs1, rs2, vs3, vl);
}

void test_vssseg2e16_v_f16m4x2_m(vbool4_t vm, float16_t *rs1, ptrdiff_t rs2, vfloat16m4x2_t vs3, size_t vl) {
  return __riscv_vssseg2e16_v_f16m4x2_m(vm, rs1, rs2, vs3, vl);
}

void test_vssseg2e16_v_i16mf4x2_m(vbool64_t vm, int16_t *rs1, ptrdiff_t rs2, vint16mf4x2_t vs3, size_t vl) {
  return __riscv_vssseg2e16_v_i16mf4x2_m(vm, rs1, rs2, vs3, vl);
}

void test_vssseg2e16_v_i16mf2x2_m(vbool32_t vm, int16_t *rs1, ptrdiff_t rs2, vint16mf2x2_t vs3, size_t vl) {
  return __riscv_vssseg2e16_v_i16mf2x2_m(vm, rs1, rs2, vs3, vl);
}

void test_vssseg2e16_v_i16m1x2_m(vbool16_t vm, int16_t *rs1, ptrdiff_t rs2, vint16m1x2_t vs3, size_t vl) {
  return __riscv_vssseg2e16_v_i16m1x2_m(vm, rs1, rs2, vs3, vl);
}

void test_vssseg2e16_v_i16m2x2_m(vbool8_t vm, int16_t *rs1, ptrdiff_t rs2, vint16m2x2_t vs3, size_t vl) {
  return __riscv_vssseg2e16_v_i16m2x2_m(vm, rs1, rs2, vs3, vl);
}

void test_vssseg2e16_v_i16m4x2_m(vbool4_t vm, int16_t *rs1, ptrdiff_t rs2, vint16m4x2_t vs3, size_t vl) {
  return __riscv_vssseg2e16_v_i16m4x2_m(vm, rs1, rs2, vs3, vl);
}

void test_vssseg2e16_v_u16mf4x2_m(vbool64_t vm, uint16_t *rs1, ptrdiff_t rs2, vuint16mf4x2_t vs3, size_t vl) {
  return __riscv_vssseg2e16_v_u16mf4x2_m(vm, rs1, rs2, vs3, vl);
}

void test_vssseg2e16_v_u16mf2x2_m(vbool32_t vm, uint16_t *rs1, ptrdiff_t rs2, vuint16mf2x2_t vs3, size_t vl) {
  return __riscv_vssseg2e16_v_u16mf2x2_m(vm, rs1, rs2, vs3, vl);
}

void test_vssseg2e16_v_u16m1x2_m(vbool16_t vm, uint16_t *rs1, ptrdiff_t rs2, vuint16m1x2_t vs3, size_t vl) {
  return __riscv_vssseg2e16_v_u16m1x2_m(vm, rs1, rs2, vs3, vl);
}

void test_vssseg2e16_v_u16m2x2_m(vbool8_t vm, uint16_t *rs1, ptrdiff_t rs2, vuint16m2x2_t vs3, size_t vl) {
  return __riscv_vssseg2e16_v_u16m2x2_m(vm, rs1, rs2, vs3, vl);
}

void test_vssseg2e16_v_u16m4x2_m(vbool4_t vm, uint16_t *rs1, ptrdiff_t rs2, vuint16m4x2_t vs3, size_t vl) {
  return __riscv_vssseg2e16_v_u16m4x2_m(vm, rs1, rs2, vs3, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vssseg2e16\.[ivxfswum.]+\s+} 30 } } */
