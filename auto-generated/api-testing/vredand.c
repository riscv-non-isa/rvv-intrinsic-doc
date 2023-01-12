#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint8m1_t test_vredand_vs_i8mf8_i8m1(vint8m1_t dest, vint8mf8_t vector, vint8m1_t scalar, size_t vl) {
  return vredand_vs_i8mf8_i8m1(dest, vector, scalar, vl);
}

vint8m1_t test_vredand_vs_i8mf4_i8m1(vint8m1_t dest, vint8mf4_t vector, vint8m1_t scalar, size_t vl) {
  return vredand_vs_i8mf4_i8m1(dest, vector, scalar, vl);
}

vint8m1_t test_vredand_vs_i8mf2_i8m1(vint8m1_t dest, vint8mf2_t vector, vint8m1_t scalar, size_t vl) {
  return vredand_vs_i8mf2_i8m1(dest, vector, scalar, vl);
}

vint8m1_t test_vredand_vs_i8m1_i8m1(vint8m1_t dest, vint8m1_t vector, vint8m1_t scalar, size_t vl) {
  return vredand_vs_i8m1_i8m1(dest, vector, scalar, vl);
}

vint8m1_t test_vredand_vs_i8m2_i8m1(vint8m1_t dest, vint8m2_t vector, vint8m1_t scalar, size_t vl) {
  return vredand_vs_i8m2_i8m1(dest, vector, scalar, vl);
}

vint8m1_t test_vredand_vs_i8m4_i8m1(vint8m1_t dest, vint8m4_t vector, vint8m1_t scalar, size_t vl) {
  return vredand_vs_i8m4_i8m1(dest, vector, scalar, vl);
}

vint8m1_t test_vredand_vs_i8m8_i8m1(vint8m1_t dest, vint8m8_t vector, vint8m1_t scalar, size_t vl) {
  return vredand_vs_i8m8_i8m1(dest, vector, scalar, vl);
}

vint16m1_t test_vredand_vs_i16mf4_i16m1(vint16m1_t dest, vint16mf4_t vector, vint16m1_t scalar, size_t vl) {
  return vredand_vs_i16mf4_i16m1(dest, vector, scalar, vl);
}

vint16m1_t test_vredand_vs_i16mf2_i16m1(vint16m1_t dest, vint16mf2_t vector, vint16m1_t scalar, size_t vl) {
  return vredand_vs_i16mf2_i16m1(dest, vector, scalar, vl);
}

vint16m1_t test_vredand_vs_i16m1_i16m1(vint16m1_t dest, vint16m1_t vector, vint16m1_t scalar, size_t vl) {
  return vredand_vs_i16m1_i16m1(dest, vector, scalar, vl);
}

vint16m1_t test_vredand_vs_i16m2_i16m1(vint16m1_t dest, vint16m2_t vector, vint16m1_t scalar, size_t vl) {
  return vredand_vs_i16m2_i16m1(dest, vector, scalar, vl);
}

vint16m1_t test_vredand_vs_i16m4_i16m1(vint16m1_t dest, vint16m4_t vector, vint16m1_t scalar, size_t vl) {
  return vredand_vs_i16m4_i16m1(dest, vector, scalar, vl);
}

vint16m1_t test_vredand_vs_i16m8_i16m1(vint16m1_t dest, vint16m8_t vector, vint16m1_t scalar, size_t vl) {
  return vredand_vs_i16m8_i16m1(dest, vector, scalar, vl);
}

vint32m1_t test_vredand_vs_i32mf2_i32m1(vint32m1_t dest, vint32mf2_t vector, vint32m1_t scalar, size_t vl) {
  return vredand_vs_i32mf2_i32m1(dest, vector, scalar, vl);
}

vint32m1_t test_vredand_vs_i32m1_i32m1(vint32m1_t dest, vint32m1_t vector, vint32m1_t scalar, size_t vl) {
  return vredand_vs_i32m1_i32m1(dest, vector, scalar, vl);
}

vint32m1_t test_vredand_vs_i32m2_i32m1(vint32m1_t dest, vint32m2_t vector, vint32m1_t scalar, size_t vl) {
  return vredand_vs_i32m2_i32m1(dest, vector, scalar, vl);
}

