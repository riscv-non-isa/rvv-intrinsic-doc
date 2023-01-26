#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint16mf4_t test_vwmacc_vv_i16mf4(vint16mf4_t vd, vint8mf8_t vs1, vint8mf8_t vs2, size_t vl) {
  return __riscv_vwmacc(vd, vs1, vs2, vl);
}

vint16mf4_t test_vwmacc_vx_i16mf4(vint16mf4_t vd, int8_t rs1, vint8mf8_t vs2, size_t vl) {
  return __riscv_vwmacc(vd, rs1, vs2, vl);
}

vint16mf2_t test_vwmacc_vv_i16mf2(vint16mf2_t vd, vint8mf4_t vs1, vint8mf4_t vs2, size_t vl) {
  return __riscv_vwmacc(vd, vs1, vs2, vl);
}

vint16mf2_t test_vwmacc_vx_i16mf2(vint16mf2_t vd, int8_t rs1, vint8mf4_t vs2, size_t vl) {
  return __riscv_vwmacc(vd, rs1, vs2, vl);
}

vint16m1_t test_vwmacc_vv_i16m1(vint16m1_t vd, vint8mf2_t vs1, vint8mf2_t vs2, size_t vl) {
  return __riscv_vwmacc(vd, vs1, vs2, vl);
}

vint16m1_t test_vwmacc_vx_i16m1(vint16m1_t vd, int8_t rs1, vint8mf2_t vs2, size_t vl) {
  return __riscv_vwmacc(vd, rs1, vs2, vl);
}

vint16m2_t test_vwmacc_vv_i16m2(vint16m2_t vd, vint8m1_t vs1, vint8m1_t vs2, size_t vl) {
  return __riscv_vwmacc(vd, vs1, vs2, vl);
}

vint16m2_t test_vwmacc_vx_i16m2(vint16m2_t vd, int8_t rs1, vint8m1_t vs2, size_t vl) {
  return __riscv_vwmacc(vd, rs1, vs2, vl);
}

vint16m4_t test_vwmacc_vv_i16m4(vint16m4_t vd, vint8m2_t vs1, vint8m2_t vs2, size_t vl) {
  return __riscv_vwmacc(vd, vs1, vs2, vl);
}

vint16m4_t test_vwmacc_vx_i16m4(vint16m4_t vd, int8_t rs1, vint8m2_t vs2, size_t vl) {
  return __riscv_vwmacc(vd, rs1, vs2, vl);
}

vint16m8_t test_vwmacc_vv_i16m8(vint16m8_t vd, vint8m4_t vs1, vint8m4_t vs2, size_t vl) {
  return __riscv_vwmacc(vd, vs1, vs2, vl);
}

vint16m8_t test_vwmacc_vx_i16m8(vint16m8_t vd, int8_t rs1, vint8m4_t vs2, size_t vl) {
  return __riscv_vwmacc(vd, rs1, vs2, vl);
}

vint32mf2_t test_vwmacc_vv_i32mf2(vint32mf2_t vd, vint16mf4_t vs1, vint16mf4_t vs2, size_t vl) {
  return __riscv_vwmacc(vd, vs1, vs2, vl);
}

vint32mf2_t test_vwmacc_vx_i32mf2(vint32mf2_t vd, int16_t rs1, vint16mf4_t vs2, size_t vl) {
  return __riscv_vwmacc(vd, rs1, vs2, vl);
}

vint32m1_t test_vwmacc_vv_i32m1(vint32m1_t vd, vint16mf2_t vs1, vint16mf2_t vs2, size_t vl) {
  return __riscv_vwmacc(vd, vs1, vs2, vl);
}

vint32m1_t test_vwmacc_vx_i32m1(vint32m1_t vd, int16_t rs1, vint16mf2_t vs2, size_t vl) {
  return __riscv_vwmacc(vd, rs1, vs2, vl);
}

vint32m2_t test_vwmacc_vv_i32m2(vint32m2_t vd, vint16m1_t vs1, vint16m1_t vs2, size_t vl) {
  return __riscv_vwmacc(vd, vs1, vs2, vl);
}

vint32m2_t test_vwmacc_vx_i32m2(vint32m2_t vd, int16_t rs1, vint16m1_t vs2, size_t vl) {
  return __riscv_vwmacc(vd, rs1, vs2, vl);
}

vint32m4_t test_vwmacc_vv_i32m4(vint32m4_t vd, vint16m2_t vs1, vint16m2_t vs2, size_t vl) {
  return __riscv_vwmacc(vd, vs1, vs2, vl);
}

vint32m4_t test_vwmacc_vx_i32m4(vint32m4_t vd, int16_t rs1, vint16m2_t vs2, size_t vl) {
  return __riscv_vwmacc(vd, rs1, vs2, vl);
}

vint32m8_t test_vwmacc_vv_i32m8(vint32m8_t vd, vint16m4_t vs1, vint16m4_t vs2, size_t vl) {
  return __riscv_vwmacc(vd, vs1, vs2, vl);
}

