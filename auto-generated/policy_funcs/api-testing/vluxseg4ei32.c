#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat16mf4x4_t test_vluxseg4ei32_v_f16mf4x4_tu(vfloat16mf4x4_t maskedoff_tuple,
                                                const float16_t *base,
                                                vuint32mf2_t bindex,
                                                size_t vl) {
  return __riscv_vluxseg4ei32_v_f16mf4x4_tu(maskedoff_tuple, base, bindex, vl);
}

vfloat16mf2x4_t test_vluxseg4ei32_v_f16mf2x4_tu(vfloat16mf2x4_t maskedoff_tuple,
                                                const float16_t *base,
                                                vuint32m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_f16mf2x4_tu(maskedoff_tuple, base, bindex, vl);
}

vfloat16m1x4_t test_vluxseg4ei32_v_f16m1x4_tu(vfloat16m1x4_t maskedoff_tuple,
                                              const float16_t *base,
                                              vuint32m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_f16m1x4_tu(maskedoff_tuple, base, bindex, vl);
}

vfloat16m2x4_t test_vluxseg4ei32_v_f16m2x4_tu(vfloat16m2x4_t maskedoff_tuple,
                                              const float16_t *base,
                                              vuint32m4_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_f16m2x4_tu(maskedoff_tuple, base, bindex, vl);
}

vfloat32mf2x4_t test_vluxseg4ei32_v_f32mf2x4_tu(vfloat32mf2x4_t maskedoff_tuple,
                                                const float32_t *base,
                                                vuint32mf2_t bindex,
                                                size_t vl) {
  return __riscv_vluxseg4ei32_v_f32mf2x4_tu(maskedoff_tuple, base, bindex, vl);
}

vfloat32m1x4_t test_vluxseg4ei32_v_f32m1x4_tu(vfloat32m1x4_t maskedoff_tuple,
                                              const float32_t *base,
                                              vuint32m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_f32m1x4_tu(maskedoff_tuple, base, bindex, vl);
}

vfloat32m2x4_t test_vluxseg4ei32_v_f32m2x4_tu(vfloat32m2x4_t maskedoff_tuple,
                                              const float32_t *base,
                                              vuint32m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_f32m2x4_tu(maskedoff_tuple, base, bindex, vl);
}

vfloat64m1x4_t test_vluxseg4ei32_v_f64m1x4_tu(vfloat64m1x4_t maskedoff_tuple,
                                              const float64_t *base,
                                              vuint32mf2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_f64m1x4_tu(maskedoff_tuple, base, bindex, vl);
}

vfloat64m2x4_t test_vluxseg4ei32_v_f64m2x4_tu(vfloat64m2x4_t maskedoff_tuple,
                                              const float64_t *base,
                                              vuint32m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_f64m2x4_tu(maskedoff_tuple, base, bindex, vl);
}

vint8mf8x4_t test_vluxseg4ei32_v_i8mf8x4_tu(vint8mf8x4_t maskedoff_tuple,
                                            const int8_t *base,
                                            vuint32mf2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_i8mf8x4_tu(maskedoff_tuple, base, bindex, vl);
}

vint8mf4x4_t test_vluxseg4ei32_v_i8mf4x4_tu(vint8mf4x4_t maskedoff_tuple,
                                            const int8_t *base,
                                            vuint32m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_i8mf4x4_tu(maskedoff_tuple, base, bindex, vl);
}

vint8mf2x4_t test_vluxseg4ei32_v_i8mf2x4_tu(vint8mf2x4_t maskedoff_tuple,
                                            const int8_t *base,
                                            vuint32m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_i8mf2x4_tu(maskedoff_tuple, base, bindex, vl);
}

vint8m1x4_t test_vluxseg4ei32_v_i8m1x4_tu(vint8m1x4_t maskedoff_tuple,
                                          const int8_t *base,
                                          vuint32m4_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_i8m1x4_tu(maskedoff_tuple, base, bindex, vl);
}

vint8m2x4_t test_vluxseg4ei32_v_i8m2x4_tu(vint8m2x4_t maskedoff_tuple,
                                          const int8_t *base,
                                          vuint32m8_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_i8m2x4_tu(maskedoff_tuple, base, bindex, vl);
}

vint16mf4x4_t test_vluxseg4ei32_v_i16mf4x4_tu(vint16mf4x4_t maskedoff_tuple,
                                              const int16_t *base,
                                              vuint32mf2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_i16mf4x4_tu(maskedoff_tuple, base, bindex, vl);
}

vint16mf2x4_t test_vluxseg4ei32_v_i16mf2x4_tu(vint16mf2x4_t maskedoff_tuple,
                                              const int16_t *base,
                                              vuint32m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_i16mf2x4_tu(maskedoff_tuple, base, bindex, vl);
}

vint16m1x4_t test_vluxseg4ei32_v_i16m1x4_tu(vint16m1x4_t maskedoff_tuple,
                                            const int16_t *base,
                                            vuint32m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_i16m1x4_tu(maskedoff_tuple, base, bindex, vl);
}

vint16m2x4_t test_vluxseg4ei32_v_i16m2x4_tu(vint16m2x4_t maskedoff_tuple,
                                            const int16_t *base,
                                            vuint32m4_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_i16m2x4_tu(maskedoff_tuple, base, bindex, vl);
}

vint32mf2x4_t test_vluxseg4ei32_v_i32mf2x4_tu(vint32mf2x4_t maskedoff_tuple,
                                              const int32_t *base,
                                              vuint32mf2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_i32mf2x4_tu(maskedoff_tuple, base, bindex, vl);
}

vint32m1x4_t test_vluxseg4ei32_v_i32m1x4_tu(vint32m1x4_t maskedoff_tuple,
                                            const int32_t *base,
                                            vuint32m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_i32m1x4_tu(maskedoff_tuple, base, bindex, vl);
}

vint32m2x4_t test_vluxseg4ei32_v_i32m2x4_tu(vint32m2x4_t maskedoff_tuple,
                                            const int32_t *base,
                                            vuint32m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_i32m2x4_tu(maskedoff_tuple, base, bindex, vl);
}

