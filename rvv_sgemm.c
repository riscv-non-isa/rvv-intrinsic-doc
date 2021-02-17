#include <riscv_vector.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

#define N 32

#define MAX_BLOCKSIZE 32
#define MLEN 4
#define KLEN 8
#define NLEN 4
#define OUTPUT_LEN 16

float a_array[MAX_BLOCKSIZE] = {-0.4325648115282207, -1.6655843782380970,
                                0.1253323064748307,  0.2876764203585489,
                                -1.1464713506814637, 1.1909154656429988,
                                1.1891642016521031,  -0.0376332765933176,
                                0.3272923614086541,  0.1746391428209245,
                                -0.1867085776814394, 0.7257905482933027,
                                -0.5883165430141887, 2.1831858181971011,
                                -0.1363958830865957, 0.1139313135208096,
                                1.0667682113591888,  0.0592814605236053,
                                -0.0956484054836690, -0.8323494636500225,
                                0.2944108163926404,  -1.3361818579378040,
                                0.7143245518189522,  1.6235620644462707,
                                -0.6917757017022868, 0.8579966728282626,
                                1.2540014216025324,  -1.5937295764474768,
                                -1.4409644319010200, 0.5711476236581780,
                                -0.3998855777153632, 0.1};

float b_array[MAX_BLOCKSIZE] = {1.7491401329284098,  0.1325982188803279,
                                0.3252281811989881,  -0.7938091410349637,
                                0.3149236145048914,  -0.5272704888029532,
                                0.9322666565031119,  1.1646643544607362,
                                -2.0456694357357357, -0.6443728590041911,
                                1.7410657940825480,  0.4867684246821860,
                                1.0488288293660140,  1.4885752747099299,
                                1.2705014969484090,  -1.8561241921210170,
                                2.1343209047321410,  1.4358467535865909,
                                -0.9173023332875400, -1.1060770780029008,
                                0.8105708062681296,  0.6985430696369063,
                                -0.4015827425012831, 1.2687512030669628,
                                -0.7836083053674872, 0.2132664971465569,
                                0.7878984786088954,  0.8966819356782295,
                                -0.1869172943544062, 1.0131816724341454,
                                0.2484350696132857,  0.1};

float golden_array[OUTPUT_LEN];
float c_array[OUTPUT_LEN];

void sgemm_golden() {
  for (size_t i = 0; i < MLEN; ++i)
    for (size_t j = 0; j < NLEN; ++j)
      for (size_t k = 0; k < KLEN; ++k)
        golden_array[i * NLEN + j] += a_array[i * KLEN + k] * b_array[j + k * NLEN];
}


// reference https://github.com/riscv/riscv-v-spec/blob/master/example/sgemm.S
// c += a*b (alpha=1, no transpose on input matrices)
// matrices stored in C row-major order
void sgemm_vec(size_t size_m, size_t size_n, size_t size_k,
               const float *a, // m * k matrix
               size_t lda,
               const float *b, // k * n matrix
               size_t ldb,
               float *c, // m * n matrix
               size_t ldc) {
  size_t vl;
  for (int m = 0; m < size_m; ++m) {
    const float *b_n_ptr = b;
    float *c_n_ptr = c;
    for (int c_n_count = size_n; (vl = vsetvl_e32m1(c_n_count )); c_n_count -= vl) {
      const float *a_k_ptr = a;
      const float *b_k_ptr = b_n_ptr;
      vfloat32m1_t acc = vle32_v_f32m1(c_n_ptr, vl);
      for (size_t k = 0; k < size_k; ++k) {
        vfloat32m1_t b_n_data = vle32_v_f32m1(b_k_ptr, vl);
        acc = vfmacc_vf_f32m1(acc, *a_k_ptr, b_n_data, vl);
        b_k_ptr += ldb;
        a_k_ptr++;
      }
      vse32_v_f32m1(c_n_ptr, acc, vl);
      c_n_ptr += vl;
      b_n_ptr += vl;
    }
    a += lda;
    c += ldc;
  }
}

int fp_eq(float reference, float actual, float relErr)
{
  // if near zero, do absolute error instead.
  float absErr = relErr * ((fabsf(reference) > relErr) ? fabsf(reference) : relErr);
  return fabsf(actual - reference) < absErr;
}

int main() {
  // golden
  memcpy(golden_array, b_array, OUTPUT_LEN * sizeof(float));
  sgemm_golden();
  // vector
  memcpy(c_array, b_array, OUTPUT_LEN * sizeof(float));
  sgemm_vec(MLEN, NLEN, KLEN, a_array, KLEN, b_array, NLEN, c_array, NLEN);

  int pass = 1;
  for (int i = 0; i < OUTPUT_LEN; i++) {
    if (!fp_eq(golden_array[i], c_array[i], 1e-5)) {
      printf("index %d failed, %f=!%f\n", i, golden_array[i], c_array[i]);
      pass = 0;
    }
  }
  if (pass)
    printf("passed\n");
  return (pass == 0);
}
