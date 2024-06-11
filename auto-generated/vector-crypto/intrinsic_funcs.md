
## Zvbb - Vector Bit-manipulation used in Cryptography:

### [Vector Bit-manipulation used in Cryptography - Bitwise And-Not]():

**Prototypes:**
``` C
vuint8mf8_t __riscv_vandn_vv_u8mf8 (vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl);
vuint8mf8_t __riscv_vandn_vx_u8mf8 (vuint8mf8_t vs2, uint8_t rs1, size_t vl);
vuint8mf4_t __riscv_vandn_vv_u8mf4 (vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl);
vuint8mf4_t __riscv_vandn_vx_u8mf4 (vuint8mf4_t vs2, uint8_t rs1, size_t vl);
vuint8mf2_t __riscv_vandn_vv_u8mf2 (vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl);
vuint8mf2_t __riscv_vandn_vx_u8mf2 (vuint8mf2_t vs2, uint8_t rs1, size_t vl);
vuint8m1_t __riscv_vandn_vv_u8m1 (vuint8m1_t vs2, vuint8m1_t vs1, size_t vl);
vuint8m1_t __riscv_vandn_vx_u8m1 (vuint8m1_t vs2, uint8_t rs1, size_t vl);
vuint8m2_t __riscv_vandn_vv_u8m2 (vuint8m2_t vs2, vuint8m2_t vs1, size_t vl);
vuint8m2_t __riscv_vandn_vx_u8m2 (vuint8m2_t vs2, uint8_t rs1, size_t vl);
vuint8m4_t __riscv_vandn_vv_u8m4 (vuint8m4_t vs2, vuint8m4_t vs1, size_t vl);
vuint8m4_t __riscv_vandn_vx_u8m4 (vuint8m4_t vs2, uint8_t rs1, size_t vl);
vuint8m8_t __riscv_vandn_vv_u8m8 (vuint8m8_t vs2, vuint8m8_t vs1, size_t vl);
vuint8m8_t __riscv_vandn_vx_u8m8 (vuint8m8_t vs2, uint8_t rs1, size_t vl);
vuint16mf4_t __riscv_vandn_vv_u16mf4 (vuint16mf4_t vs2, vuint16mf4_t vs1, size_t vl);
vuint16mf4_t __riscv_vandn_vx_u16mf4 (vuint16mf4_t vs2, uint16_t rs1, size_t vl);
vuint16mf2_t __riscv_vandn_vv_u16mf2 (vuint16mf2_t vs2, vuint16mf2_t vs1, size_t vl);
vuint16mf2_t __riscv_vandn_vx_u16mf2 (vuint16mf2_t vs2, uint16_t rs1, size_t vl);
vuint16m1_t __riscv_vandn_vv_u16m1 (vuint16m1_t vs2, vuint16m1_t vs1, size_t vl);
vuint16m1_t __riscv_vandn_vx_u16m1 (vuint16m1_t vs2, uint16_t rs1, size_t vl);
vuint16m2_t __riscv_vandn_vv_u16m2 (vuint16m2_t vs2, vuint16m2_t vs1, size_t vl);
vuint16m2_t __riscv_vandn_vx_u16m2 (vuint16m2_t vs2, uint16_t rs1, size_t vl);
vuint16m4_t __riscv_vandn_vv_u16m4 (vuint16m4_t vs2, vuint16m4_t vs1, size_t vl);
vuint16m4_t __riscv_vandn_vx_u16m4 (vuint16m4_t vs2, uint16_t rs1, size_t vl);
vuint16m8_t __riscv_vandn_vv_u16m8 (vuint16m8_t vs2, vuint16m8_t vs1, size_t vl);
vuint16m8_t __riscv_vandn_vx_u16m8 (vuint16m8_t vs2, uint16_t rs1, size_t vl);
vuint32mf2_t __riscv_vandn_vv_u32mf2 (vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl);
vuint32mf2_t __riscv_vandn_vx_u32mf2 (vuint32mf2_t vs2, uint32_t rs1, size_t vl);
vuint32m1_t __riscv_vandn_vv_u32m1 (vuint32m1_t vs2, vuint32m1_t vs1, size_t vl);
vuint32m1_t __riscv_vandn_vx_u32m1 (vuint32m1_t vs2, uint32_t rs1, size_t vl);
vuint32m2_t __riscv_vandn_vv_u32m2 (vuint32m2_t vs2, vuint32m2_t vs1, size_t vl);
vuint32m2_t __riscv_vandn_vx_u32m2 (vuint32m2_t vs2, uint32_t rs1, size_t vl);
vuint32m4_t __riscv_vandn_vv_u32m4 (vuint32m4_t vs2, vuint32m4_t vs1, size_t vl);
vuint32m4_t __riscv_vandn_vx_u32m4 (vuint32m4_t vs2, uint32_t rs1, size_t vl);
vuint32m8_t __riscv_vandn_vv_u32m8 (vuint32m8_t vs2, vuint32m8_t vs1, size_t vl);
vuint32m8_t __riscv_vandn_vx_u32m8 (vuint32m8_t vs2, uint32_t rs1, size_t vl);
vuint64m1_t __riscv_vandn_vv_u64m1 (vuint64m1_t vs2, vuint64m1_t vs1, size_t vl);
vuint64m1_t __riscv_vandn_vx_u64m1 (vuint64m1_t vs2, uint64_t rs1, size_t vl);
vuint64m2_t __riscv_vandn_vv_u64m2 (vuint64m2_t vs2, vuint64m2_t vs1, size_t vl);
vuint64m2_t __riscv_vandn_vx_u64m2 (vuint64m2_t vs2, uint64_t rs1, size_t vl);
vuint64m4_t __riscv_vandn_vv_u64m4 (vuint64m4_t vs2, vuint64m4_t vs1, size_t vl);
vuint64m4_t __riscv_vandn_vx_u64m4 (vuint64m4_t vs2, uint64_t rs1, size_t vl);
vuint64m8_t __riscv_vandn_vv_u64m8 (vuint64m8_t vs2, vuint64m8_t vs1, size_t vl);
vuint64m8_t __riscv_vandn_vx_u64m8 (vuint64m8_t vs2, uint64_t rs1, size_t vl);
// masked functions
vuint8mf8_t __riscv_vandn_vv_u8mf8_m (vbool64_t mask, vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl);
vuint8mf8_t __riscv_vandn_vx_u8mf8_m (vbool64_t mask, vuint8mf8_t vs2, uint8_t rs1, size_t vl);
vuint8mf4_t __riscv_vandn_vv_u8mf4_m (vbool32_t mask, vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl);
vuint8mf4_t __riscv_vandn_vx_u8mf4_m (vbool32_t mask, vuint8mf4_t vs2, uint8_t rs1, size_t vl);
vuint8mf2_t __riscv_vandn_vv_u8mf2_m (vbool16_t mask, vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl);
vuint8mf2_t __riscv_vandn_vx_u8mf2_m (vbool16_t mask, vuint8mf2_t vs2, uint8_t rs1, size_t vl);
vuint8m1_t __riscv_vandn_vv_u8m1_m (vbool8_t mask, vuint8m1_t vs2, vuint8m1_t vs1, size_t vl);
vuint8m1_t __riscv_vandn_vx_u8m1_m (vbool8_t mask, vuint8m1_t vs2, uint8_t rs1, size_t vl);
vuint8m2_t __riscv_vandn_vv_u8m2_m (vbool4_t mask, vuint8m2_t vs2, vuint8m2_t vs1, size_t vl);
vuint8m2_t __riscv_vandn_vx_u8m2_m (vbool4_t mask, vuint8m2_t vs2, uint8_t rs1, size_t vl);
vuint8m4_t __riscv_vandn_vv_u8m4_m (vbool2_t mask, vuint8m4_t vs2, vuint8m4_t vs1, size_t vl);
vuint8m4_t __riscv_vandn_vx_u8m4_m (vbool2_t mask, vuint8m4_t vs2, uint8_t rs1, size_t vl);
vuint8m8_t __riscv_vandn_vv_u8m8_m (vbool1_t mask, vuint8m8_t vs2, vuint8m8_t vs1, size_t vl);
vuint8m8_t __riscv_vandn_vx_u8m8_m (vbool1_t mask, vuint8m8_t vs2, uint8_t rs1, size_t vl);
vuint16mf4_t __riscv_vandn_vv_u16mf4_m (vbool64_t mask, vuint16mf4_t vs2, vuint16mf4_t vs1, size_t vl);
vuint16mf4_t __riscv_vandn_vx_u16mf4_m (vbool64_t mask, vuint16mf4_t vs2, uint16_t rs1, size_t vl);
vuint16mf2_t __riscv_vandn_vv_u16mf2_m (vbool32_t mask, vuint16mf2_t vs2, vuint16mf2_t vs1, size_t vl);
vuint16mf2_t __riscv_vandn_vx_u16mf2_m (vbool32_t mask, vuint16mf2_t vs2, uint16_t rs1, size_t vl);
vuint16m1_t __riscv_vandn_vv_u16m1_m (vbool16_t mask, vuint16m1_t vs2, vuint16m1_t vs1, size_t vl);
vuint16m1_t __riscv_vandn_vx_u16m1_m (vbool16_t mask, vuint16m1_t vs2, uint16_t rs1, size_t vl);
vuint16m2_t __riscv_vandn_vv_u16m2_m (vbool8_t mask, vuint16m2_t vs2, vuint16m2_t vs1, size_t vl);
vuint16m2_t __riscv_vandn_vx_u16m2_m (vbool8_t mask, vuint16m2_t vs2, uint16_t rs1, size_t vl);
vuint16m4_t __riscv_vandn_vv_u16m4_m (vbool4_t mask, vuint16m4_t vs2, vuint16m4_t vs1, size_t vl);
vuint16m4_t __riscv_vandn_vx_u16m4_m (vbool4_t mask, vuint16m4_t vs2, uint16_t rs1, size_t vl);
vuint16m8_t __riscv_vandn_vv_u16m8_m (vbool2_t mask, vuint16m8_t vs2, vuint16m8_t vs1, size_t vl);
vuint16m8_t __riscv_vandn_vx_u16m8_m (vbool2_t mask, vuint16m8_t vs2, uint16_t rs1, size_t vl);
vuint32mf2_t __riscv_vandn_vv_u32mf2_m (vbool64_t mask, vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl);
vuint32mf2_t __riscv_vandn_vx_u32mf2_m (vbool64_t mask, vuint32mf2_t vs2, uint32_t rs1, size_t vl);
vuint32m1_t __riscv_vandn_vv_u32m1_m (vbool32_t mask, vuint32m1_t vs2, vuint32m1_t vs1, size_t vl);
vuint32m1_t __riscv_vandn_vx_u32m1_m (vbool32_t mask, vuint32m1_t vs2, uint32_t rs1, size_t vl);
vuint32m2_t __riscv_vandn_vv_u32m2_m (vbool16_t mask, vuint32m2_t vs2, vuint32m2_t vs1, size_t vl);
vuint32m2_t __riscv_vandn_vx_u32m2_m (vbool16_t mask, vuint32m2_t vs2, uint32_t rs1, size_t vl);
vuint32m4_t __riscv_vandn_vv_u32m4_m (vbool8_t mask, vuint32m4_t vs2, vuint32m4_t vs1, size_t vl);
vuint32m4_t __riscv_vandn_vx_u32m4_m (vbool8_t mask, vuint32m4_t vs2, uint32_t rs1, size_t vl);
vuint32m8_t __riscv_vandn_vv_u32m8_m (vbool4_t mask, vuint32m8_t vs2, vuint32m8_t vs1, size_t vl);
vuint32m8_t __riscv_vandn_vx_u32m8_m (vbool4_t mask, vuint32m8_t vs2, uint32_t rs1, size_t vl);
vuint64m1_t __riscv_vandn_vv_u64m1_m (vbool64_t mask, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl);
vuint64m1_t __riscv_vandn_vx_u64m1_m (vbool64_t mask, vuint64m1_t vs2, uint64_t rs1, size_t vl);
vuint64m2_t __riscv_vandn_vv_u64m2_m (vbool32_t mask, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl);
vuint64m2_t __riscv_vandn_vx_u64m2_m (vbool32_t mask, vuint64m2_t vs2, uint64_t rs1, size_t vl);
vuint64m4_t __riscv_vandn_vv_u64m4_m (vbool16_t mask, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl);
vuint64m4_t __riscv_vandn_vx_u64m4_m (vbool16_t mask, vuint64m4_t vs2, uint64_t rs1, size_t vl);
vuint64m8_t __riscv_vandn_vv_u64m8_m (vbool8_t mask, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl);
vuint64m8_t __riscv_vandn_vx_u64m8_m (vbool8_t mask, vuint64m8_t vs2, uint64_t rs1, size_t vl);
```

