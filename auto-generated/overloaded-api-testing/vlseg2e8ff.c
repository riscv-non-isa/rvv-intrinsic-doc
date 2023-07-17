#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint8mf8x2_t test_vlseg2e8ff_v_i8mf8x2_m(vbool64_t mask, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff(mask, base, new_vl, vl);
}

vint8mf4x2_t test_vlseg2e8ff_v_i8mf4x2_m(vbool32_t mask, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff(mask, base, new_vl, vl);
}

vint8mf2x2_t test_vlseg2e8ff_v_i8mf2x2_m(vbool16_t mask, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff(mask, base, new_vl, vl);
}

vint8m1x2_t test_vlseg2e8ff_v_i8m1x2_m(vbool8_t mask, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff(mask, base, new_vl, vl);
}

vint8m2x2_t test_vlseg2e8ff_v_i8m2x2_m(vbool4_t mask, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff(mask, base, new_vl, vl);
}

vint8m4x2_t test_vlseg2e8ff_v_i8m4x2_m(vbool2_t mask, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff(mask, base, new_vl, vl);
}

vuint8mf8x2_t test_vlseg2e8ff_v_u8mf8x2_m(vbool64_t mask, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff(mask, base, new_vl, vl);
}

vuint8mf4x2_t test_vlseg2e8ff_v_u8mf4x2_m(vbool32_t mask, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff(mask, base, new_vl, vl);
}

vuint8mf2x2_t test_vlseg2e8ff_v_u8mf2x2_m(vbool16_t mask, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff(mask, base, new_vl, vl);
}

vuint8m1x2_t test_vlseg2e8ff_v_u8m1x2_m(vbool8_t mask, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff(mask, base, new_vl, vl);
}

vuint8m2x2_t test_vlseg2e8ff_v_u8m2x2_m(vbool4_t mask, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff(mask, base, new_vl, vl);
}

vuint8m4x2_t test_vlseg2e8ff_v_u8m4x2_m(vbool2_t mask, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff(mask, base, new_vl, vl);
}

