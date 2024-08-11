/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

vint32mf2x7_t test_vlseg7e32_v_i32mf2x7(const int32_t *rs1, size_t vl) {
  return __riscv_vlseg7e32_v_i32mf2x7(rs1, vl);
}

vint32m1x7_t test_vlseg7e32_v_i32m1x7(const int32_t *rs1, size_t vl) {
  return __riscv_vlseg7e32_v_i32m1x7(rs1, vl);
}

vuint32mf2x7_t test_vlseg7e32_v_u32mf2x7(const uint32_t *rs1, size_t vl) {
  return __riscv_vlseg7e32_v_u32mf2x7(rs1, vl);
}

vuint32m1x7_t test_vlseg7e32_v_u32m1x7(const uint32_t *rs1, size_t vl) {
  return __riscv_vlseg7e32_v_u32m1x7(rs1, vl);
}

vint32mf2x7_t test_vlseg7e32_v_i32mf2x7_m(vbool64_t vm, const int32_t *rs1, size_t vl) {
  return __riscv_vlseg7e32_v_i32mf2x7_m(vm, rs1, vl);
}

vint32m1x7_t test_vlseg7e32_v_i32m1x7_m(vbool32_t vm, const int32_t *rs1, size_t vl) {
  return __riscv_vlseg7e32_v_i32m1x7_m(vm, rs1, vl);
}

vuint32mf2x7_t test_vlseg7e32_v_u32mf2x7_m(vbool64_t vm, const uint32_t *rs1, size_t vl) {
  return __riscv_vlseg7e32_v_u32mf2x7_m(vm, rs1, vl);
}

vuint32m1x7_t test_vlseg7e32_v_u32m1x7_m(vbool32_t vm, const uint32_t *rs1, size_t vl) {
  return __riscv_vlseg7e32_v_u32m1x7_m(vm, rs1, vl);
}

vfloat32mf2x7_t test_vlseg7e32_v_f32mf2x7(const float *rs1, size_t vl) {
  return __riscv_vlseg7e32_v_f32mf2x7(rs1, vl);
}

vfloat32m1x7_t test_vlseg7e32_v_f32m1x7(const float *rs1, size_t vl) {
  return __riscv_vlseg7e32_v_f32m1x7(rs1, vl);
}

vfloat32mf2x7_t test_vlseg7e32_v_f32mf2x7_m(vbool64_t vm, const float *rs1, size_t vl) {
  return __riscv_vlseg7e32_v_f32mf2x7_m(vm, rs1, vl);
}

vfloat32m1x7_t test_vlseg7e32_v_f32m1x7_m(vbool32_t vm, const float *rs1, size_t vl) {
  return __riscv_vlseg7e32_v_f32m1x7_m(vm, rs1, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vlseg7e32\.[ivxfswum.]+\s+} 12 } } */
