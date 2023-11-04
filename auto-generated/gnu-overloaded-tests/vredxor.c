/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

vint8m1_t test_vredxor_vs_i8mf8_i8m1(vint8mf8_t vs2, vint8m1_t vs1, size_t vl) {
  return __riscv_vredxor(vs2, vs1, vl);
}

vint8m1_t test_vredxor_vs_i8mf4_i8m1(vint8mf4_t vs2, vint8m1_t vs1, size_t vl) {
  return __riscv_vredxor(vs2, vs1, vl);
}

vint8m1_t test_vredxor_vs_i8mf2_i8m1(vint8mf2_t vs2, vint8m1_t vs1, size_t vl) {
  return __riscv_vredxor(vs2, vs1, vl);
}

vint8m1_t test_vredxor_vs_i8m1_i8m1(vint8m1_t vs2, vint8m1_t vs1, size_t vl) {
  return __riscv_vredxor(vs2, vs1, vl);
}

vint8m1_t test_vredxor_vs_i8m2_i8m1(vint8m2_t vs2, vint8m1_t vs1, size_t vl) {
  return __riscv_vredxor(vs2, vs1, vl);
}

vint8m1_t test_vredxor_vs_i8m4_i8m1(vint8m4_t vs2, vint8m1_t vs1, size_t vl) {
  return __riscv_vredxor(vs2, vs1, vl);
}

vint8m1_t test_vredxor_vs_i8m8_i8m1(vint8m8_t vs2, vint8m1_t vs1, size_t vl) {
  return __riscv_vredxor(vs2, vs1, vl);
}

vint16m1_t test_vredxor_vs_i16mf4_i16m1(vint16mf4_t vs2, vint16m1_t vs1, size_t vl) {
  return __riscv_vredxor(vs2, vs1, vl);
}

vint16m1_t test_vredxor_vs_i16mf2_i16m1(vint16mf2_t vs2, vint16m1_t vs1, size_t vl) {
  return __riscv_vredxor(vs2, vs1, vl);
}

vint16m1_t test_vredxor_vs_i16m1_i16m1(vint16m1_t vs2, vint16m1_t vs1, size_t vl) {
  return __riscv_vredxor(vs2, vs1, vl);
}

vint16m1_t test_vredxor_vs_i16m2_i16m1(vint16m2_t vs2, vint16m1_t vs1, size_t vl) {
  return __riscv_vredxor(vs2, vs1, vl);
}

vint16m1_t test_vredxor_vs_i16m4_i16m1(vint16m4_t vs2, vint16m1_t vs1, size_t vl) {
  return __riscv_vredxor(vs2, vs1, vl);
}

vint16m1_t test_vredxor_vs_i16m8_i16m1(vint16m8_t vs2, vint16m1_t vs1, size_t vl) {
  return __riscv_vredxor(vs2, vs1, vl);
}

vint32m1_t test_vredxor_vs_i32mf2_i32m1(vint32mf2_t vs2, vint32m1_t vs1, size_t vl) {
  return __riscv_vredxor(vs2, vs1, vl);
}

vint32m1_t test_vredxor_vs_i32m1_i32m1(vint32m1_t vs2, vint32m1_t vs1, size_t vl) {
  return __riscv_vredxor(vs2, vs1, vl);
}

vint32m1_t test_vredxor_vs_i32m2_i32m1(vint32m2_t vs2, vint32m1_t vs1, size_t vl) {
  return __riscv_vredxor(vs2, vs1, vl);
}

vint32m1_t test_vredxor_vs_i32m4_i32m1(vint32m4_t vs2, vint32m1_t vs1, size_t vl) {
  return __riscv_vredxor(vs2, vs1, vl);
}

vint32m1_t test_vredxor_vs_i32m8_i32m1(vint32m8_t vs2, vint32m1_t vs1, size_t vl) {
  return __riscv_vredxor(vs2, vs1, vl);
}

vint64m1_t test_vredxor_vs_i64m1_i64m1(vint64m1_t vs2, vint64m1_t vs1, size_t vl) {
  return __riscv_vredxor(vs2, vs1, vl);
}

vint64m1_t test_vredxor_vs_i64m2_i64m1(vint64m2_t vs2, vint64m1_t vs1, size_t vl) {
  return __riscv_vredxor(vs2, vs1, vl);
}

vint64m1_t test_vredxor_vs_i64m4_i64m1(vint64m4_t vs2, vint64m1_t vs1, size_t vl) {
  return __riscv_vredxor(vs2, vs1, vl);
}

