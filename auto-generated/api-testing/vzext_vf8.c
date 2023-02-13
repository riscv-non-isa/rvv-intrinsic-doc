#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vuint64m1_t test_vzext_vf8_u64m1(vuint8mf8_t op1, size_t vl) {
  return __riscv_vzext_vf8_u64m1(op1, vl);
}

vuint64m2_t test_vzext_vf8_u64m2(vuint8mf4_t op1, size_t vl) {
  return __riscv_vzext_vf8_u64m2(op1, vl);
}

vuint64m4_t test_vzext_vf8_u64m4(vuint8mf2_t op1, size_t vl) {
  return __riscv_vzext_vf8_u64m4(op1, vl);
}

vuint64m8_t test_vzext_vf8_u64m8(vuint8m1_t op1, size_t vl) {
  return __riscv_vzext_vf8_u64m8(op1, vl);
}

vuint64m1_t test_vzext_vf8_u64m1_m(vbool64_t mask, vuint8mf8_t op1, size_t vl) {
  return __riscv_vzext_vf8_u64m1_m(mask, op1, vl);
}

vuint64m2_t test_vzext_vf8_u64m2_m(vbool32_t mask, vuint8mf4_t op1, size_t vl) {
  return __riscv_vzext_vf8_u64m2_m(mask, op1, vl);
}

vuint64m4_t test_vzext_vf8_u64m4_m(vbool16_t mask, vuint8mf2_t op1, size_t vl) {
  return __riscv_vzext_vf8_u64m4_m(mask, op1, vl);
}

vuint64m8_t test_vzext_vf8_u64m8_m(vbool8_t mask, vuint8m1_t op1, size_t vl) {
  return __riscv_vzext_vf8_u64m8_m(mask, op1, vl);
}

