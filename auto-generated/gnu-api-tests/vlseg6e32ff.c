/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat32mf2x6_t test_vlseg6e32ff_v_f32mf2x6(const float32_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e32ff_v_f32mf2x6(rs1, new_vl, vl);
}

vfloat32m1x6_t test_vlseg6e32ff_v_f32m1x6(const float32_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e32ff_v_f32m1x6(rs1, new_vl, vl);
}

vint32mf2x6_t test_vlseg6e32ff_v_i32mf2x6(const int32_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e32ff_v_i32mf2x6(rs1, new_vl, vl);
}

vint32m1x6_t test_vlseg6e32ff_v_i32m1x6(const int32_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e32ff_v_i32m1x6(rs1, new_vl, vl);
}

vuint32mf2x6_t test_vlseg6e32ff_v_u32mf2x6(const uint32_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e32ff_v_u32mf2x6(rs1, new_vl, vl);
}

vuint32m1x6_t test_vlseg6e32ff_v_u32m1x6(const uint32_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e32ff_v_u32m1x6(rs1, new_vl, vl);
}

vfloat32mf2x6_t test_vlseg6e32ff_v_f32mf2x6_m(vbool64_t vm, const float32_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e32ff_v_f32mf2x6_m(vm, rs1, new_vl, vl);
}

vfloat32m1x6_t test_vlseg6e32ff_v_f32m1x6_m(vbool32_t vm, const float32_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e32ff_v_f32m1x6_m(vm, rs1, new_vl, vl);
}

vint32mf2x6_t test_vlseg6e32ff_v_i32mf2x6_m(vbool64_t vm, const int32_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e32ff_v_i32mf2x6_m(vm, rs1, new_vl, vl);
}

vint32m1x6_t test_vlseg6e32ff_v_i32m1x6_m(vbool32_t vm, const int32_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e32ff_v_i32m1x6_m(vm, rs1, new_vl, vl);
}

vuint32mf2x6_t test_vlseg6e32ff_v_u32mf2x6_m(vbool64_t vm, const uint32_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e32ff_v_u32mf2x6_m(vm, rs1, new_vl, vl);
}

vuint32m1x6_t test_vlseg6e32ff_v_u32m1x6_m(vbool32_t vm, const uint32_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e32ff_v_u32m1x6_m(vm, rs1, new_vl, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vlseg6e32ff\.[ivxfswum.]+\s+} 12 } } */
