#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat32mf2_t test_vle32ff_v_f32mf2_tu(vfloat32mf2_t maskedoff,
                                       const float32_t *base, size_t *new_vl,
                                       size_t vl) {
  return __riscv_vle32ff_tu(maskedoff, base, new_vl, vl);
}

vfloat32m1_t test_vle32ff_v_f32m1_tu(vfloat32m1_t maskedoff,
                                     const float32_t *base, size_t *new_vl,
                                     size_t vl) {
  return __riscv_vle32ff_tu(maskedoff, base, new_vl, vl);
}

vfloat32m2_t test_vle32ff_v_f32m2_tu(vfloat32m2_t maskedoff,
                                     const float32_t *base, size_t *new_vl,
                                     size_t vl) {
  return __riscv_vle32ff_tu(maskedoff, base, new_vl, vl);
}

vfloat32m4_t test_vle32ff_v_f32m4_tu(vfloat32m4_t maskedoff,
                                     const float32_t *base, size_t *new_vl,
                                     size_t vl) {
  return __riscv_vle32ff_tu(maskedoff, base, new_vl, vl);
}

vfloat32m8_t test_vle32ff_v_f32m8_tu(vfloat32m8_t maskedoff,
                                     const float32_t *base, size_t *new_vl,
                                     size_t vl) {
  return __riscv_vle32ff_tu(maskedoff, base, new_vl, vl);
}

vint32mf2_t test_vle32ff_v_i32mf2_tu(vint32mf2_t maskedoff, const int32_t *base,
                                     size_t *new_vl, size_t vl) {
  return __riscv_vle32ff_tu(maskedoff, base, new_vl, vl);
}

vint32m1_t test_vle32ff_v_i32m1_tu(vint32m1_t maskedoff, const int32_t *base,
                                   size_t *new_vl, size_t vl) {
  return __riscv_vle32ff_tu(maskedoff, base, new_vl, vl);
}

vint32m2_t test_vle32ff_v_i32m2_tu(vint32m2_t maskedoff, const int32_t *base,
                                   size_t *new_vl, size_t vl) {
  return __riscv_vle32ff_tu(maskedoff, base, new_vl, vl);
}

vint32m4_t test_vle32ff_v_i32m4_tu(vint32m4_t maskedoff, const int32_t *base,
                                   size_t *new_vl, size_t vl) {
  return __riscv_vle32ff_tu(maskedoff, base, new_vl, vl);
}

vint32m8_t test_vle32ff_v_i32m8_tu(vint32m8_t maskedoff, const int32_t *base,
                                   size_t *new_vl, size_t vl) {
  return __riscv_vle32ff_tu(maskedoff, base, new_vl, vl);
}

vuint32mf2_t test_vle32ff_v_u32mf2_tu(vuint32mf2_t maskedoff,
                                      const uint32_t *base, size_t *new_vl,
                                      size_t vl) {
  return __riscv_vle32ff_tu(maskedoff, base, new_vl, vl);
}

vuint32m1_t test_vle32ff_v_u32m1_tu(vuint32m1_t maskedoff, const uint32_t *base,
                                    size_t *new_vl, size_t vl) {
  return __riscv_vle32ff_tu(maskedoff, base, new_vl, vl);
}

vuint32m2_t test_vle32ff_v_u32m2_tu(vuint32m2_t maskedoff, const uint32_t *base,
                                    size_t *new_vl, size_t vl) {
  return __riscv_vle32ff_tu(maskedoff, base, new_vl, vl);
}

vuint32m4_t test_vle32ff_v_u32m4_tu(vuint32m4_t maskedoff, const uint32_t *base,
                                    size_t *new_vl, size_t vl) {
  return __riscv_vle32ff_tu(maskedoff, base, new_vl, vl);
}

vuint32m8_t test_vle32ff_v_u32m8_tu(vuint32m8_t maskedoff, const uint32_t *base,
                                    size_t *new_vl, size_t vl) {
  return __riscv_vle32ff_tu(maskedoff, base, new_vl, vl);
}

vfloat32mf2_t test_vle32ff_v_f32mf2_tum(vbool64_t mask, vfloat32mf2_t maskedoff,
                                        const float32_t *base, size_t *new_vl,
                                        size_t vl) {
  return __riscv_vle32ff_tum(mask, maskedoff, base, new_vl, vl);
}