### [Vector Bit-manipulation used in Cryptography - Reverse Bits]():

**Prototypes:**
``` C
vuint8mf8_t __riscv_vbrev_v_u8mf8 (vuint8mf8_t vs2, size_t vl);
vuint8mf4_t __riscv_vbrev_v_u8mf4 (vuint8mf4_t vs2, size_t vl);
vuint8mf2_t __riscv_vbrev_v_u8mf2 (vuint8mf2_t vs2, size_t vl);
vuint8m1_t __riscv_vbrev_v_u8m1 (vuint8m1_t vs2, size_t vl);
vuint8m2_t __riscv_vbrev_v_u8m2 (vuint8m2_t vs2, size_t vl);
vuint8m4_t __riscv_vbrev_v_u8m4 (vuint8m4_t vs2, size_t vl);
vuint8m8_t __riscv_vbrev_v_u8m8 (vuint8m8_t vs2, size_t vl);
vuint16mf4_t __riscv_vbrev_v_u16mf4 (vuint16mf4_t vs2, size_t vl);
vuint16mf2_t __riscv_vbrev_v_u16mf2 (vuint16mf2_t vs2, size_t vl);
vuint16m1_t __riscv_vbrev_v_u16m1 (vuint16m1_t vs2, size_t vl);
vuint16m2_t __riscv_vbrev_v_u16m2 (vuint16m2_t vs2, size_t vl);
vuint16m4_t __riscv_vbrev_v_u16m4 (vuint16m4_t vs2, size_t vl);
vuint16m8_t __riscv_vbrev_v_u16m8 (vuint16m8_t vs2, size_t vl);
vuint32mf2_t __riscv_vbrev_v_u32mf2 (vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vbrev_v_u32m1 (vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vbrev_v_u32m2 (vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vbrev_v_u32m4 (vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vbrev_v_u32m8 (vuint32m8_t vs2, size_t vl);
vuint64m1_t __riscv_vbrev_v_u64m1 (vuint64m1_t vs2, size_t vl);
vuint64m2_t __riscv_vbrev_v_u64m2 (vuint64m2_t vs2, size_t vl);
vuint64m4_t __riscv_vbrev_v_u64m4 (vuint64m4_t vs2, size_t vl);
vuint64m8_t __riscv_vbrev_v_u64m8 (vuint64m8_t vs2, size_t vl);
vuint8mf8_t __riscv_vbrev8_v_u8mf8 (vuint8mf8_t vs2, size_t vl);
vuint8mf4_t __riscv_vbrev8_v_u8mf4 (vuint8mf4_t vs2, size_t vl);
vuint8mf2_t __riscv_vbrev8_v_u8mf2 (vuint8mf2_t vs2, size_t vl);
vuint8m1_t __riscv_vbrev8_v_u8m1 (vuint8m1_t vs2, size_t vl);
vuint8m2_t __riscv_vbrev8_v_u8m2 (vuint8m2_t vs2, size_t vl);
vuint8m4_t __riscv_vbrev8_v_u8m4 (vuint8m4_t vs2, size_t vl);
vuint8m8_t __riscv_vbrev8_v_u8m8 (vuint8m8_t vs2, size_t vl);
vuint16mf4_t __riscv_vbrev8_v_u16mf4 (vuint16mf4_t vs2, size_t vl);
vuint16mf2_t __riscv_vbrev8_v_u16mf2 (vuint16mf2_t vs2, size_t vl);
vuint16m1_t __riscv_vbrev8_v_u16m1 (vuint16m1_t vs2, size_t vl);
vuint16m2_t __riscv_vbrev8_v_u16m2 (vuint16m2_t vs2, size_t vl);
vuint16m4_t __riscv_vbrev8_v_u16m4 (vuint16m4_t vs2, size_t vl);
vuint16m8_t __riscv_vbrev8_v_u16m8 (vuint16m8_t vs2, size_t vl);
vuint32mf2_t __riscv_vbrev8_v_u32mf2 (vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vbrev8_v_u32m1 (vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vbrev8_v_u32m2 (vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vbrev8_v_u32m4 (vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vbrev8_v_u32m8 (vuint32m8_t vs2, size_t vl);
vuint64m1_t __riscv_vbrev8_v_u64m1 (vuint64m1_t vs2, size_t vl);
vuint64m2_t __riscv_vbrev8_v_u64m2 (vuint64m2_t vs2, size_t vl);
vuint64m4_t __riscv_vbrev8_v_u64m4 (vuint64m4_t vs2, size_t vl);
vuint64m8_t __riscv_vbrev8_v_u64m8 (vuint64m8_t vs2, size_t vl);
vuint8mf8_t __riscv_vrev8_v_u8mf8 (vuint8mf8_t vs2, size_t vl);
vuint8mf4_t __riscv_vrev8_v_u8mf4 (vuint8mf4_t vs2, size_t vl);
vuint8mf2_t __riscv_vrev8_v_u8mf2 (vuint8mf2_t vs2, size_t vl);
vuint8m1_t __riscv_vrev8_v_u8m1 (vuint8m1_t vs2, size_t vl);
vuint8m2_t __riscv_vrev8_v_u8m2 (vuint8m2_t vs2, size_t vl);
vuint8m4_t __riscv_vrev8_v_u8m4 (vuint8m4_t vs2, size_t vl);
vuint8m8_t __riscv_vrev8_v_u8m8 (vuint8m8_t vs2, size_t vl);
vuint16mf4_t __riscv_vrev8_v_u16mf4 (vuint16mf4_t vs2, size_t vl);
vuint16mf2_t __riscv_vrev8_v_u16mf2 (vuint16mf2_t vs2, size_t vl);
vuint16m1_t __riscv_vrev8_v_u16m1 (vuint16m1_t vs2, size_t vl);
vuint16m2_t __riscv_vrev8_v_u16m2 (vuint16m2_t vs2, size_t vl);
vuint16m4_t __riscv_vrev8_v_u16m4 (vuint16m4_t vs2, size_t vl);
vuint16m8_t __riscv_vrev8_v_u16m8 (vuint16m8_t vs2, size_t vl);
vuint32mf2_t __riscv_vrev8_v_u32mf2 (vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vrev8_v_u32m1 (vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vrev8_v_u32m2 (vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vrev8_v_u32m4 (vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vrev8_v_u32m8 (vuint32m8_t vs2, size_t vl);
vuint64m1_t __riscv_vrev8_v_u64m1 (vuint64m1_t vs2, size_t vl);
vuint64m2_t __riscv_vrev8_v_u64m2 (vuint64m2_t vs2, size_t vl);
vuint64m4_t __riscv_vrev8_v_u64m4 (vuint64m4_t vs2, size_t vl);
vuint64m8_t __riscv_vrev8_v_u64m8 (vuint64m8_t vs2, size_t vl);
// masked functions
vuint8mf8_t __riscv_vbrev_v_u8mf8_m (vbool64_t mask, vuint8mf8_t vs2, size_t vl);
vuint8mf4_t __riscv_vbrev_v_u8mf4_m (vbool32_t mask, vuint8mf4_t vs2, size_t vl);
vuint8mf2_t __riscv_vbrev_v_u8mf2_m (vbool16_t mask, vuint8mf2_t vs2, size_t vl);
vuint8m1_t __riscv_vbrev_v_u8m1_m (vbool8_t mask, vuint8m1_t vs2, size_t vl);
vuint8m2_t __riscv_vbrev_v_u8m2_m (vbool4_t mask, vuint8m2_t vs2, size_t vl);
vuint8m4_t __riscv_vbrev_v_u8m4_m (vbool2_t mask, vuint8m4_t vs2, size_t vl);
vuint8m8_t __riscv_vbrev_v_u8m8_m (vbool1_t mask, vuint8m8_t vs2, size_t vl);
vuint16mf4_t __riscv_vbrev_v_u16mf4_m (vbool64_t mask, vuint16mf4_t vs2, size_t vl);
vuint16mf2_t __riscv_vbrev_v_u16mf2_m (vbool32_t mask, vuint16mf2_t vs2, size_t vl);
vuint16m1_t __riscv_vbrev_v_u16m1_m (vbool16_t mask, vuint16m1_t vs2, size_t vl);
vuint16m2_t __riscv_vbrev_v_u16m2_m (vbool8_t mask, vuint16m2_t vs2, size_t vl);
vuint16m4_t __riscv_vbrev_v_u16m4_m (vbool4_t mask, vuint16m4_t vs2, size_t vl);
vuint16m8_t __riscv_vbrev_v_u16m8_m (vbool2_t mask, vuint16m8_t vs2, size_t vl);
vuint32mf2_t __riscv_vbrev_v_u32mf2_m (vbool64_t mask, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vbrev_v_u32m1_m (vbool32_t mask, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vbrev_v_u32m2_m (vbool16_t mask, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vbrev_v_u32m4_m (vbool8_t mask, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vbrev_v_u32m8_m (vbool4_t mask, vuint32m8_t vs2, size_t vl);
vuint64m1_t __riscv_vbrev_v_u64m1_m (vbool64_t mask, vuint64m1_t vs2, size_t vl);
vuint64m2_t __riscv_vbrev_v_u64m2_m (vbool32_t mask, vuint64m2_t vs2, size_t vl);
vuint64m4_t __riscv_vbrev_v_u64m4_m (vbool16_t mask, vuint64m4_t vs2, size_t vl);
vuint64m8_t __riscv_vbrev_v_u64m8_m (vbool8_t mask, vuint64m8_t vs2, size_t vl);
vuint8mf8_t __riscv_vbrev8_v_u8mf8_m (vbool64_t mask, vuint8mf8_t vs2, size_t vl);
vuint8mf4_t __riscv_vbrev8_v_u8mf4_m (vbool32_t mask, vuint8mf4_t vs2, size_t vl);
vuint8mf2_t __riscv_vbrev8_v_u8mf2_m (vbool16_t mask, vuint8mf2_t vs2, size_t vl);
vuint8m1_t __riscv_vbrev8_v_u8m1_m (vbool8_t mask, vuint8m1_t vs2, size_t vl);
vuint8m2_t __riscv_vbrev8_v_u8m2_m (vbool4_t mask, vuint8m2_t vs2, size_t vl);
vuint8m4_t __riscv_vbrev8_v_u8m4_m (vbool2_t mask, vuint8m4_t vs2, size_t vl);
vuint8m8_t __riscv_vbrev8_v_u8m8_m (vbool1_t mask, vuint8m8_t vs2, size_t vl);
vuint16mf4_t __riscv_vbrev8_v_u16mf4_m (vbool64_t mask, vuint16mf4_t vs2, size_t vl);
vuint16mf2_t __riscv_vbrev8_v_u16mf2_m (vbool32_t mask, vuint16mf2_t vs2, size_t vl);
vuint16m1_t __riscv_vbrev8_v_u16m1_m (vbool16_t mask, vuint16m1_t vs2, size_t vl);
vuint16m2_t __riscv_vbrev8_v_u16m2_m (vbool8_t mask, vuint16m2_t vs2, size_t vl);
vuint16m4_t __riscv_vbrev8_v_u16m4_m (vbool4_t mask, vuint16m4_t vs2, size_t vl);
vuint16m8_t __riscv_vbrev8_v_u16m8_m (vbool2_t mask, vuint16m8_t vs2, size_t vl);
vuint32mf2_t __riscv_vbrev8_v_u32mf2_m (vbool64_t mask, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vbrev8_v_u32m1_m (vbool32_t mask, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vbrev8_v_u32m2_m (vbool16_t mask, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vbrev8_v_u32m4_m (vbool8_t mask, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vbrev8_v_u32m8_m (vbool4_t mask, vuint32m8_t vs2, size_t vl);
vuint64m1_t __riscv_vbrev8_v_u64m1_m (vbool64_t mask, vuint64m1_t vs2, size_t vl);
vuint64m2_t __riscv_vbrev8_v_u64m2_m (vbool32_t mask, vuint64m2_t vs2, size_t vl);
vuint64m4_t __riscv_vbrev8_v_u64m4_m (vbool16_t mask, vuint64m4_t vs2, size_t vl);
vuint64m8_t __riscv_vbrev8_v_u64m8_m (vbool8_t mask, vuint64m8_t vs2, size_t vl);
vuint8mf8_t __riscv_vrev8_v_u8mf8_m (vbool64_t mask, vuint8mf8_t vs2, size_t vl);
vuint8mf4_t __riscv_vrev8_v_u8mf4_m (vbool32_t mask, vuint8mf4_t vs2, size_t vl);
vuint8mf2_t __riscv_vrev8_v_u8mf2_m (vbool16_t mask, vuint8mf2_t vs2, size_t vl);
vuint8m1_t __riscv_vrev8_v_u8m1_m (vbool8_t mask, vuint8m1_t vs2, size_t vl);
vuint8m2_t __riscv_vrev8_v_u8m2_m (vbool4_t mask, vuint8m2_t vs2, size_t vl);
vuint8m4_t __riscv_vrev8_v_u8m4_m (vbool2_t mask, vuint8m4_t vs2, size_t vl);
vuint8m8_t __riscv_vrev8_v_u8m8_m (vbool1_t mask, vuint8m8_t vs2, size_t vl);
vuint16mf4_t __riscv_vrev8_v_u16mf4_m (vbool64_t mask, vuint16mf4_t vs2, size_t vl);
vuint16mf2_t __riscv_vrev8_v_u16mf2_m (vbool32_t mask, vuint16mf2_t vs2, size_t vl);
vuint16m1_t __riscv_vrev8_v_u16m1_m (vbool16_t mask, vuint16m1_t vs2, size_t vl);
vuint16m2_t __riscv_vrev8_v_u16m2_m (vbool8_t mask, vuint16m2_t vs2, size_t vl);
vuint16m4_t __riscv_vrev8_v_u16m4_m (vbool4_t mask, vuint16m4_t vs2, size_t vl);
vuint16m8_t __riscv_vrev8_v_u16m8_m (vbool2_t mask, vuint16m8_t vs2, size_t vl);
vuint32mf2_t __riscv_vrev8_v_u32mf2_m (vbool64_t mask, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vrev8_v_u32m1_m (vbool32_t mask, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vrev8_v_u32m2_m (vbool16_t mask, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vrev8_v_u32m4_m (vbool8_t mask, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vrev8_v_u32m8_m (vbool4_t mask, vuint32m8_t vs2, size_t vl);
vuint64m1_t __riscv_vrev8_v_u64m1_m (vbool64_t mask, vuint64m1_t vs2, size_t vl);
vuint64m2_t __riscv_vrev8_v_u64m2_m (vbool32_t mask, vuint64m2_t vs2, size_t vl);
vuint64m4_t __riscv_vrev8_v_u64m4_m (vbool16_t mask, vuint64m4_t vs2, size_t vl);
vuint64m8_t __riscv_vrev8_v_u64m8_m (vbool8_t mask, vuint64m8_t vs2, size_t vl);
```

