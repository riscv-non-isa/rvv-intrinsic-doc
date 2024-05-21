#include <riscv_vector.h>
#include <stdint.h>

vbfloat16m2_t test_vset_v_bf16m1_bf16m2(vbfloat16m2_t dest, size_t index,
                                        vbfloat16m1_t value) {
  return __riscv_vset_v_bf16m1_bf16m2(dest, 0, value);
}

vbfloat16m4_t test_vset_v_bf16m1_bf16m4(vbfloat16m4_t dest, size_t index,
                                        vbfloat16m1_t value) {
  return __riscv_vset_v_bf16m1_bf16m4(dest, 0, value);
}

vbfloat16m4_t test_vset_v_bf16m2_bf16m4(vbfloat16m4_t dest, size_t index,
                                        vbfloat16m2_t value) {
  return __riscv_vset_v_bf16m2_bf16m4(dest, 0, value);
}

vbfloat16m8_t test_vset_v_bf16m1_bf16m8(vbfloat16m8_t dest, size_t index,
                                        vbfloat16m1_t value) {
  return __riscv_vset_v_bf16m1_bf16m8(dest, 0, value);
}

vbfloat16m8_t test_vset_v_bf16m2_bf16m8(vbfloat16m8_t dest, size_t index,
                                        vbfloat16m2_t value) {
  return __riscv_vset_v_bf16m2_bf16m8(dest, 0, value);
}

vbfloat16m8_t test_vset_v_bf16m4_bf16m8(vbfloat16m8_t dest, size_t index,
                                        vbfloat16m4_t value) {
  return __riscv_vset_v_bf16m4_bf16m8(dest, 0, value);
}

vbfloat16mf4x2_t test_vset_v_bf16mf4_bf16mf4x2(vbfloat16mf4x2_t dest,
                                               size_t index,
                                               vbfloat16mf4_t value) {
  return __riscv_vset_v_bf16mf4_bf16mf4x2(dest, 0, value);
}

vbfloat16mf4x3_t test_vset_v_bf16mf4_bf16mf4x3(vbfloat16mf4x3_t dest,
                                               size_t index,
                                               vbfloat16mf4_t value) {
  return __riscv_vset_v_bf16mf4_bf16mf4x3(dest, 0, value);
}

vbfloat16mf4x4_t test_vset_v_bf16mf4_bf16mf4x4(vbfloat16mf4x4_t dest,
                                               size_t index,
                                               vbfloat16mf4_t value) {
  return __riscv_vset_v_bf16mf4_bf16mf4x4(dest, 0, value);
}

vbfloat16mf4x5_t test_vset_v_bf16mf4_bf16mf4x5(vbfloat16mf4x5_t dest,
                                               size_t index,
                                               vbfloat16mf4_t value) {
  return __riscv_vset_v_bf16mf4_bf16mf4x5(dest, 0, value);
}

vbfloat16mf4x6_t test_vset_v_bf16mf4_bf16mf4x6(vbfloat16mf4x6_t dest,
                                               size_t index,
                                               vbfloat16mf4_t value) {
  return __riscv_vset_v_bf16mf4_bf16mf4x6(dest, 0, value);
}

vbfloat16mf4x7_t test_vset_v_bf16mf4_bf16mf4x7(vbfloat16mf4x7_t dest,
                                               size_t index,
                                               vbfloat16mf4_t value) {
  return __riscv_vset_v_bf16mf4_bf16mf4x7(dest, 0, value);
}

vbfloat16mf4x8_t test_vset_v_bf16mf4_bf16mf4x8(vbfloat16mf4x8_t dest,
                                               size_t index,
                                               vbfloat16mf4_t value) {
  return __riscv_vset_v_bf16mf4_bf16mf4x8(dest, 0, value);
}

vbfloat16mf2x2_t test_vset_v_bf16mf2_bf16mf2x2(vbfloat16mf2x2_t dest,
                                               size_t index,
                                               vbfloat16mf2_t value) {
  return __riscv_vset_v_bf16mf2_bf16mf2x2(dest, 0, value);
}

vbfloat16mf2x3_t test_vset_v_bf16mf2_bf16mf2x3(vbfloat16mf2x3_t dest,
                                               size_t index,
                                               vbfloat16mf2_t value) {
  return __riscv_vset_v_bf16mf2_bf16mf2x3(dest, 0, value);
}

