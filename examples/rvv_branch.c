#include "common.h"
#include <riscv_vector.h>

// branch and assign
void branch_golden(double *a, double *b, double *c, int n, double constant) {
  for (int i = 0; i < n; ++i) {
    c[i] = (b[i] != 0.0) ? a[i] / b[i] : constant;
  }
}

void branch(double *a, double *b, double *c, int n, double constant) {
  // set vlmax and initialize variables
  size_t vlmax = vsetvlmax_e64m1();
  vfloat64m1_t vec_zero = vfmv_v_f_f64m1(0, vlmax);
  vfloat64m1_t vec_constant = vfmv_v_f_f64m1(constant, vlmax);
  for (size_t vl; n > 0; n -= vl, a += vl, b += vl, c += vl) {
    vl = vsetvl_e64m1(n);

    vfloat64m1_t vec_a = vle64_v_f64m1(a, vl);
    vfloat64m1_t vec_b = vle64_v_f64m1(b, vl);

    vbool64_t mask = vmfne_vv_f64m1_b64(vec_b, vec_zero, vl);

    vfloat64m1_t vec_c =
        vfdiv_vv_f64m1_m(mask, /*maskedoff=*/vec_constant, vec_a, vec_b, vl);
    vse64_v_f64m1(c, vec_c, vl);
  }
}

int main() {
  const int N = 31;
  const double constant = 7122.0;
  const uint32_t seed = 0xdeadbeef;
  srand(seed);

  // data gen
  double A[N], B[N];
  gen_rand_1d(A, N);
  gen_rand_1d(B, N);
  for (int i = 0; i < 5; ++i) {
    int pos = rand() % N;
    B[pos] = 0;
  }

  // compute
  double golden[N], actual[N];
  branch_golden(A, B, golden, N, constant);
  branch(A, B, actual, N, constant);

  // compare
  puts(compare_1d(golden, actual, N) ? "pass" : "fail");
}