/* { dg-do compile } */
/* { dg-options "-march=rv32gc_zve32f -mabi=ilp32d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include "riscv_vector.h"

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
size_t test_vsetvlmax_e8mf4() {
  return __riscv_vsetvlmax_e8mf4();
}

size_t test_vsetvlmax_e8mf2() {
  return __riscv_vsetvlmax_e8mf2();
}

size_t test_vsetvlmax_e8m1() {
  return __riscv_vsetvlmax_e8m1();
}

size_t test_vsetvlmax_e8m2() {
  return __riscv_vsetvlmax_e8m2();
}

size_t test_vsetvlmax_e8m4() {
  return __riscv_vsetvlmax_e8m4();
}

size_t test_vsetvlmax_e8m8() {
  return __riscv_vsetvlmax_e8m8();
}

size_t test_vsetvlmax_e16mf2() {
  return __riscv_vsetvlmax_e16mf2();
}

size_t test_vsetvlmax_e16m1() {
  return __riscv_vsetvlmax_e16m1();
}

size_t test_vsetvlmax_e16m2() {
  return __riscv_vsetvlmax_e16m2();
}

size_t test_vsetvlmax_e16m4() {
  return __riscv_vsetvlmax_e16m4();
}

size_t test_vsetvlmax_e16m8() {
  return __riscv_vsetvlmax_e16m8();
}

size_t test_vsetvlmax_e32m1() {
  return __riscv_vsetvlmax_e32m1();
}

size_t test_vsetvlmax_e32m2() {
  return __riscv_vsetvlmax_e32m2();
}

size_t test_vsetvlmax_e32m4() {
  return __riscv_vsetvlmax_e32m4();
}

size_t test_vsetvlmax_e32m8() {
  return __riscv_vsetvlmax_e32m8();
}

/* { dg-final { scan-assembler-times {vsetvli\s+[a-x0-9]+,\s*zero,\s*e[0-9]+,\s*m[f]?[1248],\s*t[au],\s*m[au]} 15 } } */
