#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat16mf4x4_t test_vlsseg4e16_v_f16mf4x4_tu(vfloat16mf4x4_t maskedoff_tuple,
                                              const float16_t *base,
                                              ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e16_v_f16mf4x4_tu(maskedoff_tuple, base, bstride, vl);
}

vfloat16mf2x4_t test_vlsseg4e16_v_f16mf2x4_tu(vfloat16mf2x4_t maskedoff_tuple,
                                              const float16_t *base,
                                              ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e16_v_f16mf2x4_tu(maskedoff_tuple, base, bstride, vl);
}

vfloat16m1x4_t test_vlsseg4e16_v_f16m1x4_tu(vfloat16m1x4_t maskedoff_tuple,
                                            const float16_t *base,
                                            ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e16_v_f16m1x4_tu(maskedoff_tuple, base, bstride, vl);
}

vfloat16m2x4_t test_vlsseg4e16_v_f16m2x4_tu(vfloat16m2x4_t maskedoff_tuple,
                                            const float16_t *base,
                                            ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e16_v_f16m2x4_tu(maskedoff_tuple, base, bstride, vl);
}

vint16mf4x4_t test_vlsseg4e16_v_i16mf4x4_tu(vint16mf4x4_t maskedoff_tuple,
                                            const int16_t *base,
                                            ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e16_v_i16mf4x4_tu(maskedoff_tuple, base, bstride, vl);
}

vint16mf2x4_t test_vlsseg4e16_v_i16mf2x4_tu(vint16mf2x4_t maskedoff_tuple,
                                            const int16_t *base,
                                            ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e16_v_i16mf2x4_tu(maskedoff_tuple, base, bstride, vl);
}

vint16m1x4_t test_vlsseg4e16_v_i16m1x4_tu(vint16m1x4_t maskedoff_tuple,
                                          const int16_t *base,
                                          ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e16_v_i16m1x4_tu(maskedoff_tuple, base, bstride, vl);
}

vint16m2x4_t test_vlsseg4e16_v_i16m2x4_tu(vint16m2x4_t maskedoff_tuple,
                                          const int16_t *base,
                                          ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e16_v_i16m2x4_tu(maskedoff_tuple, base, bstride, vl);
}

vuint16mf4x4_t test_vlsseg4e16_v_u16mf4x4_tu(vuint16mf4x4_t maskedoff_tuple,
                                             const uint16_t *base,
                                             ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e16_v_u16mf4x4_tu(maskedoff_tuple, base, bstride, vl);
}

vuint16mf2x4_t test_vlsseg4e16_v_u16mf2x4_tu(vuint16mf2x4_t maskedoff_tuple,
                                             const uint16_t *base,
                                             ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e16_v_u16mf2x4_tu(maskedoff_tuple, base, bstride, vl);
}

vuint16m1x4_t test_vlsseg4e16_v_u16m1x4_tu(vuint16m1x4_t maskedoff_tuple,
                                           const uint16_t *base,
                                           ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e16_v_u16m1x4_tu(maskedoff_tuple, base, bstride, vl);
}

vuint16m2x4_t test_vlsseg4e16_v_u16m2x4_tu(vuint16m2x4_t maskedoff_tuple,
                                           const uint16_t *base,
                                           ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e16_v_u16m2x4_tu(maskedoff_tuple, base, bstride, vl);
}

vfloat16mf4x4_t test_vlsseg4e16_v_f16mf4x4_tum(vbool64_t mask,
                                               vfloat16mf4x4_t maskedoff_tuple,
                                               const float16_t *base,
                                               ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e16_v_f16mf4x4_tum(mask, maskedoff_tuple, base, bstride,
                                           vl);
}

vfloat16mf2x4_t test_vlsseg4e16_v_f16mf2x4_tum(vbool32_t mask,
                                               vfloat16mf2x4_t maskedoff_tuple,
                                               const float16_t *base,
                                               ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e16_v_f16mf2x4_tum(mask, maskedoff_tuple, base, bstride,
                                           vl);
}

vfloat16m1x4_t test_vlsseg4e16_v_f16m1x4_tum(vbool16_t mask,
                                             vfloat16m1x4_t maskedoff_tuple,
                                             const float16_t *base,
                                             ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e16_v_f16m1x4_tum(mask, maskedoff_tuple, base, bstride,
                                          vl);
}

vfloat16m2x4_t test_vlsseg4e16_v_f16m2x4_tum(vbool8_t mask,
                                             vfloat16m2x4_t maskedoff_tuple,
                                             const float16_t *base,
                                             ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e16_v_f16m2x4_tum(mask, maskedoff_tuple, base, bstride,
                                          vl);
}

vint16mf4x4_t test_vlsseg4e16_v_i16mf4x4_tum(vbool64_t mask,
                                             vint16mf4x4_t maskedoff_tuple,
                                             const int16_t *base,
                                             ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e16_v_i16mf4x4_tum(mask, maskedoff_tuple, base, bstride,
                                           vl);
}

