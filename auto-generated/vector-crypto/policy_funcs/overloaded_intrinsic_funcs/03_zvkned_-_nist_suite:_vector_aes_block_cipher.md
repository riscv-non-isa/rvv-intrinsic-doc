
## Zvkned - NIST Suite: Vector AES Block Cipher:

### [Vector AES Encryption]():

**Prototypes:**
``` C
vuint32mf2_t __riscv_vaesef_tu (vuint32mf2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32mf2_t __riscv_vaesef_tu (vuint32mf2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vaesef_tu (vuint32m1_t vd, vuint32m1_t vs2, size_t vl);
vuint32m1_t __riscv_vaesef_tu (vuint32m1_t vd, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vaesef_tu (vuint32m2_t vd, vuint32m2_t vs2, size_t vl);
vuint32m2_t __riscv_vaesef_tu (vuint32m2_t vd, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vaesef_tu (vuint32m4_t vd, vuint32m4_t vs2, size_t vl);
vuint32m4_t __riscv_vaesef_tu (vuint32m4_t vd, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vaesef_tu (vuint32m8_t vd, vuint32m8_t vs2, size_t vl);
vuint32m8_t __riscv_vaesef_tu (vuint32m8_t vd, vuint32m8_t vs2, size_t vl);
vuint32mf2_t __riscv_vaesem_tu (vuint32mf2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32mf2_t __riscv_vaesem_tu (vuint32mf2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vaesem_tu (vuint32m1_t vd, vuint32m1_t vs2, size_t vl);
vuint32m1_t __riscv_vaesem_tu (vuint32m1_t vd, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vaesem_tu (vuint32m2_t vd, vuint32m2_t vs2, size_t vl);
vuint32m2_t __riscv_vaesem_tu (vuint32m2_t vd, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vaesem_tu (vuint32m4_t vd, vuint32m4_t vs2, size_t vl);
vuint32m4_t __riscv_vaesem_tu (vuint32m4_t vd, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vaesem_tu (vuint32m8_t vd, vuint32m8_t vs2, size_t vl);
vuint32m8_t __riscv_vaesem_tu (vuint32m8_t vd, vuint32m8_t vs2, size_t vl);
```

### [Vector AES Decryption]():

**Prototypes:**
``` C
vuint32mf2_t __riscv_vaesdf_tu (vuint32mf2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32mf2_t __riscv_vaesdf_tu (vuint32mf2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vaesdf_tu (vuint32m1_t vd, vuint32m1_t vs2, size_t vl);
vuint32m1_t __riscv_vaesdf_tu (vuint32m1_t vd, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vaesdf_tu (vuint32m2_t vd, vuint32m2_t vs2, size_t vl);
vuint32m2_t __riscv_vaesdf_tu (vuint32m2_t vd, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vaesdf_tu (vuint32m4_t vd, vuint32m4_t vs2, size_t vl);
vuint32m4_t __riscv_vaesdf_tu (vuint32m4_t vd, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vaesdf_tu (vuint32m8_t vd, vuint32m8_t vs2, size_t vl);
vuint32m8_t __riscv_vaesdf_tu (vuint32m8_t vd, vuint32m8_t vs2, size_t vl);
vuint32mf2_t __riscv_vaesdm_tu (vuint32mf2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32mf2_t __riscv_vaesdm_tu (vuint32mf2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vaesdm_tu (vuint32m1_t vd, vuint32m1_t vs2, size_t vl);
vuint32m1_t __riscv_vaesdm_tu (vuint32m1_t vd, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vaesdm_tu (vuint32m2_t vd, vuint32m2_t vs2, size_t vl);
vuint32m2_t __riscv_vaesdm_tu (vuint32m2_t vd, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vaesdm_tu (vuint32m4_t vd, vuint32m4_t vs2, size_t vl);
vuint32m4_t __riscv_vaesdm_tu (vuint32m4_t vd, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vaesdm_tu (vuint32m8_t vd, vuint32m8_t vs2, size_t vl);
vuint32m8_t __riscv_vaesdm_tu (vuint32m8_t vd, vuint32m8_t vs2, size_t vl);
```

### [Vector AES-128 Forward KeySchedule generation]():

**Prototypes:**
``` C
vuint32mf2_t __riscv_vaeskf1_tu (vuint32mf2_t maskedoff, vuint32mf2_t vs2, size_t uimm, size_t vl);
vuint32m1_t __riscv_vaeskf1_tu (vuint32m1_t maskedoff, vuint32m1_t vs2, size_t uimm, size_t vl);
vuint32m2_t __riscv_vaeskf1_tu (vuint32m2_t maskedoff, vuint32m2_t vs2, size_t uimm, size_t vl);
vuint32m4_t __riscv_vaeskf1_tu (vuint32m4_t maskedoff, vuint32m4_t vs2, size_t uimm, size_t vl);
vuint32m8_t __riscv_vaeskf1_tu (vuint32m8_t maskedoff, vuint32m8_t vs2, size_t uimm, size_t vl);
vuint32mf2_t __riscv_vaeskf2_tu (vuint32mf2_t maskedoff, vuint32mf2_t vs2, size_t uimm, size_t vl);
vuint32m1_t __riscv_vaeskf2_tu (vuint32m1_t maskedoff, vuint32m1_t vs2, size_t uimm, size_t vl);
vuint32m2_t __riscv_vaeskf2_tu (vuint32m2_t maskedoff, vuint32m2_t vs2, size_t uimm, size_t vl);
vuint32m4_t __riscv_vaeskf2_tu (vuint32m4_t maskedoff, vuint32m4_t vs2, size_t uimm, size_t vl);
vuint32m8_t __riscv_vaeskf2_tu (vuint32m8_t maskedoff, vuint32m8_t vs2, size_t uimm, size_t vl);
```

### [Vector AES round zero]():

**Prototypes:**
``` C
vuint32mf2_t __riscv_vaesz_tu (vuint32mf2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vaesz_tu (vuint32m1_t vd, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vaesz_tu (vuint32m2_t vd, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vaesz_tu (vuint32m4_t vd, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vaesz_tu (vuint32m8_t vd, vuint32m8_t vs2, size_t vl);
```
