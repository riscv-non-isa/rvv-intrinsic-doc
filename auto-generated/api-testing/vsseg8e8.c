#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vsseg8e8_v_i8mf8x8(int8_t *base, vint8mf8x8_t v_tuple, size_t vl) {
  return __riscv_vsseg8e8_v_i8mf8x8(base, v_tuple, vl);
}

void test_vsseg8e8_v_i8mf4x8(int8_t *base, vint8mf4x8_t v_tuple, size_t vl) {
  return __riscv_vsseg8e8_v_i8mf4x8(base, v_tuple, vl);
}

void test_vsseg8e8_v_i8mf2x8(int8_t *base, vint8mf2x8_t v_tuple, size_t vl) {
  return __riscv_vsseg8e8_v_i8mf2x8(base, v_tuple, vl);
}

void test_vsseg8e8_v_i8m1x8(int8_t *base, vint8m1x8_t v_tuple, size_t vl) {
  return __riscv_vsseg8e8_v_i8m1x8(base, v_tuple, vl);
}

void test_vsseg8e8_v_u8mf8x8(uint8_t *base, vuint8mf8x8_t v_tuple, size_t vl) {
  return __riscv_vsseg8e8_v_u8mf8x8(base, v_tuple, vl);
}

void test_vsseg8e8_v_u8mf4x8(uint8_t *base, vuint8mf4x8_t v_tuple, size_t vl) {
  return __riscv_vsseg8e8_v_u8mf4x8(base, v_tuple, vl);
}

void test_vsseg8e8_v_u8mf2x8(uint8_t *base, vuint8mf2x8_t v_tuple, size_t vl) {
  return __riscv_vsseg8e8_v_u8mf2x8(base, v_tuple, vl);
}

void test_vsseg8e8_v_u8m1x8(uint8_t *base, vuint8m1x8_t v_tuple, size_t vl) {
  return __riscv_vsseg8e8_v_u8m1x8(base, v_tuple, vl);
}

void test_vsseg8e8_v_i8mf8x8_m(vbool64_t mask, int8_t *base,
                               vint8mf8x8_t v_tuple, size_t vl) {
  return __riscv_vsseg8e8_v_i8mf8x8_m(mask, base, v_tuple, vl);
}

void test_vsseg8e8_v_i8mf4x8_m(vbool32_t mask, int8_t *base,
                               vint8mf4x8_t v_tuple, size_t vl) {
  return __riscv_vsseg8e8_v_i8mf4x8_m(mask, base, v_tuple, vl);
}

void test_vsseg8e8_v_i8mf2x8_m(vbool16_t mask, int8_t *base,
                               vint8mf2x8_t v_tuple, size_t vl) {
  return __riscv_vsseg8e8_v_i8mf2x8_m(mask, base, v_tuple, vl);
}

void test_vsseg8e8_v_i8m1x8_m(vbool8_t mask, int8_t *base, vint8m1x8_t v_tuple,
                              size_t vl) {
  return __riscv_vsseg8e8_v_i8m1x8_m(mask, base, v_tuple, vl);
}

void test_vsseg8e8_v_u8mf8x8_m(vbool64_t mask, uint8_t *base,
                               vuint8mf8x8_t v_tuple, size_t vl) {
  return __riscv_vsseg8e8_v_u8mf8x8_m(mask, base, v_tuple, vl);
}

void test_vsseg8e8_v_u8mf4x8_m(vbool32_t mask, uint8_t *base,
                               vuint8mf4x8_t v_tuple, size_t vl) {
  return __riscv_vsseg8e8_v_u8mf4x8_m(mask, base, v_tuple, vl);
}

void test_vsseg8e8_v_u8mf2x8_m(vbool16_t mask, uint8_t *base,
                               vuint8mf2x8_t v_tuple, size_t vl) {
  return __riscv_vsseg8e8_v_u8mf2x8_m(mask, base, v_tuple, vl);
}

void test_vsseg8e8_v_u8m1x8_m(vbool8_t mask, uint8_t *base,
                              vuint8m1x8_t v_tuple, size_t vl) {
  return __riscv_vsseg8e8_v_u8m1x8_m(mask, base, v_tuple, vl);
}
