
## Zvbc - Vector Carryless Multiplication:

### [Vector Carryless Multiplication]():

**Prototypes:**
``` C
vuint64m1_t __riscv_vclmul (vuint64m1_t vs2, vuint64m1_t vs1, size_t vl);
vuint64m1_t __riscv_vclmul (vuint64m1_t vs2, uint64_t rs1, size_t vl);
vuint64m2_t __riscv_vclmul (vuint64m2_t vs2, vuint64m2_t vs1, size_t vl);
vuint64m2_t __riscv_vclmul (vuint64m2_t vs2, uint64_t rs1, size_t vl);
vuint64m4_t __riscv_vclmul (vuint64m4_t vs2, vuint64m4_t vs1, size_t vl);
vuint64m4_t __riscv_vclmul (vuint64m4_t vs2, uint64_t rs1, size_t vl);
vuint64m8_t __riscv_vclmul (vuint64m8_t vs2, vuint64m8_t vs1, size_t vl);
vuint64m8_t __riscv_vclmul (vuint64m8_t vs2, uint64_t rs1, size_t vl);
vuint64m1_t __riscv_vclmulh (vuint64m1_t vs2, vuint64m1_t vs1, size_t vl);
vuint64m1_t __riscv_vclmulh (vuint64m1_t vs2, uint64_t rs1, size_t vl);
vuint64m2_t __riscv_vclmulh (vuint64m2_t vs2, vuint64m2_t vs1, size_t vl);
vuint64m2_t __riscv_vclmulh (vuint64m2_t vs2, uint64_t rs1, size_t vl);
vuint64m4_t __riscv_vclmulh (vuint64m4_t vs2, vuint64m4_t vs1, size_t vl);
vuint64m4_t __riscv_vclmulh (vuint64m4_t vs2, uint64_t rs1, size_t vl);
vuint64m8_t __riscv_vclmulh (vuint64m8_t vs2, vuint64m8_t vs1, size_t vl);
vuint64m8_t __riscv_vclmulh (vuint64m8_t vs2, uint64_t rs1, size_t vl);
// masked functions
vuint64m1_t __riscv_vclmul (vbool64_t mask, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl);
vuint64m1_t __riscv_vclmul (vbool64_t mask, vuint64m1_t vs2, uint64_t rs1, size_t vl);
vuint64m2_t __riscv_vclmul (vbool32_t mask, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl);
vuint64m2_t __riscv_vclmul (vbool32_t mask, vuint64m2_t vs2, uint64_t rs1, size_t vl);
vuint64m4_t __riscv_vclmul (vbool16_t mask, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl);
vuint64m4_t __riscv_vclmul (vbool16_t mask, vuint64m4_t vs2, uint64_t rs1, size_t vl);
vuint64m8_t __riscv_vclmul (vbool8_t mask, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl);
vuint64m8_t __riscv_vclmul (vbool8_t mask, vuint64m8_t vs2, uint64_t rs1, size_t vl);
vuint64m1_t __riscv_vclmulh (vbool64_t mask, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl);
vuint64m1_t __riscv_vclmulh (vbool64_t mask, vuint64m1_t vs2, uint64_t rs1, size_t vl);
vuint64m2_t __riscv_vclmulh (vbool32_t mask, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl);
vuint64m2_t __riscv_vclmulh (vbool32_t mask, vuint64m2_t vs2, uint64_t rs1, size_t vl);
vuint64m4_t __riscv_vclmulh (vbool16_t mask, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl);
vuint64m4_t __riscv_vclmulh (vbool16_t mask, vuint64m4_t vs2, uint64_t rs1, size_t vl);
vuint64m8_t __riscv_vclmulh (vbool8_t mask, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl);
vuint64m8_t __riscv_vclmulh (vbool8_t mask, vuint64m8_t vs2, uint64_t rs1, size_t vl);
```
