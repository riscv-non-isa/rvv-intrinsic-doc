/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vuint8mf8_t test_vid_v_u8mf8(size_t vl) {
  return __riscv_vid_v_u8mf8(vl);
}

vuint8mf4_t test_vid_v_u8mf4(size_t vl) {
  return __riscv_vid_v_u8mf4(vl);
}

vuint8mf2_t test_vid_v_u8mf2(size_t vl) {
  return __riscv_vid_v_u8mf2(vl);
}

vuint8m1_t test_vid_v_u8m1(size_t vl) {
  return __riscv_vid_v_u8m1(vl);
}

vuint8m2_t test_vid_v_u8m2(size_t vl) {
  return __riscv_vid_v_u8m2(vl);
}

vuint8m4_t test_vid_v_u8m4(size_t vl) {
  return __riscv_vid_v_u8m4(vl);
}

vuint8m8_t test_vid_v_u8m8(size_t vl) {
  return __riscv_vid_v_u8m8(vl);
}

vuint16mf4_t test_vid_v_u16mf4(size_t vl) {
  return __riscv_vid_v_u16mf4(vl);
}

vuint16mf2_t test_vid_v_u16mf2(size_t vl) {
  return __riscv_vid_v_u16mf2(vl);
}

vuint16m1_t test_vid_v_u16m1(size_t vl) {
  return __riscv_vid_v_u16m1(vl);
}

vuint16m2_t test_vid_v_u16m2(size_t vl) {
  return __riscv_vid_v_u16m2(vl);
}

vuint16m4_t test_vid_v_u16m4(size_t vl) {
  return __riscv_vid_v_u16m4(vl);
}

vuint16m8_t test_vid_v_u16m8(size_t vl) {
  return __riscv_vid_v_u16m8(vl);
}

vuint32mf2_t test_vid_v_u32mf2(size_t vl) {
  return __riscv_vid_v_u32mf2(vl);
}

vuint32m1_t test_vid_v_u32m1(size_t vl) {
  return __riscv_vid_v_u32m1(vl);
}

vuint32m2_t test_vid_v_u32m2(size_t vl) {
  return __riscv_vid_v_u32m2(vl);
}

vuint32m4_t test_vid_v_u32m4(size_t vl) {
  return __riscv_vid_v_u32m4(vl);
}

vuint32m8_t test_vid_v_u32m8(size_t vl) {
  return __riscv_vid_v_u32m8(vl);
}

vuint64m1_t test_vid_v_u64m1(size_t vl) {
  return __riscv_vid_v_u64m1(vl);
}

vuint64m2_t test_vid_v_u64m2(size_t vl) {
  return __riscv_vid_v_u64m2(vl);
}

vuint64m4_t test_vid_v_u64m4(size_t vl) {
  return __riscv_vid_v_u64m4(vl);
}

vuint64m8_t test_vid_v_u64m8(size_t vl) {
  return __riscv_vid_v_u64m8(vl);
}

vuint8mf8_t test_vid_v_u8mf8_m(vbool64_t vm, size_t vl) {
  return __riscv_vid_v_u8mf8_m(vm, vl);
}

vuint8mf4_t test_vid_v_u8mf4_m(vbool32_t vm, size_t vl) {
  return __riscv_vid_v_u8mf4_m(vm, vl);
}

vuint8mf2_t test_vid_v_u8mf2_m(vbool16_t vm, size_t vl) {
  return __riscv_vid_v_u8mf2_m(vm, vl);
}

vuint8m1_t test_vid_v_u8m1_m(vbool8_t vm, size_t vl) {
  return __riscv_vid_v_u8m1_m(vm, vl);
}

vuint8m2_t test_vid_v_u8m2_m(vbool4_t vm, size_t vl) {
  return __riscv_vid_v_u8m2_m(vm, vl);
}

vuint8m4_t test_vid_v_u8m4_m(vbool2_t vm, size_t vl) {
  return __riscv_vid_v_u8m4_m(vm, vl);
}

vuint8m8_t test_vid_v_u8m8_m(vbool1_t vm, size_t vl) {
  return __riscv_vid_v_u8m8_m(vm, vl);
}

vuint16mf4_t test_vid_v_u16mf4_m(vbool64_t vm, size_t vl) {
  return __riscv_vid_v_u16mf4_m(vm, vl);
}

vuint16mf2_t test_vid_v_u16mf2_m(vbool32_t vm, size_t vl) {
  return __riscv_vid_v_u16mf2_m(vm, vl);
}

vuint16m1_t test_vid_v_u16m1_m(vbool16_t vm, size_t vl) {
  return __riscv_vid_v_u16m1_m(vm, vl);
}

vuint16m2_t test_vid_v_u16m2_m(vbool8_t vm, size_t vl) {
  return __riscv_vid_v_u16m2_m(vm, vl);
}

vuint16m4_t test_vid_v_u16m4_m(vbool4_t vm, size_t vl) {
  return __riscv_vid_v_u16m4_m(vm, vl);
}

vuint16m8_t test_vid_v_u16m8_m(vbool2_t vm, size_t vl) {
  return __riscv_vid_v_u16m8_m(vm, vl);
}

vuint32mf2_t test_vid_v_u32mf2_m(vbool64_t vm, size_t vl) {
  return __riscv_vid_v_u32mf2_m(vm, vl);
}

vuint32m1_t test_vid_v_u32m1_m(vbool32_t vm, size_t vl) {
  return __riscv_vid_v_u32m1_m(vm, vl);
}

vuint32m2_t test_vid_v_u32m2_m(vbool16_t vm, size_t vl) {
  return __riscv_vid_v_u32m2_m(vm, vl);
}

vuint32m4_t test_vid_v_u32m4_m(vbool8_t vm, size_t vl) {
  return __riscv_vid_v_u32m4_m(vm, vl);
}

vuint32m8_t test_vid_v_u32m8_m(vbool4_t vm, size_t vl) {
  return __riscv_vid_v_u32m8_m(vm, vl);
}

vuint64m1_t test_vid_v_u64m1_m(vbool64_t vm, size_t vl) {
  return __riscv_vid_v_u64m1_m(vm, vl);
}

vuint64m2_t test_vid_v_u64m2_m(vbool32_t vm, size_t vl) {
  return __riscv_vid_v_u64m2_m(vm, vl);
}

vuint64m4_t test_vid_v_u64m4_m(vbool16_t vm, size_t vl) {
  return __riscv_vid_v_u64m4_m(vm, vl);
}

vuint64m8_t test_vid_v_u64m8_m(vbool8_t vm, size_t vl) {
  return __riscv_vid_v_u64m8_m(vm, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vid\.[ivxfswum.]+\s+} 44 } } */
