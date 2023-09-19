#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint8mf8_t test_vmv_v_v_i8mf8_tu(vint8mf8_t maskedoff, vint8mf8_t src,
                                 size_t vl) {
  return __riscv_vmv_v_v_i8mf8_tu(maskedoff, src, vl);
}

vint8mf8_t test_vmv_v_x_i8mf8_tu(vint8mf8_t maskedoff, int8_t src, size_t vl) {
  return __riscv_vmv_v_x_i8mf8_tu(maskedoff, src, vl);
}

vint8mf4_t test_vmv_v_v_i8mf4_tu(vint8mf4_t maskedoff, vint8mf4_t src,
                                 size_t vl) {
  return __riscv_vmv_v_v_i8mf4_tu(maskedoff, src, vl);
}

vint8mf4_t test_vmv_v_x_i8mf4_tu(vint8mf4_t maskedoff, int8_t src, size_t vl) {
  return __riscv_vmv_v_x_i8mf4_tu(maskedoff, src, vl);
}

vint8mf2_t test_vmv_v_v_i8mf2_tu(vint8mf2_t maskedoff, vint8mf2_t src,
                                 size_t vl) {
  return __riscv_vmv_v_v_i8mf2_tu(maskedoff, src, vl);
}

vint8mf2_t test_vmv_v_x_i8mf2_tu(vint8mf2_t maskedoff, int8_t src, size_t vl) {
  return __riscv_vmv_v_x_i8mf2_tu(maskedoff, src, vl);
}

vint8m1_t test_vmv_v_v_i8m1_tu(vint8m1_t maskedoff, vint8m1_t src, size_t vl) {
  return __riscv_vmv_v_v_i8m1_tu(maskedoff, src, vl);
}

vint8m1_t test_vmv_v_x_i8m1_tu(vint8m1_t maskedoff, int8_t src, size_t vl) {
  return __riscv_vmv_v_x_i8m1_tu(maskedoff, src, vl);
}

vint8m2_t test_vmv_v_v_i8m2_tu(vint8m2_t maskedoff, vint8m2_t src, size_t vl) {
  return __riscv_vmv_v_v_i8m2_tu(maskedoff, src, vl);
}

vint8m2_t test_vmv_v_x_i8m2_tu(vint8m2_t maskedoff, int8_t src, size_t vl) {
  return __riscv_vmv_v_x_i8m2_tu(maskedoff, src, vl);
}

vint8m4_t test_vmv_v_v_i8m4_tu(vint8m4_t maskedoff, vint8m4_t src, size_t vl) {
  return __riscv_vmv_v_v_i8m4_tu(maskedoff, src, vl);
}

vint8m4_t test_vmv_v_x_i8m4_tu(vint8m4_t maskedoff, int8_t src, size_t vl) {
  return __riscv_vmv_v_x_i8m4_tu(maskedoff, src, vl);
}

vint8m8_t test_vmv_v_v_i8m8_tu(vint8m8_t maskedoff, vint8m8_t src, size_t vl) {
  return __riscv_vmv_v_v_i8m8_tu(maskedoff, src, vl);
}

vint8m8_t test_vmv_v_x_i8m8_tu(vint8m8_t maskedoff, int8_t src, size_t vl) {
  return __riscv_vmv_v_x_i8m8_tu(maskedoff, src, vl);
}

vint16mf4_t test_vmv_v_v_i16mf4_tu(vint16mf4_t maskedoff, vint16mf4_t src,
                                   size_t vl) {
  return __riscv_vmv_v_v_i16mf4_tu(maskedoff, src, vl);
}

vint16mf4_t test_vmv_v_x_i16mf4_tu(vint16mf4_t maskedoff, int16_t src,
                                   size_t vl) {
  return __riscv_vmv_v_x_i16mf4_tu(maskedoff, src, vl);
}

vint16mf2_t test_vmv_v_v_i16mf2_tu(vint16mf2_t maskedoff, vint16mf2_t src,
                                   size_t vl) {
  return __riscv_vmv_v_v_i16mf2_tu(maskedoff, src, vl);
}

vint16mf2_t test_vmv_v_x_i16mf2_tu(vint16mf2_t maskedoff, int16_t src,
                                   size_t vl) {
  return __riscv_vmv_v_x_i16mf2_tu(maskedoff, src, vl);
}

vint16m1_t test_vmv_v_v_i16m1_tu(vint16m1_t maskedoff, vint16m1_t src,
                                 size_t vl) {
  return __riscv_vmv_v_v_i16m1_tu(maskedoff, src, vl);
}

