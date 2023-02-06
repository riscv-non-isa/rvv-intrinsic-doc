
## Vector Mask Functions:

### [Vector Mask Load/Store Functions](../rvv-intrinsic-api.md#74-vector-unit-stride-operations):

**Prototypes:**
``` C
vbool1_t __riscv_vlm_v_b1 (const uint8_t *base, size_t vl);
vbool2_t __riscv_vlm_v_b2 (const uint8_t *base, size_t vl);
vbool4_t __riscv_vlm_v_b4 (const uint8_t *base, size_t vl);
vbool8_t __riscv_vlm_v_b8 (const uint8_t *base, size_t vl);
vbool16_t __riscv_vlm_v_b16 (const uint8_t *base, size_t vl);
vbool32_t __riscv_vlm_v_b32 (const uint8_t *base, size_t vl);
vbool64_t __riscv_vlm_v_b64 (const uint8_t *base, size_t vl);
void __riscv_vsm (uint8_t *base, vbool1_t value, size_t vl);
void __riscv_vsm (uint8_t *base, vbool2_t value, size_t vl);
void __riscv_vsm (uint8_t *base, vbool4_t value, size_t vl);
void __riscv_vsm (uint8_t *base, vbool8_t value, size_t vl);
void __riscv_vsm (uint8_t *base, vbool16_t value, size_t vl);
void __riscv_vsm (uint8_t *base, vbool32_t value, size_t vl);
void __riscv_vsm (uint8_t *base, vbool64_t value, size_t vl);
```

### [Vector Mask-Register Logical Functions](../rvv-intrinsic-api.md#161-vector-mask-register-logical-operations):

