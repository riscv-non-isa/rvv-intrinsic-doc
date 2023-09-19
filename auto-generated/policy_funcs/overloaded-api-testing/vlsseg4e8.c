#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint8mf8x4_t test_vlsseg4e8_v_i8mf8x4_tu(vint8mf8x4_t maskedoff_tuple,
                                         const int8_t *base, ptrdiff_t bstride,
                                         size_t vl) {
  return __riscv_vlsseg4e8_tu(maskedoff_tuple, base, bstride, vl);
}

vint8mf4x4_t test_vlsseg4e8_v_i8mf4x4_tu(vint8mf4x4_t maskedoff_tuple,
                                         const int8_t *base, ptrdiff_t bstride,
                                         size_t vl) {
  return __riscv_vlsseg4e8_tu(maskedoff_tuple, base, bstride, vl);
}

vint8mf2x4_t test_vlsseg4e8_v_i8mf2x4_tu(vint8mf2x4_t maskedoff_tuple,
                                         const int8_t *base, ptrdiff_t bstride,
                                         size_t vl) {
  return __riscv_vlsseg4e8_tu(maskedoff_tuple, base, bstride, vl);
}

vint8m1x4_t test_vlsseg4e8_v_i8m1x4_tu(vint8m1x4_t maskedoff_tuple,
                                       const int8_t *base, ptrdiff_t bstride,
                                       size_t vl) {
  return __riscv_vlsseg4e8_tu(maskedoff_tuple, base, bstride, vl);
}

vint8m2x4_t test_vlsseg4e8_v_i8m2x4_tu(vint8m2x4_t maskedoff_tuple,
                                       const int8_t *base, ptrdiff_t bstride,
                                       size_t vl) {
  return __riscv_vlsseg4e8_tu(maskedoff_tuple, base, bstride, vl);
}

vuint8mf8x4_t test_vlsseg4e8_v_u8mf8x4_tu(vuint8mf8x4_t maskedoff_tuple,
                                          const uint8_t *base,
                                          ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e8_tu(maskedoff_tuple, base, bstride, vl);
}

vuint8mf4x4_t test_vlsseg4e8_v_u8mf4x4_tu(vuint8mf4x4_t maskedoff_tuple,
                                          const uint8_t *base,
                                          ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e8_tu(maskedoff_tuple, base, bstride, vl);
}

vuint8mf2x4_t test_vlsseg4e8_v_u8mf2x4_tu(vuint8mf2x4_t maskedoff_tuple,
                                          const uint8_t *base,
                                          ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e8_tu(maskedoff_tuple, base, bstride, vl);
}

vuint8m1x4_t test_vlsseg4e8_v_u8m1x4_tu(vuint8m1x4_t maskedoff_tuple,
                                        const uint8_t *base, ptrdiff_t bstride,
                                        size_t vl) {
  return __riscv_vlsseg4e8_tu(maskedoff_tuple, base, bstride, vl);
}

vuint8m2x4_t test_vlsseg4e8_v_u8m2x4_tu(vuint8m2x4_t maskedoff_tuple,
                                        const uint8_t *base, ptrdiff_t bstride,
                                        size_t vl) {
  return __riscv_vlsseg4e8_tu(maskedoff_tuple, base, bstride, vl);
}

