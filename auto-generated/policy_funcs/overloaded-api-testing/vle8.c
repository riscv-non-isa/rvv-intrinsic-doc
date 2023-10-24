#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

vint8mf8_t test_vle8_v_i8mf8_tu(vint8mf8_t vd, const int8_t *rs1, size_t vl) {
  return __riscv_vle8_tu(vd, rs1, vl);
}

vint8mf4_t test_vle8_v_i8mf4_tu(vint8mf4_t vd, const int8_t *rs1, size_t vl) {
  return __riscv_vle8_tu(vd, rs1, vl);
}

vint8mf2_t test_vle8_v_i8mf2_tu(vint8mf2_t vd, const int8_t *rs1, size_t vl) {
  return __riscv_vle8_tu(vd, rs1, vl);
}

vint8m1_t test_vle8_v_i8m1_tu(vint8m1_t vd, const int8_t *rs1, size_t vl) {
  return __riscv_vle8_tu(vd, rs1, vl);
}

vint8m2_t test_vle8_v_i8m2_tu(vint8m2_t vd, const int8_t *rs1, size_t vl) {
  return __riscv_vle8_tu(vd, rs1, vl);
}

vint8m4_t test_vle8_v_i8m4_tu(vint8m4_t vd, const int8_t *rs1, size_t vl) {
  return __riscv_vle8_tu(vd, rs1, vl);
}

vint8m8_t test_vle8_v_i8m8_tu(vint8m8_t vd, const int8_t *rs1, size_t vl) {
  return __riscv_vle8_tu(vd, rs1, vl);
}

vuint8mf8_t test_vle8_v_u8mf8_tu(vuint8mf8_t vd, const uint8_t *rs1,
                                 size_t vl) {
  return __riscv_vle8_tu(vd, rs1, vl);
}

vuint8mf4_t test_vle8_v_u8mf4_tu(vuint8mf4_t vd, const uint8_t *rs1,
                                 size_t vl) {
  return __riscv_vle8_tu(vd, rs1, vl);
}

vuint8mf2_t test_vle8_v_u8mf2_tu(vuint8mf2_t vd, const uint8_t *rs1,
                                 size_t vl) {
  return __riscv_vle8_tu(vd, rs1, vl);
}

vuint8m1_t test_vle8_v_u8m1_tu(vuint8m1_t vd, const uint8_t *rs1, size_t vl) {
  return __riscv_vle8_tu(vd, rs1, vl);
}

vuint8m2_t test_vle8_v_u8m2_tu(vuint8m2_t vd, const uint8_t *rs1, size_t vl) {
  return __riscv_vle8_tu(vd, rs1, vl);
}

vuint8m4_t test_vle8_v_u8m4_tu(vuint8m4_t vd, const uint8_t *rs1, size_t vl) {
  return __riscv_vle8_tu(vd, rs1, vl);
}

vuint8m8_t test_vle8_v_u8m8_tu(vuint8m8_t vd, const uint8_t *rs1, size_t vl) {
  return __riscv_vle8_tu(vd, rs1, vl);
}

vint8mf8_t test_vle8_v_i8mf8_tum(vbool64_t vm, vint8mf8_t vd, const int8_t *rs1,
                                 size_t vl) {
  return __riscv_vle8_tum(vm, vd, rs1, vl);
}

vint8mf4_t test_vle8_v_i8mf4_tum(vbool32_t vm, vint8mf4_t vd, const int8_t *rs1,
                                 size_t vl) {
  return __riscv_vle8_tum(vm, vd, rs1, vl);
}

vint8mf2_t test_vle8_v_i8mf2_tum(vbool16_t vm, vint8mf2_t vd, const int8_t *rs1,
                                 size_t vl) {
  return __riscv_vle8_tum(vm, vd, rs1, vl);
}

vint8m1_t test_vle8_v_i8m1_tum(vbool8_t vm, vint8m1_t vd, const int8_t *rs1,
                               size_t vl) {
  return __riscv_vle8_tum(vm, vd, rs1, vl);
}

vint8m2_t test_vle8_v_i8m2_tum(vbool4_t vm, vint8m2_t vd, const int8_t *rs1,
                               size_t vl) {
  return __riscv_vle8_tum(vm, vd, rs1, vl);
}

vint8m4_t test_vle8_v_i8m4_tum(vbool2_t vm, vint8m4_t vd, const int8_t *rs1,
                               size_t vl) {
  return __riscv_vle8_tum(vm, vd, rs1, vl);
}