**Prototypes:**
``` C
vbool1_t __riscv_vmand (vbool1_t op1, vbool1_t op2, size_t vl);
vbool2_t __riscv_vmand (vbool2_t op1, vbool2_t op2, size_t vl);
vbool4_t __riscv_vmand (vbool4_t op1, vbool4_t op2, size_t vl);
vbool8_t __riscv_vmand (vbool8_t op1, vbool8_t op2, size_t vl);
vbool16_t __riscv_vmand (vbool16_t op1, vbool16_t op2, size_t vl);
vbool32_t __riscv_vmand (vbool32_t op1, vbool32_t op2, size_t vl);
vbool64_t __riscv_vmand (vbool64_t op1, vbool64_t op2, size_t vl);
vbool1_t __riscv_vmnand (vbool1_t op1, vbool1_t op2, size_t vl);
vbool2_t __riscv_vmnand (vbool2_t op1, vbool2_t op2, size_t vl);
vbool4_t __riscv_vmnand (vbool4_t op1, vbool4_t op2, size_t vl);
vbool8_t __riscv_vmnand (vbool8_t op1, vbool8_t op2, size_t vl);
vbool16_t __riscv_vmnand (vbool16_t op1, vbool16_t op2, size_t vl);
vbool32_t __riscv_vmnand (vbool32_t op1, vbool32_t op2, size_t vl);
vbool64_t __riscv_vmnand (vbool64_t op1, vbool64_t op2, size_t vl);
vbool1_t __riscv_vmandn (vbool1_t op1, vbool1_t op2, size_t vl);
vbool2_t __riscv_vmandn (vbool2_t op1, vbool2_t op2, size_t vl);
vbool4_t __riscv_vmandn (vbool4_t op1, vbool4_t op2, size_t vl);
vbool8_t __riscv_vmandn (vbool8_t op1, vbool8_t op2, size_t vl);
vbool16_t __riscv_vmandn (vbool16_t op1, vbool16_t op2, size_t vl);
vbool32_t __riscv_vmandn (vbool32_t op1, vbool32_t op2, size_t vl);
vbool64_t __riscv_vmandn (vbool64_t op1, vbool64_t op2, size_t vl);
vbool1_t __riscv_vmxor (vbool1_t op1, vbool1_t op2, size_t vl);
vbool2_t __riscv_vmxor (vbool2_t op1, vbool2_t op2, size_t vl);
vbool4_t __riscv_vmxor (vbool4_t op1, vbool4_t op2, size_t vl);
vbool8_t __riscv_vmxor (vbool8_t op1, vbool8_t op2, size_t vl);
vbool16_t __riscv_vmxor (vbool16_t op1, vbool16_t op2, size_t vl);
vbool32_t __riscv_vmxor (vbool32_t op1, vbool32_t op2, size_t vl);
vbool64_t __riscv_vmxor (vbool64_t op1, vbool64_t op2, size_t vl);
vbool1_t __riscv_vmor (vbool1_t op1, vbool1_t op2, size_t vl);
vbool2_t __riscv_vmor (vbool2_t op1, vbool2_t op2, size_t vl);
vbool4_t __riscv_vmor (vbool4_t op1, vbool4_t op2, size_t vl);
vbool8_t __riscv_vmor (vbool8_t op1, vbool8_t op2, size_t vl);
vbool16_t __riscv_vmor (vbool16_t op1, vbool16_t op2, size_t vl);
vbool32_t __riscv_vmor (vbool32_t op1, vbool32_t op2, size_t vl);
vbool64_t __riscv_vmor (vbool64_t op1, vbool64_t op2, size_t vl);
vbool1_t __riscv_vmnor (vbool1_t op1, vbool1_t op2, size_t vl);
vbool2_t __riscv_vmnor (vbool2_t op1, vbool2_t op2, size_t vl);
vbool4_t __riscv_vmnor (vbool4_t op1, vbool4_t op2, size_t vl);
vbool8_t __riscv_vmnor (vbool8_t op1, vbool8_t op2, size_t vl);
vbool16_t __riscv_vmnor (vbool16_t op1, vbool16_t op2, size_t vl);
vbool32_t __riscv_vmnor (vbool32_t op1, vbool32_t op2, size_t vl);
vbool64_t __riscv_vmnor (vbool64_t op1, vbool64_t op2, size_t vl);
vbool1_t __riscv_vmorn (vbool1_t op1, vbool1_t op2, size_t vl);
vbool2_t __riscv_vmorn (vbool2_t op1, vbool2_t op2, size_t vl);
vbool4_t __riscv_vmorn (vbool4_t op1, vbool4_t op2, size_t vl);
vbool8_t __riscv_vmorn (vbool8_t op1, vbool8_t op2, size_t vl);
vbool16_t __riscv_vmorn (vbool16_t op1, vbool16_t op2, size_t vl);
vbool32_t __riscv_vmorn (vbool32_t op1, vbool32_t op2, size_t vl);
vbool64_t __riscv_vmorn (vbool64_t op1, vbool64_t op2, size_t vl);
vbool1_t __riscv_vmxnor (vbool1_t op1, vbool1_t op2, size_t vl);
vbool2_t __riscv_vmxnor (vbool2_t op1, vbool2_t op2, size_t vl);
vbool4_t __riscv_vmxnor (vbool4_t op1, vbool4_t op2, size_t vl);
vbool8_t __riscv_vmxnor (vbool8_t op1, vbool8_t op2, size_t vl);
vbool16_t __riscv_vmxnor (vbool16_t op1, vbool16_t op2, size_t vl);
vbool32_t __riscv_vmxnor (vbool32_t op1, vbool32_t op2, size_t vl);
vbool64_t __riscv_vmxnor (vbool64_t op1, vbool64_t op2, size_t vl);
vbool1_t __riscv_vmmv (vbool1_t op1, size_t vl);
vbool2_t __riscv_vmmv (vbool2_t op1, size_t vl);
vbool4_t __riscv_vmmv (vbool4_t op1, size_t vl);
vbool8_t __riscv_vmmv (vbool8_t op1, size_t vl);
vbool16_t __riscv_vmmv (vbool16_t op1, size_t vl);
vbool32_t __riscv_vmmv (vbool32_t op1, size_t vl);
vbool64_t __riscv_vmmv (vbool64_t op1, size_t vl);
vbool1_t __riscv_vmclr_m_b1 (size_t vl);
vbool2_t __riscv_vmclr_m_b2 (size_t vl);
vbool4_t __riscv_vmclr_m_b4 (size_t vl);
vbool8_t __riscv_vmclr_m_b8 (size_t vl);
vbool16_t __riscv_vmclr_m_b16 (size_t vl);
vbool32_t __riscv_vmclr_m_b32 (size_t vl);
vbool64_t __riscv_vmclr_m_b64 (size_t vl);
vbool1_t __riscv_vmset_m_b1 (size_t vl);
vbool2_t __riscv_vmset_m_b2 (size_t vl);
vbool4_t __riscv_vmset_m_b4 (size_t vl);
vbool8_t __riscv_vmset_m_b8 (size_t vl);
vbool16_t __riscv_vmset_m_b16 (size_t vl);
vbool32_t __riscv_vmset_m_b32 (size_t vl);
vbool64_t __riscv_vmset_m_b64 (size_t vl);
vbool1_t __riscv_vmnot (vbool1_t op1, size_t vl);
vbool2_t __riscv_vmnot (vbool2_t op1, size_t vl);
vbool4_t __riscv_vmnot (vbool4_t op1, size_t vl);
vbool8_t __riscv_vmnot (vbool8_t op1, size_t vl);
vbool16_t __riscv_vmnot (vbool16_t op1, size_t vl);
vbool32_t __riscv_vmnot (vbool32_t op1, size_t vl);
vbool64_t __riscv_vmnot (vbool64_t op1, size_t vl);
```

