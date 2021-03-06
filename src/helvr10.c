#include "types.h"
#include "fonts.h"

static const u16 helvR10Data[] = {
    0x0000, 0x8000, 0x8000, 0x0000, 0x8000,
    0x8000, 0x8000, 0x8000, 0x8000, 0x8000,
    0x8000, 0x8000, 0xA000, 0xA000, 0xA000,
    0x5000, 0x5000, 0x5000, 0xFC00, 0x2800,
    0x2800, 0x7E00, 0x1400, 0x1400, 0x1400,
    0x1000, 0x1000, 0x7C00, 0x9200, 0x9200,
    0x1200, 0x1400, 0x3800, 0x5000, 0x9000,
    0x9200, 0x9200, 0x7C00, 0x1000, 0x21C0,
    0x1220, 0x1220, 0x09C0, 0x0800, 0x0400,
    0x0200, 0x7200, 0x8900, 0x8900, 0x7080,
    0x7100, 0x8A00, 0x8400, 0x8A00, 0x5200,
    0x2000, 0x3000, 0x4800, 0x4800, 0x3000,
    0x8000, 0x4000, 0xC000, 0x2000, 0x4000,
    0x4000, 0x8000, 0x8000, 0x8000, 0x8000,
    0x8000, 0x8000, 0x8000, 0x8000, 0x4000,
    0x4000, 0x2000, 0x8000, 0x4000, 0x4000,
    0x2000, 0x2000, 0x2000, 0x2000, 0x2000,
    0x2000, 0x2000, 0x2000, 0x4000, 0x4000,
    0x8000, 0x2000, 0xA800, 0x7000, 0xA800,
    0x2000, 0x1000, 0x1000, 0x1000, 0xFE00,
    0x1000, 0x1000, 0x1000, 0x8000, 0x4000,
    0x4000, 0x4000, 0xFE00, 0x8000, 0x8000,
    0x8000, 0x8000, 0x8000, 0x4000, 0x4000,
    0x4000, 0x2000, 0x2000, 0x2000, 0x1000,
    0x1000, 0x7800, 0x8400, 0x8400, 0x8400,
    0x8400, 0x8400, 0x8400, 0x8400, 0x8400,
    0x8400, 0x7800, 0x2000, 0x2000, 0x2000,
    0x2000, 0x2000, 0x2000, 0x2000, 0x2000,
    0x2000, 0xE000, 0x2000, 0xFC00, 0x8000,
    0x8000, 0x4000, 0x2000, 0x1000, 0x0800,
    0x0400, 0x8400, 0x8400, 0x7800, 0x7800,
    0x8400, 0x8400, 0x0400, 0x0400, 0x3800,
    0x0400, 0x0400, 0x8400, 0x8400, 0x7800,
    0x0400, 0x0400, 0x0400, 0xFE00, 0x8400,
    0x8400, 0x4400, 0x2400, 0x1400, 0x0C00,
    0x0400, 0x7800, 0x8400, 0x8400, 0x0400,
    0x0400, 0x0400, 0xF800, 0x8000, 0x8000,
    0x8000, 0xFC00, 0x7800, 0x8400, 0x8400,
    0x8400, 0x8400, 0xC400, 0xB800, 0x8000,
    0x8000, 0x8400, 0x7800, 0x4000, 0x4000,
    0x4000, 0x2000, 0x2000, 0x1000, 0x1000,
    0x0800, 0x0800, 0x0400, 0xFC00, 0x7800,
    0x8400, 0x8400, 0x8400, 0x8400, 0x7800,
    0x8400, 0x8400, 0x8400, 0x8400, 0x7800,
    0x7800, 0x8400, 0x8400, 0x0400, 0x0400,
    0x7C00, 0x8400, 0x8400, 0x8400, 0x8400,
    0x7800, 0x8000, 0x8000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x8000, 0x8000, 0x8000,
    0x4000, 0x4000, 0x4000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x4000, 0x4000, 0x0C00,
    0x3000, 0xC000, 0x3000, 0x0C00, 0xFC00,
    0x0000, 0xFC00, 0xC000, 0x3000, 0x0C00,
    0x3000, 0xC000, 0x2000, 0x2000, 0x0000,
    0x2000, 0x1000, 0x0800, 0x0400, 0x8400,
    0x8400, 0xCC00, 0x3000, 0x1F00, 0x6080,
    0x4000, 0x8D80, 0x9340, 0x9120, 0x9120,
    0x8920, 0x46A0, 0x4020, 0x30C0, 0x0F00,
    0x8080, 0x8080, 0x4100, 0x7F00, 0x4100,
    0x2200, 0x2200, 0x1400, 0x1400, 0x1C00,
    0x0800, 0xFC00, 0x8600, 0x8200, 0x8200,
    0x8400, 0xF800, 0x8400, 0x8200, 0x8200,
    0x8600, 0xFC00, 0x1C00, 0x6300, 0x4100,
    0x8000, 0x8000, 0x8000, 0x8000, 0x8000,
    0x4100, 0x6300, 0x1C00, 0xF800, 0x8600,
    0x8200, 0x8100, 0x8100, 0x8100, 0x8100,
    0x8100, 0x8200, 0x8600, 0xF800, 0xFE00,
    0x8000, 0x8000, 0x8000, 0x8000, 0xFC00,
    0x8000, 0x8000, 0x8000, 0x8000, 0xFE00,
    0x8000, 0x8000, 0x8000, 0x8000, 0x8000,
    0xFC00, 0x8000, 0x8000, 0x8000, 0x8000,
    0xFE00, 0x1C80, 0x6380, 0x4080, 0x8080,
    0x8080, 0x8780, 0x8000, 0x8000, 0x4080,
    0x6180, 0x1E00, 0x8100, 0x8100, 0x8100,
    0x8100, 0x8100, 0xFF00, 0x8100, 0x8100,
    0x8100, 0x8100, 0x8100, 0x8000, 0x8000,
    0x8000, 0x8000, 0x8000, 0x8000, 0x8000,
    0x8000, 0x8000, 0x8000, 0x8000, 0x7800,
    0x8400, 0x8400, 0x0400, 0x0400, 0x0400,
    0x0400, 0x0400, 0x0400, 0x0400, 0x0400,
    0x8100, 0x8200, 0x8400, 0x8800, 0x9000,
    0xE000, 0xA000, 0x9000, 0x8800, 0x8400,
    0x8200, 0xFC00, 0x8000, 0x8000, 0x8000,
    0x8000, 0x8000, 0x8000, 0x8000, 0x8000,
    0x8000, 0x8000, 0x8420, 0x8420, 0x8A20,
    0x8A20, 0x9120, 0x9120, 0xA0A0, 0xA0A0,
    0xC060, 0xC060, 0x8020, 0x8300, 0x8300,
    0x8500, 0x8500, 0x8900, 0x8900, 0x9100,
    0x9100, 0xA100, 0xA100, 0xC100, 0x1C00,
    0x6300, 0x4100, 0x8080, 0x8080, 0x8080,
    0x8080, 0x8080, 0x4100, 0x6300, 0x1C00,
    0x8000, 0x8000, 0x8000, 0x8000, 0x8000,
    0xFC00, 0x8600, 0x8200, 0x8200, 0x8600,
    0xFC00, 0x1C80, 0x6300, 0x4300, 0x8480,
    0x8880, 0x8080, 0x8080, 0x8080, 0x4100,
    0x6300, 0x1C00, 0x8100, 0x8100, 0x8100,
    0x8100, 0x8200, 0xFC00, 0x8200, 0x8100,
    0x8100, 0x8300, 0xFE00, 0x3800, 0xC600,
    0x8200, 0x0200, 0x0600, 0x1800, 0x6000,
    0x8000, 0x8200, 0xC600, 0x3800, 0x0800,
    0x0800, 0x0800, 0x0800, 0x0800, 0x0800,
    0x0800, 0x0800, 0x0800, 0x0800, 0xFF80,
    0x3C00, 0x4200, 0x8100, 0x8100, 0x8100,
    0x8100, 0x8100, 0x8100, 0x8100, 0x8100,
    0x8100, 0x0800, 0x0800, 0x1400, 0x1400,
    0x2200, 0x2200, 0x6300, 0x4100, 0x4100,
    0x8080, 0x8080, 0x1040, 0x1040, 0x28A0,
    0x28A0, 0x28A0, 0x4510, 0x4510, 0x4510,
    0x8508, 0x8208, 0x8208, 0x8080, 0x4100,
    0x4100, 0x2200, 0x1400, 0x0800, 0x0800,
    0x1400, 0x2200, 0x4100, 0x8080, 0x0800,
    0x0800, 0x0800, 0x0800, 0x1C00, 0x1400,
    0x2200, 0x2200, 0x4100, 0xC180, 0x8080,
    0xFE00, 0x8000, 0x4000, 0x6000, 0x2000,
    0x1000, 0x1800, 0x0800, 0x0400, 0x0200,
    0xFE00, 0xE000, 0x8000, 0x8000, 0x8000,
    0x8000, 0x8000, 0x8000, 0x8000, 0x8000,
    0x8000, 0x8000, 0x8000, 0x8000, 0xE000,
    0x1000, 0x1000, 0x1000, 0x2000, 0x2000,
    0x2000, 0x4000, 0x4000, 0x4000, 0x8000,
    0x8000, 0xE000, 0x2000, 0x2000, 0x2000,
    0x2000, 0x2000, 0x2000, 0x2000, 0x2000,
    0x2000, 0x2000, 0x2000, 0x2000, 0xE000,
    0x8800, 0x8800, 0x5000, 0x5000, 0x2000,
    0xFF00, 0xC000, 0x8000, 0x4000, 0x7600,
    0xCC00, 0x8400, 0xC400, 0x7C00, 0x0400,
    0xCC00, 0x7800, 0xB800, 0xCC00, 0x8400,
    0x8400, 0x8400, 0x8400, 0xCC00, 0xB800,
    0x8000, 0x8000, 0x8000, 0x7800, 0xCC00,
    0x8400, 0x8000, 0x8000, 0x8000, 0xCC00,
    0x7800, 0x7400, 0xCC00, 0x8400, 0x8400,
    0x8400, 0x8400, 0xCC00, 0x7400, 0x0400,
    0x0400, 0x0400, 0x7800, 0xCC00, 0x8000,
    0x8000, 0xFC00, 0x8400, 0xCC00, 0x7800,
    0x4000, 0x4000, 0x4000, 0x4000, 0x4000,
    0x4000, 0x4000, 0xE000, 0x4000, 0x4000,
    0x3000, 0x7800, 0xCC00, 0x0400, 0x7400,
    0xCC00, 0x8400, 0x8400, 0x8400, 0x8400,
    0xCC00, 0x7400, 0x8400, 0x8400, 0x8400,
    0x8400, 0x8400, 0x8400, 0xCC00, 0xB800,
    0x8000, 0x8000, 0x8000, 0x8000, 0x8000,
    0x8000, 0x8000, 0x8000, 0x8000, 0x8000,
    0x8000, 0x0000, 0x8000, 0x8000, 0xC000,
    0x2000, 0x2000, 0x2000, 0x2000, 0x2000,
    0x2000, 0x2000, 0x2000, 0x2000, 0x2000,
    0x0000, 0x2000, 0x2000, 0x8400, 0x8800,
    0x9000, 0xA000, 0xC000, 0xA000, 0x9000,
    0x8800, 0x8000, 0x8000, 0x8000, 0x8000,
    0x8000, 0x8000, 0x8000, 0x8000, 0x8000,
    0x8000, 0x8000, 0x8000, 0x8000, 0x8000,
    0x8880, 0x8880, 0x8880, 0x8880, 0x8880,
    0x8880, 0xCC80, 0xB300, 0x8400, 0x8400,
    0x8400, 0x8400, 0x8400, 0x8400, 0xCC00,
    0xB800, 0x7800, 0xCC00, 0x8400, 0x8400,
    0x8400, 0x8400, 0xCC00, 0x7800, 0x8000,
    0x8000, 0x8000, 0xB800, 0xCC00, 0x8400,
    0x8400, 0x8400, 0x8400, 0xCC00, 0xB800,
    0x0400, 0x0400, 0x0400, 0x7400, 0xCC00,
    0x8400, 0x8400, 0x8400, 0x8400, 0xCC00,
    0x7400, 0x8000, 0x8000, 0x8000, 0x8000,
    0x8000, 0x8000, 0xC000, 0xB000, 0x7000,
    0x8800, 0x0800, 0x1800, 0x7000, 0xC000,
    0x8800, 0x7000, 0x3000, 0x4000, 0x4000,
    0x4000, 0x4000, 0x4000, 0x4000, 0xE000,
    0x4000, 0x4000, 0x7400, 0xCC00, 0x8400,
    0x8400, 0x8400, 0x8400, 0x8400, 0x8400,
    0x1000, 0x2800, 0x2800, 0x4400, 0x4400,
    0x4400, 0x8200, 0x8200, 0x2200, 0x2200,
    0x5500, 0x4900, 0x4900, 0x8880, 0x8880,
    0x8880, 0xC600, 0x4400, 0x2800, 0x1000,
    0x1000, 0x2800, 0x4400, 0xC600, 0x6000,
    0x3000, 0x1000, 0x1000, 0x1800, 0x2800,
    0x2400, 0x4400, 0x4400, 0xC200, 0x8200,
    0xFC00, 0x8000, 0x4000, 0x2000, 0x1000,
    0x0800, 0x0400, 0xFC00, 0x1800, 0x2000,
    0x2000, 0x2000, 0x2000, 0x2000, 0x4000,
    0x8000, 0x4000, 0x2000, 0x2000, 0x2000,
    0x2000, 0x1800, 0x8000, 0x8000, 0x8000,
    0x8000, 0x8000, 0x8000, 0x8000, 0x8000,
    0x8000, 0x8000, 0x8000, 0x8000, 0x8000,
    0x8000, 0xC000, 0x2000, 0x2000, 0x2000,
    0x2000, 0x2000, 0x1000, 0x0800, 0x1000,
    0x2000, 0x2000, 0x2000, 0x2000, 0xC000,
    0x9800, 0xB400, 0x6400, 0x0000, 0x0000,
    0x0000
};