vint64m1x4_t test_vluxseg4ei32_v_i64m1x4_tu(vint64m1x4_t maskedoff_tuple,
                                            const int64_t *base,
                                            vuint32mf2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_i64m1x4_tu(maskedoff_tuple, base, bindex, vl);
}

vint64m2x4_t test_vluxseg4ei32_v_i64m2x4_tu(vint64m2x4_t maskedoff_tuple,
                                            const int64_t *base,
                                            vuint32m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_i64m2x4_tu(maskedoff_tuple, base, bindex, vl);
}

vuint8mf8x4_t test_vluxseg4ei32_v_u8mf8x4_tu(vuint8mf8x4_t maskedoff_tuple,
                                             const uint8_t *base,
                                             vuint32mf2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_u8mf8x4_tu(maskedoff_tuple, base, bindex, vl);
}

vuint8mf4x4_t test_vluxseg4ei32_v_u8mf4x4_tu(vuint8mf4x4_t maskedoff_tuple,
                                             const uint8_t *base,
                                             vuint32m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_u8mf4x4_tu(maskedoff_tuple, base, bindex, vl);
}

vuint8mf2x4_t test_vluxseg4ei32_v_u8mf2x4_tu(vuint8mf2x4_t maskedoff_tuple,
                                             const uint8_t *base,
                                             vuint32m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_u8mf2x4_tu(maskedoff_tuple, base, bindex, vl);
}

vuint8m1x4_t test_vluxseg4ei32_v_u8m1x4_tu(vuint8m1x4_t maskedoff_tuple,
                                           const uint8_t *base,
                                           vuint32m4_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_u8m1x4_tu(maskedoff_tuple, base, bindex, vl);
}

vuint8m2x4_t test_vluxseg4ei32_v_u8m2x4_tu(vuint8m2x4_t maskedoff_tuple,
                                           const uint8_t *base,
                                           vuint32m8_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_u8m2x4_tu(maskedoff_tuple, base, bindex, vl);
}

vuint16mf4x4_t test_vluxseg4ei32_v_u16mf4x4_tu(vuint16mf4x4_t maskedoff_tuple,
                                               const uint16_t *base,
                                               vuint32mf2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_u16mf4x4_tu(maskedoff_tuple, base, bindex, vl);
}

vuint16mf2x4_t test_vluxseg4ei32_v_u16mf2x4_tu(vuint16mf2x4_t maskedoff_tuple,
                                               const uint16_t *base,
                                               vuint32m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_u16mf2x4_tu(maskedoff_tuple, base, bindex, vl);
}

vuint16m1x4_t test_vluxseg4ei32_v_u16m1x4_tu(vuint16m1x4_t maskedoff_tuple,
                                             const uint16_t *base,
                                             vuint32m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_u16m1x4_tu(maskedoff_tuple, base, bindex, vl);
}

vuint16m2x4_t test_vluxseg4ei32_v_u16m2x4_tu(vuint16m2x4_t maskedoff_tuple,
                                             const uint16_t *base,
                                             vuint32m4_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_u16m2x4_tu(maskedoff_tuple, base, bindex, vl);
}

vuint32mf2x4_t test_vluxseg4ei32_v_u32mf2x4_tu(vuint32mf2x4_t maskedoff_tuple,
                                               const uint32_t *base,
                                               vuint32mf2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_u32mf2x4_tu(maskedoff_tuple, base, bindex, vl);
}

vuint32m1x4_t test_vluxseg4ei32_v_u32m1x4_tu(vuint32m1x4_t maskedoff_tuple,
                                             const uint32_t *base,
                                             vuint32m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_u32m1x4_tu(maskedoff_tuple, base, bindex, vl);
}

vuint32m2x4_t test_vluxseg4ei32_v_u32m2x4_tu(vuint32m2x4_t maskedoff_tuple,
                                             const uint32_t *base,
                                             vuint32m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_u32m2x4_tu(maskedoff_tuple, base, bindex, vl);
}

vuint64m1x4_t test_vluxseg4ei32_v_u64m1x4_tu(vuint64m1x4_t maskedoff_tuple,
                                             const uint64_t *base,
                                             vuint32mf2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_u64m1x4_tu(maskedoff_tuple, base, bindex, vl);
}

vuint64m2x4_t test_vluxseg4ei32_v_u64m2x4_tu(vuint64m2x4_t maskedoff_tuple,
                                             const uint64_t *base,
                                             vuint32m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_u64m2x4_tu(maskedoff_tuple, base, bindex, vl);
}

vfloat16mf4x4_t test_vluxseg4ei32_v_f16mf4x4_tum(
    vbool64_t mask, vfloat16mf4x4_t maskedoff_tuple, const float16_t *base,
    vuint32mf2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_f16mf4x4_tum(mask, maskedoff_tuple, base,
                                             bindex, vl);
}

vfloat16mf2x4_t test_vluxseg4ei32_v_f16mf2x4_tum(
    vbool32_t mask, vfloat16mf2x4_t maskedoff_tuple, const float16_t *base,
    vuint32m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_f16mf2x4_tum(mask, maskedoff_tuple, base,
                                             bindex, vl);
}

vfloat16m1x4_t test_vluxseg4ei32_v_f16m1x4_tum(vbool16_t mask,
                                               vfloat16m1x4_t maskedoff_tuple,
                                               const float16_t *base,
                                               vuint32m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_f16m1x4_tum(mask, maskedoff_tuple, base, bindex,
                                            vl);
}

vfloat16m2x4_t test_vluxseg4ei32_v_f16m2x4_tum(vbool8_t mask,
                                               vfloat16m2x4_t maskedoff_tuple,
                                               const float16_t *base,
                                               vuint32m4_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_f16m2x4_tum(mask, maskedoff_tuple, base, bindex,
                                            vl);
}

