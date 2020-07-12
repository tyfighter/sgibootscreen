#ifndef __BS_PRIV_H__
#define __BS_PRIV_H__

typedef struct {
    u8 info;
    u16 width, height;
} bootscreen_t;

typedef struct {
    bootscreen_t base;
    const u8 *logo;
    const u8 *shadow;
    u16 logo_width, logo_height;
} bootscreen_new_t;

#pragma pack(push, 1)
#if defined(_MSC_VER)
#define _static_assert static_assert
#elif defined (__GNUC__)
#define _static_assert _Static_assert
#else
/* FIXME? */
#endif

typedef struct {
    unsigned char b, g, r;
} bgr_t;
_static_assert(sizeof(bgr_t) == 3, "sizeof(bgr_t) != 3");

typedef struct {
    unsigned short type;
    unsigned int   size;
    unsigned short reserved1;
    unsigned short reserved2;
    unsigned int   offset_bits;
} bmp_file_header_t;
_static_assert(sizeof(bmp_file_header_t) == 14, "sizeof(bmp_file_header_t) != 14");

typedef struct {
    unsigned int   size;
    int            width;
    int            height;
    unsigned short planes;
    unsigned short bit_count;
    unsigned int   compression;
    unsigned int   size_image;
    int            x_pels_per_meter;
    int            y_pels_per_meter;
    unsigned int   clr_used;
    unsigned int   clr_important;
} bmp_info_header_t;
_static_assert(sizeof(bmp_info_header_t) == 40, "sizeof(bmp_info_header_t) != 40");

typedef struct {
    bmp_file_header_t fh;
    bmp_info_header_t ih;
} bmp_header_t;
_static_assert(sizeof(bmp_header_t) == 54, "sizeof(bmp_header_t) != 54");
#pragma pack(pop)

#if defined(_MSC_VER)
#pragma intrinsic(_BitScanForward)
#pragma intrinsic(_BitScanReverse)
#define __BitScanForward(__Index, __Mask) _BitScanForward((unsigned long *)__Index, __Mask)
#define __BitScanReverse(__Index, __Mask) _BitScanReverse((unsigned long *)__Index, __Mask)
#elif defined (__GNUC__)
#define __BitScanForward(__Index, __Mask) *((__Index)) = __builtin_ctz((__Mask))
#define __BitScanReverse(__Index, __Mask) *((__Index)) = (31 - __builtin_clz((__Mask)))
#else
/* FIXME? */
#endif

/*
 * diffdiv2
 *   Subtracting integers without triggering an overflow is
 *   pretty common, in this case mostly on MIPS but also
 *   applies to other architectures.
 */
static inline s32 diffdiv2(s32 a, s32 b)
{
    u32 diff = *(u32 *)&a - *(u32 *)&b;
    diff += (diff >> 31);
    return ((*(s32 *)&diff) >> 1);
}

static inline unsigned long bsfLoopFirst(unsigned long *pIndex, unsigned long *pIndexMask, unsigned long InitialMask)
{
    __BitScanForward(pIndex, InitialMask);
    *pIndexMask = (1ul << (*pIndex));
    return InitialMask;
}

static inline void bsfLoopNext(unsigned long *pIndex, unsigned long *pIndexMask, unsigned long *pMask)
{
    *pMask ^= *pIndexMask;
    __BitScanForward(pIndex, *pMask);
    *pIndexMask = (1ul << (*pIndex));
}

static inline unsigned long bsrLoopFirst(unsigned long *pIndex, unsigned long *pIndexMask, unsigned long InitialMask)
{
    __BitScanReverse(pIndex, InitialMask);
    *pIndexMask = (1ul << (*pIndex));
    return InitialMask;
}

static inline void bsrLoopNext(unsigned long *pIndex, unsigned long *pIndexMask, unsigned long *pMask)
{
    *pMask = (*pMask) ^ (*pIndexMask);
    __BitScanReverse(pIndex, *pMask);
    *pIndexMask = (1ul << (*pIndex));
}

#define BSF_LOOP(__InitialMask, __Index, __IndexMask, __LoopMask) for (unsigned long __Index, __IndexMask, __LoopMask = bsfLoopFirst(&__Index, &__IndexMask, __InitialMask); __LoopMask; bsfLoopNext(&__Index, &__IndexMask, &__LoopMask))
#define BSR_LOOP(__InitialMask, __Index, __IndexMask, __LoopMask) for (unsigned long __Index, __IndexMask, __LoopMask = bsrLoopFirst(&__Index, &__IndexMask, __InitialMask); __LoopMask; bsrLoopNext(&__Index, &__IndexMask, &__LoopMask))

#endif /* __BS_PRIV_H__ */