vint16m1_t test_vmv_v_x_i16m1_tu(vint16m1_t maskedoff, int16_t src, size_t vl) {
  return __riscv_vmv_v_x_i16m1_tu(maskedoff, src, vl);
}

vint16m2_t test_vmv_v_v_i16m2_tu(vint16m2_t maskedoff, vint16m2_t src,
                                 size_t vl) {
  return __riscv_vmv_v_v_i16m2_tu(maskedoff, src, vl);
}

vint16m2_t test_vmv_v_x_i16m2_tu(vint16m2_t maskedoff, int16_t src, size_t vl) {
  return __riscv_vmv_v_x_i16m2_tu(maskedoff, src, vl);
}

vint16m4_t test_vmv_v_v_i16m4_tu(vint16m4_t maskedoff, vint16m4_t src,
                                 size_t vl) {
  return __riscv_vmv_v_v_i16m4_tu(maskedoff, src, vl);
}

vint16m4_t test_vmv_v_x_i16m4_tu(vint16m4_t maskedoff, int16_t src, size_t vl) {
  return __riscv_vmv_v_x_i16m4_tu(maskedoff, src, vl);
}

vint16m8_t test_vmv_v_v_i16m8_tu(vint16m8_t maskedoff, vint16m8_t src,
                                 size_t vl) {
  return __riscv_vmv_v_v_i16m8_tu(maskedoff, src, vl);
}

vint16m8_t test_vmv_v_x_i16m8_tu(vint16m8_t maskedoff, int16_t src, size_t vl) {
  return __riscv_vmv_v_x_i16m8_tu(maskedoff, src, vl);
}

vint32mf2_t test_vmv_v_v_i32mf2_tu(vint32mf2_t maskedoff, vint32mf2_t src,
                                   size_t vl) {
  return __riscv_vmv_v_v_i32mf2_tu(maskedoff, src, vl);
}

vint32mf2_t test_vmv_v_x_i32mf2_tu(vint32mf2_t maskedoff, int32_t src,
                                   size_t vl) {
  return __riscv_vmv_v_x_i32mf2_tu(maskedoff, src, vl);
}

vint32m1_t test_vmv_v_v_i32m1_tu(vint32m1_t maskedoff, vint32m1_t src,
                                 size_t vl) {
  return __riscv_vmv_v_v_i32m1_tu(maskedoff, src, vl);
}

vint32m1_t test_vmv_v_x_i32m1_tu(vint32m1_t maskedoff, int32_t src, size_t vl) {
  return __riscv_vmv_v_x_i32m1_tu(maskedoff, src, vl);
}

vint32m2_t test_vmv_v_v_i32m2_tu(vint32m2_t maskedoff, vint32m2_t src,
                                 size_t vl) {
  return __riscv_vmv_v_v_i32m2_tu(maskedoff, src, vl);
}

vint32m2_t test_vmv_v_x_i32m2_tu(vint32m2_t maskedoff, int32_t src, size_t vl) {
  return __riscv_vmv_v_x_i32m2_tu(maskedoff, src, vl);
}

vint32m4_t test_vmv_v_v_i32m4_tu(vint32m4_t maskedoff, vint32m4_t src,
                                 size_t vl) {
  return __riscv_vmv_v_v_i32m4_tu(maskedoff, src, vl);
}

vint32m4_t test_vmv_v_x_i32m4_tu(vint32m4_t maskedoff, int32_t src, size_t vl) {
  return __riscv_vmv_v_x_i32m4_tu(maskedoff, src, vl);
}

vint32m8_t test_vmv_v_v_i32m8_tu(vint32m8_t maskedoff, vint32m8_t src,
                                 size_t vl) {
  return __riscv_vmv_v_v_i32m8_tu(maskedoff, src, vl);
}

vint32m8_t test_vmv_v_x_i32m8_tu(vint32m8_t maskedoff, int32_t src, size_t vl) {
  return __riscv_vmv_v_x_i32m8_tu(maskedoff, src, vl);
}

vint64m1_t test_vmv_v_v_i64m1_tu(vint64m1_t maskedoff, vint64m1_t src,
                                 size_t vl) {
  return __riscv_vmv_v_v_i64m1_tu(maskedoff, src, vl);
}