vint8mf8x4_t test_vlsseg4e8_v_i8mf8x4_tum(vbool64_t mask,
                                          vint8mf8x4_t maskedoff_tuple,
                                          const int8_t *base, ptrdiff_t bstride,
                                          size_t vl) {
  return __riscv_vlsseg4e8_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vint8mf4x4_t test_vlsseg4e8_v_i8mf4x4_tum(vbool32_t mask,
                                          vint8mf4x4_t maskedoff_tuple,
                                          const int8_t *base, ptrdiff_t bstride,
                                          size_t vl) {
  return __riscv_vlsseg4e8_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vint8mf2x4_t test_vlsseg4e8_v_i8mf2x4_tum(vbool16_t mask,
                                          vint8mf2x4_t maskedoff_tuple,
                                          const int8_t *base, ptrdiff_t bstride,
                                          size_t vl) {
  return __riscv_vlsseg4e8_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vint8m1x4_t test_vlsseg4e8_v_i8m1x4_tum(vbool8_t mask,
                                        vint8m1x4_t maskedoff_tuple,
                                        const int8_t *base, ptrdiff_t bstride,
                                        size_t vl) {
  return __riscv_vlsseg4e8_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vint8m2x4_t test_vlsseg4e8_v_i8m2x4_tum(vbool4_t mask,
                                        vint8m2x4_t maskedoff_tuple,
                                        const int8_t *base, ptrdiff_t bstride,
                                        size_t vl) {
  return __riscv_vlsseg4e8_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vuint8mf8x4_t test_vlsseg4e8_v_u8mf8x4_tum(vbool64_t mask,
                                           vuint8mf8x4_t maskedoff_tuple,
                                           const uint8_t *base,
                                           ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e8_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vuint8mf4x4_t test_vlsseg4e8_v_u8mf4x4_tum(vbool32_t mask,
                                           vuint8mf4x4_t maskedoff_tuple,
                                           const uint8_t *base,
                                           ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e8_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vuint8mf2x4_t test_vlsseg4e8_v_u8mf2x4_tum(vbool16_t mask,
                                           vuint8mf2x4_t maskedoff_tuple,
                                           const uint8_t *base,
                                           ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e8_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vuint8m1x4_t test_vlsseg4e8_v_u8m1x4_tum(vbool8_t mask,
                                         vuint8m1x4_t maskedoff_tuple,
                                         const uint8_t *base, ptrdiff_t bstride,
                                         size_t vl) {
  return __riscv_vlsseg4e8_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vuint8m2x4_t test_vlsseg4e8_v_u8m2x4_tum(vbool4_t mask,
                                         vuint8m2x4_t maskedoff_tuple,
                                         const uint8_t *base, ptrdiff_t bstride,
                                         size_t vl) {
  return __riscv_vlsseg4e8_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vint8mf8x4_t test_vlsseg4e8_v_i8mf8x4_tumu(vbool64_t mask,
                                           vint8mf8x4_t maskedoff_tuple,
                                           const int8_t *base,
                                           ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e8_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vint8mf4x4_t test_vlsseg4e8_v_i8mf4x4_tumu(vbool32_t mask,
                                           vint8mf4x4_t maskedoff_tuple,
                                           const int8_t *base,
                                           ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e8_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vint8mf2x4_t test_vlsseg4e8_v_i8mf2x4_tumu(vbool16_t mask,
                                           vint8mf2x4_t maskedoff_tuple,
                                           const int8_t *base,
                                           ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e8_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vint8m1x4_t test_vlsseg4e8_v_i8m1x4_tumu(vbool8_t mask,
                                         vint8m1x4_t maskedoff_tuple,
                                         const int8_t *base, ptrdiff_t bstride,
                                         size_t vl) {
  return __riscv_vlsseg4e8_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vint8m2x4_t test_vlsseg4e8_v_i8m2x4_tumu(vbool4_t mask,
                                         vint8m2x4_t maskedoff_tuple,
                                         const int8_t *base, ptrdiff_t bstride,
                                         size_t vl) {
  return __riscv_vlsseg4e8_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vuint8mf8x4_t test_vlsseg4e8_v_u8mf8x4_tumu(vbool64_t mask,
                                            vuint8mf8x4_t maskedoff_tuple,
                                            const uint8_t *base,
                                            ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e8_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vuint8mf4x4_t test_vlsseg4e8_v_u8mf4x4_tumu(vbool32_t mask,
                                            vuint8mf4x4_t maskedoff_tuple,
                                            const uint8_t *base,
                                            ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e8_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vuint8mf2x4_t test_vlsseg4e8_v_u8mf2x4_tumu(vbool16_t mask,
                                            vuint8mf2x4_t maskedoff_tuple,
                                            const uint8_t *base,
                                            ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e8_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vuint8m1x4_t test_vlsseg4e8_v_u8m1x4_tumu(vbool8_t mask,
                                          vuint8m1x4_t maskedoff_tuple,
                                          const uint8_t *base,
                                          ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e8_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vuint8m2x4_t test_vlsseg4e8_v_u8m2x4_tumu(vbool4_t mask,
                                          vuint8m2x4_t maskedoff_tuple,
                                          const uint8_t *base,
                                          ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e8_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vint8mf8x4_t test_vlsseg4e8_v_i8mf8x4_mu(vbool64_t mask,
                                         vint8mf8x4_t maskedoff_tuple,
                                         const int8_t *base, ptrdiff_t bstride,
                                         size_t vl) {
  return __riscv_vlsseg4e8_mu(mask, maskedoff_tuple, base, bstride, vl);
}

vint8mf4x4_t test_vlsseg4e8_v_i8mf4x4_mu(vbool32_t mask,
                                         vint8mf4x4_t maskedoff_tuple,
                                         const int8_t *base, ptrdiff_t bstride,
                                         size_t vl) {
  return __riscv_vlsseg4e8_mu(mask, maskedoff_tuple, base, bstride, vl);
}

vint8mf2x4_t test_vlsseg4e8_v_i8mf2x4_mu(vbool16_t mask,
                                         vint8mf2x4_t maskedoff_tuple,
                                         const int8_t *base, ptrdiff_t bstride,
                                         size_t vl) {
  return __riscv_vlsseg4e8_mu(mask, maskedoff_tuple, base, bstride, vl);
}

vint8m1x4_t test_vlsseg4e8_v_i8m1x4_mu(vbool8_t mask,
                                       vint8m1x4_t maskedoff_tuple,
                                       const int8_t *base, ptrdiff_t bstride,
                                       size_t vl) {
  return __riscv_vlsseg4e8_mu(mask, maskedoff_tuple, base, bstride, vl);
}

vint8m2x4_t test_vlsseg4e8_v_i8m2x4_mu(vbool4_t mask,
                                       vint8m2x4_t maskedoff_tuple,
                                       const int8_t *base, ptrdiff_t bstride,
                                       size_t vl) {
  return __riscv_vlsseg4e8_mu(mask, maskedoff_tuple, base, bstride, vl);
}

vuint8mf8x4_t test_vlsseg4e8_v_u8mf8x4_mu(vbool64_t mask,
                                          vuint8mf8x4_t maskedoff_tuple,
                                          const uint8_t *base,
                                          ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e8_mu(mask, maskedoff_tuple, base, bstride, vl);
}

vuint8mf4x4_t test_vlsseg4e8_v_u8mf4x4_mu(vbool32_t mask,
                                          vuint8mf4x4_t maskedoff_tuple,
                                          const uint8_t *base,
                                          ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e8_mu(mask, maskedoff_tuple, base, bstride, vl);
}

vuint8mf2x4_t test_vlsseg4e8_v_u8mf2x4_mu(vbool16_t mask,
                                          vuint8mf2x4_t maskedoff_tuple,
                                          const uint8_t *base,
                                          ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e8_mu(mask, maskedoff_tuple, base, bstride, vl);
}

vuint8m1x4_t test_vlsseg4e8_v_u8m1x4_mu(vbool8_t mask,
                                        vuint8m1x4_t maskedoff_tuple,
                                        const uint8_t *base, ptrdiff_t bstride,
                                        size_t vl) {
  return __riscv_vlsseg4e8_mu(mask, maskedoff_tuple, base, bstride, vl);
}

vuint8m2x4_t test_vlsseg4e8_v_u8m2x4_mu(vbool4_t mask,
                                        vuint8m2x4_t maskedoff_tuple,
                                        const uint8_t *base, ptrdiff_t bstride,
                                        size_t vl) {
  return __riscv_vlsseg4e8_mu(mask, maskedoff_tuple, base, bstride, vl);
}
