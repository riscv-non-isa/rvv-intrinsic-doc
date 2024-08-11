#include <riscv_vector.h>
#include <stdint.h>

_Float16 test_vfmv_f_s_f16mf4_f16(vfloat16mf4_t vs1) {
  return __riscv_vfmv_f(vs1);
}

_Float16 test_vfmv_f_s_f16mf2_f16(vfloat16mf2_t vs1) {
  return __riscv_vfmv_f(vs1);
}

_Float16 test_vfmv_f_s_f16m1_f16(vfloat16m1_t vs1) {
  return __riscv_vfmv_f(vs1);
}

_Float16 test_vfmv_f_s_f16m2_f16(vfloat16m2_t vs1) {
  return __riscv_vfmv_f(vs1);
}

_Float16 test_vfmv_f_s_f16m4_f16(vfloat16m4_t vs1) {
  return __riscv_vfmv_f(vs1);
}

_Float16 test_vfmv_f_s_f16m8_f16(vfloat16m8_t vs1) {
  return __riscv_vfmv_f(vs1);
}
