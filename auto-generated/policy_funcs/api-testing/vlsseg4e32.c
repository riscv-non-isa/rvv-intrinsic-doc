#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat32mf2x4_t test_vlsseg4e32_v_f32mf2x4_tu(vfloat32mf2x4_t maskedoff_tuple,
                                              const float32_t *base,
                                              ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e32_v_f32mf2x4_tu(maskedoff_tuple, base, bstride, vl);
}

vfloat32m1x4_t test_vlsseg4e32_v_f32m1x4_tu(vfloat32m1x4_t maskedoff_tuple,
                                            const float32_t *base,
                                            ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e32_v_f32m1x4_tu(maskedoff_tuple, base, bstride, vl);
}

vfloat32m2x4_t test_vlsseg4e32_v_f32m2x4_tu(vfloat32m2x4_t maskedoff_tuple,
                                            const float32_t *base,
                                            ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e32_v_f32m2x4_tu(maskedoff_tuple, base, bstride, vl);
}

vint32mf2x4_t test_vlsseg4e32_v_i32mf2x4_tu(vint32mf2x4_t maskedoff_tuple,
                                            const int32_t *base,
                                            ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e32_v_i32mf2x4_tu(maskedoff_tuple, base, bstride, vl);
}

vint32m1x4_t test_vlsseg4e32_v_i32m1x4_tu(vint32m1x4_t maskedoff_tuple,
                                          const int32_t *base,
                                          ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e32_v_i32m1x4_tu(maskedoff_tuple, base, bstride, vl);
}

vint32m2x4_t test_vlsseg4e32_v_i32m2x4_tu(vint32m2x4_t maskedoff_tuple,
                                          const int32_t *base,
                                          ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e32_v_i32m2x4_tu(maskedoff_tuple, base, bstride, vl);
}

vuint32mf2x4_t test_vlsseg4e32_v_u32mf2x4_tu(vuint32mf2x4_t maskedoff_tuple,
                                             const uint32_t *base,
                                             ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e32_v_u32mf2x4_tu(maskedoff_tuple, base, bstride, vl);
}

vuint32m1x4_t test_vlsseg4e32_v_u32m1x4_tu(vuint32m1x4_t maskedoff_tuple,
                                           const uint32_t *base,
                                           ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e32_v_u32m1x4_tu(maskedoff_tuple, base, bstride, vl);
}

vuint32m2x4_t test_vlsseg4e32_v_u32m2x4_tu(vuint32m2x4_t maskedoff_tuple,
                                           const uint32_t *base,
                                           ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e32_v_u32m2x4_tu(maskedoff_tuple, base, bstride, vl);
}

vfloat32mf2x4_t test_vlsseg4e32_v_f32mf2x4_tum(vbool64_t mask,
                                               vfloat32mf2x4_t maskedoff_tuple,
                                               const float32_t *base,
                                               ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e32_v_f32mf2x4_tum(mask, maskedoff_tuple, base, bstride,
                                           vl);
}

vfloat32m1x4_t test_vlsseg4e32_v_f32m1x4_tum(vbool32_t mask,
                                             vfloat32m1x4_t maskedoff_tuple,
                                             const float32_t *base,
                                             ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e32_v_f32m1x4_tum(mask, maskedoff_tuple, base, bstride,
                                          vl);
}

vfloat32m2x4_t test_vlsseg4e32_v_f32m2x4_tum(vbool16_t mask,
                                             vfloat32m2x4_t maskedoff_tuple,
                                             const float32_t *base,
                                             ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e32_v_f32m2x4_tum(mask, maskedoff_tuple, base, bstride,
                                          vl);
}

vint32mf2x4_t test_vlsseg4e32_v_i32mf2x4_tum(vbool64_t mask,
                                             vint32mf2x4_t maskedoff_tuple,
                                             const int32_t *base,
                                             ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e32_v_i32mf2x4_tum(mask, maskedoff_tuple, base, bstride,
                                           vl);
}

vint32m1x4_t test_vlsseg4e32_v_i32m1x4_tum(vbool32_t mask,
                                           vint32m1x4_t maskedoff_tuple,
                                           const int32_t *base,
                                           ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e32_v_i32m1x4_tum(mask, maskedoff_tuple, base, bstride,
                                          vl);
}

vint32m2x4_t test_vlsseg4e32_v_i32m2x4_tum(vbool16_t mask,
                                           vint32m2x4_t maskedoff_tuple,
                                           const int32_t *base,
                                           ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e32_v_i32m2x4_tum(mask, maskedoff_tuple, base, bstride,
                                          vl);
}

vuint32mf2x4_t test_vlsseg4e32_v_u32mf2x4_tum(vbool64_t mask,
                                              vuint32mf2x4_t maskedoff_tuple,
                                              const uint32_t *base,
                                              ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e32_v_u32mf2x4_tum(mask, maskedoff_tuple, base, bstride,
                                           vl);
}

vuint32m1x4_t test_vlsseg4e32_v_u32m1x4_tum(vbool32_t mask,
                                            vuint32m1x4_t maskedoff_tuple,
                                            const uint32_t *base,
                                            ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e32_v_u32m1x4_tum(mask, maskedoff_tuple, base, bstride,
                                          vl);
}

vuint32m2x4_t test_vlsseg4e32_v_u32m2x4_tum(vbool16_t mask,
                                            vuint32m2x4_t maskedoff_tuple,
                                            const uint32_t *base,
                                            ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e32_v_u32m2x4_tum(mask, maskedoff_tuple, base, bstride,
                                          vl);
}

vfloat32mf2x4_t test_vlsseg4e32_v_f32mf2x4_tumu(vbool64_t mask,
                                                vfloat32mf2x4_t maskedoff_tuple,
                                                const float32_t *base,
                                                ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e32_v_f32mf2x4_tumu(mask, maskedoff_tuple, base,
                                            bstride, vl);
}

