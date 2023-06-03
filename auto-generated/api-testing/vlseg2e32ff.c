#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat32mf2x2_t test_vlseg2e32ff_v_f32mf2x2(const float32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_f32mf2x2(base, new_vl, vl);
}

vfloat32m1x2_t test_vlseg2e32ff_v_f32m1x2(const float32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_f32m1x2(base, new_vl, vl);
}

vfloat32m2x2_t test_vlseg2e32ff_v_f32m2x2(const float32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_f32m2x2(base, new_vl, vl);
}

vfloat32m4x2_t test_vlseg2e32ff_v_f32m4x2(const float32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_f32m4x2(base, new_vl, vl);
}

vint32mf2x2_t test_vlseg2e32ff_v_i32mf2x2(const int32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_i32mf2x2(base, new_vl, vl);
}

vint32m1x2_t test_vlseg2e32ff_v_i32m1x2(const int32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_i32m1x2(base, new_vl, vl);
}

vint32m2x2_t test_vlseg2e32ff_v_i32m2x2(const int32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_i32m2x2(base, new_vl, vl);
}

vint32m4x2_t test_vlseg2e32ff_v_i32m4x2(const int32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_i32m4x2(base, new_vl, vl);
}

vuint32mf2x2_t test_vlseg2e32ff_v_u32mf2x2(const uint32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_u32mf2x2(base, new_vl, vl);
}

vuint32m1x2_t test_vlseg2e32ff_v_u32m1x2(const uint32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_u32m1x2(base, new_vl, vl);
}

vuint32m2x2_t test_vlseg2e32ff_v_u32m2x2(const uint32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_u32m2x2(base, new_vl, vl);
}

vuint32m4x2_t test_vlseg2e32ff_v_u32m4x2(const uint32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_u32m4x2(base, new_vl, vl);
}

vfloat32mf2x2_t test_vlseg2e32ff_v_f32mf2x2_m(vbool64_t mask, const float32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_f32mf2x2_m(mask, base, new_vl, vl);
}

vfloat32m1x2_t test_vlseg2e32ff_v_f32m1x2_m(vbool32_t mask, const float32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_f32m1x2_m(mask, base, new_vl, vl);
}

vfloat32m2x2_t test_vlseg2e32ff_v_f32m2x2_m(vbool16_t mask, const float32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_f32m2x2_m(mask, base, new_vl, vl);
}

vfloat32m4x2_t test_vlseg2e32ff_v_f32m4x2_m(vbool8_t mask, const float32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_f32m4x2_m(mask, base, new_vl, vl);
}

vint32mf2x2_t test_vlseg2e32ff_v_i32mf2x2_m(vbool64_t mask, const int32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_i32mf2x2_m(mask, base, new_vl, vl);
}

vint32m1x2_t test_vlseg2e32ff_v_i32m1x2_m(vbool32_t mask, const int32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_i32m1x2_m(mask, base, new_vl, vl);
}

vint32m2x2_t test_vlseg2e32ff_v_i32m2x2_m(vbool16_t mask, const int32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_i32m2x2_m(mask, base, new_vl, vl);
}

vint32m4x2_t test_vlseg2e32ff_v_i32m4x2_m(vbool8_t mask, const int32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_i32m4x2_m(mask, base, new_vl, vl);
}

vuint32mf2x2_t test_vlseg2e32ff_v_u32mf2x2_m(vbool64_t mask, const uint32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_u32mf2x2_m(mask, base, new_vl, vl);
}

vuint32m1x2_t test_vlseg2e32ff_v_u32m1x2_m(vbool32_t mask, const uint32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_u32m1x2_m(mask, base, new_vl, vl);
}

vuint32m2x2_t test_vlseg2e32ff_v_u32m2x2_m(vbool16_t mask, const uint32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_u32m2x2_m(mask, base, new_vl, vl);
}

vuint32m4x2_t test_vlseg2e32ff_v_u32m4x2_m(vbool8_t mask, const uint32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_u32m4x2_m(mask, base, new_vl, vl);
}

