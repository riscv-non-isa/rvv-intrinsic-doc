#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat32mf2x8_t test_vlseg8e32ff_v_f32mf2x8_tu(vfloat32mf2x8_t maskedoff_tuple,
                                               const float32_t *base,
                                               size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e32ff_v_f32mf2x8_tu(maskedoff_tuple, base, new_vl, vl);
}

vfloat32m1x8_t test_vlseg8e32ff_v_f32m1x8_tu(vfloat32m1x8_t maskedoff_tuple,
                                             const float32_t *base,
                                             size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e32ff_v_f32m1x8_tu(maskedoff_tuple, base, new_vl, vl);
}

vint32mf2x8_t test_vlseg8e32ff_v_i32mf2x8_tu(vint32mf2x8_t maskedoff_tuple,
                                             const int32_t *base,
                                             size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e32ff_v_i32mf2x8_tu(maskedoff_tuple, base, new_vl, vl);
}

vint32m1x8_t test_vlseg8e32ff_v_i32m1x8_tu(vint32m1x8_t maskedoff_tuple,
                                           const int32_t *base, size_t *new_vl,
                                           size_t vl) {
  return __riscv_vlseg8e32ff_v_i32m1x8_tu(maskedoff_tuple, base, new_vl, vl);
}

vuint32mf2x8_t test_vlseg8e32ff_v_u32mf2x8_tu(vuint32mf2x8_t maskedoff_tuple,
                                              const uint32_t *base,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e32ff_v_u32mf2x8_tu(maskedoff_tuple, base, new_vl, vl);
}

vuint32m1x8_t test_vlseg8e32ff_v_u32m1x8_tu(vuint32m1x8_t maskedoff_tuple,
                                            const uint32_t *base,
                                            size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e32ff_v_u32m1x8_tu(maskedoff_tuple, base, new_vl, vl);
}

vfloat32mf2x8_t test_vlseg8e32ff_v_f32mf2x8_tum(vbool64_t mask,
                                                vfloat32mf2x8_t maskedoff_tuple,
                                                const float32_t *base,
                                                size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e32ff_v_f32mf2x8_tum(mask, maskedoff_tuple, base, new_vl,
                                            vl);
}

vfloat32m1x8_t test_vlseg8e32ff_v_f32m1x8_tum(vbool32_t mask,
                                              vfloat32m1x8_t maskedoff_tuple,
                                              const float32_t *base,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e32ff_v_f32m1x8_tum(mask, maskedoff_tuple, base, new_vl,
                                           vl);
}

vint32mf2x8_t test_vlseg8e32ff_v_i32mf2x8_tum(vbool64_t mask,
                                              vint32mf2x8_t maskedoff_tuple,
                                              const int32_t *base,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e32ff_v_i32mf2x8_tum(mask, maskedoff_tuple, base, new_vl,
                                            vl);
}

vint32m1x8_t test_vlseg8e32ff_v_i32m1x8_tum(vbool32_t mask,
                                            vint32m1x8_t maskedoff_tuple,
                                            const int32_t *base, size_t *new_vl,
                                            size_t vl) {
  return __riscv_vlseg8e32ff_v_i32m1x8_tum(mask, maskedoff_tuple, base, new_vl,
                                           vl);
}

vuint32mf2x8_t test_vlseg8e32ff_v_u32mf2x8_tum(vbool64_t mask,
                                               vuint32mf2x8_t maskedoff_tuple,
                                               const uint32_t *base,
                                               size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e32ff_v_u32mf2x8_tum(mask, maskedoff_tuple, base, new_vl,
                                            vl);
}

vuint32m1x8_t test_vlseg8e32ff_v_u32m1x8_tum(vbool32_t mask,
                                             vuint32m1x8_t maskedoff_tuple,
                                             const uint32_t *base,
                                             size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e32ff_v_u32m1x8_tum(mask, maskedoff_tuple, base, new_vl,
                                           vl);
}

