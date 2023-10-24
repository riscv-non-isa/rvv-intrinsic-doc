#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

void test_vsseg7e16_v_f16mf4x7(float16_t *rs1, vfloat16mf4x7_t vs3, size_t vl) {
  return __riscv_vsseg7e16(rs1, vs3, vl);
}

void test_vsseg7e16_v_f16mf2x7(float16_t *rs1, vfloat16mf2x7_t vs3, size_t vl) {
  return __riscv_vsseg7e16(rs1, vs3, vl);
}

void test_vsseg7e16_v_f16m1x7(float16_t *rs1, vfloat16m1x7_t vs3, size_t vl) {
  return __riscv_vsseg7e16(rs1, vs3, vl);
}

void test_vsseg7e16_v_i16mf4x7(int16_t *rs1, vint16mf4x7_t vs3, size_t vl) {
  return __riscv_vsseg7e16(rs1, vs3, vl);
}

void test_vsseg7e16_v_i16mf2x7(int16_t *rs1, vint16mf2x7_t vs3, size_t vl) {
  return __riscv_vsseg7e16(rs1, vs3, vl);
}

void test_vsseg7e16_v_i16m1x7(int16_t *rs1, vint16m1x7_t vs3, size_t vl) {
  return __riscv_vsseg7e16(rs1, vs3, vl);
}

void test_vsseg7e16_v_u16mf4x7(uint16_t *rs1, vuint16mf4x7_t vs3, size_t vl) {
  return __riscv_vsseg7e16(rs1, vs3, vl);
}

void test_vsseg7e16_v_u16mf2x7(uint16_t *rs1, vuint16mf2x7_t vs3, size_t vl) {
  return __riscv_vsseg7e16(rs1, vs3, vl);
}

void test_vsseg7e16_v_u16m1x7(uint16_t *rs1, vuint16m1x7_t vs3, size_t vl) {
  return __riscv_vsseg7e16(rs1, vs3, vl);
}

void test_vsseg7e16_v_f16mf4x7_m(vbool64_t vm, float16_t *rs1,
                                 vfloat16mf4x7_t vs3, size_t vl) {
  return __riscv_vsseg7e16(vm, rs1, vs3, vl);
}

void test_vsseg7e16_v_f16mf2x7_m(vbool32_t vm, float16_t *rs1,
                                 vfloat16mf2x7_t vs3, size_t vl) {
  return __riscv_vsseg7e16(vm, rs1, vs3, vl);
}

void test_vsseg7e16_v_f16m1x7_m(vbool16_t vm, float16_t *rs1,
                                vfloat16m1x7_t vs3, size_t vl) {
  return __riscv_vsseg7e16(vm, rs1, vs3, vl);
}

void test_vsseg7e16_v_i16mf4x7_m(vbool64_t vm, int16_t *rs1, vint16mf4x7_t vs3,
                                 size_t vl) {
  return __riscv_vsseg7e16(vm, rs1, vs3, vl);
}

void test_vsseg7e16_v_i16mf2x7_m(vbool32_t vm, int16_t *rs1, vint16mf2x7_t vs3,
                                 size_t vl) {
  return __riscv_vsseg7e16(vm, rs1, vs3, vl);
}

void test_vsseg7e16_v_i16m1x7_m(vbool16_t vm, int16_t *rs1, vint16m1x7_t vs3,
                                size_t vl) {
  return __riscv_vsseg7e16(vm, rs1, vs3, vl);
}

void test_vsseg7e16_v_u16mf4x7_m(vbool64_t vm, uint16_t *rs1,
                                 vuint16mf4x7_t vs3, size_t vl) {
  return __riscv_vsseg7e16(vm, rs1, vs3, vl);
}

void test_vsseg7e16_v_u16mf2x7_m(vbool32_t vm, uint16_t *rs1,
                                 vuint16mf2x7_t vs3, size_t vl) {
  return __riscv_vsseg7e16(vm, rs1, vs3, vl);
}

void test_vsseg7e16_v_u16m1x7_m(vbool16_t vm, uint16_t *rs1, vuint16m1x7_t vs3,
                                size_t vl) {
  return __riscv_vsseg7e16(vm, rs1, vs3, vl);
}
