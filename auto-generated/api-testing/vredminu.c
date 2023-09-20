#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vuint8m1_t test_vredminu_vs_u8mf8_u8m1(vuint8mf8_t vs2, vuint8m1_t vs1,
                                       size_t vl) {
  return __riscv_vredminu_vs_u8mf8_u8m1(vs2, vs1, vl);
}

vuint8m1_t test_vredminu_vs_u8mf4_u8m1(vuint8mf4_t vs2, vuint8m1_t vs1,
                                       size_t vl) {
  return __riscv_vredminu_vs_u8mf4_u8m1(vs2, vs1, vl);
}

vuint8m1_t test_vredminu_vs_u8mf2_u8m1(vuint8mf2_t vs2, vuint8m1_t vs1,
                                       size_t vl) {
  return __riscv_vredminu_vs_u8mf2_u8m1(vs2, vs1, vl);
}

vuint8m1_t test_vredminu_vs_u8m1_u8m1(vuint8m1_t vs2, vuint8m1_t vs1,
                                      size_t vl) {
  return __riscv_vredminu_vs_u8m1_u8m1(vs2, vs1, vl);
}

vuint8m1_t test_vredminu_vs_u8m2_u8m1(vuint8m2_t vs2, vuint8m1_t vs1,
                                      size_t vl) {
  return __riscv_vredminu_vs_u8m2_u8m1(vs2, vs1, vl);
}

vuint8m1_t test_vredminu_vs_u8m4_u8m1(vuint8m4_t vs2, vuint8m1_t vs1,
                                      size_t vl) {
  return __riscv_vredminu_vs_u8m4_u8m1(vs2, vs1, vl);
}

vuint8m1_t test_vredminu_vs_u8m8_u8m1(vuint8m8_t vs2, vuint8m1_t vs1,
                                      size_t vl) {
  return __riscv_vredminu_vs_u8m8_u8m1(vs2, vs1, vl);
}

vuint16m1_t test_vredminu_vs_u16mf4_u16m1(vuint16mf4_t vs2, vuint16m1_t vs1,
                                          size_t vl) {
  return __riscv_vredminu_vs_u16mf4_u16m1(vs2, vs1, vl);
}

vuint16m1_t test_vredminu_vs_u16mf2_u16m1(vuint16mf2_t vs2, vuint16m1_t vs1,
                                          size_t vl) {
  return __riscv_vredminu_vs_u16mf2_u16m1(vs2, vs1, vl);
}

vuint16m1_t test_vredminu_vs_u16m1_u16m1(vuint16m1_t vs2, vuint16m1_t vs1,
                                         size_t vl) {
  return __riscv_vredminu_vs_u16m1_u16m1(vs2, vs1, vl);
}

vuint16m1_t test_vredminu_vs_u16m2_u16m1(vuint16m2_t vs2, vuint16m1_t vs1,
                                         size_t vl) {
  return __riscv_vredminu_vs_u16m2_u16m1(vs2, vs1, vl);
}

vuint16m1_t test_vredminu_vs_u16m4_u16m1(vuint16m4_t vs2, vuint16m1_t vs1,
                                         size_t vl) {
  return __riscv_vredminu_vs_u16m4_u16m1(vs2, vs1, vl);
}

vuint16m1_t test_vredminu_vs_u16m8_u16m1(vuint16m8_t vs2, vuint16m1_t vs1,
                                         size_t vl) {
  return __riscv_vredminu_vs_u16m8_u16m1(vs2, vs1, vl);
}

vuint32m1_t test_vredminu_vs_u32mf2_u32m1(vuint32mf2_t vs2, vuint32m1_t vs1,
                                          size_t vl) {
  return __riscv_vredminu_vs_u32mf2_u32m1(vs2, vs1, vl);
}

vuint32m1_t test_vredminu_vs_u32m1_u32m1(vuint32m1_t vs2, vuint32m1_t vs1,
                                         size_t vl) {
  return __riscv_vredminu_vs_u32m1_u32m1(vs2, vs1, vl);
}

vuint32m1_t test_vredminu_vs_u32m2_u32m1(vuint32m2_t vs2, vuint32m1_t vs1,
                                         size_t vl) {
  return __riscv_vredminu_vs_u32m2_u32m1(vs2, vs1, vl);
}

