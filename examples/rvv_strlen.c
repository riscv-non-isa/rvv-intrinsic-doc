#include "common.h"
#include <riscv_vector.h>
#include <string.h>

// reference https://github.com/riscv/riscv-v-spec/blob/master/example/strlen.s
size_t strlen_vec(char *src) {
  size_t vlmax = vsetvlmax_e8m8();
  char *copy_src = src;
  long first_set_bit = -1;
  size_t vl;
  while (first_set_bit < 0) {
    vint8m8_t vec_src = vle8ff_v_i8m8(copy_src, &vl, vlmax);
    vbool1_t string_terminate = vmseq_vx_i8m8_b1(vec_src, 0, vl);

    copy_src += vl;

    first_set_bit = vfirst_m_b1(string_terminate, vl);
  }
  copy_src -= vl - first_set_bit;

  return (size_t)(copy_src - src);
}

int main() {
  const uint32_t seed = 0xdeadbeef;
  srand(seed);

  int N = rand() % 2000;

  // data gen
  char s0[N];
  gen_string(s0, N);

  // compute
  size_t golden, actual;
  golden = strlen(s0);
  actual = strlen_vec(s0);

  // compare
  puts(golden == actual ? "pass" : "fail");
}
