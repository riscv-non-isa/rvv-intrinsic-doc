// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +zvfh -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat32mf2x3_t test_vlsseg3e32_v_f32mf2x3_tu(vfloat32mf2x3_t vd,
                                              const float *rs1, ptrdiff_t rs2,
                                              size_t vl) {
  return __riscv_vlsseg3e32_v_f32mf2x3_tu(vd, rs1, rs2, vl);
}

vfloat32m1x3_t test_vlsseg3e32_v_f32m1x3_tu(vfloat32m1x3_t vd, const float *rs1,
                                            ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg3e32_v_f32m1x3_tu(vd, rs1, rs2, vl);
}

vfloat32m2x3_t test_vlsseg3e32_v_f32m2x3_tu(vfloat32m2x3_t vd, const float *rs1,
                                            ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg3e32_v_f32m2x3_tu(vd, rs1, rs2, vl);
}

vint32mf2x3_t test_vlsseg3e32_v_i32mf2x3_tu(vint32mf2x3_t vd,
                                            const int32_t *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg3e32_v_i32mf2x3_tu(vd, rs1, rs2, vl);
}

vint32m1x3_t test_vlsseg3e32_v_i32m1x3_tu(vint32m1x3_t vd, const int32_t *rs1,
                                          ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg3e32_v_i32m1x3_tu(vd, rs1, rs2, vl);
}

vint32m2x3_t test_vlsseg3e32_v_i32m2x3_tu(vint32m2x3_t vd, const int32_t *rs1,
                                          ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg3e32_v_i32m2x3_tu(vd, rs1, rs2, vl);
}

vuint32mf2x3_t test_vlsseg3e32_v_u32mf2x3_tu(vuint32mf2x3_t vd,
                                             const uint32_t *rs1, ptrdiff_t rs2,
                                             size_t vl) {
  return __riscv_vlsseg3e32_v_u32mf2x3_tu(vd, rs1, rs2, vl);
}

vuint32m1x3_t test_vlsseg3e32_v_u32m1x3_tu(vuint32m1x3_t vd,
                                           const uint32_t *rs1, ptrdiff_t rs2,
                                           size_t vl) {
  return __riscv_vlsseg3e32_v_u32m1x3_tu(vd, rs1, rs2, vl);
}

vuint32m2x3_t test_vlsseg3e32_v_u32m2x3_tu(vuint32m2x3_t vd,
                                           const uint32_t *rs1, ptrdiff_t rs2,
                                           size_t vl) {
  return __riscv_vlsseg3e32_v_u32m2x3_tu(vd, rs1, rs2, vl);
}

vfloat32mf2x3_t test_vlsseg3e32_v_f32mf2x3_tum(vbool64_t vm, vfloat32mf2x3_t vd,
                                               const float *rs1, ptrdiff_t rs2,
                                               size_t vl) {
  return __riscv_vlsseg3e32_v_f32mf2x3_tum(vm, vd, rs1, rs2, vl);
}

vfloat32m1x3_t test_vlsseg3e32_v_f32m1x3_tum(vbool32_t vm, vfloat32m1x3_t vd,
                                             const float *rs1, ptrdiff_t rs2,
                                             size_t vl) {
  return __riscv_vlsseg3e32_v_f32m1x3_tum(vm, vd, rs1, rs2, vl);
}

vfloat32m2x3_t test_vlsseg3e32_v_f32m2x3_tum(vbool16_t vm, vfloat32m2x3_t vd,
                                             const float *rs1, ptrdiff_t rs2,
                                             size_t vl) {
  return __riscv_vlsseg3e32_v_f32m2x3_tum(vm, vd, rs1, rs2, vl);
}

vint32mf2x3_t test_vlsseg3e32_v_i32mf2x3_tum(vbool64_t vm, vint32mf2x3_t vd,
                                             const int32_t *rs1, ptrdiff_t rs2,
                                             size_t vl) {
  return __riscv_vlsseg3e32_v_i32mf2x3_tum(vm, vd, rs1, rs2, vl);
}

vint32m1x3_t test_vlsseg3e32_v_i32m1x3_tum(vbool32_t vm, vint32m1x3_t vd,
                                           const int32_t *rs1, ptrdiff_t rs2,
                                           size_t vl) {
  return __riscv_vlsseg3e32_v_i32m1x3_tum(vm, vd, rs1, rs2, vl);
}

vint32m2x3_t test_vlsseg3e32_v_i32m2x3_tum(vbool16_t vm, vint32m2x3_t vd,
                                           const int32_t *rs1, ptrdiff_t rs2,
                                           size_t vl) {
  return __riscv_vlsseg3e32_v_i32m2x3_tum(vm, vd, rs1, rs2, vl);
}

vuint32mf2x3_t test_vlsseg3e32_v_u32mf2x3_tum(vbool64_t vm, vuint32mf2x3_t vd,
                                              const uint32_t *rs1,
                                              ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg3e32_v_u32mf2x3_tum(vm, vd, rs1, rs2, vl);
}

vuint32m1x3_t test_vlsseg3e32_v_u32m1x3_tum(vbool32_t vm, vuint32m1x3_t vd,
                                            const uint32_t *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg3e32_v_u32m1x3_tum(vm, vd, rs1, rs2, vl);
}

vuint32m2x3_t test_vlsseg3e32_v_u32m2x3_tum(vbool16_t vm, vuint32m2x3_t vd,
                                            const uint32_t *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg3e32_v_u32m2x3_tum(vm, vd, rs1, rs2, vl);
}

vfloat32mf2x3_t test_vlsseg3e32_v_f32mf2x3_tumu(vbool64_t vm,
                                                vfloat32mf2x3_t vd,
                                                const float *rs1, ptrdiff_t rs2,
                                                size_t vl) {
  return __riscv_vlsseg3e32_v_f32mf2x3_tumu(vm, vd, rs1, rs2, vl);
}