vfloat32mf2x4_t test_vluxseg4ei32_v_f32mf2x4_tum(
    vbool64_t mask, vfloat32mf2x4_t maskedoff_tuple, const float32_t *base,
    vuint32mf2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_f32mf2x4_tum(mask, maskedoff_tuple, base,
                                             bindex, vl);
}

vfloat32m1x4_t test_vluxseg4ei32_v_f32m1x4_tum(vbool32_t mask,
                                               vfloat32m1x4_t maskedoff_tuple,
                                               const float32_t *base,
                                               vuint32m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_f32m1x4_tum(mask, maskedoff_tuple, base, bindex,
                                            vl);
}

vfloat32m2x4_t test_vluxseg4ei32_v_f32m2x4_tum(vbool16_t mask,
                                               vfloat32m2x4_t maskedoff_tuple,
                                               const float32_t *base,
                                               vuint32m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_f32m2x4_tum(mask, maskedoff_tuple, base, bindex,
                                            vl);
}

vfloat64m1x4_t test_vluxseg4ei32_v_f64m1x4_tum(vbool64_t mask,
                                               vfloat64m1x4_t maskedoff_tuple,
                                               const float64_t *base,
                                               vuint32mf2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_f64m1x4_tum(mask, maskedoff_tuple, base, bindex,
                                            vl);
}

vfloat64m2x4_t test_vluxseg4ei32_v_f64m2x4_tum(vbool32_t mask,
                                               vfloat64m2x4_t maskedoff_tuple,
                                               const float64_t *base,
                                               vuint32m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_f64m2x4_tum(mask, maskedoff_tuple, base, bindex,
                                            vl);
}

vint8mf8x4_t test_vluxseg4ei32_v_i8mf8x4_tum(vbool64_t mask,
                                             vint8mf8x4_t maskedoff_tuple,
                                             const int8_t *base,
                                             vuint32mf2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_i8mf8x4_tum(mask, maskedoff_tuple, base, bindex,
                                            vl);
}

vint8mf4x4_t test_vluxseg4ei32_v_i8mf4x4_tum(vbool32_t mask,
                                             vint8mf4x4_t maskedoff_tuple,
                                             const int8_t *base,
                                             vuint32m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_i8mf4x4_tum(mask, maskedoff_tuple, base, bindex,
                                            vl);
}

vint8mf2x4_t test_vluxseg4ei32_v_i8mf2x4_tum(vbool16_t mask,
                                             vint8mf2x4_t maskedoff_tuple,
                                             const int8_t *base,
                                             vuint32m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_i8mf2x4_tum(mask, maskedoff_tuple, base, bindex,
                                            vl);
}

vint8m1x4_t test_vluxseg4ei32_v_i8m1x4_tum(vbool8_t mask,
                                           vint8m1x4_t maskedoff_tuple,
                                           const int8_t *base,
                                           vuint32m4_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_i8m1x4_tum(mask, maskedoff_tuple, base, bindex,
                                           vl);
}

vint8m2x4_t test_vluxseg4ei32_v_i8m2x4_tum(vbool4_t mask,
                                           vint8m2x4_t maskedoff_tuple,
                                           const int8_t *base,
                                           vuint32m8_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_i8m2x4_tum(mask, maskedoff_tuple, base, bindex,
                                           vl);
}

vint16mf4x4_t test_vluxseg4ei32_v_i16mf4x4_tum(vbool64_t mask,
                                               vint16mf4x4_t maskedoff_tuple,
                                               const int16_t *base,
                                               vuint32mf2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_i16mf4x4_tum(mask, maskedoff_tuple, base,
                                             bindex, vl);
}

vint16mf2x4_t test_vluxseg4ei32_v_i16mf2x4_tum(vbool32_t mask,
                                               vint16mf2x4_t maskedoff_tuple,
                                               const int16_t *base,
                                               vuint32m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_i16mf2x4_tum(mask, maskedoff_tuple, base,
                                             bindex, vl);
}

vint16m1x4_t test_vluxseg4ei32_v_i16m1x4_tum(vbool16_t mask,
                                             vint16m1x4_t maskedoff_tuple,
                                             const int16_t *base,
                                             vuint32m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_i16m1x4_tum(mask, maskedoff_tuple, base, bindex,
                                            vl);
}

vint16m2x4_t test_vluxseg4ei32_v_i16m2x4_tum(vbool8_t mask,
                                             vint16m2x4_t maskedoff_tuple,
                                             const int16_t *base,
                                             vuint32m4_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_i16m2x4_tum(mask, maskedoff_tuple, base, bindex,
                                            vl);
}

vint32mf2x4_t test_vluxseg4ei32_v_i32mf2x4_tum(vbool64_t mask,
                                               vint32mf2x4_t maskedoff_tuple,
                                               const int32_t *base,
                                               vuint32mf2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_i32mf2x4_tum(mask, maskedoff_tuple, base,
                                             bindex, vl);
}

vint32m1x4_t test_vluxseg4ei32_v_i32m1x4_tum(vbool32_t mask,
                                             vint32m1x4_t maskedoff_tuple,
                                             const int32_t *base,
                                             vuint32m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_i32m1x4_tum(mask, maskedoff_tuple, base, bindex,
                                            vl);
}

vint32m2x4_t test_vluxseg4ei32_v_i32m2x4_tum(vbool16_t mask,
                                             vint32m2x4_t maskedoff_tuple,
                                             const int32_t *base,
                                             vuint32m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_i32m2x4_tum(mask, maskedoff_tuple, base, bindex,
                                            vl);
}

vint64m1x4_t test_vluxseg4ei32_v_i64m1x4_tum(vbool64_t mask,
                                             vint64m1x4_t maskedoff_tuple,
                                             const int64_t *base,
                                             vuint32mf2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_i64m1x4_tum(mask, maskedoff_tuple, base, bindex,
                                            vl);
}

vint64m2x4_t test_vluxseg4ei32_v_i64m2x4_tum(vbool32_t mask,
                                             vint64m2x4_t maskedoff_tuple,
                                             const int64_t *base,
                                             vuint32m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_i64m2x4_tum(mask, maskedoff_tuple, base, bindex,
                                            vl);
}

