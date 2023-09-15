/* { dg-do compile } */
/* { dg-options "-march=rv32gc_zve64d -mabi=ilp32d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include "riscv_vector.h"

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vbool1_t test_vlm_v_b1(const uint8_t *base, size_t vl) {
  return __riscv_vlm_v_b1(base, vl);
}

vbool2_t test_vlm_v_b2(const uint8_t *base, size_t vl) {
  return __riscv_vlm_v_b2(base, vl);
}

vbool4_t test_vlm_v_b4(const uint8_t *base, size_t vl) {
  return __riscv_vlm_v_b4(base, vl);
}

vbool8_t test_vlm_v_b8(const uint8_t *base, size_t vl) {
  return __riscv_vlm_v_b8(base, vl);
}

vbool16_t test_vlm_v_b16(const uint8_t *base, size_t vl) {
  return __riscv_vlm_v_b16(base, vl);
}

vbool32_t test_vlm_v_b32(const uint8_t *base, size_t vl) {
  return __riscv_vlm_v_b32(base, vl);
}

vbool64_t test_vlm_v_b64(const uint8_t *base, size_t vl) {
  return __riscv_vlm_v_b64(base, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vlm\.[ivxfswum.]+\s+} 7 } } */
