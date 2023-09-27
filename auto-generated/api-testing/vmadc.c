#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vbool64_t test_vmadc_vvm_i8mf8_b64(vint8mf8_t vs2, vint8mf8_t vs1, vbool64_t v0,
                                   size_t vl) {
  return __riscv_vmadc_vvm_i8mf8_b64(vs2, vs1, v0, vl);
}

vbool64_t test_vmadc_vxm_i8mf8_b64(vint8mf8_t vs2, int8_t rs1, vbool64_t v0,
                                   size_t vl) {
  return __riscv_vmadc_vxm_i8mf8_b64(vs2, rs1, v0, vl);
}

vbool64_t test_vmadc_vv_i8mf8_b64(vint8mf8_t vs2, vint8mf8_t vs1, size_t vl) {
  return __riscv_vmadc_vv_i8mf8_b64(vs2, vs1, vl);
}

vbool64_t test_vmadc_vx_i8mf8_b64(vint8mf8_t vs2, int8_t rs1, size_t vl) {
  return __riscv_vmadc_vx_i8mf8_b64(vs2, rs1, vl);
}

vbool32_t test_vmadc_vvm_i8mf4_b32(vint8mf4_t vs2, vint8mf4_t vs1, vbool32_t v0,
                                   size_t vl) {
  return __riscv_vmadc_vvm_i8mf4_b32(vs2, vs1, v0, vl);
}

vbool32_t test_vmadc_vxm_i8mf4_b32(vint8mf4_t vs2, int8_t rs1, vbool32_t v0,
                                   size_t vl) {
  return __riscv_vmadc_vxm_i8mf4_b32(vs2, rs1, v0, vl);
}

vbool32_t test_vmadc_vv_i8mf4_b32(vint8mf4_t vs2, vint8mf4_t vs1, size_t vl) {
  return __riscv_vmadc_vv_i8mf4_b32(vs2, vs1, vl);
}

vbool32_t test_vmadc_vx_i8mf4_b32(vint8mf4_t vs2, int8_t rs1, size_t vl) {
  return __riscv_vmadc_vx_i8mf4_b32(vs2, rs1, vl);
}

vbool16_t test_vmadc_vvm_i8mf2_b16(vint8mf2_t vs2, vint8mf2_t vs1, vbool16_t v0,
                                   size_t vl) {
  return __riscv_vmadc_vvm_i8mf2_b16(vs2, vs1, v0, vl);
}

vbool16_t test_vmadc_vxm_i8mf2_b16(vint8mf2_t vs2, int8_t rs1, vbool16_t v0,
                                   size_t vl) {
  return __riscv_vmadc_vxm_i8mf2_b16(vs2, rs1, v0, vl);
}

vbool16_t test_vmadc_vv_i8mf2_b16(vint8mf2_t vs2, vint8mf2_t vs1, size_t vl) {
  return __riscv_vmadc_vv_i8mf2_b16(vs2, vs1, vl);
}

vbool16_t test_vmadc_vx_i8mf2_b16(vint8mf2_t vs2, int8_t rs1, size_t vl) {
  return __riscv_vmadc_vx_i8mf2_b16(vs2, rs1, vl);
}

vbool8_t test_vmadc_vvm_i8m1_b8(vint8m1_t vs2, vint8m1_t vs1, vbool8_t v0,
                                size_t vl) {
  return __riscv_vmadc_vvm_i8m1_b8(vs2, vs1, v0, vl);
}

vbool8_t test_vmadc_vxm_i8m1_b8(vint8m1_t vs2, int8_t rs1, vbool8_t v0,
                                size_t vl) {
  return __riscv_vmadc_vxm_i8m1_b8(vs2, rs1, v0, vl);
}

vbool8_t test_vmadc_vv_i8m1_b8(vint8m1_t vs2, vint8m1_t vs1, size_t vl) {
  return __riscv_vmadc_vv_i8m1_b8(vs2, vs1, vl);
}

vbool8_t test_vmadc_vx_i8m1_b8(vint8m1_t vs2, int8_t rs1, size_t vl) {
  return __riscv_vmadc_vx_i8m1_b8(vs2, rs1, vl);
}

vbool4_t test_vmadc_vvm_i8m2_b4(vint8m2_t vs2, vint8m2_t vs1, vbool4_t v0,
                                size_t vl) {
  return __riscv_vmadc_vvm_i8m2_b4(vs2, vs1, v0, vl);
}

vbool4_t test_vmadc_vxm_i8m2_b4(vint8m2_t vs2, int8_t rs1, vbool4_t v0,
                                size_t vl) {
  return __riscv_vmadc_vxm_i8m2_b4(vs2, rs1, v0, vl);
}

vbool4_t test_vmadc_vv_i8m2_b4(vint8m2_t vs2, vint8m2_t vs1, size_t vl) {
  return __riscv_vmadc_vv_i8m2_b4(vs2, vs1, vl);
}

vbool4_t test_vmadc_vx_i8m2_b4(vint8m2_t vs2, int8_t rs1, size_t vl) {
  return __riscv_vmadc_vx_i8m2_b4(vs2, rs1, vl);
}

vbool2_t test_vmadc_vvm_i8m4_b2(vint8m4_t vs2, vint8m4_t vs1, vbool2_t v0,
                                size_t vl) {
  return __riscv_vmadc_vvm_i8m4_b2(vs2, vs1, v0, vl);
}