vuint8mf8x4_t test_vluxseg4ei32_v_u8mf8x4_tum(vbool64_t mask,
                                              vuint8mf8x4_t maskedoff_tuple,
                                              const uint8_t *base,
                                              vuint32mf2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_u8mf8x4_tum(mask, maskedoff_tuple, base, bindex,
                                            vl);
}

vuint8mf4x4_t test_vluxseg4ei32_v_u8mf4x4_tum(vbool32_t mask,
                                              vuint8mf4x4_t maskedoff_tuple,
                                              const uint8_t *base,
                                              vuint32m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_u8mf4x4_tum(mask, maskedoff_tuple, base, bindex,
                                            vl);
}

vuint8mf2x4_t test_vluxseg4ei32_v_u8mf2x4_tum(vbool16_t mask,
                                              vuint8mf2x4_t maskedoff_tuple,
                                              const uint8_t *base,
                                              vuint32m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_u8mf2x4_tum(mask, maskedoff_tuple, base, bindex,
                                            vl);
}

vuint8m1x4_t test_vluxseg4ei32_v_u8m1x4_tum(vbool8_t mask,
                                            vuint8m1x4_t maskedoff_tuple,
                                            const uint8_t *base,
                                            vuint32m4_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_u8m1x4_tum(mask, maskedoff_tuple, base, bindex,
                                           vl);
}

vuint8m2x4_t test_vluxseg4ei32_v_u8m2x4_tum(vbool4_t mask,
                                            vuint8m2x4_t maskedoff_tuple,
                                            const uint8_t *base,
                                            vuint32m8_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_u8m2x4_tum(mask, maskedoff_tuple, base, bindex,
                                           vl);
}

vuint16mf4x4_t test_vluxseg4ei32_v_u16mf4x4_tum(vbool64_t mask,
                                                vuint16mf4x4_t maskedoff_tuple,
                                                const uint16_t *base,
                                                vuint32mf2_t bindex,
                                                size_t vl) {
  return __riscv_vluxseg4ei32_v_u16mf4x4_tum(mask, maskedoff_tuple, base,
                                             bindex, vl);
}

vuint16mf2x4_t test_vluxseg4ei32_v_u16mf2x4_tum(vbool32_t mask,
                                                vuint16mf2x4_t maskedoff_tuple,
                                                const uint16_t *base,
                                                vuint32m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_u16mf2x4_tum(mask, maskedoff_tuple, base,
                                             bindex, vl);
}

vuint16m1x4_t test_vluxseg4ei32_v_u16m1x4_tum(vbool16_t mask,
                                              vuint16m1x4_t maskedoff_tuple,
                                              const uint16_t *base,
                                              vuint32m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_u16m1x4_tum(mask, maskedoff_tuple, base, bindex,
                                            vl);
}

vuint16m2x4_t test_vluxseg4ei32_v_u16m2x4_tum(vbool8_t mask,
                                              vuint16m2x4_t maskedoff_tuple,
                                              const uint16_t *base,
                                              vuint32m4_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_u16m2x4_tum(mask, maskedoff_tuple, base, bindex,
                                            vl);
}

vuint32mf2x4_t test_vluxseg4ei32_v_u32mf2x4_tum(vbool64_t mask,
                                                vuint32mf2x4_t maskedoff_tuple,
                                                const uint32_t *base,
                                                vuint32mf2_t bindex,
                                                size_t vl) {
  return __riscv_vluxseg4ei32_v_u32mf2x4_tum(mask, maskedoff_tuple, base,
                                             bindex, vl);
}

vuint32m1x4_t test_vluxseg4ei32_v_u32m1x4_tum(vbool32_t mask,
                                              vuint32m1x4_t maskedoff_tuple,
                                              const uint32_t *base,
                                              vuint32m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_u32m1x4_tum(mask, maskedoff_tuple, base, bindex,
                                            vl);
}

vuint32m2x4_t test_vluxseg4ei32_v_u32m2x4_tum(vbool16_t mask,
                                              vuint32m2x4_t maskedoff_tuple,
                                              const uint32_t *base,
                                              vuint32m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_u32m2x4_tum(mask, maskedoff_tuple, base, bindex,
                                            vl);
}

vuint64m1x4_t test_vluxseg4ei32_v_u64m1x4_tum(vbool64_t mask,
                                              vuint64m1x4_t maskedoff_tuple,
                                              const uint64_t *base,
                                              vuint32mf2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_u64m1x4_tum(mask, maskedoff_tuple, base, bindex,
                                            vl);
}

vuint64m2x4_t test_vluxseg4ei32_v_u64m2x4_tum(vbool32_t mask,
                                              vuint64m2x4_t maskedoff_tuple,
                                              const uint64_t *base,
                                              vuint32m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_u64m2x4_tum(mask, maskedoff_tuple, base, bindex,
                                            vl);
}

vfloat16mf4x4_t test_vluxseg4ei32_v_f16mf4x4_tumu(
    vbool64_t mask, vfloat16mf4x4_t maskedoff_tuple, const float16_t *base,
    vuint32mf2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_f16mf4x4_tumu(mask, maskedoff_tuple, base,
                                              bindex, vl);
}

vfloat16mf2x4_t test_vluxseg4ei32_v_f16mf2x4_tumu(
    vbool32_t mask, vfloat16mf2x4_t maskedoff_tuple, const float16_t *base,
    vuint32m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_f16mf2x4_tumu(mask, maskedoff_tuple, base,
                                              bindex, vl);
}

vfloat16m1x4_t test_vluxseg4ei32_v_f16m1x4_tumu(vbool16_t mask,
                                                vfloat16m1x4_t maskedoff_tuple,
                                                const float16_t *base,
                                                vuint32m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_f16m1x4_tumu(mask, maskedoff_tuple, base,
                                             bindex, vl);
}

vfloat16m2x4_t test_vluxseg4ei32_v_f16m2x4_tumu(vbool8_t mask,
                                                vfloat16m2x4_t maskedoff_tuple,
                                                const float16_t *base,
                                                vuint32m4_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_f16m2x4_tumu(mask, maskedoff_tuple, base,
                                             bindex, vl);
}

