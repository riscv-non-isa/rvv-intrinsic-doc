#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint8mf8x5_t test_vlsseg5e8_v_i8mf8x5_tu(vint8mf8x5_t maskedoff_tuple,
                                         const int8_t *base, ptrdiff_t bstride,
                                         size_t vl) {
  return __riscv_vlsseg5e8_v_i8mf8x5_tu(maskedoff_tuple, base, bstride, vl);
}

vint8mf4x5_t test_vlsseg5e8_v_i8mf4x5_tu(vint8mf4x5_t maskedoff_tuple,
                                         const int8_t *base, ptrdiff_t bstride,
                                         size_t vl) {
  return __riscv_vlsseg5e8_v_i8mf4x5_tu(maskedoff_tuple, base, bstride, vl);
}

vint8mf2x5_t test_vlsseg5e8_v_i8mf2x5_tu(vint8mf2x5_t maskedoff_tuple,
                                         const int8_t *base, ptrdiff_t bstride,
                                         size_t vl) {
  return __riscv_vlsseg5e8_v_i8mf2x5_tu(maskedoff_tuple, base, bstride, vl);
}

vint8m1x5_t test_vlsseg5e8_v_i8m1x5_tu(vint8m1x5_t maskedoff_tuple,
                                       const int8_t *base, ptrdiff_t bstride,
                                       size_t vl) {
  return __riscv_vlsseg5e8_v_i8m1x5_tu(maskedoff_tuple, base, bstride, vl);
}

vuint8mf8x5_t test_vlsseg5e8_v_u8mf8x5_tu(vuint8mf8x5_t maskedoff_tuple,
                                          const uint8_t *base,
                                          ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg5e8_v_u8mf8x5_tu(maskedoff_tuple, base, bstride, vl);
}

vuint8mf4x5_t test_vlsseg5e8_v_u8mf4x5_tu(vuint8mf4x5_t maskedoff_tuple,
                                          const uint8_t *base,
                                          ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg5e8_v_u8mf4x5_tu(maskedoff_tuple, base, bstride, vl);
}

vuint8mf2x5_t test_vlsseg5e8_v_u8mf2x5_tu(vuint8mf2x5_t maskedoff_tuple,
                                          const uint8_t *base,
                                          ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg5e8_v_u8mf2x5_tu(maskedoff_tuple, base, bstride, vl);
}

vuint8m1x5_t test_vlsseg5e8_v_u8m1x5_tu(vuint8m1x5_t maskedoff_tuple,
                                        const uint8_t *base, ptrdiff_t bstride,
                                        size_t vl) {
  return __riscv_vlsseg5e8_v_u8m1x5_tu(maskedoff_tuple, base, bstride, vl);
}

vint8mf8x5_t test_vlsseg5e8_v_i8mf8x5_tum(vbool64_t mask,
                                          vint8mf8x5_t maskedoff_tuple,
                                          const int8_t *base, ptrdiff_t bstride,
                                          size_t vl) {
  return __riscv_vlsseg5e8_v_i8mf8x5_tum(mask, maskedoff_tuple, base, bstride,
                                         vl);
}

vint8mf4x5_t test_vlsseg5e8_v_i8mf4x5_tum(vbool32_t mask,
                                          vint8mf4x5_t maskedoff_tuple,
                                          const int8_t *base, ptrdiff_t bstride,
                                          size_t vl) {
  return __riscv_vlsseg5e8_v_i8mf4x5_tum(mask, maskedoff_tuple, base, bstride,
                                         vl);
}

vint8mf2x5_t test_vlsseg5e8_v_i8mf2x5_tum(vbool16_t mask,
                                          vint8mf2x5_t maskedoff_tuple,
                                          const int8_t *base, ptrdiff_t bstride,
                                          size_t vl) {
  return __riscv_vlsseg5e8_v_i8mf2x5_tum(mask, maskedoff_tuple, base, bstride,
                                         vl);
}

vint8m1x5_t test_vlsseg5e8_v_i8m1x5_tum(vbool8_t mask,
                                        vint8m1x5_t maskedoff_tuple,
                                        const int8_t *base, ptrdiff_t bstride,
                                        size_t vl) {
  return __riscv_vlsseg5e8_v_i8m1x5_tum(mask, maskedoff_tuple, base, bstride,
                                        vl);
}

vuint8mf8x5_t test_vlsseg5e8_v_u8mf8x5_tum(vbool64_t mask,
                                           vuint8mf8x5_t maskedoff_tuple,
                                           const uint8_t *base,
                                           ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg5e8_v_u8mf8x5_tum(mask, maskedoff_tuple, base, bstride,
                                         vl);
}

vuint8mf4x5_t test_vlsseg5e8_v_u8mf4x5_tum(vbool32_t mask,
                                           vuint8mf4x5_t maskedoff_tuple,
                                           const uint8_t *base,
                                           ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg5e8_v_u8mf4x5_tum(mask, maskedoff_tuple, base, bstride,
                                         vl);
}

vuint8mf2x5_t test_vlsseg5e8_v_u8mf2x5_tum(vbool16_t mask,
                                           vuint8mf2x5_t maskedoff_tuple,
                                           const uint8_t *base,
                                           ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg5e8_v_u8mf2x5_tum(mask, maskedoff_tuple, base, bstride,
                                         vl);
}

vuint8m1x5_t test_vlsseg5e8_v_u8m1x5_tum(vbool8_t mask,
                                         vuint8m1x5_t maskedoff_tuple,
                                         const uint8_t *base, ptrdiff_t bstride,
                                         size_t vl) {
  return __riscv_vlsseg5e8_v_u8m1x5_tum(mask, maskedoff_tuple, base, bstride,
                                        vl);
}