vint64m1_t test_vmv_v_x_i64m1_tu(vint64m1_t maskedoff, int64_t src, size_t vl) {
  return __riscv_vmv_v_x_i64m1_tu(maskedoff, src, vl);
}

vint64m2_t test_vmv_v_v_i64m2_tu(vint64m2_t maskedoff, vint64m2_t src,
                                 size_t vl) {
  return __riscv_vmv_v_v_i64m2_tu(maskedoff, src, vl);
}

vint64m2_t test_vmv_v_x_i64m2_tu(vint64m2_t maskedoff, int64_t src, size_t vl) {
  return __riscv_vmv_v_x_i64m2_tu(maskedoff, src, vl);
}

vint64m4_t test_vmv_v_v_i64m4_tu(vint64m4_t maskedoff, vint64m4_t src,
                                 size_t vl) {
  return __riscv_vmv_v_v_i64m4_tu(maskedoff, src, vl);
}

vint64m4_t test_vmv_v_x_i64m4_tu(vint64m4_t maskedoff, int64_t src, size_t vl) {
  return __riscv_vmv_v_x_i64m4_tu(maskedoff, src, vl);
}

vint64m8_t test_vmv_v_v_i64m8_tu(vint64m8_t maskedoff, vint64m8_t src,
                                 size_t vl) {
  return __riscv_vmv_v_v_i64m8_tu(maskedoff, src, vl);
}

vint64m8_t test_vmv_v_x_i64m8_tu(vint64m8_t maskedoff, int64_t src, size_t vl) {
  return __riscv_vmv_v_x_i64m8_tu(maskedoff, src, vl);
}

vuint8mf8_t test_vmv_v_v_u8mf8_tu(vuint8mf8_t maskedoff, vuint8mf8_t src,
                                  size_t vl) {
  return __riscv_vmv_v_v_u8mf8_tu(maskedoff, src, vl);
}

vuint8mf8_t test_vmv_v_x_u8mf8_tu(vuint8mf8_t maskedoff, uint8_t src,
                                  size_t vl) {
  return __riscv_vmv_v_x_u8mf8_tu(maskedoff, src, vl);
}

vuint8mf4_t test_vmv_v_v_u8mf4_tu(vuint8mf4_t maskedoff, vuint8mf4_t src,
                                  size_t vl) {
  return __riscv_vmv_v_v_u8mf4_tu(maskedoff, src, vl);
}

vuint8mf4_t test_vmv_v_x_u8mf4_tu(vuint8mf4_t maskedoff, uint8_t src,
                                  size_t vl) {
  return __riscv_vmv_v_x_u8mf4_tu(maskedoff, src, vl);
}

vuint8mf2_t test_vmv_v_v_u8mf2_tu(vuint8mf2_t maskedoff, vuint8mf2_t src,
                                  size_t vl) {
  return __riscv_vmv_v_v_u8mf2_tu(maskedoff, src, vl);
}

vuint8mf2_t test_vmv_v_x_u8mf2_tu(vuint8mf2_t maskedoff, uint8_t src,
                                  size_t vl) {
  return __riscv_vmv_v_x_u8mf2_tu(maskedoff, src, vl);
}

vuint8m1_t test_vmv_v_v_u8m1_tu(vuint8m1_t maskedoff, vuint8m1_t src,
                                size_t vl) {
  return __riscv_vmv_v_v_u8m1_tu(maskedoff, src, vl);
}

vuint8m1_t test_vmv_v_x_u8m1_tu(vuint8m1_t maskedoff, uint8_t src, size_t vl) {
  return __riscv_vmv_v_x_u8m1_tu(maskedoff, src, vl);
}

vuint8m2_t test_vmv_v_v_u8m2_tu(vuint8m2_t maskedoff, vuint8m2_t src,
                                size_t vl) {
  return __riscv_vmv_v_v_u8m2_tu(maskedoff, src, vl);
}

vuint8m2_t test_vmv_v_x_u8m2_tu(vuint8m2_t maskedoff, uint8_t src, size_t vl) {
  return __riscv_vmv_v_x_u8m2_tu(maskedoff, src, vl);
}

vuint8m4_t test_vmv_v_v_u8m4_tu(vuint8m4_t maskedoff, vuint8m4_t src,
                                size_t vl) {
  return __riscv_vmv_v_v_u8m4_tu(maskedoff, src, vl);
}

vuint8m4_t test_vmv_v_x_u8m4_tu(vuint8m4_t maskedoff, uint8_t src, size_t vl) {
  return __riscv_vmv_v_x_u8m4_tu(maskedoff, src, vl);
}

