/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

vbool64_t test_vmflt_vv_f16mf4_b64(vfloat16mf4_t vs2, vfloat16mf4_t vs1, size_t vl) {
  return __riscv_vmflt_vv_f16mf4_b64(vs2, vs1, vl);
}

vbool64_t test_vmflt_vf_f16mf4_b64(vfloat16mf4_t vs2, float16_t rs1, size_t vl) {
  return __riscv_vmflt_vf_f16mf4_b64(vs2, rs1, vl);
}

vbool32_t test_vmflt_vv_f16mf2_b32(vfloat16mf2_t vs2, vfloat16mf2_t vs1, size_t vl) {
  return __riscv_vmflt_vv_f16mf2_b32(vs2, vs1, vl);
}

vbool32_t test_vmflt_vf_f16mf2_b32(vfloat16mf2_t vs2, float16_t rs1, size_t vl) {
  return __riscv_vmflt_vf_f16mf2_b32(vs2, rs1, vl);
}

vbool16_t test_vmflt_vv_f16m1_b16(vfloat16m1_t vs2, vfloat16m1_t vs1, size_t vl) {
  return __riscv_vmflt_vv_f16m1_b16(vs2, vs1, vl);
}

vbool16_t test_vmflt_vf_f16m1_b16(vfloat16m1_t vs2, float16_t rs1, size_t vl) {
  return __riscv_vmflt_vf_f16m1_b16(vs2, rs1, vl);
}

vbool8_t test_vmflt_vv_f16m2_b8(vfloat16m2_t vs2, vfloat16m2_t vs1, size_t vl) {
  return __riscv_vmflt_vv_f16m2_b8(vs2, vs1, vl);
}

vbool8_t test_vmflt_vf_f16m2_b8(vfloat16m2_t vs2, float16_t rs1, size_t vl) {
  return __riscv_vmflt_vf_f16m2_b8(vs2, rs1, vl);
}

vbool4_t test_vmflt_vv_f16m4_b4(vfloat16m4_t vs2, vfloat16m4_t vs1, size_t vl) {
  return __riscv_vmflt_vv_f16m4_b4(vs2, vs1, vl);
}

vbool4_t test_vmflt_vf_f16m4_b4(vfloat16m4_t vs2, float16_t rs1, size_t vl) {
  return __riscv_vmflt_vf_f16m4_b4(vs2, rs1, vl);
}

vbool2_t test_vmflt_vv_f16m8_b2(vfloat16m8_t vs2, vfloat16m8_t vs1, size_t vl) {
  return __riscv_vmflt_vv_f16m8_b2(vs2, vs1, vl);
}

vbool2_t test_vmflt_vf_f16m8_b2(vfloat16m8_t vs2, float16_t rs1, size_t vl) {
  return __riscv_vmflt_vf_f16m8_b2(vs2, rs1, vl);
}

vbool64_t test_vmflt_vv_f32mf2_b64(vfloat32mf2_t vs2, vfloat32mf2_t vs1, size_t vl) {
  return __riscv_vmflt_vv_f32mf2_b64(vs2, vs1, vl);
}

vbool64_t test_vmflt_vf_f32mf2_b64(vfloat32mf2_t vs2, float32_t rs1, size_t vl) {
  return __riscv_vmflt_vf_f32mf2_b64(vs2, rs1, vl);
}

vbool32_t test_vmflt_vv_f32m1_b32(vfloat32m1_t vs2, vfloat32m1_t vs1, size_t vl) {
  return __riscv_vmflt_vv_f32m1_b32(vs2, vs1, vl);
}

vbool32_t test_vmflt_vf_f32m1_b32(vfloat32m1_t vs2, float32_t rs1, size_t vl) {
  return __riscv_vmflt_vf_f32m1_b32(vs2, rs1, vl);
}

vbool16_t test_vmflt_vv_f32m2_b16(vfloat32m2_t vs2, vfloat32m2_t vs1, size_t vl) {
  return __riscv_vmflt_vv_f32m2_b16(vs2, vs1, vl);
}

vbool16_t test_vmflt_vf_f32m2_b16(vfloat32m2_t vs2, float32_t rs1, size_t vl) {
  return __riscv_vmflt_vf_f32m2_b16(vs2, rs1, vl);
}

vbool8_t test_vmflt_vv_f32m4_b8(vfloat32m4_t vs2, vfloat32m4_t vs1, size_t vl) {
  return __riscv_vmflt_vv_f32m4_b8(vs2, vs1, vl);
}

vbool8_t test_vmflt_vf_f32m4_b8(vfloat32m4_t vs2, float32_t rs1, size_t vl) {
  return __riscv_vmflt_vf_f32m4_b8(vs2, rs1, vl);
}

vbool4_t test_vmflt_vv_f32m8_b4(vfloat32m8_t vs2, vfloat32m8_t vs1, size_t vl) {
  return __riscv_vmflt_vv_f32m8_b4(vs2, vs1, vl);
}

vbool4_t test_vmflt_vf_f32m8_b4(vfloat32m8_t vs2, float32_t rs1, size_t vl) {
  return __riscv_vmflt_vf_f32m8_b4(vs2, rs1, vl);
}