vbool2_t test_vmadc_vxm_i8m4_b2(vint8m4_t vs2, int8_t rs1, vbool2_t v0,
                                size_t vl) {
  return __riscv_vmadc_vxm_i8m4_b2(vs2, rs1, v0, vl);
}

vbool2_t test_vmadc_vv_i8m4_b2(vint8m4_t vs2, vint8m4_t vs1, size_t vl) {
  return __riscv_vmadc_vv_i8m4_b2(vs2, vs1, vl);
}

vbool2_t test_vmadc_vx_i8m4_b2(vint8m4_t vs2, int8_t rs1, size_t vl) {
  return __riscv_vmadc_vx_i8m4_b2(vs2, rs1, vl);
}

vbool1_t test_vmadc_vvm_i8m8_b1(vint8m8_t vs2, vint8m8_t vs1, vbool1_t v0,
                                size_t vl) {
  return __riscv_vmadc_vvm_i8m8_b1(vs2, vs1, v0, vl);
}

vbool1_t test_vmadc_vxm_i8m8_b1(vint8m8_t vs2, int8_t rs1, vbool1_t v0,
                                size_t vl) {
  return __riscv_vmadc_vxm_i8m8_b1(vs2, rs1, v0, vl);
}

vbool1_t test_vmadc_vv_i8m8_b1(vint8m8_t vs2, vint8m8_t vs1, size_t vl) {
  return __riscv_vmadc_vv_i8m8_b1(vs2, vs1, vl);
}

vbool1_t test_vmadc_vx_i8m8_b1(vint8m8_t vs2, int8_t rs1, size_t vl) {
  return __riscv_vmadc_vx_i8m8_b1(vs2, rs1, vl);
}

vbool64_t test_vmadc_vvm_i16mf4_b64(vint16mf4_t vs2, vint16mf4_t vs1,
                                    vbool64_t v0, size_t vl) {
  return __riscv_vmadc_vvm_i16mf4_b64(vs2, vs1, v0, vl);
}

vbool64_t test_vmadc_vxm_i16mf4_b64(vint16mf4_t vs2, int16_t rs1, vbool64_t v0,
                                    size_t vl) {
  return __riscv_vmadc_vxm_i16mf4_b64(vs2, rs1, v0, vl);
}

vbool64_t test_vmadc_vv_i16mf4_b64(vint16mf4_t vs2, vint16mf4_t vs1,
                                   size_t vl) {
  return __riscv_vmadc_vv_i16mf4_b64(vs2, vs1, vl);
}

vbool64_t test_vmadc_vx_i16mf4_b64(vint16mf4_t vs2, int16_t rs1, size_t vl) {
  return __riscv_vmadc_vx_i16mf4_b64(vs2, rs1, vl);
}

vbool32_t test_vmadc_vvm_i16mf2_b32(vint16mf2_t vs2, vint16mf2_t vs1,
                                    vbool32_t v0, size_t vl) {
  return __riscv_vmadc_vvm_i16mf2_b32(vs2, vs1, v0, vl);
}

vbool32_t test_vmadc_vxm_i16mf2_b32(vint16mf2_t vs2, int16_t rs1, vbool32_t v0,
                                    size_t vl) {
  return __riscv_vmadc_vxm_i16mf2_b32(vs2, rs1, v0, vl);
}

vbool32_t test_vmadc_vv_i16mf2_b32(vint16mf2_t vs2, vint16mf2_t vs1,
                                   size_t vl) {
  return __riscv_vmadc_vv_i16mf2_b32(vs2, vs1, vl);
}

vbool32_t test_vmadc_vx_i16mf2_b32(vint16mf2_t vs2, int16_t rs1, size_t vl) {
  return __riscv_vmadc_vx_i16mf2_b32(vs2, rs1, vl);
}

vbool16_t test_vmadc_vvm_i16m1_b16(vint16m1_t vs2, vint16m1_t vs1, vbool16_t v0,
                                   size_t vl) {
  return __riscv_vmadc_vvm_i16m1_b16(vs2, vs1, v0, vl);
}

vbool16_t test_vmadc_vxm_i16m1_b16(vint16m1_t vs2, int16_t rs1, vbool16_t v0,
                                   size_t vl) {
  return __riscv_vmadc_vxm_i16m1_b16(vs2, rs1, v0, vl);
}

vbool16_t test_vmadc_vv_i16m1_b16(vint16m1_t vs2, vint16m1_t vs1, size_t vl) {
  return __riscv_vmadc_vv_i16m1_b16(vs2, vs1, vl);
}

vbool16_t test_vmadc_vx_i16m1_b16(vint16m1_t vs2, int16_t rs1, size_t vl) {
  return __riscv_vmadc_vx_i16m1_b16(vs2, rs1, vl);
}

vbool8_t test_vmadc_vvm_i16m2_b8(vint16m2_t vs2, vint16m2_t vs1, vbool8_t v0,
                                 size_t vl) {
  return __riscv_vmadc_vvm_i16m2_b8(vs2, vs1, v0, vl);
}

vbool8_t test_vmadc_vxm_i16m2_b8(vint16m2_t vs2, int16_t rs1, vbool8_t v0,
                                 size_t vl) {
  return __riscv_vmadc_vxm_i16m2_b8(vs2, rs1, v0, vl);
}

vbool8_t test_vmadc_vv_i16m2_b8(vint16m2_t vs2, vint16m2_t vs1, size_t vl) {
  return __riscv_vmadc_vv_i16m2_b8(vs2, vs1, vl);
}

