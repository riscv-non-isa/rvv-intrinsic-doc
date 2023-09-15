/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include "riscv_vector.h"

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
size_t test_vsetvl_e8mf8(size_t avl) {
  return __riscv_vsetvl_e8mf8(avl);
}

size_t test_vsetvl_e8mf4(size_t avl) {
  return __riscv_vsetvl_e8mf4(avl);
}

size_t test_vsetvl_e8mf2(size_t avl) {
  return __riscv_vsetvl_e8mf2(avl);
}

size_t test_vsetvl_e8m1(size_t avl) {
  return __riscv_vsetvl_e8m1(avl);
}

size_t test_vsetvl_e8m2(size_t avl) {
  return __riscv_vsetvl_e8m2(avl);
}

size_t test_vsetvl_e8m4(size_t avl) {
  return __riscv_vsetvl_e8m4(avl);
}

size_t test_vsetvl_e8m8(size_t avl) {
  return __riscv_vsetvl_e8m8(avl);
}

size_t test_vsetvl_e16mf4(size_t avl) {
  return __riscv_vsetvl_e16mf4(avl);
}

size_t test_vsetvl_e16mf2(size_t avl) {
  return __riscv_vsetvl_e16mf2(avl);
}

size_t test_vsetvl_e16m1(size_t avl) {
  return __riscv_vsetvl_e16m1(avl);
}

size_t test_vsetvl_e16m2(size_t avl) {
  return __riscv_vsetvl_e16m2(avl);
}

size_t test_vsetvl_e16m4(size_t avl) {
  return __riscv_vsetvl_e16m4(avl);
}

size_t test_vsetvl_e16m8(size_t avl) {
  return __riscv_vsetvl_e16m8(avl);
}

size_t test_vsetvl_e32mf2(size_t avl) {
  return __riscv_vsetvl_e32mf2(avl);
}

size_t test_vsetvl_e32m1(size_t avl) {
  return __riscv_vsetvl_e32m1(avl);
}

size_t test_vsetvl_e32m2(size_t avl) {
  return __riscv_vsetvl_e32m2(avl);
}

size_t test_vsetvl_e32m4(size_t avl) {
  return __riscv_vsetvl_e32m4(avl);
}

size_t test_vsetvl_e32m8(size_t avl) {
  return __riscv_vsetvl_e32m8(avl);
}

size_t test_vsetvl_e64m1(size_t avl) {
  return __riscv_vsetvl_e64m1(avl);
}

size_t test_vsetvl_e64m2(size_t avl) {
  return __riscv_vsetvl_e64m2(avl);
}

size_t test_vsetvl_e64m4(size_t avl) {
  return __riscv_vsetvl_e64m4(avl);
}

size_t test_vsetvl_e64m8(size_t avl) {
  return __riscv_vsetvl_e64m8(avl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+[a-x0-9]+,\s*[a-x0-9]+,\s*e[0-9]+,\s*m[f]?[1248],\s*t[au],\s*m[au]} 22 } } */