### [Vector Bit-manipulation used in Cryptography - Count Bits]():

**Prototypes:**
``` C
vuint8mf8_t __riscv_vclz_v_u8mf8 (vuint8mf8_t vs2, size_t vl);
vuint8mf4_t __riscv_vclz_v_u8mf4 (vuint8mf4_t vs2, size_t vl);
vuint8mf2_t __riscv_vclz_v_u8mf2 (vuint8mf2_t vs2, size_t vl);
vuint8m1_t __riscv_vclz_v_u8m1 (vuint8m1_t vs2, size_t vl);
vuint8m2_t __riscv_vclz_v_u8m2 (vuint8m2_t vs2, size_t vl);
vuint8m4_t __riscv_vclz_v_u8m4 (vuint8m4_t vs2, size_t vl);
vuint8m8_t __riscv_vclz_v_u8m8 (vuint8m8_t vs2, size_t vl);
vuint16mf4_t __riscv_vclz_v_u16mf4 (vuint16mf4_t vs2, size_t vl);
vuint16mf2_t __riscv_vclz_v_u16mf2 (vuint16mf2_t vs2, size_t vl);
vuint16m1_t __riscv_vclz_v_u16m1 (vuint16m1_t vs2, size_t vl);
vuint16m2_t __riscv_vclz_v_u16m2 (vuint16m2_t vs2, size_t vl);
vuint16m4_t __riscv_vclz_v_u16m4 (vuint16m4_t vs2, size_t vl);
vuint16m8_t __riscv_vclz_v_u16m8 (vuint16m8_t vs2, size_t vl);
vuint32mf2_t __riscv_vclz_v_u32mf2 (vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vclz_v_u32m1 (vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vclz_v_u32m2 (vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vclz_v_u32m4 (vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vclz_v_u32m8 (vuint32m8_t vs2, size_t vl);
vuint64m1_t __riscv_vclz_v_u64m1 (vuint64m1_t vs2, size_t vl);
vuint64m2_t __riscv_vclz_v_u64m2 (vuint64m2_t vs2, size_t vl);
vuint64m4_t __riscv_vclz_v_u64m4 (vuint64m4_t vs2, size_t vl);
vuint64m8_t __riscv_vclz_v_u64m8 (vuint64m8_t vs2, size_t vl);
vuint8mf8_t __riscv_vctz_v_u8mf8 (vuint8mf8_t vs2, size_t vl);
vuint8mf4_t __riscv_vctz_v_u8mf4 (vuint8mf4_t vs2, size_t vl);
vuint8mf2_t __riscv_vctz_v_u8mf2 (vuint8mf2_t vs2, size_t vl);
vuint8m1_t __riscv_vctz_v_u8m1 (vuint8m1_t vs2, size_t vl);
vuint8m2_t __riscv_vctz_v_u8m2 (vuint8m2_t vs2, size_t vl);
vuint8m4_t __riscv_vctz_v_u8m4 (vuint8m4_t vs2, size_t vl);
vuint8m8_t __riscv_vctz_v_u8m8 (vuint8m8_t vs2, size_t vl);
vuint16mf4_t __riscv_vctz_v_u16mf4 (vuint16mf4_t vs2, size_t vl);
vuint16mf2_t __riscv_vctz_v_u16mf2 (vuint16mf2_t vs2, size_t vl);
vuint16m1_t __riscv_vctz_v_u16m1 (vuint16m1_t vs2, size_t vl);
vuint16m2_t __riscv_vctz_v_u16m2 (vuint16m2_t vs2, size_t vl);
vuint16m4_t __riscv_vctz_v_u16m4 (vuint16m4_t vs2, size_t vl);
vuint16m8_t __riscv_vctz_v_u16m8 (vuint16m8_t vs2, size_t vl);
vuint32mf2_t __riscv_vctz_v_u32mf2 (vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vctz_v_u32m1 (vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vctz_v_u32m2 (vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vctz_v_u32m4 (vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vctz_v_u32m8 (vuint32m8_t vs2, size_t vl);
vuint64m1_t __riscv_vctz_v_u64m1 (vuint64m1_t vs2, size_t vl);
vuint64m2_t __riscv_vctz_v_u64m2 (vuint64m2_t vs2, size_t vl);
vuint64m4_t __riscv_vctz_v_u64m4 (vuint64m4_t vs2, size_t vl);
vuint64m8_t __riscv_vctz_v_u64m8 (vuint64m8_t vs2, size_t vl);
// masked functions
vuint8mf8_t __riscv_vclz_v_u8mf8_m (vbool64_t mask, vuint8mf8_t vs2, size_t vl);
vuint8mf4_t __riscv_vclz_v_u8mf4_m (vbool32_t mask, vuint8mf4_t vs2, size_t vl);
vuint8mf2_t __riscv_vclz_v_u8mf2_m (vbool16_t mask, vuint8mf2_t vs2, size_t vl);
vuint8m1_t __riscv_vclz_v_u8m1_m (vbool8_t mask, vuint8m1_t vs2, size_t vl);
vuint8m2_t __riscv_vclz_v_u8m2_m (vbool4_t mask, vuint8m2_t vs2, size_t vl);
vuint8m4_t __riscv_vclz_v_u8m4_m (vbool2_t mask, vuint8m4_t vs2, size_t vl);
vuint8m8_t __riscv_vclz_v_u8m8_m (vbool1_t mask, vuint8m8_t vs2, size_t vl);
vuint16mf4_t __riscv_vclz_v_u16mf4_m (vbool64_t mask, vuint16mf4_t vs2, size_t vl);
vuint16mf2_t __riscv_vclz_v_u16mf2_m (vbool32_t mask, vuint16mf2_t vs2, size_t vl);
vuint16m1_t __riscv_vclz_v_u16m1_m (vbool16_t mask, vuint16m1_t vs2, size_t vl);
vuint16m2_t __riscv_vclz_v_u16m2_m (vbool8_t mask, vuint16m2_t vs2, size_t vl);
vuint16m4_t __riscv_vclz_v_u16m4_m (vbool4_t mask, vuint16m4_t vs2, size_t vl);
vuint16m8_t __riscv_vclz_v_u16m8_m (vbool2_t mask, vuint16m8_t vs2, size_t vl);
vuint32mf2_t __riscv_vclz_v_u32mf2_m (vbool64_t mask, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vclz_v_u32m1_m (vbool32_t mask, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vclz_v_u32m2_m (vbool16_t mask, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vclz_v_u32m4_m (vbool8_t mask, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vclz_v_u32m8_m (vbool4_t mask, vuint32m8_t vs2, size_t vl);
vuint64m1_t __riscv_vclz_v_u64m1_m (vbool64_t mask, vuint64m1_t vs2, size_t vl);
vuint64m2_t __riscv_vclz_v_u64m2_m (vbool32_t mask, vuint64m2_t vs2, size_t vl);
vuint64m4_t __riscv_vclz_v_u64m4_m (vbool16_t mask, vuint64m4_t vs2, size_t vl);
vuint64m8_t __riscv_vclz_v_u64m8_m (vbool8_t mask, vuint64m8_t vs2, size_t vl);
vuint8mf8_t __riscv_vctz_v_u8mf8_m (vbool64_t mask, vuint8mf8_t vs2, size_t vl);
vuint8mf4_t __riscv_vctz_v_u8mf4_m (vbool32_t mask, vuint8mf4_t vs2, size_t vl);
vuint8mf2_t __riscv_vctz_v_u8mf2_m (vbool16_t mask, vuint8mf2_t vs2, size_t vl);
vuint8m1_t __riscv_vctz_v_u8m1_m (vbool8_t mask, vuint8m1_t vs2, size_t vl);
vuint8m2_t __riscv_vctz_v_u8m2_m (vbool4_t mask, vuint8m2_t vs2, size_t vl);
vuint8m4_t __riscv_vctz_v_u8m4_m (vbool2_t mask, vuint8m4_t vs2, size_t vl);
vuint8m8_t __riscv_vctz_v_u8m8_m (vbool1_t mask, vuint8m8_t vs2, size_t vl);
vuint16mf4_t __riscv_vctz_v_u16mf4_m (vbool64_t mask, vuint16mf4_t vs2, size_t vl);
vuint16mf2_t __riscv_vctz_v_u16mf2_m (vbool32_t mask, vuint16mf2_t vs2, size_t vl);
vuint16m1_t __riscv_vctz_v_u16m1_m (vbool16_t mask, vuint16m1_t vs2, size_t vl);
vuint16m2_t __riscv_vctz_v_u16m2_m (vbool8_t mask, vuint16m2_t vs2, size_t vl);
vuint16m4_t __riscv_vctz_v_u16m4_m (vbool4_t mask, vuint16m4_t vs2, size_t vl);
vuint16m8_t __riscv_vctz_v_u16m8_m (vbool2_t mask, vuint16m8_t vs2, size_t vl);
vuint32mf2_t __riscv_vctz_v_u32mf2_m (vbool64_t mask, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vctz_v_u32m1_m (vbool32_t mask, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vctz_v_u32m2_m (vbool16_t mask, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vctz_v_u32m4_m (vbool8_t mask, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vctz_v_u32m8_m (vbool4_t mask, vuint32m8_t vs2, size_t vl);
vuint64m1_t __riscv_vctz_v_u64m1_m (vbool64_t mask, vuint64m1_t vs2, size_t vl);
vuint64m2_t __riscv_vctz_v_u64m2_m (vbool32_t mask, vuint64m2_t vs2, size_t vl);
vuint64m4_t __riscv_vctz_v_u64m4_m (vbool16_t mask, vuint64m4_t vs2, size_t vl);
vuint64m8_t __riscv_vctz_v_u64m8_m (vbool8_t mask, vuint64m8_t vs2, size_t vl);
```