vbool8_t test_vmadc_vx_i16m2_b8(vint16m2_t vs2, int16_t rs1, size_t vl) {
  return __riscv_vmadc_vx_i16m2_b8(vs2, rs1, vl);
}

vbool4_t test_vmadc_vvm_i16m4_b4(vint16m4_t vs2, vint16m4_t vs1, vbool4_t v0,
                                 size_t vl) {
  return __riscv_vmadc_vvm_i16m4_b4(vs2, vs1, v0, vl);
}

vbool4_t test_vmadc_vxm_i16m4_b4(vint16m4_t vs2, int16_t rs1, vbool4_t v0,
                                 size_t vl) {
  return __riscv_vmadc_vxm_i16m4_b4(vs2, rs1, v0, vl);
}

vbool4_t test_vmadc_vv_i16m4_b4(vint16m4_t vs2, vint16m4_t vs1, size_t vl) {
  return __riscv_vmadc_vv_i16m4_b4(vs2, vs1, vl);
}

vbool4_t test_vmadc_vx_i16m4_b4(vint16m4_t vs2, int16_t rs1, size_t vl) {
  return __riscv_vmadc_vx_i16m4_b4(vs2, rs1, vl);
}

vbool2_t test_vmadc_vvm_i16m8_b2(vint16m8_t vs2, vint16m8_t vs1, vbool2_t v0,
                                 size_t vl) {
  return __riscv_vmadc_vvm_i16m8_b2(vs2, vs1, v0, vl);
}

vbool2_t test_vmadc_vxm_i16m8_b2(vint16m8_t vs2, int16_t rs1, vbool2_t v0,
                                 size_t vl) {
  return __riscv_vmadc_vxm_i16m8_b2(vs2, rs1, v0, vl);
}

vbool2_t test_vmadc_vv_i16m8_b2(vint16m8_t vs2, vint16m8_t vs1, size_t vl) {
  return __riscv_vmadc_vv_i16m8_b2(vs2, vs1, vl);
}

vbool2_t test_vmadc_vx_i16m8_b2(vint16m8_t vs2, int16_t rs1, size_t vl) {
  return __riscv_vmadc_vx_i16m8_b2(vs2, rs1, vl);
}

vbool64_t test_vmadc_vvm_i32mf2_b64(vint32mf2_t vs2, vint32mf2_t vs1,
                                    vbool64_t v0, size_t vl) {
  return __riscv_vmadc_vvm_i32mf2_b64(vs2, vs1, v0, vl);
}

vbool64_t test_vmadc_vxm_i32mf2_b64(vint32mf2_t vs2, int32_t rs1, vbool64_t v0,
                                    size_t vl) {
  return __riscv_vmadc_vxm_i32mf2_b64(vs2, rs1, v0, vl);
}

vbool64_t test_vmadc_vv_i32mf2_b64(vint32mf2_t vs2, vint32mf2_t vs1,
                                   size_t vl) {
  return __riscv_vmadc_vv_i32mf2_b64(vs2, vs1, vl);
}

vbool64_t test_vmadc_vx_i32mf2_b64(vint32mf2_t vs2, int32_t rs1, size_t vl) {
  return __riscv_vmadc_vx_i32mf2_b64(vs2, rs1, vl);
}

vbool32_t test_vmadc_vvm_i32m1_b32(vint32m1_t vs2, vint32m1_t vs1, vbool32_t v0,
                                   size_t vl) {
  return __riscv_vmadc_vvm_i32m1_b32(vs2, vs1, v0, vl);
}

vbool32_t test_vmadc_vxm_i32m1_b32(vint32m1_t vs2, int32_t rs1, vbool32_t v0,
                                   size_t vl) {
  return __riscv_vmadc_vxm_i32m1_b32(vs2, rs1, v0, vl);
}

vbool32_t test_vmadc_vv_i32m1_b32(vint32m1_t vs2, vint32m1_t vs1, size_t vl) {
  return __riscv_vmadc_vv_i32m1_b32(vs2, vs1, vl);
}

vbool32_t test_vmadc_vx_i32m1_b32(vint32m1_t vs2, int32_t rs1, size_t vl) {
  return __riscv_vmadc_vx_i32m1_b32(vs2, rs1, vl);
}

vbool16_t test_vmadc_vvm_i32m2_b16(vint32m2_t vs2, vint32m2_t vs1, vbool16_t v0,
                                   size_t vl) {
  return __riscv_vmadc_vvm_i32m2_b16(vs2, vs1, v0, vl);
}

vbool16_t test_vmadc_vxm_i32m2_b16(vint32m2_t vs2, int32_t rs1, vbool16_t v0,
                                   size_t vl) {
  return __riscv_vmadc_vxm_i32m2_b16(vs2, rs1, v0, vl);
}

vbool16_t test_vmadc_vv_i32m2_b16(vint32m2_t vs2, vint32m2_t vs1, size_t vl) {
  return __riscv_vmadc_vv_i32m2_b16(vs2, vs1, vl);
}

vbool16_t test_vmadc_vx_i32m2_b16(vint32m2_t vs2, int32_t rs1, size_t vl) {
  return __riscv_vmadc_vx_i32m2_b16(vs2, rs1, vl);
}

vbool8_t test_vmadc_vvm_i32m4_b8(vint32m4_t vs2, vint32m4_t vs1, vbool8_t v0,
                                 size_t vl) {
  return __riscv_vmadc_vvm_i32m4_b8(vs2, vs1, v0, vl);
}

