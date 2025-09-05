// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +zvfh -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat32mf2x8_t test_vlsseg8e32_v_f32mf2x8_tu(vfloat32mf2x8_t vd,
                                              const float *rs1, ptrdiff_t rs2,
                                              size_t vl) {
  return __riscv_vlsseg8e32_v_f32mf2x8_tu(vd, rs1, rs2, vl);
}

vfloat32m1x8_t test_vlsseg8e32_v_f32m1x8_tu(vfloat32m1x8_t vd, const float *rs1,
                                            ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg8e32_v_f32m1x8_tu(vd, rs1, rs2, vl);
}

vint32mf2x8_t test_vlsseg8e32_v_i32mf2x8_tu(vint32mf2x8_t vd,
                                            const int32_t *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg8e32_v_i32mf2x8_tu(vd, rs1, rs2, vl);
}

vint32m1x8_t test_vlsseg8e32_v_i32m1x8_tu(vint32m1x8_t vd, const int32_t *rs1,
                                          ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg8e32_v_i32m1x8_tu(vd, rs1, rs2, vl);
}

vuint32mf2x8_t test_vlsseg8e32_v_u32mf2x8_tu(vuint32mf2x8_t vd,
                                             const uint32_t *rs1, ptrdiff_t rs2,
                                             size_t vl) {
  return __riscv_vlsseg8e32_v_u32mf2x8_tu(vd, rs1, rs2, vl);
}

vuint32m1x8_t test_vlsseg8e32_v_u32m1x8_tu(vuint32m1x8_t vd,
                                           const uint32_t *rs1, ptrdiff_t rs2,
                                           size_t vl) {
  return __riscv_vlsseg8e32_v_u32m1x8_tu(vd, rs1, rs2, vl);
}

vfloat32mf2x8_t test_vlsseg8e32_v_f32mf2x8_tum(vbool64_t vm, vfloat32mf2x8_t vd,
                                               const float *rs1, ptrdiff_t rs2,
                                               size_t vl) {
  return __riscv_vlsseg8e32_v_f32mf2x8_tum(vm, vd, rs1, rs2, vl);
}

vfloat32m1x8_t test_vlsseg8e32_v_f32m1x8_tum(vbool32_t vm, vfloat32m1x8_t vd,
                                             const float *rs1, ptrdiff_t rs2,
                                             size_t vl) {
  return __riscv_vlsseg8e32_v_f32m1x8_tum(vm, vd, rs1, rs2, vl);
}

vint32mf2x8_t test_vlsseg8e32_v_i32mf2x8_tum(vbool64_t vm, vint32mf2x8_t vd,
                                             const int32_t *rs1, ptrdiff_t rs2,
                                             size_t vl) {
  return __riscv_vlsseg8e32_v_i32mf2x8_tum(vm, vd, rs1, rs2, vl);
}

vint32m1x8_t test_vlsseg8e32_v_i32m1x8_tum(vbool32_t vm, vint32m1x8_t vd,
                                           const int32_t *rs1, ptrdiff_t rs2,
                                           size_t vl) {
  return __riscv_vlsseg8e32_v_i32m1x8_tum(vm, vd, rs1, rs2, vl);
}

vuint32mf2x8_t test_vlsseg8e32_v_u32mf2x8_tum(vbool64_t vm, vuint32mf2x8_t vd,
                                              const uint32_t *rs1,
                                              ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg8e32_v_u32mf2x8_tum(vm, vd, rs1, rs2, vl);
}

vuint32m1x8_t test_vlsseg8e32_v_u32m1x8_tum(vbool32_t vm, vuint32m1x8_t vd,
                                            const uint32_t *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg8e32_v_u32m1x8_tum(vm, vd, rs1, rs2, vl);
}

vfloat32mf2x8_t test_vlsseg8e32_v_f32mf2x8_tumu(vbool64_t vm,
                                                vfloat32mf2x8_t vd,
                                                const float *rs1, ptrdiff_t rs2,
                                                size_t vl) {
  return __riscv_vlsseg8e32_v_f32mf2x8_tumu(vm, vd, rs1, rs2, vl);
}

vfloat32m1x8_t test_vlsseg8e32_v_f32m1x8_tumu(vbool32_t vm, vfloat32m1x8_t vd,
                                              const float *rs1, ptrdiff_t rs2,
                                              size_t vl) {
  return __riscv_vlsseg8e32_v_f32m1x8_tumu(vm, vd, rs1, rs2, vl);
}

vint32mf2x8_t test_vlsseg8e32_v_i32mf2x8_tumu(vbool64_t vm, vint32mf2x8_t vd,
                                              const int32_t *rs1, ptrdiff_t rs2,
                                              size_t vl) {
  return __riscv_vlsseg8e32_v_i32mf2x8_tumu(vm, vd, rs1, rs2, vl);
}

vint32m1x8_t test_vlsseg8e32_v_i32m1x8_tumu(vbool32_t vm, vint32m1x8_t vd,
                                            const int32_t *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg8e32_v_i32m1x8_tumu(vm, vd, rs1, rs2, vl);
}

vuint32mf2x8_t test_vlsseg8e32_v_u32mf2x8_tumu(vbool64_t vm, vuint32mf2x8_t vd,
                                               const uint32_t *rs1,
                                               ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg8e32_v_u32mf2x8_tumu(vm, vd, rs1, rs2, vl);
}

vuint32m1x8_t test_vlsseg8e32_v_u32m1x8_tumu(vbool32_t vm, vuint32m1x8_t vd,
                                             const uint32_t *rs1, ptrdiff_t rs2,
                                             size_t vl) {
  return __riscv_vlsseg8e32_v_u32m1x8_tumu(vm, vd, rs1, rs2, vl);
}

vfloat32mf2x8_t test_vlsseg8e32_v_f32mf2x8_mu(vbool64_t vm, vfloat32mf2x8_t vd,
                                              const float *rs1, ptrdiff_t rs2,
                                              size_t vl) {
  return __riscv_vlsseg8e32_v_f32mf2x8_mu(vm, vd, rs1, rs2, vl);
}

vfloat32m1x8_t test_vlsseg8e32_v_f32m1x8_mu(vbool32_t vm, vfloat32m1x8_t vd,
                                            const float *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg8e32_v_f32m1x8_mu(vm, vd, rs1, rs2, vl);
}

vint32mf2x8_t test_vlsseg8e32_v_i32mf2x8_mu(vbool64_t vm, vint32mf2x8_t vd,
                                            const int32_t *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg8e32_v_i32mf2x8_mu(vm, vd, rs1, rs2, vl);
}

vint32m1x8_t test_vlsseg8e32_v_i32m1x8_mu(vbool32_t vm, vint32m1x8_t vd,
                                          const int32_t *rs1, ptrdiff_t rs2,
                                          size_t vl) {
  return __riscv_vlsseg8e32_v_i32m1x8_mu(vm, vd, rs1, rs2, vl);
}

vuint32mf2x8_t test_vlsseg8e32_v_u32mf2x8_mu(vbool64_t vm, vuint32mf2x8_t vd,
                                             const uint32_t *rs1, ptrdiff_t rs2,
                                             size_t vl) {
  return __riscv_vlsseg8e32_v_u32mf2x8_mu(vm, vd, rs1, rs2, vl);
}

vuint32m1x8_t test_vlsseg8e32_v_u32m1x8_mu(vbool32_t vm, vuint32m1x8_t vd,
                                           const uint32_t *rs1, ptrdiff_t rs2,
                                           size_t vl) {
  return __riscv_vlsseg8e32_v_u32m1x8_mu(vm, vd, rs1, rs2, vl);
}
