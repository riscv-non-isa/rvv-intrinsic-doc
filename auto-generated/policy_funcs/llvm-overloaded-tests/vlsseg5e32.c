// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat32mf2x5_t test_vlsseg5e32_v_f32mf2x5_tu(vfloat32mf2x5_t maskedoff_tuple,
                                              const float *base,
                                              ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg5e32_tu(maskedoff_tuple, base, bstride, vl);
}

vfloat32m1x5_t test_vlsseg5e32_v_f32m1x5_tu(vfloat32m1x5_t maskedoff_tuple,
                                            const float *base,
                                            ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg5e32_tu(maskedoff_tuple, base, bstride, vl);
}

vint32mf2x5_t test_vlsseg5e32_v_i32mf2x5_tu(vint32mf2x5_t maskedoff_tuple,
                                            const int32_t *base,
                                            ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg5e32_tu(maskedoff_tuple, base, bstride, vl);
}

vint32m1x5_t test_vlsseg5e32_v_i32m1x5_tu(vint32m1x5_t maskedoff_tuple,
                                          const int32_t *base,
                                          ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg5e32_tu(maskedoff_tuple, base, bstride, vl);
}

vuint32mf2x5_t test_vlsseg5e32_v_u32mf2x5_tu(vuint32mf2x5_t maskedoff_tuple,
                                             const uint32_t *base,
                                             ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg5e32_tu(maskedoff_tuple, base, bstride, vl);
}

vuint32m1x5_t test_vlsseg5e32_v_u32m1x5_tu(vuint32m1x5_t maskedoff_tuple,
                                           const uint32_t *base,
                                           ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg5e32_tu(maskedoff_tuple, base, bstride, vl);
}

vfloat32mf2x5_t test_vlsseg5e32_v_f32mf2x5_tum(vbool64_t mask,
                                               vfloat32mf2x5_t maskedoff_tuple,
                                               const float *base,
                                               ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg5e32_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vfloat32m1x5_t test_vlsseg5e32_v_f32m1x5_tum(vbool32_t mask,
                                             vfloat32m1x5_t maskedoff_tuple,
                                             const float *base,
                                             ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg5e32_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vint32mf2x5_t test_vlsseg5e32_v_i32mf2x5_tum(vbool64_t mask,
                                             vint32mf2x5_t maskedoff_tuple,
                                             const int32_t *base,
                                             ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg5e32_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vint32m1x5_t test_vlsseg5e32_v_i32m1x5_tum(vbool32_t mask,
                                           vint32m1x5_t maskedoff_tuple,
                                           const int32_t *base,
                                           ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg5e32_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vuint32mf2x5_t test_vlsseg5e32_v_u32mf2x5_tum(vbool64_t mask,
                                              vuint32mf2x5_t maskedoff_tuple,
                                              const uint32_t *base,
                                              ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg5e32_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vuint32m1x5_t test_vlsseg5e32_v_u32m1x5_tum(vbool32_t mask,
                                            vuint32m1x5_t maskedoff_tuple,
                                            const uint32_t *base,
                                            ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg5e32_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vfloat32mf2x5_t test_vlsseg5e32_v_f32mf2x5_tumu(vbool64_t mask,
                                                vfloat32mf2x5_t maskedoff_tuple,
                                                const float *base,
                                                ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg5e32_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vfloat32m1x5_t test_vlsseg5e32_v_f32m1x5_tumu(vbool32_t mask,
                                              vfloat32m1x5_t maskedoff_tuple,
                                              const float *base,
                                              ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg5e32_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vint32mf2x5_t test_vlsseg5e32_v_i32mf2x5_tumu(vbool64_t mask,
                                              vint32mf2x5_t maskedoff_tuple,
                                              const int32_t *base,
                                              ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg5e32_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vint32m1x5_t test_vlsseg5e32_v_i32m1x5_tumu(vbool32_t mask,
                                            vint32m1x5_t maskedoff_tuple,
                                            const int32_t *base,
                                            ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg5e32_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vuint32mf2x5_t test_vlsseg5e32_v_u32mf2x5_tumu(vbool64_t mask,
                                               vuint32mf2x5_t maskedoff_tuple,
                                               const uint32_t *base,
                                               ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg5e32_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vuint32m1x5_t test_vlsseg5e32_v_u32m1x5_tumu(vbool32_t mask,
                                             vuint32m1x5_t maskedoff_tuple,
                                             const uint32_t *base,
                                             ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg5e32_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vfloat32mf2x5_t test_vlsseg5e32_v_f32mf2x5_mu(vbool64_t mask,
                                              vfloat32mf2x5_t maskedoff_tuple,
                                              const float *base,
                                              ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg5e32_mu(mask, maskedoff_tuple, base, bstride, vl);
}

vfloat32m1x5_t test_vlsseg5e32_v_f32m1x5_mu(vbool32_t mask,
                                            vfloat32m1x5_t maskedoff_tuple,
                                            const float *base,
                                            ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg5e32_mu(mask, maskedoff_tuple, base, bstride, vl);
}

vint32mf2x5_t test_vlsseg5e32_v_i32mf2x5_mu(vbool64_t mask,
                                            vint32mf2x5_t maskedoff_tuple,
                                            const int32_t *base,
                                            ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg5e32_mu(mask, maskedoff_tuple, base, bstride, vl);
}

vint32m1x5_t test_vlsseg5e32_v_i32m1x5_mu(vbool32_t mask,
                                          vint32m1x5_t maskedoff_tuple,
                                          const int32_t *base,
                                          ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg5e32_mu(mask, maskedoff_tuple, base, bstride, vl);
}

vuint32mf2x5_t test_vlsseg5e32_v_u32mf2x5_mu(vbool64_t mask,
                                             vuint32mf2x5_t maskedoff_tuple,
                                             const uint32_t *base,
                                             ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg5e32_mu(mask, maskedoff_tuple, base, bstride, vl);
}

vuint32m1x5_t test_vlsseg5e32_v_u32m1x5_mu(vbool32_t mask,
                                           vuint32m1x5_t maskedoff_tuple,
                                           const uint32_t *base,
                                           ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg5e32_mu(mask, maskedoff_tuple, base, bstride, vl);
}
