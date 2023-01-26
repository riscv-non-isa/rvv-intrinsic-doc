#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vlseg4e16ff_v_f16mf4_m(vfloat16mf4_t *v0, vfloat16mf4_t *v1, vfloat16mf4_t *v2, vfloat16mf4_t *v3, vbool64_t mask, const float16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e16ff(v0, v1, v2, v3, mask, base, new_vl, vl);
}

void test_vlseg4e16ff_v_f16mf2_m(vfloat16mf2_t *v0, vfloat16mf2_t *v1, vfloat16mf2_t *v2, vfloat16mf2_t *v3, vbool32_t mask, const float16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e16ff(v0, v1, v2, v3, mask, base, new_vl, vl);
}

void test_vlseg4e16ff_v_f16m1_m(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t *v3, vbool16_t mask, const float16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e16ff(v0, v1, v2, v3, mask, base, new_vl, vl);
}

void test_vlseg4e16ff_v_f16m2_m(vfloat16m2_t *v0, vfloat16m2_t *v1, vfloat16m2_t *v2, vfloat16m2_t *v3, vbool8_t mask, const float16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e16ff(v0, v1, v2, v3, mask, base, new_vl, vl);
}

void test_vlseg4e16ff_v_i16mf4_m(vint16mf4_t *v0, vint16mf4_t *v1, vint16mf4_t *v2, vint16mf4_t *v3, vbool64_t mask, const int16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e16ff(v0, v1, v2, v3, mask, base, new_vl, vl);
}

void test_vlseg4e16ff_v_i16mf2_m(vint16mf2_t *v0, vint16mf2_t *v1, vint16mf2_t *v2, vint16mf2_t *v3, vbool32_t mask, const int16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e16ff(v0, v1, v2, v3, mask, base, new_vl, vl);
}

void test_vlseg4e16ff_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vbool16_t mask, const int16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e16ff(v0, v1, v2, v3, mask, base, new_vl, vl);
}

void test_vlseg4e16ff_v_i16m2_m(vint16m2_t *v0, vint16m2_t *v1, vint16m2_t *v2, vint16m2_t *v3, vbool8_t mask, const int16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e16ff(v0, v1, v2, v3, mask, base, new_vl, vl);
}

void test_vlseg4e16ff_v_u16mf4_m(vuint16mf4_t *v0, vuint16mf4_t *v1, vuint16mf4_t *v2, vuint16mf4_t *v3, vbool64_t mask, const uint16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e16ff(v0, v1, v2, v3, mask, base, new_vl, vl);
}

void test_vlseg4e16ff_v_u16mf2_m(vuint16mf2_t *v0, vuint16mf2_t *v1, vuint16mf2_t *v2, vuint16mf2_t *v3, vbool32_t mask, const uint16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e16ff(v0, v1, v2, v3, mask, base, new_vl, vl);
}

void test_vlseg4e16ff_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vbool16_t mask, const uint16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e16ff(v0, v1, v2, v3, mask, base, new_vl, vl);
}

void test_vlseg4e16ff_v_u16m2_m(vuint16m2_t *v0, vuint16m2_t *v1, vuint16m2_t *v2, vuint16m2_t *v3, vbool8_t mask, const uint16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e16ff(v0, v1, v2, v3, mask, base, new_vl, vl);
}