vfloat32m1_t test_vle32ff_v_f32m1_tum(vbool32_t mask, vfloat32m1_t maskedoff,
                                      const float32_t *base, size_t *new_vl,
                                      size_t vl) {
  return __riscv_vle32ff_tum(mask, maskedoff, base, new_vl, vl);
}

vfloat32m2_t test_vle32ff_v_f32m2_tum(vbool16_t mask, vfloat32m2_t maskedoff,
                                      const float32_t *base, size_t *new_vl,
                                      size_t vl) {
  return __riscv_vle32ff_tum(mask, maskedoff, base, new_vl, vl);
}

vfloat32m4_t test_vle32ff_v_f32m4_tum(vbool8_t mask, vfloat32m4_t maskedoff,
                                      const float32_t *base, size_t *new_vl,
                                      size_t vl) {
  return __riscv_vle32ff_tum(mask, maskedoff, base, new_vl, vl);
}

vfloat32m8_t test_vle32ff_v_f32m8_tum(vbool4_t mask, vfloat32m8_t maskedoff,
                                      const float32_t *base, size_t *new_vl,
                                      size_t vl) {
  return __riscv_vle32ff_tum(mask, maskedoff, base, new_vl, vl);
}

vint32mf2_t test_vle32ff_v_i32mf2_tum(vbool64_t mask, vint32mf2_t maskedoff,
                                      const int32_t *base, size_t *new_vl,
                                      size_t vl) {
  return __riscv_vle32ff_tum(mask, maskedoff, base, new_vl, vl);
}

vint32m1_t test_vle32ff_v_i32m1_tum(vbool32_t mask, vint32m1_t maskedoff,
                                    const int32_t *base, size_t *new_vl,
                                    size_t vl) {
  return __riscv_vle32ff_tum(mask, maskedoff, base, new_vl, vl);
}

vint32m2_t test_vle32ff_v_i32m2_tum(vbool16_t mask, vint32m2_t maskedoff,
                                    const int32_t *base, size_t *new_vl,
                                    size_t vl) {
  return __riscv_vle32ff_tum(mask, maskedoff, base, new_vl, vl);
}

vint32m4_t test_vle32ff_v_i32m4_tum(vbool8_t mask, vint32m4_t maskedoff,
                                    const int32_t *base, size_t *new_vl,
                                    size_t vl) {
  return __riscv_vle32ff_tum(mask, maskedoff, base, new_vl, vl);
}

vint32m8_t test_vle32ff_v_i32m8_tum(vbool4_t mask, vint32m8_t maskedoff,
                                    const int32_t *base, size_t *new_vl,
                                    size_t vl) {
  return __riscv_vle32ff_tum(mask, maskedoff, base, new_vl, vl);
}

vuint32mf2_t test_vle32ff_v_u32mf2_tum(vbool64_t mask, vuint32mf2_t maskedoff,
                                       const uint32_t *base, size_t *new_vl,
                                       size_t vl) {
  return __riscv_vle32ff_tum(mask, maskedoff, base, new_vl, vl);
}

vuint32m1_t test_vle32ff_v_u32m1_tum(vbool32_t mask, vuint32m1_t maskedoff,
                                     const uint32_t *base, size_t *new_vl,
                                     size_t vl) {
  return __riscv_vle32ff_tum(mask, maskedoff, base, new_vl, vl);
}

vuint32m2_t test_vle32ff_v_u32m2_tum(vbool16_t mask, vuint32m2_t maskedoff,
                                     const uint32_t *base, size_t *new_vl,
                                     size_t vl) {
  return __riscv_vle32ff_tum(mask, maskedoff, base, new_vl, vl);
}

vuint32m4_t test_vle32ff_v_u32m4_tum(vbool8_t mask, vuint32m4_t maskedoff,
                                     const uint32_t *base, size_t *new_vl,
                                     size_t vl) {
  return __riscv_vle32ff_tum(mask, maskedoff, base, new_vl, vl);
}

vuint32m8_t test_vle32ff_v_u32m8_tum(vbool4_t mask, vuint32m8_t maskedoff,
                                     const uint32_t *base, size_t *new_vl,
                                     size_t vl) {
  return __riscv_vle32ff_tum(mask, maskedoff, base, new_vl, vl);
}

vfloat32mf2_t test_vle32ff_v_f32mf2_tumu(vbool64_t mask,
                                         vfloat32mf2_t maskedoff,
                                         const float32_t *base, size_t *new_vl,
                                         size_t vl) {
  return __riscv_vle32ff_tumu(mask, maskedoff, base, new_vl, vl);
}