vint8mf8x5_t test_vlsseg5e8_v_i8mf8x5_tumu(vbool64_t mask,
                                           vint8mf8x5_t maskedoff_tuple,
                                           const int8_t *base,
                                           ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg5e8_v_i8mf8x5_tumu(mask, maskedoff_tuple, base, bstride,
                                          vl);
}

vint8mf4x5_t test_vlsseg5e8_v_i8mf4x5_tumu(vbool32_t mask,
                                           vint8mf4x5_t maskedoff_tuple,
                                           const int8_t *base,
                                           ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg5e8_v_i8mf4x5_tumu(mask, maskedoff_tuple, base, bstride,
                                          vl);
}

vint8mf2x5_t test_vlsseg5e8_v_i8mf2x5_tumu(vbool16_t mask,
                                           vint8mf2x5_t maskedoff_tuple,
                                           const int8_t *base,
                                           ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg5e8_v_i8mf2x5_tumu(mask, maskedoff_tuple, base, bstride,
                                          vl);
}

vint8m1x5_t test_vlsseg5e8_v_i8m1x5_tumu(vbool8_t mask,
                                         vint8m1x5_t maskedoff_tuple,
                                         const int8_t *base, ptrdiff_t bstride,
                                         size_t vl) {
  return __riscv_vlsseg5e8_v_i8m1x5_tumu(mask, maskedoff_tuple, base, bstride,
                                         vl);
}

vuint8mf8x5_t test_vlsseg5e8_v_u8mf8x5_tumu(vbool64_t mask,
                                            vuint8mf8x5_t maskedoff_tuple,
                                            const uint8_t *base,
                                            ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg5e8_v_u8mf8x5_tumu(mask, maskedoff_tuple, base, bstride,
                                          vl);
}

vuint8mf4x5_t test_vlsseg5e8_v_u8mf4x5_tumu(vbool32_t mask,
                                            vuint8mf4x5_t maskedoff_tuple,
                                            const uint8_t *base,
                                            ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg5e8_v_u8mf4x5_tumu(mask, maskedoff_tuple, base, bstride,
                                          vl);
}

vuint8mf2x5_t test_vlsseg5e8_v_u8mf2x5_tumu(vbool16_t mask,
                                            vuint8mf2x5_t maskedoff_tuple,
                                            const uint8_t *base,
                                            ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg5e8_v_u8mf2x5_tumu(mask, maskedoff_tuple, base, bstride,
                                          vl);
}

vuint8m1x5_t test_vlsseg5e8_v_u8m1x5_tumu(vbool8_t mask,
                                          vuint8m1x5_t maskedoff_tuple,
                                          const uint8_t *base,
                                          ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg5e8_v_u8m1x5_tumu(mask, maskedoff_tuple, base, bstride,
                                         vl);
}

vint8mf8x5_t test_vlsseg5e8_v_i8mf8x5_mu(vbool64_t mask,
                                         vint8mf8x5_t maskedoff_tuple,
                                         const int8_t *base, ptrdiff_t bstride,
                                         size_t vl) {
  return __riscv_vlsseg5e8_v_i8mf8x5_mu(mask, maskedoff_tuple, base, bstride,
                                        vl);
}

vint8mf4x5_t test_vlsseg5e8_v_i8mf4x5_mu(vbool32_t mask,
                                         vint8mf4x5_t maskedoff_tuple,
                                         const int8_t *base, ptrdiff_t bstride,
                                         size_t vl) {
  return __riscv_vlsseg5e8_v_i8mf4x5_mu(mask, maskedoff_tuple, base, bstride,
                                        vl);
}

vint8mf2x5_t test_vlsseg5e8_v_i8mf2x5_mu(vbool16_t mask,
                                         vint8mf2x5_t maskedoff_tuple,
                                         const int8_t *base, ptrdiff_t bstride,
                                         size_t vl) {
  return __riscv_vlsseg5e8_v_i8mf2x5_mu(mask, maskedoff_tuple, base, bstride,
                                        vl);
}

vint8m1x5_t test_vlsseg5e8_v_i8m1x5_mu(vbool8_t mask,
                                       vint8m1x5_t maskedoff_tuple,
                                       const int8_t *base, ptrdiff_t bstride,
                                       size_t vl) {
  return __riscv_vlsseg5e8_v_i8m1x5_mu(mask, maskedoff_tuple, base, bstride,
                                       vl);
}

vuint8mf8x5_t test_vlsseg5e8_v_u8mf8x5_mu(vbool64_t mask,
                                          vuint8mf8x5_t maskedoff_tuple,
                                          const uint8_t *base,
                                          ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg5e8_v_u8mf8x5_mu(mask, maskedoff_tuple, base, bstride,
                                        vl);
}

vuint8mf4x5_t test_vlsseg5e8_v_u8mf4x5_mu(vbool32_t mask,
                                          vuint8mf4x5_t maskedoff_tuple,
                                          const uint8_t *base,
                                          ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg5e8_v_u8mf4x5_mu(mask, maskedoff_tuple, base, bstride,
                                        vl);
}

vuint8mf2x5_t test_vlsseg5e8_v_u8mf2x5_mu(vbool16_t mask,
                                          vuint8mf2x5_t maskedoff_tuple,
                                          const uint8_t *base,
                                          ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg5e8_v_u8mf2x5_mu(mask, maskedoff_tuple, base, bstride,
                                        vl);
}

vuint8m1x5_t test_vlsseg5e8_v_u8m1x5_mu(vbool8_t mask,
                                        vuint8m1x5_t maskedoff_tuple,
                                        const uint8_t *base, ptrdiff_t bstride,
                                        size_t vl) {
  return __riscv_vlsseg5e8_v_u8m1x5_mu(mask, maskedoff_tuple, base, bstride,
                                       vl);
}