vfloat32mf2x4_t test_vluxseg4ei32_v_f32mf2x4_tumu(
    vbool64_t mask, vfloat32mf2x4_t maskedoff_tuple, const float32_t *base,
    vuint32mf2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_f32mf2x4_tumu(mask, maskedoff_tuple, base,
                                              bindex, vl);
}

vfloat32m1x4_t test_vluxseg4ei32_v_f32m1x4_tumu(vbool32_t mask,
                                                vfloat32m1x4_t maskedoff_tuple,
                                                const float32_t *base,
                                                vuint32m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_f32m1x4_tumu(mask, maskedoff_tuple, base,
                                             bindex, vl);
}

vfloat32m2x4_t test_vluxseg4ei32_v_f32m2x4_tumu(vbool16_t mask,
                                                vfloat32m2x4_t maskedoff_tuple,
                                                const float32_t *base,
                                                vuint32m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_f32m2x4_tumu(mask, maskedoff_tuple, base,
                                             bindex, vl);
}

vfloat64m1x4_t test_vluxseg4ei32_v_f64m1x4_tumu(vbool64_t mask,
                                                vfloat64m1x4_t maskedoff_tuple,
                                                const float64_t *base,
                                                vuint32mf2_t bindex,
                                                size_t vl) {
  return __riscv_vluxseg4ei32_v_f64m1x4_tumu(mask, maskedoff_tuple, base,
                                             bindex, vl);
}

vfloat64m2x4_t test_vluxseg4ei32_v_f64m2x4_tumu(vbool32_t mask,
                                                vfloat64m2x4_t maskedoff_tuple,
                                                const float64_t *base,
                                                vuint32m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_f64m2x4_tumu(mask, maskedoff_tuple, base,
                                             bindex, vl);
}

vint8mf8x4_t test_vluxseg4ei32_v_i8mf8x4_tumu(vbool64_t mask,
                                              vint8mf8x4_t maskedoff_tuple,
                                              const int8_t *base,
                                              vuint32mf2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_i8mf8x4_tumu(mask, maskedoff_tuple, base,
                                             bindex, vl);
}

vint8mf4x4_t test_vluxseg4ei32_v_i8mf4x4_tumu(vbool32_t mask,
                                              vint8mf4x4_t maskedoff_tuple,
                                              const int8_t *base,
                                              vuint32m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_i8mf4x4_tumu(mask, maskedoff_tuple, base,
                                             bindex, vl);
}

vint8mf2x4_t test_vluxseg4ei32_v_i8mf2x4_tumu(vbool16_t mask,
                                              vint8mf2x4_t maskedoff_tuple,
                                              const int8_t *base,
                                              vuint32m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_i8mf2x4_tumu(mask, maskedoff_tuple, base,
                                             bindex, vl);
}

vint8m1x4_t test_vluxseg4ei32_v_i8m1x4_tumu(vbool8_t mask,
                                            vint8m1x4_t maskedoff_tuple,
                                            const int8_t *base,
                                            vuint32m4_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_i8m1x4_tumu(mask, maskedoff_tuple, base, bindex,
                                            vl);
}

vint8m2x4_t test_vluxseg4ei32_v_i8m2x4_tumu(vbool4_t mask,
                                            vint8m2x4_t maskedoff_tuple,
                                            const int8_t *base,
                                            vuint32m8_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_i8m2x4_tumu(mask, maskedoff_tuple, base, bindex,
                                            vl);
}

vint16mf4x4_t test_vluxseg4ei32_v_i16mf4x4_tumu(vbool64_t mask,
                                                vint16mf4x4_t maskedoff_tuple,
                                                const int16_t *base,
                                                vuint32mf2_t bindex,
                                                size_t vl) {
  return __riscv_vluxseg4ei32_v_i16mf4x4_tumu(mask, maskedoff_tuple, base,
                                              bindex, vl);
}

vint16mf2x4_t test_vluxseg4ei32_v_i16mf2x4_tumu(vbool32_t mask,
                                                vint16mf2x4_t maskedoff_tuple,
                                                const int16_t *base,
                                                vuint32m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_i16mf2x4_tumu(mask, maskedoff_tuple, base,
                                              bindex, vl);
}

vint16m1x4_t test_vluxseg4ei32_v_i16m1x4_tumu(vbool16_t mask,
                                              vint16m1x4_t maskedoff_tuple,
                                              const int16_t *base,
                                              vuint32m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_i16m1x4_tumu(mask, maskedoff_tuple, base,
                                             bindex, vl);
}

vint16m2x4_t test_vluxseg4ei32_v_i16m2x4_tumu(vbool8_t mask,
                                              vint16m2x4_t maskedoff_tuple,
                                              const int16_t *base,
                                              vuint32m4_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_i16m2x4_tumu(mask, maskedoff_tuple, base,
                                             bindex, vl);
}

vint32mf2x4_t test_vluxseg4ei32_v_i32mf2x4_tumu(vbool64_t mask,
                                                vint32mf2x4_t maskedoff_tuple,
                                                const int32_t *base,
                                                vuint32mf2_t bindex,
                                                size_t vl) {
  return __riscv_vluxseg4ei32_v_i32mf2x4_tumu(mask, maskedoff_tuple, base,
                                              bindex, vl);
}

vint32m1x4_t test_vluxseg4ei32_v_i32m1x4_tumu(vbool32_t mask,
                                              vint32m1x4_t maskedoff_tuple,
                                              const int32_t *base,
                                              vuint32m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_i32m1x4_tumu(mask, maskedoff_tuple, base,
                                             bindex, vl);
}

vint32m2x4_t test_vluxseg4ei32_v_i32m2x4_tumu(vbool16_t mask,
                                              vint32m2x4_t maskedoff_tuple,
                                              const int32_t *base,
                                              vuint32m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_i32m2x4_tumu(mask, maskedoff_tuple, base,
                                             bindex, vl);
}

