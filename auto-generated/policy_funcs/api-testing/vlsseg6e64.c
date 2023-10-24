#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

vfloat64m1x6_t test_vlsseg6e64_v_f64m1x6_tu(vfloat64m1x6_t vd,
                                            const float64_t *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg6e64_v_f64m1x6_tu(vd, rs1, rs2, vl);
}

vint64m1x6_t test_vlsseg6e64_v_i64m1x6_tu(vint64m1x6_t vd, const int64_t *rs1,
                                          ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg6e64_v_i64m1x6_tu(vd, rs1, rs2, vl);
}

vuint64m1x6_t test_vlsseg6e64_v_u64m1x6_tu(vuint64m1x6_t vd,
                                           const uint64_t *rs1, ptrdiff_t rs2,
                                           size_t vl) {
  return __riscv_vlsseg6e64_v_u64m1x6_tu(vd, rs1, rs2, vl);
}

vfloat64m1x6_t test_vlsseg6e64_v_f64m1x6_tum(vbool64_t vm, vfloat64m1x6_t vd,
                                             const float64_t *rs1,
                                             ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg6e64_v_f64m1x6_tum(vm, vd, rs1, rs2, vl);
}

vint64m1x6_t test_vlsseg6e64_v_i64m1x6_tum(vbool64_t vm, vint64m1x6_t vd,
                                           const int64_t *rs1, ptrdiff_t rs2,
                                           size_t vl) {
  return __riscv_vlsseg6e64_v_i64m1x6_tum(vm, vd, rs1, rs2, vl);
}

vuint64m1x6_t test_vlsseg6e64_v_u64m1x6_tum(vbool64_t vm, vuint64m1x6_t vd,
                                            const uint64_t *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg6e64_v_u64m1x6_tum(vm, vd, rs1, rs2, vl);
}

vfloat64m1x6_t test_vlsseg6e64_v_f64m1x6_tumu(vbool64_t vm, vfloat64m1x6_t vd,
                                              const float64_t *rs1,
                                              ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg6e64_v_f64m1x6_tumu(vm, vd, rs1, rs2, vl);
}

vint64m1x6_t test_vlsseg6e64_v_i64m1x6_tumu(vbool64_t vm, vint64m1x6_t vd,
                                            const int64_t *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg6e64_v_i64m1x6_tumu(vm, vd, rs1, rs2, vl);
}

vuint64m1x6_t test_vlsseg6e64_v_u64m1x6_tumu(vbool64_t vm, vuint64m1x6_t vd,
                                             const uint64_t *rs1, ptrdiff_t rs2,
                                             size_t vl) {
  return __riscv_vlsseg6e64_v_u64m1x6_tumu(vm, vd, rs1, rs2, vl);
}

vfloat64m1x6_t test_vlsseg6e64_v_f64m1x6_mu(vbool64_t vm, vfloat64m1x6_t vd,
                                            const float64_t *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg6e64_v_f64m1x6_mu(vm, vd, rs1, rs2, vl);
}

vint64m1x6_t test_vlsseg6e64_v_i64m1x6_mu(vbool64_t vm, vint64m1x6_t vd,
                                          const int64_t *rs1, ptrdiff_t rs2,
                                          size_t vl) {
  return __riscv_vlsseg6e64_v_i64m1x6_mu(vm, vd, rs1, rs2, vl);
}

vuint64m1x6_t test_vlsseg6e64_v_u64m1x6_mu(vbool64_t vm, vuint64m1x6_t vd,
                                           const uint64_t *rs1, ptrdiff_t rs2,
                                           size_t vl) {
  return __riscv_vlsseg6e64_v_u64m1x6_mu(vm, vd, rs1, rs2, vl);
}