vbool8_t test_vmadc_vxm_i32m4_b8(vint32m4_t vs2, int32_t rs1, vbool8_t v0,
                                 size_t vl) {
  return __riscv_vmadc_vxm_i32m4_b8(vs2, rs1, v0, vl);
}

vbool8_t test_vmadc_vv_i32m4_b8(vint32m4_t vs2, vint32m4_t vs1, size_t vl) {
  return __riscv_vmadc_vv_i32m4_b8(vs2, vs1, vl);
}

vbool8_t test_vmadc_vx_i32m4_b8(vint32m4_t vs2, int32_t rs1, size_t vl) {
  return __riscv_vmadc_vx_i32m4_b8(vs2, rs1, vl);
}

vbool4_t test_vmadc_vvm_i32m8_b4(vint32m8_t vs2, vint32m8_t vs1, vbool4_t v0,
                                 size_t vl) {
  return __riscv_vmadc_vvm_i32m8_b4(vs2, vs1, v0, vl);
}

vbool4_t test_vmadc_vxm_i32m8_b4(vint32m8_t vs2, int32_t rs1, vbool4_t v0,
                                 size_t vl) {
  return __riscv_vmadc_vxm_i32m8_b4(vs2, rs1, v0, vl);
}

vbool4_t test_vmadc_vv_i32m8_b4(vint32m8_t vs2, vint32m8_t vs1, size_t vl) {
  return __riscv_vmadc_vv_i32m8_b4(vs2, vs1, vl);
}

vbool4_t test_vmadc_vx_i32m8_b4(vint32m8_t vs2, int32_t rs1, size_t vl) {
  return __riscv_vmadc_vx_i32m8_b4(vs2, rs1, vl);
}

vbool64_t test_vmadc_vvm_i64m1_b64(vint64m1_t vs2, vint64m1_t vs1, vbool64_t v0,
                                   size_t vl) {
  return __riscv_vmadc_vvm_i64m1_b64(vs2, vs1, v0, vl);
}

vbool64_t test_vmadc_vxm_i64m1_b64(vint64m1_t vs2, int64_t rs1, vbool64_t v0,
                                   size_t vl) {
  return __riscv_vmadc_vxm_i64m1_b64(vs2, rs1, v0, vl);
}

vbool64_t test_vmadc_vv_i64m1_b64(vint64m1_t vs2, vint64m1_t vs1, size_t vl) {
  return __riscv_vmadc_vv_i64m1_b64(vs2, vs1, vl);
}

vbool64_t test_vmadc_vx_i64m1_b64(vint64m1_t vs2, int64_t rs1, size_t vl) {
  return __riscv_vmadc_vx_i64m1_b64(vs2, rs1, vl);
}

vbool32_t test_vmadc_vvm_i64m2_b32(vint64m2_t vs2, vint64m2_t vs1, vbool32_t v0,
                                   size_t vl) {
  return __riscv_vmadc_vvm_i64m2_b32(vs2, vs1, v0, vl);
}

vbool32_t test_vmadc_vxm_i64m2_b32(vint64m2_t vs2, int64_t rs1, vbool32_t v0,
                                   size_t vl) {
  return __riscv_vmadc_vxm_i64m2_b32(vs2, rs1, v0, vl);
}

vbool32_t test_vmadc_vv_i64m2_b32(vint64m2_t vs2, vint64m2_t vs1, size_t vl) {
  return __riscv_vmadc_vv_i64m2_b32(vs2, vs1, vl);
}

vbool32_t test_vmadc_vx_i64m2_b32(vint64m2_t vs2, int64_t rs1, size_t vl) {
  return __riscv_vmadc_vx_i64m2_b32(vs2, rs1, vl);
}

vbool16_t test_vmadc_vvm_i64m4_b16(vint64m4_t vs2, vint64m4_t vs1, vbool16_t v0,
                                   size_t vl) {
  return __riscv_vmadc_vvm_i64m4_b16(vs2, vs1, v0, vl);
}

vbool16_t test_vmadc_vxm_i64m4_b16(vint64m4_t vs2, int64_t rs1, vbool16_t v0,
                                   size_t vl) {
  return __riscv_vmadc_vxm_i64m4_b16(vs2, rs1, v0, vl);
}

vbool16_t test_vmadc_vv_i64m4_b16(vint64m4_t vs2, vint64m4_t vs1, size_t vl) {
  return __riscv_vmadc_vv_i64m4_b16(vs2, vs1, vl);
}

vbool16_t test_vmadc_vx_i64m4_b16(vint64m4_t vs2, int64_t rs1, size_t vl) {
  return __riscv_vmadc_vx_i64m4_b16(vs2, rs1, vl);
}

vbool8_t test_vmadc_vvm_i64m8_b8(vint64m8_t vs2, vint64m8_t vs1, vbool8_t v0,
                                 size_t vl) {
  return __riscv_vmadc_vvm_i64m8_b8(vs2, vs1, v0, vl);
}

vbool8_t test_vmadc_vxm_i64m8_b8(vint64m8_t vs2, int64_t rs1, vbool8_t v0,
                                 size_t vl) {
  return __riscv_vmadc_vxm_i64m8_b8(vs2, rs1, v0, vl);
}

vbool8_t test_vmadc_vv_i64m8_b8(vint64m8_t vs2, vint64m8_t vs1, size_t vl) {
  return __riscv_vmadc_vv_i64m8_b8(vs2, vs1, vl);
}

