#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

vfloat64m1x5_t test_vlsseg5e64_v_f64m1x5_tu(vfloat64m1x5_t vd,
                                            const float64_t *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg5e64_v_f64m1x5_tu(vd, rs1, rs2, vl);
}

vint64m1x5_t test_vlsseg5e64_v_i64m1x5_tu(vint64m1x5_t vd, const int64_t *rs1,
                                          ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg5e64_v_i64m1x5_tu(vd, rs1, rs2, vl);
}

vuint64m1x5_t test_vlsseg5e64_v_u64m1x5_tu(vuint64m1x5_t vd,
                                           const uint64_t *rs1, ptrdiff_t rs2,
                                           size_t vl) {
  return __riscv_vlsseg5e64_v_u64m1x5_tu(vd, rs1, rs2, vl);
}

vfloat64m1x5_t test_vlsseg5e64_v_f64m1x5_tum(vbool64_t vm, vfloat64m1x5_t vd,
                                             const float64_t *rs1,
                                             ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg5e64_v_f64m1x5_tum(vm, vd, rs1, rs2, vl);
}

vint64m1x5_t test_vlsseg5e64_v_i64m1x5_tum(vbool64_t vm, vint64m1x5_t vd,
                                           const int64_t *rs1, ptrdiff_t rs2,
                                           size_t vl) {
  return __riscv_vlsseg5e64_v_i64m1x5_tum(vm, vd, rs1, rs2, vl);
}

vuint64m1x5_t test_vlsseg5e64_v_u64m1x5_tum(vbool64_t vm, vuint64m1x5_t vd,
                                            const uint64_t *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg5e64_v_u64m1x5_tum(vm, vd, rs1, rs2, vl);
}

vfloat64m1x5_t test_vlsseg5e64_v_f64m1x5_tumu(vbool64_t vm, vfloat64m1x5_t vd,
                                              const float64_t *rs1,
                                              ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg5e64_v_f64m1x5_tumu(vm, vd, rs1, rs2, vl);
}

vint64m1x5_t test_vlsseg5e64_v_i64m1x5_tumu(vbool64_t vm, vint64m1x5_t vd,
                                            const int64_t *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg5e64_v_i64m1x5_tumu(vm, vd, rs1, rs2, vl);
}

vuint64m1x5_t test_vlsseg5e64_v_u64m1x5_tumu(vbool64_t vm, vuint64m1x5_t vd,
                                             const uint64_t *rs1, ptrdiff_t rs2,
                                             size_t vl) {
  return __riscv_vlsseg5e64_v_u64m1x5_tumu(vm, vd, rs1, rs2, vl);
}

vfloat64m1x5_t test_vlsseg5e64_v_f64m1x5_mu(vbool64_t vm, vfloat64m1x5_t vd,
                                            const float64_t *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg5e64_v_f64m1x5_mu(vm, vd, rs1, rs2, vl);
}

vint64m1x5_t test_vlsseg5e64_v_i64m1x5_mu(vbool64_t vm, vint64m1x5_t vd,
                                          const int64_t *rs1, ptrdiff_t rs2,
                                          size_t vl) {
  return __riscv_vlsseg5e64_v_i64m1x5_mu(vm, vd, rs1, rs2, vl);
}

vuint64m1x5_t test_vlsseg5e64_v_u64m1x5_mu(vbool64_t vm, vuint64m1x5_t vd,
                                           const uint64_t *rs1, ptrdiff_t rs2,
                                           size_t vl) {
  return __riscv_vlsseg5e64_v_u64m1x5_mu(vm, vd, rs1, rs2, vl);
}
