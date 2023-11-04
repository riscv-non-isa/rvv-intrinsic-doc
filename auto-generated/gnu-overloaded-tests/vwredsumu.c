/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

vuint16m1_t test_vwredsumu_vs_u8mf8_u16m1(vuint8mf8_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vwredsumu(vs2, vs1, vl);
}

vuint16m1_t test_vwredsumu_vs_u8mf4_u16m1(vuint8mf4_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vwredsumu(vs2, vs1, vl);
}

vuint16m1_t test_vwredsumu_vs_u8mf2_u16m1(vuint8mf2_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vwredsumu(vs2, vs1, vl);
}

vuint16m1_t test_vwredsumu_vs_u8m1_u16m1(vuint8m1_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vwredsumu(vs2, vs1, vl);
}

vuint16m1_t test_vwredsumu_vs_u8m2_u16m1(vuint8m2_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vwredsumu(vs2, vs1, vl);
}

vuint16m1_t test_vwredsumu_vs_u8m4_u16m1(vuint8m4_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vwredsumu(vs2, vs1, vl);
}

vuint16m1_t test_vwredsumu_vs_u8m8_u16m1(vuint8m8_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vwredsumu(vs2, vs1, vl);
}

vuint32m1_t test_vwredsumu_vs_u16mf4_u32m1(vuint16mf4_t vs2, vuint32m1_t vs1, size_t vl) {
  return __riscv_vwredsumu(vs2, vs1, vl);
}

vuint32m1_t test_vwredsumu_vs_u16mf2_u32m1(vuint16mf2_t vs2, vuint32m1_t vs1, size_t vl) {
  return __riscv_vwredsumu(vs2, vs1, vl);
}

vuint32m1_t test_vwredsumu_vs_u16m1_u32m1(vuint16m1_t vs2, vuint32m1_t vs1, size_t vl) {
  return __riscv_vwredsumu(vs2, vs1, vl);
}

vuint32m1_t test_vwredsumu_vs_u16m2_u32m1(vuint16m2_t vs2, vuint32m1_t vs1, size_t vl) {
  return __riscv_vwredsumu(vs2, vs1, vl);
}

vuint32m1_t test_vwredsumu_vs_u16m4_u32m1(vuint16m4_t vs2, vuint32m1_t vs1, size_t vl) {
  return __riscv_vwredsumu(vs2, vs1, vl);
}

vuint32m1_t test_vwredsumu_vs_u16m8_u32m1(vuint16m8_t vs2, vuint32m1_t vs1, size_t vl) {
  return __riscv_vwredsumu(vs2, vs1, vl);
}

vuint64m1_t test_vwredsumu_vs_u32mf2_u64m1(vuint32mf2_t vs2, vuint64m1_t vs1, size_t vl) {
  return __riscv_vwredsumu(vs2, vs1, vl);
}

vuint64m1_t test_vwredsumu_vs_u32m1_u64m1(vuint32m1_t vs2, vuint64m1_t vs1, size_t vl) {
  return __riscv_vwredsumu(vs2, vs1, vl);
}

vuint64m1_t test_vwredsumu_vs_u32m2_u64m1(vuint32m2_t vs2, vuint64m1_t vs1, size_t vl) {
  return __riscv_vwredsumu(vs2, vs1, vl);
}

vuint64m1_t test_vwredsumu_vs_u32m4_u64m1(vuint32m4_t vs2, vuint64m1_t vs1, size_t vl) {
  return __riscv_vwredsumu(vs2, vs1, vl);
}

vuint64m1_t test_vwredsumu_vs_u32m8_u64m1(vuint32m8_t vs2, vuint64m1_t vs1, size_t vl) {
  return __riscv_vwredsumu(vs2, vs1, vl);
}

vuint16m1_t test_vwredsumu_vs_u8mf8_u16m1_m(vbool64_t vm, vuint8mf8_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vwredsumu(vm, vs2, vs1, vl);
}