vbool8_t test_vmadc_vx_i64m8_b8(vint64m8_t vs2, int64_t rs1, size_t vl) {
  return __riscv_vmadc_vx_i64m8_b8(vs2, rs1, vl);
}

vbool64_t test_vmadc_vvm_u8mf8_b64(vuint8mf8_t vs2, vuint8mf8_t vs1,
                                   vbool64_t v0, size_t vl) {
  return __riscv_vmadc_vvm_u8mf8_b64(vs2, vs1, v0, vl);
}

vbool64_t test_vmadc_vxm_u8mf8_b64(vuint8mf8_t vs2, uint8_t rs1, vbool64_t v0,
                                   size_t vl) {
  return __riscv_vmadc_vxm_u8mf8_b64(vs2, rs1, v0, vl);
}

vbool64_t test_vmadc_vv_u8mf8_b64(vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl) {
  return __riscv_vmadc_vv_u8mf8_b64(vs2, vs1, vl);
}

vbool64_t test_vmadc_vx_u8mf8_b64(vuint8mf8_t vs2, uint8_t rs1, size_t vl) {
  return __riscv_vmadc_vx_u8mf8_b64(vs2, rs1, vl);
}

vbool32_t test_vmadc_vvm_u8mf4_b32(vuint8mf4_t vs2, vuint8mf4_t vs1,
                                   vbool32_t v0, size_t vl) {
  return __riscv_vmadc_vvm_u8mf4_b32(vs2, vs1, v0, vl);
}

vbool32_t test_vmadc_vxm_u8mf4_b32(vuint8mf4_t vs2, uint8_t rs1, vbool32_t v0,
                                   size_t vl) {
  return __riscv_vmadc_vxm_u8mf4_b32(vs2, rs1, v0, vl);
}

vbool32_t test_vmadc_vv_u8mf4_b32(vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl) {
  return __riscv_vmadc_vv_u8mf4_b32(vs2, vs1, vl);
}

vbool32_t test_vmadc_vx_u8mf4_b32(vuint8mf4_t vs2, uint8_t rs1, size_t vl) {
  return __riscv_vmadc_vx_u8mf4_b32(vs2, rs1, vl);
}

vbool16_t test_vmadc_vvm_u8mf2_b16(vuint8mf2_t vs2, vuint8mf2_t vs1,
                                   vbool16_t v0, size_t vl) {
  return __riscv_vmadc_vvm_u8mf2_b16(vs2, vs1, v0, vl);
}

vbool16_t test_vmadc_vxm_u8mf2_b16(vuint8mf2_t vs2, uint8_t rs1, vbool16_t v0,
                                   size_t vl) {
  return __riscv_vmadc_vxm_u8mf2_b16(vs2, rs1, v0, vl);
}

vbool16_t test_vmadc_vv_u8mf2_b16(vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl) {
  return __riscv_vmadc_vv_u8mf2_b16(vs2, vs1, vl);
}

vbool16_t test_vmadc_vx_u8mf2_b16(vuint8mf2_t vs2, uint8_t rs1, size_t vl) {
  return __riscv_vmadc_vx_u8mf2_b16(vs2, rs1, vl);
}

vbool8_t test_vmadc_vvm_u8m1_b8(vuint8m1_t vs2, vuint8m1_t vs1, vbool8_t v0,
                                size_t vl) {
  return __riscv_vmadc_vvm_u8m1_b8(vs2, vs1, v0, vl);
}

vbool8_t test_vmadc_vxm_u8m1_b8(vuint8m1_t vs2, uint8_t rs1, vbool8_t v0,
                                size_t vl) {
  return __riscv_vmadc_vxm_u8m1_b8(vs2, rs1, v0, vl);
}

vbool8_t test_vmadc_vv_u8m1_b8(vuint8m1_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vmadc_vv_u8m1_b8(vs2, vs1, vl);
}

vbool8_t test_vmadc_vx_u8m1_b8(vuint8m1_t vs2, uint8_t rs1, size_t vl) {
  return __riscv_vmadc_vx_u8m1_b8(vs2, rs1, vl);
}

vbool4_t test_vmadc_vvm_u8m2_b4(vuint8m2_t vs2, vuint8m2_t vs1, vbool4_t v0,
                                size_t vl) {
  return __riscv_vmadc_vvm_u8m2_b4(vs2, vs1, v0, vl);
}

vbool4_t test_vmadc_vxm_u8m2_b4(vuint8m2_t vs2, uint8_t rs1, vbool4_t v0,
                                size_t vl) {
  return __riscv_vmadc_vxm_u8m2_b4(vs2, rs1, v0, vl);
}

vbool4_t test_vmadc_vv_u8m2_b4(vuint8m2_t vs2, vuint8m2_t vs1, size_t vl) {
  return __riscv_vmadc_vv_u8m2_b4(vs2, vs1, vl);
}

vbool4_t test_vmadc_vx_u8m2_b4(vuint8m2_t vs2, uint8_t rs1, size_t vl) {
  return __riscv_vmadc_vx_u8m2_b4(vs2, rs1, vl);
}

vbool2_t test_vmadc_vvm_u8m4_b2(vuint8m4_t vs2, vuint8m4_t vs1, vbool2_t v0,
                                size_t vl) {
  return __riscv_vmadc_vvm_u8m4_b2(vs2, vs1, v0, vl);
}

vbool2_t test_vmadc_vxm_u8m4_b2(vuint8m4_t vs2, uint8_t rs1, vbool2_t v0,
                                size_t vl) {
  return __riscv_vmadc_vxm_u8m4_b2(vs2, rs1, v0, vl);
}

