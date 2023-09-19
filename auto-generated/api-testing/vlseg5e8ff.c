#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint8mf8x5_t test_vlseg5e8ff_v_i8mf8x5(const int8_t *base, size_t *new_vl,
                                       size_t vl) {
  return __riscv_vlseg5e8ff_v_i8mf8x5(base, new_vl, vl);
}

vint8mf4x5_t test_vlseg5e8ff_v_i8mf4x5(const int8_t *base, size_t *new_vl,
                                       size_t vl) {
  return __riscv_vlseg5e8ff_v_i8mf4x5(base, new_vl, vl);
}

vint8mf2x5_t test_vlseg5e8ff_v_i8mf2x5(const int8_t *base, size_t *new_vl,
                                       size_t vl) {
  return __riscv_vlseg5e8ff_v_i8mf2x5(base, new_vl, vl);
}

vint8m1x5_t test_vlseg5e8ff_v_i8m1x5(const int8_t *base, size_t *new_vl,
                                     size_t vl) {
  return __riscv_vlseg5e8ff_v_i8m1x5(base, new_vl, vl);
}

vuint8mf8x5_t test_vlseg5e8ff_v_u8mf8x5(const uint8_t *base, size_t *new_vl,
                                        size_t vl) {
  return __riscv_vlseg5e8ff_v_u8mf8x5(base, new_vl, vl);
}

vuint8mf4x5_t test_vlseg5e8ff_v_u8mf4x5(const uint8_t *base, size_t *new_vl,
                                        size_t vl) {
  return __riscv_vlseg5e8ff_v_u8mf4x5(base, new_vl, vl);
}

vuint8mf2x5_t test_vlseg5e8ff_v_u8mf2x5(const uint8_t *base, size_t *new_vl,
                                        size_t vl) {
  return __riscv_vlseg5e8ff_v_u8mf2x5(base, new_vl, vl);
}

vuint8m1x5_t test_vlseg5e8ff_v_u8m1x5(const uint8_t *base, size_t *new_vl,
                                      size_t vl) {
  return __riscv_vlseg5e8ff_v_u8m1x5(base, new_vl, vl);
}

vint8mf8x5_t test_vlseg5e8ff_v_i8mf8x5_m(vbool64_t mask, const int8_t *base,
                                         size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e8ff_v_i8mf8x5_m(mask, base, new_vl, vl);
}

vint8mf4x5_t test_vlseg5e8ff_v_i8mf4x5_m(vbool32_t mask, const int8_t *base,
                                         size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e8ff_v_i8mf4x5_m(mask, base, new_vl, vl);
}

vint8mf2x5_t test_vlseg5e8ff_v_i8mf2x5_m(vbool16_t mask, const int8_t *base,
                                         size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e8ff_v_i8mf2x5_m(mask, base, new_vl, vl);
}

vint8m1x5_t test_vlseg5e8ff_v_i8m1x5_m(vbool8_t mask, const int8_t *base,
                                       size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e8ff_v_i8m1x5_m(mask, base, new_vl, vl);
}

vuint8mf8x5_t test_vlseg5e8ff_v_u8mf8x5_m(vbool64_t mask, const uint8_t *base,
                                          size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e8ff_v_u8mf8x5_m(mask, base, new_vl, vl);
}

vuint8mf4x5_t test_vlseg5e8ff_v_u8mf4x5_m(vbool32_t mask, const uint8_t *base,
                                          size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e8ff_v_u8mf4x5_m(mask, base, new_vl, vl);
}

vuint8mf2x5_t test_vlseg5e8ff_v_u8mf2x5_m(vbool16_t mask, const uint8_t *base,
                                          size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e8ff_v_u8mf2x5_m(mask, base, new_vl, vl);
}

vuint8m1x5_t test_vlseg5e8ff_v_u8m1x5_m(vbool8_t mask, const uint8_t *base,
                                        size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e8ff_v_u8m1x5_m(mask, base, new_vl, vl);
}
