/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat32mf2x2_t test_vlsseg2e32_v_f32mf2x2(const float32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e32_v_f32mf2x2(rs1, rs2, vl);
}

vfloat32m1x2_t test_vlsseg2e32_v_f32m1x2(const float32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e32_v_f32m1x2(rs1, rs2, vl);
}

vfloat32m2x2_t test_vlsseg2e32_v_f32m2x2(const float32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e32_v_f32m2x2(rs1, rs2, vl);
}

vfloat32m4x2_t test_vlsseg2e32_v_f32m4x2(const float32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e32_v_f32m4x2(rs1, rs2, vl);
}

vint32mf2x2_t test_vlsseg2e32_v_i32mf2x2(const int32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e32_v_i32mf2x2(rs1, rs2, vl);
}

vint32m1x2_t test_vlsseg2e32_v_i32m1x2(const int32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e32_v_i32m1x2(rs1, rs2, vl);
}

vint32m2x2_t test_vlsseg2e32_v_i32m2x2(const int32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e32_v_i32m2x2(rs1, rs2, vl);
}

vint32m4x2_t test_vlsseg2e32_v_i32m4x2(const int32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e32_v_i32m4x2(rs1, rs2, vl);
}

vuint32mf2x2_t test_vlsseg2e32_v_u32mf2x2(const uint32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e32_v_u32mf2x2(rs1, rs2, vl);
}

vuint32m1x2_t test_vlsseg2e32_v_u32m1x2(const uint32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e32_v_u32m1x2(rs1, rs2, vl);
}

vuint32m2x2_t test_vlsseg2e32_v_u32m2x2(const uint32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e32_v_u32m2x2(rs1, rs2, vl);
}

vuint32m4x2_t test_vlsseg2e32_v_u32m4x2(const uint32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e32_v_u32m4x2(rs1, rs2, vl);
}

vfloat32mf2x2_t test_vlsseg2e32_v_f32mf2x2_m(vbool64_t vm, const float32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e32_v_f32mf2x2_m(vm, rs1, rs2, vl);
}

vfloat32m1x2_t test_vlsseg2e32_v_f32m1x2_m(vbool32_t vm, const float32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e32_v_f32m1x2_m(vm, rs1, rs2, vl);
}

vfloat32m2x2_t test_vlsseg2e32_v_f32m2x2_m(vbool16_t vm, const float32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e32_v_f32m2x2_m(vm, rs1, rs2, vl);
}

vfloat32m4x2_t test_vlsseg2e32_v_f32m4x2_m(vbool8_t vm, const float32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e32_v_f32m4x2_m(vm, rs1, rs2, vl);
}

vint32mf2x2_t test_vlsseg2e32_v_i32mf2x2_m(vbool64_t vm, const int32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e32_v_i32mf2x2_m(vm, rs1, rs2, vl);
}

vint32m1x2_t test_vlsseg2e32_v_i32m1x2_m(vbool32_t vm, const int32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e32_v_i32m1x2_m(vm, rs1, rs2, vl);
}

vint32m2x2_t test_vlsseg2e32_v_i32m2x2_m(vbool16_t vm, const int32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e32_v_i32m2x2_m(vm, rs1, rs2, vl);
}

vint32m4x2_t test_vlsseg2e32_v_i32m4x2_m(vbool8_t vm, const int32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e32_v_i32m4x2_m(vm, rs1, rs2, vl);
}

vuint32mf2x2_t test_vlsseg2e32_v_u32mf2x2_m(vbool64_t vm, const uint32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e32_v_u32mf2x2_m(vm, rs1, rs2, vl);
}

vuint32m1x2_t test_vlsseg2e32_v_u32m1x2_m(vbool32_t vm, const uint32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e32_v_u32m1x2_m(vm, rs1, rs2, vl);
}

vuint32m2x2_t test_vlsseg2e32_v_u32m2x2_m(vbool16_t vm, const uint32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e32_v_u32m2x2_m(vm, rs1, rs2, vl);
}

vuint32m4x2_t test_vlsseg2e32_v_u32m4x2_m(vbool8_t vm, const uint32_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e32_v_u32m4x2_m(vm, rs1, rs2, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vlsseg2e32\.[ivxfswum.]+\s+} 24 } } */