vfloat32m1x3_t test_vlsseg3e32_v_f32m1x3_tumu(vbool32_t vm, vfloat32m1x3_t vd,
                                              const float *rs1, ptrdiff_t rs2,
                                              size_t vl) {
  return __riscv_vlsseg3e32_v_f32m1x3_tumu(vm, vd, rs1, rs2, vl);
}

vfloat32m2x3_t test_vlsseg3e32_v_f32m2x3_tumu(vbool16_t vm, vfloat32m2x3_t vd,
                                              const float *rs1, ptrdiff_t rs2,
                                              size_t vl) {
  return __riscv_vlsseg3e32_v_f32m2x3_tumu(vm, vd, rs1, rs2, vl);
}

vint32mf2x3_t test_vlsseg3e32_v_i32mf2x3_tumu(vbool64_t vm, vint32mf2x3_t vd,
                                              const int32_t *rs1, ptrdiff_t rs2,
                                              size_t vl) {
  return __riscv_vlsseg3e32_v_i32mf2x3_tumu(vm, vd, rs1, rs2, vl);
}

vint32m1x3_t test_vlsseg3e32_v_i32m1x3_tumu(vbool32_t vm, vint32m1x3_t vd,
                                            const int32_t *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg3e32_v_i32m1x3_tumu(vm, vd, rs1, rs2, vl);
}

vint32m2x3_t test_vlsseg3e32_v_i32m2x3_tumu(vbool16_t vm, vint32m2x3_t vd,
                                            const int32_t *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg3e32_v_i32m2x3_tumu(vm, vd, rs1, rs2, vl);
}

vuint32mf2x3_t test_vlsseg3e32_v_u32mf2x3_tumu(vbool64_t vm, vuint32mf2x3_t vd,
                                               const uint32_t *rs1,
                                               ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg3e32_v_u32mf2x3_tumu(vm, vd, rs1, rs2, vl);
}

vuint32m1x3_t test_vlsseg3e32_v_u32m1x3_tumu(vbool32_t vm, vuint32m1x3_t vd,
                                             const uint32_t *rs1, ptrdiff_t rs2,
                                             size_t vl) {
  return __riscv_vlsseg3e32_v_u32m1x3_tumu(vm, vd, rs1, rs2, vl);
}

vuint32m2x3_t test_vlsseg3e32_v_u32m2x3_tumu(vbool16_t vm, vuint32m2x3_t vd,
                                             const uint32_t *rs1, ptrdiff_t rs2,
                                             size_t vl) {
  return __riscv_vlsseg3e32_v_u32m2x3_tumu(vm, vd, rs1, rs2, vl);
}

vfloat32mf2x3_t test_vlsseg3e32_v_f32mf2x3_mu(vbool64_t vm, vfloat32mf2x3_t vd,
                                              const float *rs1, ptrdiff_t rs2,
                                              size_t vl) {
  return __riscv_vlsseg3e32_v_f32mf2x3_mu(vm, vd, rs1, rs2, vl);
}

vfloat32m1x3_t test_vlsseg3e32_v_f32m1x3_mu(vbool32_t vm, vfloat32m1x3_t vd,
                                            const float *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg3e32_v_f32m1x3_mu(vm, vd, rs1, rs2, vl);
}

vfloat32m2x3_t test_vlsseg3e32_v_f32m2x3_mu(vbool16_t vm, vfloat32m2x3_t vd,
                                            const float *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg3e32_v_f32m2x3_mu(vm, vd, rs1, rs2, vl);
}

vint32mf2x3_t test_vlsseg3e32_v_i32mf2x3_mu(vbool64_t vm, vint32mf2x3_t vd,
                                            const int32_t *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg3e32_v_i32mf2x3_mu(vm, vd, rs1, rs2, vl);
}

vint32m1x3_t test_vlsseg3e32_v_i32m1x3_mu(vbool32_t vm, vint32m1x3_t vd,
                                          const int32_t *rs1, ptrdiff_t rs2,
                                          size_t vl) {
  return __riscv_vlsseg3e32_v_i32m1x3_mu(vm, vd, rs1, rs2, vl);
}

vint32m2x3_t test_vlsseg3e32_v_i32m2x3_mu(vbool16_t vm, vint32m2x3_t vd,
                                          const int32_t *rs1, ptrdiff_t rs2,
                                          size_t vl) {
  return __riscv_vlsseg3e32_v_i32m2x3_mu(vm, vd, rs1, rs2, vl);
}

vuint32mf2x3_t test_vlsseg3e32_v_u32mf2x3_mu(vbool64_t vm, vuint32mf2x3_t vd,
                                             const uint32_t *rs1, ptrdiff_t rs2,
                                             size_t vl) {
  return __riscv_vlsseg3e32_v_u32mf2x3_mu(vm, vd, rs1, rs2, vl);
}

vuint32m1x3_t test_vlsseg3e32_v_u32m1x3_mu(vbool32_t vm, vuint32m1x3_t vd,
                                           const uint32_t *rs1, ptrdiff_t rs2,
                                           size_t vl) {
  return __riscv_vlsseg3e32_v_u32m1x3_mu(vm, vd, rs1, rs2, vl);
}

vuint32m2x3_t test_vlsseg3e32_v_u32m2x3_mu(vbool16_t vm, vuint32m2x3_t vd,
                                           const uint32_t *rs1, ptrdiff_t rs2,
                                           size_t vl) {
  return __riscv_vlsseg3e32_v_u32m2x3_mu(vm, vd, rs1, rs2, vl);
}