### [Vector count population in mask Functions](../rvv-intrinsic-api.md#162-vector-count-population-in-mask-vcpopm):

**Prototypes:**
``` C
unsigned long __riscv_vcpop (vbool1_t op1, size_t vl);
unsigned long __riscv_vcpop (vbool2_t op1, size_t vl);
unsigned long __riscv_vcpop (vbool4_t op1, size_t vl);
unsigned long __riscv_vcpop (vbool8_t op1, size_t vl);
unsigned long __riscv_vcpop (vbool16_t op1, size_t vl);
unsigned long __riscv_vcpop (vbool32_t op1, size_t vl);
unsigned long __riscv_vcpop (vbool64_t op1, size_t vl);
// masked functions
unsigned long __riscv_vcpop (vbool1_t mask, vbool1_t op1, size_t vl);
unsigned long __riscv_vcpop (vbool2_t mask, vbool2_t op1, size_t vl);
unsigned long __riscv_vcpop (vbool4_t mask, vbool4_t op1, size_t vl);
unsigned long __riscv_vcpop (vbool8_t mask, vbool8_t op1, size_t vl);
unsigned long __riscv_vcpop (vbool16_t mask, vbool16_t op1, size_t vl);
unsigned long __riscv_vcpop (vbool32_t mask, vbool32_t op1, size_t vl);
unsigned long __riscv_vcpop (vbool64_t mask, vbool64_t op1, size_t vl);
```

### [Find-first-set mask bit Functions](../rvv-intrinsic-api.md#163-vfirst-find-first-set-mask-bit):

**Prototypes:**
``` C
long __riscv_vfirst (vbool1_t op1, size_t vl);
long __riscv_vfirst (vbool2_t op1, size_t vl);
long __riscv_vfirst (vbool4_t op1, size_t vl);
long __riscv_vfirst (vbool8_t op1, size_t vl);
long __riscv_vfirst (vbool16_t op1, size_t vl);
long __riscv_vfirst (vbool32_t op1, size_t vl);
long __riscv_vfirst (vbool64_t op1, size_t vl);
// masked functions
long __riscv_vfirst (vbool1_t mask, vbool1_t op1, size_t vl);
long __riscv_vfirst (vbool2_t mask, vbool2_t op1, size_t vl);
long __riscv_vfirst (vbool4_t mask, vbool4_t op1, size_t vl);
long __riscv_vfirst (vbool8_t mask, vbool8_t op1, size_t vl);
long __riscv_vfirst (vbool16_t mask, vbool16_t op1, size_t vl);
long __riscv_vfirst (vbool32_t mask, vbool32_t op1, size_t vl);
long __riscv_vfirst (vbool64_t mask, vbool64_t op1, size_t vl);
```

### [Set-before-first mask bit Functions](../rvv-intrinsic-api.md#164-vmsbfm-set-before-first-mask-bit):