vint32m8_t test_vwmacc_vx_i32m8(vint32m8_t vd, int16_t rs1, vint16m4_t vs2, size_t vl) {
  return __riscv_vwmacc(vd, rs1, vs2, vl);
}

vint64m1_t test_vwmacc_vv_i64m1(vint64m1_t vd, vint32mf2_t vs1, vint32mf2_t vs2, size_t vl) {
  return __riscv_vwmacc(vd, vs1, vs2, vl);
}

vint64m1_t test_vwmacc_vx_i64m1(vint64m1_t vd, int32_t rs1, vint32mf2_t vs2, size_t vl) {
  return __riscv_vwmacc(vd, rs1, vs2, vl);
}

vint64m2_t test_vwmacc_vv_i64m2(vint64m2_t vd, vint32m1_t vs1, vint32m1_t vs2, size_t vl) {
  return __riscv_vwmacc(vd, vs1, vs2, vl);
}

vint64m2_t test_vwmacc_vx_i64m2(vint64m2_t vd, int32_t rs1, vint32m1_t vs2, size_t vl) {
  return __riscv_vwmacc(vd, rs1, vs2, vl);
}

vint64m4_t test_vwmacc_vv_i64m4(vint64m4_t vd, vint32m2_t vs1, vint32m2_t vs2, size_t vl) {
  return __riscv_vwmacc(vd, vs1, vs2, vl);
}

vint64m4_t test_vwmacc_vx_i64m4(vint64m4_t vd, int32_t rs1, vint32m2_t vs2, size_t vl) {
  return __riscv_vwmacc(vd, rs1, vs2, vl);
}

vint64m8_t test_vwmacc_vv_i64m8(vint64m8_t vd, vint32m4_t vs1, vint32m4_t vs2, size_t vl) {
  return __riscv_vwmacc(vd, vs1, vs2, vl);
}

vint64m8_t test_vwmacc_vx_i64m8(vint64m8_t vd, int32_t rs1, vint32m4_t vs2, size_t vl) {
  return __riscv_vwmacc(vd, rs1, vs2, vl);
}

vint16mf4_t test_vwmacc_vv_i16mf4_m(vbool64_t mask, vint16mf4_t vd, vint8mf8_t vs1, vint8mf8_t vs2, size_t vl) {
  return __riscv_vwmacc(mask, vd, vs1, vs2, vl);
}

vint16mf4_t test_vwmacc_vx_i16mf4_m(vbool64_t mask, vint16mf4_t vd, int8_t rs1, vint8mf8_t vs2, size_t vl) {
  return __riscv_vwmacc(mask, vd, rs1, vs2, vl);
}

vint16mf2_t test_vwmacc_vv_i16mf2_m(vbool32_t mask, vint16mf2_t vd, vint8mf4_t vs1, vint8mf4_t vs2, size_t vl) {
  return __riscv_vwmacc(mask, vd, vs1, vs2, vl);
}

vint16mf2_t test_vwmacc_vx_i16mf2_m(vbool32_t mask, vint16mf2_t vd, int8_t rs1, vint8mf4_t vs2, size_t vl) {
  return __riscv_vwmacc(mask, vd, rs1, vs2, vl);
}

vint16m1_t test_vwmacc_vv_i16m1_m(vbool16_t mask, vint16m1_t vd, vint8mf2_t vs1, vint8mf2_t vs2, size_t vl) {
  return __riscv_vwmacc(mask, vd, vs1, vs2, vl);
}

vint16m1_t test_vwmacc_vx_i16m1_m(vbool16_t mask, vint16m1_t vd, int8_t rs1, vint8mf2_t vs2, size_t vl) {
  return __riscv_vwmacc(mask, vd, rs1, vs2, vl);
}

vint16m2_t test_vwmacc_vv_i16m2_m(vbool8_t mask, vint16m2_t vd, vint8m1_t vs1, vint8m1_t vs2, size_t vl) {
  return __riscv_vwmacc(mask, vd, vs1, vs2, vl);
}

vint16m2_t test_vwmacc_vx_i16m2_m(vbool8_t mask, vint16m2_t vd, int8_t rs1, vint8m1_t vs2, size_t vl) {
  return __riscv_vwmacc(mask, vd, rs1, vs2, vl);
}

vint16m4_t test_vwmacc_vv_i16m4_m(vbool4_t mask, vint16m4_t vd, vint8m2_t vs1, vint8m2_t vs2, size_t vl) {
  return __riscv_vwmacc(mask, vd, vs1, vs2, vl);
}

vint16m4_t test_vwmacc_vx_i16m4_m(vbool4_t mask, vint16m4_t vd, int8_t rs1, vint8m2_t vs2, size_t vl) {
  return __riscv_vwmacc(mask, vd, rs1, vs2, vl);
}

vint16m8_t test_vwmacc_vv_i16m8_m(vbool2_t mask, vint16m8_t vd, vint8m4_t vs1, vint8m4_t vs2, size_t vl) {
  return __riscv_vwmacc(mask, vd, vs1, vs2, vl);
}