vint32m1_t test_vredand_vs_i32m4_i32m1(vint32m1_t dest, vint32m4_t vector, vint32m1_t scalar, size_t vl) {
  return vredand_vs_i32m4_i32m1(dest, vector, scalar, vl);
}

vint32m1_t test_vredand_vs_i32m8_i32m1(vint32m1_t dest, vint32m8_t vector, vint32m1_t scalar, size_t vl) {
  return vredand_vs_i32m8_i32m1(dest, vector, scalar, vl);
}

vint64m1_t test_vredand_vs_i64m1_i64m1(vint64m1_t dest, vint64m1_t vector, vint64m1_t scalar, size_t vl) {
  return vredand_vs_i64m1_i64m1(dest, vector, scalar, vl);
}

vint64m1_t test_vredand_vs_i64m2_i64m1(vint64m1_t dest, vint64m2_t vector, vint64m1_t scalar, size_t vl) {
  return vredand_vs_i64m2_i64m1(dest, vector, scalar, vl);
}

vint64m1_t test_vredand_vs_i64m4_i64m1(vint64m1_t dest, vint64m4_t vector, vint64m1_t scalar, size_t vl) {
  return vredand_vs_i64m4_i64m1(dest, vector, scalar, vl);
}

vint64m1_t test_vredand_vs_i64m8_i64m1(vint64m1_t dest, vint64m8_t vector, vint64m1_t scalar, size_t vl) {
  return vredand_vs_i64m8_i64m1(dest, vector, scalar, vl);
}

vuint8m1_t test_vredand_vs_u8mf8_u8m1(vuint8m1_t dest, vuint8mf8_t vector, vuint8m1_t scalar, size_t vl) {
  return vredand_vs_u8mf8_u8m1(dest, vector, scalar, vl);
}

vuint8m1_t test_vredand_vs_u8mf4_u8m1(vuint8m1_t dest, vuint8mf4_t vector, vuint8m1_t scalar, size_t vl) {
  return vredand_vs_u8mf4_u8m1(dest, vector, scalar, vl);
}

vuint8m1_t test_vredand_vs_u8mf2_u8m1(vuint8m1_t dest, vuint8mf2_t vector, vuint8m1_t scalar, size_t vl) {
  return vredand_vs_u8mf2_u8m1(dest, vector, scalar, vl);
}

vuint8m1_t test_vredand_vs_u8m1_u8m1(vuint8m1_t dest, vuint8m1_t vector, vuint8m1_t scalar, size_t vl) {
  return vredand_vs_u8m1_u8m1(dest, vector, scalar, vl);
}

vuint8m1_t test_vredand_vs_u8m2_u8m1(vuint8m1_t dest, vuint8m2_t vector, vuint8m1_t scalar, size_t vl) {
  return vredand_vs_u8m2_u8m1(dest, vector, scalar, vl);
}

vuint8m1_t test_vredand_vs_u8m4_u8m1(vuint8m1_t dest, vuint8m4_t vector, vuint8m1_t scalar, size_t vl) {
  return vredand_vs_u8m4_u8m1(dest, vector, scalar, vl);
}

vuint8m1_t test_vredand_vs_u8m8_u8m1(vuint8m1_t dest, vuint8m8_t vector, vuint8m1_t scalar, size_t vl) {
  return vredand_vs_u8m8_u8m1(dest, vector, scalar, vl);
}

vuint16m1_t test_vredand_vs_u16mf4_u16m1(vuint16m1_t dest, vuint16mf4_t vector, vuint16m1_t scalar, size_t vl) {
  return vredand_vs_u16mf4_u16m1(dest, vector, scalar, vl);
}

vuint16m1_t test_vredand_vs_u16mf2_u16m1(vuint16m1_t dest, vuint16mf2_t vector, vuint16m1_t scalar, size_t vl) {
  return vredand_vs_u16mf2_u16m1(dest, vector, scalar, vl);
}

