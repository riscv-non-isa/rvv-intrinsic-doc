#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint16m1_t test_vwredsum_vs_i8mf8_i16m1(vint8mf8_t vs2, vint16m1_t vs1,
                                        size_t vl) {
  return __riscv_vwredsum(vs2, vs1, vl);
}

vint16m1_t test_vwredsum_vs_i8mf4_i16m1(vint8mf4_t vs2, vint16m1_t vs1,
                                        size_t vl) {
  return __riscv_vwredsum(vs2, vs1, vl);
}

vint16m1_t test_vwredsum_vs_i8mf2_i16m1(vint8mf2_t vs2, vint16m1_t vs1,
                                        size_t vl) {
  return __riscv_vwredsum(vs2, vs1, vl);
}

vint16m1_t test_vwredsum_vs_i8m1_i16m1(vint8m1_t vs2, vint16m1_t vs1,
                                       size_t vl) {
  return __riscv_vwredsum(vs2, vs1, vl);
}

vint16m1_t test_vwredsum_vs_i8m2_i16m1(vint8m2_t vs2, vint16m1_t vs1,
                                       size_t vl) {
  return __riscv_vwredsum(vs2, vs1, vl);
}

vint16m1_t test_vwredsum_vs_i8m4_i16m1(vint8m4_t vs2, vint16m1_t vs1,
                                       size_t vl) {
  return __riscv_vwredsum(vs2, vs1, vl);
}

vint16m1_t test_vwredsum_vs_i8m8_i16m1(vint8m8_t vs2, vint16m1_t vs1,
                                       size_t vl) {
  return __riscv_vwredsum(vs2, vs1, vl);
}

vint32m1_t test_vwredsum_vs_i16mf4_i32m1(vint16mf4_t vs2, vint32m1_t vs1,
                                         size_t vl) {
  return __riscv_vwredsum(vs2, vs1, vl);
}

vint32m1_t test_vwredsum_vs_i16mf2_i32m1(vint16mf2_t vs2, vint32m1_t vs1,
                                         size_t vl) {
  return __riscv_vwredsum(vs2, vs1, vl);
}

vint32m1_t test_vwredsum_vs_i16m1_i32m1(vint16m1_t vs2, vint32m1_t vs1,
                                        size_t vl) {
  return __riscv_vwredsum(vs2, vs1, vl);
}

vint32m1_t test_vwredsum_vs_i16m2_i32m1(vint16m2_t vs2, vint32m1_t vs1,
                                        size_t vl) {
  return __riscv_vwredsum(vs2, vs1, vl);
}

vint32m1_t test_vwredsum_vs_i16m4_i32m1(vint16m4_t vs2, vint32m1_t vs1,
                                        size_t vl) {
  return __riscv_vwredsum(vs2, vs1, vl);
}

vint32m1_t test_vwredsum_vs_i16m8_i32m1(vint16m8_t vs2, vint32m1_t vs1,
                                        size_t vl) {
  return __riscv_vwredsum(vs2, vs1, vl);
}

vint64m1_t test_vwredsum_vs_i32mf2_i64m1(vint32mf2_t vs2, vint64m1_t vs1,
                                         size_t vl) {
  return __riscv_vwredsum(vs2, vs1, vl);
}

vint64m1_t test_vwredsum_vs_i32m1_i64m1(vint32m1_t vs2, vint64m1_t vs1,
                                        size_t vl) {
  return __riscv_vwredsum(vs2, vs1, vl);
}

vint64m1_t test_vwredsum_vs_i32m2_i64m1(vint32m2_t vs2, vint64m1_t vs1,
                                        size_t vl) {
  return __riscv_vwredsum(vs2, vs1, vl);
}

vint64m1_t test_vwredsum_vs_i32m4_i64m1(vint32m4_t vs2, vint64m1_t vs1,
                                        size_t vl) {
  return __riscv_vwredsum(vs2, vs1, vl);
}

vint64m1_t test_vwredsum_vs_i32m8_i64m1(vint32m8_t vs2, vint64m1_t vs1,
                                        size_t vl) {
  return __riscv_vwredsum(vs2, vs1, vl);
}

vint16m1_t test_vwredsum_vs_i8mf8_i16m1_m(vbool64_t vm, vint8mf8_t vs2,
                                          vint16m1_t vs1, size_t vl) {
  return __riscv_vwredsum(vm, vs2, vs1, vl);
}