vint16mf2x4_t test_vlsseg4e16_v_i16mf2x4_tum(vbool32_t mask,
                                             vint16mf2x4_t maskedoff_tuple,
                                             const int16_t *base,
                                             ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e16_v_i16mf2x4_tum(mask, maskedoff_tuple, base, bstride,
                                           vl);
}

vint16m1x4_t test_vlsseg4e16_v_i16m1x4_tum(vbool16_t mask,
                                           vint16m1x4_t maskedoff_tuple,
                                           const int16_t *base,
                                           ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e16_v_i16m1x4_tum(mask, maskedoff_tuple, base, bstride,
                                          vl);
}

vint16m2x4_t test_vlsseg4e16_v_i16m2x4_tum(vbool8_t mask,
                                           vint16m2x4_t maskedoff_tuple,
                                           const int16_t *base,
                                           ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e16_v_i16m2x4_tum(mask, maskedoff_tuple, base, bstride,
                                          vl);
}

vuint16mf4x4_t test_vlsseg4e16_v_u16mf4x4_tum(vbool64_t mask,
                                              vuint16mf4x4_t maskedoff_tuple,
                                              const uint16_t *base,
                                              ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e16_v_u16mf4x4_tum(mask, maskedoff_tuple, base, bstride,
                                           vl);
}

vuint16mf2x4_t test_vlsseg4e16_v_u16mf2x4_tum(vbool32_t mask,
                                              vuint16mf2x4_t maskedoff_tuple,
                                              const uint16_t *base,
                                              ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e16_v_u16mf2x4_tum(mask, maskedoff_tuple, base, bstride,
                                           vl);
}

vuint16m1x4_t test_vlsseg4e16_v_u16m1x4_tum(vbool16_t mask,
                                            vuint16m1x4_t maskedoff_tuple,
                                            const uint16_t *base,
                                            ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e16_v_u16m1x4_tum(mask, maskedoff_tuple, base, bstride,
                                          vl);
}

vuint16m2x4_t test_vlsseg4e16_v_u16m2x4_tum(vbool8_t mask,
                                            vuint16m2x4_t maskedoff_tuple,
                                            const uint16_t *base,
                                            ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e16_v_u16m2x4_tum(mask, maskedoff_tuple, base, bstride,
                                          vl);
}

vfloat16mf4x4_t test_vlsseg4e16_v_f16mf4x4_tumu(vbool64_t mask,
                                                vfloat16mf4x4_t maskedoff_tuple,
                                                const float16_t *base,
                                                ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e16_v_f16mf4x4_tumu(mask, maskedoff_tuple, base,
                                            bstride, vl);
}

vfloat16mf2x4_t test_vlsseg4e16_v_f16mf2x4_tumu(vbool32_t mask,
                                                vfloat16mf2x4_t maskedoff_tuple,
                                                const float16_t *base,
                                                ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e16_v_f16mf2x4_tumu(mask, maskedoff_tuple, base,
                                            bstride, vl);
}

vfloat16m1x4_t test_vlsseg4e16_v_f16m1x4_tumu(vbool16_t mask,
                                              vfloat16m1x4_t maskedoff_tuple,
                                              const float16_t *base,
                                              ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e16_v_f16m1x4_tumu(mask, maskedoff_tuple, base, bstride,
                                           vl);
}

vfloat16m2x4_t test_vlsseg4e16_v_f16m2x4_tumu(vbool8_t mask,
                                              vfloat16m2x4_t maskedoff_tuple,
                                              const float16_t *base,
                                              ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e16_v_f16m2x4_tumu(mask, maskedoff_tuple, base, bstride,
                                           vl);
}

vint16mf4x4_t test_vlsseg4e16_v_i16mf4x4_tumu(vbool64_t mask,
                                              vint16mf4x4_t maskedoff_tuple,
                                              const int16_t *base,
                                              ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e16_v_i16mf4x4_tumu(mask, maskedoff_tuple, base,
                                            bstride, vl);
}

vint16mf2x4_t test_vlsseg4e16_v_i16mf2x4_tumu(vbool32_t mask,
                                              vint16mf2x4_t maskedoff_tuple,
                                              const int16_t *base,
                                              ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e16_v_i16mf2x4_tumu(mask, maskedoff_tuple, base,
                                            bstride, vl);
}

vint16m1x4_t test_vlsseg4e16_v_i16m1x4_tumu(vbool16_t mask,
                                            vint16m1x4_t maskedoff_tuple,
                                            const int16_t *base,
                                            ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e16_v_i16m1x4_tumu(mask, maskedoff_tuple, base, bstride,
                                           vl);
}

vint16m2x4_t test_vlsseg4e16_v_i16m2x4_tumu(vbool8_t mask,
                                            vint16m2x4_t maskedoff_tuple,
                                            const int16_t *base,
                                            ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e16_v_i16m2x4_tumu(mask, maskedoff_tuple, base, bstride,
                                           vl);
}

vuint16mf4x4_t test_vlsseg4e16_v_u16mf4x4_tumu(vbool64_t mask,
                                               vuint16mf4x4_t maskedoff_tuple,
                                               const uint16_t *base,
                                               ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e16_v_u16mf4x4_tumu(mask, maskedoff_tuple, base,
                                            bstride, vl);
}