vuint8m8_t test_vmv_v_v_u8m8_tu(vuint8m8_t maskedoff, vuint8m8_t src,
                                size_t vl) {
  return __riscv_vmv_v_v_u8m8_tu(maskedoff, src, vl);
}

vuint8m8_t test_vmv_v_x_u8m8_tu(vuint8m8_t maskedoff, uint8_t src, size_t vl) {
  return __riscv_vmv_v_x_u8m8_tu(maskedoff, src, vl);
}

vuint16mf4_t test_vmv_v_v_u16mf4_tu(vuint16mf4_t maskedoff, vuint16mf4_t src,
                                    size_t vl) {
  return __riscv_vmv_v_v_u16mf4_tu(maskedoff, src, vl);
}

vuint16mf4_t test_vmv_v_x_u16mf4_tu(vuint16mf4_t maskedoff, uint16_t src,
                                    size_t vl) {
  return __riscv_vmv_v_x_u16mf4_tu(maskedoff, src, vl);
}

vuint16mf2_t test_vmv_v_v_u16mf2_tu(vuint16mf2_t maskedoff, vuint16mf2_t src,
                                    size_t vl) {
  return __riscv_vmv_v_v_u16mf2_tu(maskedoff, src, vl);
}

vuint16mf2_t test_vmv_v_x_u16mf2_tu(vuint16mf2_t maskedoff, uint16_t src,
                                    size_t vl) {
  return __riscv_vmv_v_x_u16mf2_tu(maskedoff, src, vl);
}

vuint16m1_t test_vmv_v_v_u16m1_tu(vuint16m1_t maskedoff, vuint16m1_t src,
                                  size_t vl) {
  return __riscv_vmv_v_v_u16m1_tu(maskedoff, src, vl);
}

vuint16m1_t test_vmv_v_x_u16m1_tu(vuint16m1_t maskedoff, uint16_t src,
                                  size_t vl) {
  return __riscv_vmv_v_x_u16m1_tu(maskedoff, src, vl);
}

vuint16m2_t test_vmv_v_v_u16m2_tu(vuint16m2_t maskedoff, vuint16m2_t src,
                                  size_t vl) {
  return __riscv_vmv_v_v_u16m2_tu(maskedoff, src, vl);
}

vuint16m2_t test_vmv_v_x_u16m2_tu(vuint16m2_t maskedoff, uint16_t src,
                                  size_t vl) {
  return __riscv_vmv_v_x_u16m2_tu(maskedoff, src, vl);
}

vuint16m4_t test_vmv_v_v_u16m4_tu(vuint16m4_t maskedoff, vuint16m4_t src,
                                  size_t vl) {
  return __riscv_vmv_v_v_u16m4_tu(maskedoff, src, vl);
}

vuint16m4_t test_vmv_v_x_u16m4_tu(vuint16m4_t maskedoff, uint16_t src,
                                  size_t vl) {
  return __riscv_vmv_v_x_u16m4_tu(maskedoff, src, vl);
}

vuint16m8_t test_vmv_v_v_u16m8_tu(vuint16m8_t maskedoff, vuint16m8_t src,
                                  size_t vl) {
  return __riscv_vmv_v_v_u16m8_tu(maskedoff, src, vl);
}

vuint16m8_t test_vmv_v_x_u16m8_tu(vuint16m8_t maskedoff, uint16_t src,
                                  size_t vl) {
  return __riscv_vmv_v_x_u16m8_tu(maskedoff, src, vl);
}

vuint32mf2_t test_vmv_v_v_u32mf2_tu(vuint32mf2_t maskedoff, vuint32mf2_t src,
                                    size_t vl) {
  return __riscv_vmv_v_v_u32mf2_tu(maskedoff, src, vl);
}

vuint32mf2_t test_vmv_v_x_u32mf2_tu(vuint32mf2_t maskedoff, uint32_t src,
                                    size_t vl) {
  return __riscv_vmv_v_x_u32mf2_tu(maskedoff, src, vl);
}

vuint32m1_t test_vmv_v_v_u32m1_tu(vuint32m1_t maskedoff, vuint32m1_t src,
                                  size_t vl) {
  return __riscv_vmv_v_v_u32m1_tu(maskedoff, src, vl);
}

vuint32m1_t test_vmv_v_x_u32m1_tu(vuint32m1_t maskedoff, uint32_t src,
                                  size_t vl) {
  return __riscv_vmv_v_x_u32m1_tu(maskedoff, src, vl);
}