**Prototypes:**
``` C
vbool1_t __riscv_vmsbf (vbool1_t op1, size_t vl);
vbool2_t __riscv_vmsbf (vbool2_t op1, size_t vl);
vbool4_t __riscv_vmsbf (vbool4_t op1, size_t vl);
vbool8_t __riscv_vmsbf (vbool8_t op1, size_t vl);
vbool16_t __riscv_vmsbf (vbool16_t op1, size_t vl);
vbool32_t __riscv_vmsbf (vbool32_t op1, size_t vl);
vbool64_t __riscv_vmsbf (vbool64_t op1, size_t vl);
// masked functions
vbool1_t __riscv_vmsbf (vbool1_t mask, vbool1_t op1, size_t vl);
vbool2_t __riscv_vmsbf (vbool2_t mask, vbool2_t op1, size_t vl);
vbool4_t __riscv_vmsbf (vbool4_t mask, vbool4_t op1, size_t vl);
vbool8_t __riscv_vmsbf (vbool8_t mask, vbool8_t op1, size_t vl);
vbool16_t __riscv_vmsbf (vbool16_t mask, vbool16_t op1, size_t vl);
vbool32_t __riscv_vmsbf (vbool32_t mask, vbool32_t op1, size_t vl);
vbool64_t __riscv_vmsbf (vbool64_t mask, vbool64_t op1, size_t vl);
```

### [Set-including-first mask bit Functions](../rvv-intrinsic-api.md#165-vmsifm-set-including-first-mask-bit):

**Prototypes:**
``` C
vbool1_t __riscv_vmsif (vbool1_t op1, size_t vl);
vbool2_t __riscv_vmsif (vbool2_t op1, size_t vl);
vbool4_t __riscv_vmsif (vbool4_t op1, size_t vl);
vbool8_t __riscv_vmsif (vbool8_t op1, size_t vl);
vbool16_t __riscv_vmsif (vbool16_t op1, size_t vl);
vbool32_t __riscv_vmsif (vbool32_t op1, size_t vl);
vbool64_t __riscv_vmsif (vbool64_t op1, size_t vl);
// masked functions
vbool1_t __riscv_vmsif (vbool1_t mask, vbool1_t op1, size_t vl);
vbool2_t __riscv_vmsif (vbool2_t mask, vbool2_t op1, size_t vl);
vbool4_t __riscv_vmsif (vbool4_t mask, vbool4_t op1, size_t vl);
vbool8_t __riscv_vmsif (vbool8_t mask, vbool8_t op1, size_t vl);
vbool16_t __riscv_vmsif (vbool16_t mask, vbool16_t op1, size_t vl);
vbool32_t __riscv_vmsif (vbool32_t mask, vbool32_t op1, size_t vl);
vbool64_t __riscv_vmsif (vbool64_t mask, vbool64_t op1, size_t vl);
```

### [Set-only-first mask bit Functions](../rvv-intrinsic-api.md#166-vmsofm-set-only-first-mask-bit):

**Prototypes:**
``` C
vbool1_t __riscv_vmsof (vbool1_t op1, size_t vl);
vbool2_t __riscv_vmsof (vbool2_t op1, size_t vl);
vbool4_t __riscv_vmsof (vbool4_t op1, size_t vl);
vbool8_t __riscv_vmsof (vbool8_t op1, size_t vl);
vbool16_t __riscv_vmsof (vbool16_t op1, size_t vl);
vbool32_t __riscv_vmsof (vbool32_t op1, size_t vl);
vbool64_t __riscv_vmsof (vbool64_t op1, size_t vl);
// masked functions
vbool1_t __riscv_vmsof (vbool1_t mask, vbool1_t op1, size_t vl);
vbool2_t __riscv_vmsof (vbool2_t mask, vbool2_t op1, size_t vl);
vbool4_t __riscv_vmsof (vbool4_t mask, vbool4_t op1, size_t vl);
vbool8_t __riscv_vmsof (vbool8_t mask, vbool8_t op1, size_t vl);
vbool16_t __riscv_vmsof (vbool16_t mask, vbool16_t op1, size_t vl);
vbool32_t __riscv_vmsof (vbool32_t mask, vbool32_t op1, size_t vl);
vbool64_t __riscv_vmsof (vbool64_t mask, vbool64_t op1, size_t vl);
```

### [Vector Iota Functions](../rvv-intrinsic-api.md#168-vector-iota-operations):

