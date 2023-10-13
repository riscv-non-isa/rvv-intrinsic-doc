/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vsse16_v_f16mf4(float16_t *rs1, ptrdiff_t rs2, vfloat16mf4_t vs3, size_t vl) {
  return __riscv_vsse16(rs1, rs2, vs3, vl);
}

void test_vsse16_v_f16mf2(float16_t *rs1, ptrdiff_t rs2, vfloat16mf2_t vs3, size_t vl) {
  return __riscv_vsse16(rs1, rs2, vs3, vl);
}

void test_vsse16_v_f16m1(float16_t *rs1, ptrdiff_t rs2, vfloat16m1_t vs3, size_t vl) {
  return __riscv_vsse16(rs1, rs2, vs3, vl);
}

void test_vsse16_v_f16m2(float16_t *rs1, ptrdiff_t rs2, vfloat16m2_t vs3, size_t vl) {
  return __riscv_vsse16(rs1, rs2, vs3, vl);
}

void test_vsse16_v_f16m4(float16_t *rs1, ptrdiff_t rs2, vfloat16m4_t vs3, size_t vl) {
  return __riscv_vsse16(rs1, rs2, vs3, vl);
}

void test_vsse16_v_f16m8(float16_t *rs1, ptrdiff_t rs2, vfloat16m8_t vs3, size_t vl) {
  return __riscv_vsse16(rs1, rs2, vs3, vl);
}

void test_vsse16_v_i16mf4(int16_t *rs1, ptrdiff_t rs2, vint16mf4_t vs3, size_t vl) {
  return __riscv_vsse16(rs1, rs2, vs3, vl);
}

void test_vsse16_v_i16mf2(int16_t *rs1, ptrdiff_t rs2, vint16mf2_t vs3, size_t vl) {
  return __riscv_vsse16(rs1, rs2, vs3, vl);
}

void test_vsse16_v_i16m1(int16_t *rs1, ptrdiff_t rs2, vint16m1_t vs3, size_t vl) {
  return __riscv_vsse16(rs1, rs2, vs3, vl);
}

void test_vsse16_v_i16m2(int16_t *rs1, ptrdiff_t rs2, vint16m2_t vs3, size_t vl) {
  return __riscv_vsse16(rs1, rs2, vs3, vl);
}

void test_vsse16_v_i16m4(int16_t *rs1, ptrdiff_t rs2, vint16m4_t vs3, size_t vl) {
  return __riscv_vsse16(rs1, rs2, vs3, vl);
}

void test_vsse16_v_i16m8(int16_t *rs1, ptrdiff_t rs2, vint16m8_t vs3, size_t vl) {
  return __riscv_vsse16(rs1, rs2, vs3, vl);
}

void test_vsse16_v_u16mf4(uint16_t *rs1, ptrdiff_t rs2, vuint16mf4_t vs3, size_t vl) {
  return __riscv_vsse16(rs1, rs2, vs3, vl);
}

void test_vsse16_v_u16mf2(uint16_t *rs1, ptrdiff_t rs2, vuint16mf2_t vs3, size_t vl) {
  return __riscv_vsse16(rs1, rs2, vs3, vl);
}

void test_vsse16_v_u16m1(uint16_t *rs1, ptrdiff_t rs2, vuint16m1_t vs3, size_t vl) {
  return __riscv_vsse16(rs1, rs2, vs3, vl);
}

void test_vsse16_v_u16m2(uint16_t *rs1, ptrdiff_t rs2, vuint16m2_t vs3, size_t vl) {
  return __riscv_vsse16(rs1, rs2, vs3, vl);
}

void test_vsse16_v_u16m4(uint16_t *rs1, ptrdiff_t rs2, vuint16m4_t vs3, size_t vl) {
  return __riscv_vsse16(rs1, rs2, vs3, vl);
}

void test_vsse16_v_u16m8(uint16_t *rs1, ptrdiff_t rs2, vuint16m8_t vs3, size_t vl) {
  return __riscv_vsse16(rs1, rs2, vs3, vl);
}

void test_vsse16_v_f16mf4_m(vbool64_t vm, float16_t *rs1, ptrdiff_t rs2, vfloat16mf4_t vs3, size_t vl) {
  return __riscv_vsse16(vm, rs1, rs2, vs3, vl);
}

