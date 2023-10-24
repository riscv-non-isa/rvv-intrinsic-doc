#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

vfloat64m1x5_t test_vlsseg5e64_v_f64m1x5_m(vbool64_t vm, const float64_t *rs1,
                                           ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg5e64(vm, rs1, rs2, vl);
}

vint64m1x5_t test_vlsseg5e64_v_i64m1x5_m(vbool64_t vm, const int64_t *rs1,
                                         ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg5e64(vm, rs1, rs2, vl);
}

vuint64m1x5_t test_vlsseg5e64_v_u64m1x5_m(vbool64_t vm, const uint64_t *rs1,
                                          ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg5e64(vm, rs1, rs2, vl);
}
