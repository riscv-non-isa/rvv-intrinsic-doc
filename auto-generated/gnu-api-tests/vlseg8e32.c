/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

vfloat32mf2x8_t test_vlseg8e32_v_f32mf2x8(const float32_t *rs1, size_t vl) {
  return __riscv_vlseg8e32_v_f32mf2x8(rs1, vl);
}

vfloat32m1x8_t test_vlseg8e32_v_f32m1x8(const float32_t *rs1, size_t vl) {
  return __riscv_vlseg8e32_v_f32m1x8(rs1, vl);
}

vint32mf2x8_t test_vlseg8e32_v_i32mf2x8(const int32_t *rs1, size_t vl) {
  return __riscv_vlseg8e32_v_i32mf2x8(rs1, vl);
}

vint32m1x8_t test_vlseg8e32_v_i32m1x8(const int32_t *rs1, size_t vl) {
  return __riscv_vlseg8e32_v_i32m1x8(rs1, vl);
}

vuint32mf2x8_t test_vlseg8e32_v_u32mf2x8(const uint32_t *rs1, size_t vl) {
  return __riscv_vlseg8e32_v_u32mf2x8(rs1, vl);
}

vuint32m1x8_t test_vlseg8e32_v_u32m1x8(const uint32_t *rs1, size_t vl) {
  return __riscv_vlseg8e32_v_u32m1x8(rs1, vl);
}

vfloat32mf2x8_t test_vlseg8e32_v_f32mf2x8_m(vbool64_t vm, const float32_t *rs1, size_t vl) {
  return __riscv_vlseg8e32_v_f32mf2x8_m(vm, rs1, vl);
}

vfloat32m1x8_t test_vlseg8e32_v_f32m1x8_m(vbool32_t vm, const float32_t *rs1, size_t vl) {
  return __riscv_vlseg8e32_v_f32m1x8_m(vm, rs1, vl);
}

vint32mf2x8_t test_vlseg8e32_v_i32mf2x8_m(vbool64_t vm, const int32_t *rs1, size_t vl) {
  return __riscv_vlseg8e32_v_i32mf2x8_m(vm, rs1, vl);
}

vint32m1x8_t test_vlseg8e32_v_i32m1x8_m(vbool32_t vm, const int32_t *rs1, size_t vl) {
  return __riscv_vlseg8e32_v_i32m1x8_m(vm, rs1, vl);
}

vuint32mf2x8_t test_vlseg8e32_v_u32mf2x8_m(vbool64_t vm, const uint32_t *rs1, size_t vl) {
  return __riscv_vlseg8e32_v_u32mf2x8_m(vm, rs1, vl);
}

vuint32m1x8_t test_vlseg8e32_v_u32m1x8_m(vbool32_t vm, const uint32_t *rs1, size_t vl) {
  return __riscv_vlseg8e32_v_u32m1x8_m(vm, rs1, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vlseg8e32\.[ivxfswum.]+\s+} 12 } } */