vuint16m1_t test_vredand_vs_u16m1_u16m1(vuint16m1_t dest, vuint16m1_t vector, vuint16m1_t scalar, size_t vl) {
  return vredand_vs_u16m1_u16m1(dest, vector, scalar, vl);
}

vuint16m1_t test_vredand_vs_u16m2_u16m1(vuint16m1_t dest, vuint16m2_t vector, vuint16m1_t scalar, size_t vl) {
  return vredand_vs_u16m2_u16m1(dest, vector, scalar, vl);
}

vuint16m1_t test_vredand_vs_u16m4_u16m1(vuint16m1_t dest, vuint16m4_t vector, vuint16m1_t scalar, size_t vl) {
  return vredand_vs_u16m4_u16m1(dest, vector, scalar, vl);
}

vuint16m1_t test_vredand_vs_u16m8_u16m1(vuint16m1_t dest, vuint16m8_t vector, vuint16m1_t scalar, size_t vl) {
  return vredand_vs_u16m8_u16m1(dest, vector, scalar, vl);
}

vuint32m1_t test_vredand_vs_u32mf2_u32m1(vuint32m1_t dest, vuint32mf2_t vector, vuint32m1_t scalar, size_t vl) {
  return vredand_vs_u32mf2_u32m1(dest, vector, scalar, vl);
}

vuint32m1_t test_vredand_vs_u32m1_u32m1(vuint32m1_t dest, vuint32m1_t vector, vuint32m1_t scalar, size_t vl) {
  return vredand_vs_u32m1_u32m1(dest, vector, scalar, vl);
}

vuint32m1_t test_vredand_vs_u32m2_u32m1(vuint32m1_t dest, vuint32m2_t vector, vuint32m1_t scalar, size_t vl) {
  return vredand_vs_u32m2_u32m1(dest, vector, scalar, vl);
}

vuint32m1_t test_vredand_vs_u32m4_u32m1(vuint32m1_t dest, vuint32m4_t vector, vuint32m1_t scalar, size_t vl) {
  return vredand_vs_u32m4_u32m1(dest, vector, scalar, vl);
}

vuint32m1_t test_vredand_vs_u32m8_u32m1(vuint32m1_t dest, vuint32m8_t vector, vuint32m1_t scalar, size_t vl) {
  return vredand_vs_u32m8_u32m1(dest, vector, scalar, vl);
}

vuint64m1_t test_vredand_vs_u64m1_u64m1(vuint64m1_t dest, vuint64m1_t vector, vuint64m1_t scalar, size_t vl) {
  return vredand_vs_u64m1_u64m1(dest, vector, scalar, vl);
}

vuint64m1_t test_vredand_vs_u64m2_u64m1(vuint64m1_t dest, vuint64m2_t vector, vuint64m1_t scalar, size_t vl) {
  return vredand_vs_u64m2_u64m1(dest, vector, scalar, vl);
}

vuint64m1_t test_vredand_vs_u64m4_u64m1(vuint64m1_t dest, vuint64m4_t vector, vuint64m1_t scalar, size_t vl) {
  return vredand_vs_u64m4_u64m1(dest, vector, scalar, vl);
}

vuint64m1_t test_vredand_vs_u64m8_u64m1(vuint64m1_t dest, vuint64m8_t vector, vuint64m1_t scalar, size_t vl) {
  return vredand_vs_u64m8_u64m1(dest, vector, scalar, vl);
}

vint8m1_t test_vredand_vs_i8mf8_i8m1_m(vbool64_t mask, vint8m1_t dest, vint8mf8_t vector, vint8m1_t scalar, size_t vl) {
  return vredand_vs_i8mf8_i8m1_m(mask, dest, vector, scalar, vl);
}

vint8m1_t test_vredand_vs_i8mf4_i8m1_m(vbool32_t mask, vint8m1_t dest, vint8mf4_t vector, vint8m1_t scalar, size_t vl) {
  return vredand_vs_i8mf4_i8m1_m(mask, dest, vector, scalar, vl);
}

vint8m1_t test_vredand_vs_i8mf2_i8m1_m(vbool16_t mask, vint8m1_t dest, vint8mf2_t vector, vint8m1_t scalar, size_t vl) {
  return vredand_vs_i8mf2_i8m1_m(mask, dest, vector, scalar, vl);
}