vint16m8_t test_vwmacc_vx_i16m8_m(vbool2_t mask, vint16m8_t vd, int8_t rs1, vint8m4_t vs2, size_t vl) {
  return __riscv_vwmacc(mask, vd, rs1, vs2, vl);
}

vint32mf2_t test_vwmacc_vv_i32mf2_m(vbool64_t mask, vint32mf2_t vd, vint16mf4_t vs1, vint16mf4_t vs2, size_t vl) {
  return __riscv_vwmacc(mask, vd, vs1, vs2, vl);
}

vint32mf2_t test_vwmacc_vx_i32mf2_m(vbool64_t mask, vint32mf2_t vd, int16_t rs1, vint16mf4_t vs2, size_t vl) {
  return __riscv_vwmacc(mask, vd, rs1, vs2, vl);
}

vint32m1_t test_vwmacc_vv_i32m1_m(vbool32_t mask, vint32m1_t vd, vint16mf2_t vs1, vint16mf2_t vs2, size_t vl) {
  return __riscv_vwmacc(mask, vd, vs1, vs2, vl);
}

vint32m1_t test_vwmacc_vx_i32m1_m(vbool32_t mask, vint32m1_t vd, int16_t rs1, vint16mf2_t vs2, size_t vl) {
  return __riscv_vwmacc(mask, vd, rs1, vs2, vl);
}

vint32m2_t test_vwmacc_vv_i32m2_m(vbool16_t mask, vint32m2_t vd, vint16m1_t vs1, vint16m1_t vs2, size_t vl) {
  return __riscv_vwmacc(mask, vd, vs1, vs2, vl);
}

vint32m2_t test_vwmacc_vx_i32m2_m(vbool16_t mask, vint32m2_t vd, int16_t rs1, vint16m1_t vs2, size_t vl) {
  return __riscv_vwmacc(mask, vd, rs1, vs2, vl);
}

vint32m4_t test_vwmacc_vv_i32m4_m(vbool8_t mask, vint32m4_t vd, vint16m2_t vs1, vint16m2_t vs2, size_t vl) {
  return __riscv_vwmacc(mask, vd, vs1, vs2, vl);
}

vint32m4_t test_vwmacc_vx_i32m4_m(vbool8_t mask, vint32m4_t vd, int16_t rs1, vint16m2_t vs2, size_t vl) {
  return __riscv_vwmacc(mask, vd, rs1, vs2, vl);
}

vint32m8_t test_vwmacc_vv_i32m8_m(vbool4_t mask, vint32m8_t vd, vint16m4_t vs1, vint16m4_t vs2, size_t vl) {
  return __riscv_vwmacc(mask, vd, vs1, vs2, vl);
}

vint32m8_t test_vwmacc_vx_i32m8_m(vbool4_t mask, vint32m8_t vd, int16_t rs1, vint16m4_t vs2, size_t vl) {
  return __riscv_vwmacc(mask, vd, rs1, vs2, vl);
}

vint64m1_t test_vwmacc_vv_i64m1_m(vbool64_t mask, vint64m1_t vd, vint32mf2_t vs1, vint32mf2_t vs2, size_t vl) {
  return __riscv_vwmacc(mask, vd, vs1, vs2, vl);
}

vint64m1_t test_vwmacc_vx_i64m1_m(vbool64_t mask, vint64m1_t vd, int32_t rs1, vint32mf2_t vs2, size_t vl) {
  return __riscv_vwmacc(mask, vd, rs1, vs2, vl);
}

vint64m2_t test_vwmacc_vv_i64m2_m(vbool32_t mask, vint64m2_t vd, vint32m1_t vs1, vint32m1_t vs2, size_t vl) {
  return __riscv_vwmacc(mask, vd, vs1, vs2, vl);
}

vint64m2_t test_vwmacc_vx_i64m2_m(vbool32_t mask, vint64m2_t vd, int32_t rs1, vint32m1_t vs2, size_t vl) {
  return __riscv_vwmacc(mask, vd, rs1, vs2, vl);
}

vint64m4_t test_vwmacc_vv_i64m4_m(vbool16_t mask, vint64m4_t vd, vint32m2_t vs1, vint32m2_t vs2, size_t vl) {
  return __riscv_vwmacc(mask, vd, vs1, vs2, vl);
}

vint64m4_t test_vwmacc_vx_i64m4_m(vbool16_t mask, vint64m4_t vd, int32_t rs1, vint32m2_t vs2, size_t vl) {
  return __riscv_vwmacc(mask, vd, rs1, vs2, vl);
}

vint64m8_t test_vwmacc_vv_i64m8_m(vbool8_t mask, vint64m8_t vd, vint32m4_t vs1, vint32m4_t vs2, size_t vl) {
  return __riscv_vwmacc(mask, vd, vs1, vs2, vl);
}

vint64m8_t test_vwmacc_vx_i64m8_m(vbool8_t mask, vint64m8_t vd, int32_t rs1, vint32m4_t vs2, size_t vl) {
  return __riscv_vwmacc(mask, vd, rs1, vs2, vl);
}