vbool2_t test_vmadc_vv_u8m4_b2(vuint8m4_t vs2, vuint8m4_t vs1, size_t vl) {
  return __riscv_vmadc_vv_u8m4_b2(vs2, vs1, vl);
}

vbool2_t test_vmadc_vx_u8m4_b2(vuint8m4_t vs2, uint8_t rs1, size_t vl) {
  return __riscv_vmadc_vx_u8m4_b2(vs2, rs1, vl);
}

vbool1_t test_vmadc_vvm_u8m8_b1(vuint8m8_t vs2, vuint8m8_t vs1, vbool1_t v0,
                                size_t vl) {
  return __riscv_vmadc_vvm_u8m8_b1(vs2, vs1, v0, vl);
}

vbool1_t test_vmadc_vxm_u8m8_b1(vuint8m8_t vs2, uint8_t rs1, vbool1_t v0,
                                size_t vl) {
  return __riscv_vmadc_vxm_u8m8_b1(vs2, rs1, v0, vl);
}

vbool1_t test_vmadc_vv_u8m8_b1(vuint8m8_t vs2, vuint8m8_t vs1, size_t vl) {
  return __riscv_vmadc_vv_u8m8_b1(vs2, vs1, vl);
}

vbool1_t test_vmadc_vx_u8m8_b1(vuint8m8_t vs2, uint8_t rs1, size_t vl) {
  return __riscv_vmadc_vx_u8m8_b1(vs2, rs1, vl);
}

vbool64_t test_vmadc_vvm_u16mf4_b64(vuint16mf4_t vs2, vuint16mf4_t vs1,
                                    vbool64_t v0, size_t vl) {
  return __riscv_vmadc_vvm_u16mf4_b64(vs2, vs1, v0, vl);
}

vbool64_t test_vmadc_vxm_u16mf4_b64(vuint16mf4_t vs2, uint16_t rs1,
                                    vbool64_t v0, size_t vl) {
  return __riscv_vmadc_vxm_u16mf4_b64(vs2, rs1, v0, vl);
}

vbool64_t test_vmadc_vv_u16mf4_b64(vuint16mf4_t vs2, vuint16mf4_t vs1,
                                   size_t vl) {
  return __riscv_vmadc_vv_u16mf4_b64(vs2, vs1, vl);
}

vbool64_t test_vmadc_vx_u16mf4_b64(vuint16mf4_t vs2, uint16_t rs1, size_t vl) {
  return __riscv_vmadc_vx_u16mf4_b64(vs2, rs1, vl);
}

vbool32_t test_vmadc_vvm_u16mf2_b32(vuint16mf2_t vs2, vuint16mf2_t vs1,
                                    vbool32_t v0, size_t vl) {
  return __riscv_vmadc_vvm_u16mf2_b32(vs2, vs1, v0, vl);
}

vbool32_t test_vmadc_vxm_u16mf2_b32(vuint16mf2_t vs2, uint16_t rs1,
                                    vbool32_t v0, size_t vl) {
  return __riscv_vmadc_vxm_u16mf2_b32(vs2, rs1, v0, vl);
}

vbool32_t test_vmadc_vv_u16mf2_b32(vuint16mf2_t vs2, vuint16mf2_t vs1,
                                   size_t vl) {
  return __riscv_vmadc_vv_u16mf2_b32(vs2, vs1, vl);
}

vbool32_t test_vmadc_vx_u16mf2_b32(vuint16mf2_t vs2, uint16_t rs1, size_t vl) {
  return __riscv_vmadc_vx_u16mf2_b32(vs2, rs1, vl);
}

vbool16_t test_vmadc_vvm_u16m1_b16(vuint16m1_t vs2, vuint16m1_t vs1,
                                   vbool16_t v0, size_t vl) {
  return __riscv_vmadc_vvm_u16m1_b16(vs2, vs1, v0, vl);
}

vbool16_t test_vmadc_vxm_u16m1_b16(vuint16m1_t vs2, uint16_t rs1, vbool16_t v0,
                                   size_t vl) {
  return __riscv_vmadc_vxm_u16m1_b16(vs2, rs1, v0, vl);
}

vbool16_t test_vmadc_vv_u16m1_b16(vuint16m1_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vmadc_vv_u16m1_b16(vs2, vs1, vl);
}

vbool16_t test_vmadc_vx_u16m1_b16(vuint16m1_t vs2, uint16_t rs1, size_t vl) {
  return __riscv_vmadc_vx_u16m1_b16(vs2, rs1, vl);
}

vbool8_t test_vmadc_vvm_u16m2_b8(vuint16m2_t vs2, vuint16m2_t vs1, vbool8_t v0,
                                 size_t vl) {
  return __riscv_vmadc_vvm_u16m2_b8(vs2, vs1, v0, vl);
}

vbool8_t test_vmadc_vxm_u16m2_b8(vuint16m2_t vs2, uint16_t rs1, vbool8_t v0,
                                 size_t vl) {
  return __riscv_vmadc_vxm_u16m2_b8(vs2, rs1, v0, vl);
}

vbool8_t test_vmadc_vv_u16m2_b8(vuint16m2_t vs2, vuint16m2_t vs1, size_t vl) {
  return __riscv_vmadc_vv_u16m2_b8(vs2, vs1, vl);
}