vfloat32m1x4_t test_vlsseg4e32_v_f32m1x4_tumu(vbool32_t mask,
                                              vfloat32m1x4_t maskedoff_tuple,
                                              const float32_t *base,
                                              ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e32_v_f32m1x4_tumu(mask, maskedoff_tuple, base, bstride,
                                           vl);
}

vfloat32m2x4_t test_vlsseg4e32_v_f32m2x4_tumu(vbool16_t mask,
                                              vfloat32m2x4_t maskedoff_tuple,
                                              const float32_t *base,
                                              ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e32_v_f32m2x4_tumu(mask, maskedoff_tuple, base, bstride,
                                           vl);
}

vint32mf2x4_t test_vlsseg4e32_v_i32mf2x4_tumu(vbool64_t mask,
                                              vint32mf2x4_t maskedoff_tuple,
                                              const int32_t *base,
                                              ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e32_v_i32mf2x4_tumu(mask, maskedoff_tuple, base,
                                            bstride, vl);
}

vint32m1x4_t test_vlsseg4e32_v_i32m1x4_tumu(vbool32_t mask,
                                            vint32m1x4_t maskedoff_tuple,
                                            const int32_t *base,
                                            ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e32_v_i32m1x4_tumu(mask, maskedoff_tuple, base, bstride,
                                           vl);
}

vint32m2x4_t test_vlsseg4e32_v_i32m2x4_tumu(vbool16_t mask,
                                            vint32m2x4_t maskedoff_tuple,
                                            const int32_t *base,
                                            ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e32_v_i32m2x4_tumu(mask, maskedoff_tuple, base, bstride,
                                           vl);
}

vuint32mf2x4_t test_vlsseg4e32_v_u32mf2x4_tumu(vbool64_t mask,
                                               vuint32mf2x4_t maskedoff_tuple,
                                               const uint32_t *base,
                                               ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e32_v_u32mf2x4_tumu(mask, maskedoff_tuple, base,
                                            bstride, vl);
}

vuint32m1x4_t test_vlsseg4e32_v_u32m1x4_tumu(vbool32_t mask,
                                             vuint32m1x4_t maskedoff_tuple,
                                             const uint32_t *base,
                                             ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e32_v_u32m1x4_tumu(mask, maskedoff_tuple, base, bstride,
                                           vl);
}

vuint32m2x4_t test_vlsseg4e32_v_u32m2x4_tumu(vbool16_t mask,
                                             vuint32m2x4_t maskedoff_tuple,
                                             const uint32_t *base,
                                             ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e32_v_u32m2x4_tumu(mask, maskedoff_tuple, base, bstride,
                                           vl);
}

vfloat32mf2x4_t test_vlsseg4e32_v_f32mf2x4_mu(vbool64_t mask,
                                              vfloat32mf2x4_t maskedoff_tuple,
                                              const float32_t *base,
                                              ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e32_v_f32mf2x4_mu(mask, maskedoff_tuple, base, bstride,
                                          vl);
}

vfloat32m1x4_t test_vlsseg4e32_v_f32m1x4_mu(vbool32_t mask,
                                            vfloat32m1x4_t maskedoff_tuple,
                                            const float32_t *base,
                                            ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e32_v_f32m1x4_mu(mask, maskedoff_tuple, base, bstride,
                                         vl);
}

vfloat32m2x4_t test_vlsseg4e32_v_f32m2x4_mu(vbool16_t mask,
                                            vfloat32m2x4_t maskedoff_tuple,
                                            const float32_t *base,
                                            ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e32_v_f32m2x4_mu(mask, maskedoff_tuple, base, bstride,
                                         vl);
}

vint32mf2x4_t test_vlsseg4e32_v_i32mf2x4_mu(vbool64_t mask,
                                            vint32mf2x4_t maskedoff_tuple,
                                            const int32_t *base,
                                            ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e32_v_i32mf2x4_mu(mask, maskedoff_tuple, base, bstride,
                                          vl);
}

vint32m1x4_t test_vlsseg4e32_v_i32m1x4_mu(vbool32_t mask,
                                          vint32m1x4_t maskedoff_tuple,
                                          const int32_t *base,
                                          ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e32_v_i32m1x4_mu(mask, maskedoff_tuple, base, bstride,
                                         vl);
}

vint32m2x4_t test_vlsseg4e32_v_i32m2x4_mu(vbool16_t mask,
                                          vint32m2x4_t maskedoff_tuple,
                                          const int32_t *base,
                                          ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e32_v_i32m2x4_mu(mask, maskedoff_tuple, base, bstride,
                                         vl);
}

vuint32mf2x4_t test_vlsseg4e32_v_u32mf2x4_mu(vbool64_t mask,
                                             vuint32mf2x4_t maskedoff_tuple,
                                             const uint32_t *base,
                                             ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e32_v_u32mf2x4_mu(mask, maskedoff_tuple, base, bstride,
                                          vl);
}

vuint32m1x4_t test_vlsseg4e32_v_u32m1x4_mu(vbool32_t mask,
                                           vuint32m1x4_t maskedoff_tuple,
                                           const uint32_t *base,
                                           ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e32_v_u32m1x4_mu(mask, maskedoff_tuple, base, bstride,
                                         vl);
}

vuint32m2x4_t test_vlsseg4e32_v_u32m2x4_mu(vbool16_t mask,
                                           vuint32m2x4_t maskedoff_tuple,
                                           const uint32_t *base,
                                           ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e32_v_u32m2x4_mu(mask, maskedoff_tuple, base, bstride,
                                         vl);
}
