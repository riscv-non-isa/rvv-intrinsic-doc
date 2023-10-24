/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

vfloat32mf2x5_t test_vlseg5e32ff_v_f32mf2x5_tu(vfloat32mf2x5_t vd, const float32_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e32ff_tu(vd, rs1, new_vl, vl);
}

vfloat32m1x5_t test_vlseg5e32ff_v_f32m1x5_tu(vfloat32m1x5_t vd, const float32_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e32ff_tu(vd, rs1, new_vl, vl);
}

vint32mf2x5_t test_vlseg5e32ff_v_i32mf2x5_tu(vint32mf2x5_t vd, const int32_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e32ff_tu(vd, rs1, new_vl, vl);
}

vint32m1x5_t test_vlseg5e32ff_v_i32m1x5_tu(vint32m1x5_t vd, const int32_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e32ff_tu(vd, rs1, new_vl, vl);
}

vuint32mf2x5_t test_vlseg5e32ff_v_u32mf2x5_tu(vuint32mf2x5_t vd, const uint32_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e32ff_tu(vd, rs1, new_vl, vl);
}

vuint32m1x5_t test_vlseg5e32ff_v_u32m1x5_tu(vuint32m1x5_t vd, const uint32_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e32ff_tu(vd, rs1, new_vl, vl);
}

vfloat32mf2x5_t test_vlseg5e32ff_v_f32mf2x5_tum(vbool64_t vm, vfloat32mf2x5_t vd, const float32_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e32ff_tum(vm, vd, rs1, new_vl, vl);
}

vfloat32m1x5_t test_vlseg5e32ff_v_f32m1x5_tum(vbool32_t vm, vfloat32m1x5_t vd, const float32_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e32ff_tum(vm, vd, rs1, new_vl, vl);
}

vint32mf2x5_t test_vlseg5e32ff_v_i32mf2x5_tum(vbool64_t vm, vint32mf2x5_t vd, const int32_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e32ff_tum(vm, vd, rs1, new_vl, vl);
}

vint32m1x5_t test_vlseg5e32ff_v_i32m1x5_tum(vbool32_t vm, vint32m1x5_t vd, const int32_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e32ff_tum(vm, vd, rs1, new_vl, vl);
}

vuint32mf2x5_t test_vlseg5e32ff_v_u32mf2x5_tum(vbool64_t vm, vuint32mf2x5_t vd, const uint32_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e32ff_tum(vm, vd, rs1, new_vl, vl);
}

vuint32m1x5_t test_vlseg5e32ff_v_u32m1x5_tum(vbool32_t vm, vuint32m1x5_t vd, const uint32_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e32ff_tum(vm, vd, rs1, new_vl, vl);
}

vfloat32mf2x5_t test_vlseg5e32ff_v_f32mf2x5_tumu(vbool64_t vm, vfloat32mf2x5_t vd, const float32_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e32ff_tumu(vm, vd, rs1, new_vl, vl);
}

vfloat32m1x5_t test_vlseg5e32ff_v_f32m1x5_tumu(vbool32_t vm, vfloat32m1x5_t vd, const float32_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e32ff_tumu(vm, vd, rs1, new_vl, vl);
}

vint32mf2x5_t test_vlseg5e32ff_v_i32mf2x5_tumu(vbool64_t vm, vint32mf2x5_t vd, const int32_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e32ff_tumu(vm, vd, rs1, new_vl, vl);
}

vint32m1x5_t test_vlseg5e32ff_v_i32m1x5_tumu(vbool32_t vm, vint32m1x5_t vd, const int32_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e32ff_tumu(vm, vd, rs1, new_vl, vl);
}

vuint32mf2x5_t test_vlseg5e32ff_v_u32mf2x5_tumu(vbool64_t vm, vuint32mf2x5_t vd, const uint32_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e32ff_tumu(vm, vd, rs1, new_vl, vl);
}

vuint32m1x5_t test_vlseg5e32ff_v_u32m1x5_tumu(vbool32_t vm, vuint32m1x5_t vd, const uint32_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e32ff_tumu(vm, vd, rs1, new_vl, vl);
}

vfloat32mf2x5_t test_vlseg5e32ff_v_f32mf2x5_mu(vbool64_t vm, vfloat32mf2x5_t vd, const float32_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e32ff_mu(vm, vd, rs1, new_vl, vl);
}

vfloat32m1x5_t test_vlseg5e32ff_v_f32m1x5_mu(vbool32_t vm, vfloat32m1x5_t vd, const float32_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e32ff_mu(vm, vd, rs1, new_vl, vl);
}

vint32mf2x5_t test_vlseg5e32ff_v_i32mf2x5_mu(vbool64_t vm, vint32mf2x5_t vd, const int32_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e32ff_mu(vm, vd, rs1, new_vl, vl);
}

vint32m1x5_t test_vlseg5e32ff_v_i32m1x5_mu(vbool32_t vm, vint32m1x5_t vd, const int32_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e32ff_mu(vm, vd, rs1, new_vl, vl);
}

vuint32mf2x5_t test_vlseg5e32ff_v_u32mf2x5_mu(vbool64_t vm, vuint32mf2x5_t vd, const uint32_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e32ff_mu(vm, vd, rs1, new_vl, vl);
}

vuint32m1x5_t test_vlseg5e32ff_v_u32m1x5_mu(vbool32_t vm, vuint32m1x5_t vd, const uint32_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e32ff_mu(vm, vd, rs1, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vlseg5e32ff\.[ivxfswum.]+\s+} 24 } } */