vint64m1x4_t test_vluxseg4ei32_v_i64m1x4_tumu(vbool64_t mask,
                                              vint64m1x4_t maskedoff_tuple,
                                              const int64_t *base,
                                              vuint32mf2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_i64m1x4_tumu(mask, maskedoff_tuple, base,
                                             bindex, vl);
}

vint64m2x4_t test_vluxseg4ei32_v_i64m2x4_tumu(vbool32_t mask,
                                              vint64m2x4_t maskedoff_tuple,
                                              const int64_t *base,
                                              vuint32m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_i64m2x4_tumu(mask, maskedoff_tuple, base,
                                             bindex, vl);
}

vuint8mf8x4_t test_vluxseg4ei32_v_u8mf8x4_tumu(vbool64_t mask,
                                               vuint8mf8x4_t maskedoff_tuple,
                                               const uint8_t *base,
                                               vuint32mf2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_u8mf8x4_tumu(mask, maskedoff_tuple, base,
                                             bindex, vl);
}

vuint8mf4x4_t test_vluxseg4ei32_v_u8mf4x4_tumu(vbool32_t mask,
                                               vuint8mf4x4_t maskedoff_tuple,
                                               const uint8_t *base,
                                               vuint32m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_u8mf4x4_tumu(mask, maskedoff_tuple, base,
                                             bindex, vl);
}

vuint8mf2x4_t test_vluxseg4ei32_v_u8mf2x4_tumu(vbool16_t mask,
                                               vuint8mf2x4_t maskedoff_tuple,
                                               const uint8_t *base,
                                               vuint32m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_u8mf2x4_tumu(mask, maskedoff_tuple, base,
                                             bindex, vl);
}

vuint8m1x4_t test_vluxseg4ei32_v_u8m1x4_tumu(vbool8_t mask,
                                             vuint8m1x4_t maskedoff_tuple,
                                             const uint8_t *base,
                                             vuint32m4_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_u8m1x4_tumu(mask, maskedoff_tuple, base, bindex,
                                            vl);
}

vuint8m2x4_t test_vluxseg4ei32_v_u8m2x4_tumu(vbool4_t mask,
                                             vuint8m2x4_t maskedoff_tuple,
                                             const uint8_t *base,
                                             vuint32m8_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_u8m2x4_tumu(mask, maskedoff_tuple, base, bindex,
                                            vl);
}

vuint16mf4x4_t test_vluxseg4ei32_v_u16mf4x4_tumu(vbool64_t mask,
                                                 vuint16mf4x4_t maskedoff_tuple,
                                                 const uint16_t *base,
                                                 vuint32mf2_t bindex,
                                                 size_t vl) {
  return __riscv_vluxseg4ei32_v_u16mf4x4_tumu(mask, maskedoff_tuple, base,
                                              bindex, vl);
}

vuint16mf2x4_t test_vluxseg4ei32_v_u16mf2x4_tumu(vbool32_t mask,
                                                 vuint16mf2x4_t maskedoff_tuple,
                                                 const uint16_t *base,
                                                 vuint32m1_t bindex,
                                                 size_t vl) {
  return __riscv_vluxseg4ei32_v_u16mf2x4_tumu(mask, maskedoff_tuple, base,
                                              bindex, vl);
}

vuint16m1x4_t test_vluxseg4ei32_v_u16m1x4_tumu(vbool16_t mask,
                                               vuint16m1x4_t maskedoff_tuple,
                                               const uint16_t *base,
                                               vuint32m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_u16m1x4_tumu(mask, maskedoff_tuple, base,
                                             bindex, vl);
}

vuint16m2x4_t test_vluxseg4ei32_v_u16m2x4_tumu(vbool8_t mask,
                                               vuint16m2x4_t maskedoff_tuple,
                                               const uint16_t *base,
                                               vuint32m4_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_u16m2x4_tumu(mask, maskedoff_tuple, base,
                                             bindex, vl);
}

vuint32mf2x4_t test_vluxseg4ei32_v_u32mf2x4_tumu(vbool64_t mask,
                                                 vuint32mf2x4_t maskedoff_tuple,
                                                 const uint32_t *base,
                                                 vuint32mf2_t bindex,
                                                 size_t vl) {
  return __riscv_vluxseg4ei32_v_u32mf2x4_tumu(mask, maskedoff_tuple, base,
                                              bindex, vl);
}

vuint32m1x4_t test_vluxseg4ei32_v_u32m1x4_tumu(vbool32_t mask,
                                               vuint32m1x4_t maskedoff_tuple,
                                               const uint32_t *base,
                                               vuint32m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_u32m1x4_tumu(mask, maskedoff_tuple, base,
                                             bindex, vl);
}

vuint32m2x4_t test_vluxseg4ei32_v_u32m2x4_tumu(vbool16_t mask,
                                               vuint32m2x4_t maskedoff_tuple,
                                               const uint32_t *base,
                                               vuint32m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_u32m2x4_tumu(mask, maskedoff_tuple, base,
                                             bindex, vl);
}

vuint64m1x4_t test_vluxseg4ei32_v_u64m1x4_tumu(vbool64_t mask,
                                               vuint64m1x4_t maskedoff_tuple,
                                               const uint64_t *base,
                                               vuint32mf2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_u64m1x4_tumu(mask, maskedoff_tuple, base,
                                             bindex, vl);
}

vuint64m2x4_t test_vluxseg4ei32_v_u64m2x4_tumu(vbool32_t mask,
                                               vuint64m2x4_t maskedoff_tuple,
                                               const uint64_t *base,
                                               vuint32m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_u64m2x4_tumu(mask, maskedoff_tuple, base,
                                             bindex, vl);
}

vfloat16mf4x4_t test_vluxseg4ei32_v_f16mf4x4_mu(vbool64_t mask,
                                                vfloat16mf4x4_t maskedoff_tuple,
                                                const float16_t *base,
                                                vuint32mf2_t bindex,
                                                size_t vl) {
  return __riscv_vluxseg4ei32_v_f16mf4x4_mu(mask, maskedoff_tuple, base, bindex,
                                            vl);
}

