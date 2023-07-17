#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint8mf8x8_t test_vlseg8e8_v_i8mf8x8(const int8_t *base, size_t vl) {
  return __riscv_vlseg8e8_v_i8mf8x8(base, vl);
}

vint8mf4x8_t test_vlseg8e8_v_i8mf4x8(const int8_t *base, size_t vl) {
  return __riscv_vlseg8e8_v_i8mf4x8(base, vl);
}

vint8mf2x8_t test_vlseg8e8_v_i8mf2x8(const int8_t *base, size_t vl) {
  return __riscv_vlseg8e8_v_i8mf2x8(base, vl);
}

vint8m1x8_t test_vlseg8e8_v_i8m1x8(const int8_t *base, size_t vl) {
  return __riscv_vlseg8e8_v_i8m1x8(base, vl);
}

vuint8mf8x8_t test_vlseg8e8_v_u8mf8x8(const uint8_t *base, size_t vl) {
  return __riscv_vlseg8e8_v_u8mf8x8(base, vl);
}

vuint8mf4x8_t test_vlseg8e8_v_u8mf4x8(const uint8_t *base, size_t vl) {
  return __riscv_vlseg8e8_v_u8mf4x8(base, vl);
}

vuint8mf2x8_t test_vlseg8e8_v_u8mf2x8(const uint8_t *base, size_t vl) {
  return __riscv_vlseg8e8_v_u8mf2x8(base, vl);
}

vuint8m1x8_t test_vlseg8e8_v_u8m1x8(const uint8_t *base, size_t vl) {
  return __riscv_vlseg8e8_v_u8m1x8(base, vl);
}

vint8mf8x8_t test_vlseg8e8_v_i8mf8x8_m(vbool64_t mask, const int8_t *base, size_t vl) {
  return __riscv_vlseg8e8_v_i8mf8x8_m(mask, base, vl);
}

vint8mf4x8_t test_vlseg8e8_v_i8mf4x8_m(vbool32_t mask, const int8_t *base, size_t vl) {
  return __riscv_vlseg8e8_v_i8mf4x8_m(mask, base, vl);
}

vint8mf2x8_t test_vlseg8e8_v_i8mf2x8_m(vbool16_t mask, const int8_t *base, size_t vl) {
  return __riscv_vlseg8e8_v_i8mf2x8_m(mask, base, vl);
}

vint8m1x8_t test_vlseg8e8_v_i8m1x8_m(vbool8_t mask, const int8_t *base, size_t vl) {
  return __riscv_vlseg8e8_v_i8m1x8_m(mask, base, vl);
}

vuint8mf8x8_t test_vlseg8e8_v_u8mf8x8_m(vbool64_t mask, const uint8_t *base, size_t vl) {
  return __riscv_vlseg8e8_v_u8mf8x8_m(mask, base, vl);
}

vuint8mf4x8_t test_vlseg8e8_v_u8mf4x8_m(vbool32_t mask, const uint8_t *base, size_t vl) {
  return __riscv_vlseg8e8_v_u8mf4x8_m(mask, base, vl);
}

vuint8mf2x8_t test_vlseg8e8_v_u8mf2x8_m(vbool16_t mask, const uint8_t *base, size_t vl) {
  return __riscv_vlseg8e8_v_u8mf2x8_m(mask, base, vl);
}

vuint8m1x8_t test_vlseg8e8_v_u8m1x8_m(vbool8_t mask, const uint8_t *base, size_t vl) {
  return __riscv_vlseg8e8_v_u8m1x8_m(mask, base, vl);
}

