
## Zvknh - NIST Suite: Vector SHA-2 Secure Hash:

### [Vector SHA-2 message schedule]():

**Prototypes:**
``` C
vuint32mf2_t __riscv_vsha2ms_vv_u32mf2 (vuint32mf2_t vd, vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl);
vuint32m1_t __riscv_vsha2ms_vv_u32m1 (vuint32m1_t vd, vuint32m1_t vs2, vuint32m1_t vs1, size_t vl);
vuint32m2_t __riscv_vsha2ms_vv_u32m2 (vuint32m2_t vd, vuint32m2_t vs2, vuint32m2_t vs1, size_t vl);
vuint32m4_t __riscv_vsha2ms_vv_u32m4 (vuint32m4_t vd, vuint32m4_t vs2, vuint32m4_t vs1, size_t vl);
vuint32m8_t __riscv_vsha2ms_vv_u32m8 (vuint32m8_t vd, vuint32m8_t vs2, vuint32m8_t vs1, size_t vl);
vuint64m1_t __riscv_vsha2ms_vv_u64m1 (vuint64m1_t vd, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl);
vuint64m2_t __riscv_vsha2ms_vv_u64m2 (vuint64m2_t vd, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl);
vuint64m4_t __riscv_vsha2ms_vv_u64m4 (vuint64m4_t vd, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl);
vuint64m8_t __riscv_vsha2ms_vv_u64m8 (vuint64m8_t vd, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl);
```

### [Vector SHA-2 two rounds of compression]():

**Prototypes:**
``` C
vuint32mf2_t __riscv_vsha2ch_vv_u32mf2 (vuint32mf2_t vd, vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl);
vuint32m1_t __riscv_vsha2ch_vv_u32m1 (vuint32m1_t vd, vuint32m1_t vs2, vuint32m1_t vs1, size_t vl);
vuint32m2_t __riscv_vsha2ch_vv_u32m2 (vuint32m2_t vd, vuint32m2_t vs2, vuint32m2_t vs1, size_t vl);
vuint32m4_t __riscv_vsha2ch_vv_u32m4 (vuint32m4_t vd, vuint32m4_t vs2, vuint32m4_t vs1, size_t vl);
vuint32m8_t __riscv_vsha2ch_vv_u32m8 (vuint32m8_t vd, vuint32m8_t vs2, vuint32m8_t vs1, size_t vl);
vuint64m1_t __riscv_vsha2ch_vv_u64m1 (vuint64m1_t vd, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl);
vuint64m2_t __riscv_vsha2ch_vv_u64m2 (vuint64m2_t vd, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl);
vuint64m4_t __riscv_vsha2ch_vv_u64m4 (vuint64m4_t vd, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl);
vuint64m8_t __riscv_vsha2ch_vv_u64m8 (vuint64m8_t vd, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl);
vuint32mf2_t __riscv_vsha2cl_vv_u32mf2 (vuint32mf2_t vd, vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl);
vuint32m1_t __riscv_vsha2cl_vv_u32m1 (vuint32m1_t vd, vuint32m1_t vs2, vuint32m1_t vs1, size_t vl);
vuint32m2_t __riscv_vsha2cl_vv_u32m2 (vuint32m2_t vd, vuint32m2_t vs2, vuint32m2_t vs1, size_t vl);
vuint32m4_t __riscv_vsha2cl_vv_u32m4 (vuint32m4_t vd, vuint32m4_t vs2, vuint32m4_t vs1, size_t vl);
vuint32m8_t __riscv_vsha2cl_vv_u32m8 (vuint32m8_t vd, vuint32m8_t vs2, vuint32m8_t vs1, size_t vl);
vuint64m1_t __riscv_vsha2cl_vv_u64m1 (vuint64m1_t vd, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl);
vuint64m2_t __riscv_vsha2cl_vv_u64m2 (vuint64m2_t vd, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl);
vuint64m4_t __riscv_vsha2cl_vv_u64m4 (vuint64m4_t vd, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl);
vuint64m8_t __riscv_vsha2cl_vv_u64m8 (vuint64m8_t vd, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl);
```