vint8m8_t test_vle8_v_i8m8_tum(vbool1_t vm, vint8m8_t vd, const int8_t *rs1,
                               size_t vl) {
  return __riscv_vle8_tum(vm, vd, rs1, vl);
}

vuint8mf8_t test_vle8_v_u8mf8_tum(vbool64_t vm, vuint8mf8_t vd,
                                  const uint8_t *rs1, size_t vl) {
  return __riscv_vle8_tum(vm, vd, rs1, vl);
}

vuint8mf4_t test_vle8_v_u8mf4_tum(vbool32_t vm, vuint8mf4_t vd,
                                  const uint8_t *rs1, size_t vl) {
  return __riscv_vle8_tum(vm, vd, rs1, vl);
}

vuint8mf2_t test_vle8_v_u8mf2_tum(vbool16_t vm, vuint8mf2_t vd,
                                  const uint8_t *rs1, size_t vl) {
  return __riscv_vle8_tum(vm, vd, rs1, vl);
}

vuint8m1_t test_vle8_v_u8m1_tum(vbool8_t vm, vuint8m1_t vd, const uint8_t *rs1,
                                size_t vl) {
  return __riscv_vle8_tum(vm, vd, rs1, vl);
}

vuint8m2_t test_vle8_v_u8m2_tum(vbool4_t vm, vuint8m2_t vd, const uint8_t *rs1,
                                size_t vl) {
  return __riscv_vle8_tum(vm, vd, rs1, vl);
}

vuint8m4_t test_vle8_v_u8m4_tum(vbool2_t vm, vuint8m4_t vd, const uint8_t *rs1,
                                size_t vl) {
  return __riscv_vle8_tum(vm, vd, rs1, vl);
}

vuint8m8_t test_vle8_v_u8m8_tum(vbool1_t vm, vuint8m8_t vd, const uint8_t *rs1,
                                size_t vl) {
  return __riscv_vle8_tum(vm, vd, rs1, vl);
}

vint8mf8_t test_vle8_v_i8mf8_tumu(vbool64_t vm, vint8mf8_t vd,
                                  const int8_t *rs1, size_t vl) {
  return __riscv_vle8_tumu(vm, vd, rs1, vl);
}

vint8mf4_t test_vle8_v_i8mf4_tumu(vbool32_t vm, vint8mf4_t vd,
                                  const int8_t *rs1, size_t vl) {
  return __riscv_vle8_tumu(vm, vd, rs1, vl);
}

vint8mf2_t test_vle8_v_i8mf2_tumu(vbool16_t vm, vint8mf2_t vd,
                                  const int8_t *rs1, size_t vl) {
  return __riscv_vle8_tumu(vm, vd, rs1, vl);
}

vint8m1_t test_vle8_v_i8m1_tumu(vbool8_t vm, vint8m1_t vd, const int8_t *rs1,
                                size_t vl) {
  return __riscv_vle8_tumu(vm, vd, rs1, vl);
}

vint8m2_t test_vle8_v_i8m2_tumu(vbool4_t vm, vint8m2_t vd, const int8_t *rs1,
                                size_t vl) {
  return __riscv_vle8_tumu(vm, vd, rs1, vl);
}

vint8m4_t test_vle8_v_i8m4_tumu(vbool2_t vm, vint8m4_t vd, const int8_t *rs1,
                                size_t vl) {
  return __riscv_vle8_tumu(vm, vd, rs1, vl);
}

vint8m8_t test_vle8_v_i8m8_tumu(vbool1_t vm, vint8m8_t vd, const int8_t *rs1,
                                size_t vl) {
  return __riscv_vle8_tumu(vm, vd, rs1, vl);
}

vuint8mf8_t test_vle8_v_u8mf8_tumu(vbool64_t vm, vuint8mf8_t vd,
                                   const uint8_t *rs1, size_t vl) {
  return __riscv_vle8_tumu(vm, vd, rs1, vl);
}

vuint8mf4_t test_vle8_v_u8mf4_tumu(vbool32_t vm, vuint8mf4_t vd,
                                   const uint8_t *rs1, size_t vl) {
  return __riscv_vle8_tumu(vm, vd, rs1, vl);
}

vuint8mf2_t test_vle8_v_u8mf2_tumu(vbool16_t vm, vuint8mf2_t vd,
                                   const uint8_t *rs1, size_t vl) {
  return __riscv_vle8_tumu(vm, vd, rs1, vl);
}

