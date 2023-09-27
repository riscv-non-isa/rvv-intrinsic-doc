#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vssseg8e16_v_f16mf4x8(float16_t *rs1, ptrdiff_t rs2,
                                vfloat16mf4x8_t vs3, size_t vl) {
  return __riscv_vssseg8e16(rs1, rs2, vs3, vl);
}

void test_vssseg8e16_v_f16mf2x8(float16_t *rs1, ptrdiff_t rs2,
                                vfloat16mf2x8_t vs3, size_t vl) {
  return __riscv_vssseg8e16(rs1, rs2, vs3, vl);
}

void test_vssseg8e16_v_f16m1x8(float16_t *rs1, ptrdiff_t rs2,
                               vfloat16m1x8_t vs3, size_t vl) {
  return __riscv_vssseg8e16(rs1, rs2, vs3, vl);
}

void test_vssseg8e16_v_i16mf4x8(int16_t *rs1, ptrdiff_t rs2, vint16mf4x8_t vs3,
                                size_t vl) {
  return __riscv_vssseg8e16(rs1, rs2, vs3, vl);
}

void test_vssseg8e16_v_i16mf2x8(int16_t *rs1, ptrdiff_t rs2, vint16mf2x8_t vs3,
                                size_t vl) {
  return __riscv_vssseg8e16(rs1, rs2, vs3, vl);
}

void test_vssseg8e16_v_i16m1x8(int16_t *rs1, ptrdiff_t rs2, vint16m1x8_t vs3,
                               size_t vl) {
  return __riscv_vssseg8e16(rs1, rs2, vs3, vl);
}

void test_vssseg8e16_v_u16mf4x8(uint16_t *rs1, ptrdiff_t rs2,
                                vuint16mf4x8_t vs3, size_t vl) {
  return __riscv_vssseg8e16(rs1, rs2, vs3, vl);
}

void test_vssseg8e16_v_u16mf2x8(uint16_t *rs1, ptrdiff_t rs2,
                                vuint16mf2x8_t vs3, size_t vl) {
  return __riscv_vssseg8e16(rs1, rs2, vs3, vl);
}

void test_vssseg8e16_v_u16m1x8(uint16_t *rs1, ptrdiff_t rs2, vuint16m1x8_t vs3,
                               size_t vl) {
  return __riscv_vssseg8e16(rs1, rs2, vs3, vl);
}

void test_vssseg8e16_v_f16mf4x8_m(vbool64_t vm, float16_t *rs1, ptrdiff_t rs2,
                                  vfloat16mf4x8_t vs3, size_t vl) {
  return __riscv_vssseg8e16(vm, rs1, rs2, vs3, vl);
}

void test_vssseg8e16_v_f16mf2x8_m(vbool32_t vm, float16_t *rs1, ptrdiff_t rs2,
                                  vfloat16mf2x8_t vs3, size_t vl) {
  return __riscv_vssseg8e16(vm, rs1, rs2, vs3, vl);
}

void test_vssseg8e16_v_f16m1x8_m(vbool16_t vm, float16_t *rs1, ptrdiff_t rs2,
                                 vfloat16m1x8_t vs3, size_t vl) {
  return __riscv_vssseg8e16(vm, rs1, rs2, vs3, vl);
}

void test_vssseg8e16_v_i16mf4x8_m(vbool64_t vm, int16_t *rs1, ptrdiff_t rs2,
                                  vint16mf4x8_t vs3, size_t vl) {
  return __riscv_vssseg8e16(vm, rs1, rs2, vs3, vl);
}

void test_vssseg8e16_v_i16mf2x8_m(vbool32_t vm, int16_t *rs1, ptrdiff_t rs2,
                                  vint16mf2x8_t vs3, size_t vl) {
  return __riscv_vssseg8e16(vm, rs1, rs2, vs3, vl);
}

void test_vssseg8e16_v_i16m1x8_m(vbool16_t vm, int16_t *rs1, ptrdiff_t rs2,
                                 vint16m1x8_t vs3, size_t vl) {
  return __riscv_vssseg8e16(vm, rs1, rs2, vs3, vl);
}

void test_vssseg8e16_v_u16mf4x8_m(vbool64_t vm, uint16_t *rs1, ptrdiff_t rs2,
                                  vuint16mf4x8_t vs3, size_t vl) {
  return __riscv_vssseg8e16(vm, rs1, rs2, vs3, vl);
}

void test_vssseg8e16_v_u16mf2x8_m(vbool32_t vm, uint16_t *rs1, ptrdiff_t rs2,
                                  vuint16mf2x8_t vs3, size_t vl) {
  return __riscv_vssseg8e16(vm, rs1, rs2, vs3, vl);
}

void test_vssseg8e16_v_u16m1x8_m(vbool16_t vm, uint16_t *rs1, ptrdiff_t rs2,
                                 vuint16m1x8_t vs3, size_t vl) {
  return __riscv_vssseg8e16(vm, rs1, rs2, vs3, vl);
}
