#include <riscv_vector.h>
#include <stdint.h>

vfloat16mf4_t test_vmv_v_v_f16mf4_tu(vfloat16mf4_t vd, vfloat16mf4_t vs1,
                                     size_t vl) {
  return __riscv_vmv_v_tu(vd, vs1, vl);
}

vfloat16mf2_t test_vmv_v_v_f16mf2_tu(vfloat16mf2_t vd, vfloat16mf2_t vs1,
                                     size_t vl) {
  return __riscv_vmv_v_tu(vd, vs1, vl);
}

vfloat16m1_t test_vmv_v_v_f16m1_tu(vfloat16m1_t vd, vfloat16m1_t vs1,
                                   size_t vl) {
  return __riscv_vmv_v_tu(vd, vs1, vl);
}

vfloat16m2_t test_vmv_v_v_f16m2_tu(vfloat16m2_t vd, vfloat16m2_t vs1,
                                   size_t vl) {
  return __riscv_vmv_v_tu(vd, vs1, vl);
}

vfloat16m4_t test_vmv_v_v_f16m4_tu(vfloat16m4_t vd, vfloat16m4_t vs1,
                                   size_t vl) {
  return __riscv_vmv_v_tu(vd, vs1, vl);
}

vfloat16m8_t test_vmv_v_v_f16m8_tu(vfloat16m8_t vd, vfloat16m8_t vs1,
                                   size_t vl) {
  return __riscv_vmv_v_tu(vd, vs1, vl);
}