vint64m1_t test_vredxor_vs_i64m8_i64m1(vint64m8_t vs2, vint64m1_t vs1, size_t vl) {
  return __riscv_vredxor(vs2, vs1, vl);
}

vuint8m1_t test_vredxor_vs_u8mf8_u8m1(vuint8mf8_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vredxor(vs2, vs1, vl);
}

vuint8m1_t test_vredxor_vs_u8mf4_u8m1(vuint8mf4_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vredxor(vs2, vs1, vl);
}

vuint8m1_t test_vredxor_vs_u8mf2_u8m1(vuint8mf2_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vredxor(vs2, vs1, vl);
}

vuint8m1_t test_vredxor_vs_u8m1_u8m1(vuint8m1_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vredxor(vs2, vs1, vl);
}

vuint8m1_t test_vredxor_vs_u8m2_u8m1(vuint8m2_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vredxor(vs2, vs1, vl);
}

vuint8m1_t test_vredxor_vs_u8m4_u8m1(vuint8m4_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vredxor(vs2, vs1, vl);
}

vuint8m1_t test_vredxor_vs_u8m8_u8m1(vuint8m8_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vredxor(vs2, vs1, vl);
}

vuint16m1_t test_vredxor_vs_u16mf4_u16m1(vuint16mf4_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vredxor(vs2, vs1, vl);
}

vuint16m1_t test_vredxor_vs_u16mf2_u16m1(vuint16mf2_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vredxor(vs2, vs1, vl);
}

vuint16m1_t test_vredxor_vs_u16m1_u16m1(vuint16m1_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vredxor(vs2, vs1, vl);
}

vuint16m1_t test_vredxor_vs_u16m2_u16m1(vuint16m2_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vredxor(vs2, vs1, vl);
}

vuint16m1_t test_vredxor_vs_u16m4_u16m1(vuint16m4_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vredxor(vs2, vs1, vl);
}

vuint16m1_t test_vredxor_vs_u16m8_u16m1(vuint16m8_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vredxor(vs2, vs1, vl);
}

vuint32m1_t test_vredxor_vs_u32mf2_u32m1(vuint32mf2_t vs2, vuint32m1_t vs1, size_t vl) {
  return __riscv_vredxor(vs2, vs1, vl);
}

vuint32m1_t test_vredxor_vs_u32m1_u32m1(vuint32m1_t vs2, vuint32m1_t vs1, size_t vl) {
  return __riscv_vredxor(vs2, vs1, vl);
}

vuint32m1_t test_vredxor_vs_u32m2_u32m1(vuint32m2_t vs2, vuint32m1_t vs1, size_t vl) {
  return __riscv_vredxor(vs2, vs1, vl);
}

vuint32m1_t test_vredxor_vs_u32m4_u32m1(vuint32m4_t vs2, vuint32m1_t vs1, size_t vl) {
  return __riscv_vredxor(vs2, vs1, vl);
}

vuint32m1_t test_vredxor_vs_u32m8_u32m1(vuint32m8_t vs2, vuint32m1_t vs1, size_t vl) {
  return __riscv_vredxor(vs2, vs1, vl);
}

vuint64m1_t test_vredxor_vs_u64m1_u64m1(vuint64m1_t vs2, vuint64m1_t vs1, size_t vl) {
  return __riscv_vredxor(vs2, vs1, vl);
}

vuint64m1_t test_vredxor_vs_u64m2_u64m1(vuint64m2_t vs2, vuint64m1_t vs1, size_t vl) {
  return __riscv_vredxor(vs2, vs1, vl);
}

vuint64m1_t test_vredxor_vs_u64m4_u64m1(vuint64m4_t vs2, vuint64m1_t vs1, size_t vl) {
  return __riscv_vredxor(vs2, vs1, vl);
}

vuint64m1_t test_vredxor_vs_u64m8_u64m1(vuint64m8_t vs2, vuint64m1_t vs1, size_t vl) {
  return __riscv_vredxor(vs2, vs1, vl);
}

vint8m1_t test_vredxor_vs_i8mf8_i8m1_m(vbool64_t vm, vint8mf8_t vs2, vint8m1_t vs1, size_t vl) {
  return __riscv_vredxor(vm, vs2, vs1, vl);
}

vint8m1_t test_vredxor_vs_i8mf4_i8m1_m(vbool32_t vm, vint8mf4_t vs2, vint8m1_t vs1, size_t vl) {
  return __riscv_vredxor(vm, vs2, vs1, vl);
}

vint8m1_t test_vredxor_vs_i8mf2_i8m1_m(vbool16_t vm, vint8mf2_t vs2, vint8m1_t vs1, size_t vl) {
  return __riscv_vredxor(vm, vs2, vs1, vl);
}