vfloat32mf2x8_t test_vlseg8e32ff_v_f32mf2x8_tumu(
    vbool64_t mask, vfloat32mf2x8_t maskedoff_tuple, const float32_t *base,
    size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e32ff_v_f32mf2x8_tumu(mask, maskedoff_tuple, base,
                                             new_vl, vl);
}

vfloat32m1x8_t test_vlseg8e32ff_v_f32m1x8_tumu(vbool32_t mask,
                                               vfloat32m1x8_t maskedoff_tuple,
                                               const float32_t *base,
                                               size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e32ff_v_f32m1x8_tumu(mask, maskedoff_tuple, base, new_vl,
                                            vl);
}

vint32mf2x8_t test_vlseg8e32ff_v_i32mf2x8_tumu(vbool64_t mask,
                                               vint32mf2x8_t maskedoff_tuple,
                                               const int32_t *base,
                                               size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e32ff_v_i32mf2x8_tumu(mask, maskedoff_tuple, base,
                                             new_vl, vl);
}

vint32m1x8_t test_vlseg8e32ff_v_i32m1x8_tumu(vbool32_t mask,
                                             vint32m1x8_t maskedoff_tuple,
                                             const int32_t *base,
                                             size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e32ff_v_i32m1x8_tumu(mask, maskedoff_tuple, base, new_vl,
                                            vl);
}

vuint32mf2x8_t test_vlseg8e32ff_v_u32mf2x8_tumu(vbool64_t mask,
                                                vuint32mf2x8_t maskedoff_tuple,
                                                const uint32_t *base,
                                                size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e32ff_v_u32mf2x8_tumu(mask, maskedoff_tuple, base,
                                             new_vl, vl);
}

vuint32m1x8_t test_vlseg8e32ff_v_u32m1x8_tumu(vbool32_t mask,
                                              vuint32m1x8_t maskedoff_tuple,
                                              const uint32_t *base,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e32ff_v_u32m1x8_tumu(mask, maskedoff_tuple, base, new_vl,
                                            vl);
}

vfloat32mf2x8_t test_vlseg8e32ff_v_f32mf2x8_mu(vbool64_t mask,
                                               vfloat32mf2x8_t maskedoff_tuple,
                                               const float32_t *base,
                                               size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e32ff_v_f32mf2x8_mu(mask, maskedoff_tuple, base, new_vl,
                                           vl);
}

vfloat32m1x8_t test_vlseg8e32ff_v_f32m1x8_mu(vbool32_t mask,
                                             vfloat32m1x8_t maskedoff_tuple,
                                             const float32_t *base,
                                             size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e32ff_v_f32m1x8_mu(mask, maskedoff_tuple, base, new_vl,
                                          vl);
}

vint32mf2x8_t test_vlseg8e32ff_v_i32mf2x8_mu(vbool64_t mask,
                                             vint32mf2x8_t maskedoff_tuple,
                                             const int32_t *base,
                                             size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e32ff_v_i32mf2x8_mu(mask, maskedoff_tuple, base, new_vl,
                                           vl);
}

vint32m1x8_t test_vlseg8e32ff_v_i32m1x8_mu(vbool32_t mask,
                                           vint32m1x8_t maskedoff_tuple,
                                           const int32_t *base, size_t *new_vl,
                                           size_t vl) {
  return __riscv_vlseg8e32ff_v_i32m1x8_mu(mask, maskedoff_tuple, base, new_vl,
                                          vl);
}

vuint32mf2x8_t test_vlseg8e32ff_v_u32mf2x8_mu(vbool64_t mask,
                                              vuint32mf2x8_t maskedoff_tuple,
                                              const uint32_t *base,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e32ff_v_u32mf2x8_mu(mask, maskedoff_tuple, base, new_vl,
                                           vl);
}

vuint32m1x8_t test_vlseg8e32ff_v_u32m1x8_mu(vbool32_t mask,
                                            vuint32m1x8_t maskedoff_tuple,
                                            const uint32_t *base,
                                            size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e32ff_v_u32m1x8_mu(mask, maskedoff_tuple, base, new_vl,
                                          vl);
}