vfloat32m1_t test_vle32ff_v_f32m1_tumu(vbool32_t mask, vfloat32m1_t maskedoff,
                                       const float32_t *base, size_t *new_vl,
                                       size_t vl) {
  return __riscv_vle32ff_tumu(mask, maskedoff, base, new_vl, vl);
}

vfloat32m2_t test_vle32ff_v_f32m2_tumu(vbool16_t mask, vfloat32m2_t maskedoff,
                                       const float32_t *base, size_t *new_vl,
                                       size_t vl) {
  return __riscv_vle32ff_tumu(mask, maskedoff, base, new_vl, vl);
}

vfloat32m4_t test_vle32ff_v_f32m4_tumu(vbool8_t mask, vfloat32m4_t maskedoff,
                                       const float32_t *base, size_t *new_vl,
                                       size_t vl) {
  return __riscv_vle32ff_tumu(mask, maskedoff, base, new_vl, vl);
}

vfloat32m8_t test_vle32ff_v_f32m8_tumu(vbool4_t mask, vfloat32m8_t maskedoff,
                                       const float32_t *base, size_t *new_vl,
                                       size_t vl) {
  return __riscv_vle32ff_tumu(mask, maskedoff, base, new_vl, vl);
}

vint32mf2_t test_vle32ff_v_i32mf2_tumu(vbool64_t mask, vint32mf2_t maskedoff,
                                       const int32_t *base, size_t *new_vl,
                                       size_t vl) {
  return __riscv_vle32ff_tumu(mask, maskedoff, base, new_vl, vl);
}

vint32m1_t test_vle32ff_v_i32m1_tumu(vbool32_t mask, vint32m1_t maskedoff,
                                     const int32_t *base, size_t *new_vl,
                                     size_t vl) {
  return __riscv_vle32ff_tumu(mask, maskedoff, base, new_vl, vl);
}

vint32m2_t test_vle32ff_v_i32m2_tumu(vbool16_t mask, vint32m2_t maskedoff,
                                     const int32_t *base, size_t *new_vl,
                                     size_t vl) {
  return __riscv_vle32ff_tumu(mask, maskedoff, base, new_vl, vl);
}

vint32m4_t test_vle32ff_v_i32m4_tumu(vbool8_t mask, vint32m4_t maskedoff,
                                     const int32_t *base, size_t *new_vl,
                                     size_t vl) {
  return __riscv_vle32ff_tumu(mask, maskedoff, base, new_vl, vl);
}

vint32m8_t test_vle32ff_v_i32m8_tumu(vbool4_t mask, vint32m8_t maskedoff,
                                     const int32_t *base, size_t *new_vl,
                                     size_t vl) {
  return __riscv_vle32ff_tumu(mask, maskedoff, base, new_vl, vl);
}

vuint32mf2_t test_vle32ff_v_u32mf2_tumu(vbool64_t mask, vuint32mf2_t maskedoff,
                                        const uint32_t *base, size_t *new_vl,
                                        size_t vl) {
  return __riscv_vle32ff_tumu(mask, maskedoff, base, new_vl, vl);
}

vuint32m1_t test_vle32ff_v_u32m1_tumu(vbool32_t mask, vuint32m1_t maskedoff,
                                      const uint32_t *base, size_t *new_vl,
                                      size_t vl) {
  return __riscv_vle32ff_tumu(mask, maskedoff, base, new_vl, vl);
}

vuint32m2_t test_vle32ff_v_u32m2_tumu(vbool16_t mask, vuint32m2_t maskedoff,
                                      const uint32_t *base, size_t *new_vl,
                                      size_t vl) {
  return __riscv_vle32ff_tumu(mask, maskedoff, base, new_vl, vl);
}

vuint32m4_t test_vle32ff_v_u32m4_tumu(vbool8_t mask, vuint32m4_t maskedoff,
                                      const uint32_t *base, size_t *new_vl,
                                      size_t vl) {
  return __riscv_vle32ff_tumu(mask, maskedoff, base, new_vl, vl);
}

vuint32m8_t test_vle32ff_v_u32m8_tumu(vbool4_t mask, vuint32m8_t maskedoff,
                                      const uint32_t *base, size_t *new_vl,
                                      size_t vl) {
  return __riscv_vle32ff_tumu(mask, maskedoff, base, new_vl, vl);
}

