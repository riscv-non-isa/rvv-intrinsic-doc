/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

vint8mf8x2_t test_vlseg2e8ff_v_i8mf8x2_m(vbool64_t vm, const int8_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff(vm, rs1, new_vl, vl);
}

vint8mf4x2_t test_vlseg2e8ff_v_i8mf4x2_m(vbool32_t vm, const int8_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff(vm, rs1, new_vl, vl);
}

vint8mf2x2_t test_vlseg2e8ff_v_i8mf2x2_m(vbool16_t vm, const int8_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff(vm, rs1, new_vl, vl);
}

vint8m1x2_t test_vlseg2e8ff_v_i8m1x2_m(vbool8_t vm, const int8_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff(vm, rs1, new_vl, vl);
}

vint8m2x2_t test_vlseg2e8ff_v_i8m2x2_m(vbool4_t vm, const int8_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff(vm, rs1, new_vl, vl);
}

vint8m4x2_t test_vlseg2e8ff_v_i8m4x2_m(vbool2_t vm, const int8_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff(vm, rs1, new_vl, vl);
}

vuint8mf8x2_t test_vlseg2e8ff_v_u8mf8x2_m(vbool64_t vm, const uint8_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff(vm, rs1, new_vl, vl);
}

vuint8mf4x2_t test_vlseg2e8ff_v_u8mf4x2_m(vbool32_t vm, const uint8_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff(vm, rs1, new_vl, vl);
}

vuint8mf2x2_t test_vlseg2e8ff_v_u8mf2x2_m(vbool16_t vm, const uint8_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff(vm, rs1, new_vl, vl);
}

vuint8m1x2_t test_vlseg2e8ff_v_u8m1x2_m(vbool8_t vm, const uint8_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff(vm, rs1, new_vl, vl);
}

vuint8m2x2_t test_vlseg2e8ff_v_u8m2x2_m(vbool4_t vm, const uint8_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff(vm, rs1, new_vl, vl);
}

vuint8m4x2_t test_vlseg2e8ff_v_u8m4x2_m(vbool2_t vm, const uint8_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff(vm, rs1, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vlseg2e8ff\.[ivxfswum.]+\s+} 12 } } */