vint8m1_t test_vredand_vs_i8m1_i8m1_m(vbool8_t mask, vint8m1_t dest, vint8m1_t vector, vint8m1_t scalar, size_t vl) {
  return vredand_vs_i8m1_i8m1_m(mask, dest, vector, scalar, vl);
}

vint8m1_t test_vredand_vs_i8m2_i8m1_m(vbool4_t mask, vint8m1_t dest, vint8m2_t vector, vint8m1_t scalar, size_t vl) {
  return vredand_vs_i8m2_i8m1_m(mask, dest, vector, scalar, vl);
}

vint8m1_t test_vredand_vs_i8m4_i8m1_m(vbool2_t mask, vint8m1_t dest, vint8m4_t vector, vint8m1_t scalar, size_t vl) {
  return vredand_vs_i8m4_i8m1_m(mask, dest, vector, scalar, vl);
}

vint8m1_t test_vredand_vs_i8m8_i8m1_m(vbool1_t mask, vint8m1_t dest, vint8m8_t vector, vint8m1_t scalar, size_t vl) {
  return vredand_vs_i8m8_i8m1_m(mask, dest, vector, scalar, vl);
}

vint16m1_t test_vredand_vs_i16mf4_i16m1_m(vbool64_t mask, vint16m1_t dest, vint16mf4_t vector, vint16m1_t scalar, size_t vl) {
  return vredand_vs_i16mf4_i16m1_m(mask, dest, vector, scalar, vl);
}

vint16m1_t test_vredand_vs_i16mf2_i16m1_m(vbool32_t mask, vint16m1_t dest, vint16mf2_t vector, vint16m1_t scalar, size_t vl) {
  return vredand_vs_i16mf2_i16m1_m(mask, dest, vector, scalar, vl);
}

vint16m1_t test_vredand_vs_i16m1_i16m1_m(vbool16_t mask, vint16m1_t dest, vint16m1_t vector, vint16m1_t scalar, size_t vl) {
  return vredand_vs_i16m1_i16m1_m(mask, dest, vector, scalar, vl);
}

vint16m1_t test_vredand_vs_i16m2_i16m1_m(vbool8_t mask, vint16m1_t dest, vint16m2_t vector, vint16m1_t scalar, size_t vl) {
  return vredand_vs_i16m2_i16m1_m(mask, dest, vector, scalar, vl);
}

vint16m1_t test_vredand_vs_i16m4_i16m1_m(vbool4_t mask, vint16m1_t dest, vint16m4_t vector, vint16m1_t scalar, size_t vl) {
  return vredand_vs_i16m4_i16m1_m(mask, dest, vector, scalar, vl);
}

vint16m1_t test_vredand_vs_i16m8_i16m1_m(vbool2_t mask, vint16m1_t dest, vint16m8_t vector, vint16m1_t scalar, size_t vl) {
  return vredand_vs_i16m8_i16m1_m(mask, dest, vector, scalar, vl);
}

vint32m1_t test_vredand_vs_i32mf2_i32m1_m(vbool64_t mask, vint32m1_t dest, vint32mf2_t vector, vint32m1_t scalar, size_t vl) {
  return vredand_vs_i32mf2_i32m1_m(mask, dest, vector, scalar, vl);
}

vint32m1_t test_vredand_vs_i32m1_i32m1_m(vbool32_t mask, vint32m1_t dest, vint32m1_t vector, vint32m1_t scalar, size_t vl) {
  return vredand_vs_i32m1_i32m1_m(mask, dest, vector, scalar, vl);
}

vint32m1_t test_vredand_vs_i32m2_i32m1_m(vbool16_t mask, vint32m1_t dest, vint32m2_t vector, vint32m1_t scalar, size_t vl) {
  return vredand_vs_i32m2_i32m1_m(mask, dest, vector, scalar, vl);
}

vint32m1_t test_vredand_vs_i32m4_i32m1_m(vbool8_t mask, vint32m1_t dest, vint32m4_t vector, vint32m1_t scalar, size_t vl) {
  return vredand_vs_i32m4_i32m1_m(mask, dest, vector, scalar, vl);
}