vfloat32mf2_t test_vle32ff_v_f32mf2_mu(vbool64_t mask, vfloat32mf2_t maskedoff,
                                       const float32_t *base, size_t *new_vl,
                                       size_t vl) {
  return __riscv_vle32ff_mu(mask, maskedoff, base, new_vl, vl);
}

vfloat32m1_t test_vle32ff_v_f32m1_mu(vbool32_t mask, vfloat32m1_t maskedoff,
                                     const float32_t *base, size_t *new_vl,
                                     size_t vl) {
  return __riscv_vle32ff_mu(mask, maskedoff, base, new_vl, vl);
}

vfloat32m2_t test_vle32ff_v_f32m2_mu(vbool16_t mask, vfloat32m2_t maskedoff,
                                     const float32_t *base, size_t *new_vl,
                                     size_t vl) {
  return __riscv_vle32ff_mu(mask, maskedoff, base, new_vl, vl);
}

vfloat32m4_t test_vle32ff_v_f32m4_mu(vbool8_t mask, vfloat32m4_t maskedoff,
                                     const float32_t *base, size_t *new_vl,
                                     size_t vl) {
  return __riscv_vle32ff_mu(mask, maskedoff, base, new_vl, vl);
}

vfloat32m8_t test_vle32ff_v_f32m8_mu(vbool4_t mask, vfloat32m8_t maskedoff,
                                     const float32_t *base, size_t *new_vl,
                                     size_t vl) {
  return __riscv_vle32ff_mu(mask, maskedoff, base, new_vl, vl);
}

vint32mf2_t test_vle32ff_v_i32mf2_mu(vbool64_t mask, vint32mf2_t maskedoff,
                                     const int32_t *base, size_t *new_vl,
                                     size_t vl) {
  return __riscv_vle32ff_mu(mask, maskedoff, base, new_vl, vl);
}

vint32m1_t test_vle32ff_v_i32m1_mu(vbool32_t mask, vint32m1_t maskedoff,
                                   const int32_t *base, size_t *new_vl,
                                   size_t vl) {
  return __riscv_vle32ff_mu(mask, maskedoff, base, new_vl, vl);
}

vint32m2_t test_vle32ff_v_i32m2_mu(vbool16_t mask, vint32m2_t maskedoff,
                                   const int32_t *base, size_t *new_vl,
                                   size_t vl) {
  return __riscv_vle32ff_mu(mask, maskedoff, base, new_vl, vl);
}

vint32m4_t test_vle32ff_v_i32m4_mu(vbool8_t mask, vint32m4_t maskedoff,
                                   const int32_t *base, size_t *new_vl,
                                   size_t vl) {
  return __riscv_vle32ff_mu(mask, maskedoff, base, new_vl, vl);
}

vint32m8_t test_vle32ff_v_i32m8_mu(vbool4_t mask, vint32m8_t maskedoff,
                                   const int32_t *base, size_t *new_vl,
                                   size_t vl) {
  return __riscv_vle32ff_mu(mask, maskedoff, base, new_vl, vl);
}

vuint32mf2_t test_vle32ff_v_u32mf2_mu(vbool64_t mask, vuint32mf2_t maskedoff,
                                      const uint32_t *base, size_t *new_vl,
                                      size_t vl) {
  return __riscv_vle32ff_mu(mask, maskedoff, base, new_vl, vl);
}

vuint32m1_t test_vle32ff_v_u32m1_mu(vbool32_t mask, vuint32m1_t maskedoff,
                                    const uint32_t *base, size_t *new_vl,
                                    size_t vl) {
  return __riscv_vle32ff_mu(mask, maskedoff, base, new_vl, vl);
}

vuint32m2_t test_vle32ff_v_u32m2_mu(vbool16_t mask, vuint32m2_t maskedoff,
                                    const uint32_t *base, size_t *new_vl,
                                    size_t vl) {
  return __riscv_vle32ff_mu(mask, maskedoff, base, new_vl, vl);
}

vuint32m4_t test_vle32ff_v_u32m4_mu(vbool8_t mask, vuint32m4_t maskedoff,
                                    const uint32_t *base, size_t *new_vl,
                                    size_t vl) {
  return __riscv_vle32ff_mu(mask, maskedoff, base, new_vl, vl);
}

vuint32m8_t test_vle32ff_v_u32m8_mu(vbool4_t mask, vuint32m8_t maskedoff,
                                    const uint32_t *base, size_t *new_vl,
                                    size_t vl) {
  return __riscv_vle32ff_mu(mask, maskedoff, base, new_vl, vl);
}