vuint32m2_t test_vmv_v_v_u32m2_tu(vuint32m2_t maskedoff, vuint32m2_t src,
                                  size_t vl) {
  return __riscv_vmv_v_v_u32m2_tu(maskedoff, src, vl);
}

vuint32m2_t test_vmv_v_x_u32m2_tu(vuint32m2_t maskedoff, uint32_t src,
                                  size_t vl) {
  return __riscv_vmv_v_x_u32m2_tu(maskedoff, src, vl);
}

vuint32m4_t test_vmv_v_v_u32m4_tu(vuint32m4_t maskedoff, vuint32m4_t src,
                                  size_t vl) {
  return __riscv_vmv_v_v_u32m4_tu(maskedoff, src, vl);
}

vuint32m4_t test_vmv_v_x_u32m4_tu(vuint32m4_t maskedoff, uint32_t src,
                                  size_t vl) {
  return __riscv_vmv_v_x_u32m4_tu(maskedoff, src, vl);
}

vuint32m8_t test_vmv_v_v_u32m8_tu(vuint32m8_t maskedoff, vuint32m8_t src,
                                  size_t vl) {
  return __riscv_vmv_v_v_u32m8_tu(maskedoff, src, vl);
}

vuint32m8_t test_vmv_v_x_u32m8_tu(vuint32m8_t maskedoff, uint32_t src,
                                  size_t vl) {
  return __riscv_vmv_v_x_u32m8_tu(maskedoff, src, vl);
}

vuint64m1_t test_vmv_v_v_u64m1_tu(vuint64m1_t maskedoff, vuint64m1_t src,
                                  size_t vl) {
  return __riscv_vmv_v_v_u64m1_tu(maskedoff, src, vl);
}

vuint64m1_t test_vmv_v_x_u64m1_tu(vuint64m1_t maskedoff, uint64_t src,
                                  size_t vl) {
  return __riscv_vmv_v_x_u64m1_tu(maskedoff, src, vl);
}

vuint64m2_t test_vmv_v_v_u64m2_tu(vuint64m2_t maskedoff, vuint64m2_t src,
                                  size_t vl) {
  return __riscv_vmv_v_v_u64m2_tu(maskedoff, src, vl);
}

vuint64m2_t test_vmv_v_x_u64m2_tu(vuint64m2_t maskedoff, uint64_t src,
                                  size_t vl) {
  return __riscv_vmv_v_x_u64m2_tu(maskedoff, src, vl);
}

vuint64m4_t test_vmv_v_v_u64m4_tu(vuint64m4_t maskedoff, vuint64m4_t src,
                                  size_t vl) {
  return __riscv_vmv_v_v_u64m4_tu(maskedoff, src, vl);
}

vuint64m4_t test_vmv_v_x_u64m4_tu(vuint64m4_t maskedoff, uint64_t src,
                                  size_t vl) {
  return __riscv_vmv_v_x_u64m4_tu(maskedoff, src, vl);
}

vuint64m8_t test_vmv_v_v_u64m8_tu(vuint64m8_t maskedoff, vuint64m8_t src,
                                  size_t vl) {
  return __riscv_vmv_v_v_u64m8_tu(maskedoff, src, vl);
}

vuint64m8_t test_vmv_v_x_u64m8_tu(vuint64m8_t maskedoff, uint64_t src,
                                  size_t vl) {
  return __riscv_vmv_v_x_u64m8_tu(maskedoff, src, vl);
}

vfloat16mf4_t test_vmv_v_v_f16mf4_tu(vfloat16mf4_t maskedoff, vfloat16mf4_t src,
                                     size_t vl) {
  return __riscv_vmv_v_v_f16mf4_tu(maskedoff, src, vl);
}

vfloat16mf2_t test_vmv_v_v_f16mf2_tu(vfloat16mf2_t maskedoff, vfloat16mf2_t src,
                                     size_t vl) {
  return __riscv_vmv_v_v_f16mf2_tu(maskedoff, src, vl);
}

vfloat16m1_t test_vmv_v_v_f16m1_tu(vfloat16m1_t maskedoff, vfloat16m1_t src,
                                   size_t vl) {
  return __riscv_vmv_v_v_f16m1_tu(maskedoff, src, vl);
}

