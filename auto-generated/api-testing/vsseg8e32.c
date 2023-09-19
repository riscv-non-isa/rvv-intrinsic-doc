#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vsseg8e32_v_f32mf2x8(float32_t *base, vfloat32mf2x8_t v_tuple,
                               size_t vl) {
  return __riscv_vsseg8e32_v_f32mf2x8(base, v_tuple, vl);
}

void test_vsseg8e32_v_f32m1x8(float32_t *base, vfloat32m1x8_t v_tuple,
                              size_t vl) {
  return __riscv_vsseg8e32_v_f32m1x8(base, v_tuple, vl);
}

void test_vsseg8e32_v_i32mf2x8(int32_t *base, vint32mf2x8_t v_tuple,
                               size_t vl) {
  return __riscv_vsseg8e32_v_i32mf2x8(base, v_tuple, vl);
}

void test_vsseg8e32_v_i32m1x8(int32_t *base, vint32m1x8_t v_tuple, size_t vl) {
  return __riscv_vsseg8e32_v_i32m1x8(base, v_tuple, vl);
}

void test_vsseg8e32_v_u32mf2x8(uint32_t *base, vuint32mf2x8_t v_tuple,
                               size_t vl) {
  return __riscv_vsseg8e32_v_u32mf2x8(base, v_tuple, vl);
}

void test_vsseg8e32_v_u32m1x8(uint32_t *base, vuint32m1x8_t v_tuple,
                              size_t vl) {
  return __riscv_vsseg8e32_v_u32m1x8(base, v_tuple, vl);
}

void test_vsseg8e32_v_f32mf2x8_m(vbool64_t mask, float32_t *base,
                                 vfloat32mf2x8_t v_tuple, size_t vl) {
  return __riscv_vsseg8e32_v_f32mf2x8_m(mask, base, v_tuple, vl);
}

void test_vsseg8e32_v_f32m1x8_m(vbool32_t mask, float32_t *base,
                                vfloat32m1x8_t v_tuple, size_t vl) {
  return __riscv_vsseg8e32_v_f32m1x8_m(mask, base, v_tuple, vl);
}

void test_vsseg8e32_v_i32mf2x8_m(vbool64_t mask, int32_t *base,
                                 vint32mf2x8_t v_tuple, size_t vl) {
  return __riscv_vsseg8e32_v_i32mf2x8_m(mask, base, v_tuple, vl);
}

void test_vsseg8e32_v_i32m1x8_m(vbool32_t mask, int32_t *base,
                                vint32m1x8_t v_tuple, size_t vl) {
  return __riscv_vsseg8e32_v_i32m1x8_m(mask, base, v_tuple, vl);
}

void test_vsseg8e32_v_u32mf2x8_m(vbool64_t mask, uint32_t *base,
                                 vuint32mf2x8_t v_tuple, size_t vl) {
  return __riscv_vsseg8e32_v_u32mf2x8_m(mask, base, v_tuple, vl);
}

void test_vsseg8e32_v_u32m1x8_m(vbool32_t mask, uint32_t *base,
                                vuint32m1x8_t v_tuple, size_t vl) {
  return __riscv_vsseg8e32_v_u32m1x8_m(mask, base, v_tuple, vl);
}