vuint32m1_t test_vredminu_vs_u32m4_u32m1(vuint32m4_t vs2, vuint32m1_t vs1,
                                         size_t vl) {
  return __riscv_vredminu_vs_u32m4_u32m1(vs2, vs1, vl);
}

vuint32m1_t test_vredminu_vs_u32m8_u32m1(vuint32m8_t vs2, vuint32m1_t vs1,
                                         size_t vl) {
  return __riscv_vredminu_vs_u32m8_u32m1(vs2, vs1, vl);
}

vuint64m1_t test_vredminu_vs_u64m1_u64m1(vuint64m1_t vs2, vuint64m1_t vs1,
                                         size_t vl) {
  return __riscv_vredminu_vs_u64m1_u64m1(vs2, vs1, vl);
}

vuint64m1_t test_vredminu_vs_u64m2_u64m1(vuint64m2_t vs2, vuint64m1_t vs1,
                                         size_t vl) {
  return __riscv_vredminu_vs_u64m2_u64m1(vs2, vs1, vl);
}

vuint64m1_t test_vredminu_vs_u64m4_u64m1(vuint64m4_t vs2, vuint64m1_t vs1,
                                         size_t vl) {
  return __riscv_vredminu_vs_u64m4_u64m1(vs2, vs1, vl);
}

vuint64m1_t test_vredminu_vs_u64m8_u64m1(vuint64m8_t vs2, vuint64m1_t vs1,
                                         size_t vl) {
  return __riscv_vredminu_vs_u64m8_u64m1(vs2, vs1, vl);
}

vuint8m1_t test_vredminu_vs_u8mf8_u8m1_m(vbool64_t vm, vuint8mf8_t vs2,
                                         vuint8m1_t vs1, size_t vl) {
  return __riscv_vredminu_vs_u8mf8_u8m1_m(vm, vs2, vs1, vl);
}

vuint8m1_t test_vredminu_vs_u8mf4_u8m1_m(vbool32_t vm, vuint8mf4_t vs2,
                                         vuint8m1_t vs1, size_t vl) {
  return __riscv_vredminu_vs_u8mf4_u8m1_m(vm, vs2, vs1, vl);
}

vuint8m1_t test_vredminu_vs_u8mf2_u8m1_m(vbool16_t vm, vuint8mf2_t vs2,
                                         vuint8m1_t vs1, size_t vl) {
  return __riscv_vredminu_vs_u8mf2_u8m1_m(vm, vs2, vs1, vl);
}

vuint8m1_t test_vredminu_vs_u8m1_u8m1_m(vbool8_t vm, vuint8m1_t vs2,
                                        vuint8m1_t vs1, size_t vl) {
  return __riscv_vredminu_vs_u8m1_u8m1_m(vm, vs2, vs1, vl);
}

vuint8m1_t test_vredminu_vs_u8m2_u8m1_m(vbool4_t vm, vuint8m2_t vs2,
                                        vuint8m1_t vs1, size_t vl) {
  return __riscv_vredminu_vs_u8m2_u8m1_m(vm, vs2, vs1, vl);
}

vuint8m1_t test_vredminu_vs_u8m4_u8m1_m(vbool2_t vm, vuint8m4_t vs2,
                                        vuint8m1_t vs1, size_t vl) {
  return __riscv_vredminu_vs_u8m4_u8m1_m(vm, vs2, vs1, vl);
}

vuint8m1_t test_vredminu_vs_u8m8_u8m1_m(vbool1_t vm, vuint8m8_t vs2,
                                        vuint8m1_t vs1, size_t vl) {
  return __riscv_vredminu_vs_u8m8_u8m1_m(vm, vs2, vs1, vl);
}

vuint16m1_t test_vredminu_vs_u16mf4_u16m1_m(vbool64_t vm, vuint16mf4_t vs2,
                                            vuint16m1_t vs1, size_t vl) {
  return __riscv_vredminu_vs_u16mf4_u16m1_m(vm, vs2, vs1, vl);
}

