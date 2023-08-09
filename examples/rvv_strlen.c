#include "common.h"
#include <riscv_vector.h>
#include <string.h>

// reference https://github.com/riscv/riscv-v-spec/blob/master/example/strlen.s
size_t strlen_vec(char *source) {
  size_t vlmax = __riscv_vsetvlmax_e8m8();
  unsigned char *src = (unsigned char*)source;
  long first_set_bit = -1;
  size_t vl;
  for (; first_set_bit < 0; src += vl) {
    vuint8m8_t vec_src = __riscv_vle8ff_v_u8m8(src, &vl, vlmax);
    vbool1_t string_terminate = __riscv_vmseq_vx_u8m8_b1(vec_src, 0, vl);
    first_set_bit = __riscv_vfirst_m_b1(string_terminate, vl);
  }
  src -= vl - first_set_bit;
  return (size_t)((char*)src - source);
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
