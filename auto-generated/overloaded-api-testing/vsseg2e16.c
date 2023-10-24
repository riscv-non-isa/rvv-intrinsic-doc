#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

void test_vsseg2e16_v_f16mf4x2(float16_t *rs1, vfloat16mf4x2_t vs3, size_t vl) {
  return __riscv_vsseg2e16(rs1, vs3, vl);
}

void test_vsseg2e16_v_f16mf2x2(float16_t *rs1, vfloat16mf2x2_t vs3, size_t vl) {
  return __riscv_vsseg2e16(rs1, vs3, vl);
}

void test_vsseg2e16_v_f16m1x2(float16_t *rs1, vfloat16m1x2_t vs3, size_t vl) {
  return __riscv_vsseg2e16(rs1, vs3, vl);
}

void test_vsseg2e16_v_f16m2x2(float16_t *rs1, vfloat16m2x2_t vs3, size_t vl) {
  return __riscv_vsseg2e16(rs1, vs3, vl);
}

void test_vsseg2e16_v_f16m4x2(float16_t *rs1, vfloat16m4x2_t vs3, size_t vl) {
  return __riscv_vsseg2e16(rs1, vs3, vl);
}

void test_vsseg2e16_v_i16mf4x2(int16_t *rs1, vint16mf4x2_t vs3, size_t vl) {
  return __riscv_vsseg2e16(rs1, vs3, vl);
}

void test_vsseg2e16_v_i16mf2x2(int16_t *rs1, vint16mf2x2_t vs3, size_t vl) {
  return __riscv_vsseg2e16(rs1, vs3, vl);
}

void test_vsseg2e16_v_i16m1x2(int16_t *rs1, vint16m1x2_t vs3, size_t vl) {
  return __riscv_vsseg2e16(rs1, vs3, vl);
}

void test_vsseg2e16_v_i16m2x2(int16_t *rs1, vint16m2x2_t vs3, size_t vl) {
  return __riscv_vsseg2e16(rs1, vs3, vl);
}

void test_vsseg2e16_v_i16m4x2(int16_t *rs1, vint16m4x2_t vs3, size_t vl) {
  return __riscv_vsseg2e16(rs1, vs3, vl);
}

void test_vsseg2e16_v_u16mf4x2(uint16_t *rs1, vuint16mf4x2_t vs3, size_t vl) {
  return __riscv_vsseg2e16(rs1, vs3, vl);
}

void test_vsseg2e16_v_u16mf2x2(uint16_t *rs1, vuint16mf2x2_t vs3, size_t vl) {
  return __riscv_vsseg2e16(rs1, vs3, vl);
}

void test_vsseg2e16_v_u16m1x2(uint16_t *rs1, vuint16m1x2_t vs3, size_t vl) {
  return __riscv_vsseg2e16(rs1, vs3, vl);
}

void test_vsseg2e16_v_u16m2x2(uint16_t *rs1, vuint16m2x2_t vs3, size_t vl) {
  return __riscv_vsseg2e16(rs1, vs3, vl);
}

void test_vsseg2e16_v_u16m4x2(uint16_t *rs1, vuint16m4x2_t vs3, size_t vl) {
  return __riscv_vsseg2e16(rs1, vs3, vl);
}

void test_vsseg2e16_v_f16mf4x2_m(vbool64_t vm, float16_t *rs1,
                                 vfloat16mf4x2_t vs3, size_t vl) {
  return __riscv_vsseg2e16(vm, rs1, vs3, vl);
}

void test_vsseg2e16_v_f16mf2x2_m(vbool32_t vm, float16_t *rs1,
                                 vfloat16mf2x2_t vs3, size_t vl) {
  return __riscv_vsseg2e16(vm, rs1, vs3, vl);
}

void test_vsseg2e16_v_f16m1x2_m(vbool16_t vm, float16_t *rs1,
                                vfloat16m1x2_t vs3, size_t vl) {
  return __riscv_vsseg2e16(vm, rs1, vs3, vl);
}

void test_vsseg2e16_v_f16m2x2_m(vbool8_t vm, float16_t *rs1, vfloat16m2x2_t vs3,
                                size_t vl) {
  return __riscv_vsseg2e16(vm, rs1, vs3, vl);
}

void test_vsseg2e16_v_f16m4x2_m(vbool4_t vm, float16_t *rs1, vfloat16m4x2_t vs3,
                                size_t vl) {
  return __riscv_vsseg2e16(vm, rs1, vs3, vl);
}

void test_vsseg2e16_v_i16mf4x2_m(vbool64_t vm, int16_t *rs1, vint16mf4x2_t vs3,
                                 size_t vl) {
  return __riscv_vsseg2e16(vm, rs1, vs3, vl);
}

void test_vsseg2e16_v_i16mf2x2_m(vbool32_t vm, int16_t *rs1, vint16mf2x2_t vs3,
                                 size_t vl) {
  return __riscv_vsseg2e16(vm, rs1, vs3, vl);
}

void test_vsseg2e16_v_i16m1x2_m(vbool16_t vm, int16_t *rs1, vint16m1x2_t vs3,
                                size_t vl) {
  return __riscv_vsseg2e16(vm, rs1, vs3, vl);
}

void test_vsseg2e16_v_i16m2x2_m(vbool8_t vm, int16_t *rs1, vint16m2x2_t vs3,
                                size_t vl) {
  return __riscv_vsseg2e16(vm, rs1, vs3, vl);
}

void test_vsseg2e16_v_i16m4x2_m(vbool4_t vm, int16_t *rs1, vint16m4x2_t vs3,
                                size_t vl) {
  return __riscv_vsseg2e16(vm, rs1, vs3, vl);
}

void test_vsseg2e16_v_u16mf4x2_m(vbool64_t vm, uint16_t *rs1,
                                 vuint16mf4x2_t vs3, size_t vl) {
  return __riscv_vsseg2e16(vm, rs1, vs3, vl);
}

void test_vsseg2e16_v_u16mf2x2_m(vbool32_t vm, uint16_t *rs1,
                                 vuint16mf2x2_t vs3, size_t vl) {
  return __riscv_vsseg2e16(vm, rs1, vs3, vl);
}

void test_vsseg2e16_v_u16m1x2_m(vbool16_t vm, uint16_t *rs1, vuint16m1x2_t vs3,
                                size_t vl) {
  return __riscv_vsseg2e16(vm, rs1, vs3, vl);
}

void test_vsseg2e16_v_u16m2x2_m(vbool8_t vm, uint16_t *rs1, vuint16m2x2_t vs3,
                                size_t vl) {
  return __riscv_vsseg2e16(vm, rs1, vs3, vl);
}

void test_vsseg2e16_v_u16m4x2_m(vbool4_t vm, uint16_t *rs1, vuint16m4x2_t vs3,
                                size_t vl) {
  return __riscv_vsseg2e16(vm, rs1, vs3, vl);
}