vfloat16mf2x4_t test_vluxseg4ei32_v_f16mf2x4_mu(vbool32_t mask,
                                                vfloat16mf2x4_t maskedoff_tuple,
                                                const float16_t *base,
                                                vuint32m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_f16mf2x4_mu(mask, maskedoff_tuple, base, bindex,
                                            vl);
}

vfloat16m1x4_t test_vluxseg4ei32_v_f16m1x4_mu(vbool16_t mask,
                                              vfloat16m1x4_t maskedoff_tuple,
                                              const float16_t *base,
                                              vuint32m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_f16m1x4_mu(mask, maskedoff_tuple, base, bindex,
                                           vl);
}

vfloat16m2x4_t test_vluxseg4ei32_v_f16m2x4_mu(vbool8_t mask,
                                              vfloat16m2x4_t maskedoff_tuple,
                                              const float16_t *base,
                                              vuint32m4_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_f16m2x4_mu(mask, maskedoff_tuple, base, bindex,
                                           vl);
}

vfloat32mf2x4_t test_vluxseg4ei32_v_f32mf2x4_mu(vbool64_t mask,
                                                vfloat32mf2x4_t maskedoff_tuple,
                                                const float32_t *base,
                                                vuint32mf2_t bindex,
                                                size_t vl) {
  return __riscv_vluxseg4ei32_v_f32mf2x4_mu(mask, maskedoff_tuple, base, bindex,
                                            vl);
}

vfloat32m1x4_t test_vluxseg4ei32_v_f32m1x4_mu(vbool32_t mask,
                                              vfloat32m1x4_t maskedoff_tuple,
                                              const float32_t *base,
                                              vuint32m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_f32m1x4_mu(mask, maskedoff_tuple, base, bindex,
                                           vl);
}

vfloat32m2x4_t test_vluxseg4ei32_v_f32m2x4_mu(vbool16_t mask,
                                              vfloat32m2x4_t maskedoff_tuple,
                                              const float32_t *base,
                                              vuint32m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_f32m2x4_mu(mask, maskedoff_tuple, base, bindex,
                                           vl);
}

vfloat64m1x4_t test_vluxseg4ei32_v_f64m1x4_mu(vbool64_t mask,
                                              vfloat64m1x4_t maskedoff_tuple,
                                              const float64_t *base,
                                              vuint32mf2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_f64m1x4_mu(mask, maskedoff_tuple, base, bindex,
                                           vl);
}

vfloat64m2x4_t test_vluxseg4ei32_v_f64m2x4_mu(vbool32_t mask,
                                              vfloat64m2x4_t maskedoff_tuple,
                                              const float64_t *base,
                                              vuint32m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_f64m2x4_mu(mask, maskedoff_tuple, base, bindex,
                                           vl);
}

vint8mf8x4_t test_vluxseg4ei32_v_i8mf8x4_mu(vbool64_t mask,
                                            vint8mf8x4_t maskedoff_tuple,
                                            const int8_t *base,
                                            vuint32mf2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_i8mf8x4_mu(mask, maskedoff_tuple, base, bindex,
                                           vl);
}

vint8mf4x4_t test_vluxseg4ei32_v_i8mf4x4_mu(vbool32_t mask,
                                            vint8mf4x4_t maskedoff_tuple,
                                            const int8_t *base,
                                            vuint32m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_i8mf4x4_mu(mask, maskedoff_tuple, base, bindex,
                                           vl);
}

vint8mf2x4_t test_vluxseg4ei32_v_i8mf2x4_mu(vbool16_t mask,
                                            vint8mf2x4_t maskedoff_tuple,
                                            const int8_t *base,
                                            vuint32m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_i8mf2x4_mu(mask, maskedoff_tuple, base, bindex,
                                           vl);
}

vint8m1x4_t test_vluxseg4ei32_v_i8m1x4_mu(vbool8_t mask,
                                          vint8m1x4_t maskedoff_tuple,
                                          const int8_t *base,
                                          vuint32m4_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_i8m1x4_mu(mask, maskedoff_tuple, base, bindex,
                                          vl);
}

vint8m2x4_t test_vluxseg4ei32_v_i8m2x4_mu(vbool4_t mask,
                                          vint8m2x4_t maskedoff_tuple,
                                          const int8_t *base,
                                          vuint32m8_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_i8m2x4_mu(mask, maskedoff_tuple, base, bindex,
                                          vl);
}

vint16mf4x4_t test_vluxseg4ei32_v_i16mf4x4_mu(vbool64_t mask,
                                              vint16mf4x4_t maskedoff_tuple,
                                              const int16_t *base,
                                              vuint32mf2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_i16mf4x4_mu(mask, maskedoff_tuple, base, bindex,
                                            vl);
}

vint16mf2x4_t test_vluxseg4ei32_v_i16mf2x4_mu(vbool32_t mask,
                                              vint16mf2x4_t maskedoff_tuple,
                                              const int16_t *base,
                                              vuint32m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_i16mf2x4_mu(mask, maskedoff_tuple, base, bindex,
                                            vl);
}

vint16m1x4_t test_vluxseg4ei32_v_i16m1x4_mu(vbool16_t mask,
                                            vint16m1x4_t maskedoff_tuple,
                                            const int16_t *base,
                                            vuint32m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_i16m1x4_mu(mask, maskedoff_tuple, base, bindex,
                                           vl);
}

vint16m2x4_t test_vluxseg4ei32_v_i16m2x4_mu(vbool8_t mask,
                                            vint16m2x4_t maskedoff_tuple,
                                            const int16_t *base,
                                            vuint32m4_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_i16m2x4_mu(mask, maskedoff_tuple, base, bindex,
                                           vl);
}

vint32mf2x4_t test_vluxseg4ei32_v_i32mf2x4_mu(vbool64_t mask,
                                              vint32mf2x4_t maskedoff_tuple,
                                              const int32_t *base,
                                              vuint32mf2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_i32mf2x4_mu(mask, maskedoff_tuple, base, bindex,
                                            vl);
}

