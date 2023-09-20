#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat16mf4x7_t test_vlseg7e16_v_f16mf4x7(const float16_t *rs1, size_t vl) {
  return __riscv_vlseg7e16_v_f16mf4x7(rs1, vl);
}

vfloat16mf2x7_t test_vlseg7e16_v_f16mf2x7(const float16_t *rs1, size_t vl) {
  return __riscv_vlseg7e16_v_f16mf2x7(rs1, vl);
}

vfloat16m1x7_t test_vlseg7e16_v_f16m1x7(const float16_t *rs1, size_t vl) {
  return __riscv_vlseg7e16_v_f16m1x7(rs1, vl);
}

vint16mf4x7_t test_vlseg7e16_v_i16mf4x7(const int16_t *rs1, size_t vl) {
  return __riscv_vlseg7e16_v_i16mf4x7(rs1, vl);
}

vint16mf2x7_t test_vlseg7e16_v_i16mf2x7(const int16_t *rs1, size_t vl) {
  return __riscv_vlseg7e16_v_i16mf2x7(rs1, vl);
}

vint16m1x7_t test_vlseg7e16_v_i16m1x7(const int16_t *rs1, size_t vl) {
  return __riscv_vlseg7e16_v_i16m1x7(rs1, vl);
}

vuint16mf4x7_t test_vlseg7e16_v_u16mf4x7(const uint16_t *rs1, size_t vl) {
  return __riscv_vlseg7e16_v_u16mf4x7(rs1, vl);
}

vuint16mf2x7_t test_vlseg7e16_v_u16mf2x7(const uint16_t *rs1, size_t vl) {
  return __riscv_vlseg7e16_v_u16mf2x7(rs1, vl);
}

vuint16m1x7_t test_vlseg7e16_v_u16m1x7(const uint16_t *rs1, size_t vl) {
  return __riscv_vlseg7e16_v_u16m1x7(rs1, vl);
}

vfloat16mf4x7_t test_vlseg7e16_v_f16mf4x7_m(vbool64_t vm, const float16_t *rs1,
                                            size_t vl) {
  return __riscv_vlseg7e16_v_f16mf4x7_m(vm, rs1, vl);
}

vfloat16mf2x7_t test_vlseg7e16_v_f16mf2x7_m(vbool32_t vm, const float16_t *rs1,
                                            size_t vl) {
  return __riscv_vlseg7e16_v_f16mf2x7_m(vm, rs1, vl);
}

vfloat16m1x7_t test_vlseg7e16_v_f16m1x7_m(vbool16_t vm, const float16_t *rs1,
                                          size_t vl) {
  return __riscv_vlseg7e16_v_f16m1x7_m(vm, rs1, vl);
}

vint16mf4x7_t test_vlseg7e16_v_i16mf4x7_m(vbool64_t vm, const int16_t *rs1,
                                          size_t vl) {
  return __riscv_vlseg7e16_v_i16mf4x7_m(vm, rs1, vl);
}

vint16mf2x7_t test_vlseg7e16_v_i16mf2x7_m(vbool32_t vm, const int16_t *rs1,
                                          size_t vl) {
  return __riscv_vlseg7e16_v_i16mf2x7_m(vm, rs1, vl);
}

vint16m1x7_t test_vlseg7e16_v_i16m1x7_m(vbool16_t vm, const int16_t *rs1,
                                        size_t vl) {
  return __riscv_vlseg7e16_v_i16m1x7_m(vm, rs1, vl);
}

vuint16mf4x7_t test_vlseg7e16_v_u16mf4x7_m(vbool64_t vm, const uint16_t *rs1,
                                           size_t vl) {
  return __riscv_vlseg7e16_v_u16mf4x7_m(vm, rs1, vl);
}

vuint16mf2x7_t test_vlseg7e16_v_u16mf2x7_m(vbool32_t vm, const uint16_t *rs1,
                                           size_t vl) {
  return __riscv_vlseg7e16_v_u16mf2x7_m(vm, rs1, vl);
}

vuint16m1x7_t test_vlseg7e16_v_u16m1x7_m(vbool16_t vm, const uint16_t *rs1,
                                         size_t vl) {
  return __riscv_vlseg7e16_v_u16m1x7_m(vm, rs1, vl);
}