### [Vector Bit-manipulation used in Cryptography - Rotate]():

**Prototypes:**
``` C
vuint8mf8_t __riscv_vrol_vv_u8mf8 (vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl);
vuint8mf8_t __riscv_vrol_vx_u8mf8 (vuint8mf8_t vs2, size_t rs1, size_t vl);
vuint8mf4_t __riscv_vrol_vv_u8mf4 (vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl);
vuint8mf4_t __riscv_vrol_vx_u8mf4 (vuint8mf4_t vs2, size_t rs1, size_t vl);
vuint8mf2_t __riscv_vrol_vv_u8mf2 (vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl);
vuint8mf2_t __riscv_vrol_vx_u8mf2 (vuint8mf2_t vs2, size_t rs1, size_t vl);
vuint8m1_t __riscv_vrol_vv_u8m1 (vuint8m1_t vs2, vuint8m1_t vs1, size_t vl);
vuint8m1_t __riscv_vrol_vx_u8m1 (vuint8m1_t vs2, size_t rs1, size_t vl);
vuint8m2_t __riscv_vrol_vv_u8m2 (vuint8m2_t vs2, vuint8m2_t vs1, size_t vl);
vuint8m2_t __riscv_vrol_vx_u8m2 (vuint8m2_t vs2, size_t rs1, size_t vl);
vuint8m4_t __riscv_vrol_vv_u8m4 (vuint8m4_t vs2, vuint8m4_t vs1, size_t vl);
vuint8m4_t __riscv_vrol_vx_u8m4 (vuint8m4_t vs2, size_t rs1, size_t vl);
vuint8m8_t __riscv_vrol_vv_u8m8 (vuint8m8_t vs2, vuint8m8_t vs1, size_t vl);
vuint8m8_t __riscv_vrol_vx_u8m8 (vuint8m8_t vs2, size_t rs1, size_t vl);
vuint16mf4_t __riscv_vrol_vv_u16mf4 (vuint16mf4_t vs2, vuint16mf4_t vs1, size_t vl);
vuint16mf4_t __riscv_vrol_vx_u16mf4 (vuint16mf4_t vs2, size_t rs1, size_t vl);
vuint16mf2_t __riscv_vrol_vv_u16mf2 (vuint16mf2_t vs2, vuint16mf2_t vs1, size_t vl);
vuint16mf2_t __riscv_vrol_vx_u16mf2 (vuint16mf2_t vs2, size_t rs1, size_t vl);
vuint16m1_t __riscv_vrol_vv_u16m1 (vuint16m1_t vs2, vuint16m1_t vs1, size_t vl);
vuint16m1_t __riscv_vrol_vx_u16m1 (vuint16m1_t vs2, size_t rs1, size_t vl);
vuint16m2_t __riscv_vrol_vv_u16m2 (vuint16m2_t vs2, vuint16m2_t vs1, size_t vl);
vuint16m2_t __riscv_vrol_vx_u16m2 (vuint16m2_t vs2, size_t rs1, size_t vl);
vuint16m4_t __riscv_vrol_vv_u16m4 (vuint16m4_t vs2, vuint16m4_t vs1, size_t vl);
vuint16m4_t __riscv_vrol_vx_u16m4 (vuint16m4_t vs2, size_t rs1, size_t vl);
vuint16m8_t __riscv_vrol_vv_u16m8 (vuint16m8_t vs2, vuint16m8_t vs1, size_t vl);
vuint16m8_t __riscv_vrol_vx_u16m8 (vuint16m8_t vs2, size_t rs1, size_t vl);
vuint32mf2_t __riscv_vrol_vv_u32mf2 (vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl);
vuint32mf2_t __riscv_vrol_vx_u32mf2 (vuint32mf2_t vs2, size_t rs1, size_t vl);
vuint32m1_t __riscv_vrol_vv_u32m1 (vuint32m1_t vs2, vuint32m1_t vs1, size_t vl);
vuint32m1_t __riscv_vrol_vx_u32m1 (vuint32m1_t vs2, size_t rs1, size_t vl);
vuint32m2_t __riscv_vrol_vv_u32m2 (vuint32m2_t vs2, vuint32m2_t vs1, size_t vl);
vuint32m2_t __riscv_vrol_vx_u32m2 (vuint32m2_t vs2, size_t rs1, size_t vl);
vuint32m4_t __riscv_vrol_vv_u32m4 (vuint32m4_t vs2, vuint32m4_t vs1, size_t vl);
vuint32m4_t __riscv_vrol_vx_u32m4 (vuint32m4_t vs2, size_t rs1, size_t vl);
vuint32m8_t __riscv_vrol_vv_u32m8 (vuint32m8_t vs2, vuint32m8_t vs1, size_t vl);
vuint32m8_t __riscv_vrol_vx_u32m8 (vuint32m8_t vs2, size_t rs1, size_t vl);
vuint64m1_t __riscv_vrol_vv_u64m1 (vuint64m1_t vs2, vuint64m1_t vs1, size_t vl);
vuint64m1_t __riscv_vrol_vx_u64m1 (vuint64m1_t vs2, size_t rs1, size_t vl);
vuint64m2_t __riscv_vrol_vv_u64m2 (vuint64m2_t vs2, vuint64m2_t vs1, size_t vl);
vuint64m2_t __riscv_vrol_vx_u64m2 (vuint64m2_t vs2, size_t rs1, size_t vl);
vuint64m4_t __riscv_vrol_vv_u64m4 (vuint64m4_t vs2, vuint64m4_t vs1, size_t vl);
vuint64m4_t __riscv_vrol_vx_u64m4 (vuint64m4_t vs2, size_t rs1, size_t vl);
vuint64m8_t __riscv_vrol_vv_u64m8 (vuint64m8_t vs2, vuint64m8_t vs1, size_t vl);
vuint64m8_t __riscv_vrol_vx_u64m8 (vuint64m8_t vs2, size_t rs1, size_t vl);
vuint8mf8_t __riscv_vror_vv_u8mf8 (vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl);
vuint8mf8_t __riscv_vror_vx_u8mf8 (vuint8mf8_t vs2, size_t rs1, size_t vl);
vuint8mf4_t __riscv_vror_vv_u8mf4 (vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl);
vuint8mf4_t __riscv_vror_vx_u8mf4 (vuint8mf4_t vs2, size_t rs1, size_t vl);
vuint8mf2_t __riscv_vror_vv_u8mf2 (vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl);
vuint8mf2_t __riscv_vror_vx_u8mf2 (vuint8mf2_t vs2, size_t rs1, size_t vl);
vuint8m1_t __riscv_vror_vv_u8m1 (vuint8m1_t vs2, vuint8m1_t vs1, size_t vl);
vuint8m1_t __riscv_vror_vx_u8m1 (vuint8m1_t vs2, size_t rs1, size_t vl);
vuint8m2_t __riscv_vror_vv_u8m2 (vuint8m2_t vs2, vuint8m2_t vs1, size_t vl);
vuint8m2_t __riscv_vror_vx_u8m2 (vuint8m2_t vs2, size_t rs1, size_t vl);
vuint8m4_t __riscv_vror_vv_u8m4 (vuint8m4_t vs2, vuint8m4_t vs1, size_t vl);
vuint8m4_t __riscv_vror_vx_u8m4 (vuint8m4_t vs2, size_t rs1, size_t vl);
vuint8m8_t __riscv_vror_vv_u8m8 (vuint8m8_t vs2, vuint8m8_t vs1, size_t vl);
vuint8m8_t __riscv_vror_vx_u8m8 (vuint8m8_t vs2, size_t rs1, size_t vl);
vuint16mf4_t __riscv_vror_vv_u16mf4 (vuint16mf4_t vs2, vuint16mf4_t vs1, size_t vl);
vuint16mf4_t __riscv_vror_vx_u16mf4 (vuint16mf4_t vs2, size_t rs1, size_t vl);
vuint16mf2_t __riscv_vror_vv_u16mf2 (vuint16mf2_t vs2, vuint16mf2_t vs1, size_t vl);
vuint16mf2_t __riscv_vror_vx_u16mf2 (vuint16mf2_t vs2, size_t rs1, size_t vl);
vuint16m1_t __riscv_vror_vv_u16m1 (vuint16m1_t vs2, vuint16m1_t vs1, size_t vl);
vuint16m1_t __riscv_vror_vx_u16m1 (vuint16m1_t vs2, size_t rs1, size_t vl);
vuint16m2_t __riscv_vror_vv_u16m2 (vuint16m2_t vs2, vuint16m2_t vs1, size_t vl);
vuint16m2_t __riscv_vror_vx_u16m2 (vuint16m2_t vs2, size_t rs1, size_t vl);
vuint16m4_t __riscv_vror_vv_u16m4 (vuint16m4_t vs2, vuint16m4_t vs1, size_t vl);
vuint16m4_t __riscv_vror_vx_u16m4 (vuint16m4_t vs2, size_t rs1, size_t vl);
vuint16m8_t __riscv_vror_vv_u16m8 (vuint16m8_t vs2, vuint16m8_t vs1, size_t vl);
vuint16m8_t __riscv_vror_vx_u16m8 (vuint16m8_t vs2, size_t rs1, size_t vl);
vuint32mf2_t __riscv_vror_vv_u32mf2 (vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl);
vuint32mf2_t __riscv_vror_vx_u32mf2 (vuint32mf2_t vs2, size_t rs1, size_t vl);
vuint32m1_t __riscv_vror_vv_u32m1 (vuint32m1_t vs2, vuint32m1_t vs1, size_t vl);
vuint32m1_t __riscv_vror_vx_u32m1 (vuint32m1_t vs2, size_t rs1, size_t vl);
vuint32m2_t __riscv_vror_vv_u32m2 (vuint32m2_t vs2, vuint32m2_t vs1, size_t vl);
vuint32m2_t __riscv_vror_vx_u32m2 (vuint32m2_t vs2, size_t rs1, size_t vl);
vuint32m4_t __riscv_vror_vv_u32m4 (vuint32m4_t vs2, vuint32m4_t vs1, size_t vl);
vuint32m4_t __riscv_vror_vx_u32m4 (vuint32m4_t vs2, size_t rs1, size_t vl);
vuint32m8_t __riscv_vror_vv_u32m8 (vuint32m8_t vs2, vuint32m8_t vs1, size_t vl);
vuint32m8_t __riscv_vror_vx_u32m8 (vuint32m8_t vs2, size_t rs1, size_t vl);
vuint64m1_t __riscv_vror_vv_u64m1 (vuint64m1_t vs2, vuint64m1_t vs1, size_t vl);
vuint64m1_t __riscv_vror_vx_u64m1 (vuint64m1_t vs2, size_t rs1, size_t vl);
vuint64m2_t __riscv_vror_vv_u64m2 (vuint64m2_t vs2, vuint64m2_t vs1, size_t vl);
vuint64m2_t __riscv_vror_vx_u64m2 (vuint64m2_t vs2, size_t rs1, size_t vl);
vuint64m4_t __riscv_vror_vv_u64m4 (vuint64m4_t vs2, vuint64m4_t vs1, size_t vl);
vuint64m4_t __riscv_vror_vx_u64m4 (vuint64m4_t vs2, size_t rs1, size_t vl);
vuint64m8_t __riscv_vror_vv_u64m8 (vuint64m8_t vs2, vuint64m8_t vs1, size_t vl);
vuint64m8_t __riscv_vror_vx_u64m8 (vuint64m8_t vs2, size_t rs1, size_t vl);
// masked functions
vuint8mf8_t __riscv_vrol_vv_u8mf8_m (vbool64_t mask, vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl);
vuint8mf8_t __riscv_vrol_vx_u8mf8_m (vbool64_t mask, vuint8mf8_t vs2, size_t rs1, size_t vl);
vuint8mf4_t __riscv_vrol_vv_u8mf4_m (vbool32_t mask, vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl);
vuint8mf4_t __riscv_vrol_vx_u8mf4_m (vbool32_t mask, vuint8mf4_t vs2, size_t rs1, size_t vl);
vuint8mf2_t __riscv_vrol_vv_u8mf2_m (vbool16_t mask, vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl);
vuint8mf2_t __riscv_vrol_vx_u8mf2_m (vbool16_t mask, vuint8mf2_t vs2, size_t rs1, size_t vl);
vuint8m1_t __riscv_vrol_vv_u8m1_m (vbool8_t mask, vuint8m1_t vs2, vuint8m1_t vs1, size_t vl);
vuint8m1_t __riscv_vrol_vx_u8m1_m (vbool8_t mask, vuint8m1_t vs2, size_t rs1, size_t vl);
vuint8m2_t __riscv_vrol_vv_u8m2_m (vbool4_t mask, vuint8m2_t vs2, vuint8m2_t vs1, size_t vl);
vuint8m2_t __riscv_vrol_vx_u8m2_m (vbool4_t mask, vuint8m2_t vs2, size_t rs1, size_t vl);
vuint8m4_t __riscv_vrol_vv_u8m4_m (vbool2_t mask, vuint8m4_t vs2, vuint8m4_t vs1, size_t vl);
vuint8m4_t __riscv_vrol_vx_u8m4_m (vbool2_t mask, vuint8m4_t vs2, size_t rs1, size_t vl);
vuint8m8_t __riscv_vrol_vv_u8m8_m (vbool1_t mask, vuint8m8_t vs2, vuint8m8_t vs1, size_t vl);
vuint8m8_t __riscv_vrol_vx_u8m8_m (vbool1_t mask, vuint8m8_t vs2, size_t rs1, size_t vl);
vuint16mf4_t __riscv_vrol_vv_u16mf4_m (vbool64_t mask, vuint16mf4_t vs2, vuint16mf4_t vs1, size_t vl);
vuint16mf4_t __riscv_vrol_vx_u16mf4_m (vbool64_t mask, vuint16mf4_t vs2, size_t rs1, size_t vl);
vuint16mf2_t __riscv_vrol_vv_u16mf2_m (vbool32_t mask, vuint16mf2_t vs2, vuint16mf2_t vs1, size_t vl);
vuint16mf2_t __riscv_vrol_vx_u16mf2_m (vbool32_t mask, vuint16mf2_t vs2, size_t rs1, size_t vl);
vuint16m1_t __riscv_vrol_vv_u16m1_m (vbool16_t mask, vuint16m1_t vs2, vuint16m1_t vs1, size_t vl);
vuint16m1_t __riscv_vrol_vx_u16m1_m (vbool16_t mask, vuint16m1_t vs2, size_t rs1, size_t vl);
vuint16m2_t __riscv_vrol_vv_u16m2_m (vbool8_t mask, vuint16m2_t vs2, vuint16m2_t vs1, size_t vl);
vuint16m2_t __riscv_vrol_vx_u16m2_m (vbool8_t mask, vuint16m2_t vs2, size_t rs1, size_t vl);
vuint16m4_t __riscv_vrol_vv_u16m4_m (vbool4_t mask, vuint16m4_t vs2, vuint16m4_t vs1, size_t vl);
vuint16m4_t __riscv_vrol_vx_u16m4_m (vbool4_t mask, vuint16m4_t vs2, size_t rs1, size_t vl);
vuint16m8_t __riscv_vrol_vv_u16m8_m (vbool2_t mask, vuint16m8_t vs2, vuint16m8_t vs1, size_t vl);
vuint16m8_t __riscv_vrol_vx_u16m8_m (vbool2_t mask, vuint16m8_t vs2, size_t rs1, size_t vl);
vuint32mf2_t __riscv_vrol_vv_u32mf2_m (vbool64_t mask, vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl);
vuint32mf2_t __riscv_vrol_vx_u32mf2_m (vbool64_t mask, vuint32mf2_t vs2, size_t rs1, size_t vl);
vuint32m1_t __riscv_vrol_vv_u32m1_m (vbool32_t mask, vuint32m1_t vs2, vuint32m1_t vs1, size_t vl);
vuint32m1_t __riscv_vrol_vx_u32m1_m (vbool32_t mask, vuint32m1_t vs2, size_t rs1, size_t vl);
vuint32m2_t __riscv_vrol_vv_u32m2_m (vbool16_t mask, vuint32m2_t vs2, vuint32m2_t vs1, size_t vl);
vuint32m2_t __riscv_vrol_vx_u32m2_m (vbool16_t mask, vuint32m2_t vs2, size_t rs1, size_t vl);
vuint32m4_t __riscv_vrol_vv_u32m4_m (vbool8_t mask, vuint32m4_t vs2, vuint32m4_t vs1, size_t vl);
vuint32m4_t __riscv_vrol_vx_u32m4_m (vbool8_t mask, vuint32m4_t vs2, size_t rs1, size_t vl);
vuint32m8_t __riscv_vrol_vv_u32m8_m (vbool4_t mask, vuint32m8_t vs2, vuint32m8_t vs1, size_t vl);
vuint32m8_t __riscv_vrol_vx_u32m8_m (vbool4_t mask, vuint32m8_t vs2, size_t rs1, size_t vl);
vuint64m1_t __riscv_vrol_vv_u64m1_m (vbool64_t mask, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl);
vuint64m1_t __riscv_vrol_vx_u64m1_m (vbool64_t mask, vuint64m1_t vs2, size_t rs1, size_t vl);
vuint64m2_t __riscv_vrol_vv_u64m2_m (vbool32_t mask, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl);
vuint64m2_t __riscv_vrol_vx_u64m2_m (vbool32_t mask, vuint64m2_t vs2, size_t rs1, size_t vl);
vuint64m4_t __riscv_vrol_vv_u64m4_m (vbool16_t mask, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl);
vuint64m4_t __riscv_vrol_vx_u64m4_m (vbool16_t mask, vuint64m4_t vs2, size_t rs1, size_t vl);
vuint64m8_t __riscv_vrol_vv_u64m8_m (vbool8_t mask, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl);
vuint64m8_t __riscv_vrol_vx_u64m8_m (vbool8_t mask, vuint64m8_t vs2, size_t rs1, size_t vl);
vuint8mf8_t __riscv_vror_vv_u8mf8_m (vbool64_t mask, vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl);
vuint8mf8_t __riscv_vror_vx_u8mf8_m (vbool64_t mask, vuint8mf8_t vs2, size_t rs1, size_t vl);
vuint8mf4_t __riscv_vror_vv_u8mf4_m (vbool32_t mask, vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl);
vuint8mf4_t __riscv_vror_vx_u8mf4_m (vbool32_t mask, vuint8mf4_t vs2, size_t rs1, size_t vl);
vuint8mf2_t __riscv_vror_vv_u8mf2_m (vbool16_t mask, vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl);
vuint8mf2_t __riscv_vror_vx_u8mf2_m (vbool16_t mask, vuint8mf2_t vs2, size_t rs1, size_t vl);
vuint8m1_t __riscv_vror_vv_u8m1_m (vbool8_t mask, vuint8m1_t vs2, vuint8m1_t vs1, size_t vl);
vuint8m1_t __riscv_vror_vx_u8m1_m (vbool8_t mask, vuint8m1_t vs2, size_t rs1, size_t vl);
vuint8m2_t __riscv_vror_vv_u8m2_m (vbool4_t mask, vuint8m2_t vs2, vuint8m2_t vs1, size_t vl);
vuint8m2_t __riscv_vror_vx_u8m2_m (vbool4_t mask, vuint8m2_t vs2, size_t rs1, size_t vl);
vuint8m4_t __riscv_vror_vv_u8m4_m (vbool2_t mask, vuint8m4_t vs2, vuint8m4_t vs1, size_t vl);
vuint8m4_t __riscv_vror_vx_u8m4_m (vbool2_t mask, vuint8m4_t vs2, size_t rs1, size_t vl);
vuint8m8_t __riscv_vror_vv_u8m8_m (vbool1_t mask, vuint8m8_t vs2, vuint8m8_t vs1, size_t vl);
vuint8m8_t __riscv_vror_vx_u8m8_m (vbool1_t mask, vuint8m8_t vs2, size_t rs1, size_t vl);
vuint16mf4_t __riscv_vror_vv_u16mf4_m (vbool64_t mask, vuint16mf4_t vs2, vuint16mf4_t vs1, size_t vl);
vuint16mf4_t __riscv_vror_vx_u16mf4_m (vbool64_t mask, vuint16mf4_t vs2, size_t rs1, size_t vl);
vuint16mf2_t __riscv_vror_vv_u16mf2_m (vbool32_t mask, vuint16mf2_t vs2, vuint16mf2_t vs1, size_t vl);
vuint16mf2_t __riscv_vror_vx_u16mf2_m (vbool32_t mask, vuint16mf2_t vs2, size_t rs1, size_t vl);
vuint16m1_t __riscv_vror_vv_u16m1_m (vbool16_t mask, vuint16m1_t vs2, vuint16m1_t vs1, size_t vl);
vuint16m1_t __riscv_vror_vx_u16m1_m (vbool16_t mask, vuint16m1_t vs2, size_t rs1, size_t vl);
vuint16m2_t __riscv_vror_vv_u16m2_m (vbool8_t mask, vuint16m2_t vs2, vuint16m2_t vs1, size_t vl);
vuint16m2_t __riscv_vror_vx_u16m2_m (vbool8_t mask, vuint16m2_t vs2, size_t rs1, size_t vl);
vuint16m4_t __riscv_vror_vv_u16m4_m (vbool4_t mask, vuint16m4_t vs2, vuint16m4_t vs1, size_t vl);
vuint16m4_t __riscv_vror_vx_u16m4_m (vbool4_t mask, vuint16m4_t vs2, size_t rs1, size_t vl);
vuint16m8_t __riscv_vror_vv_u16m8_m (vbool2_t mask, vuint16m8_t vs2, vuint16m8_t vs1, size_t vl);
vuint16m8_t __riscv_vror_vx_u16m8_m (vbool2_t mask, vuint16m8_t vs2, size_t rs1, size_t vl);
vuint32mf2_t __riscv_vror_vv_u32mf2_m (vbool64_t mask, vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl);
vuint32mf2_t __riscv_vror_vx_u32mf2_m (vbool64_t mask, vuint32mf2_t vs2, size_t rs1, size_t vl);
vuint32m1_t __riscv_vror_vv_u32m1_m (vbool32_t mask, vuint32m1_t vs2, vuint32m1_t vs1, size_t vl);
vuint32m1_t __riscv_vror_vx_u32m1_m (vbool32_t mask, vuint32m1_t vs2, size_t rs1, size_t vl);
vuint32m2_t __riscv_vror_vv_u32m2_m (vbool16_t mask, vuint32m2_t vs2, vuint32m2_t vs1, size_t vl);
vuint32m2_t __riscv_vror_vx_u32m2_m (vbool16_t mask, vuint32m2_t vs2, size_t rs1, size_t vl);
vuint32m4_t __riscv_vror_vv_u32m4_m (vbool8_t mask, vuint32m4_t vs2, vuint32m4_t vs1, size_t vl);
vuint32m4_t __riscv_vror_vx_u32m4_m (vbool8_t mask, vuint32m4_t vs2, size_t rs1, size_t vl);
vuint32m8_t __riscv_vror_vv_u32m8_m (vbool4_t mask, vuint32m8_t vs2, vuint32m8_t vs1, size_t vl);
vuint32m8_t __riscv_vror_vx_u32m8_m (vbool4_t mask, vuint32m8_t vs2, size_t rs1, size_t vl);
vuint64m1_t __riscv_vror_vv_u64m1_m (vbool64_t mask, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl);
vuint64m1_t __riscv_vror_vx_u64m1_m (vbool64_t mask, vuint64m1_t vs2, size_t rs1, size_t vl);
vuint64m2_t __riscv_vror_vv_u64m2_m (vbool32_t mask, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl);
vuint64m2_t __riscv_vror_vx_u64m2_m (vbool32_t mask, vuint64m2_t vs2, size_t rs1, size_t vl);
vuint64m4_t __riscv_vror_vv_u64m4_m (vbool16_t mask, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl);
vuint64m4_t __riscv_vror_vx_u64m4_m (vbool16_t mask, vuint64m4_t vs2, size_t rs1, size_t vl);
vuint64m8_t __riscv_vror_vv_u64m8_m (vbool8_t mask, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl);
vuint64m8_t __riscv_vror_vx_u64m8_m (vbool8_t mask, vuint64m8_t vs2, size_t rs1, size_t vl);
```