**Prototypes:**
``` C
vuint8mf8_t __riscv_viota_m_u8mf8 (vbool64_t op1, size_t vl);
vuint8mf4_t __riscv_viota_m_u8mf4 (vbool32_t op1, size_t vl);
vuint8mf2_t __riscv_viota_m_u8mf2 (vbool16_t op1, size_t vl);
vuint8m1_t __riscv_viota_m_u8m1 (vbool8_t op1, size_t vl);
vuint8m2_t __riscv_viota_m_u8m2 (vbool4_t op1, size_t vl);
vuint8m4_t __riscv_viota_m_u8m4 (vbool2_t op1, size_t vl);
vuint8m8_t __riscv_viota_m_u8m8 (vbool1_t op1, size_t vl);
vuint16mf4_t __riscv_viota_m_u16mf4 (vbool64_t op1, size_t vl);
vuint16mf2_t __riscv_viota_m_u16mf2 (vbool32_t op1, size_t vl);
vuint16m1_t __riscv_viota_m_u16m1 (vbool16_t op1, size_t vl);
vuint16m2_t __riscv_viota_m_u16m2 (vbool8_t op1, size_t vl);
vuint16m4_t __riscv_viota_m_u16m4 (vbool4_t op1, size_t vl);
vuint16m8_t __riscv_viota_m_u16m8 (vbool2_t op1, size_t vl);
vuint32mf2_t __riscv_viota_m_u32mf2 (vbool64_t op1, size_t vl);
vuint32m1_t __riscv_viota_m_u32m1 (vbool32_t op1, size_t vl);
vuint32m2_t __riscv_viota_m_u32m2 (vbool16_t op1, size_t vl);
vuint32m4_t __riscv_viota_m_u32m4 (vbool8_t op1, size_t vl);
vuint32m8_t __riscv_viota_m_u32m8 (vbool4_t op1, size_t vl);
vuint64m1_t __riscv_viota_m_u64m1 (vbool64_t op1, size_t vl);
vuint64m2_t __riscv_viota_m_u64m2 (vbool32_t op1, size_t vl);
vuint64m4_t __riscv_viota_m_u64m4 (vbool16_t op1, size_t vl);
vuint64m8_t __riscv_viota_m_u64m8 (vbool8_t op1, size_t vl);
// masked functions
vuint8mf8_t __riscv_viota_m_u8mf8_m (vbool64_t mask, vbool64_t op1, size_t vl);
vuint8mf4_t __riscv_viota_m_u8mf4_m (vbool32_t mask, vbool32_t op1, size_t vl);
vuint8mf2_t __riscv_viota_m_u8mf2_m (vbool16_t mask, vbool16_t op1, size_t vl);
vuint8m1_t __riscv_viota_m_u8m1_m (vbool8_t mask, vbool8_t op1, size_t vl);
vuint8m2_t __riscv_viota_m_u8m2_m (vbool4_t mask, vbool4_t op1, size_t vl);
vuint8m4_t __riscv_viota_m_u8m4_m (vbool2_t mask, vbool2_t op1, size_t vl);
vuint8m8_t __riscv_viota_m_u8m8_m (vbool1_t mask, vbool1_t op1, size_t vl);
vuint16mf4_t __riscv_viota_m_u16mf4_m (vbool64_t mask, vbool64_t op1, size_t vl);
vuint16mf2_t __riscv_viota_m_u16mf2_m (vbool32_t mask, vbool32_t op1, size_t vl);
vuint16m1_t __riscv_viota_m_u16m1_m (vbool16_t mask, vbool16_t op1, size_t vl);
vuint16m2_t __riscv_viota_m_u16m2_m (vbool8_t mask, vbool8_t op1, size_t vl);
vuint16m4_t __riscv_viota_m_u16m4_m (vbool4_t mask, vbool4_t op1, size_t vl);
vuint16m8_t __riscv_viota_m_u16m8_m (vbool2_t mask, vbool2_t op1, size_t vl);
vuint32mf2_t __riscv_viota_m_u32mf2_m (vbool64_t mask, vbool64_t op1, size_t vl);
vuint32m1_t __riscv_viota_m_u32m1_m (vbool32_t mask, vbool32_t op1, size_t vl);
vuint32m2_t __riscv_viota_m_u32m2_m (vbool16_t mask, vbool16_t op1, size_t vl);
vuint32m4_t __riscv_viota_m_u32m4_m (vbool8_t mask, vbool8_t op1, size_t vl);
vuint32m8_t __riscv_viota_m_u32m8_m (vbool4_t mask, vbool4_t op1, size_t vl);
vuint64m1_t __riscv_viota_m_u64m1_m (vbool64_t mask, vbool64_t op1, size_t vl);
vuint64m2_t __riscv_viota_m_u64m2_m (vbool32_t mask, vbool32_t op1, size_t vl);
vuint64m4_t __riscv_viota_m_u64m4_m (vbool16_t mask, vbool16_t op1, size_t vl);
vuint64m8_t __riscv_viota_m_u64m8_m (vbool8_t mask, vbool8_t op1, size_t vl);
```