vfloat16m2_t test_vmv_v_v_f16m2_tu(vfloat16m2_t maskedoff, vfloat16m2_t src,
                                   size_t vl) {
  return __riscv_vmv_v_v_f16m2_tu(maskedoff, src, vl);
}

vfloat16m4_t test_vmv_v_v_f16m4_tu(vfloat16m4_t maskedoff, vfloat16m4_t src,
                                   size_t vl) {
  return __riscv_vmv_v_v_f16m4_tu(maskedoff, src, vl);
}

vfloat16m8_t test_vmv_v_v_f16m8_tu(vfloat16m8_t maskedoff, vfloat16m8_t src,
                                   size_t vl) {
  return __riscv_vmv_v_v_f16m8_tu(maskedoff, src, vl);
}

vfloat32mf2_t test_vmv_v_v_f32mf2_tu(vfloat32mf2_t maskedoff, vfloat32mf2_t src,
                                     size_t vl) {
  return __riscv_vmv_v_v_f32mf2_tu(maskedoff, src, vl);
}

vfloat32m1_t test_vmv_v_v_f32m1_tu(vfloat32m1_t maskedoff, vfloat32m1_t src,
                                   size_t vl) {
  return __riscv_vmv_v_v_f32m1_tu(maskedoff, src, vl);
}

vfloat32m2_t test_vmv_v_v_f32m2_tu(vfloat32m2_t maskedoff, vfloat32m2_t src,
                                   size_t vl) {
  return __riscv_vmv_v_v_f32m2_tu(maskedoff, src, vl);
}

vfloat32m4_t test_vmv_v_v_f32m4_tu(vfloat32m4_t maskedoff, vfloat32m4_t src,
                                   size_t vl) {
  return __riscv_vmv_v_v_f32m4_tu(maskedoff, src, vl);
}

vfloat32m8_t test_vmv_v_v_f32m8_tu(vfloat32m8_t maskedoff, vfloat32m8_t src,
                                   size_t vl) {
  return __riscv_vmv_v_v_f32m8_tu(maskedoff, src, vl);
}

vfloat64m1_t test_vmv_v_v_f64m1_tu(vfloat64m1_t maskedoff, vfloat64m1_t src,
                                   size_t vl) {
  return __riscv_vmv_v_v_f64m1_tu(maskedoff, src, vl);
}

vfloat64m2_t test_vmv_v_v_f64m2_tu(vfloat64m2_t maskedoff, vfloat64m2_t src,
                                   size_t vl) {
  return __riscv_vmv_v_v_f64m2_tu(maskedoff, src, vl);
}

vfloat64m4_t test_vmv_v_v_f64m4_tu(vfloat64m4_t maskedoff, vfloat64m4_t src,
                                   size_t vl) {
  return __riscv_vmv_v_v_f64m4_tu(maskedoff, src, vl);
}

vfloat64m8_t test_vmv_v_v_f64m8_tu(vfloat64m8_t maskedoff, vfloat64m8_t src,
                                   size_t vl) {
  return __riscv_vmv_v_v_f64m8_tu(maskedoff, src, vl);
}

vint8mf8_t test_vmv_s_x_i8mf8_tu(vint8mf8_t maskedoff, int8_t src, size_t vl) {
  return __riscv_vmv_s_x_i8mf8_tu(maskedoff, src, vl);
}

vint8mf4_t test_vmv_s_x_i8mf4_tu(vint8mf4_t maskedoff, int8_t src, size_t vl) {
  return __riscv_vmv_s_x_i8mf4_tu(maskedoff, src, vl);
}

vint8mf2_t test_vmv_s_x_i8mf2_tu(vint8mf2_t maskedoff, int8_t src, size_t vl) {
  return __riscv_vmv_s_x_i8mf2_tu(maskedoff, src, vl);
}

vint8m1_t test_vmv_s_x_i8m1_tu(vint8m1_t maskedoff, int8_t src, size_t vl) {
  return __riscv_vmv_s_x_i8m1_tu(maskedoff, src, vl);
}

vint8m2_t test_vmv_s_x_i8m2_tu(vint8m2_t maskedoff, int8_t src, size_t vl) {
  return __riscv_vmv_s_x_i8m2_tu(maskedoff, src, vl);
}

vint8m4_t test_vmv_s_x_i8m4_tu(vint8m4_t maskedoff, int8_t src, size_t vl) {
  return __riscv_vmv_s_x_i8m4_tu(maskedoff, src, vl);
}