vint16m1_t test_vwredsum_vs_i8mf4_i16m1_m(vbool32_t vm, vint8mf4_t vs2,
                                          vint16m1_t vs1, size_t vl) {
  return __riscv_vwredsum(vm, vs2, vs1, vl);
}

vint16m1_t test_vwredsum_vs_i8mf2_i16m1_m(vbool16_t vm, vint8mf2_t vs2,
                                          vint16m1_t vs1, size_t vl) {
  return __riscv_vwredsum(vm, vs2, vs1, vl);
}

vint16m1_t test_vwredsum_vs_i8m1_i16m1_m(vbool8_t vm, vint8m1_t vs2,
                                         vint16m1_t vs1, size_t vl) {
  return __riscv_vwredsum(vm, vs2, vs1, vl);
}

vint16m1_t test_vwredsum_vs_i8m2_i16m1_m(vbool4_t vm, vint8m2_t vs2,
                                         vint16m1_t vs1, size_t vl) {
  return __riscv_vwredsum(vm, vs2, vs1, vl);
}

vint16m1_t test_vwredsum_vs_i8m4_i16m1_m(vbool2_t vm, vint8m4_t vs2,
                                         vint16m1_t vs1, size_t vl) {
  return __riscv_vwredsum(vm, vs2, vs1, vl);
}

vint16m1_t test_vwredsum_vs_i8m8_i16m1_m(vbool1_t vm, vint8m8_t vs2,
                                         vint16m1_t vs1, size_t vl) {
  return __riscv_vwredsum(vm, vs2, vs1, vl);
}

vint32m1_t test_vwredsum_vs_i16mf4_i32m1_m(vbool64_t vm, vint16mf4_t vs2,
                                           vint32m1_t vs1, size_t vl) {
  return __riscv_vwredsum(vm, vs2, vs1, vl);
}

vint32m1_t test_vwredsum_vs_i16mf2_i32m1_m(vbool32_t vm, vint16mf2_t vs2,
                                           vint32m1_t vs1, size_t vl) {
  return __riscv_vwredsum(vm, vs2, vs1, vl);
}

vint32m1_t test_vwredsum_vs_i16m1_i32m1_m(vbool16_t vm, vint16m1_t vs2,
                                          vint32m1_t vs1, size_t vl) {
  return __riscv_vwredsum(vm, vs2, vs1, vl);
}

vint32m1_t test_vwredsum_vs_i16m2_i32m1_m(vbool8_t vm, vint16m2_t vs2,
                                          vint32m1_t vs1, size_t vl) {
  return __riscv_vwredsum(vm, vs2, vs1, vl);
}

vint32m1_t test_vwredsum_vs_i16m4_i32m1_m(vbool4_t vm, vint16m4_t vs2,
                                          vint32m1_t vs1, size_t vl) {
  return __riscv_vwredsum(vm, vs2, vs1, vl);
}

vint32m1_t test_vwredsum_vs_i16m8_i32m1_m(vbool2_t vm, vint16m8_t vs2,
                                          vint32m1_t vs1, size_t vl) {
  return __riscv_vwredsum(vm, vs2, vs1, vl);
}

vint64m1_t test_vwredsum_vs_i32mf2_i64m1_m(vbool64_t vm, vint32mf2_t vs2,
                                           vint64m1_t vs1, size_t vl) {
  return __riscv_vwredsum(vm, vs2, vs1, vl);
}

vint64m1_t test_vwredsum_vs_i32m1_i64m1_m(vbool32_t vm, vint32m1_t vs2,
                                          vint64m1_t vs1, size_t vl) {
  return __riscv_vwredsum(vm, vs2, vs1, vl);
}

vint64m1_t test_vwredsum_vs_i32m2_i64m1_m(vbool16_t vm, vint32m2_t vs2,
                                          vint64m1_t vs1, size_t vl) {
  return __riscv_vwredsum(vm, vs2, vs1, vl);
}

vint64m1_t test_vwredsum_vs_i32m4_i64m1_m(vbool8_t vm, vint32m4_t vs2,
                                          vint64m1_t vs1, size_t vl) {
  return __riscv_vwredsum(vm, vs2, vs1, vl);
}

vint64m1_t test_vwredsum_vs_i32m8_i64m1_m(vbool4_t vm, vint32m8_t vs2,
                                          vint64m1_t vs1, size_t vl) {
  return __riscv_vwredsum(vm, vs2, vs1, vl);
}