vuint16m1_t test_vredminu_vs_u16mf2_u16m1_m(vbool32_t vm, vuint16mf2_t vs2,
                                            vuint16m1_t vs1, size_t vl) {
  return __riscv_vredminu_vs_u16mf2_u16m1_m(vm, vs2, vs1, vl);
}

vuint16m1_t test_vredminu_vs_u16m1_u16m1_m(vbool16_t vm, vuint16m1_t vs2,
                                           vuint16m1_t vs1, size_t vl) {
  return __riscv_vredminu_vs_u16m1_u16m1_m(vm, vs2, vs1, vl);
}

vuint16m1_t test_vredminu_vs_u16m2_u16m1_m(vbool8_t vm, vuint16m2_t vs2,
                                           vuint16m1_t vs1, size_t vl) {
  return __riscv_vredminu_vs_u16m2_u16m1_m(vm, vs2, vs1, vl);
}

vuint16m1_t test_vredminu_vs_u16m4_u16m1_m(vbool4_t vm, vuint16m4_t vs2,
                                           vuint16m1_t vs1, size_t vl) {
  return __riscv_vredminu_vs_u16m4_u16m1_m(vm, vs2, vs1, vl);
}

vuint16m1_t test_vredminu_vs_u16m8_u16m1_m(vbool2_t vm, vuint16m8_t vs2,
                                           vuint16m1_t vs1, size_t vl) {
  return __riscv_vredminu_vs_u16m8_u16m1_m(vm, vs2, vs1, vl);
}

vuint32m1_t test_vredminu_vs_u32mf2_u32m1_m(vbool64_t vm, vuint32mf2_t vs2,
                                            vuint32m1_t vs1, size_t vl) {
  return __riscv_vredminu_vs_u32mf2_u32m1_m(vm, vs2, vs1, vl);
}

vuint32m1_t test_vredminu_vs_u32m1_u32m1_m(vbool32_t vm, vuint32m1_t vs2,
                                           vuint32m1_t vs1, size_t vl) {
  return __riscv_vredminu_vs_u32m1_u32m1_m(vm, vs2, vs1, vl);
}

vuint32m1_t test_vredminu_vs_u32m2_u32m1_m(vbool16_t vm, vuint32m2_t vs2,
                                           vuint32m1_t vs1, size_t vl) {
  return __riscv_vredminu_vs_u32m2_u32m1_m(vm, vs2, vs1, vl);
}

vuint32m1_t test_vredminu_vs_u32m4_u32m1_m(vbool8_t vm, vuint32m4_t vs2,
                                           vuint32m1_t vs1, size_t vl) {
  return __riscv_vredminu_vs_u32m4_u32m1_m(vm, vs2, vs1, vl);
}

vuint32m1_t test_vredminu_vs_u32m8_u32m1_m(vbool4_t vm, vuint32m8_t vs2,
                                           vuint32m1_t vs1, size_t vl) {
  return __riscv_vredminu_vs_u32m8_u32m1_m(vm, vs2, vs1, vl);
}

vuint64m1_t test_vredminu_vs_u64m1_u64m1_m(vbool64_t vm, vuint64m1_t vs2,
                                           vuint64m1_t vs1, size_t vl) {
  return __riscv_vredminu_vs_u64m1_u64m1_m(vm, vs2, vs1, vl);
}

vuint64m1_t test_vredminu_vs_u64m2_u64m1_m(vbool32_t vm, vuint64m2_t vs2,
                                           vuint64m1_t vs1, size_t vl) {
  return __riscv_vredminu_vs_u64m2_u64m1_m(vm, vs2, vs1, vl);
}

vuint64m1_t test_vredminu_vs_u64m4_u64m1_m(vbool16_t vm, vuint64m4_t vs2,
                                           vuint64m1_t vs1, size_t vl) {
  return __riscv_vredminu_vs_u64m4_u64m1_m(vm, vs2, vs1, vl);
}

vuint64m1_t test_vredminu_vs_u64m8_u64m1_m(vbool8_t vm, vuint64m8_t vs2,
                                           vuint64m1_t vs1, size_t vl) {
  return __riscv_vredminu_vs_u64m8_u64m1_m(vm, vs2, vs1, vl);
}
