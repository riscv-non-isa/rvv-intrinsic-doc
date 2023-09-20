#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint64m1_t test_vsext_vf8_i64m1(vint8mf8_t op1, size_t vl) {
  return __riscv_vsext_vf8(op1, vl);
}

vint64m2_t test_vsext_vf8_i64m2(vint8mf4_t op1, size_t vl) {
  return __riscv_vsext_vf8(op1, vl);
}

vint64m4_t test_vsext_vf8_i64m4(vint8mf2_t op1, size_t vl) {
  return __riscv_vsext_vf8(op1, vl);
}

vint64m8_t test_vsext_vf8_i64m8(vint8m1_t op1, size_t vl) {
  return __riscv_vsext_vf8(op1, vl);
}

vint64m1_t test_vsext_vf8_i64m1_m(vbool64_t mask, vint8mf8_t op1, size_t vl) {
  return __riscv_vsext_vf8(mask, op1, vl);
}

vint64m2_t test_vsext_vf8_i64m2_m(vbool32_t mask, vint8mf4_t op1, size_t vl) {
  return __riscv_vsext_vf8(mask, op1, vl);
}

vint64m4_t test_vsext_vf8_i64m4_m(vbool16_t mask, vint8mf2_t op1, size_t vl) {
  return __riscv_vsext_vf8(mask, op1, vl);
}

vint64m8_t test_vsext_vf8_i64m8_m(vbool8_t mask, vint8m1_t op1, size_t vl) {
  return __riscv_vsext_vf8(mask, op1, vl);
}