vbool8_t test_vmadc_vx_u16m2_b8(vuint16m2_t vs2, uint16_t rs1, size_t vl) {
  return __riscv_vmadc_vx_u16m2_b8(vs2, rs1, vl);
}

vbool4_t test_vmadc_vvm_u16m4_b4(vuint16m4_t vs2, vuint16m4_t vs1, vbool4_t v0,
                                 size_t vl) {
  return __riscv_vmadc_vvm_u16m4_b4(vs2, vs1, v0, vl);
}

vbool4_t test_vmadc_vxm_u16m4_b4(vuint16m4_t vs2, uint16_t rs1, vbool4_t v0,
                                 size_t vl) {
  return __riscv_vmadc_vxm_u16m4_b4(vs2, rs1, v0, vl);
}

vbool4_t test_vmadc_vv_u16m4_b4(vuint16m4_t vs2, vuint16m4_t vs1, size_t vl) {
  return __riscv_vmadc_vv_u16m4_b4(vs2, vs1, vl);
}

vbool4_t test_vmadc_vx_u16m4_b4(vuint16m4_t vs2, uint16_t rs1, size_t vl) {
  return __riscv_vmadc_vx_u16m4_b4(vs2, rs1, vl);
}

vbool2_t test_vmadc_vvm_u16m8_b2(vuint16m8_t vs2, vuint16m8_t vs1, vbool2_t v0,
                                 size_t vl) {
  return __riscv_vmadc_vvm_u16m8_b2(vs2, vs1, v0, vl);
}

vbool2_t test_vmadc_vxm_u16m8_b2(vuint16m8_t vs2, uint16_t rs1, vbool2_t v0,
                                 size_t vl) {
  return __riscv_vmadc_vxm_u16m8_b2(vs2, rs1, v0, vl);
}

vbool2_t test_vmadc_vv_u16m8_b2(vuint16m8_t vs2, vuint16m8_t vs1, size_t vl) {
  return __riscv_vmadc_vv_u16m8_b2(vs2, vs1, vl);
}

vbool2_t test_vmadc_vx_u16m8_b2(vuint16m8_t vs2, uint16_t rs1, size_t vl) {
  return __riscv_vmadc_vx_u16m8_b2(vs2, rs1, vl);
}

vbool64_t test_vmadc_vvm_u32mf2_b64(vuint32mf2_t vs2, vuint32mf2_t vs1,
                                    vbool64_t v0, size_t vl) {
  return __riscv_vmadc_vvm_u32mf2_b64(vs2, vs1, v0, vl);
}

vbool64_t test_vmadc_vxm_u32mf2_b64(vuint32mf2_t vs2, uint32_t rs1,
                                    vbool64_t v0, size_t vl) {
  return __riscv_vmadc_vxm_u32mf2_b64(vs2, rs1, v0, vl);
}

vbool64_t test_vmadc_vv_u32mf2_b64(vuint32mf2_t vs2, vuint32mf2_t vs1,
                                   size_t vl) {
  return __riscv_vmadc_vv_u32mf2_b64(vs2, vs1, vl);
}

vbool64_t test_vmadc_vx_u32mf2_b64(vuint32mf2_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vmadc_vx_u32mf2_b64(vs2, rs1, vl);
}

vbool32_t test_vmadc_vvm_u32m1_b32(vuint32m1_t vs2, vuint32m1_t vs1,
                                   vbool32_t v0, size_t vl) {
  return __riscv_vmadc_vvm_u32m1_b32(vs2, vs1, v0, vl);
}

vbool32_t test_vmadc_vxm_u32m1_b32(vuint32m1_t vs2, uint32_t rs1, vbool32_t v0,
                                   size_t vl) {
  return __riscv_vmadc_vxm_u32m1_b32(vs2, rs1, v0, vl);
}

vbool32_t test_vmadc_vv_u32m1_b32(vuint32m1_t vs2, vuint32m1_t vs1, size_t vl) {
  return __riscv_vmadc_vv_u32m1_b32(vs2, vs1, vl);
}

vbool32_t test_vmadc_vx_u32m1_b32(vuint32m1_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vmadc_vx_u32m1_b32(vs2, rs1, vl);
}

vbool16_t test_vmadc_vvm_u32m2_b16(vuint32m2_t vs2, vuint32m2_t vs1,
                                   vbool16_t v0, size_t vl) {
  return __riscv_vmadc_vvm_u32m2_b16(vs2, vs1, v0, vl);
}

vbool16_t test_vmadc_vxm_u32m2_b16(vuint32m2_t vs2, uint32_t rs1, vbool16_t v0,
                                   size_t vl) {
  return __riscv_vmadc_vxm_u32m2_b16(vs2, rs1, v0, vl);
}

vbool16_t test_vmadc_vv_u32m2_b16(vuint32m2_t vs2, vuint32m2_t vs1, size_t vl) {
  return __riscv_vmadc_vv_u32m2_b16(vs2, vs1, vl);
}

vbool16_t test_vmadc_vx_u32m2_b16(vuint32m2_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vmadc_vx_u32m2_b16(vs2, rs1, vl);
}

vbool8_t test_vmadc_vvm_u32m4_b8(vuint32m4_t vs2, vuint32m4_t vs1, vbool8_t v0,
                                 size_t vl) {
  return __riscv_vmadc_vvm_u32m4_b8(vs2, vs1, v0, vl);
}

vbool8_t test_vmadc_vxm_u32m4_b8(vuint32m4_t vs2, uint32_t rs1, vbool8_t v0,
                                 size_t vl) {
  return __riscv_vmadc_vxm_u32m4_b8(vs2, rs1, v0, vl);
}

