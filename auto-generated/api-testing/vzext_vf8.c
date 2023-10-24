#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

vuint64m1_t test_vzext_vf8_u64m1(vuint8mf8_t vs2, size_t vl) {
  return __riscv_vzext_vf8_u64m1(vs2, vl);
}

vuint64m2_t test_vzext_vf8_u64m2(vuint8mf4_t vs2, size_t vl) {
  return __riscv_vzext_vf8_u64m2(vs2, vl);
}

vuint64m4_t test_vzext_vf8_u64m4(vuint8mf2_t vs2, size_t vl) {
  return __riscv_vzext_vf8_u64m4(vs2, vl);
}

vuint64m8_t test_vzext_vf8_u64m8(vuint8m1_t vs2, size_t vl) {
  return __riscv_vzext_vf8_u64m8(vs2, vl);
}

vuint64m1_t test_vzext_vf8_u64m1_m(vbool64_t vm, vuint8mf8_t vs2, size_t vl) {
  return __riscv_vzext_vf8_u64m1_m(vm, vs2, vl);
}

vuint64m2_t test_vzext_vf8_u64m2_m(vbool32_t vm, vuint8mf4_t vs2, size_t vl) {
  return __riscv_vzext_vf8_u64m2_m(vm, vs2, vl);
}

vuint64m4_t test_vzext_vf8_u64m4_m(vbool16_t vm, vuint8mf2_t vs2, size_t vl) {
  return __riscv_vzext_vf8_u64m4_m(vm, vs2, vl);
}

vuint64m8_t test_vzext_vf8_u64m8_m(vbool8_t vm, vuint8m1_t vs2, size_t vl) {
  return __riscv_vzext_vf8_u64m8_m(vm, vs2, vl);
}