### [Vector Bit-manipulation used in Cryptography - Shift]():

**Prototypes:**
``` C
vuint16mf4_t __riscv_vwsll_vv_u16mf4 (vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl);
vuint16mf4_t __riscv_vwsll_vx_u16mf4 (vuint16mf4_t vs2, size_t rs1, size_t vl);
vuint16mf2_t __riscv_vwsll_vv_u16mf2 (vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl);
vuint16mf2_t __riscv_vwsll_vx_u16mf2 (vuint16mf2_t vs2, size_t rs1, size_t vl);
vuint16m1_t __riscv_vwsll_vv_u16m1 (vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl);
vuint16m1_t __riscv_vwsll_vx_u16m1 (vuint16m1_t vs2, size_t rs1, size_t vl);
vuint16m2_t __riscv_vwsll_vv_u16m2 (vuint8m1_t vs2, vuint8m1_t vs1, size_t vl);
vuint16m2_t __riscv_vwsll_vx_u16m2 (vuint16m2_t vs2, size_t rs1, size_t vl);
vuint16m4_t __riscv_vwsll_vv_u16m4 (vuint8m2_t vs2, vuint8m2_t vs1, size_t vl);
vuint16m4_t __riscv_vwsll_vx_u16m4 (vuint16m4_t vs2, size_t rs1, size_t vl);
vuint16m8_t __riscv_vwsll_vv_u16m8 (vuint8m4_t vs2, vuint8m4_t vs1, size_t vl);
vuint16m8_t __riscv_vwsll_vx_u16m8 (vuint16m8_t vs2, size_t rs1, size_t vl);
vuint32mf2_t __riscv_vwsll_vv_u32mf2 (vuint16mf4_t vs2, vuint16mf4_t vs1, size_t vl);
vuint32mf2_t __riscv_vwsll_vx_u32mf2 (vuint32mf2_t vs2, size_t rs1, size_t vl);
vuint32m1_t __riscv_vwsll_vv_u32m1 (vuint16mf2_t vs2, vuint16mf2_t vs1, size_t vl);
vuint32m1_t __riscv_vwsll_vx_u32m1 (vuint32m1_t vs2, size_t rs1, size_t vl);
vuint32m2_t __riscv_vwsll_vv_u32m2 (vuint16m1_t vs2, vuint16m1_t vs1, size_t vl);
vuint32m2_t __riscv_vwsll_vx_u32m2 (vuint32m2_t vs2, size_t rs1, size_t vl);
vuint32m4_t __riscv_vwsll_vv_u32m4 (vuint16m2_t vs2, vuint16m2_t vs1, size_t vl);
vuint32m4_t __riscv_vwsll_vx_u32m4 (vuint32m4_t vs2, size_t rs1, size_t vl);
vuint32m8_t __riscv_vwsll_vv_u32m8 (vuint16m4_t vs2, vuint16m4_t vs1, size_t vl);
vuint32m8_t __riscv_vwsll_vx_u32m8 (vuint32m8_t vs2, size_t rs1, size_t vl);
vuint64m1_t __riscv_vwsll_vv_u64m1 (vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl);
vuint64m1_t __riscv_vwsll_vx_u64m1 (vuint64m1_t vs2, size_t rs1, size_t vl);
vuint64m2_t __riscv_vwsll_vv_u64m2 (vuint32m1_t vs2, vuint32m1_t vs1, size_t vl);
vuint64m2_t __riscv_vwsll_vx_u64m2 (vuint64m2_t vs2, size_t rs1, size_t vl);
vuint64m4_t __riscv_vwsll_vv_u64m4 (vuint32m2_t vs2, vuint32m2_t vs1, size_t vl);
vuint64m4_t __riscv_vwsll_vx_u64m4 (vuint64m4_t vs2, size_t rs1, size_t vl);
vuint64m8_t __riscv_vwsll_vv_u64m8 (vuint32m4_t vs2, vuint32m4_t vs1, size_t vl);
vuint64m8_t __riscv_vwsll_vx_u64m8 (vuint64m8_t vs2, size_t rs1, size_t vl);
// masked functions
vuint16mf4_t __riscv_vwsll_vv_u16mf4_m (vbool64_t mask, vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl);
vuint16mf4_t __riscv_vwsll_vx_u16mf4_m (vbool64_t mask, vuint16mf4_t vs2, size_t rs1, size_t vl);
vuint16mf2_t __riscv_vwsll_vv_u16mf2_m (vbool32_t mask, vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl);
vuint16mf2_t __riscv_vwsll_vx_u16mf2_m (vbool32_t mask, vuint16mf2_t vs2, size_t rs1, size_t vl);
vuint16m1_t __riscv_vwsll_vv_u16m1_m (vbool16_t mask, vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl);
vuint16m1_t __riscv_vwsll_vx_u16m1_m (vbool16_t mask, vuint16m1_t vs2, size_t rs1, size_t vl);
vuint16m2_t __riscv_vwsll_vv_u16m2_m (vbool8_t mask, vuint8m1_t vs2, vuint8m1_t vs1, size_t vl);
vuint16m2_t __riscv_vwsll_vx_u16m2_m (vbool8_t mask, vuint16m2_t vs2, size_t rs1, size_t vl);
vuint16m4_t __riscv_vwsll_vv_u16m4_m (vbool4_t mask, vuint8m2_t vs2, vuint8m2_t vs1, size_t vl);
vuint16m4_t __riscv_vwsll_vx_u16m4_m (vbool4_t mask, vuint16m4_t vs2, size_t rs1, size_t vl);
vuint16m8_t __riscv_vwsll_vv_u16m8_m (vbool2_t mask, vuint8m4_t vs2, vuint8m4_t vs1, size_t vl);
vuint16m8_t __riscv_vwsll_vx_u16m8_m (vbool2_t mask, vuint16m8_t vs2, size_t rs1, size_t vl);
vuint32mf2_t __riscv_vwsll_vv_u32mf2_m (vbool64_t mask, vuint16mf4_t vs2, vuint16mf4_t vs1, size_t vl);
vuint32mf2_t __riscv_vwsll_vx_u32mf2_m (vbool64_t mask, vuint32mf2_t vs2, size_t rs1, size_t vl);
vuint32m1_t __riscv_vwsll_vv_u32m1_m (vbool32_t mask, vuint16mf2_t vs2, vuint16mf2_t vs1, size_t vl);
vuint32m1_t __riscv_vwsll_vx_u32m1_m (vbool32_t mask, vuint32m1_t vs2, size_t rs1, size_t vl);
vuint32m2_t __riscv_vwsll_vv_u32m2_m (vbool16_t mask, vuint16m1_t vs2, vuint16m1_t vs1, size_t vl);
vuint32m2_t __riscv_vwsll_vx_u32m2_m (vbool16_t mask, vuint32m2_t vs2, size_t rs1, size_t vl);
vuint32m4_t __riscv_vwsll_vv_u32m4_m (vbool8_t mask, vuint16m2_t vs2, vuint16m2_t vs1, size_t vl);
vuint32m4_t __riscv_vwsll_vx_u32m4_m (vbool8_t mask, vuint32m4_t vs2, size_t rs1, size_t vl);
vuint32m8_t __riscv_vwsll_vv_u32m8_m (vbool4_t mask, vuint16m4_t vs2, vuint16m4_t vs1, size_t vl);
vuint32m8_t __riscv_vwsll_vx_u32m8_m (vbool4_t mask, vuint32m8_t vs2, size_t rs1, size_t vl);
vuint64m1_t __riscv_vwsll_vv_u64m1_m (vbool64_t mask, vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl);
vuint64m1_t __riscv_vwsll_vx_u64m1_m (vbool64_t mask, vuint64m1_t vs2, size_t rs1, size_t vl);
vuint64m2_t __riscv_vwsll_vv_u64m2_m (vbool32_t mask, vuint32m1_t vs2, vuint32m1_t vs1, size_t vl);
vuint64m2_t __riscv_vwsll_vx_u64m2_m (vbool32_t mask, vuint64m2_t vs2, size_t rs1, size_t vl);
vuint64m4_t __riscv_vwsll_vv_u64m4_m (vbool16_t mask, vuint32m2_t vs2, vuint32m2_t vs1, size_t vl);
vuint64m4_t __riscv_vwsll_vx_u64m4_m (vbool16_t mask, vuint64m4_t vs2, size_t rs1, size_t vl);
vuint64m8_t __riscv_vwsll_vv_u64m8_m (vbool8_t mask, vuint32m4_t vs2, vuint32m4_t vs1, size_t vl);
vuint64m8_t __riscv_vwsll_vx_u64m8_m (vbool8_t mask, vuint64m8_t vs2, size_t rs1, size_t vl);
```