vuint16m1_t test_vwredsumu_vs_u8mf4_u16m1_m(vbool32_t vm, vuint8mf4_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vwredsumu(vm, vs2, vs1, vl);
}

vuint16m1_t test_vwredsumu_vs_u8mf2_u16m1_m(vbool16_t vm, vuint8mf2_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vwredsumu(vm, vs2, vs1, vl);
}

vuint16m1_t test_vwredsumu_vs_u8m1_u16m1_m(vbool8_t vm, vuint8m1_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vwredsumu(vm, vs2, vs1, vl);
}

vuint16m1_t test_vwredsumu_vs_u8m2_u16m1_m(vbool4_t vm, vuint8m2_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vwredsumu(vm, vs2, vs1, vl);
}

vuint16m1_t test_vwredsumu_vs_u8m4_u16m1_m(vbool2_t vm, vuint8m4_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vwredsumu(vm, vs2, vs1, vl);
}

vuint16m1_t test_vwredsumu_vs_u8m8_u16m1_m(vbool1_t vm, vuint8m8_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vwredsumu(vm, vs2, vs1, vl);
}

vuint32m1_t test_vwredsumu_vs_u16mf4_u32m1_m(vbool64_t vm, vuint16mf4_t vs2, vuint32m1_t vs1, size_t vl) {
  return __riscv_vwredsumu(vm, vs2, vs1, vl);
}

vuint32m1_t test_vwredsumu_vs_u16mf2_u32m1_m(vbool32_t vm, vuint16mf2_t vs2, vuint32m1_t vs1, size_t vl) {
  return __riscv_vwredsumu(vm, vs2, vs1, vl);
}

vuint32m1_t test_vwredsumu_vs_u16m1_u32m1_m(vbool16_t vm, vuint16m1_t vs2, vuint32m1_t vs1, size_t vl) {
  return __riscv_vwredsumu(vm, vs2, vs1, vl);
}

vuint32m1_t test_vwredsumu_vs_u16m2_u32m1_m(vbool8_t vm, vuint16m2_t vs2, vuint32m1_t vs1, size_t vl) {
  return __riscv_vwredsumu(vm, vs2, vs1, vl);
}

vuint32m1_t test_vwredsumu_vs_u16m4_u32m1_m(vbool4_t vm, vuint16m4_t vs2, vuint32m1_t vs1, size_t vl) {
  return __riscv_vwredsumu(vm, vs2, vs1, vl);
}

vuint32m1_t test_vwredsumu_vs_u16m8_u32m1_m(vbool2_t vm, vuint16m8_t vs2, vuint32m1_t vs1, size_t vl) {
  return __riscv_vwredsumu(vm, vs2, vs1, vl);
}

vuint64m1_t test_vwredsumu_vs_u32mf2_u64m1_m(vbool64_t vm, vuint32mf2_t vs2, vuint64m1_t vs1, size_t vl) {
  return __riscv_vwredsumu(vm, vs2, vs1, vl);
}

vuint64m1_t test_vwredsumu_vs_u32m1_u64m1_m(vbool32_t vm, vuint32m1_t vs2, vuint64m1_t vs1, size_t vl) {
  return __riscv_vwredsumu(vm, vs2, vs1, vl);
}

vuint64m1_t test_vwredsumu_vs_u32m2_u64m1_m(vbool16_t vm, vuint32m2_t vs2, vuint64m1_t vs1, size_t vl) {
  return __riscv_vwredsumu(vm, vs2, vs1, vl);
}

vuint64m1_t test_vwredsumu_vs_u32m4_u64m1_m(vbool8_t vm, vuint32m4_t vs2, vuint64m1_t vs1, size_t vl) {
  return __riscv_vwredsumu(vm, vs2, vs1, vl);
}

vuint64m1_t test_vwredsumu_vs_u32m8_u64m1_m(vbool4_t vm, vuint32m8_t vs2, vuint64m1_t vs1, size_t vl) {
  return __riscv_vwredsumu(vm, vs2, vs1, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vwredsumu\.[ivxfswum.]+\s+} 36 } } */
