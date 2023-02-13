#include "common.h"
#include <riscv_vector.h>
#include <string.h>

// reference https://github.com/riscv/riscv-v-spec/blob/master/example/strncpy.s
char *strncpy_vec(char *dst, char *src, size_t count) {
  char *save = dst;
  size_t new_vl;
  long first_set_bit = -1;

  while (first_set_bit < 0) {
    if (count == 0)
      return save;
    size_t vl = __riscv_vsetvl_e8m1(count);

    vint8m1_t vec_src = __riscv_vle8ff_v_i8m1(src, &new_vl, vl);

    vbool8_t string_terminate = __riscv_vmseq_vx_i8m1_b8(vec_src, 0, new_vl);
    vbool8_t mask = __riscv_vmsif_m_b8(string_terminate, new_vl);

    __riscv_vse8_v_i8m1_m(mask, dst, vec_src, new_vl);

    count -= new_vl;
    src += new_vl;
    dst += new_vl;

    first_set_bit = __riscv_vfirst_m_b8(string_terminate, new_vl);
  }

  size_t tail = new_vl - first_set_bit;
  count += tail;
  dst -= tail;
  size_t vlmax = __riscv_vsetvlmax_e8m1();
  vint8m1_t vec_zero = __riscv_vmv_v_x_i8m1(0, vlmax);
  do {
    size_t vl = __riscv_vsetvl_e8m1(count);
    __riscv_vse8_v_i8m1(dst, vec_zero, vl);
    count -= vl;
    dst += vl;
  } while (count > 0);

  return save;
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