vint32m1x4_t test_vluxseg4ei32_v_i32m1x4_mu(vbool32_t mask,
                                            vint32m1x4_t maskedoff_tuple,
                                            const int32_t *base,
                                            vuint32m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_i32m1x4_mu(mask, maskedoff_tuple, base, bindex,
                                           vl);
}

vint32m2x4_t test_vluxseg4ei32_v_i32m2x4_mu(vbool16_t mask,
                                            vint32m2x4_t maskedoff_tuple,
                                            const int32_t *base,
                                            vuint32m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_i32m2x4_mu(mask, maskedoff_tuple, base, bindex,
                                           vl);
}

vint64m1x4_t test_vluxseg4ei32_v_i64m1x4_mu(vbool64_t mask,
                                            vint64m1x4_t maskedoff_tuple,
                                            const int64_t *base,
                                            vuint32mf2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_i64m1x4_mu(mask, maskedoff_tuple, base, bindex,
                                           vl);
}

vint64m2x4_t test_vluxseg4ei32_v_i64m2x4_mu(vbool32_t mask,
                                            vint64m2x4_t maskedoff_tuple,
                                            const int64_t *base,
                                            vuint32m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_i64m2x4_mu(mask, maskedoff_tuple, base, bindex,
                                           vl);
}

vuint8mf8x4_t test_vluxseg4ei32_v_u8mf8x4_mu(vbool64_t mask,
                                             vuint8mf8x4_t maskedoff_tuple,
                                             const uint8_t *base,
                                             vuint32mf2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_u8mf8x4_mu(mask, maskedoff_tuple, base, bindex,
                                           vl);
}

vuint8mf4x4_t test_vluxseg4ei32_v_u8mf4x4_mu(vbool32_t mask,
                                             vuint8mf4x4_t maskedoff_tuple,
                                             const uint8_t *base,
                                             vuint32m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_u8mf4x4_mu(mask, maskedoff_tuple, base, bindex,
                                           vl);
}

vuint8mf2x4_t test_vluxseg4ei32_v_u8mf2x4_mu(vbool16_t mask,
                                             vuint8mf2x4_t maskedoff_tuple,
                                             const uint8_t *base,
                                             vuint32m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_u8mf2x4_mu(mask, maskedoff_tuple, base, bindex,
                                           vl);
}

vuint8m1x4_t test_vluxseg4ei32_v_u8m1x4_mu(vbool8_t mask,
                                           vuint8m1x4_t maskedoff_tuple,
                                           const uint8_t *base,
                                           vuint32m4_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_u8m1x4_mu(mask, maskedoff_tuple, base, bindex,
                                          vl);
}

vuint8m2x4_t test_vluxseg4ei32_v_u8m2x4_mu(vbool4_t mask,
                                           vuint8m2x4_t maskedoff_tuple,
                                           const uint8_t *base,
                                           vuint32m8_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_u8m2x4_mu(mask, maskedoff_tuple, base, bindex,
                                          vl);
}

vuint16mf4x4_t test_vluxseg4ei32_v_u16mf4x4_mu(vbool64_t mask,
                                               vuint16mf4x4_t maskedoff_tuple,
                                               const uint16_t *base,
                                               vuint32mf2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_u16mf4x4_mu(mask, maskedoff_tuple, base, bindex,
                                            vl);
}

vuint16mf2x4_t test_vluxseg4ei32_v_u16mf2x4_mu(vbool32_t mask,
                                               vuint16mf2x4_t maskedoff_tuple,
                                               const uint16_t *base,
                                               vuint32m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_u16mf2x4_mu(mask, maskedoff_tuple, base, bindex,
                                            vl);
}

vuint16m1x4_t test_vluxseg4ei32_v_u16m1x4_mu(vbool16_t mask,
                                             vuint16m1x4_t maskedoff_tuple,
                                             const uint16_t *base,
                                             vuint32m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_u16m1x4_mu(mask, maskedoff_tuple, base, bindex,
                                           vl);
}

vuint16m2x4_t test_vluxseg4ei32_v_u16m2x4_mu(vbool8_t mask,
                                             vuint16m2x4_t maskedoff_tuple,
                                             const uint16_t *base,
                                             vuint32m4_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_u16m2x4_mu(mask, maskedoff_tuple, base, bindex,
                                           vl);
}

vuint32mf2x4_t test_vluxseg4ei32_v_u32mf2x4_mu(vbool64_t mask,
                                               vuint32mf2x4_t maskedoff_tuple,
                                               const uint32_t *base,
                                               vuint32mf2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_u32mf2x4_mu(mask, maskedoff_tuple, base, bindex,
                                            vl);
}

vuint32m1x4_t test_vluxseg4ei32_v_u32m1x4_mu(vbool32_t mask,
                                             vuint32m1x4_t maskedoff_tuple,
                                             const uint32_t *base,
                                             vuint32m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_u32m1x4_mu(mask, maskedoff_tuple, base, bindex,
                                           vl);
}

vuint32m2x4_t test_vluxseg4ei32_v_u32m2x4_mu(vbool16_t mask,
                                             vuint32m2x4_t maskedoff_tuple,
                                             const uint32_t *base,
                                             vuint32m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_u32m2x4_mu(mask, maskedoff_tuple, base, bindex,
                                           vl);
}

vuint64m1x4_t test_vluxseg4ei32_v_u64m1x4_mu(vbool64_t mask,
                                             vuint64m1x4_t maskedoff_tuple,
                                             const uint64_t *base,
                                             vuint32mf2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_u64m1x4_mu(mask, maskedoff_tuple, base, bindex,
                                           vl);
}

vuint64m2x4_t test_vluxseg4ei32_v_u64m2x4_mu(vbool32_t mask,
                                             vuint64m2x4_t maskedoff_tuple,
                                             const uint64_t *base,
                                             vuint32m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei32_v_u64m2x4_mu(mask, maskedoff_tuple, base, bindex,
                                           vl);
}