vint8m1_t test_vredxor_vs_i8m1_i8m1_m(vbool8_t vm, vint8m1_t vs2, vint8m1_t vs1, size_t vl) {
  return __riscv_vredxor(vm, vs2, vs1, vl);
}

vint8m1_t test_vredxor_vs_i8m2_i8m1_m(vbool4_t vm, vint8m2_t vs2, vint8m1_t vs1, size_t vl) {
  return __riscv_vredxor(vm, vs2, vs1, vl);
}

vint8m1_t test_vredxor_vs_i8m4_i8m1_m(vbool2_t vm, vint8m4_t vs2, vint8m1_t vs1, size_t vl) {
  return __riscv_vredxor(vm, vs2, vs1, vl);
}

vint8m1_t test_vredxor_vs_i8m8_i8m1_m(vbool1_t vm, vint8m8_t vs2, vint8m1_t vs1, size_t vl) {
  return __riscv_vredxor(vm, vs2, vs1, vl);
}

vint16m1_t test_vredxor_vs_i16mf4_i16m1_m(vbool64_t vm, vint16mf4_t vs2, vint16m1_t vs1, size_t vl) {
  return __riscv_vredxor(vm, vs2, vs1, vl);
}

vint16m1_t test_vredxor_vs_i16mf2_i16m1_m(vbool32_t vm, vint16mf2_t vs2, vint16m1_t vs1, size_t vl) {
  return __riscv_vredxor(vm, vs2, vs1, vl);
}

vint16m1_t test_vredxor_vs_i16m1_i16m1_m(vbool16_t vm, vint16m1_t vs2, vint16m1_t vs1, size_t vl) {
  return __riscv_vredxor(vm, vs2, vs1, vl);
}

vint16m1_t test_vredxor_vs_i16m2_i16m1_m(vbool8_t vm, vint16m2_t vs2, vint16m1_t vs1, size_t vl) {
  return __riscv_vredxor(vm, vs2, vs1, vl);
}

vint16m1_t test_vredxor_vs_i16m4_i16m1_m(vbool4_t vm, vint16m4_t vs2, vint16m1_t vs1, size_t vl) {
  return __riscv_vredxor(vm, vs2, vs1, vl);
}

vint16m1_t test_vredxor_vs_i16m8_i16m1_m(vbool2_t vm, vint16m8_t vs2, vint16m1_t vs1, size_t vl) {
  return __riscv_vredxor(vm, vs2, vs1, vl);
}

vint32m1_t test_vredxor_vs_i32mf2_i32m1_m(vbool64_t vm, vint32mf2_t vs2, vint32m1_t vs1, size_t vl) {
  return __riscv_vredxor(vm, vs2, vs1, vl);
}

vint32m1_t test_vredxor_vs_i32m1_i32m1_m(vbool32_t vm, vint32m1_t vs2, vint32m1_t vs1, size_t vl) {
  return __riscv_vredxor(vm, vs2, vs1, vl);
}

vint32m1_t test_vredxor_vs_i32m2_i32m1_m(vbool16_t vm, vint32m2_t vs2, vint32m1_t vs1, size_t vl) {
  return __riscv_vredxor(vm, vs2, vs1, vl);
}

vint32m1_t test_vredxor_vs_i32m4_i32m1_m(vbool8_t vm, vint32m4_t vs2, vint32m1_t vs1, size_t vl) {
  return __riscv_vredxor(vm, vs2, vs1, vl);
}

vint32m1_t test_vredxor_vs_i32m8_i32m1_m(vbool4_t vm, vint32m8_t vs2, vint32m1_t vs1, size_t vl) {
  return __riscv_vredxor(vm, vs2, vs1, vl);
}

vint64m1_t test_vredxor_vs_i64m1_i64m1_m(vbool64_t vm, vint64m1_t vs2, vint64m1_t vs1, size_t vl) {
  return __riscv_vredxor(vm, vs2, vs1, vl);
}

vint64m1_t test_vredxor_vs_i64m2_i64m1_m(vbool32_t vm, vint64m2_t vs2, vint64m1_t vs1, size_t vl) {
  return __riscv_vredxor(vm, vs2, vs1, vl);
}

vint64m1_t test_vredxor_vs_i64m4_i64m1_m(vbool16_t vm, vint64m4_t vs2, vint64m1_t vs1, size_t vl) {
  return __riscv_vredxor(vm, vs2, vs1, vl);
}

vint64m1_t test_vredxor_vs_i64m8_i64m1_m(vbool8_t vm, vint64m8_t vs2, vint64m1_t vs1, size_t vl) {
  return __riscv_vredxor(vm, vs2, vs1, vl);
}