## Zvbc - Vector Carryless Multiplication:

### [Vector Carryless Multiplication]():

**Prototypes:**
``` C
vuint64m1_t __riscv_vclmul_vv_u64m1 (vuint64m1_t vs2, vuint64m1_t vs1, size_t vl);
vuint64m1_t __riscv_vclmul_vx_u64m1 (vuint64m1_t vs2, uint64_t rs1, size_t vl);
vuint64m2_t __riscv_vclmul_vv_u64m2 (vuint64m2_t vs2, vuint64m2_t vs1, size_t vl);
vuint64m2_t __riscv_vclmul_vx_u64m2 (vuint64m2_t vs2, uint64_t rs1, size_t vl);
vuint64m4_t __riscv_vclmul_vv_u64m4 (vuint64m4_t vs2, vuint64m4_t vs1, size_t vl);
vuint64m4_t __riscv_vclmul_vx_u64m4 (vuint64m4_t vs2, uint64_t rs1, size_t vl);
vuint64m8_t __riscv_vclmul_vv_u64m8 (vuint64m8_t vs2, vuint64m8_t vs1, size_t vl);
vuint64m8_t __riscv_vclmul_vx_u64m8 (vuint64m8_t vs2, uint64_t rs1, size_t vl);
vuint64m1_t __riscv_vclmulh_vv_u64m1 (vuint64m1_t vs2, vuint64m1_t vs1, size_t vl);
vuint64m1_t __riscv_vclmulh_vx_u64m1 (vuint64m1_t vs2, uint64_t rs1, size_t vl);
vuint64m2_t __riscv_vclmulh_vv_u64m2 (vuint64m2_t vs2, vuint64m2_t vs1, size_t vl);
vuint64m2_t __riscv_vclmulh_vx_u64m2 (vuint64m2_t vs2, uint64_t rs1, size_t vl);
vuint64m4_t __riscv_vclmulh_vv_u64m4 (vuint64m4_t vs2, vuint64m4_t vs1, size_t vl);
vuint64m4_t __riscv_vclmulh_vx_u64m4 (vuint64m4_t vs2, uint64_t rs1, size_t vl);
vuint64m8_t __riscv_vclmulh_vv_u64m8 (vuint64m8_t vs2, vuint64m8_t vs1, size_t vl);
vuint64m8_t __riscv_vclmulh_vx_u64m8 (vuint64m8_t vs2, uint64_t rs1, size_t vl);
// masked functions
vuint64m1_t __riscv_vclmul_vv_u64m1_m (vbool64_t mask, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl);
vuint64m1_t __riscv_vclmul_vx_u64m1_m (vbool64_t mask, vuint64m1_t vs2, uint64_t rs1, size_t vl);
vuint64m2_t __riscv_vclmul_vv_u64m2_m (vbool32_t mask, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl);
vuint64m2_t __riscv_vclmul_vx_u64m2_m (vbool32_t mask, vuint64m2_t vs2, uint64_t rs1, size_t vl);
vuint64m4_t __riscv_vclmul_vv_u64m4_m (vbool16_t mask, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl);
vuint64m4_t __riscv_vclmul_vx_u64m4_m (vbool16_t mask, vuint64m4_t vs2, uint64_t rs1, size_t vl);
vuint64m8_t __riscv_vclmul_vv_u64m8_m (vbool8_t mask, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl);
vuint64m8_t __riscv_vclmul_vx_u64m8_m (vbool8_t mask, vuint64m8_t vs2, uint64_t rs1, size_t vl);
vuint64m1_t __riscv_vclmulh_vv_u64m1_m (vbool64_t mask, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl);
vuint64m1_t __riscv_vclmulh_vx_u64m1_m (vbool64_t mask, vuint64m1_t vs2, uint64_t rs1, size_t vl);
vuint64m2_t __riscv_vclmulh_vv_u64m2_m (vbool32_t mask, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl);
vuint64m2_t __riscv_vclmulh_vx_u64m2_m (vbool32_t mask, vuint64m2_t vs2, uint64_t rs1, size_t vl);
vuint64m4_t __riscv_vclmulh_vv_u64m4_m (vbool16_t mask, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl);
vuint64m4_t __riscv_vclmulh_vx_u64m4_m (vbool16_t mask, vuint64m4_t vs2, uint64_t rs1, size_t vl);
vuint64m8_t __riscv_vclmulh_vv_u64m8_m (vbool8_t mask, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl);
vuint64m8_t __riscv_vclmulh_vx_u64m8_m (vbool8_t mask, vuint64m8_t vs2, uint64_t rs1, size_t vl);
```