vint8m8_t test_vmv_s_x_i8m8_tu(vint8m8_t maskedoff, int8_t src, size_t vl) {
  return __riscv_vmv_s_x_i8m8_tu(maskedoff, src, vl);
}

vint16mf4_t test_vmv_s_x_i16mf4_tu(vint16mf4_t maskedoff, int16_t src,
                                   size_t vl) {
  return __riscv_vmv_s_x_i16mf4_tu(maskedoff, src, vl);
}

vint16mf2_t test_vmv_s_x_i16mf2_tu(vint16mf2_t maskedoff, int16_t src,
                                   size_t vl) {
  return __riscv_vmv_s_x_i16mf2_tu(maskedoff, src, vl);
}

vint16m1_t test_vmv_s_x_i16m1_tu(vint16m1_t maskedoff, int16_t src, size_t vl) {
  return __riscv_vmv_s_x_i16m1_tu(maskedoff, src, vl);
}

vint16m2_t test_vmv_s_x_i16m2_tu(vint16m2_t maskedoff, int16_t src, size_t vl) {
  return __riscv_vmv_s_x_i16m2_tu(maskedoff, src, vl);
}

vint16m4_t test_vmv_s_x_i16m4_tu(vint16m4_t maskedoff, int16_t src, size_t vl) {
  return __riscv_vmv_s_x_i16m4_tu(maskedoff, src, vl);
}

vint16m8_t test_vmv_s_x_i16m8_tu(vint16m8_t maskedoff, int16_t src, size_t vl) {
  return __riscv_vmv_s_x_i16m8_tu(maskedoff, src, vl);
}

vint32mf2_t test_vmv_s_x_i32mf2_tu(vint32mf2_t maskedoff, int32_t src,
                                   size_t vl) {
  return __riscv_vmv_s_x_i32mf2_tu(maskedoff, src, vl);
}

vint32m1_t test_vmv_s_x_i32m1_tu(vint32m1_t maskedoff, int32_t src, size_t vl) {
  return __riscv_vmv_s_x_i32m1_tu(maskedoff, src, vl);
}

vint32m2_t test_vmv_s_x_i32m2_tu(vint32m2_t maskedoff, int32_t src, size_t vl) {
  return __riscv_vmv_s_x_i32m2_tu(maskedoff, src, vl);
}

vint32m4_t test_vmv_s_x_i32m4_tu(vint32m4_t maskedoff, int32_t src, size_t vl) {
  return __riscv_vmv_s_x_i32m4_tu(maskedoff, src, vl);
}

vint32m8_t test_vmv_s_x_i32m8_tu(vint32m8_t maskedoff, int32_t src, size_t vl) {
  return __riscv_vmv_s_x_i32m8_tu(maskedoff, src, vl);
}

vint64m1_t test_vmv_s_x_i64m1_tu(vint64m1_t maskedoff, int64_t src, size_t vl) {
  return __riscv_vmv_s_x_i64m1_tu(maskedoff, src, vl);
}

vint64m2_t test_vmv_s_x_i64m2_tu(vint64m2_t maskedoff, int64_t src, size_t vl) {
  return __riscv_vmv_s_x_i64m2_tu(maskedoff, src, vl);
}

vint64m4_t test_vmv_s_x_i64m4_tu(vint64m4_t maskedoff, int64_t src, size_t vl) {
  return __riscv_vmv_s_x_i64m4_tu(maskedoff, src, vl);
}

vint64m8_t test_vmv_s_x_i64m8_tu(vint64m8_t maskedoff, int64_t src, size_t vl) {
  return __riscv_vmv_s_x_i64m8_tu(maskedoff, src, vl);
}

vuint8mf8_t test_vmv_s_x_u8mf8_tu(vuint8mf8_t maskedoff, uint8_t src,
                                  size_t vl) {
  return __riscv_vmv_s_x_u8mf8_tu(maskedoff, src, vl);
}

vuint8mf4_t test_vmv_s_x_u8mf4_tu(vuint8mf4_t maskedoff, uint8_t src,
                                  size_t vl) {
  return __riscv_vmv_s_x_u8mf4_tu(maskedoff, src, vl);
}

vuint8mf2_t test_vmv_s_x_u8mf2_tu(vuint8mf2_t maskedoff, uint8_t src,
                                  size_t vl) {
  return __riscv_vmv_s_x_u8mf2_tu(maskedoff, src, vl);
}

vuint8m1_t test_vmv_s_x_u8m1_tu(vuint8m1_t maskedoff, uint8_t src, size_t vl) {
  return __riscv_vmv_s_x_u8m1_tu(maskedoff, src, vl);
}

