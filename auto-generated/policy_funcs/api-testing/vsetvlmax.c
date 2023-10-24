#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

size_t test_vsetvlmax_e8mf8() { return __riscv_vsetvlmax_e8mf8(); }

size_t test_vsetvlmax_e8mf4() { return __riscv_vsetvlmax_e8mf4(); }

size_t test_vsetvlmax_e8mf2() { return __riscv_vsetvlmax_e8mf2(); }

size_t test_vsetvlmax_e8m1() { return __riscv_vsetvlmax_e8m1(); }

size_t test_vsetvlmax_e8m2() { return __riscv_vsetvlmax_e8m2(); }

size_t test_vsetvlmax_e8m4() { return __riscv_vsetvlmax_e8m4(); }

size_t test_vsetvlmax_e8m8() { return __riscv_vsetvlmax_e8m8(); }

size_t test_vsetvlmax_e16mf4() { return __riscv_vsetvlmax_e16mf4(); }

size_t test_vsetvlmax_e16mf2() { return __riscv_vsetvlmax_e16mf2(); }

size_t test_vsetvlmax_e16m1() { return __riscv_vsetvlmax_e16m1(); }

size_t test_vsetvlmax_e16m2() { return __riscv_vsetvlmax_e16m2(); }

size_t test_vsetvlmax_e16m4() { return __riscv_vsetvlmax_e16m4(); }

size_t test_vsetvlmax_e16m8() { return __riscv_vsetvlmax_e16m8(); }

size_t test_vsetvlmax_e32mf2() { return __riscv_vsetvlmax_e32mf2(); }

size_t test_vsetvlmax_e32m1() { return __riscv_vsetvlmax_e32m1(); }

size_t test_vsetvlmax_e32m2() { return __riscv_vsetvlmax_e32m2(); }

size_t test_vsetvlmax_e32m4() { return __riscv_vsetvlmax_e32m4(); }

size_t test_vsetvlmax_e32m8() { return __riscv_vsetvlmax_e32m8(); }

size_t test_vsetvlmax_e64m1() { return __riscv_vsetvlmax_e64m1(); }

size_t test_vsetvlmax_e64m2() { return __riscv_vsetvlmax_e64m2(); }

size_t test_vsetvlmax_e64m4() { return __riscv_vsetvlmax_e64m4(); }

size_t test_vsetvlmax_e64m8() { return __riscv_vsetvlmax_e64m8(); }
