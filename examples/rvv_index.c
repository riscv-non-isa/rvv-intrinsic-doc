#include "common.h"
#include <riscv_vector.h>

// index arithmetic
void index_golden(double *a, double *b, double *c, int n) {
  for (int i = 0; i < n; ++i) {
    a[i] = b[i] + (double)i * c[i];
  }
}

void index_vec(double *a, double *b, double *c, int n) {
  size_t vlmax = __riscv_vsetvlmax_e32m1();
  vuint32m1_t vec_i = __riscv_vid_v_u32m1(vlmax);
  for (size_t vl; n > 0; n -= vl, a += vl, b += vl, c += vl) {
    vl = __riscv_vsetvl_e64m2(n);

    vfloat64m2_t vec_i_double = __riscv_vfwcvt_f_xu_v_f64m2(vec_i, vl);

    vfloat64m2_t vec_b = __riscv_vle64_v_f64m2(b, vl);
    vfloat64m2_t vec_c = __riscv_vle64_v_f64m2(c, vl);

    vfloat64m2_t vec_a = __riscv_vfmadd_vv_f64m2(vec_c, vec_i_double, vec_b, vl);
    __riscv_vse64_v_f64m2(a, vec_a, vl);

    vec_i = __riscv_vadd_vx_u32m1(vec_i, vl, vl);
  }
}

int main() {
  const int N = 31;
  const uint32_t seed = 0xdeadbeef;
  srand(seed);

  // data gen
  double B[N], C[N];
  gen_rand_1d(B, N);
  gen_rand_1d(C, N);

  // compute
  double golden[N], actual[N];
  index_golden(golden, B, C, N);
  index_vec(actual, B, C, N);

  // compare
  puts(compare_1d(golden, actual, N) ? "pass" : "fail");
}