vuint16mf2x4_t test_vlsseg4e16_v_u16mf2x4_tumu(vbool32_t mask,
                                               vuint16mf2x4_t maskedoff_tuple,
                                               const uint16_t *base,
                                               ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e16_v_u16mf2x4_tumu(mask, maskedoff_tuple, base,
                                            bstride, vl);
}

vuint16m1x4_t test_vlsseg4e16_v_u16m1x4_tumu(vbool16_t mask,
                                             vuint16m1x4_t maskedoff_tuple,
                                             const uint16_t *base,
                                             ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e16_v_u16m1x4_tumu(mask, maskedoff_tuple, base, bstride,
                                           vl);
}

vuint16m2x4_t test_vlsseg4e16_v_u16m2x4_tumu(vbool8_t mask,
                                             vuint16m2x4_t maskedoff_tuple,
                                             const uint16_t *base,
                                             ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e16_v_u16m2x4_tumu(mask, maskedoff_tuple, base, bstride,
                                           vl);
}

vfloat16mf4x4_t test_vlsseg4e16_v_f16mf4x4_mu(vbool64_t mask,
                                              vfloat16mf4x4_t maskedoff_tuple,
                                              const float16_t *base,
                                              ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e16_v_f16mf4x4_mu(mask, maskedoff_tuple, base, bstride,
                                          vl);
}

vfloat16mf2x4_t test_vlsseg4e16_v_f16mf2x4_mu(vbool32_t mask,
                                              vfloat16mf2x4_t maskedoff_tuple,
                                              const float16_t *base,
                                              ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e16_v_f16mf2x4_mu(mask, maskedoff_tuple, base, bstride,
                                          vl);
}

vfloat16m1x4_t test_vlsseg4e16_v_f16m1x4_mu(vbool16_t mask,
                                            vfloat16m1x4_t maskedoff_tuple,
                                            const float16_t *base,
                                            ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e16_v_f16m1x4_mu(mask, maskedoff_tuple, base, bstride,
                                         vl);
}

vfloat16m2x4_t test_vlsseg4e16_v_f16m2x4_mu(vbool8_t mask,
                                            vfloat16m2x4_t maskedoff_tuple,
                                            const float16_t *base,
                                            ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e16_v_f16m2x4_mu(mask, maskedoff_tuple, base, bstride,
                                         vl);
}

vint16mf4x4_t test_vlsseg4e16_v_i16mf4x4_mu(vbool64_t mask,
                                            vint16mf4x4_t maskedoff_tuple,
                                            const int16_t *base,
                                            ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e16_v_i16mf4x4_mu(mask, maskedoff_tuple, base, bstride,
                                          vl);
}

vint16mf2x4_t test_vlsseg4e16_v_i16mf2x4_mu(vbool32_t mask,
                                            vint16mf2x4_t maskedoff_tuple,
                                            const int16_t *base,
                                            ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e16_v_i16mf2x4_mu(mask, maskedoff_tuple, base, bstride,
                                          vl);
}

vint16m1x4_t test_vlsseg4e16_v_i16m1x4_mu(vbool16_t mask,
                                          vint16m1x4_t maskedoff_tuple,
                                          const int16_t *base,
                                          ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e16_v_i16m1x4_mu(mask, maskedoff_tuple, base, bstride,
                                         vl);
}

vint16m2x4_t test_vlsseg4e16_v_i16m2x4_mu(vbool8_t mask,
                                          vint16m2x4_t maskedoff_tuple,
                                          const int16_t *base,
                                          ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e16_v_i16m2x4_mu(mask, maskedoff_tuple, base, bstride,
                                         vl);
}

vuint16mf4x4_t test_vlsseg4e16_v_u16mf4x4_mu(vbool64_t mask,
                                             vuint16mf4x4_t maskedoff_tuple,
                                             const uint16_t *base,
                                             ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e16_v_u16mf4x4_mu(mask, maskedoff_tuple, base, bstride,
                                          vl);
}

vuint16mf2x4_t test_vlsseg4e16_v_u16mf2x4_mu(vbool32_t mask,
                                             vuint16mf2x4_t maskedoff_tuple,
                                             const uint16_t *base,
                                             ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e16_v_u16mf2x4_mu(mask, maskedoff_tuple, base, bstride,
                                          vl);
}

vuint16m1x4_t test_vlsseg4e16_v_u16m1x4_mu(vbool16_t mask,
                                           vuint16m1x4_t maskedoff_tuple,
                                           const uint16_t *base,
                                           ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e16_v_u16m1x4_mu(mask, maskedoff_tuple, base, bstride,
                                         vl);
}

vuint16m2x4_t test_vlsseg4e16_v_u16m2x4_mu(vbool8_t mask,
                                           vuint16m2x4_t maskedoff_tuple,
                                           const uint16_t *base,
                                           ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e16_v_u16m2x4_mu(mask, maskedoff_tuple, base, bstride,
                                         vl);
}