## Zvkg - Vector GCM/GMAC:

### [Vector GCM/GMAC]():

**Prototypes:**
``` C
vuint32mf2_t __riscv_vghsh_vv_u32mf2 (vuint32mf2_t vd, vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl);
vuint32m1_t __riscv_vghsh_vv_u32m1 (vuint32m1_t vd, vuint32m1_t vs2, vuint32m1_t vs1, size_t vl);
vuint32m2_t __riscv_vghsh_vv_u32m2 (vuint32m2_t vd, vuint32m2_t vs2, vuint32m2_t vs1, size_t vl);
vuint32m4_t __riscv_vghsh_vv_u32m4 (vuint32m4_t vd, vuint32m4_t vs2, vuint32m4_t vs1, size_t vl);
vuint32m8_t __riscv_vghsh_vv_u32m8 (vuint32m8_t vd, vuint32m8_t vs2, vuint32m8_t vs1, size_t vl);
vuint32mf2_t __riscv_vgmul_vv_u32mf2 (vuint32mf2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vgmul_vv_u32m1 (vuint32m1_t vd, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vgmul_vv_u32m2 (vuint32m2_t vd, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vgmul_vv_u32m4 (vuint32m4_t vd, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vgmul_vv_u32m8 (vuint32m8_t vd, vuint32m8_t vs2, size_t vl);
```

