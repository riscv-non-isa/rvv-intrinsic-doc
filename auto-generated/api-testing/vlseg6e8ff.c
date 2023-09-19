#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint8mf8x6_t test_vlseg6e8ff_v_i8mf8x6(const int8_t *base, size_t *new_vl,
                                       size_t vl) {
  return __riscv_vlseg6e8ff_v_i8mf8x6(base, new_vl, vl);
}

vint8mf4x6_t test_vlseg6e8ff_v_i8mf4x6(const int8_t *base, size_t *new_vl,
                                       size_t vl) {
  return __riscv_vlseg6e8ff_v_i8mf4x6(base, new_vl, vl);
}

vint8mf2x6_t test_vlseg6e8ff_v_i8mf2x6(const int8_t *base, size_t *new_vl,
                                       size_t vl) {
  return __riscv_vlseg6e8ff_v_i8mf2x6(base, new_vl, vl);
}

vint8m1x6_t test_vlseg6e8ff_v_i8m1x6(const int8_t *base, size_t *new_vl,
                                     size_t vl) {
  return __riscv_vlseg6e8ff_v_i8m1x6(base, new_vl, vl);
}

vuint8mf8x6_t test_vlseg6e8ff_v_u8mf8x6(const uint8_t *base, size_t *new_vl,
                                        size_t vl) {
  return __riscv_vlseg6e8ff_v_u8mf8x6(base, new_vl, vl);
}

vuint8mf4x6_t test_vlseg6e8ff_v_u8mf4x6(const uint8_t *base, size_t *new_vl,
                                        size_t vl) {
  return __riscv_vlseg6e8ff_v_u8mf4x6(base, new_vl, vl);
}

vuint8mf2x6_t test_vlseg6e8ff_v_u8mf2x6(const uint8_t *base, size_t *new_vl,
                                        size_t vl) {
  return __riscv_vlseg6e8ff_v_u8mf2x6(base, new_vl, vl);
}

vuint8m1x6_t test_vlseg6e8ff_v_u8m1x6(const uint8_t *base, size_t *new_vl,
                                      size_t vl) {
  return __riscv_vlseg6e8ff_v_u8m1x6(base, new_vl, vl);
}

vint8mf8x6_t test_vlseg6e8ff_v_i8mf8x6_m(vbool64_t mask, const int8_t *base,
                                         size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e8ff_v_i8mf8x6_m(mask, base, new_vl, vl);
}

vint8mf4x6_t test_vlseg6e8ff_v_i8mf4x6_m(vbool32_t mask, const int8_t *base,
                                         size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e8ff_v_i8mf4x6_m(mask, base, new_vl, vl);
}

vint8mf2x6_t test_vlseg6e8ff_v_i8mf2x6_m(vbool16_t mask, const int8_t *base,
                                         size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e8ff_v_i8mf2x6_m(mask, base, new_vl, vl);
}

vint8m1x6_t test_vlseg6e8ff_v_i8m1x6_m(vbool8_t mask, const int8_t *base,
                                       size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e8ff_v_i8m1x6_m(mask, base, new_vl, vl);
}

vuint8mf8x6_t test_vlseg6e8ff_v_u8mf8x6_m(vbool64_t mask, const uint8_t *base,
                                          size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e8ff_v_u8mf8x6_m(mask, base, new_vl, vl);
}

vuint8mf4x6_t test_vlseg6e8ff_v_u8mf4x6_m(vbool32_t mask, const uint8_t *base,
                                          size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e8ff_v_u8mf4x6_m(mask, base, new_vl, vl);
}

vuint8mf2x6_t test_vlseg6e8ff_v_u8mf2x6_m(vbool16_t mask, const uint8_t *base,
                                          size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e8ff_v_u8mf2x6_m(mask, base, new_vl, vl);
}

vuint8m1x6_t test_vlseg6e8ff_v_u8m1x6_m(vbool8_t mask, const uint8_t *base,
                                        size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e8ff_v_u8m1x6_m(mask, base, new_vl, vl);
}