static const fontchar_t helvR10Info[] = {
    { 0x000,  1,  1,  0,  0,  4 },
    { 0x001,  1, 11,  2,  0,  4 },
    { 0x00C,  3,  3,  1,  8,  5 },
    { 0x00F,  7, 10,  0,  0,  8 },
    { 0x019,  7, 14,  0, -2,  8 },
    { 0x027, 11, 11,  0,  0, 12 },
    { 0x032,  8, 10,  1,  0, 10 },
    { 0x03C,  2,  3,  1,  8,  3 },
    { 0x03F,  3, 14,  1, -3,  5 },
    { 0x04D,  3, 14,  1, -3,  5 },
    { 0x05B,  5,  5,  1,  6,  7 },
    { 0x060,  7,  7,  1,  1,  9 },
    { 0x067,  2,  4,  0, -2,  3 },
    { 0x06B,  7,  1,  1,  4,  9 },
    { 0x06C,  1,  2,  1,  0,  3 },
    { 0x06E,  4, 11,  0,  0,  4 },
    { 0x079,  6, 11,  1,  0,  8 },
    { 0x084,  3, 11,  2,  0,  8 },
    { 0x08F,  6, 11,  1,  0,  8 },
    { 0x09A,  6, 11,  1,  0,  8 },
    { 0x0A5,  7, 11,  1,  0,  8 },
    { 0x0B0,  6, 11,  1,  0,  8 },
    { 0x0BB,  6, 11,  1,  0,  8 },
    { 0x0C6,  6, 11,  1,  0,  8 },
    { 0x0D1,  6, 11,  1,  0,  8 },
    { 0x0DC,  6, 11,  1,  0,  8 },
    { 0x0E7,  1,  8,  1,  0,  3 },
    { 0x0EF,  2, 10,  0, -2,  4 },
    { 0x0F9,  6,  5,  1,  2,  8 },
    { 0x0FE,  6,  3,  1,  3,  9 },
    { 0x101,  6,  5,  1,  2,  8 },
    { 0x106,  6, 11,  1,  0,  8 },
    { 0x111, 11, 12,  1, -1, 13 },
    { 0x11D,  9, 11,  0,  0,  9 },
    { 0x128,  7, 11,  1,  0,  9 },
    { 0x133,  8, 11,  1,  0, 10 },
    { 0x13E,  8, 11,  1,  0, 10 },
    { 0x149,  7, 11,  1,  0,  9 },
    { 0x154,  7, 11,  1,  0,  8 },
    { 0x15F,  9, 11,  1,  0, 11 },
    { 0x16A,  8, 11,  1,  0, 10 },
    { 0x175,  1, 11,  2,  0,  4 },
    { 0x180,  6, 11,  0,  0,  7 },
    { 0x18B,  8, 11,  1,  0,  9 },
    { 0x196,  6, 11,  2,  0,  8 },
    { 0x1A1, 11, 11,  0,  0, 12 },
    { 0x1AC,  8, 11,  1,  0, 10 },
    { 0x1B7,  9, 11,  1,  0, 11 },
    { 0x1C2,  7, 11,  1,  0,  9 },
    { 0x1CD,  9, 11,  1,  0, 11 },
    { 0x1D8,  8, 11,  1,  0, 10 },
    { 0x1E3,  7, 11,  1,  0,  9 },
    { 0x1EE,  9, 11,  0,  0,  9 },
    { 0x1F9,  8, 11,  1,  0, 10 },
    { 0x204,  9, 11,  0,  0,  9 },
    { 0x20F, 13, 11,  0,  0, 13 },
    { 0x21A,  9, 11,  0,  0,  9 },
    { 0x225,  9, 11,  0,  0,  9 },
    { 0x230,  7, 11,  1,  0,  9 },
    { 0x23B,  3, 14,  1, -3,  4 },
    { 0x249,  4, 11,  0,  0,  4 },
    { 0x254,  3, 14,  0, -3,  4 },
    { 0x262,  5,  5,  1,  6,  7 },
    { 0x267,  8,  1,  0, -3,  8 },
    { 0x268,  2,  3,  0,  8,  3 },
    { 0x26B,  7,  8,  1,  0,  8 },
    { 0x273,  6, 11,  1,  0,  7 },
    { 0x27E,  6,  8,  1,  0,  7 },
    { 0x286,  6, 11,  1,  0,  8 },
    { 0x291,  6,  8,  1,  0,  8 },
    { 0x299,  4, 11,  0,  0,  4 },
    { 0x2A4,  6, 11,  1, -3,  8 },
    { 0x2AF,  6, 11,  1,  0,  8 },
    { 0x2BA,  1, 11,  1,  0,  3 },
    { 0x2C5,  3, 14, -1, -3,  3 },
    { 0x2D3,  6, 11,  1,  0,  7 },
    { 0x2DE,  1, 11,  1,  0,  3 },
    { 0x2E9,  9,  8,  1,  0, 11 },
    { 0x2F1,  6,  8,  1,  0,  8 },
    { 0x2F9,  6,  8,  1,  0,  8 },
    { 0x301,  6, 11,  1, -3,  8 },
    { 0x30C,  6, 11,  1, -3,  8 },
    { 0x317,  4,  8,  1,  0,  5 },
    { 0x31F,  5,  8,  1,  0,  7 },
    { 0x327,  4, 10,  0,  0,  4 },
    { 0x331,  6,  8,  1,  0,  7 },
    { 0x339,  7,  8,  0,  0,  7 },
    { 0x341,  9,  8,  0,  0, 10 },
    { 0x349,  7,  8,  0,  0,  7 },
    { 0x351,  7, 11,  0, -3,  7 },
    { 0x35C,  6,  8,  0,  0,  7 },
    { 0x364,  5, 14,  0, -3,  5 },
    { 0x372,  1, 14,  1, -3,  3 },
    { 0x380,  5, 14,  0, -3,  5 },
    { 0x38E,  6,  3,  1,  3,  8 }
};

const font_t helvR10 = {
    helvR10Data,                                  /* data          */
    helvR10Info,                                  /* info          */
    sizeof(helvR10Data) / sizeof(helvR10Data[0]), /* dataLen       */
    sizeof(helvR10Info) / sizeof(helvR10Info[0]), /* infoLen       */
    14,                                           /* fontHeight    */
    3                                             /* fontDescender */
};