## Zvkned - NIST Suite: Vector AES Block Cipher:

### [Vector AES Encryption]():

**Prototypes:**
``` C
vuint32mf2_t __riscv_vaesef_vv_u32mf2 (vuint32mf2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32mf2_t __riscv_vaesef_vs_u32mf2 (vuint32mf2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vaesef_vv_u32m1 (vuint32m1_t vd, vuint32m1_t vs2, size_t vl);
vuint32m1_t __riscv_vaesef_vs_u32m1 (vuint32m1_t vd, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vaesef_vv_u32m2 (vuint32m2_t vd, vuint32m2_t vs2, size_t vl);
vuint32m2_t __riscv_vaesef_vs_u32m2 (vuint32m2_t vd, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vaesef_vv_u32m4 (vuint32m4_t vd, vuint32m4_t vs2, size_t vl);
vuint32m4_t __riscv_vaesef_vs_u32m4 (vuint32m4_t vd, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vaesef_vv_u32m8 (vuint32m8_t vd, vuint32m8_t vs2, size_t vl);
vuint32m8_t __riscv_vaesef_vs_u32m8 (vuint32m8_t vd, vuint32m8_t vs2, size_t vl);
vuint32mf2_t __riscv_vaesem_vv_u32mf2 (vuint32mf2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32mf2_t __riscv_vaesem_vs_u32mf2 (vuint32mf2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vaesem_vv_u32m1 (vuint32m1_t vd, vuint32m1_t vs2, size_t vl);
vuint32m1_t __riscv_vaesem_vs_u32m1 (vuint32m1_t vd, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vaesem_vv_u32m2 (vuint32m2_t vd, vuint32m2_t vs2, size_t vl);
vuint32m2_t __riscv_vaesem_vs_u32m2 (vuint32m2_t vd, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vaesem_vv_u32m4 (vuint32m4_t vd, vuint32m4_t vs2, size_t vl);
vuint32m4_t __riscv_vaesem_vs_u32m4 (vuint32m4_t vd, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vaesem_vv_u32m8 (vuint32m8_t vd, vuint32m8_t vs2, size_t vl);
vuint32m8_t __riscv_vaesem_vs_u32m8 (vuint32m8_t vd, vuint32m8_t vs2, size_t vl);
```

### [Vector AES Decryption]():

**Prototypes:**
``` C
vuint32mf2_t __riscv_vaesdf_vv_u32mf2 (vuint32mf2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32mf2_t __riscv_vaesdf_vs_u32mf2 (vuint32mf2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vaesdf_vv_u32m1 (vuint32m1_t vd, vuint32m1_t vs2, size_t vl);
vuint32m1_t __riscv_vaesdf_vs_u32m1 (vuint32m1_t vd, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vaesdf_vv_u32m2 (vuint32m2_t vd, vuint32m2_t vs2, size_t vl);
vuint32m2_t __riscv_vaesdf_vs_u32m2 (vuint32m2_t vd, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vaesdf_vv_u32m4 (vuint32m4_t vd, vuint32m4_t vs2, size_t vl);
vuint32m4_t __riscv_vaesdf_vs_u32m4 (vuint32m4_t vd, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vaesdf_vv_u32m8 (vuint32m8_t vd, vuint32m8_t vs2, size_t vl);
vuint32m8_t __riscv_vaesdf_vs_u32m8 (vuint32m8_t vd, vuint32m8_t vs2, size_t vl);
vuint32mf2_t __riscv_vaesdm_vv_u32mf2 (vuint32mf2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32mf2_t __riscv_vaesdm_vs_u32mf2 (vuint32mf2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vaesdm_vv_u32m1 (vuint32m1_t vd, vuint32m1_t vs2, size_t vl);
vuint32m1_t __riscv_vaesdm_vs_u32m1 (vuint32m1_t vd, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vaesdm_vv_u32m2 (vuint32m2_t vd, vuint32m2_t vs2, size_t vl);
vuint32m2_t __riscv_vaesdm_vs_u32m2 (vuint32m2_t vd, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vaesdm_vv_u32m4 (vuint32m4_t vd, vuint32m4_t vs2, size_t vl);
vuint32m4_t __riscv_vaesdm_vs_u32m4 (vuint32m4_t vd, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vaesdm_vv_u32m8 (vuint32m8_t vd, vuint32m8_t vs2, size_t vl);
vuint32m8_t __riscv_vaesdm_vs_u32m8 (vuint32m8_t vd, vuint32m8_t vs2, size_t vl);
```

### [Vector AES-128 Forward KeySchedule generation]():

**Prototypes:**
``` C
vuint32mf2_t __riscv_vaeskf1_vi_u32mf2 (vuint32mf2_t vs2, size_t uimm, size_t vl);
vuint32m1_t __riscv_vaeskf1_vi_u32m1 (vuint32m1_t vs2, size_t uimm, size_t vl);
vuint32m2_t __riscv_vaeskf1_vi_u32m2 (vuint32m2_t vs2, size_t uimm, size_t vl);
vuint32m4_t __riscv_vaeskf1_vi_u32m4 (vuint32m4_t vs2, size_t uimm, size_t vl);
vuint32m8_t __riscv_vaeskf1_vi_u32m8 (vuint32m8_t vs2, size_t uimm, size_t vl);
vuint32mf2_t __riscv_vaeskf2_vi_u32mf2 (vuint32mf2_t vs2, size_t uimm, size_t vl);
vuint32m1_t __riscv_vaeskf2_vi_u32m1 (vuint32m1_t vs2, size_t uimm, size_t vl);
vuint32m2_t __riscv_vaeskf2_vi_u32m2 (vuint32m2_t vs2, size_t uimm, size_t vl);
vuint32m4_t __riscv_vaeskf2_vi_u32m4 (vuint32m4_t vs2, size_t uimm, size_t vl);
vuint32m8_t __riscv_vaeskf2_vi_u32m8 (vuint32m8_t vs2, size_t uimm, size_t vl);
```

### [Vector AES round zero]():

**Prototypes:**
``` C
vuint32mf2_t __riscv_vaesz_vs_u32mf2 (vuint32mf2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vaesz_vs_u32m1 (vuint32m1_t vd, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vaesz_vs_u32m2 (vuint32m2_t vd, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vaesz_vs_u32m4 (vuint32m4_t vd, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vaesz_vs_u32m8 (vuint32m8_t vd, vuint32m8_t vs2, size_t vl);
```

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