vint32m1_t test_vredand_vs_i32m8_i32m1_m(vbool4_t mask, vint32m1_t dest, vint32m8_t vector, vint32m1_t scalar, size_t vl) {
  return vredand_vs_i32m8_i32m1_m(mask, dest, vector, scalar, vl);
}

vint64m1_t test_vredand_vs_i64m1_i64m1_m(vbool64_t mask, vint64m1_t dest, vint64m1_t vector, vint64m1_t scalar, size_t vl) {
  return vredand_vs_i64m1_i64m1_m(mask, dest, vector, scalar, vl);
}

vint64m1_t test_vredand_vs_i64m2_i64m1_m(vbool32_t mask, vint64m1_t dest, vint64m2_t vector, vint64m1_t scalar, size_t vl) {
  return vredand_vs_i64m2_i64m1_m(mask, dest, vector, scalar, vl);
}

vint64m1_t test_vredand_vs_i64m4_i64m1_m(vbool16_t mask, vint64m1_t dest, vint64m4_t vector, vint64m1_t scalar, size_t vl) {
  return vredand_vs_i64m4_i64m1_m(mask, dest, vector, scalar, vl);
}

vint64m1_t test_vredand_vs_i64m8_i64m1_m(vbool8_t mask, vint64m1_t dest, vint64m8_t vector, vint64m1_t scalar, size_t vl) {
  return vredand_vs_i64m8_i64m1_m(mask, dest, vector, scalar, vl);
}

vuint8m1_t test_vredand_vs_u8mf8_u8m1_m(vbool64_t mask, vuint8m1_t dest, vuint8mf8_t vector, vuint8m1_t scalar, size_t vl) {
  return vredand_vs_u8mf8_u8m1_m(mask, dest, vector, scalar, vl);
}

vuint8m1_t test_vredand_vs_u8mf4_u8m1_m(vbool32_t mask, vuint8m1_t dest, vuint8mf4_t vector, vuint8m1_t scalar, size_t vl) {
  return vredand_vs_u8mf4_u8m1_m(mask, dest, vector, scalar, vl);
}

vuint8m1_t test_vredand_vs_u8mf2_u8m1_m(vbool16_t mask, vuint8m1_t dest, vuint8mf2_t vector, vuint8m1_t scalar, size_t vl) {
  return vredand_vs_u8mf2_u8m1_m(mask, dest, vector, scalar, vl);
}

vuint8m1_t test_vredand_vs_u8m1_u8m1_m(vbool8_t mask, vuint8m1_t dest, vuint8m1_t vector, vuint8m1_t scalar, size_t vl) {
  return vredand_vs_u8m1_u8m1_m(mask, dest, vector, scalar, vl);
}

vuint8m1_t test_vredand_vs_u8m2_u8m1_m(vbool4_t mask, vuint8m1_t dest, vuint8m2_t vector, vuint8m1_t scalar, size_t vl) {
  return vredand_vs_u8m2_u8m1_m(mask, dest, vector, scalar, vl);
}

vuint8m1_t test_vredand_vs_u8m4_u8m1_m(vbool2_t mask, vuint8m1_t dest, vuint8m4_t vector, vuint8m1_t scalar, size_t vl) {
  return vredand_vs_u8m4_u8m1_m(mask, dest, vector, scalar, vl);
}

vuint8m1_t test_vredand_vs_u8m8_u8m1_m(vbool1_t mask, vuint8m1_t dest, vuint8m8_t vector, vuint8m1_t scalar, size_t vl) {
  return vredand_vs_u8m8_u8m1_m(mask, dest, vector, scalar, vl);
}

vuint16m1_t test_vredand_vs_u16mf4_u16m1_m(vbool64_t mask, vuint16m1_t dest, vuint16mf4_t vector, vuint16m1_t scalar, size_t vl) {
  return vredand_vs_u16mf4_u16m1_m(mask, dest, vector, scalar, vl);
}