vbool64_t test_vmflt_vv_f64m1_b64(vfloat64m1_t vs2, vfloat64m1_t vs1, size_t vl) {
  return __riscv_vmflt_vv_f64m1_b64(vs2, vs1, vl);
}

vbool64_t test_vmflt_vf_f64m1_b64(vfloat64m1_t vs2, float64_t rs1, size_t vl) {
  return __riscv_vmflt_vf_f64m1_b64(vs2, rs1, vl);
}

vbool32_t test_vmflt_vv_f64m2_b32(vfloat64m2_t vs2, vfloat64m2_t vs1, size_t vl) {
  return __riscv_vmflt_vv_f64m2_b32(vs2, vs1, vl);
}

vbool32_t test_vmflt_vf_f64m2_b32(vfloat64m2_t vs2, float64_t rs1, size_t vl) {
  return __riscv_vmflt_vf_f64m2_b32(vs2, rs1, vl);
}

vbool16_t test_vmflt_vv_f64m4_b16(vfloat64m4_t vs2, vfloat64m4_t vs1, size_t vl) {
  return __riscv_vmflt_vv_f64m4_b16(vs2, vs1, vl);
}

vbool16_t test_vmflt_vf_f64m4_b16(vfloat64m4_t vs2, float64_t rs1, size_t vl) {
  return __riscv_vmflt_vf_f64m4_b16(vs2, rs1, vl);
}

vbool8_t test_vmflt_vv_f64m8_b8(vfloat64m8_t vs2, vfloat64m8_t vs1, size_t vl) {
  return __riscv_vmflt_vv_f64m8_b8(vs2, vs1, vl);
}

vbool8_t test_vmflt_vf_f64m8_b8(vfloat64m8_t vs2, float64_t rs1, size_t vl) {
  return __riscv_vmflt_vf_f64m8_b8(vs2, rs1, vl);
}

vbool64_t test_vmflt_vv_f16mf4_b64_m(vbool64_t vm, vfloat16mf4_t vs2, vfloat16mf4_t vs1, size_t vl) {
  return __riscv_vmflt_vv_f16mf4_b64_m(vm, vs2, vs1, vl);
}

vbool64_t test_vmflt_vf_f16mf4_b64_m(vbool64_t vm, vfloat16mf4_t vs2, float16_t rs1, size_t vl) {
  return __riscv_vmflt_vf_f16mf4_b64_m(vm, vs2, rs1, vl);
}

vbool32_t test_vmflt_vv_f16mf2_b32_m(vbool32_t vm, vfloat16mf2_t vs2, vfloat16mf2_t vs1, size_t vl) {
  return __riscv_vmflt_vv_f16mf2_b32_m(vm, vs2, vs1, vl);
}

vbool32_t test_vmflt_vf_f16mf2_b32_m(vbool32_t vm, vfloat16mf2_t vs2, float16_t rs1, size_t vl) {
  return __riscv_vmflt_vf_f16mf2_b32_m(vm, vs2, rs1, vl);
}

vbool16_t test_vmflt_vv_f16m1_b16_m(vbool16_t vm, vfloat16m1_t vs2, vfloat16m1_t vs1, size_t vl) {
  return __riscv_vmflt_vv_f16m1_b16_m(vm, vs2, vs1, vl);
}

vbool16_t test_vmflt_vf_f16m1_b16_m(vbool16_t vm, vfloat16m1_t vs2, float16_t rs1, size_t vl) {
  return __riscv_vmflt_vf_f16m1_b16_m(vm, vs2, rs1, vl);
}

vbool8_t test_vmflt_vv_f16m2_b8_m(vbool8_t vm, vfloat16m2_t vs2, vfloat16m2_t vs1, size_t vl) {
  return __riscv_vmflt_vv_f16m2_b8_m(vm, vs2, vs1, vl);
}

vbool8_t test_vmflt_vf_f16m2_b8_m(vbool8_t vm, vfloat16m2_t vs2, float16_t rs1, size_t vl) {
  return __riscv_vmflt_vf_f16m2_b8_m(vm, vs2, rs1, vl);
}

vbool4_t test_vmflt_vv_f16m4_b4_m(vbool4_t vm, vfloat16m4_t vs2, vfloat16m4_t vs1, size_t vl) {
  return __riscv_vmflt_vv_f16m4_b4_m(vm, vs2, vs1, vl);
}

vbool4_t test_vmflt_vf_f16m4_b4_m(vbool4_t vm, vfloat16m4_t vs2, float16_t rs1, size_t vl) {
  return __riscv_vmflt_vf_f16m4_b4_m(vm, vs2, rs1, vl);
}

vbool2_t test_vmflt_vv_f16m8_b2_m(vbool2_t vm, vfloat16m8_t vs2, vfloat16m8_t vs1, size_t vl) {
  return __riscv_vmflt_vv_f16m8_b2_m(vm, vs2, vs1, vl);
}

vbool2_t test_vmflt_vf_f16m8_b2_m(vbool2_t vm, vfloat16m8_t vs2, float16_t rs1, size_t vl) {
  return __riscv_vmflt_vf_f16m8_b2_m(vm, vs2, rs1, vl);
}