void test_vsse16_v_f16mf2_m(vbool32_t vm, float16_t *rs1, ptrdiff_t rs2, vfloat16mf2_t vs3, size_t vl) {
  return __riscv_vsse16(vm, rs1, rs2, vs3, vl);
}

void test_vsse16_v_f16m1_m(vbool16_t vm, float16_t *rs1, ptrdiff_t rs2, vfloat16m1_t vs3, size_t vl) {
  return __riscv_vsse16(vm, rs1, rs2, vs3, vl);
}

void test_vsse16_v_f16m2_m(vbool8_t vm, float16_t *rs1, ptrdiff_t rs2, vfloat16m2_t vs3, size_t vl) {
  return __riscv_vsse16(vm, rs1, rs2, vs3, vl);
}

void test_vsse16_v_f16m4_m(vbool4_t vm, float16_t *rs1, ptrdiff_t rs2, vfloat16m4_t vs3, size_t vl) {
  return __riscv_vsse16(vm, rs1, rs2, vs3, vl);
}

void test_vsse16_v_f16m8_m(vbool2_t vm, float16_t *rs1, ptrdiff_t rs2, vfloat16m8_t vs3, size_t vl) {
  return __riscv_vsse16(vm, rs1, rs2, vs3, vl);
}

void test_vsse16_v_i16mf4_m(vbool64_t vm, int16_t *rs1, ptrdiff_t rs2, vint16mf4_t vs3, size_t vl) {
  return __riscv_vsse16(vm, rs1, rs2, vs3, vl);
}

void test_vsse16_v_i16mf2_m(vbool32_t vm, int16_t *rs1, ptrdiff_t rs2, vint16mf2_t vs3, size_t vl) {
  return __riscv_vsse16(vm, rs1, rs2, vs3, vl);
}

void test_vsse16_v_i16m1_m(vbool16_t vm, int16_t *rs1, ptrdiff_t rs2, vint16m1_t vs3, size_t vl) {
  return __riscv_vsse16(vm, rs1, rs2, vs3, vl);
}

void test_vsse16_v_i16m2_m(vbool8_t vm, int16_t *rs1, ptrdiff_t rs2, vint16m2_t vs3, size_t vl) {
  return __riscv_vsse16(vm, rs1, rs2, vs3, vl);
}

void test_vsse16_v_i16m4_m(vbool4_t vm, int16_t *rs1, ptrdiff_t rs2, vint16m4_t vs3, size_t vl) {
  return __riscv_vsse16(vm, rs1, rs2, vs3, vl);
}

void test_vsse16_v_i16m8_m(vbool2_t vm, int16_t *rs1, ptrdiff_t rs2, vint16m8_t vs3, size_t vl) {
  return __riscv_vsse16(vm, rs1, rs2, vs3, vl);
}

void test_vsse16_v_u16mf4_m(vbool64_t vm, uint16_t *rs1, ptrdiff_t rs2, vuint16mf4_t vs3, size_t vl) {
  return __riscv_vsse16(vm, rs1, rs2, vs3, vl);
}

void test_vsse16_v_u16mf2_m(vbool32_t vm, uint16_t *rs1, ptrdiff_t rs2, vuint16mf2_t vs3, size_t vl) {
  return __riscv_vsse16(vm, rs1, rs2, vs3, vl);
}

void test_vsse16_v_u16m1_m(vbool16_t vm, uint16_t *rs1, ptrdiff_t rs2, vuint16m1_t vs3, size_t vl) {
  return __riscv_vsse16(vm, rs1, rs2, vs3, vl);
}

void test_vsse16_v_u16m2_m(vbool8_t vm, uint16_t *rs1, ptrdiff_t rs2, vuint16m2_t vs3, size_t vl) {
  return __riscv_vsse16(vm, rs1, rs2, vs3, vl);
}

void test_vsse16_v_u16m4_m(vbool4_t vm, uint16_t *rs1, ptrdiff_t rs2, vuint16m4_t vs3, size_t vl) {
  return __riscv_vsse16(vm, rs1, rs2, vs3, vl);
}

void test_vsse16_v_u16m8_m(vbool2_t vm, uint16_t *rs1, ptrdiff_t rs2, vuint16m8_t vs3, size_t vl) {
  return __riscv_vsse16(vm, rs1, rs2, vs3, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vsse16\.[ivxfswum.]+\s+} 36 } } */