vbfloat16mf2x4_t test_vset_v_bf16mf2_bf16mf2x4(vbfloat16mf2x4_t dest,
                                               size_t index,
                                               vbfloat16mf2_t value) {
  return __riscv_vset_v_bf16mf2_bf16mf2x4(dest, 0, value);
}

vbfloat16mf2x5_t test_vset_v_bf16mf2_bf16mf2x5(vbfloat16mf2x5_t dest,
                                               size_t index,
                                               vbfloat16mf2_t value) {
  return __riscv_vset_v_bf16mf2_bf16mf2x5(dest, 0, value);
}

vbfloat16mf2x6_t test_vset_v_bf16mf2_bf16mf2x6(vbfloat16mf2x6_t dest,
                                               size_t index,
                                               vbfloat16mf2_t value) {
  return __riscv_vset_v_bf16mf2_bf16mf2x6(dest, 0, value);
}

vbfloat16mf2x7_t test_vset_v_bf16mf2_bf16mf2x7(vbfloat16mf2x7_t dest,
                                               size_t index,
                                               vbfloat16mf2_t value) {
  return __riscv_vset_v_bf16mf2_bf16mf2x7(dest, 0, value);
}

vbfloat16mf2x8_t test_vset_v_bf16mf2_bf16mf2x8(vbfloat16mf2x8_t dest,
                                               size_t index,
                                               vbfloat16mf2_t value) {
  return __riscv_vset_v_bf16mf2_bf16mf2x8(dest, 0, value);
}

vbfloat16m1x2_t test_vset_v_bf16m1_bf16m1x2(vbfloat16m1x2_t dest, size_t index,
                                            vbfloat16m1_t value) {
  return __riscv_vset_v_bf16m1_bf16m1x2(dest, 0, value);
}

vbfloat16m1x3_t test_vset_v_bf16m1_bf16m1x3(vbfloat16m1x3_t dest, size_t index,
                                            vbfloat16m1_t value) {
  return __riscv_vset_v_bf16m1_bf16m1x3(dest, 0, value);
}

vbfloat16m1x4_t test_vset_v_bf16m1_bf16m1x4(vbfloat16m1x4_t dest, size_t index,
                                            vbfloat16m1_t value) {
  return __riscv_vset_v_bf16m1_bf16m1x4(dest, 0, value);
}

vbfloat16m1x5_t test_vset_v_bf16m1_bf16m1x5(vbfloat16m1x5_t dest, size_t index,
                                            vbfloat16m1_t value) {
  return __riscv_vset_v_bf16m1_bf16m1x5(dest, 0, value);
}

vbfloat16m1x6_t test_vset_v_bf16m1_bf16m1x6(vbfloat16m1x6_t dest, size_t index,
                                            vbfloat16m1_t value) {
  return __riscv_vset_v_bf16m1_bf16m1x6(dest, 0, value);
}

vbfloat16m1x7_t test_vset_v_bf16m1_bf16m1x7(vbfloat16m1x7_t dest, size_t index,
                                            vbfloat16m1_t value) {
  return __riscv_vset_v_bf16m1_bf16m1x7(dest, 0, value);
}

vbfloat16m1x8_t test_vset_v_bf16m1_bf16m1x8(vbfloat16m1x8_t dest, size_t index,
                                            vbfloat16m1_t value) {
  return __riscv_vset_v_bf16m1_bf16m1x8(dest, 0, value);
}

vbfloat16m2x2_t test_vset_v_bf16m2_bf16m2x2(vbfloat16m2x2_t dest, size_t index,
                                            vbfloat16m2_t value) {
  return __riscv_vset_v_bf16m2_bf16m2x2(dest, 0, value);
}

vbfloat16m2x3_t test_vset_v_bf16m2_bf16m2x3(vbfloat16m2x3_t dest, size_t index,
                                            vbfloat16m2_t value) {
  return __riscv_vset_v_bf16m2_bf16m2x3(dest, 0, value);
}

vbfloat16m2x4_t test_vset_v_bf16m2_bf16m2x4(vbfloat16m2x4_t dest, size_t index,
                                            vbfloat16m2_t value) {
  return __riscv_vset_v_bf16m2_bf16m2x4(dest, 0, value);
}

vbfloat16m4x2_t test_vset_v_bf16m4_bf16m4x2(vbfloat16m4x2_t dest, size_t index,
                                            vbfloat16m4_t value) {
  return __riscv_vset_v_bf16m4_bf16m4x2(dest, 0, value);
}
