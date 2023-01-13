// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vlseg8e16ff_v_f16mf4_m(vfloat16mf4_t *v0, vfloat16mf4_t *v1, vfloat16mf4_t *v2, vfloat16mf4_t *v3, vfloat16mf4_t *v4, vfloat16mf4_t *v5, vfloat16mf4_t *v6, vfloat16mf4_t *v7, vbool64_t mask, const _Float16 *base, size_t *new_vl, size_t vl) {
  return vlseg8e16ff(v0, v1, v2, v3, v4, v5, v6, v7, mask, base, new_vl, vl);
}

void test_vlseg8e16ff_v_f16mf2_m(vfloat16mf2_t *v0, vfloat16mf2_t *v1, vfloat16mf2_t *v2, vfloat16mf2_t *v3, vfloat16mf2_t *v4, vfloat16mf2_t *v5, vfloat16mf2_t *v6, vfloat16mf2_t *v7, vbool32_t mask, const _Float16 *base, size_t *new_vl, size_t vl) {
  return vlseg8e16ff(v0, v1, v2, v3, v4, v5, v6, v7, mask, base, new_vl, vl);
}

void test_vlseg8e16ff_v_f16m1_m(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t *v3, vfloat16m1_t *v4, vfloat16m1_t *v5, vfloat16m1_t *v6, vfloat16m1_t *v7, vbool16_t mask, const _Float16 *base, size_t *new_vl, size_t vl) {
  return vlseg8e16ff(v0, v1, v2, v3, v4, v5, v6, v7, mask, base, new_vl, vl);
}

void test_vlseg8e16ff_v_i16mf4_m(vint16mf4_t *v0, vint16mf4_t *v1, vint16mf4_t *v2, vint16mf4_t *v3, vint16mf4_t *v4, vint16mf4_t *v5, vint16mf4_t *v6, vint16mf4_t *v7, vbool64_t mask, const int16_t *base, size_t *new_vl, size_t vl) {
  return vlseg8e16ff(v0, v1, v2, v3, v4, v5, v6, v7, mask, base, new_vl, vl);
}

void test_vlseg8e16ff_v_i16mf2_m(vint16mf2_t *v0, vint16mf2_t *v1, vint16mf2_t *v2, vint16mf2_t *v3, vint16mf2_t *v4, vint16mf2_t *v5, vint16mf2_t *v6, vint16mf2_t *v7, vbool32_t mask, const int16_t *base, size_t *new_vl, size_t vl) {
  return vlseg8e16ff(v0, v1, v2, v3, v4, v5, v6, v7, mask, base, new_vl, vl);
}

void test_vlseg8e16ff_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vint16m1_t *v6, vint16m1_t *v7, vbool16_t mask, const int16_t *base, size_t *new_vl, size_t vl) {
  return vlseg8e16ff(v0, v1, v2, v3, v4, v5, v6, v7, mask, base, new_vl, vl);
}

void test_vlseg8e16ff_v_u16mf4_m(vuint16mf4_t *v0, vuint16mf4_t *v1, vuint16mf4_t *v2, vuint16mf4_t *v3, vuint16mf4_t *v4, vuint16mf4_t *v5, vuint16mf4_t *v6, vuint16mf4_t *v7, vbool64_t mask, const uint16_t *base, size_t *new_vl, size_t vl) {
  return vlseg8e16ff(v0, v1, v2, v3, v4, v5, v6, v7, mask, base, new_vl, vl);
}

void test_vlseg8e16ff_v_u16mf2_m(vuint16mf2_t *v0, vuint16mf2_t *v1, vuint16mf2_t *v2, vuint16mf2_t *v3, vuint16mf2_t *v4, vuint16mf2_t *v5, vuint16mf2_t *v6, vuint16mf2_t *v7, vbool32_t mask, const uint16_t *base, size_t *new_vl, size_t vl) {
  return vlseg8e16ff(v0, v1, v2, v3, v4, v5, v6, v7, mask, base, new_vl, vl);
}

void test_vlseg8e16ff_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vuint16m1_t *v6, vuint16m1_t *v7, vbool16_t mask, const uint16_t *base, size_t *new_vl, size_t vl) {
  return vlseg8e16ff(v0, v1, v2, v3, v4, v5, v6, v7, mask, base, new_vl, vl);
}

