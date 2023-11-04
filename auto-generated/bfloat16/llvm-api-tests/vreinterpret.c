// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vbfloat16mf4_t test_vreinterpret_v_i16mf4_bf16mf4(vint16mf4_t src) {
  return __riscv_vreinterpret_v_i16mf4_bf16mf4(src);
}

vbfloat16mf2_t test_vreinterpret_v_i16mf2_bf16mf2(vint16mf2_t src) {
  return __riscv_vreinterpret_v_i16mf2_bf16mf2(src);
}

vbfloat16m1_t test_vreinterpret_v_i16m1_bf16m1(vint16m1_t src) {
  return __riscv_vreinterpret_v_i16m1_bf16m1(src);
}

vbfloat16m2_t test_vreinterpret_v_i16m2_bf16m2(vint16m2_t src) {
  return __riscv_vreinterpret_v_i16m2_bf16m2(src);
}

vbfloat16m4_t test_vreinterpret_v_i16m4_bf16m4(vint16m4_t src) {
  return __riscv_vreinterpret_v_i16m4_bf16m4(src);
}

vbfloat16m8_t test_vreinterpret_v_i16m8_bf16m8(vint16m8_t src) {
  return __riscv_vreinterpret_v_i16m8_bf16m8(src);
}

vbfloat16mf4_t test_vreinterpret_v_ui16mf4_bf16mf4(vuint16mf4_t src) {
  return __riscv_vreinterpret_v_ui16mf4_bf16mf4(src);
}

vbfloat16mf2_t test_vreinterpret_v_ui16mf2_bf16mf2(vuint16mf2_t src) {
  return __riscv_vreinterpret_v_ui16mf2_bf16mf2(src);
}

vbfloat16m1_t test_vreinterpret_v_ui16m1_bf16m1(vuint16m1_t src) {
  return __riscv_vreinterpret_v_ui16m1_bf16m1(src);
}

vbfloat16m2_t test_vreinterpret_v_ui16m2_bf16m2(vuint16m2_t src) {
  return __riscv_vreinterpret_v_ui16m2_bf16m2(src);
}

vbfloat16m4_t test_vreinterpret_v_ui16m4_bf16m4(vuint16m4_t src) {
  return __riscv_vreinterpret_v_ui16m4_bf16m4(src);
}

vbfloat16m8_t test_vreinterpret_v_ui16m8_bf16m8(vuint16m8_t src) {
  return __riscv_vreinterpret_v_ui16m8_bf16m8(src);
}

vint16mf4_t test_vreinterpret_v_bf16mf4_i16mf4(vbfloat16mf4_t src) {
  return __riscv_vreinterpret_v_bf16mf4_i16mf4(src);
}

vint16mf2_t test_vreinterpret_v_bf16mf2_i16mf2(vbfloat16mf2_t src) {
  return __riscv_vreinterpret_v_bf16mf2_i16mf2(src);
}

vint16m1_t test_vreinterpret_v_bf16m1_i16m1(vbfloat16m1_t src) {
  return __riscv_vreinterpret_v_bf16m1_i16m1(src);
}

vint16m2_t test_vreinterpret_v_bf16m2_i16m2(vbfloat16m2_t src) {
  return __riscv_vreinterpret_v_bf16m2_i16m2(src);
}

vint16m4_t test_vreinterpret_v_bf16m4_i16m4(vbfloat16m4_t src) {
  return __riscv_vreinterpret_v_bf16m4_i16m4(src);
}

vint16m8_t test_vreinterpret_v_bf16m8_i16m8(vbfloat16m8_t src) {
  return __riscv_vreinterpret_v_bf16m8_i16m8(src);
}

vuint16mf4_t test_vreinterpret_v_bf16mf4_ui16mf4(vbfloat16mf4_t src) {
  return __riscv_vreinterpret_v_bf16mf4_ui16mf4(src);
}

vuint16mf2_t test_vreinterpret_v_bf16mf2_ui16mf2(vbfloat16mf2_t src) {
  return __riscv_vreinterpret_v_bf16mf2_ui16mf2(src);
}

vuint16m1_t test_vreinterpret_v_bf16m1_ui16m1(vbfloat16m1_t src) {
  return __riscv_vreinterpret_v_bf16m1_ui16m1(src);
}

vuint16m2_t test_vreinterpret_v_bf16m2_ui16m2(vbfloat16m2_t src) {
  return __riscv_vreinterpret_v_bf16m2_ui16m2(src);
}

vuint16m4_t test_vreinterpret_v_bf16m4_ui16m4(vbfloat16m4_t src) {
  return __riscv_vreinterpret_v_bf16m4_ui16m4(src);
}

vuint16m8_t test_vreinterpret_v_bf16m8_ui16m8(vbfloat16m8_t src) {
  return __riscv_vreinterpret_v_bf16m8_ui16m8(src);
}