vbool64_t test_vmflt_vv_f32mf2_b64_m(vbool64_t vm, vfloat32mf2_t vs2, vfloat32mf2_t vs1, size_t vl) {
  return __riscv_vmflt_vv_f32mf2_b64_m(vm, vs2, vs1, vl);
}

vbool64_t test_vmflt_vf_f32mf2_b64_m(vbool64_t vm, vfloat32mf2_t vs2, float32_t rs1, size_t vl) {
  return __riscv_vmflt_vf_f32mf2_b64_m(vm, vs2, rs1, vl);
}

vbool32_t test_vmflt_vv_f32m1_b32_m(vbool32_t vm, vfloat32m1_t vs2, vfloat32m1_t vs1, size_t vl) {
  return __riscv_vmflt_vv_f32m1_b32_m(vm, vs2, vs1, vl);
}

vbool32_t test_vmflt_vf_f32m1_b32_m(vbool32_t vm, vfloat32m1_t vs2, float32_t rs1, size_t vl) {
  return __riscv_vmflt_vf_f32m1_b32_m(vm, vs2, rs1, vl);
}

vbool16_t test_vmflt_vv_f32m2_b16_m(vbool16_t vm, vfloat32m2_t vs2, vfloat32m2_t vs1, size_t vl) {
  return __riscv_vmflt_vv_f32m2_b16_m(vm, vs2, vs1, vl);
}

vbool16_t test_vmflt_vf_f32m2_b16_m(vbool16_t vm, vfloat32m2_t vs2, float32_t rs1, size_t vl) {
  return __riscv_vmflt_vf_f32m2_b16_m(vm, vs2, rs1, vl);
}

vbool8_t test_vmflt_vv_f32m4_b8_m(vbool8_t vm, vfloat32m4_t vs2, vfloat32m4_t vs1, size_t vl) {
  return __riscv_vmflt_vv_f32m4_b8_m(vm, vs2, vs1, vl);
}

vbool8_t test_vmflt_vf_f32m4_b8_m(vbool8_t vm, vfloat32m4_t vs2, float32_t rs1, size_t vl) {
  return __riscv_vmflt_vf_f32m4_b8_m(vm, vs2, rs1, vl);
}

vbool4_t test_vmflt_vv_f32m8_b4_m(vbool4_t vm, vfloat32m8_t vs2, vfloat32m8_t vs1, size_t vl) {
  return __riscv_vmflt_vv_f32m8_b4_m(vm, vs2, vs1, vl);
}

vbool4_t test_vmflt_vf_f32m8_b4_m(vbool4_t vm, vfloat32m8_t vs2, float32_t rs1, size_t vl) {
  return __riscv_vmflt_vf_f32m8_b4_m(vm, vs2, rs1, vl);
}

vbool64_t test_vmflt_vv_f64m1_b64_m(vbool64_t vm, vfloat64m1_t vs2, vfloat64m1_t vs1, size_t vl) {
  return __riscv_vmflt_vv_f64m1_b64_m(vm, vs2, vs1, vl);
}

vbool64_t test_vmflt_vf_f64m1_b64_m(vbool64_t vm, vfloat64m1_t vs2, float64_t rs1, size_t vl) {
  return __riscv_vmflt_vf_f64m1_b64_m(vm, vs2, rs1, vl);
}

vbool32_t test_vmflt_vv_f64m2_b32_m(vbool32_t vm, vfloat64m2_t vs2, vfloat64m2_t vs1, size_t vl) {
  return __riscv_vmflt_vv_f64m2_b32_m(vm, vs2, vs1, vl);
}

vbool32_t test_vmflt_vf_f64m2_b32_m(vbool32_t vm, vfloat64m2_t vs2, float64_t rs1, size_t vl) {
  return __riscv_vmflt_vf_f64m2_b32_m(vm, vs2, rs1, vl);
}

vbool16_t test_vmflt_vv_f64m4_b16_m(vbool16_t vm, vfloat64m4_t vs2, vfloat64m4_t vs1, size_t vl) {
  return __riscv_vmflt_vv_f64m4_b16_m(vm, vs2, vs1, vl);
}

vbool16_t test_vmflt_vf_f64m4_b16_m(vbool16_t vm, vfloat64m4_t vs2, float64_t rs1, size_t vl) {
  return __riscv_vmflt_vf_f64m4_b16_m(vm, vs2, rs1, vl);
}

vbool8_t test_vmflt_vv_f64m8_b8_m(vbool8_t vm, vfloat64m8_t vs2, vfloat64m8_t vs1, size_t vl) {
  return __riscv_vmflt_vv_f64m8_b8_m(vm, vs2, vs1, vl);
}

vbool8_t test_vmflt_vf_f64m8_b8_m(vbool8_t vm, vfloat64m8_t vs2, float64_t rs1, size_t vl) {
  return __riscv_vmflt_vf_f64m8_b8_m(vm, vs2, rs1, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vmflt\.[ivxfswum.]+\s+} 60 } } */