### [Vector Element Index Functions](../rvv-intrinsic-api.md#169-vector-element-index-operations):

**Prototypes:**
``` C
vuint8mf8_t __riscv_vid_v_u8mf8 (size_t vl);
vuint8mf4_t __riscv_vid_v_u8mf4 (size_t vl);
vuint8mf2_t __riscv_vid_v_u8mf2 (size_t vl);
vuint8m1_t __riscv_vid_v_u8m1 (size_t vl);
vuint8m2_t __riscv_vid_v_u8m2 (size_t vl);
vuint8m4_t __riscv_vid_v_u8m4 (size_t vl);
vuint8m8_t __riscv_vid_v_u8m8 (size_t vl);
vuint16mf4_t __riscv_vid_v_u16mf4 (size_t vl);
vuint16mf2_t __riscv_vid_v_u16mf2 (size_t vl);
vuint16m1_t __riscv_vid_v_u16m1 (size_t vl);
vuint16m2_t __riscv_vid_v_u16m2 (size_t vl);
vuint16m4_t __riscv_vid_v_u16m4 (size_t vl);
vuint16m8_t __riscv_vid_v_u16m8 (size_t vl);
vuint32mf2_t __riscv_vid_v_u32mf2 (size_t vl);
vuint32m1_t __riscv_vid_v_u32m1 (size_t vl);
vuint32m2_t __riscv_vid_v_u32m2 (size_t vl);
vuint32m4_t __riscv_vid_v_u32m4 (size_t vl);
vuint32m8_t __riscv_vid_v_u32m8 (size_t vl);
vuint64m1_t __riscv_vid_v_u64m1 (size_t vl);
vuint64m2_t __riscv_vid_v_u64m2 (size_t vl);
vuint64m4_t __riscv_vid_v_u64m4 (size_t vl);
vuint64m8_t __riscv_vid_v_u64m8 (size_t vl);
// masked functions
vuint8mf8_t __riscv_vid_v_u8mf8_m (vbool64_t mask, size_t vl);
vuint8mf4_t __riscv_vid_v_u8mf4_m (vbool32_t mask, size_t vl);
vuint8mf2_t __riscv_vid_v_u8mf2_m (vbool16_t mask, size_t vl);
vuint8m1_t __riscv_vid_v_u8m1_m (vbool8_t mask, size_t vl);
vuint8m2_t __riscv_vid_v_u8m2_m (vbool4_t mask, size_t vl);
vuint8m4_t __riscv_vid_v_u8m4_m (vbool2_t mask, size_t vl);
vuint8m8_t __riscv_vid_v_u8m8_m (vbool1_t mask, size_t vl);
vuint16mf4_t __riscv_vid_v_u16mf4_m (vbool64_t mask, size_t vl);
vuint16mf2_t __riscv_vid_v_u16mf2_m (vbool32_t mask, size_t vl);
vuint16m1_t __riscv_vid_v_u16m1_m (vbool16_t mask, size_t vl);
vuint16m2_t __riscv_vid_v_u16m2_m (vbool8_t mask, size_t vl);
vuint16m4_t __riscv_vid_v_u16m4_m (vbool4_t mask, size_t vl);
vuint16m8_t __riscv_vid_v_u16m8_m (vbool2_t mask, size_t vl);
vuint32mf2_t __riscv_vid_v_u32mf2_m (vbool64_t mask, size_t vl);
vuint32m1_t __riscv_vid_v_u32m1_m (vbool32_t mask, size_t vl);
vuint32m2_t __riscv_vid_v_u32m2_m (vbool16_t mask, size_t vl);
vuint32m4_t __riscv_vid_v_u32m4_m (vbool8_t mask, size_t vl);
vuint32m8_t __riscv_vid_v_u32m8_m (vbool4_t mask, size_t vl);
vuint64m1_t __riscv_vid_v_u64m1_m (vbool64_t mask, size_t vl);
vuint64m2_t __riscv_vid_v_u64m2_m (vbool32_t mask, size_t vl);
vuint64m4_t __riscv_vid_v_u64m4_m (vbool16_t mask, size_t vl);
vuint64m8_t __riscv_vid_v_u64m8_m (vbool8_t mask, size_t vl);
```