vbool8_t test_vmadc_vv_u32m4_b8(vuint32m4_t vs2, vuint32m4_t vs1, size_t vl) {
  return __riscv_vmadc_vv_u32m4_b8(vs2, vs1, vl);
}

vbool8_t test_vmadc_vx_u32m4_b8(vuint32m4_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vmadc_vx_u32m4_b8(vs2, rs1, vl);
}

vbool4_t test_vmadc_vvm_u32m8_b4(vuint32m8_t vs2, vuint32m8_t vs1, vbool4_t v0,
                                 size_t vl) {
  return __riscv_vmadc_vvm_u32m8_b4(vs2, vs1, v0, vl);
}

vbool4_t test_vmadc_vxm_u32m8_b4(vuint32m8_t vs2, uint32_t rs1, vbool4_t v0,
                                 size_t vl) {
  return __riscv_vmadc_vxm_u32m8_b4(vs2, rs1, v0, vl);
}

vbool4_t test_vmadc_vv_u32m8_b4(vuint32m8_t vs2, vuint32m8_t vs1, size_t vl) {
  return __riscv_vmadc_vv_u32m8_b4(vs2, vs1, vl);
}

vbool4_t test_vmadc_vx_u32m8_b4(vuint32m8_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vmadc_vx_u32m8_b4(vs2, rs1, vl);
}

vbool64_t test_vmadc_vvm_u64m1_b64(vuint64m1_t vs2, vuint64m1_t vs1,
                                   vbool64_t v0, size_t vl) {
  return __riscv_vmadc_vvm_u64m1_b64(vs2, vs1, v0, vl);
}

vbool64_t test_vmadc_vxm_u64m1_b64(vuint64m1_t vs2, uint64_t rs1, vbool64_t v0,
                                   size_t vl) {
  return __riscv_vmadc_vxm_u64m1_b64(vs2, rs1, v0, vl);
}

vbool64_t test_vmadc_vv_u64m1_b64(vuint64m1_t vs2, vuint64m1_t vs1, size_t vl) {
  return __riscv_vmadc_vv_u64m1_b64(vs2, vs1, vl);
}

vbool64_t test_vmadc_vx_u64m1_b64(vuint64m1_t vs2, uint64_t rs1, size_t vl) {
  return __riscv_vmadc_vx_u64m1_b64(vs2, rs1, vl);
}

vbool32_t test_vmadc_vvm_u64m2_b32(vuint64m2_t vs2, vuint64m2_t vs1,
                                   vbool32_t v0, size_t vl) {
  return __riscv_vmadc_vvm_u64m2_b32(vs2, vs1, v0, vl);
}

vbool32_t test_vmadc_vxm_u64m2_b32(vuint64m2_t vs2, uint64_t rs1, vbool32_t v0,
                                   size_t vl) {
  return __riscv_vmadc_vxm_u64m2_b32(vs2, rs1, v0, vl);
}

vbool32_t test_vmadc_vv_u64m2_b32(vuint64m2_t vs2, vuint64m2_t vs1, size_t vl) {
  return __riscv_vmadc_vv_u64m2_b32(vs2, vs1, vl);
}

vbool32_t test_vmadc_vx_u64m2_b32(vuint64m2_t vs2, uint64_t rs1, size_t vl) {
  return __riscv_vmadc_vx_u64m2_b32(vs2, rs1, vl);
}

vbool16_t test_vmadc_vvm_u64m4_b16(vuint64m4_t vs2, vuint64m4_t vs1,
                                   vbool16_t v0, size_t vl) {
  return __riscv_vmadc_vvm_u64m4_b16(vs2, vs1, v0, vl);
}

vbool16_t test_vmadc_vxm_u64m4_b16(vuint64m4_t vs2, uint64_t rs1, vbool16_t v0,
                                   size_t vl) {
  return __riscv_vmadc_vxm_u64m4_b16(vs2, rs1, v0, vl);
}

vbool16_t test_vmadc_vv_u64m4_b16(vuint64m4_t vs2, vuint64m4_t vs1, size_t vl) {
  return __riscv_vmadc_vv_u64m4_b16(vs2, vs1, vl);
}

vbool16_t test_vmadc_vx_u64m4_b16(vuint64m4_t vs2, uint64_t rs1, size_t vl) {
  return __riscv_vmadc_vx_u64m4_b16(vs2, rs1, vl);
}

vbool8_t test_vmadc_vvm_u64m8_b8(vuint64m8_t vs2, vuint64m8_t vs1, vbool8_t v0,
                                 size_t vl) {
  return __riscv_vmadc_vvm_u64m8_b8(vs2, vs1, v0, vl);
}

vbool8_t test_vmadc_vxm_u64m8_b8(vuint64m8_t vs2, uint64_t rs1, vbool8_t v0,
                                 size_t vl) {
  return __riscv_vmadc_vxm_u64m8_b8(vs2, rs1, v0, vl);
}

vbool8_t test_vmadc_vv_u64m8_b8(vuint64m8_t vs2, vuint64m8_t vs1, size_t vl) {
  return __riscv_vmadc_vv_u64m8_b8(vs2, vs1, vl);
}

vbool8_t test_vmadc_vx_u64m8_b8(vuint64m8_t vs2, uint64_t rs1, size_t vl) {
  return __riscv_vmadc_vx_u64m8_b8(vs2, rs1, vl);
}
