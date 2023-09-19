// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

size_t test_vsetvl_e8mf8(size_t avl) { return __riscv_vsetvl_e8mf8(avl); }

size_t test_vsetvl_e8mf4(size_t avl) { return __riscv_vsetvl_e8mf4(avl); }

size_t test_vsetvl_e8mf2(size_t avl) { return __riscv_vsetvl_e8mf2(avl); }

size_t test_vsetvl_e8m1(size_t avl) { return __riscv_vsetvl_e8m1(avl); }

size_t test_vsetvl_e8m2(size_t avl) { return __riscv_vsetvl_e8m2(avl); }

size_t test_vsetvl_e8m4(size_t avl) { return __riscv_vsetvl_e8m4(avl); }

size_t test_vsetvl_e8m8(size_t avl) { return __riscv_vsetvl_e8m8(avl); }

size_t test_vsetvl_e16mf4(size_t avl) { return __riscv_vsetvl_e16mf4(avl); }

size_t test_vsetvl_e16mf2(size_t avl) { return __riscv_vsetvl_e16mf2(avl); }

size_t test_vsetvl_e16m1(size_t avl) { return __riscv_vsetvl_e16m1(avl); }

size_t test_vsetvl_e16m2(size_t avl) { return __riscv_vsetvl_e16m2(avl); }

size_t test_vsetvl_e16m4(size_t avl) { return __riscv_vsetvl_e16m4(avl); }

size_t test_vsetvl_e16m8(size_t avl) { return __riscv_vsetvl_e16m8(avl); }

size_t test_vsetvl_e32mf2(size_t avl) { return __riscv_vsetvl_e32mf2(avl); }

size_t test_vsetvl_e32m1(size_t avl) { return __riscv_vsetvl_e32m1(avl); }

size_t test_vsetvl_e32m2(size_t avl) { return __riscv_vsetvl_e32m2(avl); }

size_t test_vsetvl_e32m4(size_t avl) { return __riscv_vsetvl_e32m4(avl); }

size_t test_vsetvl_e32m8(size_t avl) { return __riscv_vsetvl_e32m8(avl); }

size_t test_vsetvl_e64m1(size_t avl) { return __riscv_vsetvl_e64m1(avl); }

size_t test_vsetvl_e64m2(size_t avl) { return __riscv_vsetvl_e64m2(avl); }

size_t test_vsetvl_e64m4(size_t avl) { return __riscv_vsetvl_e64m4(avl); }

size_t test_vsetvl_e64m8(size_t avl) { return __riscv_vsetvl_e64m8(avl); }
