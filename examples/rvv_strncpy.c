#include "common.h"
#include <riscv_vector.h>
#include <string.h>

// reference https://github.com/riscv/riscv-v-spec/blob/master/example/strncpy.s
char *strncpy_vec(char *destination, char *source, size_t count) {
  unsigned char *dst = (unsigned char*)destination;
  unsigned char *src = (unsigned char*)source;
  long first_set_bit = -1;
  size_t vl;
  for (; first_set_bit < 0; count -= vl, src += vl, dst += vl) {
    if (count == 0)
      return destination;

    vl = __riscv_vsetvl_e8m1(count);
    vuint8m1_t vec_src = __riscv_vle8ff_v_u8m1(src, &vl, vl);

    vbool8_t string_terminate = __riscv_vmseq_vx_u8m1_b8(vec_src, 0, vl);
    vbool8_t mask = __riscv_vmsif_m_b8(string_terminate, vl);

    __riscv_vse8_v_u8m1_m(mask, dst, vec_src, vl);

    first_set_bit = __riscv_vfirst_m_b8(string_terminate, vl);
  }

  size_t tail = vl - first_set_bit;
  count += tail;
  dst -= tail;
  size_t vlmax = __riscv_vsetvlmax_e8m1();
  vuint8m1_t vec_zero = __riscv_vmv_v_x_u8m1(0, vlmax);
  do {
    size_t vl = __riscv_vsetvl_e8m1(count);
    __riscv_vse8_v_u8m1(dst, vec_zero, vl);
    count -= vl;
    dst += vl;
  } while (count > 0);

  return destination;
}

int main() {
  const int N = 1320;
  const uint32_t seed = 0xdeadbeef;
  srand(seed);

  // data gen
  char s0[N];
  gen_string(s0, N);
  char s1[] = "the quick brown fox jumps over the lazy dog";
  size_t count = strlen(s1) + rand() % 500;

  // compute
  char golden[N], actual[N];
  strcpy(golden, s0);
  strcpy(actual, s0);
  strncpy(golden, s1, count);
  strncpy_vec(actual, s1, count);

  // compare
  puts(compare_string(golden, actual, N) ? "pass" : "fail");
}