vuint8m1_t test_vle8_v_u8m1_tumu(vbool8_t vm, vuint8m1_t vd, const uint8_t *rs1,
                                 size_t vl) {
  return __riscv_vle8_tumu(vm, vd, rs1, vl);
}

vuint8m2_t test_vle8_v_u8m2_tumu(vbool4_t vm, vuint8m2_t vd, const uint8_t *rs1,
                                 size_t vl) {
  return __riscv_vle8_tumu(vm, vd, rs1, vl);
}

vuint8m4_t test_vle8_v_u8m4_tumu(vbool2_t vm, vuint8m4_t vd, const uint8_t *rs1,
                                 size_t vl) {
  return __riscv_vle8_tumu(vm, vd, rs1, vl);
}

vuint8m8_t test_vle8_v_u8m8_tumu(vbool1_t vm, vuint8m8_t vd, const uint8_t *rs1,
                                 size_t vl) {
  return __riscv_vle8_tumu(vm, vd, rs1, vl);
}

vint8mf8_t test_vle8_v_i8mf8_mu(vbool64_t vm, vint8mf8_t vd, const int8_t *rs1,
                                size_t vl) {
  return __riscv_vle8_mu(vm, vd, rs1, vl);
}

vint8mf4_t test_vle8_v_i8mf4_mu(vbool32_t vm, vint8mf4_t vd, const int8_t *rs1,
                                size_t vl) {
  return __riscv_vle8_mu(vm, vd, rs1, vl);
}

vint8mf2_t test_vle8_v_i8mf2_mu(vbool16_t vm, vint8mf2_t vd, const int8_t *rs1,
                                size_t vl) {
  return __riscv_vle8_mu(vm, vd, rs1, vl);
}

vint8m1_t test_vle8_v_i8m1_mu(vbool8_t vm, vint8m1_t vd, const int8_t *rs1,
                              size_t vl) {
  return __riscv_vle8_mu(vm, vd, rs1, vl);
}

vint8m2_t test_vle8_v_i8m2_mu(vbool4_t vm, vint8m2_t vd, const int8_t *rs1,
                              size_t vl) {
  return __riscv_vle8_mu(vm, vd, rs1, vl);
}

vint8m4_t test_vle8_v_i8m4_mu(vbool2_t vm, vint8m4_t vd, const int8_t *rs1,
                              size_t vl) {
  return __riscv_vle8_mu(vm, vd, rs1, vl);
}

vint8m8_t test_vle8_v_i8m8_mu(vbool1_t vm, vint8m8_t vd, const int8_t *rs1,
                              size_t vl) {
  return __riscv_vle8_mu(vm, vd, rs1, vl);
}

vuint8mf8_t test_vle8_v_u8mf8_mu(vbool64_t vm, vuint8mf8_t vd,
                                 const uint8_t *rs1, size_t vl) {
  return __riscv_vle8_mu(vm, vd, rs1, vl);
}

vuint8mf4_t test_vle8_v_u8mf4_mu(vbool32_t vm, vuint8mf4_t vd,
                                 const uint8_t *rs1, size_t vl) {
  return __riscv_vle8_mu(vm, vd, rs1, vl);
}

vuint8mf2_t test_vle8_v_u8mf2_mu(vbool16_t vm, vuint8mf2_t vd,
                                 const uint8_t *rs1, size_t vl) {
  return __riscv_vle8_mu(vm, vd, rs1, vl);
}

vuint8m1_t test_vle8_v_u8m1_mu(vbool8_t vm, vuint8m1_t vd, const uint8_t *rs1,
                               size_t vl) {
  return __riscv_vle8_mu(vm, vd, rs1, vl);
}

vuint8m2_t test_vle8_v_u8m2_mu(vbool4_t vm, vuint8m2_t vd, const uint8_t *rs1,
                               size_t vl) {
  return __riscv_vle8_mu(vm, vd, rs1, vl);
}

vuint8m4_t test_vle8_v_u8m4_mu(vbool2_t vm, vuint8m4_t vd, const uint8_t *rs1,
                               size_t vl) {
  return __riscv_vle8_mu(vm, vd, rs1, vl);
}

vuint8m8_t test_vle8_v_u8m8_mu(vbool1_t vm, vuint8m8_t vd, const uint8_t *rs1,
                               size_t vl) {
  return __riscv_vle8_mu(vm, vd, rs1, vl);
}
