#include "common.h"
#include <riscv_vector.h>

// accumulate and reduce
void reduce_golden(double *a, double *b, double *result_sum,
                     int *result_count, int n) {
  int count = 0;
  double s = 0;
  for (int i = 0; i < n; ++i) {
    if (a[i] != 42.0) {
      s += a[i] * b[i];
      count++;
    }
  }

  *result_sum = s;
  *result_count = count;
}

void reduce_vec(double *a, double *b, double *result_sum, int *result_count,
                int n) {
  int count = 0;
  // set vlmax and initialize variables
  size_t vlmax = __riscv_vsetvlmax_e64m1();
  vfloat64m1_t vec_zero = __riscv_vfmv_v_f_f64m1(0, vlmax);
  vfloat64m1_t vec_s = __riscv_vfmv_v_f_f64m1(0, vlmax);
  for (size_t vl; n > 0; n -= vl, a += vl, b += vl) {
    vl = __riscv_vsetvl_e64m1(n);

    vfloat64m1_t vec_a = __riscv_vle64_v_f64m1(a, vl);
    vfloat64m1_t vec_b = __riscv_vle64_v_f64m1(b, vl);

    vbool64_t mask = __riscv_vmfne_vf_f64m1_b64(vec_a, 42, vl);

    vec_s = __riscv_vfmacc_vv_f64m1_tumu(mask, vec_s, vec_a, vec_b, vl);
    count = count + __riscv_vcpop_m_b64(mask, vl);
  }
  vfloat64m1_t vec_sum;
  vec_sum = __riscv_vfredusum_vs_f64m1_f64m1(vec_s, vec_zero, vlmax);
  double sum = __riscv_vfmv_f_s_f64m1_f64(vec_sum);

  *result_sum = sum;
  *result_count = count;
}

int main() {
  const int N = 31;
  uint32_t seed = 0xdeadbeef;
  srand(seed);

  // data gen
  double A[N], B[N];
  gen_rand_1d(A, N);
  gen_rand_1d(B, N);

  // compute
  double golden_sum, actual_sum;
  int golden_count, actual_count;
  reduce_golden(A, B, &golden_sum, &golden_count, N);
  reduce_vec(A, B, &actual_sum, &actual_count, N);

  // compare
  puts(golden_sum - actual_sum < 1e-6 && golden_count == actual_count ? "pass"
                                                                      : "fail");
}