vuint8m1_t test_vredxor_vs_u8mf8_u8m1_m(vbool64_t vm, vuint8mf8_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vredxor(vm, vs2, vs1, vl);
}

vuint8m1_t test_vredxor_vs_u8mf4_u8m1_m(vbool32_t vm, vuint8mf4_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vredxor(vm, vs2, vs1, vl);
}

vuint8m1_t test_vredxor_vs_u8mf2_u8m1_m(vbool16_t vm, vuint8mf2_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vredxor(vm, vs2, vs1, vl);
}

vuint8m1_t test_vredxor_vs_u8m1_u8m1_m(vbool8_t vm, vuint8m1_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vredxor(vm, vs2, vs1, vl);
}

vuint8m1_t test_vredxor_vs_u8m2_u8m1_m(vbool4_t vm, vuint8m2_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vredxor(vm, vs2, vs1, vl);
}

vuint8m1_t test_vredxor_vs_u8m4_u8m1_m(vbool2_t vm, vuint8m4_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vredxor(vm, vs2, vs1, vl);
}

vuint8m1_t test_vredxor_vs_u8m8_u8m1_m(vbool1_t vm, vuint8m8_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vredxor(vm, vs2, vs1, vl);
}

vuint16m1_t test_vredxor_vs_u16mf4_u16m1_m(vbool64_t vm, vuint16mf4_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vredxor(vm, vs2, vs1, vl);
}

vuint16m1_t test_vredxor_vs_u16mf2_u16m1_m(vbool32_t vm, vuint16mf2_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vredxor(vm, vs2, vs1, vl);
}

vuint16m1_t test_vredxor_vs_u16m1_u16m1_m(vbool16_t vm, vuint16m1_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vredxor(vm, vs2, vs1, vl);
}

vuint16m1_t test_vredxor_vs_u16m2_u16m1_m(vbool8_t vm, vuint16m2_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vredxor(vm, vs2, vs1, vl);
}

vuint16m1_t test_vredxor_vs_u16m4_u16m1_m(vbool4_t vm, vuint16m4_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vredxor(vm, vs2, vs1, vl);
}

vuint16m1_t test_vredxor_vs_u16m8_u16m1_m(vbool2_t vm, vuint16m8_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vredxor(vm, vs2, vs1, vl);
}

vuint32m1_t test_vredxor_vs_u32mf2_u32m1_m(vbool64_t vm, vuint32mf2_t vs2, vuint32m1_t vs1, size_t vl) {
  return __riscv_vredxor(vm, vs2, vs1, vl);
}

vuint32m1_t test_vredxor_vs_u32m1_u32m1_m(vbool32_t vm, vuint32m1_t vs2, vuint32m1_t vs1, size_t vl) {
  return __riscv_vredxor(vm, vs2, vs1, vl);
}

vuint32m1_t test_vredxor_vs_u32m2_u32m1_m(vbool16_t vm, vuint32m2_t vs2, vuint32m1_t vs1, size_t vl) {
  return __riscv_vredxor(vm, vs2, vs1, vl);
}

vuint32m1_t test_vredxor_vs_u32m4_u32m1_m(vbool8_t vm, vuint32m4_t vs2, vuint32m1_t vs1, size_t vl) {
  return __riscv_vredxor(vm, vs2, vs1, vl);
}

vuint32m1_t test_vredxor_vs_u32m8_u32m1_m(vbool4_t vm, vuint32m8_t vs2, vuint32m1_t vs1, size_t vl) {
  return __riscv_vredxor(vm, vs2, vs1, vl);
}

vuint64m1_t test_vredxor_vs_u64m1_u64m1_m(vbool64_t vm, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl) {
  return __riscv_vredxor(vm, vs2, vs1, vl);
}

vuint64m1_t test_vredxor_vs_u64m2_u64m1_m(vbool32_t vm, vuint64m2_t vs2, vuint64m1_t vs1, size_t vl) {
  return __riscv_vredxor(vm, vs2, vs1, vl);
}

vuint64m1_t test_vredxor_vs_u64m4_u64m1_m(vbool16_t vm, vuint64m4_t vs2, vuint64m1_t vs1, size_t vl) {
  return __riscv_vredxor(vm, vs2, vs1, vl);
}

vuint64m1_t test_vredxor_vs_u64m8_u64m1_m(vbool8_t vm, vuint64m8_t vs2, vuint64m1_t vs1, size_t vl) {
  return __riscv_vredxor(vm, vs2, vs1, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vredxor\.[ivxfswum.]+\s+} 88 } } */