vuint16m1_t test_vredand_vs_u16mf2_u16m1_m(vbool32_t mask, vuint16m1_t dest, vuint16mf2_t vector, vuint16m1_t scalar, size_t vl) {
  return vredand_vs_u16mf2_u16m1_m(mask, dest, vector, scalar, vl);
}

vuint16m1_t test_vredand_vs_u16m1_u16m1_m(vbool16_t mask, vuint16m1_t dest, vuint16m1_t vector, vuint16m1_t scalar, size_t vl) {
  return vredand_vs_u16m1_u16m1_m(mask, dest, vector, scalar, vl);
}

vuint16m1_t test_vredand_vs_u16m2_u16m1_m(vbool8_t mask, vuint16m1_t dest, vuint16m2_t vector, vuint16m1_t scalar, size_t vl) {
  return vredand_vs_u16m2_u16m1_m(mask, dest, vector, scalar, vl);
}

vuint16m1_t test_vredand_vs_u16m4_u16m1_m(vbool4_t mask, vuint16m1_t dest, vuint16m4_t vector, vuint16m1_t scalar, size_t vl) {
  return vredand_vs_u16m4_u16m1_m(mask, dest, vector, scalar, vl);
}

vuint16m1_t test_vredand_vs_u16m8_u16m1_m(vbool2_t mask, vuint16m1_t dest, vuint16m8_t vector, vuint16m1_t scalar, size_t vl) {
  return vredand_vs_u16m8_u16m1_m(mask, dest, vector, scalar, vl);
}

vuint32m1_t test_vredand_vs_u32mf2_u32m1_m(vbool64_t mask, vuint32m1_t dest, vuint32mf2_t vector, vuint32m1_t scalar, size_t vl) {
  return vredand_vs_u32mf2_u32m1_m(mask, dest, vector, scalar, vl);
}

vuint32m1_t test_vredand_vs_u32m1_u32m1_m(vbool32_t mask, vuint32m1_t dest, vuint32m1_t vector, vuint32m1_t scalar, size_t vl) {
  return vredand_vs_u32m1_u32m1_m(mask, dest, vector, scalar, vl);
}

vuint32m1_t test_vredand_vs_u32m2_u32m1_m(vbool16_t mask, vuint32m1_t dest, vuint32m2_t vector, vuint32m1_t scalar, size_t vl) {
  return vredand_vs_u32m2_u32m1_m(mask, dest, vector, scalar, vl);
}

vuint32m1_t test_vredand_vs_u32m4_u32m1_m(vbool8_t mask, vuint32m1_t dest, vuint32m4_t vector, vuint32m1_t scalar, size_t vl) {
  return vredand_vs_u32m4_u32m1_m(mask, dest, vector, scalar, vl);
}

vuint32m1_t test_vredand_vs_u32m8_u32m1_m(vbool4_t mask, vuint32m1_t dest, vuint32m8_t vector, vuint32m1_t scalar, size_t vl) {
  return vredand_vs_u32m8_u32m1_m(mask, dest, vector, scalar, vl);
}

vuint64m1_t test_vredand_vs_u64m1_u64m1_m(vbool64_t mask, vuint64m1_t dest, vuint64m1_t vector, vuint64m1_t scalar, size_t vl) {
  return vredand_vs_u64m1_u64m1_m(mask, dest, vector, scalar, vl);
}

vuint64m1_t test_vredand_vs_u64m2_u64m1_m(vbool32_t mask, vuint64m1_t dest, vuint64m2_t vector, vuint64m1_t scalar, size_t vl) {
  return vredand_vs_u64m2_u64m1_m(mask, dest, vector, scalar, vl);
}

vuint64m1_t test_vredand_vs_u64m4_u64m1_m(vbool16_t mask, vuint64m1_t dest, vuint64m4_t vector, vuint64m1_t scalar, size_t vl) {
  return vredand_vs_u64m4_u64m1_m(mask, dest, vector, scalar, vl);
}

vuint64m1_t test_vredand_vs_u64m8_u64m1_m(vbool8_t mask, vuint64m1_t dest, vuint64m8_t vector, vuint64m1_t scalar, size_t vl) {
  return vredand_vs_u64m8_u64m1_m(mask, dest, vector, scalar, vl);
}

