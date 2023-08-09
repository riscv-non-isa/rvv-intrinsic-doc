#include "common.h"
#include <riscv_vector.h>
#include <string.h>

void *memcpy_vec(void *restrict destination, const void *restrict source,
                 size_t n) {
  unsigned char *dst = destination;
  const unsigned char *src = source;
  // copy data byte by byte
  for (size_t vl; n > 0; n -= vl, src += vl, dst += vl) {
    vl = __riscv_vsetvl_e8m8(n);
    vuint8m8_t vec_src = __riscv_vle8_v_u8m8(src, vl);
    __riscv_vse8_v_u8m8(dst, vec_src, vl);
  }
  return destination;
}

int main() {
  const int N = 127;
  const uint32_t seed = 0xdeadbeef;
  srand(seed);

  // data gen
  double A[N];
  gen_rand_1d(A, N);

  // compute
  double golden[N], actual[N];
  memcpy(golden, A, sizeof(A));
  memcpy_vec(actual, A, sizeof(A));

  // compare
  puts(compare_1d(golden, actual, N) ? "pass" : "fail");
}