vuint8m2_t test_vmv_s_x_u8m2_tu(vuint8m2_t maskedoff, uint8_t src, size_t vl) {
  return __riscv_vmv_s_x_u8m2_tu(maskedoff, src, vl);
}

vuint8m4_t test_vmv_s_x_u8m4_tu(vuint8m4_t maskedoff, uint8_t src, size_t vl) {
  return __riscv_vmv_s_x_u8m4_tu(maskedoff, src, vl);
}

vuint8m8_t test_vmv_s_x_u8m8_tu(vuint8m8_t maskedoff, uint8_t src, size_t vl) {
  return __riscv_vmv_s_x_u8m8_tu(maskedoff, src, vl);
}

vuint16mf4_t test_vmv_s_x_u16mf4_tu(vuint16mf4_t maskedoff, uint16_t src,
                                    size_t vl) {
  return __riscv_vmv_s_x_u16mf4_tu(maskedoff, src, vl);
}

vuint16mf2_t test_vmv_s_x_u16mf2_tu(vuint16mf2_t maskedoff, uint16_t src,
                                    size_t vl) {
  return __riscv_vmv_s_x_u16mf2_tu(maskedoff, src, vl);
}

vuint16m1_t test_vmv_s_x_u16m1_tu(vuint16m1_t maskedoff, uint16_t src,
                                  size_t vl) {
  return __riscv_vmv_s_x_u16m1_tu(maskedoff, src, vl);
}

vuint16m2_t test_vmv_s_x_u16m2_tu(vuint16m2_t maskedoff, uint16_t src,
                                  size_t vl) {
  return __riscv_vmv_s_x_u16m2_tu(maskedoff, src, vl);
}

vuint16m4_t test_vmv_s_x_u16m4_tu(vuint16m4_t maskedoff, uint16_t src,
                                  size_t vl) {
  return __riscv_vmv_s_x_u16m4_tu(maskedoff, src, vl);
}

vuint16m8_t test_vmv_s_x_u16m8_tu(vuint16m8_t maskedoff, uint16_t src,
                                  size_t vl) {
  return __riscv_vmv_s_x_u16m8_tu(maskedoff, src, vl);
}

vuint32mf2_t test_vmv_s_x_u32mf2_tu(vuint32mf2_t maskedoff, uint32_t src,
                                    size_t vl) {
  return __riscv_vmv_s_x_u32mf2_tu(maskedoff, src, vl);
}

vuint32m1_t test_vmv_s_x_u32m1_tu(vuint32m1_t maskedoff, uint32_t src,
                                  size_t vl) {
  return __riscv_vmv_s_x_u32m1_tu(maskedoff, src, vl);
}

vuint32m2_t test_vmv_s_x_u32m2_tu(vuint32m2_t maskedoff, uint32_t src,
                                  size_t vl) {
  return __riscv_vmv_s_x_u32m2_tu(maskedoff, src, vl);
}

vuint32m4_t test_vmv_s_x_u32m4_tu(vuint32m4_t maskedoff, uint32_t src,
                                  size_t vl) {
  return __riscv_vmv_s_x_u32m4_tu(maskedoff, src, vl);
}

vuint32m8_t test_vmv_s_x_u32m8_tu(vuint32m8_t maskedoff, uint32_t src,
                                  size_t vl) {
  return __riscv_vmv_s_x_u32m8_tu(maskedoff, src, vl);
}

vuint64m1_t test_vmv_s_x_u64m1_tu(vuint64m1_t maskedoff, uint64_t src,
                                  size_t vl) {
  return __riscv_vmv_s_x_u64m1_tu(maskedoff, src, vl);
}

vuint64m2_t test_vmv_s_x_u64m2_tu(vuint64m2_t maskedoff, uint64_t src,
                                  size_t vl) {
  return __riscv_vmv_s_x_u64m2_tu(maskedoff, src, vl);
}

vuint64m4_t test_vmv_s_x_u64m4_tu(vuint64m4_t maskedoff, uint64_t src,
                                  size_t vl) {
  return __riscv_vmv_s_x_u64m4_tu(maskedoff, src, vl);
}

vuint64m8_t test_vmv_s_x_u64m8_tu(vuint64m8_t maskedoff, uint64_t src,
                                  size_t vl) {
  return __riscv_vmv_s_x_u64m8_tu(maskedoff, src, vl);
}
