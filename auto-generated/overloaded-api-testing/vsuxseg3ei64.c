#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vsuxseg3ei64_v_f16mf4x3(float16_t *base, vuint64m1_t bindex,
                                  vfloat16mf4x3_t v_tuple, size_t vl) {
  return __riscv_vsuxseg3ei64(base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_f16mf2x3(float16_t *base, vuint64m2_t bindex,
                                  vfloat16mf2x3_t v_tuple, size_t vl) {
  return __riscv_vsuxseg3ei64(base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_f16m1x3(float16_t *base, vuint64m4_t bindex,
                                 vfloat16m1x3_t v_tuple, size_t vl) {
  return __riscv_vsuxseg3ei64(base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_f16m2x3(float16_t *base, vuint64m8_t bindex,
                                 vfloat16m2x3_t v_tuple, size_t vl) {
  return __riscv_vsuxseg3ei64(base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_f32mf2x3(float32_t *base, vuint64m1_t bindex,
                                  vfloat32mf2x3_t v_tuple, size_t vl) {
  return __riscv_vsuxseg3ei64(base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_f32m1x3(float32_t *base, vuint64m2_t bindex,
                                 vfloat32m1x3_t v_tuple, size_t vl) {
  return __riscv_vsuxseg3ei64(base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_f32m2x3(float32_t *base, vuint64m4_t bindex,
                                 vfloat32m2x3_t v_tuple, size_t vl) {
  return __riscv_vsuxseg3ei64(base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_f64m1x3(float64_t *base, vuint64m1_t bindex,
                                 vfloat64m1x3_t v_tuple, size_t vl) {
  return __riscv_vsuxseg3ei64(base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_f64m2x3(float64_t *base, vuint64m2_t bindex,
                                 vfloat64m2x3_t v_tuple, size_t vl) {
  return __riscv_vsuxseg3ei64(base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_i8mf8x3(int8_t *base, vuint64m1_t bindex,
                                 vint8mf8x3_t v_tuple, size_t vl) {
  return __riscv_vsuxseg3ei64(base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_i8mf4x3(int8_t *base, vuint64m2_t bindex,
                                 vint8mf4x3_t v_tuple, size_t vl) {
  return __riscv_vsuxseg3ei64(base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_i8mf2x3(int8_t *base, vuint64m4_t bindex,
                                 vint8mf2x3_t v_tuple, size_t vl) {
  return __riscv_vsuxseg3ei64(base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_i8m1x3(int8_t *base, vuint64m8_t bindex,
                                vint8m1x3_t v_tuple, size_t vl) {
  return __riscv_vsuxseg3ei64(base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_i16mf4x3(int16_t *base, vuint64m1_t bindex,
                                  vint16mf4x3_t v_tuple, size_t vl) {
  return __riscv_vsuxseg3ei64(base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_i16mf2x3(int16_t *base, vuint64m2_t bindex,
                                  vint16mf2x3_t v_tuple, size_t vl) {
  return __riscv_vsuxseg3ei64(base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_i16m1x3(int16_t *base, vuint64m4_t bindex,
                                 vint16m1x3_t v_tuple, size_t vl) {
  return __riscv_vsuxseg3ei64(base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_i16m2x3(int16_t *base, vuint64m8_t bindex,
                                 vint16m2x3_t v_tuple, size_t vl) {
  return __riscv_vsuxseg3ei64(base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_i32mf2x3(int32_t *base, vuint64m1_t bindex,
                                  vint32mf2x3_t v_tuple, size_t vl) {
  return __riscv_vsuxseg3ei64(base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_i32m1x3(int32_t *base, vuint64m2_t bindex,
                                 vint32m1x3_t v_tuple, size_t vl) {
  return __riscv_vsuxseg3ei64(base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_i32m2x3(int32_t *base, vuint64m4_t bindex,
                                 vint32m2x3_t v_tuple, size_t vl) {
  return __riscv_vsuxseg3ei64(base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_i64m1x3(int64_t *base, vuint64m1_t bindex,
                                 vint64m1x3_t v_tuple, size_t vl) {
  return __riscv_vsuxseg3ei64(base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_i64m2x3(int64_t *base, vuint64m2_t bindex,
                                 vint64m2x3_t v_tuple, size_t vl) {
  return __riscv_vsuxseg3ei64(base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_u8mf8x3(uint8_t *base, vuint64m1_t bindex,
                                 vuint8mf8x3_t v_tuple, size_t vl) {
  return __riscv_vsuxseg3ei64(base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_u8mf4x3(uint8_t *base, vuint64m2_t bindex,
                                 vuint8mf4x3_t v_tuple, size_t vl) {
  return __riscv_vsuxseg3ei64(base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_u8mf2x3(uint8_t *base, vuint64m4_t bindex,
                                 vuint8mf2x3_t v_tuple, size_t vl) {
  return __riscv_vsuxseg3ei64(base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_u8m1x3(uint8_t *base, vuint64m8_t bindex,
                                vuint8m1x3_t v_tuple, size_t vl) {
  return __riscv_vsuxseg3ei64(base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_u16mf4x3(uint16_t *base, vuint64m1_t bindex,
                                  vuint16mf4x3_t v_tuple, size_t vl) {
  return __riscv_vsuxseg3ei64(base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_u16mf2x3(uint16_t *base, vuint64m2_t bindex,
                                  vuint16mf2x3_t v_tuple, size_t vl) {
  return __riscv_vsuxseg3ei64(base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_u16m1x3(uint16_t *base, vuint64m4_t bindex,
                                 vuint16m1x3_t v_tuple, size_t vl) {
  return __riscv_vsuxseg3ei64(base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_u16m2x3(uint16_t *base, vuint64m8_t bindex,
                                 vuint16m2x3_t v_tuple, size_t vl) {
  return __riscv_vsuxseg3ei64(base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_u32mf2x3(uint32_t *base, vuint64m1_t bindex,
                                  vuint32mf2x3_t v_tuple, size_t vl) {
  return __riscv_vsuxseg3ei64(base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_u32m1x3(uint32_t *base, vuint64m2_t bindex,
                                 vuint32m1x3_t v_tuple, size_t vl) {
  return __riscv_vsuxseg3ei64(base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_u32m2x3(uint32_t *base, vuint64m4_t bindex,
                                 vuint32m2x3_t v_tuple, size_t vl) {
  return __riscv_vsuxseg3ei64(base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_u64m1x3(uint64_t *base, vuint64m1_t bindex,
                                 vuint64m1x3_t v_tuple, size_t vl) {
  return __riscv_vsuxseg3ei64(base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_u64m2x3(uint64_t *base, vuint64m2_t bindex,
                                 vuint64m2x3_t v_tuple, size_t vl) {
  return __riscv_vsuxseg3ei64(base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_f16mf4x3_m(vbool64_t mask, float16_t *base,
                                    vuint64m1_t bindex, vfloat16mf4x3_t v_tuple,
                                    size_t vl) {
  return __riscv_vsuxseg3ei64(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_f16mf2x3_m(vbool32_t mask, float16_t *base,
                                    vuint64m2_t bindex, vfloat16mf2x3_t v_tuple,
                                    size_t vl) {
  return __riscv_vsuxseg3ei64(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_f16m1x3_m(vbool16_t mask, float16_t *base,
                                   vuint64m4_t bindex, vfloat16m1x3_t v_tuple,
                                   size_t vl) {
  return __riscv_vsuxseg3ei64(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_f16m2x3_m(vbool8_t mask, float16_t *base,
                                   vuint64m8_t bindex, vfloat16m2x3_t v_tuple,
                                   size_t vl) {
  return __riscv_vsuxseg3ei64(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_f32mf2x3_m(vbool64_t mask, float32_t *base,
                                    vuint64m1_t bindex, vfloat32mf2x3_t v_tuple,
                                    size_t vl) {
  return __riscv_vsuxseg3ei64(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_f32m1x3_m(vbool32_t mask, float32_t *base,
                                   vuint64m2_t bindex, vfloat32m1x3_t v_tuple,
                                   size_t vl) {
  return __riscv_vsuxseg3ei64(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_f32m2x3_m(vbool16_t mask, float32_t *base,
                                   vuint64m4_t bindex, vfloat32m2x3_t v_tuple,
                                   size_t vl) {
  return __riscv_vsuxseg3ei64(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_f64m1x3_m(vbool64_t mask, float64_t *base,
                                   vuint64m1_t bindex, vfloat64m1x3_t v_tuple,
                                   size_t vl) {
  return __riscv_vsuxseg3ei64(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_f64m2x3_m(vbool32_t mask, float64_t *base,
                                   vuint64m2_t bindex, vfloat64m2x3_t v_tuple,
                                   size_t vl) {
  return __riscv_vsuxseg3ei64(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_i8mf8x3_m(vbool64_t mask, int8_t *base,
                                   vuint64m1_t bindex, vint8mf8x3_t v_tuple,
                                   size_t vl) {
  return __riscv_vsuxseg3ei64(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_i8mf4x3_m(vbool32_t mask, int8_t *base,
                                   vuint64m2_t bindex, vint8mf4x3_t v_tuple,
                                   size_t vl) {
  return __riscv_vsuxseg3ei64(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_i8mf2x3_m(vbool16_t mask, int8_t *base,
                                   vuint64m4_t bindex, vint8mf2x3_t v_tuple,
                                   size_t vl) {
  return __riscv_vsuxseg3ei64(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_i8m1x3_m(vbool8_t mask, int8_t *base,
                                  vuint64m8_t bindex, vint8m1x3_t v_tuple,
                                  size_t vl) {
  return __riscv_vsuxseg3ei64(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_i16mf4x3_m(vbool64_t mask, int16_t *base,
                                    vuint64m1_t bindex, vint16mf4x3_t v_tuple,
                                    size_t vl) {
  return __riscv_vsuxseg3ei64(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_i16mf2x3_m(vbool32_t mask, int16_t *base,
                                    vuint64m2_t bindex, vint16mf2x3_t v_tuple,
                                    size_t vl) {
  return __riscv_vsuxseg3ei64(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_i16m1x3_m(vbool16_t mask, int16_t *base,
                                   vuint64m4_t bindex, vint16m1x3_t v_tuple,
                                   size_t vl) {
  return __riscv_vsuxseg3ei64(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_i16m2x3_m(vbool8_t mask, int16_t *base,
                                   vuint64m8_t bindex, vint16m2x3_t v_tuple,
                                   size_t vl) {
  return __riscv_vsuxseg3ei64(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_i32mf2x3_m(vbool64_t mask, int32_t *base,
                                    vuint64m1_t bindex, vint32mf2x3_t v_tuple,
                                    size_t vl) {
  return __riscv_vsuxseg3ei64(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_i32m1x3_m(vbool32_t mask, int32_t *base,
                                   vuint64m2_t bindex, vint32m1x3_t v_tuple,
                                   size_t vl) {
  return __riscv_vsuxseg3ei64(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_i32m2x3_m(vbool16_t mask, int32_t *base,
                                   vuint64m4_t bindex, vint32m2x3_t v_tuple,
                                   size_t vl) {
  return __riscv_vsuxseg3ei64(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_i64m1x3_m(vbool64_t mask, int64_t *base,
                                   vuint64m1_t bindex, vint64m1x3_t v_tuple,
                                   size_t vl) {
  return __riscv_vsuxseg3ei64(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_i64m2x3_m(vbool32_t mask, int64_t *base,
                                   vuint64m2_t bindex, vint64m2x3_t v_tuple,
                                   size_t vl) {
  return __riscv_vsuxseg3ei64(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_u8mf8x3_m(vbool64_t mask, uint8_t *base,
                                   vuint64m1_t bindex, vuint8mf8x3_t v_tuple,
                                   size_t vl) {
  return __riscv_vsuxseg3ei64(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_u8mf4x3_m(vbool32_t mask, uint8_t *base,
                                   vuint64m2_t bindex, vuint8mf4x3_t v_tuple,
                                   size_t vl) {
  return __riscv_vsuxseg3ei64(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_u8mf2x3_m(vbool16_t mask, uint8_t *base,
                                   vuint64m4_t bindex, vuint8mf2x3_t v_tuple,
                                   size_t vl) {
  return __riscv_vsuxseg3ei64(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_u8m1x3_m(vbool8_t mask, uint8_t *base,
                                  vuint64m8_t bindex, vuint8m1x3_t v_tuple,
                                  size_t vl) {
  return __riscv_vsuxseg3ei64(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_u16mf4x3_m(vbool64_t mask, uint16_t *base,
                                    vuint64m1_t bindex, vuint16mf4x3_t v_tuple,
                                    size_t vl) {
  return __riscv_vsuxseg3ei64(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_u16mf2x3_m(vbool32_t mask, uint16_t *base,
                                    vuint64m2_t bindex, vuint16mf2x3_t v_tuple,
                                    size_t vl) {
  return __riscv_vsuxseg3ei64(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_u16m1x3_m(vbool16_t mask, uint16_t *base,
                                   vuint64m4_t bindex, vuint16m1x3_t v_tuple,
                                   size_t vl) {
  return __riscv_vsuxseg3ei64(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_u16m2x3_m(vbool8_t mask, uint16_t *base,
                                   vuint64m8_t bindex, vuint16m2x3_t v_tuple,
                                   size_t vl) {
  return __riscv_vsuxseg3ei64(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_u32mf2x3_m(vbool64_t mask, uint32_t *base,
                                    vuint64m1_t bindex, vuint32mf2x3_t v_tuple,
                                    size_t vl) {
  return __riscv_vsuxseg3ei64(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_u32m1x3_m(vbool32_t mask, uint32_t *base,
                                   vuint64m2_t bindex, vuint32m1x3_t v_tuple,
                                   size_t vl) {
  return __riscv_vsuxseg3ei64(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_u32m2x3_m(vbool16_t mask, uint32_t *base,
                                   vuint64m4_t bindex, vuint32m2x3_t v_tuple,
                                   size_t vl) {
  return __riscv_vsuxseg3ei64(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_u64m1x3_m(vbool64_t mask, uint64_t *base,
                                   vuint64m1_t bindex, vuint64m1x3_t v_tuple,
                                   size_t vl) {
  return __riscv_vsuxseg3ei64(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg3ei64_v_u64m2x3_m(vbool32_t mask, uint64_t *base,
                                   vuint64m2_t bindex, vuint64m2x3_t v_tuple,
                                   size_t vl) {
  return __riscv_vsuxseg3ei64(mask, base, bindex, v_tuple, vl);
}
