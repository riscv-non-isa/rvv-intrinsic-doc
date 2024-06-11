
## Zvbc - Vector Carryless Multiplication:

### [Vector Carryless Multiplication]():

**Prototypes:**
``` C
vuint64m1_t __riscv_vclmul_tu (vuint64m1_t maskedoff, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl);
vuint64m1_t __riscv_vclmul_tu (vuint64m1_t maskedoff, vuint64m1_t vs2, uint64_t rs1, size_t vl);
vuint64m2_t __riscv_vclmul_tu (vuint64m2_t maskedoff, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl);
vuint64m2_t __riscv_vclmul_tu (vuint64m2_t maskedoff, vuint64m2_t vs2, uint64_t rs1, size_t vl);
vuint64m4_t __riscv_vclmul_tu (vuint64m4_t maskedoff, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl);
vuint64m4_t __riscv_vclmul_tu (vuint64m4_t maskedoff, vuint64m4_t vs2, uint64_t rs1, size_t vl);
vuint64m8_t __riscv_vclmul_tu (vuint64m8_t maskedoff, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl);
vuint64m8_t __riscv_vclmul_tu (vuint64m8_t maskedoff, vuint64m8_t vs2, uint64_t rs1, size_t vl);
vuint64m1_t __riscv_vclmulh_tu (vuint64m1_t maskedoff, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl);
vuint64m1_t __riscv_vclmulh_tu (vuint64m1_t maskedoff, vuint64m1_t vs2, uint64_t rs1, size_t vl);
vuint64m2_t __riscv_vclmulh_tu (vuint64m2_t maskedoff, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl);
vuint64m2_t __riscv_vclmulh_tu (vuint64m2_t maskedoff, vuint64m2_t vs2, uint64_t rs1, size_t vl);
vuint64m4_t __riscv_vclmulh_tu (vuint64m4_t maskedoff, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl);
vuint64m4_t __riscv_vclmulh_tu (vuint64m4_t maskedoff, vuint64m4_t vs2, uint64_t rs1, size_t vl);
vuint64m8_t __riscv_vclmulh_tu (vuint64m8_t maskedoff, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl);
vuint64m8_t __riscv_vclmulh_tu (vuint64m8_t maskedoff, vuint64m8_t vs2, uint64_t rs1, size_t vl);
// masked functions
vuint64m1_t __riscv_vclmul_tum (vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl);
vuint64m1_t __riscv_vclmul_tum (vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t vs2, uint64_t rs1, size_t vl);
vuint64m2_t __riscv_vclmul_tum (vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl);
vuint64m2_t __riscv_vclmul_tum (vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t vs2, uint64_t rs1, size_t vl);
vuint64m4_t __riscv_vclmul_tum (vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl);
vuint64m4_t __riscv_vclmul_tum (vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t vs2, uint64_t rs1, size_t vl);
vuint64m8_t __riscv_vclmul_tum (vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl);
vuint64m8_t __riscv_vclmul_tum (vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t vs2, uint64_t rs1, size_t vl);
vuint64m1_t __riscv_vclmulh_tum (vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl);
vuint64m1_t __riscv_vclmulh_tum (vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t vs2, uint64_t rs1, size_t vl);
vuint64m2_t __riscv_vclmulh_tum (vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl);
vuint64m2_t __riscv_vclmulh_tum (vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t vs2, uint64_t rs1, size_t vl);
vuint64m4_t __riscv_vclmulh_tum (vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl);
vuint64m4_t __riscv_vclmulh_tum (vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t vs2, uint64_t rs1, size_t vl);
vuint64m8_t __riscv_vclmulh_tum (vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl);
vuint64m8_t __riscv_vclmulh_tum (vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t vs2, uint64_t rs1, size_t vl);
// masked functions
vuint64m1_t __riscv_vclmul_tumu (vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl);
vuint64m1_t __riscv_vclmul_tumu (vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t vs2, uint64_t rs1, size_t vl);
vuint64m2_t __riscv_vclmul_tumu (vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl);
vuint64m2_t __riscv_vclmul_tumu (vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t vs2, uint64_t rs1, size_t vl);
vuint64m4_t __riscv_vclmul_tumu (vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl);
vuint64m4_t __riscv_vclmul_tumu (vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t vs2, uint64_t rs1, size_t vl);
vuint64m8_t __riscv_vclmul_tumu (vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl);
vuint64m8_t __riscv_vclmul_tumu (vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t vs2, uint64_t rs1, size_t vl);
vuint64m1_t __riscv_vclmulh_tumu (vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl);
vuint64m1_t __riscv_vclmulh_tumu (vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t vs2, uint64_t rs1, size_t vl);
vuint64m2_t __riscv_vclmulh_tumu (vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl);
vuint64m2_t __riscv_vclmulh_tumu (vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t vs2, uint64_t rs1, size_t vl);
vuint64m4_t __riscv_vclmulh_tumu (vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl);
vuint64m4_t __riscv_vclmulh_tumu (vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t vs2, uint64_t rs1, size_t vl);
vuint64m8_t __riscv_vclmulh_tumu (vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl);
vuint64m8_t __riscv_vclmulh_tumu (vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t vs2, uint64_t rs1, size_t vl);
// masked functions
vuint64m1_t __riscv_vclmul_mu (vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl);
vuint64m1_t __riscv_vclmul_mu (vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t vs2, uint64_t rs1, size_t vl);
vuint64m2_t __riscv_vclmul_mu (vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl);
vuint64m2_t __riscv_vclmul_mu (vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t vs2, uint64_t rs1, size_t vl);
vuint64m4_t __riscv_vclmul_mu (vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl);
vuint64m4_t __riscv_vclmul_mu (vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t vs2, uint64_t rs1, size_t vl);
vuint64m8_t __riscv_vclmul_mu (vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl);
vuint64m8_t __riscv_vclmul_mu (vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t vs2, uint64_t rs1, size_t vl);
vuint64m1_t __riscv_vclmulh_mu (vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl);
vuint64m1_t __riscv_vclmulh_mu (vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t vs2, uint64_t rs1, size_t vl);
vuint64m2_t __riscv_vclmulh_mu (vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl);
vuint64m2_t __riscv_vclmulh_mu (vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t vs2, uint64_t rs1, size_t vl);
vuint64m4_t __riscv_vclmulh_mu (vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl);
vuint64m4_t __riscv_vclmulh_mu (vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t vs2, uint64_t rs1, size_t vl);
vuint64m8_t __riscv_vclmulh_mu (vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl);
vuint64m8_t __riscv_vclmulh_mu (vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t vs2, uint64_t rs1, size_t vl);
```
